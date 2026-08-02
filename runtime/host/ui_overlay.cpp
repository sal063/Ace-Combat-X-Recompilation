/* runtime/host/ui_overlay.cpp -- the F4 graphics menu.
 *
 * Dear ImGui on the SDL3 + Vulkan backends, drawn into the swapchain image
 * the presenter just blitted the guest frame into. The overlay owns a
 * LOAD/PRESENT_SRC render pass, so it is also what puts the image into its
 * final layout: ui_render() replaces the presenter's closing barrier.
 *
 * Everything here edits g_gfx and nothing else; the renderer reads that
 * struct directly, so there is no apply step and no shadow copy to drift.
 */

#include "ui_overlay.h"
#include "settings.h"

#include "imgui.h"
#include "backends/imgui_impl_sdl3.h"
#include "backends/imgui_impl_vulkan.h"

#include <SDL3/SDL.h>
#include <vulkan/vulkan.h>

#include <stdio.h>
#include <string.h>

#define MAX_IMAGES 8

static bool            s_inited;
static bool            s_backend_up;
static bool            s_visible;
static SDL_Window     *s_win;
static VkInstance      s_inst;
static VkPhysicalDevice s_pdev;
static VkDevice        s_dev;
static VkQueue         s_queue;
static uint32_t        s_qfam;

static VkRenderPass    s_pass;
static VkFormat        s_fmt = VK_FORMAT_UNDEFINED;
static VkExtent2D      s_ext;
static uint32_t        s_n_img;
static VkImageView     s_views[MAX_IMAGES];
static VkFramebuffer   s_fbs[MAX_IMAGES];

/* rolling frame timing for the readout. s_fps is the presentation rate (one
 * per emulated vblank); s_game_fps is how often the game itself swaps, which
 * is half of it wherever the game still runs at 30. */
static double   s_fps, s_frame_ms, s_game_fps;
static uint64_t s_last_ticks;
static int      s_frames;
static unsigned s_last_game_frames;

extern "C" unsigned long g_ge_prim_count;
extern "C" unsigned display_game_frames(void);   /* runtime/hle/display.c */

static void destroy_targets(void)
{
    for (uint32_t i = 0; i < s_n_img; i++) {
        if (s_fbs[i])   vkDestroyFramebuffer(s_dev, s_fbs[i], NULL);
        if (s_views[i]) vkDestroyImageView(s_dev, s_views[i], NULL);
        s_fbs[i] = VK_NULL_HANDLE;
        s_views[i] = VK_NULL_HANDLE;
    }
    s_n_img = 0;
}

static bool make_render_pass(VkFormat fmt)
{
    VkAttachmentDescription att;
    VkAttachmentReference   ref;
    VkSubpassDescription    sub;
    VkSubpassDependency     dep;
    VkRenderPassCreateInfo  rpi;

    if (s_pass) { vkDestroyRenderPass(s_dev, s_pass, NULL); s_pass = VK_NULL_HANDLE; }

    memset(&att, 0, sizeof att);
    att.format         = fmt;
    att.samples        = VK_SAMPLE_COUNT_1_BIT;
    /* The frame is already in the image: load it, do not clear it. */
    att.loadOp         = VK_ATTACHMENT_LOAD_OP_LOAD;
    att.storeOp        = VK_ATTACHMENT_STORE_OP_STORE;
    att.stencilLoadOp  = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    att.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    att.initialLayout  = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    att.finalLayout    = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

    memset(&ref, 0, sizeof ref);
    ref.attachment = 0;
    ref.layout     = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    memset(&sub, 0, sizeof sub);
    sub.pipelineBindPoint    = VK_PIPELINE_BIND_POINT_GRAPHICS;
    sub.colorAttachmentCount = 1;
    sub.pColorAttachments    = &ref;

    memset(&dep, 0, sizeof dep);
    dep.srcSubpass    = VK_SUBPASS_EXTERNAL;
    dep.dstSubpass    = 0;
    dep.srcStageMask  = VK_PIPELINE_STAGE_TRANSFER_BIT;
    dep.dstStageMask  = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dep.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    /* READ as well as WRITE: initialLayout is TRANSFER_DST and the subpass uses
     * COLOR_ATTACHMENT, so beginning the pass transitions the image, and
     * loadOp LOAD then READS it. Without READ in the destination scope that
     * read is not ordered against the transition -- which is the
     * "attachment loadOp access is not synchronized with the attachment layout
     * transition" that synchronization validation reports. */
    dep.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT
                      | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;

    memset(&rpi, 0, sizeof rpi);
    rpi.sType           = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    rpi.attachmentCount = 1;
    rpi.pAttachments    = &att;
    rpi.subpassCount    = 1;
    rpi.pSubpasses      = &sub;
    rpi.dependencyCount = 1;
    rpi.pDependencies   = &dep;
    return vkCreateRenderPass(s_dev, &rpi, NULL, &s_pass) == VK_SUCCESS;
}

