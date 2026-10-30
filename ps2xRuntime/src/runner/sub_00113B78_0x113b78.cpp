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

// Function: sub_00113B78
// Address: 0x113b78 - 0x113bc8
void sub_00113B78_0x113b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113B78_0x113b78");
#endif

    switch (ctx->pc) {
        case 0x113bb8u: goto label_113bb8;
        default: break;
    }

    ctx->pc = 0x113b78u;

    // 0x113b78: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x113b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x113b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x113b80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b84: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113b88: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113b90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113b94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x113b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b98: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x113b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x113b9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ba0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113ba4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x113ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113ba8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x113ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x113bac: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x113bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113bb0: 0xc044396  jal         func_110E58
    ctx->pc = 0x113BB0u;
    SET_GPR_U32(ctx, 31, 0x113BB8u);
    ctx->pc = 0x113BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BB0u;
    // 0x113bb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E58u, 0x113BB0u, 0x113BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BB8u;
label_113bb8:
    // 0x113bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x113BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BBCu;
        // 0x113bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113BC4u;
    // 0x113bc4: 0x0  nop
    ctx->pc = 0x113bc4u;
    // NOP
    ctx->pc = 0x113bc8u;
}
