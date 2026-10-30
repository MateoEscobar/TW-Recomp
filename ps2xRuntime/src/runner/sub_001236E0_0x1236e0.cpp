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

// Function: sub_001236E0
// Address: 0x1236e0 - 0x123888
void sub_001236E0_0x1236e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001236E0_0x1236e0");
#endif

    switch (ctx->pc) {
        case 0x1236e0u: goto label_1236e0;
        case 0x1236e4u: goto label_1236e4;
        case 0x1236e8u: goto label_1236e8;
        case 0x1236ecu: goto label_1236ec;
        case 0x1236f0u: goto label_1236f0;
        case 0x1236f4u: goto label_1236f4;
        case 0x1236f8u: goto label_1236f8;
        case 0x1236fcu: goto label_1236fc;
        case 0x123700u: goto label_123700;
        case 0x123704u: goto label_123704;
        case 0x123708u: goto label_123708;
        case 0x12370cu: goto label_12370c;
        case 0x123710u: goto label_123710;
        case 0x123714u: goto label_123714;
        case 0x123718u: goto label_123718;
        case 0x12371cu: goto label_12371c;
        case 0x123720u: goto label_123720;
        case 0x123724u: goto label_123724;
        case 0x123728u: goto label_123728;
        case 0x12372cu: goto label_12372c;
        case 0x123730u: goto label_123730;
        case 0x123734u: goto label_123734;
        case 0x123738u: goto label_123738;
        case 0x12373cu: goto label_12373c;
        case 0x123740u: goto label_123740;
        case 0x123744u: goto label_123744;
        case 0x123748u: goto label_123748;
        case 0x12374cu: goto label_12374c;
        case 0x123750u: goto label_123750;
        case 0x123754u: goto label_123754;
        case 0x123758u: goto label_123758;
        case 0x12375cu: goto label_12375c;
        case 0x123760u: goto label_123760;
        case 0x123764u: goto label_123764;
        case 0x123768u: goto label_123768;
        case 0x12376cu: goto label_12376c;
        case 0x123770u: goto label_123770;
        case 0x123774u: goto label_123774;
        case 0x123778u: goto label_123778;
        case 0x12377cu: goto label_12377c;
        case 0x123780u: goto label_123780;
        case 0x123784u: goto label_123784;
        case 0x123788u: goto label_123788;
        case 0x12378cu: goto label_12378c;
        case 0x123790u: goto label_123790;
        case 0x123794u: goto label_123794;
        case 0x123798u: goto label_123798;
        case 0x12379cu: goto label_12379c;
        case 0x1237a0u: goto label_1237a0;
        case 0x1237a4u: goto label_1237a4;
        case 0x1237a8u: goto label_1237a8;
        case 0x1237acu: goto label_1237ac;
        case 0x1237b0u: goto label_1237b0;
        case 0x1237b4u: goto label_1237b4;
        case 0x1237b8u: goto label_1237b8;
        case 0x1237bcu: goto label_1237bc;
        case 0x1237c0u: goto label_1237c0;
        case 0x1237c4u: goto label_1237c4;
        case 0x1237c8u: goto label_1237c8;
        case 0x1237ccu: goto label_1237cc;
        case 0x1237d0u: goto label_1237d0;
        case 0x1237d4u: goto label_1237d4;
        case 0x1237d8u: goto label_1237d8;
        case 0x1237dcu: goto label_1237dc;
        case 0x1237e0u: goto label_1237e0;
        case 0x1237e4u: goto label_1237e4;
        case 0x1237e8u: goto label_1237e8;
        case 0x1237ecu: goto label_1237ec;
        case 0x1237f0u: goto label_1237f0;
        case 0x1237f4u: goto label_1237f4;
        case 0x1237f8u: goto label_1237f8;
        case 0x1237fcu: goto label_1237fc;
        case 0x123800u: goto label_123800;
        case 0x123804u: goto label_123804;
        case 0x123808u: goto label_123808;
        case 0x12380cu: goto label_12380c;
        case 0x123810u: goto label_123810;
        case 0x123814u: goto label_123814;
        case 0x123818u: goto label_123818;
        case 0x12381cu: goto label_12381c;
        case 0x123820u: goto label_123820;
        case 0x123824u: goto label_123824;
        case 0x123828u: goto label_123828;
        case 0x12382cu: goto label_12382c;
        case 0x123830u: goto label_123830;
        case 0x123834u: goto label_123834;
        case 0x123838u: goto label_123838;
        case 0x12383cu: goto label_12383c;
        case 0x123840u: goto label_123840;
        case 0x123844u: goto label_123844;
        case 0x123848u: goto label_123848;
        case 0x12384cu: goto label_12384c;
        case 0x123850u: goto label_123850;
        case 0x123854u: goto label_123854;
        case 0x123858u: goto label_123858;
        case 0x12385cu: goto label_12385c;
        case 0x123860u: goto label_123860;
        case 0x123864u: goto label_123864;
        case 0x123868u: goto label_123868;
        case 0x12386cu: goto label_12386c;
        case 0x123870u: goto label_123870;
        case 0x123874u: goto label_123874;
        case 0x123878u: goto label_123878;
        case 0x12387cu: goto label_12387c;
        case 0x123880u: goto label_123880;
        case 0x123884u: goto label_123884;
        default: break;
    }

    ctx->pc = 0x1236e0u;

