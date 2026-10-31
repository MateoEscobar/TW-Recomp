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

// Function: sub_003E76A8
// Address: 0x3e76a8 - 0x3e77c0
void sub_003E76A8_0x3e76a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E76A8_0x3e76a8");
#endif

    switch (ctx->pc) {
        case 0x3e76a8u: goto label_3e76a8;
        case 0x3e76acu: goto label_3e76ac;
        case 0x3e76b0u: goto label_3e76b0;
        case 0x3e76b4u: goto label_3e76b4;
        case 0x3e76b8u: goto label_3e76b8;
        case 0x3e76bcu: goto label_3e76bc;
        case 0x3e76c0u: goto label_3e76c0;
        case 0x3e76c4u: goto label_3e76c4;
        case 0x3e76c8u: goto label_3e76c8;
        case 0x3e76ccu: goto label_3e76cc;
        case 0x3e76d0u: goto label_3e76d0;
        case 0x3e76d4u: goto label_3e76d4;
        case 0x3e76d8u: goto label_3e76d8;
        case 0x3e76dcu: goto label_3e76dc;
        case 0x3e76e0u: goto label_3e76e0;
        case 0x3e76e4u: goto label_3e76e4;
        case 0x3e76e8u: goto label_3e76e8;
        case 0x3e76ecu: goto label_3e76ec;
        case 0x3e76f0u: goto label_3e76f0;
        case 0x3e76f4u: goto label_3e76f4;
        case 0x3e76f8u: goto label_3e76f8;
        case 0x3e76fcu: goto label_3e76fc;
        case 0x3e7700u: goto label_3e7700;
        case 0x3e7704u: goto label_3e7704;
        case 0x3e7708u: goto label_3e7708;
        case 0x3e770cu: goto label_3e770c;
        case 0x3e7710u: goto label_3e7710;
        case 0x3e7714u: goto label_3e7714;
        case 0x3e7718u: goto label_3e7718;
        case 0x3e771cu: goto label_3e771c;
        case 0x3e7720u: goto label_3e7720;
        case 0x3e7724u: goto label_3e7724;
        case 0x3e7728u: goto label_3e7728;
        case 0x3e772cu: goto label_3e772c;
        case 0x3e7730u: goto label_3e7730;
        case 0x3e7734u: goto label_3e7734;
        case 0x3e7738u: goto label_3e7738;
        case 0x3e773cu: goto label_3e773c;
        case 0x3e7740u: goto label_3e7740;
        case 0x3e7744u: goto label_3e7744;
        case 0x3e7748u: goto label_3e7748;
        case 0x3e774cu: goto label_3e774c;
        case 0x3e7750u: goto label_3e7750;
        case 0x3e7754u: goto label_3e7754;
        case 0x3e7758u: goto label_3e7758;
        case 0x3e775cu: goto label_3e775c;
        case 0x3e7760u: goto label_3e7760;
        case 0x3e7764u: goto label_3e7764;
        case 0x3e7768u: goto label_3e7768;
        case 0x3e776cu: goto label_3e776c;
        case 0x3e7770u: goto label_3e7770;
        case 0x3e7774u: goto label_3e7774;
        case 0x3e7778u: goto label_3e7778;
        case 0x3e777cu: goto label_3e777c;
        case 0x3e7780u: goto label_3e7780;
        case 0x3e7784u: goto label_3e7784;
        case 0x3e7788u: goto label_3e7788;
        case 0x3e778cu: goto label_3e778c;
        case 0x3e7790u: goto label_3e7790;
        case 0x3e7794u: goto label_3e7794;
        case 0x3e7798u: goto label_3e7798;
        case 0x3e779cu: goto label_3e779c;
        case 0x3e77a0u: goto label_3e77a0;
        case 0x3e77a4u: goto label_3e77a4;
        case 0x3e77a8u: goto label_3e77a8;
        case 0x3e77acu: goto label_3e77ac;
        case 0x3e77b0u: goto label_3e77b0;
        case 0x3e77b4u: goto label_3e77b4;
        case 0x3e77b8u: goto label_3e77b8;
        case 0x3e77bcu: goto label_3e77bc;
        default: break;
    }

    ctx->pc = 0x3e76a8u;

