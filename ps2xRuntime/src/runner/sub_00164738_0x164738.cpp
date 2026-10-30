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

// Function: sub_00164738
// Address: 0x164738 - 0x1647e0
void sub_00164738_0x164738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164738_0x164738");
#endif

    switch (ctx->pc) {
        case 0x164758u: goto label_164758;
        case 0x164760u: goto label_164760;
        case 0x164768u: goto label_164768;
        case 0x164770u: goto label_164770;
        case 0x164788u: goto label_164788;
        case 0x164794u: goto label_164794;
        case 0x1647b8u: goto label_1647b8;
        case 0x1647c0u: goto label_1647c0;
        case 0x1647c8u: goto label_1647c8;
        default: break;
    }

    ctx->pc = 0x164738u;

    // 0x164738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x164738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16473c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x164740: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x164740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x164744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x164744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164748: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x164748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16474c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164750: 0xc0591f8  jal         func_1647E0
    ctx->pc = 0x164750u;
    SET_GPR_U32(ctx, 31, 0x164758u);
    ctx->pc = 0x164754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164750u;
    // 0x164754: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x164750u, 0x164758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164758u;
label_164758:
    // 0x164758: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x164758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x16475c: 0x0  nop
    ctx->pc = 0x16475cu;
    // NOP
label_164760:
    // 0x164760: 0xc137826  jal         func_4DE098
    ctx->pc = 0x164760u;
    SET_GPR_U32(ctx, 31, 0x164768u);
    ctx->pc = 0x164764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164760u;
    // 0x164764: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x164760u, 0x164768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164768u;
label_164768:
    // 0x164768: 0xc0e409a  jal         func_390268
    ctx->pc = 0x164768u;
    SET_GPR_U32(ctx, 31, 0x164770u);
    ctx->pc = 0x16476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164768u;
    // 0x16476c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x164768u, 0x164770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164770u;
label_164770:
    // 0x164770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164774: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164774u;
    {
        const bool branch_taken_0x164774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x164778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164774u;
        // 0x164778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164774) {
            ctx->pc = 0x164794u;
            goto label_164794;
        }
    }
    ctx->pc = 0x16477Cu;
    // 0x16477c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164780: 0xc059936  jal         func_1664D8
    ctx->pc = 0x164780u;
    SET_GPR_U32(ctx, 31, 0x164788u);
    ctx->pc = 0x164784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164780u;
    // 0x164784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664D8u, 0x164780u, 0x164788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164788u;
label_164788:
    // 0x164788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16478c: 0xc0871f2  jal         func_21C7C8
    ctx->pc = 0x16478Cu;
    SET_GPR_U32(ctx, 31, 0x164794u);
    ctx->pc = 0x164790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16478Cu;
    // 0x164790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x16478Cu, 0x164794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164794u;
label_164794:
    // 0x164794: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x164794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x164798: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x164798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16479c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x16479Cu;
    {
        const bool branch_taken_0x16479c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1647A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16479Cu;
        // 0x1647a0: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16479c) {
            ctx->pc = 0x164760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164760;
        }
    }
    ctx->pc = 0x1647A4u;
    // 0x1647a4: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1647a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1647A8u;
    {
        const bool branch_taken_0x1647a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1647a8) {
            ctx->pc = 0x1647C0u;
            goto label_1647c0;
        }
    }
    ctx->pc = 0x1647B0u;
    // 0x1647b0: 0xc0c1a14  jal         func_306850
    ctx->pc = 0x1647B0u;
    SET_GPR_U32(ctx, 31, 0x1647B8u);
    ctx->pc = 0x306850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306850u, 0x1647B0u, 0x1647B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647B8u;
label_1647b8:
    // 0x1647b8: 0xc0c196c  jal         func_3065B0
    ctx->pc = 0x1647B8u;
    SET_GPR_U32(ctx, 31, 0x1647C0u);
    ctx->pc = 0x1647BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647B8u;
    // 0x1647bc: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3065B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3065B0u, 0x1647B8u, 0x1647C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647C0u;
label_1647c0:
    // 0x1647c0: 0xc059202  jal         func_164808
    ctx->pc = 0x1647C0u;
    SET_GPR_U32(ctx, 31, 0x1647C8u);
    ctx->pc = 0x1647C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1647C0u;
    // 0x1647c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164808u, 0x1647C0u, 0x1647C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1647C8u;
label_1647c8:
    // 0x1647c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1647c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1647cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1647ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1647d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1647d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1647d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1647d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1647d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1647D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1647DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647D8u;
        // 0x1647dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1647D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1647E0u;
}