label_1236e0:
    // 0x1236e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1236e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1236e4:
    // 0x1236e4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1236e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1236e8:
    // 0x1236e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1236e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1236ec:
    // 0x1236ec: 0x8c4391b8  lw          $v1, -0x6E48($v0)
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939064)));
label_1236f0:
    // 0x1236f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1236f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1236f4:
    // 0x1236f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1236f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1236f8:
    // 0x1236f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1236f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1236fc:
    // 0x1236fc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1236fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_123700:
    // 0x123700: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x123700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_123704:
    // 0x123704: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x123704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_123708:
    // 0x123708: 0xc0e409a  jal         func_390268
label_12370c:
    if (ctx->pc == 0x12370Cu) {
        ctx->pc = 0x12370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123708u;
        // 0x12370c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123710u;
        goto label_123710;
    }
    ctx->pc = 0x123708u;
    SET_GPR_U32(ctx, 31, 0x123710u);
    ctx->pc = 0x12370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123708u;
    // 0x12370c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x123708u, 0x123710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123710u;
label_123710:
    // 0x123710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_123714:
    if (ctx->pc == 0x123714u) {
        ctx->pc = 0x123714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123710u;
        // 0x123714: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123718u;
        goto label_123718;
    }
    ctx->pc = 0x123710u;
    {
        const bool branch_taken_0x123710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123710u;
        // 0x123714: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123710) {
            ctx->pc = 0x123728u;
            goto label_123728;
        }
    }
    ctx->pc = 0x123718u;
label_123718:
    // 0x123718: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x123718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_12371c:
    // 0x12371c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12371cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_123720:
    // 0x123720: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
label_123724:
    if (ctx->pc == 0x123724u) {
        ctx->pc = 0x123728u;
        goto label_123728;
    }
    ctx->pc = 0x123720u;
    {
        const bool branch_taken_0x123720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123720) {
            ctx->pc = 0x123860u;
            goto label_123860;
        }
    }
    ctx->pc = 0x123728u;
label_123728:
    // 0x123728: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x123728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_12372c:
    // 0x12372c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x12372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_123730:
    // 0x123730: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x123730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123734:
    // 0x123734: 0xc0e409a  jal         func_390268
label_123738:
    if (ctx->pc == 0x123738u) {
        ctx->pc = 0x123738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123734u;
        // 0x123738: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12373Cu;
        goto label_12373c;
    }
    ctx->pc = 0x123734u;
    SET_GPR_U32(ctx, 31, 0x12373Cu);
    ctx->pc = 0x123738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123734u;
    // 0x123738: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x123734u, 0x12373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12373Cu;
label_12373c:
    // 0x12373c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_123740:
    if (ctx->pc == 0x123740u) {
        ctx->pc = 0x123740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12373Cu;
        // 0x123740: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123744u;
        goto label_123744;
    }
    ctx->pc = 0x12373Cu;
    {
        const bool branch_taken_0x12373c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12373Cu;
        // 0x123740: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12373c) {
            ctx->pc = 0x1237B0u;
            goto label_1237b0;
        }
    }
    ctx->pc = 0x123744u;
label_123744:
    // 0x123744: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x123744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_123748:
    // 0x123748: 0xc0e409a  jal         func_390268
label_12374c:
    if (ctx->pc == 0x12374Cu) {
        ctx->pc = 0x12374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123748u;
        // 0x12374c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123750u;
        goto label_123750;
    }
    ctx->pc = 0x123748u;
    SET_GPR_U32(ctx, 31, 0x123750u);
    ctx->pc = 0x12374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123748u;
    // 0x12374c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x123748u, 0x123750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123750u;
label_123750:
    // 0x123750: 0x8e2601e4  lw          $a2, 0x1E4($s1)
    ctx->pc = 0x123750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_123754:
    // 0x123754: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x123754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_123758:
    // 0x123758: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x123758u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_12375c:
    // 0x12375c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_123760:
    // 0x123760: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x123760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_123764:
    // 0x123764: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x123764u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_123768:
    // 0x123768: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x123768u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_12376c:
    // 0x12376c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x12376cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_123770:
    // 0x123770: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_123774:
    // 0x123774: 0x40f809  jalr        $v0