int ui_init(const UiVkInfo *vk)
{
    if (!vk || !vk->window || s_inited) return s_inited ? 1 : 0;
    s_win   = (SDL_Window *)vk->window;
    s_inst  = (VkInstance)vk->instance;
    s_pdev  = (VkPhysicalDevice)vk->physical;
    s_dev   = (VkDevice)vk->device;
    s_queue = (VkQueue)vk->queue;
    s_qfam  = vk->queue_family;

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    io.IniFilename = NULL;                  /* no imgui.ini next to the game */
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard
                    | ImGuiConfigFlags_NavEnableGamepad;
    ImGui::StyleColorsDark();
    ImGuiStyle &st = ImGui::GetStyle();
    st.WindowRounding = 4.0f;
    st.FrameRounding  = 3.0f;
    st.GrabRounding   = 3.0f;
    st.WindowTitleAlign = ImVec2(0.5f, 0.5f);
    st.Colors[ImGuiCol_WindowBg].w = 0.94f;

    if (!ImGui_ImplSDL3_InitForVulkan(s_win)) {
        ImGui::DestroyContext();
        return 0;
    }
    s_inited = true;
    s_last_ticks = SDL_GetTicks();
    return 1;
}

void ui_swapchain(uint32_t format, uint32_t width, uint32_t height,
                  uint32_t count, void *const *images)
{
    if (!s_inited || !count) return;
    if (count > MAX_IMAGES) count = MAX_IMAGES;

    destroy_targets();
    s_ext.width = width;
    s_ext.height = height;

    if ((VkFormat)format != s_fmt) {
        s_fmt = (VkFormat)format;
        if (s_backend_up) { ImGui_ImplVulkan_Shutdown(); s_backend_up = false; }
        if (!make_render_pass(s_fmt)) return;
    }

    for (uint32_t i = 0; i < count; i++) {
        VkImageViewCreateInfo vci;
        VkFramebufferCreateInfo fci;
        memset(&vci, 0, sizeof vci);
        vci.sType    = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        vci.image    = (VkImage)images[i];
        vci.viewType = VK_IMAGE_VIEW_TYPE_2D;
        vci.format   = s_fmt;
        vci.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        vci.subresourceRange.levelCount = 1;
        vci.subresourceRange.layerCount = 1;
        if (vkCreateImageView(s_dev, &vci, NULL, &s_views[i]) != VK_SUCCESS) return;

        memset(&fci, 0, sizeof fci);
        fci.sType           = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        fci.renderPass      = s_pass;
        fci.attachmentCount = 1;
        fci.pAttachments    = &s_views[i];
        fci.width           = width;
        fci.height          = height;
        fci.layers          = 1;
        if (vkCreateFramebuffer(s_dev, &fci, NULL, &s_fbs[i]) != VK_SUCCESS) return;
        s_n_img = i + 1;
    }

    if (!s_backend_up) {
        /* Value-initialised, not memset: it holds non-trivial members. */
        ImGui_ImplVulkan_InitInfo ii = {};
        ii.ApiVersion         = VK_API_VERSION_1_0;
        ii.Instance           = s_inst;
        ii.PhysicalDevice     = s_pdev;
        ii.Device             = s_dev;
        ii.QueueFamily        = s_qfam;
        ii.Queue              = s_queue;
        ii.DescriptorPoolSize = 16;      /* backend owns the pool */
        ii.MinImageCount      = count < 2 ? 2 : count;
        ii.ImageCount         = count < 2 ? 2 : count;
        ii.PipelineInfoMain.RenderPass  = s_pass;
        ii.PipelineInfoMain.Subpass     = 0;
        ii.PipelineInfoMain.MSAASamples = VK_SAMPLE_COUNT_1_BIT;
        s_backend_up = ImGui_ImplVulkan_Init(&ii);
        if (!s_backend_up)
            fprintf(stderr, "[ui] ImGui Vulkan backend failed; overlay off\n");
    } else {
        ImGui_ImplVulkan_SetMinImageCount(count < 2 ? 2 : count);
    }
}

