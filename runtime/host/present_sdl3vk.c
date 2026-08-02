/* runtime/host/present_sdl3vk.c -- SDL3 window, Vulkan swapchain, SDL input.
 *
 * Per frame: convert the guest frame buffer to BGRA8 in a persistently-mapped
 * staging buffer, copy to a device image, blit to the swapchain letterboxed.
 * A presenter, not a renderer. One frame in flight (fence after submit) --
 * presentation cost is trivial and it keeps recreation/shutdown simple.
 */

#include "present.h"
#include "settings.h"
#include "ui_overlay.h"
#include "../gpu/ge.h"

#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#include <vulkan/vulkan.h>

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PSP_W 480
#define PSP_H 272

static SDL_Window      *s_win;
static SDL_Gamepad     *s_pad;
static VkInstance       s_inst;
static VkSurfaceKHR     s_surf;
static VkPhysicalDevice s_pdev;
static VkDevice         s_dev;
static uint32_t         s_qfam;
static VkQueue          s_queue;
static VkCommandPool    s_pool;
static VkCommandBuffer  s_cmd;
static VkFence          s_fence;
static VkSemaphore      s_sem_acq, s_sem_done;
static VkDebugUtilsMessengerEXT s_dbg;

static VkSwapchainKHR s_swap;
static VkFormat       s_swap_fmt;
static VkExtent2D     s_swap_ext;
static uint32_t       s_swap_n;
static VkImage        s_swap_img[8];

static VkBuffer       s_staging;
static VkDeviceMemory s_staging_mem;
static void          *s_staging_map;
static VkImage        s_fbimg;
static VkDeviceMemory s_fbimg_mem;

static u32 s_buttons;
static u8  s_lx = 128, s_ly = 128;
/* Beyond the PSP's own controls: see present.h. */
static u8    s_rx = 128, s_ry = 128;
static float s_tl, s_tr;
static u32   s_aux;
static int s_ready;
/* Read by the GPU backend's pipeline builder (see ge_gpu_vk.c). */
float g_vk_max_aniso = 1.0f;

#define VK_TRY(expr) do { VkResult vr_ = (expr); if (vr_ != VK_SUCCESS) {   \
    fprintf(stderr, "[present] %s failed: %d\n", #expr, (int)vr_);          \
    return 0; } } while (0)

static uint32_t find_mem_type(uint32_t bits, VkMemoryPropertyFlags want)
{
    VkPhysicalDeviceMemoryProperties mp;
    uint32_t i;
    vkGetPhysicalDeviceMemoryProperties(s_pdev, &mp);
    for (i = 0; i < mp.memoryTypeCount; i++)
        if ((bits & (1u << i))
            && (mp.memoryTypes[i].propertyFlags & want) == want)
            return i;
    return UINT32_MAX;
}

/* ---- validation layers (SR_VKVALIDATE=1) --------------------------------
 *
 * Off by default: the layer costs a large fraction of the frame. It exists
 * because the GPU backend runs work asynchronously with the CPU, and the two
 * mistakes that shape makes -- writing a buffer the GPU is still reading, and
 * freeing an object an in-flight command buffer still references -- are
 * invisible to every automated check we have. Synchronization validation
 * names both instantly. Turn it on for any change to submission or resource
 * lifetime in ge_gpu_vk.c. */
static int s_validate;

static VKAPI_ATTR VkBool32 VKAPI_CALL debug_cb(
    VkDebugUtilsMessageSeverityFlagBitsEXT sev,
    VkDebugUtilsMessageTypeFlagsEXT types,
    const VkDebugUtilsMessengerCallbackDataEXT *data,
    void *user)
{
    (void)types;
    (void)user;
    fprintf(stderr, "[vk %s] %s\n",
            (sev & VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT) ? "error"
                                                                  : "warn",
            data && data->pMessage ? data->pMessage : "(no message)");
    fflush(stderr);
    return VK_FALSE;
}

static int have_layer(const char *name)
{
    VkLayerProperties props[64];
    uint32_t n = 64, i;
    VkResult r = vkEnumerateInstanceLayerProperties(&n, props);
    if (r != VK_SUCCESS && r != VK_INCOMPLETE) return 0;
    for (i = 0; i < n; i++)
        if (!strcmp(props[i].layerName, name)) return 1;
    return 0;
}

static void debug_messenger_create(void)
{
    PFN_vkCreateDebugUtilsMessengerEXT mk;
    VkDebugUtilsMessengerCreateInfoEXT dmi;

    mk = (PFN_vkCreateDebugUtilsMessengerEXT)
         vkGetInstanceProcAddr(s_inst, "vkCreateDebugUtilsMessengerEXT");
    if (!mk) return;
    memset(&dmi, 0, sizeof dmi);
    dmi.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
    dmi.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT
                        | VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
    dmi.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT
                    | VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT
                    | VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
    dmi.pfnUserCallback = debug_cb;
    mk(s_inst, &dmi, NULL, &s_dbg);
}