label_123778:
    if (ctx->pc == 0x123778u) {
        ctx->pc = 0x123778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123774u;
        // 0x123778: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12377Cu;
        goto label_12377c;
    }
    ctx->pc = 0x123774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12377Cu);
        ctx->pc = 0x123778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123774u;
        // 0x123778: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123774u, 0x12377Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12377Cu;
label_12377c:
    // 0x12377c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12377cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123780:
    // 0x123780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123784:
    // 0x123784: 0xc136afa  jal         func_4DABE8
label_123788:
    if (ctx->pc == 0x123788u) {
        ctx->pc = 0x123788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123784u;
        // 0x123788: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12378Cu;
        goto label_12378c;
    }
    ctx->pc = 0x123784u;
    SET_GPR_U32(ctx, 31, 0x12378Cu);
    ctx->pc = 0x123788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123784u;
    // 0x123788: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x123784u, 0x12378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12378Cu;
label_12378c:
    // 0x12378c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12378cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123790:
    // 0x123790: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_123794:
    // 0x123794: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x123794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123798:
    // 0x123798: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x123798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12379c:
    // 0x12379c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12379cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1237a0:
    // 0x1237a0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1237a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1237a4:
    // 0x1237a4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x1237a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1237a8:
    // 0x1237a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1237ac:
    if (ctx->pc == 0x1237ACu) {
        ctx->pc = 0x1237ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237A8u;
        // 0x1237ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237B0u;
        goto label_1237b0;
    }
    ctx->pc = 0x1237A8u;
    {
        const bool branch_taken_0x1237a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237A8u;
        // 0x1237ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237a8) {
            ctx->pc = 0x1237B4u;
            goto label_1237b4;
        }
    }
    ctx->pc = 0x1237B0u;
label_1237b0:
    // 0x1237b0: 0xc4548910  lwc1        $f20, -0x76F0($v0)
    ctx->pc = 0x1237b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1237b4:
    // 0x1237b4: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x1237b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_1237b8:
    // 0x1237b8: 0xc0e409a  jal         func_390268
label_1237bc:
    if (ctx->pc == 0x1237BCu) {
        ctx->pc = 0x1237BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237B8u;
        // 0x1237bc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237C0u;
        goto label_1237c0;
    }
    ctx->pc = 0x1237B8u;
    SET_GPR_U32(ctx, 31, 0x1237C0u);
    ctx->pc = 0x1237BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237B8u;
    // 0x1237bc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1237B8u, 0x1237C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237C0u;
label_1237c0:
    // 0x1237c0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1237c4:
    if (ctx->pc == 0x1237C4u) {
        ctx->pc = 0x1237C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237C0u;
        // 0x1237c4: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237C8u;
        goto label_1237c8;
    }
    ctx->pc = 0x1237C0u;
    {
        const bool branch_taken_0x1237c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237C0u;
        // 0x1237c4: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237c0) {
            ctx->pc = 0x123830u;
            goto label_123830;
        }
    }
    ctx->pc = 0x1237C8u;
label_1237c8:
    // 0x1237c8: 0xc0e409a  jal         func_390268
label_1237cc:
    if (ctx->pc == 0x1237CCu) {
        ctx->pc = 0x1237CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237C8u;
        // 0x1237cc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237D0u;
        goto label_1237d0;
    }
    ctx->pc = 0x1237C8u;
    SET_GPR_U32(ctx, 31, 0x1237D0u);
    ctx->pc = 0x1237CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237C8u;
    // 0x1237cc: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1237C8u, 0x1237D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1237D0u;
label_1237d0:
    // 0x1237d0: 0x8e2601e4  lw          $a2, 0x1E4($s1)
    ctx->pc = 0x1237d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1237d4:
    // 0x1237d4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x1237d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_1237d8:
    // 0x1237d8: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x1237d8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_1237dc:
    // 0x1237dc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x1237dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_1237e0:
    // 0x1237e0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1237e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1237e4:
    // 0x1237e4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x1237e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_1237e8:
    // 0x1237e8: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_1237ec:
    // 0x1237ec: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1237ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1237f0:
    // 0x1237f0: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x1237f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_1237f4:
    // 0x1237f4: 0x40f809  jalr        $v0
label_1237f8:
    if (ctx->pc == 0x1237F8u) {
        ctx->pc = 0x1237F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237F4u;
        // 0x1237f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237FCu;
        goto label_1237fc;
    }
    ctx->pc = 0x1237F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1237FCu);
        ctx->pc = 0x1237F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237F4u;
        // 0x1237f8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1237F4u, 0x1237FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1237FCu;
