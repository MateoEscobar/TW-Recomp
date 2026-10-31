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

// Function: sub_001D5700
// Address: 0x1d5700 - 0x1d5808
void sub_001D5700_0x1d5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5700_0x1d5700");
#endif

    switch (ctx->pc) {
        case 0x1d5700u: goto label_1d5700;
        case 0x1d5704u: goto label_1d5704;
        case 0x1d5708u: goto label_1d5708;
        case 0x1d570cu: goto label_1d570c;
        case 0x1d5710u: goto label_1d5710;
        case 0x1d5714u: goto label_1d5714;
        case 0x1d5718u: goto label_1d5718;
        case 0x1d571cu: goto label_1d571c;
        case 0x1d5720u: goto label_1d5720;
        case 0x1d5724u: goto label_1d5724;
        case 0x1d5728u: goto label_1d5728;
        case 0x1d572cu: goto label_1d572c;
        case 0x1d5730u: goto label_1d5730;
        case 0x1d5734u: goto label_1d5734;
        case 0x1d5738u: goto label_1d5738;
        case 0x1d573cu: goto label_1d573c;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5744u: goto label_1d5744;
        case 0x1d5748u: goto label_1d5748;
        case 0x1d574cu: goto label_1d574c;
        case 0x1d5750u: goto label_1d5750;
        case 0x1d5754u: goto label_1d5754;
        case 0x1d5758u: goto label_1d5758;
        case 0x1d575cu: goto label_1d575c;
        case 0x1d5760u: goto label_1d5760;
        case 0x1d5764u: goto label_1d5764;
        case 0x1d5768u: goto label_1d5768;
        case 0x1d576cu: goto label_1d576c;
        case 0x1d5770u: goto label_1d5770;
        case 0x1d5774u: goto label_1d5774;
        case 0x1d5778u: goto label_1d5778;
        case 0x1d577cu: goto label_1d577c;
        case 0x1d5780u: goto label_1d5780;
        case 0x1d5784u: goto label_1d5784;
        case 0x1d5788u: goto label_1d5788;
        case 0x1d578cu: goto label_1d578c;
        case 0x1d5790u: goto label_1d5790;
        case 0x1d5794u: goto label_1d5794;
        case 0x1d5798u: goto label_1d5798;
        case 0x1d579cu: goto label_1d579c;
        case 0x1d57a0u: goto label_1d57a0;
        case 0x1d57a4u: goto label_1d57a4;
        case 0x1d57a8u: goto label_1d57a8;
        case 0x1d57acu: goto label_1d57ac;
        case 0x1d57b0u: goto label_1d57b0;
        case 0x1d57b4u: goto label_1d57b4;
        case 0x1d57b8u: goto label_1d57b8;
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57c0u: goto label_1d57c0;
        case 0x1d57c4u: goto label_1d57c4;
        case 0x1d57c8u: goto label_1d57c8;
        case 0x1d57ccu: goto label_1d57cc;
        case 0x1d57d0u: goto label_1d57d0;
        case 0x1d57d4u: goto label_1d57d4;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57dcu: goto label_1d57dc;
        case 0x1d57e0u: goto label_1d57e0;
        case 0x1d57e4u: goto label_1d57e4;
        case 0x1d57e8u: goto label_1d57e8;
        case 0x1d57ecu: goto label_1d57ec;
        case 0x1d57f0u: goto label_1d57f0;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d57f8u: goto label_1d57f8;
        case 0x1d57fcu: goto label_1d57fc;
        case 0x1d5800u: goto label_1d5800;
        case 0x1d5804u: goto label_1d5804;
        default: break;
    }

    ctx->pc = 0x1d5700u;

label_1d5700:
    // 0x1d5700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d5700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d5704:
    // 0x1d5704: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d5704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d5708:
    // 0x1d5708: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d5708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1d570c:
    // 0x1d570c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d570cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5710:
    // 0x1d5710: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d5710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1d5714:
    // 0x1d5714: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d5714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1d5718:
    // 0x1d5718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d571c:
    // 0x1d571c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d5720:
    // 0x1d5720: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d5720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d5724:
    // 0x1d5724: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d5728:
    // 0x1d5728: 0x40f809  jalr        $v0
label_1d572c:
    if (ctx->pc == 0x1D572Cu) {
        ctx->pc = 0x1D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5728u;
        // 0x1d572c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5730u;
        goto label_1d5730;
    }
    ctx->pc = 0x1D5728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5730u);
        ctx->pc = 0x1D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5728u;
        // 0x1d572c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5728u, 0x1D5730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5730u;
