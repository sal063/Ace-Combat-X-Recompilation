/* runtime/hle/threadman.h -- scheduler interface used by the rest of the
 * runtime. */
#ifndef PSPRECO_THREADMAN_H
#define PSPRECO_THREADMAN_H

#include "pspreco.h"

void sysmem_set_partition_begin(u32 module_end);   /* sysmem.c */
u32  sysmem_alloc_high(const char *name, u32 size);
int  sysmem_free_at(u32 addr);                     /* thread stacks */

/* Run every enabled handler registered for `intr`. Returns how many ran.
 * Defined in runtime/hle/intrman.c. */
int  intrman_dispatch(CpuCtx *c, u8 *ram, u32 intr);
int  intrman_vblank_intr(void);

/* Frame heartbeat, in runtime/hle/display.c; the scheduler calls
 * display_vblank() when the clock crosses a frame boundary. */
void display_vblank(CpuCtx *c, u8 *ram);
u32  display_frame_us(void);

/* Deliver any GE finish/signal interrupts the list processor raised.
 * Defined in runtime/hle/ge.c. */
int  ge_deliver_interrupts(CpuCtx *c, u8 *ram);
/* Print every GE command id the run issued. Defined in runtime/hle/ge.c. */
void ge_report_command_usage(void);

/* Block the caller until the start of the next vertical blank. */
void threadman_wait_vblank(void);

/* `boot` supplies $gp for the context interrupt handlers run on. */
void threadman_init(u8 *ram, const CpuCtx *boot);
void threadman_run(void);          /* run until nothing is runnable */
void threadman_yield(void);
void threadman_block_us(u64 usec); /* blocking wait; NOT the same as yield */
u64  threadman_now_us(void);       /* emulated clock, never host wall time */
u64  threadman_vblank_count(void); /* frames elapsed; for frame-gated logs */
void threadman_advance_us(u64 usec);
/* Called after every dispatched HLE call: breaks guest polling loops that
 * would otherwise spin without ever letting the emulated clock move. */
void threadman_note_hle_call(void);
int  threadman_current_uid(void);
/* Execution-context id for the differential trace: a thread uid, or -1 for
 * boot/module_start, or -2 for the interrupt context. */
int  threadman_trace_context(void);
void threadman_suspend_intr(void);
void threadman_resume_intr(void);
void threadman_request_exit(void);

/* Call a registered callback's guest function right now, on the current
 * thread, as (arg1, arg2, common). Returns 0 if there is no such callback. */
int  threadman_invoke_callback(CpuCtx *c, u8 *ram, int cbid, u32 a1, u32 a2);

/* Queue a notification for delivery at the next callback point, and run
 * everything queued. A callback never fires at registration time. */
void threadman_notify_callback(int cbid, u32 a1, u32 a2);
int  threadman_deliver_callbacks(CpuCtx *c, u8 *ram);

#endif