label_3e76a8:
    // 0x3e76a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e76a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e76ac:
    // 0x3e76ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3e76acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3e76b0:
    // 0x3e76b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3e76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3e76b4:
    // 0x3e76b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e76b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e76b8:
    // 0x3e76b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e76b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e76bc:
    // 0x3e76bc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3e76bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3e76c0:
    // 0x3e76c0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3e76c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3e76c4:
    // 0x3e76c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e76c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e76c8:
    // 0x3e76c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e76c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e76cc:
    // 0x3e76cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e76ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e76d0:
    // 0x3e76d0: 0xc0ea146  jal         func_3A8518
label_3e76d4:
    if (ctx->pc == 0x3E76D4u) {
        ctx->pc = 0x3E76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76D0u;
        // 0x3e76d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E76D8u;
        goto label_3e76d8;
    }
    ctx->pc = 0x3E76D0u;
    SET_GPR_U32(ctx, 31, 0x3E76D8u);
    ctx->pc = 0x3E76D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76D0u;
    // 0x3e76d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E76D0u, 0x3E76D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76D8u;
label_3e76d8:
    // 0x3e76d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e76d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e76dc:
    // 0x3e76dc: 0xc0ea12a  jal         func_3A84A8
label_3e76e0:
    if (ctx->pc == 0x3E76E0u) {
        ctx->pc = 0x3E76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76DCu;
        // 0x3e76e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E76E4u;
        goto label_3e76e4;
    }
    ctx->pc = 0x3E76DCu;
    SET_GPR_U32(ctx, 31, 0x3E76E4u);
    ctx->pc = 0x3E76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76DCu;
    // 0x3e76e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E76DCu, 0x3E76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76E4u;
label_3e76e4:
    // 0x3e76e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e76e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e76e8:
    // 0x3e76e8: 0xc0ea12a  jal         func_3A84A8
label_3e76ec:
    if (ctx->pc == 0x3E76ECu) {
        ctx->pc = 0x3E76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76E8u;
        // 0x3e76ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E76F0u;
        goto label_3e76f0;
    }
    ctx->pc = 0x3E76E8u;
    SET_GPR_U32(ctx, 31, 0x3E76F0u);
    ctx->pc = 0x3E76ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76E8u;
    // 0x3e76ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E76E8u, 0x3E76F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76F0u;
label_3e76f0:
    // 0x3e76f0: 0xc0ea146  jal         func_3A8518
label_3e76f4:
    if (ctx->pc == 0x3E76F4u) {
        ctx->pc = 0x3E76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76F0u;
        // 0x3e76f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E76F8u;
        goto label_3e76f8;
    }
    ctx->pc = 0x3E76F0u;
    SET_GPR_U32(ctx, 31, 0x3E76F8u);
    ctx->pc = 0x3E76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76F0u;
    // 0x3e76f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E76F0u, 0x3E76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76F8u;
label_3e76f8:
    // 0x3e76f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e76f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e76fc:
    // 0x3e76fc: 0xc0ea14c  jal         func_3A8530
label_3e7700:
    if (ctx->pc == 0x3E7700u) {
        ctx->pc = 0x3E7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76FCu;
        // 0x3e7700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7704u;
        goto label_3e7704;
    }
    ctx->pc = 0x3E76FCu;
    SET_GPR_U32(ctx, 31, 0x3E7704u);
    ctx->pc = 0x3E7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76FCu;
    // 0x3e7700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E76FCu, 0x3E7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7704u;
label_3e7704:
    // 0x3e7704: 0xc08a61a  jal         func_229868
label_3e7708:
    if (ctx->pc == 0x3E7708u) {
        ctx->pc = 0x3E7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7704u;
        // 0x3e7708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E770Cu;
        goto label_3e770c;
    }
    ctx->pc = 0x3E7704u;
    SET_GPR_U32(ctx, 31, 0x3E770Cu);
    ctx->pc = 0x3E7708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7704u;
    // 0x3e7708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3E7704u, 0x3E770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E770Cu;
