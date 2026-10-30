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

// Function: sub_004E6800
// Address: 0x4e6800 - 0x4e6898
void sub_004E6800_0x4e6800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6800_0x4e6800");
#endif

    switch (ctx->pc) {
        case 0x4e6834u: goto label_4e6834;
        case 0x4e6850u: goto label_4e6850;
        case 0x4e685cu: goto label_4e685c;
        case 0x4e6868u: goto label_4e6868;
        case 0x4e6874u: goto label_4e6874;
        case 0x4e6880u: goto label_4e6880;
        default: break;
    }

    ctx->pc = 0x4e6800u;

    // 0x4e6800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e6800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e6804: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e6804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e6808: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e6808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4e680c: 0x2442a4b8  addiu       $v0, $v0, -0x5B48
    ctx->pc = 0x4e680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943928));
    // 0x4e6810: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e6810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4e6814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e6818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4e681c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e681cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6824: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x4e6824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x4e6828: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e6828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e682c: 0xc079bbc  jal         func_1E6EF0
    ctx->pc = 0x4E682Cu;
    SET_GPR_U32(ctx, 31, 0x4E6834u);
    ctx->pc = 0x4E6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E682Cu;
    // 0x4e6830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x4E682Cu, 0x4E6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6834u;
label_4e6834:
    // 0x4e6834: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x4e6834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x4e6838: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e6838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e683c: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x4e683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x4e6840: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x4e6840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x4e6844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e6844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e6848: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4E6848u;
    SET_GPR_U32(ctx, 31, 0x4E6850u);
    ctx->pc = 0x4E684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6848u;
    // 0x4e684c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E6848u, 0x4E6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6850u;
label_4e6850:
    // 0x4e6850: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x4e6850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x4e6854: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x4E6854u;
    SET_GPR_U32(ctx, 31, 0x4E685Cu);
    ctx->pc = 0x4E6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6854u;
    // 0x4e6858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4E6854u, 0x4E685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E685Cu;
label_4e685c:
    // 0x4e685c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4e685cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x4e6860: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4E6860u;
    SET_GPR_U32(ctx, 31, 0x4E6868u);
    ctx->pc = 0x4E6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6860u;
    // 0x4e6864: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4E6860u, 0x4E6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6868u;
label_4e6868:
    // 0x4e6868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e6868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e686c: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E686Cu;
    SET_GPR_U32(ctx, 31, 0x4E6874u);
    ctx->pc = 0x4E6870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E686Cu;
    // 0x4e6870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E686Cu, 0x4E6874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6874u;
label_4e6874:
    // 0x4e6874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e6874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6878: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E6878u;
    SET_GPR_U32(ctx, 31, 0x4E6880u);
    ctx->pc = 0x4E687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6878u;
    // 0x4e687c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E6878u, 0x4E6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6880u;
label_4e6880:
    // 0x4e6880: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e6880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e6884: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e6884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e6888: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e6888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e688c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e688cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6890: 0x3e00008  jr          $ra
    ctx->pc = 0x4E6890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6890u;
        // 0x4e6894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6898u;
}
