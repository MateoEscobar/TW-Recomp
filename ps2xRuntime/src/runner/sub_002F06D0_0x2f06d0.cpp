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

// Function: sub_002F06D0
// Address: 0x2f06d0 - 0x2f0788
void sub_002F06D0_0x2f06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F06D0_0x2f06d0");
#endif

    switch (ctx->pc) {
        case 0x2f06d0u: goto label_2f06d0;
        case 0x2f06d4u: goto label_2f06d4;
        case 0x2f06d8u: goto label_2f06d8;
        case 0x2f06dcu: goto label_2f06dc;
        case 0x2f06e0u: goto label_2f06e0;
        case 0x2f06e4u: goto label_2f06e4;
        case 0x2f06e8u: goto label_2f06e8;
        case 0x2f06ecu: goto label_2f06ec;
        case 0x2f06f0u: goto label_2f06f0;
        case 0x2f06f4u: goto label_2f06f4;
        case 0x2f06f8u: goto label_2f06f8;
        case 0x2f06fcu: goto label_2f06fc;
        case 0x2f0700u: goto label_2f0700;
        case 0x2f0704u: goto label_2f0704;
        case 0x2f0708u: goto label_2f0708;
        case 0x2f070cu: goto label_2f070c;
        case 0x2f0710u: goto label_2f0710;
        case 0x2f0714u: goto label_2f0714;
        case 0x2f0718u: goto label_2f0718;
        case 0x2f071cu: goto label_2f071c;
        case 0x2f0720u: goto label_2f0720;
        case 0x2f0724u: goto label_2f0724;
        case 0x2f0728u: goto label_2f0728;
        case 0x2f072cu: goto label_2f072c;
        case 0x2f0730u: goto label_2f0730;
        case 0x2f0734u: goto label_2f0734;
        case 0x2f0738u: goto label_2f0738;
        case 0x2f073cu: goto label_2f073c;
        case 0x2f0740u: goto label_2f0740;
        case 0x2f0744u: goto label_2f0744;
        case 0x2f0748u: goto label_2f0748;
        case 0x2f074cu: goto label_2f074c;
        case 0x2f0750u: goto label_2f0750;
        case 0x2f0754u: goto label_2f0754;
        case 0x2f0758u: goto label_2f0758;
        case 0x2f075cu: goto label_2f075c;
        case 0x2f0760u: goto label_2f0760;
        case 0x2f0764u: goto label_2f0764;
        case 0x2f0768u: goto label_2f0768;
        case 0x2f076cu: goto label_2f076c;
        case 0x2f0770u: goto label_2f0770;
        case 0x2f0774u: goto label_2f0774;
        case 0x2f0778u: goto label_2f0778;
        case 0x2f077cu: goto label_2f077c;
        case 0x2f0780u: goto label_2f0780;
        case 0x2f0784u: goto label_2f0784;
        default: break;
    }

    ctx->pc = 0x2f06d0u;

label_2f06d0:
    // 0x2f06d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f06d4:
    // 0x2f06d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f06d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2f06d8:
    // 0x2f06d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f06d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2f06dc:
    // 0x2f06dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f06dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2f06e0:
    // 0x2f06e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f06e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f06e4:
    // 0x2f06e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f06e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f06e8:
    // 0x2f06e8: 0xc0e8b48  jal         func_3A2D20
label_2f06ec:
    if (ctx->pc == 0x2F06ECu) {
        ctx->pc = 0x2F06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06E8u;
        // 0x2f06ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06F0u;
        goto label_2f06f0;
    }
    ctx->pc = 0x2F06E8u;
    SET_GPR_U32(ctx, 31, 0x2F06F0u);
    ctx->pc = 0x2F06ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06E8u;
    // 0x2f06ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F06E8u, 0x2F06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06F0u;
label_2f06f0:
    // 0x2f06f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f06f4:
    // 0x2f06f4: 0xc0e8b70  jal         func_3A2DC0
label_2f06f8:
    if (ctx->pc == 0x2F06F8u) {
        ctx->pc = 0x2F06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06F4u;
        // 0x2f06f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06FCu;
        goto label_2f06fc;
    }
    ctx->pc = 0x2F06F4u;
    SET_GPR_U32(ctx, 31, 0x2F06FCu);
    ctx->pc = 0x2F06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F06F4u;
    // 0x2f06f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2F06F4u, 0x2F06FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F06FCu;
label_2f06fc:
    // 0x2f06fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f06fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f0700:
    // 0x2f0700: 0xc0e8b70  jal         func_3A2DC0
label_2f0704:
    if (ctx->pc == 0x2F0704u) {
        ctx->pc = 0x2F0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0700u;
        // 0x2f0704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0708u;
        goto label_2f0708;
    }
    ctx->pc = 0x2F0700u;
    SET_GPR_U32(ctx, 31, 0x2F0708u);
    ctx->pc = 0x2F0704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0700u;
    // 0x2f0704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2F0700u, 0x2F0708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0708u;
