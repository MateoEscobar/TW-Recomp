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

// Function: sub_001D6590
// Address: 0x1d6590 - 0x1d65c8
void sub_001D6590_0x1d6590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6590_0x1d6590");
#endif

    switch (ctx->pc) {
        case 0x1d65a8u: goto label_1d65a8;
        case 0x1d65b8u: goto label_1d65b8;
        default: break;
    }

    ctx->pc = 0x1d6590u;

    // 0x1d6590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6594: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d659c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d65a0: 0xc05e602  jal         func_179808
    ctx->pc = 0x1D65A0u;
    SET_GPR_U32(ctx, 31, 0x1D65A8u);
    ctx->pc = 0x1D65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D65A0u;
    // 0x1d65a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1D65A0u, 0x1D65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65A8u;
label_1d65a8:
    // 0x1d65a8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d65ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d65acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65b0: 0xc06e520  jal         func_1B9480
    ctx->pc = 0x1D65B0u;
    SET_GPR_U32(ctx, 31, 0x1D65B8u);
    ctx->pc = 0x1D65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D65B0u;
    // 0x1d65b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9480u, 0x1D65B0u, 0x1D65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65B8u;
label_1d65b8:
    // 0x1d65b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d65b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d65bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d65bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d65c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65C0u;
        // 0x1d65c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65C8u;
}
