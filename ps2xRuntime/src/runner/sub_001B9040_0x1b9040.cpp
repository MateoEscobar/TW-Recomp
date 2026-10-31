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

// Function: sub_001B9040
// Address: 0x1b9040 - 0x1b9090
void sub_001B9040_0x1b9040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9040_0x1b9040");
#endif

    switch (ctx->pc) {
        case 0x1b9070u: goto label_1b9070;
        case 0x1b907cu: goto label_1b907c;
        default: break;
    }

    ctx->pc = 0x1b9040u;

    // 0x1b9040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9044: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1b9048: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b9048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b904c: 0x2442a248  addiu       $v0, $v0, -0x5DB8
    ctx->pc = 0x1b904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943304));
    // 0x1b9050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b905c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b905cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b9060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b9064: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1b9068: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1B9068u;
    SET_GPR_U32(ctx, 31, 0x1B9070u);
    ctx->pc = 0x1B906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9068u;
    // 0x1b906c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1B9068u, 0x1B9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9070u;
label_1b9070:
    // 0x1b9070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9074: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1B9074u;
    SET_GPR_U32(ctx, 31, 0x1B907Cu);
    ctx->pc = 0x1B9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9074u;
    // 0x1b9078: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1B9074u, 0x1B907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B907Cu;
label_1b907c:
    // 0x1b907c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b907cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9088: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9088u;
        // 0x1b908c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9090u;
}