static int create_swapchain(void)
{
    VkSurfaceCapabilitiesKHR caps;
    VkSurfaceFormatKHR fmts[32], pick;
    uint32_t nf = 32, n;
    VkExtent2D ext;
    VkSwapchainKHR old;
    VkSwapchainCreateInfoKHR sci;
    uint32_t i;

    VK_TRY(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(s_pdev, s_surf, &caps));
    VK_TRY(vkGetPhysicalDeviceSurfaceFormatsKHR(s_pdev, s_surf, &nf, fmts));

    /* Prefer BGRA8 (the byte order we convert into) to avoid a swizzle. */
    pick = fmts[0];
    for (i = 0; i < nf; i++)
        if (fmts[i].format == VK_FORMAT_B8G8R8A8_UNORM) { pick = fmts[i]; break; }
    s_swap_fmt = pick.format;

    ext = caps.currentExtent;
    if (ext.width == UINT32_MAX) {      /* the surface lets us choose */
        int w = 0, h = 0;
        SDL_GetWindowSizeInPixels(s_win, &w, &h);
        ext.width = (uint32_t)w;
        ext.height = (uint32_t)h;
    }
    if (ext.width  < caps.minImageExtent.width)  ext.width  = caps.minImageExtent.width;
    if (ext.width  > caps.maxImageExtent.width)  ext.width  = caps.maxImageExtent.width;
    if (ext.height < caps.minImageExtent.height) ext.height = caps.minImageExtent.height;
    if (ext.height > caps.maxImageExtent.height) ext.height = caps.maxImageExtent.height;
    if (!ext.width || !ext.height) return 0;      /* minimised */
    s_swap_ext = ext;

    n = caps.minImageCount + 1;
    if (caps.maxImageCount && n > caps.maxImageCount) n = caps.maxImageCount;

    old = s_swap;
    memset(&sci, 0, sizeof sci);
    sci.sType            = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    sci.surface          = s_surf;
    sci.minImageCount    = n;
    sci.imageFormat      = pick.format;
    sci.imageColorSpace  = pick.colorSpace;
    sci.imageExtent      = ext;
    sci.imageArrayLayers = 1;
    sci.imageUsage       = VK_IMAGE_USAGE_TRANSFER_DST_BIT
                         | VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    sci.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    sci.preTransform     = caps.currentTransform;
    sci.compositeAlpha   = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    /* Pacing belongs to the emulated vblank clock, not the compositor, so the
     * default asks for MAILBOX (never blocks, never tears). FIFO is always
     * supported and is the fallback for whatever the player picked. */
    {
        VkPresentModeKHR want = VK_PRESENT_MODE_FIFO_KHR;
        VkPresentModeKHR pm[8];
        uint32_t npm = 8;
        if (g_gfx.present_mode == PRESENT_MAILBOX)   want = VK_PRESENT_MODE_MAILBOX_KHR;
        if (g_gfx.present_mode == PRESENT_IMMEDIATE) want = VK_PRESENT_MODE_IMMEDIATE_KHR;
        sci.presentMode = VK_PRESENT_MODE_FIFO_KHR;
        if (want != VK_PRESENT_MODE_FIFO_KHR
            && vkGetPhysicalDeviceSurfacePresentModesKHR(s_pdev, s_surf, &npm, pm)
               == VK_SUCCESS)
            for (i = 0; i < npm; i++)
                if (pm[i] == want) { sci.presentMode = want; break; }
    }
    sci.clipped      = VK_TRUE;
    sci.oldSwapchain = old;
    VK_TRY(vkCreateSwapchainKHR(s_dev, &sci, NULL, &s_swap));
    if (old) vkDestroySwapchainKHR(s_dev, old, NULL);

    s_swap_n = 8;
    VK_TRY(vkGetSwapchainImagesKHR(s_dev, s_swap, &s_swap_n, s_swap_img));
    {
        void *imgs[8];
        for (i = 0; i < s_swap_n; i++) imgs[i] = (void *)s_swap_img[i];
        ui_swapchain((uint32_t)s_swap_fmt, s_swap_ext.width, s_swap_ext.height,
                     s_swap_n, imgs);
    }
    return 1;
}

/* The window controls live in the menu; follow them when they move. */
static void apply_window_settings(void)
{
    static int last_fs = -1, last_scale = -1;
    if (!s_win) return;
    if (g_gfx.fullscreen != last_fs) {
        last_fs = g_gfx.fullscreen;
        SDL_SetWindowFullscreen(s_win, g_gfx.fullscreen ? true : false);
        last_scale = -1;                 /* re-apply the size on the way back */
    }
    if (!g_gfx.fullscreen && g_gfx.window_scale != last_scale) {
        last_scale = g_gfx.window_scale;
        SDL_SetWindowSize(s_win, PSP_W * g_gfx.window_scale,
                          PSP_H * g_gfx.window_scale);
    }
}

