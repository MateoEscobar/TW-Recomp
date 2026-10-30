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

// Function: sub_003AC600
// Address: 0x3ac600 - 0x3ac708
void sub_003AC600_0x3ac600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC600_0x3ac600");
#endif

    switch (ctx->pc) {
        case 0x3ac600u: goto label_3ac600;
        case 0x3ac604u: goto label_3ac604;
        case 0x3ac608u: goto label_3ac608;
        case 0x3ac60cu: goto label_3ac60c;
        case 0x3ac610u: goto label_3ac610;
        case 0x3ac614u: goto label_3ac614;
        case 0x3ac618u: goto label_3ac618;
        case 0x3ac61cu: goto label_3ac61c;
        case 0x3ac620u: goto label_3ac620;
        case 0x3ac624u: goto label_3ac624;
        case 0x3ac628u: goto label_3ac628;
        case 0x3ac62cu: goto label_3ac62c;
        case 0x3ac630u: goto label_3ac630;
        case 0x3ac634u: goto label_3ac634;
        case 0x3ac638u: goto label_3ac638;
        case 0x3ac63cu: goto label_3ac63c;
        case 0x3ac640u: goto label_3ac640;
        case 0x3ac644u: goto label_3ac644;
        case 0x3ac648u: goto label_3ac648;
        case 0x3ac64cu: goto label_3ac64c;
        case 0x3ac650u: goto label_3ac650;
        case 0x3ac654u: goto label_3ac654;
        case 0x3ac658u: goto label_3ac658;
        case 0x3ac65cu: goto label_3ac65c;
        case 0x3ac660u: goto label_3ac660;
        case 0x3ac664u: goto label_3ac664;
        case 0x3ac668u: goto label_3ac668;
        case 0x3ac66cu: goto label_3ac66c;
        case 0x3ac670u: goto label_3ac670;
        case 0x3ac674u: goto label_3ac674;
        case 0x3ac678u: goto label_3ac678;
        case 0x3ac67cu: goto label_3ac67c;
        case 0x3ac680u: goto label_3ac680;
        case 0x3ac684u: goto label_3ac684;
        case 0x3ac688u: goto label_3ac688;
        case 0x3ac68cu: goto label_3ac68c;
        case 0x3ac690u: goto label_3ac690;
        case 0x3ac694u: goto label_3ac694;
        case 0x3ac698u: goto label_3ac698;
        case 0x3ac69cu: goto label_3ac69c;
        case 0x3ac6a0u: goto label_3ac6a0;
        case 0x3ac6a4u: goto label_3ac6a4;
        case 0x3ac6a8u: goto label_3ac6a8;
        case 0x3ac6acu: goto label_3ac6ac;
        case 0x3ac6b0u: goto label_3ac6b0;
        case 0x3ac6b4u: goto label_3ac6b4;
        case 0x3ac6b8u: goto label_3ac6b8;
        case 0x3ac6bcu: goto label_3ac6bc;
        case 0x3ac6c0u: goto label_3ac6c0;
        case 0x3ac6c4u: goto label_3ac6c4;
        case 0x3ac6c8u: goto label_3ac6c8;
        case 0x3ac6ccu: goto label_3ac6cc;
        case 0x3ac6d0u: goto label_3ac6d0;
        case 0x3ac6d4u: goto label_3ac6d4;
        case 0x3ac6d8u: goto label_3ac6d8;
        case 0x3ac6dcu: goto label_3ac6dc;
        case 0x3ac6e0u: goto label_3ac6e0;
        case 0x3ac6e4u: goto label_3ac6e4;
        case 0x3ac6e8u: goto label_3ac6e8;
        case 0x3ac6ecu: goto label_3ac6ec;
        case 0x3ac6f0u: goto label_3ac6f0;
        case 0x3ac6f4u: goto label_3ac6f4;
        case 0x3ac6f8u: goto label_3ac6f8;
        case 0x3ac6fcu: goto label_3ac6fc;
        case 0x3ac700u: goto label_3ac700;
        case 0x3ac704u: goto label_3ac704;
        default: break;
    }

    ctx->pc = 0x3ac600u;

