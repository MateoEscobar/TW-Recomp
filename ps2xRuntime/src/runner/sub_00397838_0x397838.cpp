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

// Function: sub_00397838
// Address: 0x397838 - 0x3978a8
void sub_00397838_0x397838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397838_0x397838");
#endif

    switch (ctx->pc) {
        case 0x397858u: goto label_397858;
        case 0x397868u: goto label_397868;
        case 0x397880u: goto label_397880;
        default: break;
    }

    ctx->pc = 0x397838u;

    // 0x397838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39783c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x397840: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x397844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x397844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397848: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x397848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x39784c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x397850: 0xc0e4060  jal         func_390180
    ctx->pc = 0x397850u;
    SET_GPR_U32(ctx, 31, 0x397858u);
    ctx->pc = 0x397854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397850u;
    // 0x397854: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x397850u, 0x397858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397858u;
label_397858:
    // 0x397858: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x397858u;
    {
        const bool branch_taken_0x397858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x397858) {
            ctx->pc = 0x39785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397858u;
            // 0x39785c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397890u;
            goto label_397890;
        }
    }
    ctx->pc = 0x397860u;
    // 0x397860: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x397860u;
    SET_GPR_U32(ctx, 31, 0x397868u);
    ctx->pc = 0x397864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397860u;
    // 0x397864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x397860u, 0x397868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397868u;
label_397868:
    // 0x397868: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x397868u;
    {
        const bool branch_taken_0x397868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397868u;
        // 0x39786c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397868) {
            ctx->pc = 0x39788Cu;
            goto label_39788c;
        }
    }
    ctx->pc = 0x397870u;
    // 0x397870: 0x8c5000c4  lw          $s0, 0xC4($v0)
    ctx->pc = 0x397870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x397874: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x397874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    // 0x397878: 0xc050fda  jal         func_143F68
    ctx->pc = 0x397878u;
    SET_GPR_U32(ctx, 31, 0x397880u);
    ctx->pc = 0x39787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397878u;
    // 0x39787c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x397878u, 0x397880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397880u;
label_397880:
    // 0x397880: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x397880u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397884: 0x12030002  beq         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x397884u;
    {
        const bool branch_taken_0x397884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x397888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397884u;
        // 0x397888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397884) {
            ctx->pc = 0x397890u;
            goto label_397890;
        }
    }
    ctx->pc = 0x39788Cu;
label_39788c:
    // 0x39788c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39788cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_397890:
    // 0x397890: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x397890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397894: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x397894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39789c: 0x3e00008  jr          $ra
    ctx->pc = 0x39789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3978A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39789Cu;
        // 0x3978a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3978A4u;
    // 0x3978a4: 0x0  nop
    ctx->pc = 0x3978a4u;
    // NOP
    ctx->pc = 0x3978a8u;
}
