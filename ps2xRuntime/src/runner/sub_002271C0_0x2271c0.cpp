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

// Function: sub_002271C0
// Address: 0x2271c0 - 0x2271f0
void sub_002271C0_0x2271c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002271C0_0x2271c0");
#endif

    switch (ctx->pc) {
        case 0x2271e0u: goto label_2271e0;
        default: break;
    }

    ctx->pc = 0x2271c0u;

    // 0x2271c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2271c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2271c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2271c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2271c8: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x2271c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2271cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2271CCu;
    {
        const bool branch_taken_0x2271cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2271D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271CCu;
        // 0x2271d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271cc) {
            ctx->pc = 0x2271E0u;
            goto label_2271e0;
        }
    }
    ctx->pc = 0x2271D4u;
    // 0x2271d4: 0xa0800027  sb          $zero, 0x27($a0)
    ctx->pc = 0x2271d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x2271d8: 0xc137c02  jal         func_4DF008
    ctx->pc = 0x2271D8u;
    SET_GPR_U32(ctx, 31, 0x2271E0u);
    ctx->pc = 0x2271DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271D8u;
    // 0x2271dc: 0x8c850024  lw          $a1, 0x24($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF008u, 0x2271D8u, 0x2271E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271E0u;
label_2271e0:
    // 0x2271e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2271e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2271e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2271E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2271E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271E4u;
        // 0x2271e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2271E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271ECu;
    // 0x2271ec: 0x0  nop
    ctx->pc = 0x2271ecu;
    // NOP
    ctx->pc = 0x2271f0u;
}
