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

// Function: sub_001660E0
// Address: 0x1660e0 - 0x166158
void sub_001660E0_0x1660e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001660E0_0x1660e0");
#endif

    switch (ctx->pc) {
        case 0x166108u: goto label_166108;
        case 0x166110u: goto label_166110;
        case 0x16611cu: goto label_16611c;
        case 0x16612cu: goto label_16612c;
        default: break;
    }

    ctx->pc = 0x1660e0u;

    // 0x1660e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1660e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1660e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1660e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1660e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1660e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1660ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1660ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1660f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1660f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1660f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1660f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1660fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1660fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166104: 0x0  nop
    ctx->pc = 0x166104u;
    // NOP
label_166108:
    // 0x166108: 0xc137826  jal         func_4DE098
    ctx->pc = 0x166108u;
    SET_GPR_U32(ctx, 31, 0x166110u);
    ctx->pc = 0x16610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166108u;
    // 0x16610c: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x166108u, 0x166110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166110u;
label_166110:
    // 0x166110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x166110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x166114: 0xc0e409a  jal         func_390268
    ctx->pc = 0x166114u;
    SET_GPR_U32(ctx, 31, 0x16611Cu);
    ctx->pc = 0x166118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166114u;
    // 0x166118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x166114u, 0x16611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16611Cu;
label_16611c:
    // 0x16611c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16611Cu;
    {
        const bool branch_taken_0x16611c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16611Cu;
        // 0x166120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16611c) {
            ctx->pc = 0x166130u;
            goto label_166130;
        }
    }
    ctx->pc = 0x166124u;
    // 0x166124: 0xc087502  jal         func_21D408
    ctx->pc = 0x166124u;
    SET_GPR_U32(ctx, 31, 0x16612Cu);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x166124u, 0x16612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16612Cu;
label_16612c:
    // 0x16612c: 0xa0510265  sb          $s1, 0x265($v0)
    ctx->pc = 0x16612cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 17));
label_166130:
    // 0x166130: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x166130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x166134: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x166134u;
    {
        const bool branch_taken_0x166134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166134u;
        // 0x166138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166134) {
            ctx->pc = 0x166108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166108;
        }
    }
    ctx->pc = 0x16613Cu;
    // 0x16613c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16613cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166140: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x166140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166144: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x166144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16614c: 0x3e00008  jr          $ra
    ctx->pc = 0x16614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16614Cu;
        // 0x166150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166154u;
    // 0x166154: 0x0  nop
    ctx->pc = 0x166154u;
    // NOP
    ctx->pc = 0x166158u;
}
