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

// Function: sub_003295E0
// Address: 0x3295e0 - 0x3296e8
void sub_003295E0_0x3295e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003295E0_0x3295e0");
#endif

    switch (ctx->pc) {
        case 0x329630u: goto label_329630;
        case 0x329670u: goto label_329670;
        case 0x329684u: goto label_329684;
        case 0x3296a8u: goto label_3296a8;
        default: break;
    }

    ctx->pc = 0x3295e0u;

label_3295e0:
    // 0x3295e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3295e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3295e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3295e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3295e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3295e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3295ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3295ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3295f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3295f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3295f4: 0x86220026  lh          $v0, 0x26($s1)
    ctx->pc = 0x3295f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x3295f8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3295F8u;
    {
        const bool branch_taken_0x3295f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3295FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295F8u;
        // 0x3295fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295f8) {
            ctx->pc = 0x3296D8u;
            goto label_3296d8;
        }
    }
    ctx->pc = 0x329600u;
    // 0x329600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x329600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329604: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x329604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x329608: 0xa6240026  sh          $a0, 0x26($s1)
    ctx->pc = 0x329608u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 4));
    // 0x32960c: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x32960cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x329610: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329610u;
    {
        const bool branch_taken_0x329610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329610) {
            ctx->pc = 0x329614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329610u;
            // 0x329614: 0xa464000a  sh          $a0, 0xA($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329618u;
            goto label_329618;
        }
    }
    ctx->pc = 0x329618u;
label_329618:
    // 0x329618: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x329618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32961c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32961Cu;
    {
        const bool branch_taken_0x32961c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x329620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32961Cu;
        // 0x329620: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32961c) {
            ctx->pc = 0x32965Cu;
            goto label_32965c;
        }
    }
    ctx->pc = 0x329624u;
    // 0x329624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x329624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329628: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x329628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32962c: 0x0  nop
    ctx->pc = 0x32962cu;
    // NOP
label_329630:
    // 0x329630: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x329630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x329634: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x329634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329638: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x329638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32963c: 0x8462000a  lh          $v0, 0xA($v1)
    ctx->pc = 0x32963cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x329640: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x329640u;
    {
        const bool branch_taken_0x329640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329640) {
            ctx->pc = 0x329644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329640u;
            // 0x329644: 0xa464000a  sh          $a0, 0xA($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329648u;
            goto label_329648;
        }
    }
    ctx->pc = 0x329648u;
label_329648:
    // 0x329648: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x329648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32964c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32964cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329650: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x329650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x329654: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x329654u;
    {
        const bool branch_taken_0x329654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329654) {
            ctx->pc = 0x329658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329654u;
            // 0x329658: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329630;
        }
    }
    ctx->pc = 0x32965Cu;
label_32965c:
    // 0x32965c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x32965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x329660: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x329660u;
    {
        const bool branch_taken_0x329660 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x329664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329660u;
        // 0x329664: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329660) {
            ctx->pc = 0x329694u;
            goto label_329694;
        }
    }
    ctx->pc = 0x329668u;
    // 0x329668: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x329668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32966c: 0x0  nop
    ctx->pc = 0x32966cu;
    // NOP
label_329670:
    // 0x329670: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x329670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x329674: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x329674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x329678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32967c: 0xc0ca578  jal         func_3295E0
    ctx->pc = 0x32967Cu;
    SET_GPR_U32(ctx, 31, 0x329684u);
    ctx->pc = 0x329680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32967Cu;
    // 0x329680: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3295E0u;
    goto label_3295e0;
    ctx->pc = 0x329684u;
label_329684:
    // 0x329684: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x329684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x329688: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x329688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32968c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32968Cu;
    {
        const bool branch_taken_0x32968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32968c) {
            ctx->pc = 0x329690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32968Cu;
            // 0x329690: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329670;
        }
    }
    ctx->pc = 0x329694u;
label_329694:
    // 0x329694: 0x86220032  lh          $v0, 0x32($s1)
    ctx->pc = 0x329694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x329698: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x329698u;
    {
        const bool branch_taken_0x329698 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x32969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329698u;
        // 0x32969c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329698) {
            ctx->pc = 0x3296D4u;
            goto label_3296d4;
        }
    }
    ctx->pc = 0x3296A0u;
    // 0x3296a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3296a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3296a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3296a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3296a8:
    // 0x3296a8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3296a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3296ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3296acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3296b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3296b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3296b4: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x3296b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x3296b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3296B8u;
    {
        const bool branch_taken_0x3296b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3296b8) {
            ctx->pc = 0x3296BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3296B8u;
            // 0x3296bc: 0xa445000a  sh          $a1, 0xA($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3296C0u;
            goto label_3296c0;
        }
    }
    ctx->pc = 0x3296C0u;
label_3296c0:
    // 0x3296c0: 0x86220032  lh          $v0, 0x32($s1)
    ctx->pc = 0x3296c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x3296c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3296c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3296c8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3296c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3296cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3296CCu;
    {
        const bool branch_taken_0x3296cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3296D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296CCu;
        // 0x3296d0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296cc) {
            ctx->pc = 0x3296A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3296a8;
        }
    }
    ctx->pc = 0x3296D4u;
label_3296d4:
    // 0x3296d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3296d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3296d8:
    // 0x3296d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3296d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3296dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3296dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3296e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3296E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3296E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296E0u;
        // 0x3296e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3296E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3296E8u;
}
