/* runtime/hle/utility_sysparam.c  <-  include/utility/utility_sysparam.h
 *
 * sceUtility system parameters, plus the 2.7-era AV/NET module load helpers
 * that live in the same import library. There is no per-title state behind
 * the parameters, so a fixed profile is the whole contract: a US-region PSP,
 * English display language, cross-as-enter. Values are named SDK constants,
 * never bare numbers.
 */

#include "hle.h"
#include "sce_errors.h"

/* --- parameter ids (utility_sysparam.h) --------------------------------- */
#define SCE_UTILITY_SYSTEM_PARAM_NICKNAME              1
#define SCE_UTILITY_SYSTEM_PARAM_ADHOC_CHANNEL         2
#define SCE_UTILITY_SYSTEM_PARAM_WLAN_POWERSAVE        3
#define SCE_UTILITY_SYSTEM_PARAM_DATE_NOTATION         4
#define SCE_UTILITY_SYSTEM_PARAM_TIME_NOTATION         5
#define SCE_UTILITY_SYSTEM_PARAM_TIMEZONE              6
#define SCE_UTILITY_SYSTEM_PARAM_SUMMERTIME            7
#define SCE_UTILITY_SYSTEM_PARAM_LANGUAGE              8
#define SCE_UTILITY_SYSTEM_PARAM_CTRL_ASSIGN           9
#define SCE_UTILITY_SYSTEM_PARAM_GAME_PARENTAL_LEVEL  10

/* --- parameter values --------------------------------------------------- */
#define SCE_UTILITY_SYSTEM_PARAM_WLAN_POWERSAVE_OFF     0  /* powersave off */
#define SCE_UTILITY_SYSTEM_PARAM_DATE_NOTATION_MMDDYYYY 1  /* MM/DD/YYYY   */
#define SCE_UTILITY_SYSTEM_PARAM_TIME_NOTATION_12HOUR   1  /* 12-hour clock */
#define SCE_UTILITY_LANG_ENGLISH                        1  /* English       */
#define SCE_UTILITY_CTRL_ASSIGN_CROSS_IS_ENTER          1  /* cross = enter */
#define SCE_UTILITY_GAME_PARENTAL_OFF                   0  /* no parental lock */

/* --- error codes (utility_sysparam.h) ----------------------------------- */
#define SCE_UTILITY_COMMON_ERROR_UNEXPECTED_PARAMTYPE 0x80110101u
#define SCE_UTILITY_COMMON_ERROR_UNEXPECTED_PARAMSIZE 0x80110102u
#define SCE_UTILITY_COMMON_ERROR_INVALID_PARAMID      0x80110103u

/* --- error codes (utility_module.h) ------------------------------------- */
#define SCE_UTILITY_MODULE_ERROR_INVALID_ID     0x80111101u
#define SCE_UTILITY_MODULE_ERROR_ALREADY_LOADED 0x80111102u
#define SCE_UTILITY_MODULE_ERROR_NOT_LOADED     0x80111103u

/* UTC + summer time off: the only offsets that cannot silently skew a
 * replay-style game clock. */
#define PSPRECO_TIMEZONE_MINUTES 0
#define PSPRECO_SUMMERTIME_OFF   0
#define PSPRECO_ADHOC_CHANNEL_AUTO 0   /* 0 = auto */

void hle_sceUtilityGetSystemParamInt(CpuCtx *c, u8 *ram)
{
    int id = (int)HLE_A0;
    u32 out = HLE_A1;
    s32 v;

    switch (id) {
    case SCE_UTILITY_SYSTEM_PARAM_ADHOC_CHANNEL:
        v = PSPRECO_ADHOC_CHANNEL_AUTO; break;
    case SCE_UTILITY_SYSTEM_PARAM_WLAN_POWERSAVE:
        v = SCE_UTILITY_SYSTEM_PARAM_WLAN_POWERSAVE_OFF; break;
    case SCE_UTILITY_SYSTEM_PARAM_DATE_NOTATION:
        v = SCE_UTILITY_SYSTEM_PARAM_DATE_NOTATION_MMDDYYYY; break;
    case SCE_UTILITY_SYSTEM_PARAM_TIME_NOTATION:
        v = SCE_UTILITY_SYSTEM_PARAM_TIME_NOTATION_12HOUR; break;
    case SCE_UTILITY_SYSTEM_PARAM_TIMEZONE:
        v = PSPRECO_TIMEZONE_MINUTES; break;
    case SCE_UTILITY_SYSTEM_PARAM_SUMMERTIME:
        v = PSPRECO_SUMMERTIME_OFF; break;
    case SCE_UTILITY_SYSTEM_PARAM_LANGUAGE:
        v = SCE_UTILITY_LANG_ENGLISH; break;
    case SCE_UTILITY_SYSTEM_PARAM_CTRL_ASSIGN:
        v = SCE_UTILITY_CTRL_ASSIGN_CROSS_IS_ENTER; break;
    case SCE_UTILITY_SYSTEM_PARAM_GAME_PARENTAL_LEVEL:
        v = SCE_UTILITY_GAME_PARENTAL_OFF; break;
    case SCE_UTILITY_SYSTEM_PARAM_NICKNAME:
        /* String parameter through the int entry point. */
        hle_log("[hle] sceUtilityGetSystemParamInt(NICKNAME) -> "
                "UNEXPECTED_PARAMTYPE");
        HLE_RET(SCE_UTILITY_COMMON_ERROR_UNEXPECTED_PARAMTYPE);
        return;
    default:
        hle_log("[hle] sceUtilityGetSystemParamInt(id=%d) -> INVALID_PARAMID",
                id);
        HLE_RET(SCE_UTILITY_COMMON_ERROR_INVALID_PARAMID);
        return;
    }

    if (out) mem_w32(ram, out, (u32)v);
    hle_log("[hle] sceUtilityGetSystemParamInt(id=%d) -> %d", id, (int)v);
    HLE_RET(0);
}

