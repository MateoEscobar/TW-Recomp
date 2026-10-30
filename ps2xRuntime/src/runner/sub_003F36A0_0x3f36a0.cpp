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

// Function: sub_003F36A0
// Address: 0x3f36a0 - 0x3f3770
void sub_003F36A0_0x3f36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F36A0_0x3f36a0");
#endif

    switch (ctx->pc) {
        case 0x3f36a0u: goto label_3f36a0;
        case 0x3f36a4u: goto label_3f36a4;
        case 0x3f36a8u: goto label_3f36a8;
        case 0x3f36acu: goto label_3f36ac;
        case 0x3f36b0u: goto label_3f36b0;
        case 0x3f36b4u: goto label_3f36b4;
        case 0x3f36b8u: goto label_3f36b8;
        case 0x3f36bcu: goto label_3f36bc;
        case 0x3f36c0u: goto label_3f36c0;
        case 0x3f36c4u: goto label_3f36c4;
        case 0x3f36c8u: goto label_3f36c8;
        case 0x3f36ccu: goto label_3f36cc;
        case 0x3f36d0u: goto label_3f36d0;
        case 0x3f36d4u: goto label_3f36d4;
        case 0x3f36d8u: goto label_3f36d8;
        case 0x3f36dcu: goto label_3f36dc;
        case 0x3f36e0u: goto label_3f36e0;
        case 0x3f36e4u: goto label_3f36e4;
        case 0x3f36e8u: goto label_3f36e8;
        case 0x3f36ecu: goto label_3f36ec;
        case 0x3f36f0u: goto label_3f36f0;
        case 0x3f36f4u: goto label_3f36f4;
        case 0x3f36f8u: goto label_3f36f8;
        case 0x3f36fcu: goto label_3f36fc;
        case 0x3f3700u: goto label_3f3700;
        case 0x3f3704u: goto label_3f3704;
        case 0x3f3708u: goto label_3f3708;
        case 0x3f370cu: goto label_3f370c;
        case 0x3f3710u: goto label_3f3710;
        case 0x3f3714u: goto label_3f3714;
        case 0x3f3718u: goto label_3f3718;
        case 0x3f371cu: goto label_3f371c;
        case 0x3f3720u: goto label_3f3720;
        case 0x3f3724u: goto label_3f3724;
        case 0x3f3728u: goto label_3f3728;
        case 0x3f372cu: goto label_3f372c;
        case 0x3f3730u: goto label_3f3730;
        case 0x3f3734u: goto label_3f3734;
        case 0x3f3738u: goto label_3f3738;
        case 0x3f373cu: goto label_3f373c;
        case 0x3f3740u: goto label_3f3740;
        case 0x3f3744u: goto label_3f3744;
        case 0x3f3748u: goto label_3f3748;
        case 0x3f374cu: goto label_3f374c;
        case 0x3f3750u: goto label_3f3750;
        case 0x3f3754u: goto label_3f3754;
        case 0x3f3758u: goto label_3f3758;
        case 0x3f375cu: goto label_3f375c;
        case 0x3f3760u: goto label_3f3760;
        case 0x3f3764u: goto label_3f3764;
        case 0x3f3768u: goto label_3f3768;
        case 0x3f376cu: goto label_3f376c;
        default: break;
    }

    ctx->pc = 0x3f36a0u;

label_3f36a0:
    // 0x3f36a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f36a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f36a4:
    // 0x3f36a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f36a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3f36a8:
    // 0x3f36a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f36a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3f36ac:
    // 0x3f36ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f36acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f36b0:
    // 0x3f36b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f36b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3f36b4:
    // 0x3f36b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f36b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f36b8:
    // 0x3f36b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f36b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f36bc:
    // 0x3f36bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f36c0:
    // 0x3f36c0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f36c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f36c4:
    // 0x3f36c4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f36c8:
    // 0x3f36c8: 0x40f809  jalr        $v0
label_3f36cc:
    if (ctx->pc == 0x3F36CCu) {
        ctx->pc = 0x3F36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F36C8u;
        // 0x3f36cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F36D0u;
        goto label_3f36d0;
    }
    ctx->pc = 0x3F36C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F36D0u);
        ctx->pc = 0x3F36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F36C8u;
        // 0x3f36cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F36C8u, 0x3F36D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F36D0u;
label_3f36d0:
    // 0x3f36d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f36d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f36d4:
    // 0x3f36d4: 0xc0ea14c  jal         func_3A8530