label_1237fc:
    // 0x1237fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1237fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123800:
    // 0x123800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123804:
    // 0x123804: 0xc136afa  jal         func_4DABE8
label_123808:
    if (ctx->pc == 0x123808u) {
        ctx->pc = 0x123808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123804u;
        // 0x123808: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12380Cu;
        goto label_12380c;
    }
    ctx->pc = 0x123804u;
    SET_GPR_U32(ctx, 31, 0x12380Cu);
    ctx->pc = 0x123808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123804u;
    // 0x123808: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x123804u, 0x12380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12380Cu;
label_12380c:
    // 0x12380c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12380cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_123810:
    // 0x123810: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x123810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_123814:
    // 0x123814: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x123814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123818:
    // 0x123818: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x123818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12381c:
    // 0x12381c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12381cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_123820:
    // 0x123820: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x123820u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_123824:
    // 0x123824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x123824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_123828:
    // 0x123828: 0x10000003  b           . + 4 + (0x3 << 2)
label_12382c:
    if (ctx->pc == 0x12382Cu) {
        ctx->pc = 0x12382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123828u;
        // 0x12382c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123830u;
        goto label_123830;
    }
    ctx->pc = 0x123828u;
    {
        const bool branch_taken_0x123828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123828u;
        // 0x12382c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123828) {
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x123830u;
label_123830:
    // 0x123830: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x123830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_123834:
    // 0x123834: 0xc4408910  lwc1        $f0, -0x76F0($v0)
    ctx->pc = 0x123834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123838:
    // 0x123838: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x123838u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12383c:
    // 0x12383c: 0x0  nop
    ctx->pc = 0x12383cu;
    // NOP
label_123840:
    // 0x123840: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_123844:
    if (ctx->pc == 0x123844u) {
        ctx->pc = 0x123844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123840u;
        // 0x123844: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123848u;
        goto label_123848;
    }
    ctx->pc = 0x123840u;
    {
        const bool branch_taken_0x123840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x123844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123840u;
        // 0x123844: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123840) {
            ctx->pc = 0x123850u;
            goto label_123850;
        }
    }
    ctx->pc = 0x123848u;
label_123848:
    // 0x123848: 0x10000002  b           . + 4 + (0x2 << 2)
label_12384c:
    if (ctx->pc == 0x12384Cu) {
        ctx->pc = 0x12384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123848u;
        // 0x12384c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123850u;
        goto label_123850;
    }
    ctx->pc = 0x123848u;
    {
        const bool branch_taken_0x123848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123848u;
        // 0x12384c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123848) {
            ctx->pc = 0x123854u;
            goto label_123854;
        }
    }
    ctx->pc = 0x123850u;
label_123850:
    // 0x123850: 0x2484022c  addiu       $a0, $a0, 0x22C
    ctx->pc = 0x123850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
label_123854:
    // 0x123854: 0xc0e409a  jal         func_390268
label_123858:
    if (ctx->pc == 0x123858u) {
        ctx->pc = 0x12385Cu;
        goto label_12385c;
    }
    ctx->pc = 0x123854u;
    SET_GPR_U32(ctx, 31, 0x12385Cu);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x123854u, 0x12385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12385Cu;
label_12385c:
    // 0x12385c: 0xae2201e0  sw          $v0, 0x1E0($s1)
    ctx->pc = 0x12385cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
label_123860:
    // 0x123860: 0xc048e2a  jal         func_1238A8
label_123864:
    if (ctx->pc == 0x123864u) {
        ctx->pc = 0x123864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123860u;
        // 0x123864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123868u;
        goto label_123868;
    }
    ctx->pc = 0x123860u;
    SET_GPR_U32(ctx, 31, 0x123868u);
    ctx->pc = 0x123864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123860u;
    // 0x123864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238A8u, 0x123860u, 0x123868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123868u;
label_123868:
    // 0x123868: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x123868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12386c:
    // 0x12386c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x12386cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_123870:
    // 0x123870: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x123870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123874:
    // 0x123874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_123878:
    // 0x123878: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x123878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12387c:
    // 0x12387c: 0x3e00008  jr          $ra
label_123880:
    if (ctx->pc == 0x123880u) {
        ctx->pc = 0x123880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12387Cu;
        // 0x123880: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123884u;
        goto label_123884;
    }
    ctx->pc = 0x12387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12387Cu;
        // 0x123880: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123884u;
label_123884:
    // 0x123884: 0x0  nop
    ctx->pc = 0x123884u;
    // NOP
    ctx->pc = 0x123888u;
}