label_3ac600:
    // 0x3ac600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ac600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ac604:
    // 0x3ac604: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ac604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ac608:
    // 0x3ac608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ac60c:
    // 0x3ac60c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ac60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac610:
    // 0x3ac610: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ac610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac614:
    // 0x3ac614: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3ac614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ac618:
    // 0x3ac618: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ac618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ac61c:
    // 0x3ac61c: 0x40f809  jalr        $v0
label_3ac620:
    if (ctx->pc == 0x3AC620u) {
        ctx->pc = 0x3AC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC61Cu;
        // 0x3ac620: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC624u;
        goto label_3ac624;
    }
    ctx->pc = 0x3AC61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC624u);
        ctx->pc = 0x3AC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC61Cu;
        // 0x3ac620: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC61Cu, 0x3AC624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC624u;
label_3ac624:
    // 0x3ac624: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3ac624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac628:
    // 0x3ac628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac62c:
    // 0x3ac62c: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_3ac630:
    if (ctx->pc == 0x3AC630u) {
        ctx->pc = 0x3AC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC62Cu;
        // 0x3ac630: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC634u;
        goto label_3ac634;
    }
    ctx->pc = 0x3AC62Cu;
    {
        const bool branch_taken_0x3ac62c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC62Cu;
        // 0x3ac630: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac62c) {
            ctx->pc = 0x3AC668u;
            goto label_3ac668;
        }
    }
    ctx->pc = 0x3AC634u;
label_3ac634:
    // 0x3ac634: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3ac634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ac638:
    // 0x3ac638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ac63c:
    if (ctx->pc == 0x3AC63Cu) {
        ctx->pc = 0x3AC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC638u;
        // 0x3ac63c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC640u;
        goto label_3ac640;
    }
    ctx->pc = 0x3AC638u;
    {
        const bool branch_taken_0x3ac638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC638u;
        // 0x3ac63c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac638) {
            ctx->pc = 0x3AC650u;
            goto label_3ac650;
        }
    }
    ctx->pc = 0x3AC640u;
label_3ac640:
    // 0x3ac640: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_3ac644:
    if (ctx->pc == 0x3AC644u) {
        ctx->pc = 0x3AC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC640u;
        // 0x3ac644: 0x2a02000a  slti        $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC648u;
        goto label_3ac648;
    }
    ctx->pc = 0x3AC640u;
    {
        const bool branch_taken_0x3ac640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC640u;
        // 0x3ac644: 0x2a02000a  slti        $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac640) {
            ctx->pc = 0x3AC698u;
            goto label_3ac698;
        }
    }
    ctx->pc = 0x3AC648u;
label_3ac648:
    // 0x3ac648: 0x10000017  b           . + 4 + (0x17 << 2)
label_3ac64c:
    if (ctx->pc == 0x3AC64Cu) {
        ctx->pc = 0x3AC650u;
        goto label_3ac650;
    }
    ctx->pc = 0x3AC648u;
    {
        const bool branch_taken_0x3ac648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac648) {
            ctx->pc = 0x3AC6A8u;
            goto label_3ac6a8;
        }
    }
    ctx->pc = 0x3AC650u;
label_3ac650:
    // 0x3ac650: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_3ac654:
    if (ctx->pc == 0x3AC654u) {
        ctx->pc = 0x3AC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC650u;
        // 0x3ac654: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC658u;
        goto label_3ac658;
    }
    ctx->pc = 0x3AC650u;
    {
        const bool branch_taken_0x3ac650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC650u;
        // 0x3ac654: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac650) {
            ctx->pc = 0x3AC698u;
            goto label_3ac698;
        }
    }
    ctx->pc = 0x3AC658u;
label_3ac658:
    // 0x3ac658: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_3ac65c:
    if (ctx->pc == 0x3AC65Cu) {
        ctx->pc = 0x3AC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC658u;
        // 0x3ac65c: 0x2a02000a  slti        $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC660u;
        goto label_3ac660;
    }
    ctx->pc = 0x3AC658u;
    {
        const bool branch_taken_0x3ac658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC658u;
        // 0x3ac65c: 0x2a02000a  slti        $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac658) {
            ctx->pc = 0x3AC6A0u;
            goto label_3ac6a0;
        }
    }
    ctx->pc = 0x3AC660u;
label_3ac660:
    // 0x3ac660: 0x10000011  b           . + 4 + (0x11 << 2)
