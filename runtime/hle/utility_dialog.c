/* runtime/hle/utility_dialog.c -- the sceUtility system dialogs (OSK and
 * savedata), from utility_common.h / utility_osk.h / utility_savedata.h.
 *
 * Every dialog has the same four-call shape: InitStart -> INITIALIZE,
 * Update advances RUNNING -> FINISHED (one frame is the whole dialog here),
 * GetStatus reports the state, ShutdownStart -> SHUTDOWN. No dialog is drawn
 * in this build; each opens, reports FINISHED, and closes, with `result` set
 * to CANCELED so the game treats it as "the user backed out".
 */

#include "hle.h"
#include "sce_errors.h"

/* --- states and results (utility_common.h) ------------------------------ */
#define SCE_UTILITY_COMMON_STATUS_NONE        0
#define SCE_UTILITY_COMMON_STATUS_INITIALIZE  1
#define SCE_UTILITY_COMMON_STATUS_RUNNING     2
#define SCE_UTILITY_COMMON_STATUS_FINISHED    3
#define SCE_UTILITY_COMMON_STATUS_SHUTDOWN    4

#define SCE_UTILITY_COMMON_RESULT_OK          0
#define SCE_UTILITY_COMMON_RESULT_CANCELED    1

#define SCE_UTILITY_COMMON_ERROR_INVALID_STATUS  0x80110001u
#define SCE_UTILITY_COMMON_ERROR_INVALID_ADDRESS 0x80110002u

/* SceUtilityParamBase: eight ints, `result` last. */
#define PARAM_BASE_RESULT_OFFSET 28u

/* SceUtilityOskInputFieldResult: UNEDITED (0) is the truthful answer for a
 * keyboard the user never saw. */
#define SCE_UTILITY_OSK_INPUT_FIELD_RESULT_UNEDITED 0

typedef struct {
    const char *name;
    int  status;
    u32  param;          /* guest address of the caller's param struct */
} Dialog;

static Dialog g_osk      = { "sceUtilityOsk", SCE_UTILITY_COMMON_STATUS_NONE, 0 };
static Dialog g_savedata = { "sceUtilitySavedata", SCE_UTILITY_COMMON_STATUS_NONE, 0 };

static void dialog_init_start(CpuCtx *c, u8 *ram, Dialog *d, int result)
{
    u32 param = HLE_A0;
    if (d->status != SCE_UTILITY_COMMON_STATUS_NONE) {
        hle_log("[hle] %sInitStart: already open (status %d)",
                d->name, d->status);
        HLE_RET(SCE_UTILITY_COMMON_ERROR_INVALID_STATUS);
        return;
    }
    if (!param) {
        hle_log("[hle] %sInitStart(NULL) -> INVALID_ADDRESS", d->name);
        HLE_RET(SCE_UTILITY_COMMON_ERROR_INVALID_ADDRESS);
        return;
    }
    d->param = param;
    d->status = SCE_UTILITY_COMMON_STATUS_INITIALIZE;
    /* Write the outcome now: the game reads it once GetStatus reports
     * FINISHED, and by then Update has already run. */
    mem_w32(ram, param + PARAM_BASE_RESULT_OFFSET, (u32)result);
    hle_log("[hle] %sInitStart(param=%08x) -- no dialog is presented in this "
            "build; it will report %s", d->name, param,
            result == SCE_UTILITY_COMMON_RESULT_CANCELED ? "CANCELED" : "OK");
    HLE_RET(0);
}

/* Update draws one frame; with nothing to draw, one frame is the dialog. */
static void dialog_update(CpuCtx *c, u8 *ram, Dialog *d)
{
    (void)ram;
    if (d->status == SCE_UTILITY_COMMON_STATUS_RUNNING)
        d->status = SCE_UTILITY_COMMON_STATUS_FINISHED;
    HLE_RET(0);
}

/* GetStatus self-advances INITIALIZE -> RUNNING and SHUTDOWN -> NONE: games
 * poll GetStatus and call Update only in RUNNING (Sony's msgdialog sample
 * does exactly this), so a dialog that needs Update to leave INITIALIZE
 * hangs the frame loop forever. One step per poll visits every state in
 * order. */
static void dialog_get_status(CpuCtx *c, u8 *ram, Dialog *d)
{
    int reported = d->status;
    (void)ram;
    if (d->status == SCE_UTILITY_COMMON_STATUS_INITIALIZE) {
        d->status = SCE_UTILITY_COMMON_STATUS_RUNNING;
    } else if (d->status == SCE_UTILITY_COMMON_STATUS_SHUTDOWN) {
        d->status = SCE_UTILITY_COMMON_STATUS_NONE;
        d->param = 0;
    }
    HLE_RET(reported);
}

static void dialog_shutdown_start(CpuCtx *c, u8 *ram, Dialog *d)
{
    (void)ram;
    if (d->status == SCE_UTILITY_COMMON_STATUS_NONE) {
        hle_log("[hle] %sShutdownStart: not open", d->name);
        HLE_RET(SCE_UTILITY_COMMON_ERROR_INVALID_STATUS);
        return;
    }
    d->status = SCE_UTILITY_COMMON_STATUS_SHUTDOWN;
    hle_log("[hle] %sShutdownStart()", d->name);
    HLE_RET(0);
}

