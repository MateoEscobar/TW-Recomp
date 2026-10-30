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

// Function: sub_003E75D0
// Address: 0x3e75d0 - 0x3e76a8
void sub_003E75D0_0x3e75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E75D0_0x3e75d0");
#endif

    switch (ctx->pc) {
        case 0x3e75d0u: goto label_3e75d0;
        case 0x3e75d4u: goto label_3e75d4;
        case 0x3e75d8u: goto label_3e75d8;
        case 0x3e75dcu: goto label_3e75dc;
        case 0x3e75e0u: goto label_3e75e0;
        case 0x3e75e4u: goto label_3e75e4;
        case 0x3e75e8u: goto label_3e75e8;
        case 0x3e75ecu: goto label_3e75ec;
        case 0x3e75f0u: goto label_3e75f0;
        case 0x3e75f4u: goto label_3e75f4;
        case 0x3e75f8u: goto label_3e75f8;
        case 0x3e75fcu: goto label_3e75fc;
        case 0x3e7600u: goto label_3e7600;
        case 0x3e7604u: goto label_3e7604;
        case 0x3e7608u: goto label_3e7608;
        case 0x3e760cu: goto label_3e760c;
        case 0x3e7610u: goto label_3e7610;
        case 0x3e7614u: goto label_3e7614;
        case 0x3e7618u: goto label_3e7618;
        case 0x3e761cu: goto label_3e761c;
        case 0x3e7620u: goto label_3e7620;
        case 0x3e7624u: goto label_3e7624;
        case 0x3e7628u: goto label_3e7628;
        case 0x3e762cu: goto label_3e762c;
        case 0x3e7630u: goto label_3e7630;
        case 0x3e7634u: goto label_3e7634;
        case 0x3e7638u: goto label_3e7638;
        case 0x3e763cu: goto label_3e763c;
        case 0x3e7640u: goto label_3e7640;
        case 0x3e7644u: goto label_3e7644;
        case 0x3e7648u: goto label_3e7648;
        case 0x3e764cu: goto label_3e764c;
        case 0x3e7650u: goto label_3e7650;
        case 0x3e7654u: goto label_3e7654;
        case 0x3e7658u: goto label_3e7658;
        case 0x3e765cu: goto label_3e765c;
        case 0x3e7660u: goto label_3e7660;
        case 0x3e7664u: goto label_3e7664;
        case 0x3e7668u: goto label_3e7668;
        case 0x3e766cu: goto label_3e766c;
        case 0x3e7670u: goto label_3e7670;
        case 0x3e7674u: goto label_3e7674;
        case 0x3e7678u: goto label_3e7678;
        case 0x3e767cu: goto label_3e767c;
        case 0x3e7680u: goto label_3e7680;
        case 0x3e7684u: goto label_3e7684;
        case 0x3e7688u: goto label_3e7688;
        case 0x3e768cu: goto label_3e768c;
        case 0x3e7690u: goto label_3e7690;
        case 0x3e7694u: goto label_3e7694;
        case 0x3e7698u: goto label_3e7698;
        case 0x3e769cu: goto label_3e769c;
        case 0x3e76a0u: goto label_3e76a0;
        case 0x3e76a4u: goto label_3e76a4;
        default: break;
    }

    ctx->pc = 0x3e75d0u;

label_3e75d0:
    // 0x3e75d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e75d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e75d4:
    // 0x3e75d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e75d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3e75d8:
    // 0x3e75d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e75dc:
    // 0x3e75dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e75dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e75e0:
    // 0x3e75e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e75e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3e75e4:
    // 0x3e75e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e75e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e75e8:
    // 0x3e75e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3e75ec:
    // 0x3e75ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e75ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e75f0:
    // 0x3e75f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e75f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e75f4:
    // 0x3e75f4: 0xc0ea14c  jal         func_3A8530
label_3e75f8:
    if (ctx->pc == 0x3E75F8u) {
        ctx->pc = 0x3E75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75F4u;
        // 0x3e75f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E75FCu;
        goto label_3e75fc;
    }
    ctx->pc = 0x3E75F4u;
    SET_GPR_U32(ctx, 31, 0x3E75FCu);
    ctx->pc = 0x3E75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E75F4u;
    // 0x3e75f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E75F4u, 0x3E75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E75FCu;
label_3e75fc:
    // 0x3e75fc: 0xc08a61a  jal         func_229868
label_3e7600:
    if (ctx->pc == 0x3E7600u) {
        ctx->pc = 0x3E7600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75FCu;
        // 0x3e7600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7604u;
        goto label_3e7604;
    }
    ctx->pc = 0x3E75FCu;
    SET_GPR_U32(ctx, 31, 0x3E7604u);
    ctx->pc = 0x3E7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E75FCu;
    // 0x3e7600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3E75FCu, 0x3E7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7604u;