label_3e770c:
    // 0x3e770c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7710:
    // 0x3e7710: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e7710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7714:
    // 0x3e7714: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x3e7714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
label_3e7718:
    // 0x3e7718: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e7718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e771c:
    // 0x3e771c: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3e771cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
label_3e7720:
    // 0x3e7720: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e7724:
    // 0x3e7724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e7724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7728:
    // 0x3e7728: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e7728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e772c:
    // 0x3e772c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e7730:
    // 0x3e7730: 0x60f809  jalr        $v1
label_3e7734:
    if (ctx->pc == 0x3E7734u) {
        ctx->pc = 0x3E7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7730u;
        // 0x3e7734: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7738u;
        goto label_3e7738;
    }
    ctx->pc = 0x3E7730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E7738u);
        ctx->pc = 0x3E7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7730u;
        // 0x3e7734: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7730u, 0x3E7738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7738u;
label_3e7738:
    // 0x3e7738: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e7738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e773c:
    // 0x3e773c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e773cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7740:
    // 0x3e7740: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x3e7740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_3e7744:
    // 0x3e7744: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x3e7744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3e7748:
    // 0x3e7748: 0x60f809  jalr        $v1
label_3e774c:
    if (ctx->pc == 0x3E774Cu) {
        ctx->pc = 0x3E774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7748u;
        // 0x3e774c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7750u;
        goto label_3e7750;
    }
    ctx->pc = 0x3E7748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E7750u);
        ctx->pc = 0x3E774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7748u;
        // 0x3e774c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7748u, 0x3E7750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7750u;
label_3e7750:
    // 0x3e7750: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e7750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e7754:
    // 0x3e7754: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e7754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e7758:
    // 0x3e7758: 0xc0e8604  jal         func_3A1810
label_3e775c:
    if (ctx->pc == 0x3E775Cu) {
        ctx->pc = 0x3E775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7758u;
        // 0x3e775c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7760u;
        goto label_3e7760;
    }
    ctx->pc = 0x3E7758u;
    SET_GPR_U32(ctx, 31, 0x3E7760u);
    ctx->pc = 0x3E775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7758u;
    // 0x3e775c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3E7758u, 0x3E7760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7760u;
label_3e7760:
    // 0x3e7760: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3e7760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e7764:
    // 0x3e7764: 0x3c02f9ff  lui         $v0, 0xF9FF
    ctx->pc = 0x3e7764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63999 << 16));
label_3e7768:
    // 0x3e7768: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e776c:
    // 0x3e776c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e776cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e7770:
    // 0x3e7770: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x3e7770u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e7774:
    // 0x3e7774: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3e7774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3e7778:
    // 0x3e7778: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x3e7778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_3e777c:
    // 0x3e777c: 0x2406ff7f  addiu       $a2, $zero, -0x81
    ctx->pc = 0x3e777cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_3e7780:
    // 0x3e7780: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x3e7780u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_3e7784:
    // 0x3e7784: 0x7e450000  sq          $a1, 0x0($s2)
    ctx->pc = 0x3e7784u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 5));
label_3e7788:
    // 0x3e7788: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x3e7788u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
label_3e778c:
    // 0x3e778c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e7790:
    // 0x3e7790: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3e7790u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3e7794:
    // 0x3e7794: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3e7794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_3e7798:
    // 0x3e7798: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3e7798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3e779c:
    // 0x3e779c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e779cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e77a0:
    // 0x3e77a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3e77a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e77a4:
    // 0x3e77a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3e77a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e77a8:
    // 0x3e77a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3e77a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e77ac:
    // 0x3e77ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3e77acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e77b0:
    // 0x3e77b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e77b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e77b4:
    // 0x3e77b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e77b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e77b8:
    // 0x3e77b8: 0x3e00008  jr          $ra
label_3e77bc:
    if (ctx->pc == 0x3E77BCu) {
        ctx->pc = 0x3E77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77B8u;
        // 0x3e77bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E77C0u;
        goto label_fallthrough_0x3e77b8;
    }
    ctx->pc = 0x3E77B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77B8u;
        // 0x3e77bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E77B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e77b8:
    ctx->pc = 0x3E77C0u;
}
