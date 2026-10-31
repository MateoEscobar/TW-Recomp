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

// Function: sub_0038F600
// Address: 0x38f600 - 0x38f728
void sub_0038F600_0x38f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F600_0x38f600");
#endif

    switch (ctx->pc) {
        case 0x38f600u: goto label_38f600;
        case 0x38f604u: goto label_38f604;
        case 0x38f608u: goto label_38f608;
        case 0x38f60cu: goto label_38f60c;
        case 0x38f610u: goto label_38f610;
        case 0x38f614u: goto label_38f614;
        case 0x38f618u: goto label_38f618;
        case 0x38f61cu: goto label_38f61c;
        case 0x38f620u: goto label_38f620;
        case 0x38f624u: goto label_38f624;
        case 0x38f628u: goto label_38f628;
        case 0x38f62cu: goto label_38f62c;
        case 0x38f630u: goto label_38f630;
        case 0x38f634u: goto label_38f634;
        case 0x38f638u: goto label_38f638;
        case 0x38f63cu: goto label_38f63c;
        case 0x38f640u: goto label_38f640;
        case 0x38f644u: goto label_38f644;
        case 0x38f648u: goto label_38f648;
        case 0x38f64cu: goto label_38f64c;
        case 0x38f650u: goto label_38f650;
        case 0x38f654u: goto label_38f654;
        case 0x38f658u: goto label_38f658;
        case 0x38f65cu: goto label_38f65c;
        case 0x38f660u: goto label_38f660;
        case 0x38f664u: goto label_38f664;
        case 0x38f668u: goto label_38f668;
        case 0x38f66cu: goto label_38f66c;
        case 0x38f670u: goto label_38f670;
        case 0x38f674u: goto label_38f674;
        case 0x38f678u: goto label_38f678;
        case 0x38f67cu: goto label_38f67c;
        case 0x38f680u: goto label_38f680;
        case 0x38f684u: goto label_38f684;
        case 0x38f688u: goto label_38f688;
        case 0x38f68cu: goto label_38f68c;
        case 0x38f690u: goto label_38f690;
        case 0x38f694u: goto label_38f694;
        case 0x38f698u: goto label_38f698;
        case 0x38f69cu: goto label_38f69c;
        case 0x38f6a0u: goto label_38f6a0;
        case 0x38f6a4u: goto label_38f6a4;
        case 0x38f6a8u: goto label_38f6a8;
        case 0x38f6acu: goto label_38f6ac;
        case 0x38f6b0u: goto label_38f6b0;
        case 0x38f6b4u: goto label_38f6b4;
        case 0x38f6b8u: goto label_38f6b8;
        case 0x38f6bcu: goto label_38f6bc;
        case 0x38f6c0u: goto label_38f6c0;
        case 0x38f6c4u: goto label_38f6c4;
        case 0x38f6c8u: goto label_38f6c8;
        case 0x38f6ccu: goto label_38f6cc;
        case 0x38f6d0u: goto label_38f6d0;
        case 0x38f6d4u: goto label_38f6d4;
        case 0x38f6d8u: goto label_38f6d8;
        case 0x38f6dcu: goto label_38f6dc;
        case 0x38f6e0u: goto label_38f6e0;
        case 0x38f6e4u: goto label_38f6e4;
        case 0x38f6e8u: goto label_38f6e8;
        case 0x38f6ecu: goto label_38f6ec;
        case 0x38f6f0u: goto label_38f6f0;
        case 0x38f6f4u: goto label_38f6f4;
        case 0x38f6f8u: goto label_38f6f8;
        case 0x38f6fcu: goto label_38f6fc;
        case 0x38f700u: goto label_38f700;
        case 0x38f704u: goto label_38f704;
        case 0x38f708u: goto label_38f708;
        case 0x38f70cu: goto label_38f70c;
        case 0x38f710u: goto label_38f710;
        case 0x38f714u: goto label_38f714;
        case 0x38f718u: goto label_38f718;
        case 0x38f71cu: goto label_38f71c;
        case 0x38f720u: goto label_38f720;
        case 0x38f724u: goto label_38f724;
        default: break;
    }

    ctx->pc = 0x38f600u;

label_38f600:
    // 0x38f600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38f604:
    // 0x38f604: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x38f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_38f608:
    // 0x38f608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38f60c:
    // 0x38f60c: 0x244250d8  addiu       $v0, $v0, 0x50D8
    ctx->pc = 0x38f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20696));
label_38f610:
    // 0x38f610: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38f610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_38f614:
    // 0x38f614: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x38f614u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_38f618:
    // 0x38f618: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38f618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_38f61c:
    // 0x38f61c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38f61cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f620:
    // 0x38f620: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_38f624:
    // 0x38f624: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x38f624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_38f628:
    // 0x38f628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38f62c:
    // 0x38f62c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x38f62cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_38f630:
    // 0x38f630: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x38f630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_38f634:
    // 0x38f634: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x38f634u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_38f638:
    // 0x38f638: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x38f638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_38f63c:
    // 0x38f63c: 0x26100b70  addiu       $s0, $s0, 0xB70
    ctx->pc = 0x38f63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2928));
