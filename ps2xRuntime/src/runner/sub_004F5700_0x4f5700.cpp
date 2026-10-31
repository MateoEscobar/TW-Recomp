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

// Function: sub_004F5700
// Address: 0x4f5700 - 0x4f57d8
void sub_004F5700_0x4f5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5700_0x4f5700");
#endif

    switch (ctx->pc) {
        case 0x4f5700u: goto label_4f5700;
        case 0x4f5704u: goto label_4f5704;
        case 0x4f5708u: goto label_4f5708;
        case 0x4f570cu: goto label_4f570c;
        case 0x4f5710u: goto label_4f5710;
        case 0x4f5714u: goto label_4f5714;
        case 0x4f5718u: goto label_4f5718;
        case 0x4f571cu: goto label_4f571c;
        case 0x4f5720u: goto label_4f5720;
        case 0x4f5724u: goto label_4f5724;
        case 0x4f5728u: goto label_4f5728;
        case 0x4f572cu: goto label_4f572c;
        case 0x4f5730u: goto label_4f5730;
        case 0x4f5734u: goto label_4f5734;
        case 0x4f5738u: goto label_4f5738;
        case 0x4f573cu: goto label_4f573c;
        case 0x4f5740u: goto label_4f5740;
        case 0x4f5744u: goto label_4f5744;
        case 0x4f5748u: goto label_4f5748;
        case 0x4f574cu: goto label_4f574c;
        case 0x4f5750u: goto label_4f5750;
        case 0x4f5754u: goto label_4f5754;
        case 0x4f5758u: goto label_4f5758;
        case 0x4f575cu: goto label_4f575c;
        case 0x4f5760u: goto label_4f5760;
        case 0x4f5764u: goto label_4f5764;
        case 0x4f5768u: goto label_4f5768;
        case 0x4f576cu: goto label_4f576c;
        case 0x4f5770u: goto label_4f5770;
        case 0x4f5774u: goto label_4f5774;
        case 0x4f5778u: goto label_4f5778;
        case 0x4f577cu: goto label_4f577c;
        case 0x4f5780u: goto label_4f5780;
        case 0x4f5784u: goto label_4f5784;
        case 0x4f5788u: goto label_4f5788;
        case 0x4f578cu: goto label_4f578c;
        case 0x4f5790u: goto label_4f5790;
        case 0x4f5794u: goto label_4f5794;
        case 0x4f5798u: goto label_4f5798;
        case 0x4f579cu: goto label_4f579c;
        case 0x4f57a0u: goto label_4f57a0;
        case 0x4f57a4u: goto label_4f57a4;
        case 0x4f57a8u: goto label_4f57a8;
        case 0x4f57acu: goto label_4f57ac;
        case 0x4f57b0u: goto label_4f57b0;
        case 0x4f57b4u: goto label_4f57b4;
        case 0x4f57b8u: goto label_4f57b8;
        case 0x4f57bcu: goto label_4f57bc;
        case 0x4f57c0u: goto label_4f57c0;
        case 0x4f57c4u: goto label_4f57c4;
        case 0x4f57c8u: goto label_4f57c8;
        case 0x4f57ccu: goto label_4f57cc;
        case 0x4f57d0u: goto label_4f57d0;
        case 0x4f57d4u: goto label_4f57d4;
        default: break;
    }

    ctx->pc = 0x4f5700u;

label_4f5700:
    // 0x4f5700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f5704:
    // 0x4f5704: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f5704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f5708:
    // 0x4f5708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f570c:
    // 0x4f570c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f570cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5710:
    // 0x4f5710: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4f5710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4f5714:
    // 0x4f5714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f5714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f5718:
    // 0x4f5718: 0x2465fff0  addiu       $a1, $v1, -0x10
    ctx->pc = 0x4f5718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_4f571c:
    // 0x4f571c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4f571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4f5720:
    // 0x4f5720: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f5720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f5724:
    // 0x4f5724: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_4f5728:
    if (ctx->pc == 0x4F5728u) {
        ctx->pc = 0x4F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5724u;
        // 0x4f5728: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F572Cu;
        goto label_4f572c;
    }
    ctx->pc = 0x4F5724u;
    {
        const bool branch_taken_0x4f5724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5724u;
        // 0x4f5728: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5724) {
            ctx->pc = 0x4F5758u;
            goto label_4f5758;
        }
    }
    ctx->pc = 0x4F572Cu;
label_4f572c:
    // 0x4f572c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4f5730:
    if (ctx->pc == 0x4F5730u) {
        ctx->pc = 0x4F5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F572Cu;
        // 0x4f5730: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5734u;
        goto label_4f5734;
    }
    ctx->pc = 0x4F572Cu;
    {
        const bool branch_taken_0x4f572c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F572Cu;
        // 0x4f5730: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f572c) {
            ctx->pc = 0x4F5758u;
            goto label_4f5758;
        }
    }
    ctx->pc = 0x4F5734u;
