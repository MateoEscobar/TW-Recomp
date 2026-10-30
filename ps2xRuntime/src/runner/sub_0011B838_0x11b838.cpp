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

// Function: sub_0011B838
// Address: 0x11b838 - 0x11b888
void sub_0011B838_0x11b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B838_0x11b838");
#endif

    switch (ctx->pc) {
        case 0x11b838u: goto label_11b838;
        case 0x11b83cu: goto label_11b83c;
        case 0x11b840u: goto label_11b840;
        case 0x11b844u: goto label_11b844;
        case 0x11b848u: goto label_11b848;
        case 0x11b84cu: goto label_11b84c;
        case 0x11b850u: goto label_11b850;
        case 0x11b854u: goto label_11b854;
        case 0x11b858u: goto label_11b858;
        case 0x11b85cu: goto label_11b85c;
        case 0x11b860u: goto label_11b860;
        case 0x11b864u: goto label_11b864;
        case 0x11b868u: goto label_11b868;
        case 0x11b86cu: goto label_11b86c;
        case 0x11b870u: goto label_11b870;
        case 0x11b874u: goto label_11b874;
        case 0x11b878u: goto label_11b878;
        case 0x11b87cu: goto label_11b87c;
        case 0x11b880u: goto label_11b880;
        case 0x11b884u: goto label_11b884;
        default: break;
    }

    ctx->pc = 0x11b838u;

label_11b838:
    // 0x11b838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11b83c:
    // 0x11b83c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_11b840:
    // 0x11b840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11b844:
    // 0x11b844: 0xc047e6c  jal         func_11F9B0
label_11b848:
    if (ctx->pc == 0x11B848u) {
        ctx->pc = 0x11B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B844u;
        // 0x11b848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B84Cu;
        goto label_11b84c;
    }
    ctx->pc = 0x11B844u;
    SET_GPR_U32(ctx, 31, 0x11B84Cu);
    ctx->pc = 0x11B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B844u;
    // 0x11b848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11B844u, 0x11B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B84Cu;
label_11b84c:
    // 0x11b84c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_11b850:
    if (ctx->pc == 0x11B850u) {
        ctx->pc = 0x11B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B84Cu;
        // 0x11b850: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B854u;
        goto label_11b854;
    }
    ctx->pc = 0x11B84Cu;
    {
        const bool branch_taken_0x11b84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B84Cu;
        // 0x11b850: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b84c) {
            ctx->pc = 0x11B85Cu;
            goto label_11b85c;
        }
    }
    ctx->pc = 0x11B854u;
label_11b854:
    // 0x11b854: 0x10000008  b           . + 4 + (0x8 << 2)
label_11b858:
    if (ctx->pc == 0x11B858u) {
        ctx->pc = 0x11B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B854u;
        // 0x11b858: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B85Cu;
        goto label_11b85c;
    }
    ctx->pc = 0x11B854u;
    {
        const bool branch_taken_0x11b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B854u;
        // 0x11b858: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b854) {
            ctx->pc = 0x11B878u;
            goto label_11b878;
        }
    }
    ctx->pc = 0x11B85Cu;
label_11b85c:
    // 0x11b85c: 0xc047e6c  jal         func_11F9B0
label_11b860:
    if (ctx->pc == 0x11B860u) {
        ctx->pc = 0x11B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B85Cu;
        // 0x11b860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B864u;
        goto label_11b864;
    }
    ctx->pc = 0x11B85Cu;
    SET_GPR_U32(ctx, 31, 0x11B864u);
    ctx->pc = 0x11B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B85Cu;
    // 0x11b860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11B85Cu, 0x11B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B864u;
label_11b864:
    // 0x11b864: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11b868:
    // 0x11b868: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11b868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11b86c:
    // 0x11b86c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x11b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11b870:
    // 0x11b870: 0xa0f809  jalr        $a1
label_11b874:
    if (ctx->pc == 0x11B874u) {
        ctx->pc = 0x11B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B870u;
        // 0x11b874: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B878u;
        goto label_11b878;
    }
    ctx->pc = 0x11B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11B878u);
        ctx->pc = 0x11B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B870u;
        // 0x11b874: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B870u, 0x11B878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B878u;
label_11b878:
    // 0x11b878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11b878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11b87c:
    // 0x11b87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b880:
    // 0x11b880: 0x3e00008  jr          $ra
label_11b884:
    if (ctx->pc == 0x11B884u) {
        ctx->pc = 0x11B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B880u;
        // 0x11b884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B888u;
        goto label_fallthrough_0x11b880;
    }
    ctx->pc = 0x11B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B880u;
        // 0x11b884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b880:
    ctx->pc = 0x11B888u;
}
