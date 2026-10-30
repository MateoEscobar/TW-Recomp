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

// Function: sub_00339CF0
// Address: 0x339cf0 - 0x339d10
void sub_00339CF0_0x339cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339CF0_0x339cf0");
#endif

    switch (ctx->pc) {
        case 0x339d04u: goto label_339d04;
        default: break;
    }

    ctx->pc = 0x339cf0u;

    // 0x339cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x339cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x339cfc: 0xc0ce752  jal         func_339D48
    ctx->pc = 0x339CFCu;
    SET_GPR_U32(ctx, 31, 0x339D04u);
    ctx->pc = 0x339D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CFCu;
    // 0x339d00: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D48u, 0x339CFCu, 0x339D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D04u;
label_339d04:
    // 0x339d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339d08: 0x3e00008  jr          $ra
    ctx->pc = 0x339D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D08u;
        // 0x339d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339D10u;
}