void ui_shutdown(void)
{
    if (!s_inited) return;
    vkDeviceWaitIdle(s_dev);
    destroy_targets();
    if (s_pass) { vkDestroyRenderPass(s_dev, s_pass, NULL); s_pass = VK_NULL_HANDLE; }
    if (s_backend_up) { ImGui_ImplVulkan_Shutdown(); s_backend_up = false; }
    ImGui_ImplSDL3_Shutdown();
    ImGui::DestroyContext();
    s_inited = false;
}

int ui_visible(void) { return s_visible ? 1 : 0; }

void ui_toggle(void)
{
    if (!s_inited) return;
    s_visible = !s_visible;
    SDL_SetWindowRelativeMouseMode(s_win, false);
    if (!s_visible) gfx_settings_save();      /* closing the menu persists it */
}

int ui_handle_event(const void *sdl_event)
{
    const SDL_Event *e = (const SDL_Event *)sdl_event;
    if (!s_inited || !e) return 0;
    ImGui_ImplSDL3_ProcessEvent(e);
    if (!s_visible) return 0;
    /* With the menu open the keyboard and mouse belong to it. */
    switch (e->type) {
    case SDL_EVENT_KEY_DOWN: case SDL_EVENT_KEY_UP:
    case SDL_EVENT_TEXT_INPUT:
    case SDL_EVENT_MOUSE_MOTION: case SDL_EVENT_MOUSE_WHEEL:
    case SDL_EVENT_MOUSE_BUTTON_DOWN: case SDL_EVENT_MOUSE_BUTTON_UP:
        return 1;
    default:
        return 0;
    }
}

void ui_note_frame(double frame_ms) { s_frame_ms = frame_ms; }

/* ---- the menu ------------------------------------------------------------ */

static void combo_int(const char *label, int *v, const char *const *items, int n)
{
    if (ImGui::BeginCombo(label, items[*v < n ? *v : 0])) {
        for (int i = 0; i < n; i++) {
            bool sel = (*v == i);
            if (ImGui::Selectable(items[i], sel)) { *v = i; gfx_settings_touch(); }
            if (sel) ImGui::SetItemDefaultFocus();
        }
        ImGui::EndCombo();
    }
}

/* game / off / on, as a three-way radio row */
static void tristate(const char *label, int *v, const char *help)
{
    static const char *k_names[3] = { "Game", "Off", "Force" };
    ImGui::PushID(label);
    ImGui::TextUnformatted(label);
    if (help && ImGui::IsItemHovered()) ImGui::SetTooltip("%s", help);
    ImGui::SameLine(190.0f);
    for (int i = 0; i < 3; i++) {
        if (i) ImGui::SameLine();
        if (ImGui::RadioButton(k_names[i], *v == i)) { *v = i; gfx_settings_touch(); }
    }
    ImGui::PopID();
}

static void slider_f(const char *label, float *v, float lo, float hi,
                     const char *fmt, const char *help)
{
    if (ImGui::SliderFloat(label, v, lo, hi, fmt)) gfx_settings_touch();
    if (help && ImGui::IsItemHovered()) ImGui::SetTooltip("%s", help);
}

static void check(const char *label, int *v, const char *help)
{
    bool b = *v != 0;
    if (ImGui::Checkbox(label, &b)) { *v = b; gfx_settings_touch(); }
    if (help && ImGui::IsItemHovered()) ImGui::SetTooltip("%s", help);
}

