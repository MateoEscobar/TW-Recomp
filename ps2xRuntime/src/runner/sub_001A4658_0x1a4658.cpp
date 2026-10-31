#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4658
// Address: 0x1a4658 - 0x1a4668
void sub_001A4658_0x1a4658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4658_0x1a4658");
#endif

    switch (ctx->pc) {
        case 0x1a4660u: goto label_1a4660;
        default: break;
    }

    ctx->pc = 0x1a4658u;

    // 0x1a4658: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1A4658u;
    SET_GPR_U32(ctx, 31, 0x1A4660u);
    ctx->pc = 0x1A465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4658u;
    // 0x1a465c: 0x26240120  addiu       $a0, $s1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1A4658u, 0x1A4660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4660u;
label_1a4660:
    // 0x1a4660: 0xc0734a2  jal         func_1CD288
    ctx->pc = 0x1A4660u;
    SET_GPR_U32(ctx, 31, 0x1A4668u);
    ctx->pc = 0x1A4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4660u;
    // 0x1a4664: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1A4660u, 0x1A4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4668u;
}