/* NICKNAME is the only string parameter; the Utility Reference requires a
 * 128-byte buffer for it. */
#define PSPRECO_NICKNAME       "PSPRECO"
#define NICKNAME_BUFSIZE_MIN   128u

void hle_sceUtilityGetSystemParamString(CpuCtx *c, u8 *ram)
{
    int id = (int)HLE_A0;
    u32 buf = HLE_A1;
    u32 bufsize = HLE_A2;
    static const char name[] = PSPRECO_NICKNAME;
    unsigned i;

    if (id != SCE_UTILITY_SYSTEM_PARAM_NICKNAME) {
        hle_log("[hle] sceUtilityGetSystemParamString(id=%d) -> "
                "UNEXPECTED_PARAMTYPE", id);
        HLE_RET(SCE_UTILITY_COMMON_ERROR_UNEXPECTED_PARAMTYPE);
        return;
    }
    if (bufsize < NICKNAME_BUFSIZE_MIN) {
        hle_log("[hle] sceUtilityGetSystemParamString(NICKNAME, bufsize=%u) -> "
                "UNEXPECTED_PARAMSIZE", (unsigned)bufsize);
        HLE_RET(SCE_UTILITY_COMMON_ERROR_UNEXPECTED_PARAMSIZE);
        return;
    }
    for (i = 0; i < sizeof name; i++)
        mem_w8(ram, buf + i, (u8)name[i]);
    hle_log("[hle] sceUtilityGetSystemParamString(NICKNAME) -> \"%s\"", name);
    HLE_RET(0);
}

/* --- 2.7-era module load helpers ---------------------------------------- */
/* sceUtilityLoadAvModule / LoadNetModule / UnloadNetModule load a PRX that
 * provides sceMpeg/sceAtrac3plus/sceSasCore or networking. Those surfaces are
 * HLE'd directly, so load is a tracked success; Unload of a never-loaded id
 * returns the documented NOT_LOADED. */

#define MAX_UTILITY_MODULES 32
static u32 g_loaded[MAX_UTILITY_MODULES];
static unsigned g_loaded_n;

static int module_index(u32 id)
{
    unsigned i;
    for (i = 0; i < g_loaded_n; i++)
        if (g_loaded[i] == id) return (int)i;
    return -1;
}

static void module_load(CpuCtx *c, u8 *ram, const char *what)
{
    u32 id = HLE_A0;
    (void)ram;
    if (module_index(id) >= 0) {
        hle_log("[hle] %s(%04x) -> ALREADY_LOADED", what, id);
        HLE_RET(SCE_UTILITY_MODULE_ERROR_ALREADY_LOADED);
        return;
    }
    if (g_loaded_n >= MAX_UTILITY_MODULES) {
        hle_log("[hle] %s(%04x) -> INVALID_ID (tracker full)", what, id);
        HLE_RET(SCE_UTILITY_MODULE_ERROR_INVALID_ID);
        return;
    }
    g_loaded[g_loaded_n++] = id;
    hle_log("[hle] %s(%04x) -- surface is HLE'd, nothing to load", what, id);
    HLE_RET(0);
}

static void module_unload(CpuCtx *c, u8 *ram, const char *what)
{
    u32 id = HLE_A0;
    int i = module_index(id);
    (void)ram;
    if (i < 0) {
        hle_log("[hle] %s(%04x) -> NOT_LOADED", what, id);
        HLE_RET(SCE_UTILITY_MODULE_ERROR_NOT_LOADED);
        return;
    }
    g_loaded[i] = g_loaded[--g_loaded_n];
    hle_log("[hle] %s(%04x)", what, id);
    HLE_RET(0);
}

void hle_sceUtilityLoadAvModule(CpuCtx *c, u8 *ram)
{
    module_load(c, ram, "sceUtilityLoadAvModule");
}

void hle_sceUtilityLoadNetModule(CpuCtx *c, u8 *ram)
{
    module_load(c, ram, "sceUtilityLoadNetModule");
}

void hle_sceUtilityUnloadNetModule(CpuCtx *c, u8 *ram)
{
    module_unload(c, ram, "sceUtilityUnloadNetModule");
}