label_3ac664:
    if (ctx->pc == 0x3AC664u) {
        ctx->pc = 0x3AC668u;
        goto label_3ac668;
    }
    ctx->pc = 0x3AC660u;
    {
        const bool branch_taken_0x3ac660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac660) {
            ctx->pc = 0x3AC6A8u;
            goto label_3ac6a8;
        }
    }
    ctx->pc = 0x3AC668u;
label_3ac668:
    // 0x3ac668: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x3ac668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_3ac66c:
    // 0x3ac66c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3ac66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ac670:
    // 0x3ac670: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3ac670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3ac674:
    // 0x3ac674: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_3ac678:
    if (ctx->pc == 0x3AC678u) {
        ctx->pc = 0x3AC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC674u;
        // 0x3ac678: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC67Cu;
        goto label_3ac67c;
    }
    ctx->pc = 0x3AC674u;
    {
        const bool branch_taken_0x3ac674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac674) {
            ctx->pc = 0x3AC678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC674u;
            // 0x3ac678: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC6D8u;
            goto label_3ac6d8;
        }
    }
    ctx->pc = 0x3AC67Cu;
label_3ac67c:
    // 0x3ac67c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3ac67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3ac680:
    // 0x3ac680: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3ac684:
    if (ctx->pc == 0x3AC684u) {
        ctx->pc = 0x3AC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC680u;
        // 0x3ac684: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC688u;
        goto label_3ac688;
    }
    ctx->pc = 0x3AC680u;
    {
        const bool branch_taken_0x3ac680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC680u;
        // 0x3ac684: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac680) {
            ctx->pc = 0x3AC690u;
            goto label_3ac690;
        }
    }
    ctx->pc = 0x3AC688u;
label_3ac688:
    // 0x3ac688: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_3ac68c:
    if (ctx->pc == 0x3AC68Cu) {
        ctx->pc = 0x3AC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC688u;
        // 0x3ac68c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC690u;
        goto label_3ac690;
    }
    ctx->pc = 0x3AC688u;
    {
        const bool branch_taken_0x3ac688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC688u;
        // 0x3ac68c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac688) {
            ctx->pc = 0x3AC6DCu;
            goto label_3ac6dc;
        }
    }
    ctx->pc = 0x3AC690u;
label_3ac690:
    // 0x3ac690: 0x10000011  b           . + 4 + (0x11 << 2)
label_3ac694:
    if (ctx->pc == 0x3AC694u) {
        ctx->pc = 0x3AC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC690u;
        // 0x3ac694: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC698u;
        goto label_3ac698;
    }
    ctx->pc = 0x3AC690u;
    {
        const bool branch_taken_0x3ac690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC690u;
        // 0x3ac694: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac690) {
            ctx->pc = 0x3AC6D8u;
            goto label_3ac6d8;
        }
    }
    ctx->pc = 0x3AC698u;
label_3ac698:
    // 0x3ac698: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ac69c:
    if (ctx->pc == 0x3AC69Cu) {
        ctx->pc = 0x3AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC698u;
        // 0x3ac69c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6A0u;
        goto label_3ac6a0;
    }
    ctx->pc = 0x3AC698u;
    {
        const bool branch_taken_0x3ac698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC698u;
        // 0x3ac69c: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac698) {
            ctx->pc = 0x3AC6D8u;
            goto label_3ac6d8;
        }
    }
    ctx->pc = 0x3AC6A0u;
label_3ac6a0:
    // 0x3ac6a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ac6a4:
    if (ctx->pc == 0x3AC6A4u) {
        ctx->pc = 0x3AC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6A0u;
        // 0x3ac6a4: 0x2408000b  addiu       $t0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6A8u;
        goto label_3ac6a8;
    }
    ctx->pc = 0x3AC6A0u;
    {
        const bool branch_taken_0x3ac6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6A0u;
        // 0x3ac6a4: 0x2408000b  addiu       $t0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac6a0) {
            ctx->pc = 0x3AC6D8u;
            goto label_3ac6d8;
        }
    }
    ctx->pc = 0x3AC6A8u;