label_3f36d8:
    if (ctx->pc == 0x3F36D8u) {
        ctx->pc = 0x3F36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F36D4u;
        // 0x3f36d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F36DCu;
        goto label_3f36dc;
    }
    ctx->pc = 0x3F36D4u;
    SET_GPR_U32(ctx, 31, 0x3F36DCu);
    ctx->pc = 0x3F36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F36D4u;
    // 0x3f36d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F36D4u, 0x3F36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F36DCu;
label_3f36dc:
    // 0x3f36dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f36dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f36e0:
    // 0x3f36e0: 0xc0ea12a  jal         func_3A84A8
label_3f36e4:
    if (ctx->pc == 0x3F36E4u) {
        ctx->pc = 0x3F36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F36E0u;
        // 0x3f36e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F36E8u;
        goto label_3f36e8;
    }
    ctx->pc = 0x3F36E0u;
    SET_GPR_U32(ctx, 31, 0x3F36E8u);
    ctx->pc = 0x3F36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F36E0u;
    // 0x3f36e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F36E0u, 0x3F36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F36E8u;
label_3f36e8:
    // 0x3f36e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f36ec:
    // 0x3f36ec: 0xc0ea12a  jal         func_3A84A8
label_3f36f0:
    if (ctx->pc == 0x3F36F0u) {
        ctx->pc = 0x3F36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F36ECu;
        // 0x3f36f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F36F4u;
        goto label_3f36f4;
    }
    ctx->pc = 0x3F36ECu;
    SET_GPR_U32(ctx, 31, 0x3F36F4u);
    ctx->pc = 0x3F36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F36ECu;
    // 0x3f36f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F36ECu, 0x3F36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F36F4u;
label_3f36f4:
    // 0x3f36f4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f36f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f36f8:
    // 0x3f36f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f36f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f36fc:
    // 0x3f36fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f36fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3700:
    // 0x3f3700: 0xc0e858c  jal         func_3A1630
label_3f3704:
    if (ctx->pc == 0x3F3704u) {
        ctx->pc = 0x3F3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3700u;
        // 0x3f3704: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3708u;
        goto label_3f3708;
    }
    ctx->pc = 0x3F3700u;
    SET_GPR_U32(ctx, 31, 0x3F3708u);
    ctx->pc = 0x3F3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3700u;
    // 0x3f3704: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F3700u, 0x3F3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3708u;
label_3f3708:
    // 0x3f3708: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f3708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f370c:
    // 0x3f370c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f370cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f3710:
    // 0x3f3710: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f3710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3714:
    // 0x3f3714: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f3714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f3718:
    // 0x3f3718: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f3718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3f371c:
    // 0x3f371c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f3720:
    // 0x3f3720: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f3720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f3724:
    // 0x3f3724: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x3f3724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_3f3728:
    // 0x3f3728: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3f3728u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3f372c:
    // 0x3f372c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3f372cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3f3730:
    // 0x3f3730: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3f3730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f3734:
    // 0x3f3734: 0x60f809  jalr        $v1
label_3f3738:
    if (ctx->pc == 0x3F3738u) {
        ctx->pc = 0x3F3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3734u;
        // 0x3f3738: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F373Cu;
        goto label_3f373c;
    }
    ctx->pc = 0x3F3734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F373Cu);
        ctx->pc = 0x3F3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3734u;
        // 0x3f3738: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3734u, 0x3F373Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F373Cu;
label_3f373c:
    // 0x3f373c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f3740:
    // 0x3f3740: 0xc0e9132  jal         func_3A44C8
label_3f3744:
    if (ctx->pc == 0x3F3744u) {
        ctx->pc = 0x3F3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3740u;
        // 0x3f3744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3748u;
        goto label_3f3748;
    }
    ctx->pc = 0x3F3740u;
    SET_GPR_U32(ctx, 31, 0x3F3748u);
    ctx->pc = 0x3F3744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3740u;
    // 0x3f3744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F3740u, 0x3F3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3748u;
label_3f3748:
    // 0x3f3748: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3f3748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3f374c:
    // 0x3f374c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3f374cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3f3750:
    // 0x3f3750: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3f3750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3f3754:
    // 0x3f3754: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f3754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f3758:
    // 0x3f3758: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f3758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f375c:
    // 0x3f375c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f375cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f3760:
    // 0x3f3760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f3760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f3764:
    // 0x3f3764: 0x3e00008  jr          $ra
label_3f3768:
    if (ctx->pc == 0x3F3768u) {
        ctx->pc = 0x3F3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3764u;
        // 0x3f3768: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F376Cu;
        goto label_3f376c;
    }
    ctx->pc = 0x3F3764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3764u;
        // 0x3f3768: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F376Cu;
label_3f376c:
    // 0x3f376c: 0x0  nop
    ctx->pc = 0x3f376cu;
    // NOP
    ctx->pc = 0x3f3770u;
}