int present_init(const char *title)
{
    Uint32 next = 0;
    const char * const *sdl_ext;
    VkApplicationInfo ai;
    VkInstanceCreateInfo ici;
    VkValidationFeaturesEXT vf;
    VkValidationFeatureEnableEXT vfe[1];
    const char *ext_names[16];
    const char *layer_names[1];
    VkPhysicalDevice devs[16];
    uint32_t nd = 16, d, q;
    float prio = 1.0f;
    VkDeviceQueueCreateInfo qci;
    VkDeviceCreateInfo dci;
    const char *dev_ext[1];
    VkCommandPoolCreateInfo cpi;
    VkCommandBufferAllocateInfo cbi;
    VkFenceCreateInfo fci;
    VkSemaphoreCreateInfo smi;
    VkBufferCreateInfo bci;
    VkMemoryRequirements mr;
    VkMemoryAllocateInfo mai;
    VkImageCreateInfo imi;

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD)) {
        fprintf(stderr, "[present] SDL_Init failed: %s\n", SDL_GetError());
        return 0;
    }
    s_win = SDL_CreateWindow(title ? title : "pspreco",
                             PSP_W * 2, PSP_H * 2,
                             SDL_WINDOW_VULKAN | SDL_WINDOW_RESIZABLE);
    if (!s_win) {
        fprintf(stderr, "[present] SDL_CreateWindow failed: %s\n",
                SDL_GetError());
        return 0;
    }

    sdl_ext = SDL_Vulkan_GetInstanceExtensions(&next);
    memset(&ai, 0, sizeof ai);
    ai.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    ai.pApplicationName = "pspreco";
    ai.apiVersion = VK_API_VERSION_1_1;
    memset(&ici, 0, sizeof ici);
    ici.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    ici.pApplicationInfo = &ai;
    ici.enabledExtensionCount = next;
    ici.ppEnabledExtensionNames = sdl_ext;
    {
        static const char *const k_val_layer = "VK_LAYER_KHRONOS_validation";
        const char *v = getenv("SR_VKVALIDATE");
        s_validate = (v && v[0] && strcmp(v, "0") != 0) ? 1 : 0;
        if (s_validate && !have_layer(k_val_layer)) {
            fprintf(stderr, "[present] SR_VKVALIDATE=1 but %s is not "
                            "installed; continuing without it\n", k_val_layer);
            s_validate = 0;
        }
        if (s_validate) {
            uint32_t i;
            for (i = 0; i < next && i < 15; i++) ext_names[i] = sdl_ext[i];
            ext_names[i++] = VK_EXT_DEBUG_UTILS_EXTENSION_NAME;
            layer_names[0] = k_val_layer;
            /* Synchronization validation is the whole point: it is what
             * reports a host write racing an in-flight read, and a free of an
             * object a submitted command buffer still uses. */
            vfe[0] = VK_VALIDATION_FEATURE_ENABLE_SYNCHRONIZATION_VALIDATION_EXT;
            memset(&vf, 0, sizeof vf);
            vf.sType = VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;
            vf.enabledValidationFeatureCount = 1;
            vf.pEnabledValidationFeatures = vfe;
            ici.pNext = &vf;
            ici.enabledLayerCount = 1;
            ici.ppEnabledLayerNames = layer_names;
            ici.enabledExtensionCount = i;
            ici.ppEnabledExtensionNames = ext_names;
        }
    }
    VK_TRY(vkCreateInstance(&ici, NULL, &s_inst));
    if (s_validate) {
        debug_messenger_create();
        printf("[present] Vulkan validation + synchronization validation on\n");
    }

    if (!SDL_Vulkan_CreateSurface(s_win, s_inst, NULL, &s_surf)) {
        fprintf(stderr, "[present] SDL_Vulkan_CreateSurface failed: %s\n",
                SDL_GetError());
        return 0;
    }

    /* First device with a graphics queue that can present to our surface. */
    VK_TRY(vkEnumeratePhysicalDevices(s_inst, &nd, devs));
    s_pdev = VK_NULL_HANDLE;
    for (d = 0; d < nd && !s_pdev; d++) {
        VkQueueFamilyProperties qf[16];
        uint32_t nq = 16;
        vkGetPhysicalDeviceQueueFamilyProperties(devs[d], &nq, qf);
        for (q = 0; q < nq; q++) {
            VkBool32 can_present = VK_FALSE;
            vkGetPhysicalDeviceSurfaceSupportKHR(devs[d], q, s_surf,
                                                 &can_present);
            if ((qf[q].queueFlags & VK_QUEUE_GRAPHICS_BIT) && can_present) {
                s_pdev = devs[d];
                s_qfam = q;
                break;
            }
        }
    }
    if (!s_pdev) {
        fprintf(stderr, "[present] no Vulkan device can present\n");
        return 0;
    }
    {
        VkPhysicalDeviceProperties pp;
        vkGetPhysicalDeviceProperties(s_pdev, &pp);
        printf("[present] %s\n", pp.deviceName);
    }

    memset(&qci, 0, sizeof qci);
    qci.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    qci.queueFamilyIndex = s_qfam;
    qci.queueCount = 1;
    qci.pQueuePriorities = &prio;
    dev_ext[0] = VK_KHR_SWAPCHAIN_EXTENSION_NAME;
    memset(&dci, 0, sizeof dci);
    dci.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    dci.queueCreateInfoCount = 1;
    dci.pQueueCreateInfos = &qci;
    dci.enabledExtensionCount = 1;
    dci.ppEnabledExtensionNames = dev_ext;
    {
        VkPhysicalDeviceFeatures have, want;
        vkGetPhysicalDeviceFeatures(s_pdev, &have);
        memset(&want, 0, sizeof want);
        /* Anisotropy keeps minified textures sharp at grazing angles. It is
         * optional and simply stays off where the driver lacks it. */
        want.samplerAnisotropy = have.samplerAnisotropy;
        if (have.samplerAnisotropy) {
            VkPhysicalDeviceProperties props;
            vkGetPhysicalDeviceProperties(s_pdev, &props);
            g_vk_max_aniso = props.limits.maxSamplerAnisotropy;
            if (g_vk_max_aniso > 16.0f) g_vk_max_aniso = 16.0f;
        }
        dci.pEnabledFeatures = &want;
        VK_TRY(vkCreateDevice(s_pdev, &dci, NULL, &s_dev));
    }
    vkGetDeviceQueue(s_dev, s_qfam, 0, &s_queue);

    memset(&cpi, 0, sizeof cpi);
    cpi.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    cpi.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    cpi.queueFamilyIndex = s_qfam;
    VK_TRY(vkCreateCommandPool(s_dev, &cpi, NULL, &s_pool));
    memset(&cbi, 0, sizeof cbi);
    cbi.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    cbi.commandPool = s_pool;
    cbi.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cbi.commandBufferCount = 1;
    VK_TRY(vkAllocateCommandBuffers(s_dev, &cbi, &s_cmd));

    memset(&fci, 0, sizeof fci);
    fci.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    VK_TRY(vkCreateFence(s_dev, &fci, NULL, &s_fence));
    memset(&smi, 0, sizeof smi);
    smi.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    VK_TRY(vkCreateSemaphore(s_dev, &smi, NULL, &s_sem_acq));
    VK_TRY(vkCreateSemaphore(s_dev, &smi, NULL, &s_sem_done));

    /* Persistently-mapped upload buffer and the device-local blit source. */
    memset(&bci, 0, sizeof bci);
    bci.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    bci.size = (VkDeviceSize)PSP_W * PSP_H * 4;
    bci.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    VK_TRY(vkCreateBuffer(s_dev, &bci, NULL, &s_staging));
    vkGetBufferMemoryRequirements(s_dev, s_staging, &mr);
    memset(&mai, 0, sizeof mai);
    mai.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_mem_type(mr.memoryTypeBits,
        VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT
        | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    VK_TRY(vkAllocateMemory(s_dev, &mai, NULL, &s_staging_mem));
    VK_TRY(vkBindBufferMemory(s_dev, s_staging, s_staging_mem, 0));
    VK_TRY(vkMapMemory(s_dev, s_staging_mem, 0, VK_WHOLE_SIZE, 0,
                       &s_staging_map));

    memset(&imi, 0, sizeof imi);
    imi.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    imi.imageType = VK_IMAGE_TYPE_2D;
    imi.format = VK_FORMAT_B8G8R8A8_UNORM;
    imi.extent.width = PSP_W;
    imi.extent.height = PSP_H;
    imi.extent.depth = 1;
    imi.mipLevels = 1;
    imi.arrayLayers = 1;
    imi.samples = VK_SAMPLE_COUNT_1_BIT;
    imi.tiling = VK_IMAGE_TILING_OPTIMAL;
    imi.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    imi.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    VK_TRY(vkCreateImage(s_dev, &imi, NULL, &s_fbimg));
    vkGetImageMemoryRequirements(s_dev, s_fbimg, &mr);
    mai.allocationSize = mr.size;
    mai.memoryTypeIndex = find_mem_type(mr.memoryTypeBits,
                                        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    VK_TRY(vkAllocateMemory(s_dev, &mai, NULL, &s_fbimg_mem));
    VK_TRY(vkBindImageMemory(s_dev, s_fbimg, s_fbimg_mem, 0));

    /* The overlay has to exist before the first swapchain: create_swapchain()
     * hands it the images every time it runs. */
    {
        UiVkInfo ui;
        ui.window       = s_win;
        ui.instance     = (void *)s_inst;
        ui.physical     = (void *)s_pdev;
        ui.device       = (void *)s_dev;
        ui.queue        = (void *)s_queue;
        ui.queue_family = s_qfam;
        if (!ui_init(&ui))
            fprintf(stderr, "[present] overlay unavailable; F4 does nothing\n");
    }

    if (!create_swapchain()) return 0;

    if (SDL_HasGamepad()) {
        int npads = 0;
        SDL_JoystickID *ids = SDL_GetGamepads(&npads);
        if (ids && npads > 0) s_pad = SDL_OpenGamepad(ids[0]);
        SDL_free(ids);
    }
    printf("[present] %ux%u swapchain, gamepad %s\n",
           s_swap_ext.width, s_swap_ext.height, s_pad ? "yes" : "no");
    s_ready = 1;
    return 1;
}

/* REF: include/ctrlsvc.h:57-76 for the SCE_CTRL_* bits, and
 * ctrlsvc.h:116-119 for the 0..255 analog axes with 128 at centre. */
#define SCE_CTRL_SELECT   (1u << 0)
#define SCE_CTRL_START    (1u << 3)
#define SCE_CTRL_UP       (1u << 4)
#define SCE_CTRL_RIGHT    (1u << 5)
#define SCE_CTRL_DOWN     (1u << 6)
#define SCE_CTRL_LEFT     (1u << 7)
#define SCE_CTRL_LTRIGGER (1u << 8)
#define SCE_CTRL_RTRIGGER (1u << 9)
#define SCE_CTRL_TRIANGLE (1u << 12)
#define SCE_CTRL_CIRCLE   (1u << 13)
#define SCE_CTRL_CROSS    (1u << 14)
#define SCE_CTRL_SQUARE   (1u << 15)

/* SDK-documented stick deadzone, in SDL's -32768..32767 range. */
#define PAD_DEADZONE 7849
/* Triggers rest at 0 and travel to 32767, so they need a much smaller floor
 * than a centred stick -- just enough to ignore a resting rattle. */
#define TRIG_DEADZONE 2600

static void poll_input(int *quit)
{
    SDL_Event ev;
    const bool *k;
    u32 b = 0;
    u8 lx = 128, ly = 128;
    u8 rx = 128, ry = 128;
    float tl = 0.0f, tr = 0.0f;
    u32 aux = 0;

    while (SDL_PollEvent(&ev)) {
        /* F4 belongs to the overlay and is never passed on. */
        if (ev.type == SDL_EVENT_KEY_DOWN && ev.key.key == SDLK_F4 && !ev.key.repeat) {
            ui_toggle();
            continue;
        }
        if (ui_handle_event(&ev)) continue;      /* the menu took it */
        switch (ev.type) {
        case SDL_EVENT_QUIT:
            *quit = 1;
            break;
        case SDL_EVENT_KEY_DOWN:
            if (ev.key.key == SDLK_ESCAPE) *quit = 1;
            break;
        case SDL_EVENT_GAMEPAD_ADDED:
            if (!s_pad) s_pad = SDL_OpenGamepad(ev.gdevice.which);
            break;
        case SDL_EVENT_GAMEPAD_REMOVED:
            if (s_pad && SDL_GetGamepadID(s_pad) == ev.gdevice.which) {
                SDL_CloseGamepad(s_pad);
                s_pad = NULL;
            }
            break;
        default:
            break;
        }
    }

    apply_window_settings();

    /* With the menu open the game sees no input at all: no stick drift, no
     * accidental pause, and typing in the menu cannot reach the game. */
    if (ui_visible()) {
        s_buttons = 0;
        s_lx = s_ly = 128;
        s_rx = s_ry = 128;
        s_tl = s_tr = 0.0f;
        s_aux = 0;
        return;
    }

    k = SDL_GetKeyboardState(NULL);
    if (k[SDL_SCANCODE_RETURN])  b |= SCE_CTRL_START;
    if (k[SDL_SCANCODE_LSHIFT] || k[SDL_SCANCODE_RSHIFT])
                                 b |= SCE_CTRL_SELECT;
    if (k[SDL_SCANCODE_X])       b |= SCE_CTRL_CROSS;
    if (k[SDL_SCANCODE_Z])       b |= SCE_CTRL_CIRCLE;
    if (k[SDL_SCANCODE_A])       b |= SCE_CTRL_SQUARE;
    if (k[SDL_SCANCODE_S])       b |= SCE_CTRL_TRIANGLE;
    if (k[SDL_SCANCODE_Q])       b |= SCE_CTRL_LTRIGGER;
    if (k[SDL_SCANCODE_W])       b |= SCE_CTRL_RTRIGGER;
    if (k[SDL_SCANCODE_UP])      b |= SCE_CTRL_UP;
    if (k[SDL_SCANCODE_DOWN])    b |= SCE_CTRL_DOWN;
    if (k[SDL_SCANCODE_LEFT])    b |= SCE_CTRL_LEFT;
    if (k[SDL_SCANCODE_RIGHT])   b |= SCE_CTRL_RIGHT;

    /* Keyboard stands in for the controls the PSP lacks: IJKL looks around,
     * C clicks the right stick. Full deflection, since keys have no travel --
     * the guest applies its own deadzone either way. */
    if (k[SDL_SCANCODE_J])       rx = 0;
    if (k[SDL_SCANCODE_L])       rx = 255;
    if (k[SDL_SCANCODE_I])       ry = 0;
    if (k[SDL_SCANCODE_K])       ry = 255;
    if (k[SDL_SCANCODE_C])       aux |= PRESENT_AUX_R3;

    if (s_pad) {
#define PB(sdlb, bit) do { if (SDL_GetGamepadButton(s_pad, sdlb)) b |= (bit); \
                      } while (0)
        PB(SDL_GAMEPAD_BUTTON_SOUTH, SCE_CTRL_CROSS);
        PB(SDL_GAMEPAD_BUTTON_EAST,  SCE_CTRL_CIRCLE);
        PB(SDL_GAMEPAD_BUTTON_WEST,  SCE_CTRL_SQUARE);
        PB(SDL_GAMEPAD_BUTTON_NORTH, SCE_CTRL_TRIANGLE);
        PB(SDL_GAMEPAD_BUTTON_START, SCE_CTRL_START);
        PB(SDL_GAMEPAD_BUTTON_BACK,  SCE_CTRL_SELECT);
        PB(SDL_GAMEPAD_BUTTON_LEFT_SHOULDER,  SCE_CTRL_LTRIGGER);
        PB(SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER, SCE_CTRL_RTRIGGER);
        PB(SDL_GAMEPAD_BUTTON_DPAD_UP,    SCE_CTRL_UP);
        PB(SDL_GAMEPAD_BUTTON_DPAD_DOWN,  SCE_CTRL_DOWN);
        PB(SDL_GAMEPAD_BUTTON_DPAD_LEFT,  SCE_CTRL_LEFT);
        PB(SDL_GAMEPAD_BUTTON_DPAD_RIGHT, SCE_CTRL_RIGHT);
#undef PB
        /* The PSP has shoulder buttons, not analog triggers. */
        if (SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) > 8192)
            b |= SCE_CTRL_LTRIGGER;
        if (SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) > 8192)
            b |= SCE_CTRL_RTRIGGER;
        {
            int ax = SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_LEFTX);
            int ay = SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_LEFTY);
            if (ax < -PAD_DEADZONE || ax > PAD_DEADZONE)
                lx = (u8)((ax + 32768) * 255 / 65535);
            if (ay < -PAD_DEADZONE || ay > PAD_DEADZONE)
                ly = (u8)((ay + 32768) * 255 / 65535);
        }
        /* Right stick, same encoding as the left one so the guest's own axis
         * conditioning applies to it unchanged. SDL's Y is +down, which is
         * also what the engine expects (Y >= 113 means DOWN). */
        {
            int ax = SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_RIGHTX);
            int ay = SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_RIGHTY);
            if (ax < -PAD_DEADZONE || ax > PAD_DEADZONE)
                rx = (u8)((ax + 32768) * 255 / 65535);
            if (ay < -PAD_DEADZONE || ay > PAD_DEADZONE)
                ry = (u8)((ay + 32768) * 255 / 65535);
        }
        /* Trigger travel, kept as a float beside the digital bit above. The
         * bit is what the PSP had and the game already understands; the float
         * is the extra resolution the pad has and the PSP never did. Rescaled
         * so it starts from zero at the edge of the deadzone rather than
         * jumping to it. */
        {
            int at = SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER);
            int bt = SDL_GetGamepadAxis(s_pad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER);
            if (at > TRIG_DEADZONE)
                tl = (float)(at - TRIG_DEADZONE) / (32767.0f - TRIG_DEADZONE);
            if (bt > TRIG_DEADZONE)
                tr = (float)(bt - TRIG_DEADZONE) / (32767.0f - TRIG_DEADZONE);
            if (tl > 1.0f) tl = 1.0f;
            if (tr > 1.0f) tr = 1.0f;
        }
        if (SDL_GetGamepadButton(s_pad, SDL_GAMEPAD_BUTTON_LEFT_STICK))
            aux |= PRESENT_AUX_L3;
        if (SDL_GetGamepadButton(s_pad, SDL_GAMEPAD_BUTTON_RIGHT_STICK))
            aux |= PRESENT_AUX_R3;
    }
    s_buttons = b;
    s_lx = lx;
    s_ly = ly;
    s_rx = rx;
    s_ry = ry;
    s_tl = tl;
    s_tr = tr;
    s_aux = aux;
}