static void tab_output(void)
{
    static const char *k_aspect[4] = { "Keep 480x272 (letterbox)",
                                       "Integer scale only",
                                       "Stretch to window",
                                       "Force 4:3" };
    static const char *k_filter[2] = { "Nearest (sharp pixels)", "Linear (smooth)" };
    static const char *k_present[3] = { "FIFO (vsync)", "Mailbox (no tearing, no wait)",
                                        "Immediate (tearing allowed)" };
    check("Fullscreen", &g_gfx.fullscreen, "Borderless, at the desktop resolution.");
    if (!g_gfx.fullscreen) {
        if (ImGui::SliderInt("Window scale", &g_gfx.window_scale, 1, 6, "%dx"))
            gfx_settings_touch();
        ImGui::SameLine();
        ImGui::TextDisabled("(%dx%d)", 480 * g_gfx.window_scale,
                            272 * g_gfx.window_scale);
    }
    combo_int("Aspect", &g_gfx.aspect_mode, k_aspect, 4);
    combo_int("Scaling filter", &g_gfx.present_filter, k_filter, 2);
    combo_int("Present mode", &g_gfx.present_mode, k_present, 3);
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Applied when the swapchain is rebuilt "
                          "(resize the window or toggle fullscreen).");
    if (ImGui::ColorEdit3("Letterbox bars", g_gfx.letterbox)) gfx_settings_touch();

    ImGui::SeparatorText("Frame pacing");
    check("Throttle to 59.94 Hz", &g_gfx.throttle,
          "Off runs as fast as the host can, which speeds the game up.");
    if (ImGui::SliderInt("Speed", &g_gfx.speed_percent, 25, 800, "%d%%"))
        gfx_settings_touch();
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Scales the emulated frame time: game logic and audio "
                          "follow it. Needs throttling on.");
    if (ImGui::SliderInt("Frame skip", &g_gfx.frameskip, 0, 5,
                         g_gfx.frameskip ? "%d frames" : "off"))
        gfx_settings_touch();
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Renders the GE list but skips presenting, so the "
                          "emulated clock keeps its pace on a slow host.");
    check("Show FPS", &g_gfx.show_fps, NULL);
    ImGui::SameLine();
    check("Show GE counters", &g_gfx.show_stats, NULL);
}

static void tab_render(void)
{
    static const char *k_texf[3] = { "Game's choice", "Force linear", "Force nearest" };
    if (ImGui::SliderInt("Internal resolution", &g_gfx.res_scale, 1, 4, "%dx"))
        gfx_settings_touch();
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Supersamples the GE render targets: %dx%d instead of "
                          "480x272. Costs GPU fill rate, nothing else.",
                          480 * g_gfx.res_scale, 272 * g_gfx.res_scale);
    combo_int("Texture filter", &g_gfx.tex_filter, k_texf, 3);
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip(
            "Leave this on the game's choice.\n\n"
            "The UI textures pack glyphs edge to edge with no padding, so "
            "forcing linear on a surface the game point-samples pulls the "
            "neighbouring glyph in and leaves a bright line at the seam. "
            "Sharpness comes from internal resolution and mip levels instead; "
            "no preset changes this.");
    if (ImGui::SliderInt("Anisotropy", &g_gfx.anisotropy, 1, 16,
                         g_gfx.anisotropy > 1 ? "%dx" : "off"))
        gfx_settings_touch();
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Sharpens minified textures at grazing angles. "
                          "Ignored where the driver lacks the feature.");
    check("Mipmaps", &g_gfx.mipmaps_on,
          "Builds the reduced levels the game's textures do not ship. The "
          "menu font is stored at twice its drawn size, so without this the "
          "sampler skips every other texel and thin strokes break up. "
          "Takes effect on textures loaded from now on.");

    ImGui::SeparatorText("Backend");
    check("Render to texture", &g_gfx.rtt,
          "Off keeps every draw in the main target: faster, but effects that "
          "read back a rendered surface break.");
}

static void tab_ge(void)
{
    static const char *k_shade[3] = { "Game's choice", "Flat", "Gouraud" };
    ImGui::TextDisabled("Overrides applied to every primitive the game submits.");
    ImGui::Spacing();
    tristate("Fog", &g_gfx.fog, "Per-vertex, computed on the CPU here.");
    tristate("Lighting", &g_gfx.lighting, "Per-vertex lighting, also CPU-side.");
    tristate("Backface culling", &g_gfx.culling, "Off makes the world see-through.");
    tristate("Alpha test", &g_gfx.alpha_test, NULL);
    tristate("Dithering", &g_gfx.dither, "Only visible in 16-bit colour modes.");
    tristate("Depth test", &g_gfx.depth_test, NULL);
    tristate("Depth write", &g_gfx.depth_write, NULL);
    tristate("Blending", &g_gfx.blending, NULL);
    tristate("Texturing", &g_gfx.texturing, "Off draws flat untextured geometry.");
    ImGui::Spacing();
    combo_int("Shading", &g_gfx.shading, k_shade, 3);
}