label_3ac6a8:
    // 0x3ac6a8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3ac6ac:
    if (ctx->pc == 0x3AC6ACu) {
        ctx->pc = 0x3AC6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6A8u;
        // 0x3ac6ac: 0x8ce20028  lw          $v0, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6B0u;
        goto label_3ac6b0;
    }
    ctx->pc = 0x3AC6A8u;
    {
        const bool branch_taken_0x3ac6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac6a8) {
            ctx->pc = 0x3AC6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC6A8u;
            // 0x3ac6ac: 0x8ce20028  lw          $v0, 0x28($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC6BCu;
            goto label_3ac6bc;
        }
    }
    ctx->pc = 0x3AC6B0u;
label_3ac6b0:
    // 0x3ac6b0: 0x2602fff6  addiu       $v0, $s0, -0xA
    ctx->pc = 0x3ac6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
label_3ac6b4:
    // 0x3ac6b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ac6b8:
    if (ctx->pc == 0x3AC6B8u) {
        ctx->pc = 0x3AC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6B4u;
        // 0x3ac6b8: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6BCu;
        goto label_3ac6bc;
    }
    ctx->pc = 0x3AC6B4u;
    {
        const bool branch_taken_0x3ac6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6B4u;
        // 0x3ac6b8: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac6b4) {
            ctx->pc = 0x3AC6C4u;
            goto label_3ac6c4;
        }
    }
    ctx->pc = 0x3AC6BCu;
label_3ac6bc:
    // 0x3ac6bc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3ac6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ac6c0:
    // 0x3ac6c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ac6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ac6c4:
    // 0x3ac6c4: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x3ac6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
label_3ac6c8:
    // 0x3ac6c8: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x3ac6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_3ac6cc:
    // 0x3ac6cc: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x3ac6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_3ac6d0:
    // 0x3ac6d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3ac6d4:
    if (ctx->pc == 0x3AC6D4u) {
        ctx->pc = 0x3AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6D0u;
        // 0x3ac6d4: 0xace00028  sw          $zero, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6D8u;
        goto label_3ac6d8;
    }
    ctx->pc = 0x3AC6D0u;
    {
        const bool branch_taken_0x3ac6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac6d0) {
            ctx->pc = 0x3AC6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC6D0u;
            // 0x3ac6d4: 0xace00028  sw          $zero, 0x28($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC6D8u;
            goto label_3ac6d8;
        }
    }
    ctx->pc = 0x3AC6D8u;
label_3ac6d8:
    // 0x3ac6d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ac6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ac6dc:
    // 0x3ac6dc: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
label_3ac6e0:
    if (ctx->pc == 0x3AC6E0u) {
        ctx->pc = 0x3AC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6DCu;
        // 0x3ac6e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6E4u;
        goto label_3ac6e4;
    }
    ctx->pc = 0x3AC6DCu;
    {
        const bool branch_taken_0x3ac6dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6DCu;
        // 0x3ac6e0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac6dc) {
            ctx->pc = 0x3AC6F8u;
            goto label_3ac6f8;
        }
    }
    ctx->pc = 0x3AC6E4u;
label_3ac6e4:
    // 0x3ac6e4: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x3ac6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_3ac6e8:
    // 0x3ac6e8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ac6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ac6ec:
    // 0x3ac6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac6f0:
    // 0x3ac6f0: 0xc0440c6  jal         func_110318
label_3ac6f4:
    if (ctx->pc == 0x3AC6F4u) {
        ctx->pc = 0x3AC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6F0u;
        // 0x3ac6f4: 0xace80030  sw          $t0, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6F8u;
        goto label_3ac6f8;
    }
    ctx->pc = 0x3AC6F0u;
    SET_GPR_U32(ctx, 31, 0x3AC6F8u);
    ctx->pc = 0x3AC6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC6F0u;
    // 0x3ac6f4: 0xace80030  sw          $t0, 0x30($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3AC6F0u, 0x3AC6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC6F8u;
label_3ac6f8:
    // 0x3ac6f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ac6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac6fc:
    // 0x3ac6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac700:
    // 0x3ac700: 0x3e00008  jr          $ra
label_3ac704:
    if (ctx->pc == 0x3AC704u) {
        ctx->pc = 0x3AC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC700u;
        // 0x3ac704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC708u;
        goto label_fallthrough_0x3ac700;
    }
    ctx->pc = 0x3AC700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC700u;
        // 0x3ac704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ac700:
    ctx->pc = 0x3AC708u;
}