u32 present_buttons(void) { return s_buttons; }

void present_analog(u8 *lx, u8 *ly)
{
    if (lx) *lx = s_lx;
    if (ly) *ly = s_ly;
}

void present_analog2(u8 *rx, u8 *ry)
{
    if (rx) *rx = s_rx;
    if (ry) *ry = s_ry;
}

void present_triggers(float *lt, float *rt)
{
    if (lt) *lt = s_tl;
    if (rt) *rt = s_tr;
}

u32 present_aux(void) { return s_aux; }

static void barrier(VkCommandBuffer cmd, VkImage img,
                    VkImageLayout from, VkImageLayout to,
                    VkAccessFlags src_acc, VkAccessFlags dst_acc,
                    VkPipelineStageFlags src_st, VkPipelineStageFlags dst_st)
{
    VkImageMemoryBarrier mb;
    memset(&mb, 0, sizeof mb);
    mb.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    mb.srcAccessMask = src_acc;
    mb.dstAccessMask = dst_acc;
    mb.oldLayout = from;
    mb.newLayout = to;
    mb.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    mb.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    mb.image = img;
    mb.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    mb.subresourceRange.levelCount = 1;
    mb.subresourceRange.layerCount = 1;
    vkCmdPipelineBarrier(cmd, src_st, dst_st, 0, 0, NULL, 0, NULL, 1, &mb);
}