static void tab_engine(void)
{
    ImGui::SeparatorText("Atmosphere");
    slider_f("Fog distance", &g_gfx.fog_distance, 0.25f, 4.0f, "%.2fx",
             "Moves the far plane, where haze becomes total. Higher lets you "
             "see further into the distance.");
    slider_f("Haze start", &g_gfx.fog_start, 0.25f, 4.0f, "%.2fx",
             "Moves the near plane, where haze begins. Lower thickens the "
             "air close in; higher clears it.");
    ImGui::TextDisabled("The engine stores fog as a near/far pair, so these "
                        "two move independently.");
    check("Override fog colour", &g_gfx.fog_color_force, NULL);
    if (g_gfx.fog_color_force)
        if (ImGui::ColorEdit3("Fog colour", g_gfx.fog_color)) gfx_settings_touch();

    ImGui::SeparatorText("Cut geometry");
    check("Skip lines", &g_gfx.skip_lines, NULL);
    ImGui::SameLine();
    check("Skip points", &g_gfx.skip_points, NULL);
}

static void tab_colour(void)
{
    slider_f("Brightness", &g_gfx.brightness, -0.5f, 0.5f, "%.2f", NULL);
    slider_f("Contrast", &g_gfx.contrast, 0.5f, 2.0f, "%.2f", NULL);
    slider_f("Saturation", &g_gfx.saturation, 0.0f, 2.0f, "%.2f",
             "0 is greyscale.");
    slider_f("Gamma", &g_gfx.gamma, 0.5f, 2.5f, "%.2f", NULL);
    ImGui::Spacing();
    if (ImGui::Button("Neutral")) {
        g_gfx.brightness = 0.0f;
        g_gfx.contrast = g_gfx.saturation = g_gfx.gamma = 1.0f;
        gfx_settings_touch();
    }
    ImGui::TextDisabled("Applied while the frame is converted for display, so "
                        "screenshots and frame dumps stay untouched.");
}

static void tab_input(void)
{
    ImGui::TextDisabled("Controls the PSP did not have. The engine already\n"
                        "contained the code for all three -- there was simply\n"
                        "no second stick, no trigger travel and no stick click\n"
                        "for it to read.");
    ImGui::Spacing();
    check("Right stick moves the camera", &g_gfx.rstick_cam,
          "Uses the engine's own look limits: 170 degrees in the chase views, "
          "80 in the cockpit, which never looks above the horizon. The "
          "scripted and replay cameras are left alone.");
    if (g_gfx.rstick_cam) {
        ImGui::Indent();
        if (ImGui::SliderInt("Look sensitivity", &g_gfx.rstick_sens,
                             10, 400, "%d%%"))
            gfx_settings_touch();
        check("Invert look", &g_gfx.rstick_invert, NULL);
        ImGui::Unindent();
    }
    ImGui::Spacing();
    check("Analog rudder on the triggers", &g_gfx.analog_yaw,
          "The aircraft yaws by as much as the trigger is pressed, instead of "
          "ramping to full over twenty frames. The shoulder buttons still "
          "work exactly as they did.");
    check("R3 changes view", &g_gfx.r3_view,
          "Cycles the same three views, in the same order, as the game's own "
          "view button.");
    ImGui::Spacing();
    ImGui::TextDisabled("Keyboard: IJKL looks around, C changes view.");
}

static void tab_debug(void)
{
    check("GE counters to the log", &g_gfx.ge_stats_log, NULL);
    check("GPU backend logging", &g_gfx.ge_cmd_log, NULL);
    check("Dump textures", &g_gfx.tex_dump, "Writes every uploaded texture.");
    if (ImGui::SliderInt("Frame dump interval", &g_gfx.frame_dump_every, 0, 600,
                         g_gfx.frame_dump_every ? "every %d frames" : "off"))
        gfx_settings_touch();
    ImGui::Spacing();
    ImGui::SeparatorText("This session");
    ImGui::Text("%.1f fps  (%.2f ms/frame)", s_fps, s_frame_ms);
    ImGui::Text("GE primitives: %lu", g_ge_prim_count);
    ImGui::Text("Settings file: %s", gfx_settings_path());
}