label_2f0708:
    // 0x2f0708: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f070c:
    // 0x2f070c: 0xc0e8b68  jal         func_3A2DA0
label_2f0710:
    if (ctx->pc == 0x2F0710u) {
        ctx->pc = 0x2F0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F070Cu;
        // 0x2f0710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0714u;
        goto label_2f0714;
    }
    ctx->pc = 0x2F070Cu;
    SET_GPR_U32(ctx, 31, 0x2F0714u);
    ctx->pc = 0x2F0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F070Cu;
    // 0x2f0710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F070Cu, 0x2F0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0714u;
label_2f0714:
    // 0x2f0714: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f0718:
    // 0x2f0718: 0xc0e8b68  jal         func_3A2DA0
label_2f071c:
    if (ctx->pc == 0x2F071Cu) {
        ctx->pc = 0x2F071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0718u;
        // 0x2f071c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0720u;
        goto label_2f0720;
    }
    ctx->pc = 0x2F0718u;
    SET_GPR_U32(ctx, 31, 0x2F0720u);
    ctx->pc = 0x2F071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0718u;
    // 0x2f071c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F0718u, 0x2F0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0720u;
label_2f0720:
    // 0x2f0720: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f0720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f0724:
    // 0x2f0724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f0724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f0728:
    // 0x2f0728: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2f0728u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2f072c:
    // 0x2f072c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2f072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2f0730:
    // 0x2f0730: 0x60f809  jalr        $v1
label_2f0734:
    if (ctx->pc == 0x2F0734u) {
        ctx->pc = 0x2F0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0730u;
        // 0x2f0734: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0738u;
        goto label_2f0738;
    }
    ctx->pc = 0x2F0730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0738u);
        ctx->pc = 0x2F0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0730u;
        // 0x2f0734: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0730u, 0x2F0738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0738u;
label_2f0738:
    // 0x2f0738: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f073c:
    // 0x2f073c: 0xc0e8b58  jal         func_3A2D60
label_2f0740:
    if (ctx->pc == 0x2F0740u) {
        ctx->pc = 0x2F0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F073Cu;
        // 0x2f0740: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0744u;
        goto label_2f0744;
    }
    ctx->pc = 0x2F073Cu;
    SET_GPR_U32(ctx, 31, 0x2F0744u);
    ctx->pc = 0x2F0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F073Cu;
    // 0x2f0740: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F073Cu, 0x2F0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0744u;
label_2f0744:
    // 0x2f0744: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f0748:
    // 0x2f0748: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2f0748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2f074c:
    // 0x2f074c: 0xc0e8b58  jal         func_3A2D60
label_2f0750:
    if (ctx->pc == 0x2F0750u) {
        ctx->pc = 0x2F0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F074Cu;
        // 0x2f0750: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0754u;
        goto label_2f0754;
    }
    ctx->pc = 0x2F074Cu;
    SET_GPR_U32(ctx, 31, 0x2F0754u);
    ctx->pc = 0x2F0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F074Cu;
    // 0x2f0750: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F074Cu, 0x2F0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0754u;
label_2f0754:
    // 0x2f0754: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f0754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f0758:
    // 0x2f0758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f0758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f075c:
    // 0x2f075c: 0xc0e8b80  jal         func_3A2E00
label_2f0760:
    if (ctx->pc == 0x2F0760u) {
        ctx->pc = 0x2F0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F075Cu;
        // 0x2f0760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0764u;
        goto label_2f0764;
    }
    ctx->pc = 0x2F075Cu;
    SET_GPR_U32(ctx, 31, 0x2F0764u);
    ctx->pc = 0x2F0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F075Cu;
    // 0x2f0760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2F075Cu, 0x2F0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0764u;
label_2f0764:
    // 0x2f0764: 0xc0e8b50  jal         func_3A2D40
label_2f0768:
    if (ctx->pc == 0x2F0768u) {
        ctx->pc = 0x2F0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0764u;
        // 0x2f0768: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F076Cu;
        goto label_2f076c;
    }
    ctx->pc = 0x2F0764u;
    SET_GPR_U32(ctx, 31, 0x2F076Cu);
    ctx->pc = 0x2F0768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0764u;
    // 0x2f0768: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F0764u, 0x2F076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F076Cu;
label_2f076c:
    // 0x2f076c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f076cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0770:
    // 0x2f0770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0774:
    // 0x2f0774: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f0774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0778:
    // 0x2f0778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f0778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f077c:
    // 0x2f077c: 0x3e00008  jr          $ra
label_2f0780:
    if (ctx->pc == 0x2F0780u) {
        ctx->pc = 0x2F0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F077Cu;
        // 0x2f0780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0784u;
        goto label_2f0784;
    }
    ctx->pc = 0x2F077Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F077Cu;
        // 0x2f0780: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F077Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0784u;
label_2f0784:
    // 0x2f0784: 0x0  nop
    ctx->pc = 0x2f0784u;
    // NOP
    ctx->pc = 0x2f0788u;
}
