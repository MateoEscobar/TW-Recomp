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

// Function: sub_004E3FE0
// Address: 0x4e3fe0 - 0x4e4068
void sub_004E3FE0_0x4e3fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3FE0_0x4e3fe0");
#endif

    switch (ctx->pc) {
        case 0x4e4008u: goto label_4e4008;
        case 0x4e4014u: goto label_4e4014;
        case 0x4e4020u: goto label_4e4020;
        case 0x4e402cu: goto label_4e402c;
        case 0x4e4044u: goto label_4e4044;
        case 0x4e4050u: goto label_4e4050;
        default: break;
    }

    ctx->pc = 0x4e3fe0u;

    // 0x4e3fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e3fe4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e3fe8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e3fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e3fec: 0x24429568  addiu       $v0, $v0, -0x6A98
    ctx->pc = 0x4e3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940008));
    // 0x4e3ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e3ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e3ffc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e3ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4000: 0xc068cbc  jal         func_1A32F0
    ctx->pc = 0x4E4000u;
    SET_GPR_U32(ctx, 31, 0x4E4008u);
    ctx->pc = 0x4E4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4000u;
    // 0x4e4004: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A32F0u, 0x4E4000u, 0x4E4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4008u;
label_4e4008:
    // 0x4e4008: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x4e4008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x4e400c: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4E400Cu;
    SET_GPR_U32(ctx, 31, 0x4E4014u);
    ctx->pc = 0x4E4010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E400Cu;
    // 0x4e4010: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4E400Cu, 0x4E4014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4014u;
label_4e4014:
    // 0x4e4014: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x4e4014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x4e4018: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4E4018u;
    SET_GPR_U32(ctx, 31, 0x4E4020u);
    ctx->pc = 0x4E401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4018u;
    // 0x4e401c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4E4018u, 0x4E4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4020u;
label_4e4020:
    // 0x4e4020: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x4e4020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x4e4024: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4E4024u;
    SET_GPR_U32(ctx, 31, 0x4E402Cu);
    ctx->pc = 0x4E4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4024u;
    // 0x4e4028: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4E4024u, 0x4E402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E402Cu;
label_4e402c:
    // 0x4e402c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e4030: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4e4030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x4e4034: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x4e4034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x4e4038: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e4038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e403c: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4E403Cu;
    SET_GPR_U32(ctx, 31, 0x4E4044u);
    ctx->pc = 0x4E4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E403Cu;
    // 0x4e4040: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E403Cu, 0x4E4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4044u;
label_4e4044:
    // 0x4e4044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4048: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E4048u;
    SET_GPR_U32(ctx, 31, 0x4E4050u);
    ctx->pc = 0x4E404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4048u;
    // 0x4e404c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E4048u, 0x4E4050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4050u;
label_4e4050:
    // 0x4e4050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e4050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e4054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e4054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e405c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E405Cu;
        // 0x4e4060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E405Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4064u;
    // 0x4e4064: 0x0  nop
    ctx->pc = 0x4e4064u;
    // NOP
    ctx->pc = 0x4e4068u;
}