label_4f5734:
    // 0x4f5734: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4f5734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4f5738:
    // 0x4f5738: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4f5738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4f573c:
    // 0x4f573c: 0x24c68a50  addiu       $a2, $a2, -0x75B0
    ctx->pc = 0x4f573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937168));
label_4f5740:
    // 0x4f5740: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f5740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f5744:
    // 0x4f5744: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5748:
    // 0x4f5748: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f574c:
    // 0x4f574c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5750:
    // 0x4f5750: 0x60f809  jalr        $v1
label_4f5754:
    if (ctx->pc == 0x4F5754u) {
        ctx->pc = 0x4F5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5750u;
        // 0x4f5754: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5758u;
        goto label_4f5758;
    }
    ctx->pc = 0x4F5750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5758u);
        ctx->pc = 0x4F5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5750u;
        // 0x4f5754: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5750u, 0x4F5758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5758u;
label_4f5758:
    // 0x4f5758: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4f5758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f575c:
    // 0x4f575c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4f575cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f5760:
    // 0x4f5760: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4f5764:
    if (ctx->pc == 0x4F5764u) {
        ctx->pc = 0x4F5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5760u;
        // 0x4f5764: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5768u;
        goto label_4f5768;
    }
    ctx->pc = 0x4F5760u;
    {
        const bool branch_taken_0x4f5760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5760) {
            ctx->pc = 0x4F5764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5760u;
            // 0x4f5764: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5768u;
            goto label_4f5768;
        }
    }
    ctx->pc = 0x4F5768u;
label_4f5768:
    // 0x4f5768: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4f576c:
    if (ctx->pc == 0x4F576Cu) {
        ctx->pc = 0x4F576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5768u;
        // 0x4f576c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5770u;
        goto label_4f5770;
    }
    ctx->pc = 0x4F5768u;
    {
        const bool branch_taken_0x4f5768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5768u;
        // 0x4f576c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5768) {
            ctx->pc = 0x4F5794u;
            goto label_4f5794;
        }
    }
    ctx->pc = 0x4F5770u;
label_4f5770:
    // 0x4f5770: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4f5770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4f5774:
    // 0x4f5774: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4f5774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4f5778:
    // 0x4f5778: 0x24c68a50  addiu       $a2, $a2, -0x75B0
    ctx->pc = 0x4f5778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937168));
label_4f577c:
    // 0x4f577c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f577cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f5780:
    // 0x4f5780: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5784:
    // 0x4f5784: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5788:
    // 0x4f5788: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f578c:
    // 0x4f578c: 0x60f809  jalr        $v1
label_4f5790:
    if (ctx->pc == 0x4F5790u) {
        ctx->pc = 0x4F5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F578Cu;
        // 0x4f5790: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5794u;
        goto label_4f5794;
    }
    ctx->pc = 0x4F578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5794u);
        ctx->pc = 0x4F5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F578Cu;
        // 0x4f5790: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F578Cu, 0x4F5794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5794u;
label_4f5794:
    // 0x4f5794: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4f5794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4f5798:
    // 0x4f5798: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4f5798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4f579c:
    // 0x4f579c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4f579cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f57a0:
    // 0x4f57a0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4f57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4f57a4:
    // 0x4f57a4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4f57a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4f57a8:
    // 0x4f57a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4f57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4f57ac:
    // 0x4f57ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4f57acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4f57b0:
    // 0x4f57b0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4f57b4:
    if (ctx->pc == 0x4F57B4u) {
        ctx->pc = 0x4F57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F57B0u;
        // 0x4f57b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F57B8u;
        goto label_4f57b8;
    }
    ctx->pc = 0x4F57B0u;
    {
        const bool branch_taken_0x4f57b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f57b0) {
            ctx->pc = 0x4F57B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F57B0u;
            // 0x4f57b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F57B8u;
            goto label_4f57b8;
        }
    }
    ctx->pc = 0x4F57B8u;
label_4f57b8:
    // 0x4f57b8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4f57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4f57bc:
    // 0x4f57bc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4f57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4f57c0:
    // 0x4f57c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f57c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f57c4:
    // 0x4f57c4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4f57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f57c8:
    // 0x4f57c8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4f57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4f57cc:
    // 0x4f57cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f57ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f57d0:
    // 0x4f57d0: 0x3e00008  jr          $ra
label_4f57d4:
    if (ctx->pc == 0x4F57D4u) {
        ctx->pc = 0x4F57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F57D0u;
        // 0x4f57d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F57D8u;
        goto label_fallthrough_0x4f57d0;
    }
    ctx->pc = 0x4F57D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F57D0u;
        // 0x4f57d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F57D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f57d0:
    ctx->pc = 0x4F57D8u;
}
