/* runtime/host/osk_win.c -- native text entry standing in for the PSP OSK.
 * A blocking modal dialog is behaviourally equivalent: the game polls
 * OskGetStatus and sees FINISHED once the user confirms. */

#include "osk_host.h"

#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string.h>

#define ID_EDIT 100
#define ID_DESC 101

typedef struct {
    const WCHAR *initial;
    WCHAR *out;
    int cap;            /* characters including terminator */
} OskCtx;

static INT_PTR CALLBACK osk_proc(HWND dlg, UINT msg, WPARAM wp, LPARAM lp)
{
    static OskCtx *ctx;
    switch (msg) {
    case WM_INITDIALOG:
        ctx = (OskCtx *)lp;
        if (ctx->initial) SetDlgItemTextW(dlg, ID_EDIT, ctx->initial);
        SendDlgItemMessageW(dlg, ID_EDIT, EM_SETLIMITTEXT,
                            (WPARAM)(ctx->cap - 1), 0);
        SendDlgItemMessageW(dlg, ID_EDIT, EM_SETSEL, 0, -1);
        SetFocus(GetDlgItem(dlg, ID_EDIT));
        return FALSE;                       /* we set focus ourselves */
    case WM_COMMAND:
        if (LOWORD(wp) == IDOK) {
            GetDlgItemTextW(dlg, ID_EDIT, ctx->out, ctx->cap);
            EndDialog(dlg, 1);
            return TRUE;
        }
        if (LOWORD(wp) == IDCANCEL) { EndDialog(dlg, 0); return TRUE; }
        break;
    }
    return FALSE;
}

/* Append a WORD-aligned item to the in-memory dialog template. */
static WORD *dlg_item(WORD *p, DWORD style, short x, short y, short cx,
                      short cy, WORD id, WORD cls, const WCHAR *text)
{
    DLGITEMTEMPLATE *it;
    size_t n;
    p = (WORD *)(((UINT_PTR)p + 3) & ~(UINT_PTR)3);     /* DWORD align */
    it = (DLGITEMTEMPLATE *)p;
    it->style = style;
    it->dwExtendedStyle = 0;
    it->x = x; it->y = y; it->cx = cx; it->cy = cy;
    it->id = id;
    p = (WORD *)(it + 1);
    *p++ = 0xFFFF;
    *p++ = cls;                                         /* system class atom */
    n = wcslen(text) + 1;
    memcpy(p, text, n * 2);
    p += n;
    *p++ = 0;                                           /* no creation data */
    return p;
}

int osk_host_input(const unsigned short *desc, const unsigned short *initial,
                   unsigned short *out, int cap)
{
    static BYTE buf[2048];
    DLGTEMPLATE *t;
    WORD *p;
    OskCtx ctx;
    HWND owner;
    INT_PTR r;

    if (!out || cap < 2) return 0;
    memset(buf, 0, sizeof buf);
    t = (DLGTEMPLATE *)buf;
    t->style = DS_MODALFRAME | DS_CENTER | DS_SETFONT | WS_POPUP
             | WS_CAPTION | WS_SYSMENU;
    t->cdit = 4;
    t->x = 0; t->y = 0; t->cx = 220; t->cy = 74;
    p = (WORD *)(t + 1);
    *p++ = 0;                                           /* no menu */
    *p++ = 0;                                           /* default class */
    { const WCHAR *s = L"Enter text"; size_t n = wcslen(s) + 1;
      memcpy(p, s, n * 2); p += n; }
    *p++ = 9;                                           /* 9pt (DS_SETFONT) */
    { const WCHAR *s = L"Segoe UI"; size_t n = wcslen(s) + 1;
      memcpy(p, s, n * 2); p += n; }

    p = dlg_item(p, WS_CHILD | WS_VISIBLE | SS_LEFT, 8, 6, 204, 10, ID_DESC,
                 0x0082, (desc && *desc) ? (const WCHAR *)desc
                                         : L"Enter a name:");
    p = dlg_item(p, WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP
                 | ES_AUTOHSCROLL, 8, 20, 204, 13, ID_EDIT, 0x0081, L"");
    p = dlg_item(p, WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                 102, 50, 52, 15, IDOK, 0x0080, L"OK");
    p = dlg_item(p, WS_CHILD | WS_VISIBLE | WS_TABSTOP, 160, 50, 52, 15,
                 IDCANCEL, 0x0080, L"Cancel");
    (void)p;

    ctx.initial = (const WCHAR *)initial;
    ctx.out = (WCHAR *)out;
    ctx.cap = cap;
    owner = GetActiveWindow();
    r = DialogBoxIndirectParamW(GetModuleHandleW(NULL), t, owner, osk_proc,
                                (LPARAM)&ctx);
    return r == 1;
}

#else

int osk_host_input(const unsigned short *desc, const unsigned short *initial,
                   unsigned short *out, int cap)
{ (void)desc; (void)initial; (void)out; (void)cap; return 0; }

#endif
