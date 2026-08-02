/* runtime/host/ui_overlay.h -- the F4 graphics overlay (Dear ImGui).
 *
 * Handles stay void* so the presenter's C and the overlay's C++ agree without
 * dragging Vulkan/SDL types through a shared header. Every entry point is a
 * no-op when the overlay failed to initialise, so the presenter never has to
 * branch on whether the UI exists.
 */
#ifndef PSPRECO_UI_OVERLAY_H
#define PSPRECO_UI_OVERLAY_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    void    *window;          /* SDL_Window*      */
    void    *instance;        /* VkInstance       */
    void    *physical;        /* VkPhysicalDevice */
    void    *device;          /* VkDevice         */
    void    *queue;           /* VkQueue          */
    uint32_t queue_family;
} UiVkInfo;

int  ui_init(const UiVkInfo *vk);
void ui_shutdown(void);

/* Called after every swapchain (re)create: rebuilds the render pass targets.
 * `images` is an array of VkImage. */
void ui_swapchain(uint32_t format, uint32_t width, uint32_t height,
                  uint32_t count, void *const *images);

/* Feed SDL events. Returns 1 when the overlay consumed the event and the game
 * must not see it. */
int  ui_handle_event(const void *sdl_event);

int  ui_visible(void);
void ui_toggle(void);

/* Build this frame's UI (menu + any always-on readouts). Cheap when hidden. */
void ui_new_frame(void);

/* Record the overlay into `cmd` for swapchain image `index`, leaving the image
 * in PRESENT_SRC_KHR. Returns 0 if the caller must do that transition itself. */
int  ui_render(void *cmd, uint32_t index);

/* Per-frame numbers the overlay shows. */
void ui_note_frame(double frame_ms);

#ifdef __cplusplus
}
#endif

#endif /* PSPRECO_UI_OVERLAY_H */