label_3e7604:
    // 0x3e7604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e7604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e7608:
    // 0x3e7608: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e7608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e760c:
    // 0x3e760c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e760cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e7610:
    // 0x3e7610: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e7614:
    // 0x3e7614: 0x40f809  jalr        $v0
label_3e7618:
    if (ctx->pc == 0x3E7618u) {
        ctx->pc = 0x3E7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7614u;
        // 0x3e7618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E761Cu;
        goto label_3e761c;
    }
    ctx->pc = 0x3E7614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E761Cu);
        ctx->pc = 0x3E7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7614u;
        // 0x3e7618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7614u, 0x3E761Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E761Cu;
label_3e761c:
    // 0x3e761c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3e761cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3e7620:
    // 0x3e7620: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e7620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e7624:
    // 0x3e7624: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_3e7628:
    if (ctx->pc == 0x3E7628u) {
        ctx->pc = 0x3E7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7624u;
        // 0x3e7628: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E762Cu;
        goto label_3e762c;
    }
    ctx->pc = 0x3E7624u;
    {
        const bool branch_taken_0x3e7624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7624u;
        // 0x3e7628: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7624) {
            ctx->pc = 0x3E767Cu;
            goto label_3e767c;
        }
    }
    ctx->pc = 0x3E762Cu;
label_3e762c:
    // 0x3e762c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3e762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3e7630:
    // 0x3e7630: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3e7634:
    if (ctx->pc == 0x3E7634u) {
        ctx->pc = 0x3E7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7630u;
        // 0x3e7634: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7638u;
        goto label_3e7638;
    }
    ctx->pc = 0x3E7630u;
    {
        const bool branch_taken_0x3e7630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7630u;
        // 0x3e7634: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7630) {
            ctx->pc = 0x3E767Cu;
            goto label_3e767c;
        }
    }
    ctx->pc = 0x3E7638u;
label_3e7638:
    // 0x3e7638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e7638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e763c:
    // 0x3e763c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e7640:
    // 0x3e7640: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3e7640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_3e7644:
    // 0x3e7644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e7644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7648:
    // 0x3e7648: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3e7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3e764c:
    // 0x3e764c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e7650:
    // 0x3e7650: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e7650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e7654:
    // 0x3e7654: 0xc0ea176  jal         func_3A85D8
label_3e7658:
    if (ctx->pc == 0x3E7658u) {
        ctx->pc = 0x3E7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7654u;
        // 0x3e7658: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E765Cu;
        goto label_3e765c;
    }
    ctx->pc = 0x3E7654u;
    SET_GPR_U32(ctx, 31, 0x3E765Cu);
    ctx->pc = 0x3E7658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7654u;
    // 0x3e7658: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3E7654u, 0x3E765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E765Cu;
label_3e765c:
    // 0x3e765c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e7660:
    // 0x3e7660: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e7660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e7664:
    // 0x3e7664: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e7664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3e7668:
    // 0x3e7668: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3e7668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3e766c:
    // 0x3e766c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3e766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3e7670:
    // 0x3e7670: 0x40f809  jalr        $v0
label_3e7674:
    if (ctx->pc == 0x3E7674u) {
        ctx->pc = 0x3E7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7670u;
        // 0x3e7674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7678u;
        goto label_3e7678;
    }
    ctx->pc = 0x3E7670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7678u);
        ctx->pc = 0x3E7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7670u;
        // 0x3e7674: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7670u, 0x3E7678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7678u;
label_3e7678:
    // 0x3e7678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e7678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e767c:
    // 0x3e767c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7680:
    // 0x3e7680: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3e7680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_3e7684:
    // 0x3e7684: 0xc0e858c  jal         func_3A1630
label_3e7688:
    if (ctx->pc == 0x3E7688u) {
        ctx->pc = 0x3E7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7684u;
        // 0x3e7688: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E768Cu;
        goto label_3e768c;
    }
    ctx->pc = 0x3E7684u;
    SET_GPR_U32(ctx, 31, 0x3E768Cu);
    ctx->pc = 0x3E7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7684u;
    // 0x3e7688: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E7684u, 0x3E768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E768Cu;
label_3e768c:
    // 0x3e768c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e768cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e7690:
    // 0x3e7690: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e7690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e7694:
    // 0x3e7694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e7694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e7698:
    // 0x3e7698: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e7698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e769c:
    // 0x3e769c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e76a0:
    // 0x3e76a0: 0x3e00008  jr          $ra
label_3e76a4:
    if (ctx->pc == 0x3E76A4u) {
        ctx->pc = 0x3E76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76A0u;
        // 0x3e76a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E76A8u;
        goto label_fallthrough_0x3e76a0;
    }
    ctx->pc = 0x3E76A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76A0u;
        // 0x3e76a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E76A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e76a0:
    ctx->pc = 0x3E76A8u;
}