label_38f640:
    // 0x38f640: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x38f640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_38f644:
    // 0x38f644: 0x26310b78  addiu       $s1, $s1, 0xB78
    ctx->pc = 0x38f644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2936));
label_38f648:
    // 0x38f648: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x38f648u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_38f64c:
    // 0x38f64c: 0x24066400  addiu       $a2, $zero, 0x6400
    ctx->pc = 0x38f64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
label_38f650:
    // 0x38f650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f654:
    // 0x38f654: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x38f654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_38f658:
    // 0x38f658: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x38f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_38f65c:
    // 0x38f65c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x38f65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f660:
    // 0x38f660: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x38f660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_38f664:
    // 0x38f664: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38f664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f668:
    // 0x38f668: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x38f668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38f66c:
    // 0x38f66c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38f670:
    // 0x38f670: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x38f670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_38f674:
    // 0x38f674: 0x40f809  jalr        $v0
label_38f678:
    if (ctx->pc == 0x38F678u) {
        ctx->pc = 0x38F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F674u;
        // 0x38f678: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F67Cu;
        goto label_38f67c;
    }
    ctx->pc = 0x38F674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F67Cu);
        ctx->pc = 0x38F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F674u;
        // 0x38f678: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F674u, 0x38F67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F67Cu;
label_38f67c:
    // 0x38f67c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x38f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_38f680:
    // 0x38f680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f684:
    // 0x38f684: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x38f684u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_38f688:
    // 0x38f688: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x38f688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38f68c:
    // 0x38f68c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x38f68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38f690:
    // 0x38f690: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x38f690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38f694:
    // 0x38f694: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x38f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_38f698:
    // 0x38f698: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x38f698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_38f69c:
    // 0x38f69c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x38f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38f6a0:
    // 0x38f6a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38f6a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f6a4:
    // 0x38f6a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x38f6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38f6a8:
    // 0x38f6a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38f6a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f6ac:
    // 0x38f6ac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38f6b0:
    // 0x38f6b0: 0x40f809  jalr        $v0
label_38f6b4:
    if (ctx->pc == 0x38F6B4u) {
        ctx->pc = 0x38F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6B0u;
        // 0x38f6b4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6B8u;
        goto label_38f6b8;
    }
    ctx->pc = 0x38F6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F6B8u);
        ctx->pc = 0x38F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6B0u;
        // 0x38f6b4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F6B0u, 0x38F6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F6B8u;
label_38f6b8:
    // 0x38f6b8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x38f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38f6bc:
    // 0x38f6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38f6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f6c0:
    // 0x38f6c0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_38f6c4:
    if (ctx->pc == 0x38F6C4u) {
        ctx->pc = 0x38F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6C0u;
        // 0x38f6c4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6C8u;
        goto label_38f6c8;
    }
    ctx->pc = 0x38F6C0u;
    {
        const bool branch_taken_0x38f6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6C0u;
        // 0x38f6c4: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6c0) {
            ctx->pc = 0x38F6FCu;
            goto label_38f6fc;
        }
    }
    ctx->pc = 0x38F6C8u;
label_38f6c8:
    // 0x38f6c8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x38f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_38f6cc:
    // 0x38f6cc: 0x0  nop
    ctx->pc = 0x38f6ccu;
    // NOP
label_38f6d0:
    // 0x38f6d0: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x38f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_38f6d4:
    // 0x38f6d4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x38f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38f6d8:
    // 0x38f6d8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x38f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38f6dc:
    // 0x38f6dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x38f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_38f6e0:
    // 0x38f6e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x38f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_38f6e4:
    // 0x38f6e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38f6e8:
    // 0x38f6e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x38f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_38f6ec:
    // 0x38f6ec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x38f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_38f6f0:
    // 0x38f6f0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x38f6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38f6f4:
    // 0x38f6f4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_38f6f8:
    if (ctx->pc == 0x38F6F8u) {
        ctx->pc = 0x38F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6F4u;
        // 0x38f6f8: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F6FCu;
        goto label_38f6fc;
    }
    ctx->pc = 0x38F6F4u;
    {
        const bool branch_taken_0x38f6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f6f4) {
            ctx->pc = 0x38F6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F6F4u;
            // 0x38f6f8: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f6d0;
        }
    }
    ctx->pc = 0x38F6FCu;
label_38f6fc:
    // 0x38f6fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x38f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_38f700:
    // 0x38f700: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38f700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38f704:
    // 0x38f704: 0x24635078  addiu       $v1, $v1, 0x5078
    ctx->pc = 0x38f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20600));
label_38f708:
    // 0x38f708: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38f708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38f70c:
    // 0x38f70c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x38f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_38f710:
    // 0x38f710: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38f710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f714:
    // 0x38f714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38f714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38f718:
    // 0x38f718: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38f718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f71c:
    // 0x38f71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38f720:
    // 0x38f720: 0x3e00008  jr          $ra
label_38f724:
    if (ctx->pc == 0x38F724u) {
        ctx->pc = 0x38F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F720u;
        // 0x38f724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F728u;
        goto label_fallthrough_0x38f720;
    }
    ctx->pc = 0x38F720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F720u;
        // 0x38f724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38f720:
    ctx->pc = 0x38F728u;
}