/* Colour controls. Gamma, brightness and contrast are per-channel, so they
 * collapse into one 256-entry table rebuilt only when the settings change;
 * saturation mixes channels and costs a few instructions per pixel, so it is
 * skipped entirely at 1.0. */
static uint8_t  s_clut[256];
static unsigned s_clut_gen;
static int      s_clut_identity = 1;

static void colour_lut_update(void)
{
    const GfxSettings *g = &g_gfx;
    double inv_gamma = (g->gamma > 0.01f) ? 1.0 / g->gamma : 1.0;
    int i;
    if (s_clut_gen == g_gfx_generation) return;
    s_clut_gen = g_gfx_generation;
    s_clut_identity = (g->gamma == 1.0f && g->brightness == 0.0f
                       && g->contrast == 1.0f && g->saturation == 1.0f);
    for (i = 0; i < 256; i++) {
        double v = i / 255.0;
        v = pow(v, inv_gamma);
        v = (v - 0.5) * g->contrast + 0.5 + g->brightness;
        if (v < 0.0) v = 0.0;
        if (v > 1.0) v = 1.0;
        s_clut[i] = (uint8_t)(v * 255.0 + 0.5);
    }
}

/* Guest frame buffer -> BGRA8, via the same unpack as the frame dump so the
 * window and the BMPs cannot disagree. */
