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

// Function: sub_001CEAB0
// Address: 0x1ceab0 - 0x1ceb00
void sub_001CEAB0_0x1ceab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEAB0_0x1ceab0");
#endif

    switch (ctx->pc) {
        case 0x1ceae0u: goto label_1ceae0;
        case 0x1ceaecu: goto label_1ceaec;
        default: break;
    }

    ctx->pc = 0x1ceab0u;

    // 0x1ceab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ceab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ceab4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ceab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ceab8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ceab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ceabc: 0x2442b0f0  addiu       $v0, $v0, -0x4F10
    ctx->pc = 0x1ceabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947056));
    // 0x1ceac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ceac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ceac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ceac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ceac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ceacc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ceaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cead0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cead0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cead4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cead8: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1CEAD8u;
    SET_GPR_U32(ctx, 31, 0x1CEAE0u);
    ctx->pc = 0x1CEADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAD8u;
    // 0x1ceadc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1CEAD8u, 0x1CEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAE0u;
label_1ceae0:
    // 0x1ceae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceae4: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1CEAE4u;
    SET_GPR_U32(ctx, 31, 0x1CEAECu);
    ctx->pc = 0x1CEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAE4u;
    // 0x1ceae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1CEAE4u, 0x1CEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAECu;
label_1ceaec:
    // 0x1ceaec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ceaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceaf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ceaf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ceaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAF8u;
        // 0x1ceafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEB00u;
}
