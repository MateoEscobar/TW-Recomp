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

// Function: sub_00396048
// Address: 0x396048 - 0x396088
void sub_00396048_0x396048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396048_0x396048");
#endif

    switch (ctx->pc) {
        case 0x396060u: goto label_396060;
        case 0x396078u: goto label_396078;
        default: break;
    }

    ctx->pc = 0x396048u;

    // 0x396048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39604c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x396050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396058: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x396058u;
    SET_GPR_U32(ctx, 31, 0x396060u);
    ctx->pc = 0x39605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396058u;
    // 0x39605c: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x396058u, 0x396060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396060u;
label_396060:
    // 0x396060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x396060u;
    {
        const bool branch_taken_0x396060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396060u;
        // 0x396064: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396060) {
            ctx->pc = 0x396078u;
            goto label_396078;
        }
    }
    ctx->pc = 0x396068u;
    // 0x396068: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x396068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x39606c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x39606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x396070: 0xc0440c6  jal         func_110318
    ctx->pc = 0x396070u;
    SET_GPR_U32(ctx, 31, 0x396078u);
    ctx->pc = 0x396074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396070u;
    // 0x396074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x396070u, 0x396078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396078u;
label_396078:
    // 0x396078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x396078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39607c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39607cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396080: 0x3e00008  jr          $ra
    ctx->pc = 0x396080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396080u;
        // 0x396084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396088u;
}