static void convert_frame(u8 *ram, u32 addr, u32 stride, int fpf, int w, int h)
{
    unsigned bpp = (fpf == 3) ? 4u : 2u;
    uint32_t *dst = (uint32_t *)s_staging_map;
    float sat = g_gfx.saturation;
    int x, y;

    colour_lut_update();
    for (y = 0; y < h; y++) {
        u32 row = addr + (u32)y * stride * bpp;
        for (x = 0; x < w; x++) {
            u32 raw = (bpp == 4) ? mem_r32(ram, row + (u32)x * 4u)
                                 : mem_r16(ram, row + (u32)x * 2u);
            u32 rgba = ge_unpack_pixel(fpf, raw);
            if (!s_clut_identity) {
                unsigned r = s_clut[rgba & 0xFFu];
                unsigned g = s_clut[(rgba >> 8) & 0xFFu];
                unsigned b = s_clut[(rgba >> 16) & 0xFFu];
                if (sat != 1.0f) {
                    float lum = 0.299f * r + 0.587f * g + 0.114f * b;
                    float fr = lum + (r - lum) * sat;
                    float fg = lum + (g - lum) * sat;
                    float fb = lum + (b - lum) * sat;
                    r = (unsigned)(fr < 0 ? 0 : fr > 255 ? 255 : fr);
                    g = (unsigned)(fg < 0 ? 0 : fg > 255 ? 255 : fg);
                    b = (unsigned)(fb < 0 ? 0 : fb > 255 ? 255 : fb);
                }
                rgba = (rgba & 0xFF000000u) | (b << 16) | (g << 8) | r;
            }
            /* rgba is 0xAABBGGRR; the swapchain wants 0xAARRGGBB. */
            dst[y * w + x] = (rgba & 0xFF00FF00u)
                           | ((rgba & 0x00FF0000u) >> 16)
                           | ((rgba & 0x000000FFu) << 16);
        }
    }
}

/* Where the guest frame lands inside the window, per aspect mode. */
static void present_rect(int dw, int dh, int w, int h,
                         int *x0, int *y0, int *vw, int *vh)
{
    int aw = w, ah = h;
    switch (g_gfx.aspect_mode) {
    case ASPECT_STRETCH:
        *x0 = *y0 = 0; *vw = dw; *vh = dh;
        return;
    case ASPECT_4_3:
        aw = 4; ah = 3;
        break;
    case ASPECT_INTEGER: {
        int s = dw / w;
        if (dh / h < s) s = dh / h;
        if (s < 1) s = 1;
        *vw = w * s; *vh = h * s;
        *x0 = (dw - *vw) / 2; *y0 = (dh - *vh) / 2;
        return;
    }
    default: break;                     /* ASPECT_KEEP */
    }
    *vw = dw;
    *vh = dw * ah / aw;
    if (*vh > dh) { *vh = dh; *vw = dh * aw / ah; }
    *x0 = (dw - *vw) / 2;
    *y0 = (dh - *vh) / 2;
}