static void draw_menu(void)
{
    ImGui::SetNextWindowSize(ImVec2(560, 460), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowPos(ImVec2(40, 40), ImGuiCond_FirstUseEver);
    if (!ImGui::Begin("Graphics  (F4 closes)", NULL, ImGuiWindowFlags_NoCollapse)) {
        ImGui::End();
        return;
    }

    int cur = gfx_preset_current();
    ImGui::TextUnformatted("Preset:");
    for (int i = 0; i < 4; i++) {
        ImGui::SameLine();
        bool on = (cur == i);
        if (on) ImGui::PushStyleColor(ImGuiCol_Button,
                                      ImGui::GetStyleColorVec4(ImGuiCol_ButtonActive));
        if (ImGui::Button(gfx_preset_name(i), ImVec2(78, 0))) gfx_preset_apply(i);
        if (on) ImGui::PopStyleColor();
    }
    ImGui::SameLine();
    ImGui::TextDisabled("%s", cur < 0 ? "(custom)" : "");

    if (ImGui::BeginTabBar("tabs")) {
        if (ImGui::BeginTabItem("Output"))  { tab_output(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Renderer")){ tab_render(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("GE"))      { tab_ge();     ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Engine"))  { tab_engine(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Colour"))  { tab_colour(); ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Input"))   { tab_input();  ImGui::EndTabItem(); }
        if (ImGui::BeginTabItem("Debug"))   { tab_debug();  ImGui::EndTabItem(); }
        ImGui::EndTabBar();
    }

    ImGui::Separator();
    if (ImGui::Button("Save now"))   gfx_settings_save();
    ImGui::SameLine();
    if (ImGui::Button("Reload"))     gfx_settings_load();
    ImGui::SameLine();
    if (ImGui::Button("Defaults"))   gfx_settings_defaults();
    ImGui::SameLine();
    ImGui::TextDisabled("saved to %s on close", gfx_settings_path());
    ImGui::End();
}

static void draw_readout(void)
{
    if (!g_gfx.show_fps && !g_gfx.show_stats) return;
    ImGui::SetNextWindowPos(ImVec2(8, 8), ImGuiCond_Always);
    ImGui::SetNextWindowBgAlpha(0.35f);
    if (ImGui::Begin("readout", NULL,
                     ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoInputs
                     | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoNav
                     | ImGuiWindowFlags_NoSavedSettings)) {
        if (g_gfx.show_fps)
            ImGui::Text("%.1f fps game   %.1f present   %.2f ms",
                        s_game_fps, s_fps, s_frame_ms);
        if (g_gfx.show_stats) {
            ImGui::Text("%dx%d  x%d", 480 * g_gfx.res_scale, 272 * g_gfx.res_scale,
                        g_gfx.res_scale);
            ImGui::Text("prims %lu", g_ge_prim_count);
        }
    }
    ImGui::End();
}

void ui_new_frame(void)
{
    if (!s_inited || !s_backend_up) return;

    uint64_t now = SDL_GetTicks();
    s_frames++;
    if (now - s_last_ticks >= 500) {
        unsigned g = display_game_frames();
        s_fps = s_frames * 1000.0 / (double)(now - s_last_ticks);
        s_frame_ms = (double)(now - s_last_ticks) / (s_frames ? s_frames : 1);
        s_game_fps = (g - s_last_game_frames) * 1000.0
                   / (double)(now - s_last_ticks);
        s_last_game_frames = g;
        s_frames = 0;
        s_last_ticks = now;
    }

    ImGui_ImplVulkan_NewFrame();
    ImGui_ImplSDL3_NewFrame();
    ImGui::NewFrame();
    if (s_visible) draw_menu();
    draw_readout();
    ImGui::Render();
}

int ui_render(void *cmd, uint32_t index)
{
    VkRenderPassBeginInfo rbi;
    ImDrawData *dd;

    if (!s_inited || !s_backend_up || index >= s_n_img || !s_fbs[index]) return 0;
    dd = ImGui::GetDrawData();
    if (!dd) return 0;

    memset(&rbi, 0, sizeof rbi);
    rbi.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    rbi.renderPass        = s_pass;
    rbi.framebuffer       = s_fbs[index];
    rbi.renderArea.extent = s_ext;
    vkCmdBeginRenderPass((VkCommandBuffer)cmd, &rbi, VK_SUBPASS_CONTENTS_INLINE);
    ImGui_ImplVulkan_RenderDrawData(dd, (VkCommandBuffer)cmd);
    vkCmdEndRenderPass((VkCommandBuffer)cmd);
    return 1;                     /* the pass left the image in PRESENT_SRC */
}