label_1d5730:
    // 0x1d5730: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1d5734:
    if (ctx->pc == 0x1D5734u) {
        ctx->pc = 0x1D5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5730u;
        // 0x1d5734: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5738u;
        goto label_1d5738;
    }
    ctx->pc = 0x1D5730u;
    {
        const bool branch_taken_0x1d5730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5730u;
        // 0x1d5734: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5730) {
            ctx->pc = 0x1D57F0u;
            goto label_1d57f0;
        }
    }
    ctx->pc = 0x1D5738u;
label_1d5738:
    // 0x1d5738: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d5738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d573c:
    // 0x1d573c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1d5740:
    // 0x1d5740: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1d5740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1d5744:
    // 0x1d5744: 0x40f809  jalr        $v0
label_1d5748:
    if (ctx->pc == 0x1D5748u) {
        ctx->pc = 0x1D5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5744u;
        // 0x1d5748: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D574Cu;
        goto label_1d574c;
    }
    ctx->pc = 0x1D5744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D574Cu);
        ctx->pc = 0x1D5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5744u;
        // 0x1d5748: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5744u, 0x1D574Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D574Cu;
label_1d574c:
    // 0x1d574c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1d5750:
    if (ctx->pc == 0x1D5750u) {
        ctx->pc = 0x1D5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D574Cu;
        // 0x1d5750: 0x8e4201f4  lw          $v0, 0x1F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5754u;
        goto label_1d5754;
    }
    ctx->pc = 0x1D574Cu;
    {
        const bool branch_taken_0x1d574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d574c) {
            ctx->pc = 0x1D5750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D574Cu;
            // 0x1d5750: 0x8e4201f4  lw          $v0, 0x1F4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5780u;
            goto label_1d5780;
        }
    }
    ctx->pc = 0x1D5754u;
label_1d5754:
    // 0x1d5754: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d5754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d5758:
    // 0x1d5758: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1d5758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1d575c:
    // 0x1d575c: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1d575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1d5760:
    // 0x1d5760: 0x40f809  jalr        $v0
label_1d5764:
    if (ctx->pc == 0x1D5764u) {
        ctx->pc = 0x1D5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5760u;
        // 0x1d5764: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5768u;
        goto label_1d5768;
    }
    ctx->pc = 0x1D5760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5768u);
        ctx->pc = 0x1D5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5760u;
        // 0x1d5764: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5760u, 0x1D5768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5768u;
label_1d5768:
    // 0x1d5768: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d576c:
    if (ctx->pc == 0x1D576Cu) {
        ctx->pc = 0x1D576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5768u;
        // 0x1d576c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5770u;
        goto label_1d5770;
    }
    ctx->pc = 0x1D5768u;
    {
        const bool branch_taken_0x1d5768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5768u;
        // 0x1d576c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5768) {
            ctx->pc = 0x1D577Cu;
            goto label_1d577c;
        }
    }
    ctx->pc = 0x1D5770u;
label_1d5770:
    // 0x1d5770: 0x8c43d318  lw          $v1, -0x2CE8($v0)
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955800)));
label_1d5774:
    // 0x1d5774: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d5778:
    if (ctx->pc == 0x1D5778u) {
        ctx->pc = 0x1D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5774u;
        // 0x1d5778: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D577Cu;
        goto label_1d577c;
    }
    ctx->pc = 0x1D5774u;
    {
        const bool branch_taken_0x1d5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5774u;
        // 0x1d5778: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5774) {
            ctx->pc = 0x1D5784u;
            goto label_1d5784;
        }
    }
    ctx->pc = 0x1D577Cu;
label_1d577c:
    // 0x1d577c: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x1d577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
label_1d5780:
    // 0x1d5780: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d5780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d5784:
    // 0x1d5784: 0x924201f3  lbu         $v0, 0x1F3($s2)
    ctx->pc = 0x1d5784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 499)));
label_1d5788:
    // 0x1d5788: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x1d5788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1d578c:
    // 0x1d578c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d578cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d5790:
    // 0x1d5790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d5794:
    // 0x1d5794: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1d5794u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_1d5798:
    // 0x1d5798: 0xc073472  jal         func_1CD1C8
label_1d579c:
    if (ctx->pc == 0x1D579Cu) {
        ctx->pc = 0x1D579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5798u;
        // 0x1d579c: 0x26500120  addiu       $s0, $s2, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57A0u;
        goto label_1d57a0;
    }
    ctx->pc = 0x1D5798u;
    SET_GPR_U32(ctx, 31, 0x1D57A0u);
    ctx->pc = 0x1D579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5798u;
    // 0x1d579c: 0x26500120  addiu       $s0, $s2, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D5798u, 0x1D57A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57A0u;