int present_frame(u8 *ram, u32 addr, u32 stride, int fpf, int w, int h)
{
    int quit = 0;
    int attempt;

    if (!s_ready) return 1;
    poll_input(&quit);
    if (quit) return 0;
    ui_new_frame();
    if (!addr || w <= 0 || h <= 0) return 1;
    if (w > PSP_W) w = PSP_W;
    if (h > PSP_H) h = PSP_H;

    convert_frame(ram, addr, stride, fpf, w, h);

    for (attempt = 0; attempt < 2; attempt++) {
        uint32_t idx = 0;
        VkResult ar, pr;
        VkCommandBufferBeginInfo bi;
        VkBufferImageCopy bic;
        VkImageBlit blt;
        VkSubmitInfo si;
        VkPresentInfoKHR pi;
        VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_TRANSFER_BIT;
        int dw, dh, vw, vh, x0, y0;

        ar = vkAcquireNextImageKHR(s_dev, s_swap, UINT64_MAX, s_sem_acq,
                                   VK_NULL_HANDLE, &idx);
        if (ar == VK_ERROR_OUT_OF_DATE_KHR || ar == VK_SUBOPTIMAL_KHR) {
            vkDeviceWaitIdle(s_dev);
            if (!create_swapchain()) return 1;   /* minimised: drop the frame */
            continue;
        }
        if (ar != VK_SUCCESS) return 1;

        memset(&bi, 0, sizeof bi);
        bi.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        bi.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        vkResetCommandBuffer(s_cmd, 0);
        vkBeginCommandBuffer(s_cmd, &bi);

        barrier(s_cmd, s_fbimg, VK_IMAGE_LAYOUT_UNDEFINED,
                VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                0, VK_ACCESS_TRANSFER_WRITE_BIT,
                VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT);
        memset(&bic, 0, sizeof bic);
        bic.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        bic.imageSubresource.layerCount = 1;
        bic.imageExtent.width = (uint32_t)w;
        bic.imageExtent.height = (uint32_t)h;
        bic.imageExtent.depth = 1;
        vkCmdCopyBufferToImage(s_cmd, s_staging, s_fbimg,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &bic);
        barrier(s_cmd, s_fbimg, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_READ_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT);

        /* srcStage is the stage the acquire semaphore is waited at, not
         * TOP_OF_PIPE: the layout transition is a write, and at TOP_OF_PIPE it
         * would be ordered BEFORE that wait, racing the presentation engine's
         * own use of the image. */
        barrier(s_cmd, s_swap_img[idx], VK_IMAGE_LAYOUT_UNDEFINED,
                VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                0, VK_ACCESS_TRANSFER_WRITE_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT);
        {
            VkClearColorValue bar;
            VkImageSubresourceRange rng;
            memset(&bar, 0, sizeof bar);
            bar.float32[0] = g_gfx.letterbox[0];
            bar.float32[1] = g_gfx.letterbox[1];
            bar.float32[2] = g_gfx.letterbox[2];
            bar.float32[3] = 1.0f;
            rng.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            rng.baseMipLevel = 0; rng.levelCount = 1;
            rng.baseArrayLayer = 0; rng.layerCount = 1;
            vkCmdClearColorImage(s_cmd, s_swap_img[idx],
                                 VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                 &bar, 1, &rng);
            /* The blit below writes the same image; without this the letterbox
             * clear and the blit are unordered writes to overlapping memory. */
            barrier(s_cmd, s_swap_img[idx],
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_WRITE_BIT,
                    VK_PIPELINE_STAGE_TRANSFER_BIT,
                    VK_PIPELINE_STAGE_TRANSFER_BIT);
        }

        /* Aspect-correct letterbox: the PSP is 480x272, the window is not. */
        dw = (int)s_swap_ext.width;
        dh = (int)s_swap_ext.height;
        present_rect(dw, dh, w, h, &x0, &y0, &vw, &vh);

        memset(&blt, 0, sizeof blt);
        blt.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        blt.srcSubresource.layerCount = 1;
        blt.srcOffsets[1].x = w;
        blt.srcOffsets[1].y = h;
        blt.srcOffsets[1].z = 1;
        blt.dstSubresource = blt.srcSubresource;
        blt.dstOffsets[0].x = x0;
        blt.dstOffsets[0].y = y0;
        blt.dstOffsets[1].x = x0 + vw;
        blt.dstOffsets[1].y = y0 + vh;
        blt.dstOffsets[1].z = 1;
        vkCmdBlitImage(s_cmd,
                       s_fbimg, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                       s_swap_img[idx], VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                       1, &blt,
                       g_gfx.present_filter ? VK_FILTER_LINEAR
                                            : VK_FILTER_NEAREST);

        /* The overlay's render pass ends in PRESENT_SRC; without it (or with
         * the overlay unavailable) the transition is ours to make. */
        if (!ui_render(s_cmd, idx))
            barrier(s_cmd, s_swap_img[idx], VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,
                    VK_ACCESS_TRANSFER_WRITE_BIT, 0,
                    VK_PIPELINE_STAGE_TRANSFER_BIT,
                    VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT);
        vkEndCommandBuffer(s_cmd);

        memset(&si, 0, sizeof si);
        si.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        si.waitSemaphoreCount = 1;
        si.pWaitSemaphores = &s_sem_acq;
        si.pWaitDstStageMask = &wait_stage;
        si.commandBufferCount = 1;
        si.pCommandBuffers = &s_cmd;
        si.signalSemaphoreCount = 1;
        si.pSignalSemaphores = &s_sem_done;
        vkResetFences(s_dev, 1, &s_fence);
        vkQueueSubmit(s_queue, 1, &si, s_fence);

        memset(&pi, 0, sizeof pi);
        pi.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
        pi.waitSemaphoreCount = 1;
        pi.pWaitSemaphores = &s_sem_done;
        pi.swapchainCount = 1;
        pi.pSwapchains = &s_swap;
        pi.pImageIndices = &idx;
        pr = vkQueuePresentKHR(s_queue, &pi);

        /* One frame in flight: wait before reusing staging/command buffers. */
        vkWaitForFences(s_dev, 1, &s_fence, VK_TRUE, UINT64_MAX);

        if (pr == VK_ERROR_OUT_OF_DATE_KHR || pr == VK_SUBOPTIMAL_KHR) {
            vkDeviceWaitIdle(s_dev);
            create_swapchain();
        }
        return 1;
    }
    return 1;
}

int present_is_active(void) { return s_ready; }

int present_get_vk(PresentVkInfo *out)
{
    if (!s_ready || !out) return 0;
    out->instance = (void *)s_inst;
    out->physical = (void *)s_pdev;
    out->device   = (void *)s_dev;
    out->queue    = (void *)s_queue;
    out->queue_family = s_qfam;
    return 1;
}

/* Same as present_frame but sourced from a backend-owned image; no staging
 * upload. */
