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

// Function: sub_001B6DF0
// Address: 0x1b6df0 - 0x1b6e40
void sub_001B6DF0_0x1b6df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6DF0_0x1b6df0");
#endif

    switch (ctx->pc) {
        case 0x1b6e14u: goto label_1b6e14;
        case 0x1b6e24u: goto label_1b6e24;
        case 0x1b6e2cu: goto label_1b6e2c;
        default: break;
    }

    ctx->pc = 0x1b6df0u;

    // 0x1b6df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6df4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e00: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x1b6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x1b6e04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6E04u;
    {
        const bool branch_taken_0x1b6e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e04) {
            ctx->pc = 0x1B6E1Cu;
            goto label_1b6e1c;
        }
    }
    ctx->pc = 0x1B6E0Cu;
    // 0x1b6e0c: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1B6E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E14u);
    ctx->pc = 0x1B6E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E0Cu;
    // 0x1b6e10: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1B6E0Cu, 0x1B6E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E14u;
label_1b6e14:
    // 0x1b6e14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6E14u;
    {
        const bool branch_taken_0x1b6e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e14) {
            ctx->pc = 0x1B6E24u;
            goto label_1b6e24;
        }
    }
    ctx->pc = 0x1B6E1Cu;
label_1b6e1c:
    // 0x1b6e1c: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1B6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E24u);
    ctx->pc = 0x1B6E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E1Cu;
    // 0x1b6e20: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1B6E1Cu, 0x1B6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E24u;
label_1b6e24:
    // 0x1b6e24: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1B6E24u;
    SET_GPR_U32(ctx, 31, 0x1B6E2Cu);
    ctx->pc = 0x1B6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E24u;
    // 0x1b6e28: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1B6E24u, 0x1B6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E2Cu;
label_1b6e2c:
    // 0x1b6e2c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b6e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E38u;
        // 0x1b6e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E40u;
}