label_1d57a0:
    // 0x1d57a0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1d57a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d57a4:
    // 0x1d57a4: 0xc0734a2  jal         func_1CD288
label_1d57a8:
    if (ctx->pc == 0x1D57A8u) {
        ctx->pc = 0x1D57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57A4u;
        // 0x1d57a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57ACu;
        goto label_1d57ac;
    }
    ctx->pc = 0x1D57A4u;
    SET_GPR_U32(ctx, 31, 0x1D57ACu);
    ctx->pc = 0x1D57A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57A4u;
    // 0x1d57a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D57A4u, 0x1D57ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57ACu;
label_1d57ac:
    // 0x1d57ac: 0xc073460  jal         func_1CD180
label_1d57b0:
    if (ctx->pc == 0x1D57B0u) {
        ctx->pc = 0x1D57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57ACu;
        // 0x1d57b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57B4u;
        goto label_1d57b4;
    }
    ctx->pc = 0x1D57ACu;
    SET_GPR_U32(ctx, 31, 0x1D57B4u);
    ctx->pc = 0x1D57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57ACu;
    // 0x1d57b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD180u, 0x1D57ACu, 0x1D57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57B4u;
label_1d57b4:
    // 0x1d57b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1d57b8:
    if (ctx->pc == 0x1D57B8u) {
        ctx->pc = 0x1D57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57B4u;
        // 0x1d57b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57BCu;
        goto label_1d57bc;
    }
    ctx->pc = 0x1D57B4u;
    {
        const bool branch_taken_0x1d57b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57B4u;
        // 0x1d57b8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57b4) {
            ctx->pc = 0x1D57F0u;
            goto label_1d57f0;
        }
    }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x1d57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
label_1d57c0:
    // 0x1d57c0: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x1d57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
label_1d57c4:
    // 0x1d57c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d57c8:
    // 0x1d57c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d57cc:
    if (ctx->pc == 0x1D57CCu) {
        ctx->pc = 0x1D57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57C8u;
        // 0x1d57cc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57D0u;
        goto label_1d57d0;
    }
    ctx->pc = 0x1D57C8u;
    {
        const bool branch_taken_0x1d57c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57C8u;
        // 0x1d57cc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57c8) {
            ctx->pc = 0x1D57D4u;
            goto label_1d57d4;
        }
    }
    ctx->pc = 0x1D57D0u;
label_1d57d0:
    // 0x1d57d0: 0x924201f3  lbu         $v0, 0x1F3($s2)
    ctx->pc = 0x1d57d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 499)));
label_1d57d4:
    // 0x1d57d4: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1d57d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_1d57d8:
    // 0x1d57d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d57d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d57dc:
    // 0x1d57dc: 0xc073472  jal         func_1CD1C8
label_1d57e0:
    if (ctx->pc == 0x1D57E0u) {
        ctx->pc = 0x1D57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57DCu;
        // 0x1d57e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57E4u;
        goto label_1d57e4;
    }
    ctx->pc = 0x1D57DCu;
    SET_GPR_U32(ctx, 31, 0x1D57E4u);
    ctx->pc = 0x1D57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57DCu;
    // 0x1d57e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1C8u, 0x1D57DCu, 0x1D57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57E4u;
label_1d57e4:
    // 0x1d57e4: 0xc0734a2  jal         func_1CD288
label_1d57e8:
    if (ctx->pc == 0x1D57E8u) {
        ctx->pc = 0x1D57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57E4u;
        // 0x1d57e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57ECu;
        goto label_1d57ec;
    }
    ctx->pc = 0x1D57E4u;
    SET_GPR_U32(ctx, 31, 0x1D57ECu);
    ctx->pc = 0x1D57E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57E4u;
    // 0x1d57e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D57E4u, 0x1D57ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57ECu;
label_1d57ec:
    // 0x1d57ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d57ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d57f0:
    // 0x1d57f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d57f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d57f4:
    // 0x1d57f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d57f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d57f8:
    // 0x1d57f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d57f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d57fc:
    // 0x1d57fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d57fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5800:
    // 0x1d5800: 0x3e00008  jr          $ra
label_1d5804:
    if (ctx->pc == 0x1D5804u) {
        ctx->pc = 0x1D5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5800u;
        // 0x1d5804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5808u;
        goto label_fallthrough_0x1d5800;
    }
    ctx->pc = 0x1D5800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5800u;
        // 0x1d5804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d5800:
    ctx->pc = 0x1D5808u;
}