int present_image(void *vk_image, int src_w, int src_h)
{
    VkImage src = (VkImage)vk_image;
    int quit = 0;
    int attempt;

    if (src_w <= 0) src_w = PSP_W;
    if (src_h <= 0) src_h = PSP_H;

    if (!s_ready) return 1;
    poll_input(&quit);
    if (quit) return 0;
    ui_new_frame();

    for (attempt = 0; attempt < 2; attempt++) {
        uint32_t idx = 0;
        VkResult ar, pr;
        VkCommandBufferBeginInfo bi;
        VkImageBlit blt;
        VkSubmitInfo si;
        VkPresentInfoKHR pi;
        VkPipelineStageFlags wait_stage = VK_PIPELINE_STAGE_TRANSFER_BIT;
        int dw, dh, vw, vh, x0, y0;

        ar = vkAcquireNextImageKHR(s_dev, s_swap, UINT64_MAX, s_sem_acq,
                                   VK_NULL_HANDLE, &idx);
        if (ar == VK_ERROR_OUT_OF_DATE_KHR || ar == VK_SUBOPTIMAL_KHR) {
            vkDeviceWaitIdle(s_dev);
            if (!create_swapchain()) return 1;   /* minimised: drop the frame */
            continue;
        }
        if (ar != VK_SUCCESS) return 1;

        memset(&bi, 0, sizeof bi);
        bi.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
        bi.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        vkResetCommandBuffer(s_cmd, 0);
        vkBeginCommandBuffer(s_cmd, &bi);

        /* srcStage is the stage the acquire semaphore is waited at, not
         * TOP_OF_PIPE: the layout transition is a write, and at TOP_OF_PIPE it
         * would be ordered BEFORE that wait, racing the presentation engine's
         * own use of the image. */
        barrier(s_cmd, s_swap_img[idx], VK_IMAGE_LAYOUT_UNDEFINED,
                VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                0, VK_ACCESS_TRANSFER_WRITE_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT,
                VK_PIPELINE_STAGE_TRANSFER_BIT);
        {
            VkClearColorValue black;
            VkImageSubresourceRange rng;
            memset(&black, 0, sizeof black);
            black.float32[3] = 1.0f;
            rng.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            rng.baseMipLevel = 0; rng.levelCount = 1;
            rng.baseArrayLayer = 0; rng.layerCount = 1;
            vkCmdClearColorImage(s_cmd, s_swap_img[idx],
                                 VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                                 &black, 1, &rng);
            /* The blit below writes the same image; without this the letterbox
             * clear and the blit are unordered writes to overlapping memory. */
            barrier(s_cmd, s_swap_img[idx],
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_ACCESS_TRANSFER_WRITE_BIT, VK_ACCESS_TRANSFER_WRITE_BIT,
                    VK_PIPELINE_STAGE_TRANSFER_BIT,
                    VK_PIPELINE_STAGE_TRANSFER_BIT);
        }

        dw = (int)s_swap_ext.width;
        dh = (int)s_swap_ext.height;
        /* Aspect is decided in PSP pixels: a supersampled source has more
         * pixels but the same shape. */
        present_rect(dw, dh, PSP_W, PSP_H, &x0, &y0, &vw, &vh);

        memset(&blt, 0, sizeof blt);
        blt.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        blt.srcSubresource.layerCount = 1;
        /* The visible region of the source, in the source's own pixels. */
        blt.srcOffsets[1].x = src_w;
        blt.srcOffsets[1].y = src_h;
        blt.srcOffsets[1].z = 1;
        blt.dstSubresource = blt.srcSubresource;
        blt.dstOffsets[0].x = x0;
        blt.dstOffsets[0].y = y0;
        blt.dstOffsets[1].x = x0 + vw;
        blt.dstOffsets[1].y = y0 + vh;
        blt.dstOffsets[1].z = 1;
        vkCmdBlitImage(s_cmd,
                       src, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                       s_swap_img[idx], VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                       1, &blt, VK_FILTER_LINEAR);

        /* The overlay's render pass ends in PRESENT_SRC; without it (or with
         * the overlay unavailable) the transition is ours to make. */
        if (!ui_render(s_cmd, idx))
            barrier(s_cmd, s_swap_img[idx], VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,
                    VK_ACCESS_TRANSFER_WRITE_BIT, 0,
                    VK_PIPELINE_STAGE_TRANSFER_BIT,
                    VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT);
        vkEndCommandBuffer(s_cmd);

        memset(&si, 0, sizeof si);
        si.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        si.waitSemaphoreCount = 1;
        si.pWaitSemaphores = &s_sem_acq;
        si.pWaitDstStageMask = &wait_stage;
        si.commandBufferCount = 1;
        si.pCommandBuffers = &s_cmd;
        si.signalSemaphoreCount = 1;
        si.pSignalSemaphores = &s_sem_done;
        vkResetFences(s_dev, 1, &s_fence);
        vkQueueSubmit(s_queue, 1, &si, s_fence);

        memset(&pi, 0, sizeof pi);
        pi.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
        pi.waitSemaphoreCount = 1;
        pi.pWaitSemaphores = &s_sem_done;
        pi.swapchainCount = 1;
        pi.pSwapchains = &s_swap;
        pi.pImageIndices = &idx;
        pr = vkQueuePresentKHR(s_queue, &pi);

        vkWaitForFences(s_dev, 1, &s_fence, VK_TRUE, UINT64_MAX);

        if (pr == VK_ERROR_OUT_OF_DATE_KHR || pr == VK_SUBOPTIMAL_KHR) {
            vkDeviceWaitIdle(s_dev);
            create_swapchain();
        }
        return 1;
    }
    return 1;
}

/* Bring up the GPU rasteriser on this window's device; PSPRECO_GPU=0 keeps
 * the software rasteriser instead. */
int present_gpu_init(void)
{
    const char *e = getenv("PSPRECO_GPU");
    int gegpu_init(void);
    if (!s_ready) return 0;
    if (e && e[0] == '0') {
        printf("[present] PSPRECO_GPU=0: software rasteriser\n");
        return 0;
    }
    return gegpu_init();
}

void present_shutdown(void)
{
    if (!s_dev) return;
    ui_shutdown();
    vkDeviceWaitIdle(s_dev);
    if (s_swap) vkDestroySwapchainKHR(s_dev, s_swap, NULL);
    if (s_fbimg) vkDestroyImage(s_dev, s_fbimg, NULL);
    if (s_fbimg_mem) vkFreeMemory(s_dev, s_fbimg_mem, NULL);
    if (s_staging) vkDestroyBuffer(s_dev, s_staging, NULL);
    if (s_staging_mem) vkFreeMemory(s_dev, s_staging_mem, NULL);
    if (s_sem_acq) vkDestroySemaphore(s_dev, s_sem_acq, NULL);
    if (s_sem_done) vkDestroySemaphore(s_dev, s_sem_done, NULL);
    if (s_fence) vkDestroyFence(s_dev, s_fence, NULL);
    if (s_pool) vkDestroyCommandPool(s_dev, s_pool, NULL);
    vkDestroyDevice(s_dev, NULL);
    if (s_surf) vkDestroySurfaceKHR(s_inst, s_surf, NULL);
    if (s_dbg) {
        PFN_vkDestroyDebugUtilsMessengerEXT rm =
            (PFN_vkDestroyDebugUtilsMessengerEXT)
            vkGetInstanceProcAddr(s_inst, "vkDestroyDebugUtilsMessengerEXT");
        if (rm) rm(s_inst, s_dbg, NULL);
        s_dbg = VK_NULL_HANDLE;
    }
    if (s_inst) vkDestroyInstance(s_inst, NULL);
    if (s_pad) SDL_CloseGamepad(s_pad);
    if (s_win) SDL_DestroyWindow(s_win);
    SDL_Quit();
    s_dev = VK_NULL_HANDLE;
    s_ready = 0;
}