/* --- OSK ---------------------------------------------------------------- */
/* Text is collected by a blocking host input box (runtime/host/osk_win.c).
 * Field layout below is the measured 0x34-byte form this title passes, NOT
 * the firmware header's newer 0x2C SceUtilityOskInputFieldInfo (which lacks
 * the per-field result) -- do not "fix" it to match the header. */
#define OSK_FIELD_STRIDE   0x34u
#define OSK_F_DESC         0x1Cu
#define OSK_F_INTEXT       0x20u
#define OSK_F_OUTLEN       0x24u
#define OSK_F_OUTBUF       0x28u
#define OSK_F_RESULT       0x2Cu
#define OSK_F_LIMIT        0x30u

int osk_host_input(const unsigned short *desc, const unsigned short *initial,
                   unsigned short *out, int cap);

static void osk_read_utf16(u8 *ram, u32 addr, unsigned short *out, int max)
{
    int i = 0;
    if (addr)
        for (; i < max - 1; i++) {
            unsigned short ch = (unsigned short)mem_r16(ram, addr + (u32)i * 2u);
            if (!ch) break;
            out[i] = ch;
        }
    out[i] = 0;
}

static u32 osk_execute(u8 *ram, u32 param)
{
    u32 nf = mem_r32(ram, param + 0x30u);
    u32 fields = mem_r32(ram, param + 0x34u);
    u32 i;

    if (nf < 1 || nf > 8 || !fields) return SCE_UTILITY_COMMON_RESULT_CANCELED;
    for (i = 0; i < nf; i++) {
        u32 f = fields + i * OSK_FIELD_STRIDE;
        u32 desc_a = mem_r32(ram, f + OSK_F_DESC);
        u32 in_a = mem_r32(ram, f + OSK_F_INTEXT);
        u32 out_len = mem_r32(ram, f + OSK_F_OUTLEN);
        u32 out_a = mem_r32(ram, f + OSK_F_OUTBUF);
        u32 limit = mem_r32(ram, f + OSK_F_LIMIT);
        unsigned short desc[128], intext[256], out[256];
        int cap, ok, j;

        osk_read_utf16(ram, desc_a, desc, 128);
        osk_read_utf16(ram, in_a, intext, 256);
        cap = out_len ? (int)out_len : 256;    /* u16 units incl. NUL */
        if (limit && (int)limit + 1 < cap) cap = (int)limit + 1;
        if (cap > 256) cap = 256;
        memcpy(out, intext, sizeof out);
        ok = osk_host_input(desc, intext, out, cap);
        if (out_a) {
            const unsigned short *w = ok ? out : intext;
            for (j = 0; w[j] && j < cap - 1; j++)
                mem_w16(ram, out_a + (u32)j * 2u, w[j]);
            mem_w16(ram, out_a + (u32)j * 2u, 0u);
        }
        /* Per-field result: 2 = text changed, 1 = cancelled. */
        mem_w32(ram, f + OSK_F_RESULT, ok ? 2u : 1u);
        hle_log("[hle] osk field %u -> %s", i, ok ? "ok" : "cancel");
    }
    return SCE_UTILITY_COMMON_RESULT_OK;
}

void hle_sceUtilityOskInitStart(CpuCtx *c, u8 *ram)
{
    u32 result = HLE_A0 ? osk_execute(ram, HLE_A0)
                        : SCE_UTILITY_COMMON_RESULT_CANCELED;
    dialog_init_start(c, ram, &g_osk, result);
}
void hle_sceUtilityOskUpdate(CpuCtx *c, u8 *ram)
{
    dialog_update(c, ram, &g_osk);
}
void hle_sceUtilityOskGetStatus(CpuCtx *c, u8 *ram)
{
    dialog_get_status(c, ram, &g_osk);
}
void hle_sceUtilityOskShutdownStart(CpuCtx *c, u8 *ram)
{
    dialog_shutdown_start(c, ram, &g_osk);
}

/* --- savedata ----------------------------------------------------------- */
/* The whole operation runs synchronously in savedata_execute(); the dialog
 * states the game polls afterwards self-advance as above. */
u32 savedata_execute(u8 *ram, u32 param);   /* runtime/hle/savedata.c */

void hle_sceUtilitySavedataInitStart(CpuCtx *c, u8 *ram)
{
    u32 result = HLE_A0 ? savedata_execute(ram, HLE_A0)
                        : SCE_UTILITY_COMMON_RESULT_CANCELED;
    dialog_init_start(c, ram, &g_savedata, result);
}
void hle_sceUtilitySavedataUpdate(CpuCtx *c, u8 *ram)
{
    dialog_update(c, ram, &g_savedata);
}
void hle_sceUtilitySavedataGetStatus(CpuCtx *c, u8 *ram)
{
    dialog_get_status(c, ram, &g_savedata);
}
void hle_sceUtilitySavedataShutdownStart(CpuCtx *c, u8 *ram)
{
    dialog_shutdown_start(c, ram, &g_savedata);
}
