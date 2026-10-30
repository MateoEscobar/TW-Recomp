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

// Function: sub_004B0728
// Address: 0x4b0728 - 0x4b0748
void sub_004B0728_0x4b0728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0728_0x4b0728");
#endif

    ctx->pc = 0x4b0728u;

    // 0x4b0728: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x4b0728u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4b072c: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x4b072cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x4b0730: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b0730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b0734: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x4b0734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b0738: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4b0738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4b073c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B073Cu;
        // 0x4b0740: 0xfc830010  sd          $v1, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B073Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0744u;
    // 0x4b0744: 0x0  nop
    ctx->pc = 0x4b0744u;
    // NOP
    ctx->pc = 0x4b0748u;
}
