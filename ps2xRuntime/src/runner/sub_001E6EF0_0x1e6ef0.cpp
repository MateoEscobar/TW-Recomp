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

// Function: sub_001E6EF0
// Address: 0x1e6ef0 - 0x1e6f50
void sub_001E6EF0_0x1e6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6EF0_0x1e6ef0");
#endif

    switch (ctx->pc) {
        case 0x1e6f20u: goto label_1e6f20;
        case 0x1e6f2cu: goto label_1e6f2c;
        case 0x1e6f38u: goto label_1e6f38;
        default: break;
    }

    ctx->pc = 0x1e6ef0u;

    // 0x1e6ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6ef4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e6ef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e6efc: 0x2442c7e8  addiu       $v0, $v0, -0x3818
    ctx->pc = 0x1e6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952936));
    // 0x1e6f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6f0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e6f14: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x1e6f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x1e6f18: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1E6F18u;
    SET_GPR_U32(ctx, 31, 0x1E6F20u);
    ctx->pc = 0x1E6F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F18u;
    // 0x1e6f1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E6F18u, 0x1E6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F20u;
label_1e6f20:
    // 0x1e6f20: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1e6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1e6f24: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1E6F24u;
    SET_GPR_U32(ctx, 31, 0x1E6F2Cu);
    ctx->pc = 0x1E6F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F24u;
    // 0x1e6f28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E6F24u, 0x1E6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F2Cu;
label_1e6f2c:
    // 0x1e6f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f30: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1E6F30u;
    SET_GPR_U32(ctx, 31, 0x1E6F38u);
    ctx->pc = 0x1E6F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F30u;
    // 0x1e6f34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1E6F30u, 0x1E6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F38u;
label_1e6f38:
    // 0x1e6f38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6f3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6f44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F44u;
        // 0x1e6f48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6F4Cu;
    // 0x1e6f4c: 0x0  nop
    ctx->pc = 0x1e6f4cu;
    // NOP
    ctx->pc = 0x1e6f50u;
}
