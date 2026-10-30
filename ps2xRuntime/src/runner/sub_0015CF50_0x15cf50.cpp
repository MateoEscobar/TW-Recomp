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

// Function: sub_0015CF50
// Address: 0x15cf50 - 0x15cf70
void sub_0015CF50_0x15cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF50_0x15cf50");
#endif

    switch (ctx->pc) {
        case 0x15cf64u: goto label_15cf64;
        default: break;
    }

    ctx->pc = 0x15cf50u;

    // 0x15cf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15cf54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15cf5c: 0xc0573c0  jal         func_15CF00
    ctx->pc = 0x15CF5Cu;
    SET_GPR_U32(ctx, 31, 0x15CF64u);
    ctx->pc = 0x15CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF5Cu;
    // 0x15cf60: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF00u, 0x15CF5Cu, 0x15CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF64u;
label_15cf64:
    // 0x15cf64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF68u;
        // 0x15cf6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CF70u;
}
