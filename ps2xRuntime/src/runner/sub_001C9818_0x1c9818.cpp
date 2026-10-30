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

// Function: sub_001C9818
// Address: 0x1c9818 - 0x1c98a8
void sub_001C9818_0x1c9818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9818_0x1c9818");
#endif

    switch (ctx->pc) {
        case 0x1c982cu: goto label_1c982c;
        case 0x1c9840u: goto label_1c9840;
        case 0x1c9848u: goto label_1c9848;
        case 0x1c9850u: goto label_1c9850;
        case 0x1c9858u: goto label_1c9858;
        case 0x1c9860u: goto label_1c9860;
        case 0x1c9868u: goto label_1c9868;
        case 0x1c9870u: goto label_1c9870;
        case 0x1c9878u: goto label_1c9878;
        case 0x1c9880u: goto label_1c9880;
        case 0x1c9888u: goto label_1c9888;
        case 0x1c9890u: goto label_1c9890;
        default: break;
    }

    ctx->pc = 0x1c9818u;

    // 0x1c9818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c981c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9824: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1C9824u;
    SET_GPR_U32(ctx, 31, 0x1C982Cu);
    ctx->pc = 0x1C9828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9824u;
    // 0x1c9828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1C9824u, 0x1C982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C982Cu;
label_1c982c:
    // 0x1c982c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c982cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c9830: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c9834: 0x2463ab28  addiu       $v1, $v1, -0x54D8
    ctx->pc = 0x1c9834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945576));
    // 0x1c9838: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9838u;
    SET_GPR_U32(ctx, 31, 0x1C9840u);
    ctx->pc = 0x1C983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9838u;
    // 0x1c983c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9838u, 0x1C9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9840u;
label_1c9840:
    // 0x1c9840: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9840u;
    SET_GPR_U32(ctx, 31, 0x1C9848u);
    ctx->pc = 0x1C9844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9840u;
    // 0x1c9844: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9840u, 0x1C9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9848u;
label_1c9848:
    // 0x1c9848: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9848u;
    SET_GPR_U32(ctx, 31, 0x1C9850u);
    ctx->pc = 0x1C984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9848u;
    // 0x1c984c: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9848u, 0x1C9850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9850u;
label_1c9850:
    // 0x1c9850: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9850u;
    SET_GPR_U32(ctx, 31, 0x1C9858u);
    ctx->pc = 0x1C9854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9850u;
    // 0x1c9854: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9850u, 0x1C9858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9858u;
label_1c9858:
    // 0x1c9858: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9858u;
    SET_GPR_U32(ctx, 31, 0x1C9860u);
    ctx->pc = 0x1C985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9858u;
    // 0x1c985c: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9858u, 0x1C9860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9860u;
label_1c9860:
    // 0x1c9860: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9860u;
    SET_GPR_U32(ctx, 31, 0x1C9868u);
    ctx->pc = 0x1C9864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9860u;
    // 0x1c9864: 0x26040550  addiu       $a0, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9860u, 0x1C9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9868u;
label_1c9868:
    // 0x1c9868: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9868u;
    SET_GPR_U32(ctx, 31, 0x1C9870u);
    ctx->pc = 0x1C986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9868u;
    // 0x1c986c: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9868u, 0x1C9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9870u;
label_1c9870:
    // 0x1c9870: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9870u;
    SET_GPR_U32(ctx, 31, 0x1C9878u);
    ctx->pc = 0x1C9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9870u;
    // 0x1c9874: 0x26040750  addiu       $a0, $s0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9870u, 0x1C9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9878u;
label_1c9878:
    // 0x1c9878: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1C9878u;
    SET_GPR_U32(ctx, 31, 0x1C9880u);
    ctx->pc = 0x1C987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9878u;
    // 0x1c987c: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1C9878u, 0x1C9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9880u;
label_1c9880:
    // 0x1c9880: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1C9880u;
    SET_GPR_U32(ctx, 31, 0x1C9888u);
    ctx->pc = 0x1C9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9880u;
    // 0x1c9884: 0x26040920  addiu       $a0, $s0, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1C9880u, 0x1C9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9888u;
label_1c9888:
    // 0x1c9888: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1C9888u;
    SET_GPR_U32(ctx, 31, 0x1C9890u);
    ctx->pc = 0x1C988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9888u;
    // 0x1c988c: 0x260409f0  addiu       $a0, $s0, 0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1C9888u, 0x1C9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9890u;
label_1c9890:
    // 0x1c9890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c9890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9898: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c9898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c989c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C989Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C989Cu;
        // 0x1c98a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C989Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C98A4u;
    // 0x1c98a4: 0x0  nop
    ctx->pc = 0x1c98a4u;
    // NOP
    ctx->pc = 0x1c98a8u;
}
