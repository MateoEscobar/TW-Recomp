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

// Function: sub_0020B5E8
// Address: 0x20b5e8 - 0x20b698
void sub_0020B5E8_0x20b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B5E8_0x20b5e8");
#endif

    switch (ctx->pc) {
        case 0x20b5e8u: goto label_20b5e8;
        case 0x20b5ecu: goto label_20b5ec;
        case 0x20b5f0u: goto label_20b5f0;
        case 0x20b5f4u: goto label_20b5f4;
        case 0x20b5f8u: goto label_20b5f8;
        case 0x20b5fcu: goto label_20b5fc;
        case 0x20b600u: goto label_20b600;
        case 0x20b604u: goto label_20b604;
        case 0x20b608u: goto label_20b608;
        case 0x20b60cu: goto label_20b60c;
        case 0x20b610u: goto label_20b610;
        case 0x20b614u: goto label_20b614;
        case 0x20b618u: goto label_20b618;
        case 0x20b61cu: goto label_20b61c;
        case 0x20b620u: goto label_20b620;
        case 0x20b624u: goto label_20b624;
        case 0x20b628u: goto label_20b628;
        case 0x20b62cu: goto label_20b62c;
        case 0x20b630u: goto label_20b630;
        case 0x20b634u: goto label_20b634;
        case 0x20b638u: goto label_20b638;
        case 0x20b63cu: goto label_20b63c;
        case 0x20b640u: goto label_20b640;
        case 0x20b644u: goto label_20b644;
        case 0x20b648u: goto label_20b648;
        case 0x20b64cu: goto label_20b64c;
        case 0x20b650u: goto label_20b650;
        case 0x20b654u: goto label_20b654;
        case 0x20b658u: goto label_20b658;
        case 0x20b65cu: goto label_20b65c;
        case 0x20b660u: goto label_20b660;
        case 0x20b664u: goto label_20b664;
        case 0x20b668u: goto label_20b668;
        case 0x20b66cu: goto label_20b66c;
        case 0x20b670u: goto label_20b670;
        case 0x20b674u: goto label_20b674;
        case 0x20b678u: goto label_20b678;
        case 0x20b67cu: goto label_20b67c;
        case 0x20b680u: goto label_20b680;
        case 0x20b684u: goto label_20b684;
        case 0x20b688u: goto label_20b688;
        case 0x20b68cu: goto label_20b68c;
        case 0x20b690u: goto label_20b690;
        case 0x20b694u: goto label_20b694;
        default: break;
    }

    ctx->pc = 0x20b5e8u;

label_20b5e8:
    // 0x20b5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b5ec:
    // 0x20b5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20b5f0:
    // 0x20b5f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20b5f4:
    // 0x20b5f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b5f8:
    // 0x20b5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b5fc:
    // 0x20b5fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20b600:
    // 0x20b600: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_20b604:
    if (ctx->pc == 0x20B604u) {
        ctx->pc = 0x20B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B600u;
        // 0x20b604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B608u;
        goto label_20b608;
    }
    ctx->pc = 0x20B600u;
    {
        const bool branch_taken_0x20b600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B600u;
        // 0x20b604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b600) {
            ctx->pc = 0x20B684u;
            goto label_20b684;
        }
    }
    ctx->pc = 0x20B608u;
label_20b608:
    // 0x20b608: 0xc073462  jal         func_1CD188
label_20b60c:
    if (ctx->pc == 0x20B60Cu) {
        ctx->pc = 0x20B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B608u;
        // 0x20b60c: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B610u;
        goto label_20b610;
    }
    ctx->pc = 0x20B608u;
    SET_GPR_U32(ctx, 31, 0x20B610u);
    ctx->pc = 0x20B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B608u;
    // 0x20b60c: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x20B608u, 0x20B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B610u;
label_20b610:
    // 0x20b610: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_20b614:
    // 0x20b614: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_20b618:
    // 0x20b618: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x20b618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
label_20b61c:
    // 0x20b61c: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_20b620:
    // 0x20b620: 0xc139138  jal         func_4E44E0
label_20b624:
    if (ctx->pc == 0x20B624u) {
        ctx->pc = 0x20B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B620u;
        // 0x20b624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B628u;
        goto label_20b628;
    }
    ctx->pc = 0x20B620u;
    SET_GPR_U32(ctx, 31, 0x20B628u);
    ctx->pc = 0x20B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B620u;
    // 0x20b624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x20B620u, 0x20B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B628u;
label_20b628:
    // 0x20b628: 0x8e2500a8  lw          $a1, 0xA8($s1)
    ctx->pc = 0x20b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_20b62c:
    // 0x20b62c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b630:
    // 0x20b630: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20b630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20b634:
    // 0x20b634: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20b638:
    // 0x20b638: 0x60f809  jalr        $v1
label_20b63c:
    if (ctx->pc == 0x20B63Cu) {
        ctx->pc = 0x20B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B638u;
        // 0x20b63c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B640u;
        goto label_20b640;
    }
    ctx->pc = 0x20B638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B640u);
        ctx->pc = 0x20B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B638u;
        // 0x20b63c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B638u, 0x20B640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B640u;
label_20b640:
    // 0x20b640: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x20b640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_20b644:
    // 0x20b644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b648:
    // 0x20b648: 0xc139fe8  jal         func_4E7FA0
label_20b64c:
    if (ctx->pc == 0x20B64Cu) {
        ctx->pc = 0x20B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B648u;
        // 0x20b64c: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B650u;
        goto label_20b650;
    }
    ctx->pc = 0x20B648u;
    SET_GPR_U32(ctx, 31, 0x20B650u);
    ctx->pc = 0x20B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B648u;
    // 0x20b64c: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x20B648u, 0x20B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B650u;
label_20b650:
    // 0x20b650: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x20b650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b654:
    // 0x20b654: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b658:
    // 0x20b658: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x20b658u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20b65c:
    // 0x20b65c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x20b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20b660:
    // 0x20b660: 0x60f809  jalr        $v1
label_20b664:
    if (ctx->pc == 0x20B664u) {
        ctx->pc = 0x20B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B660u;
        // 0x20b664: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B668u;
        goto label_20b668;
    }
    ctx->pc = 0x20B660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B668u);
        ctx->pc = 0x20B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B660u;
        // 0x20b664: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B660u, 0x20B668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B668u;
label_20b668:
    // 0x20b668: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x20b668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_20b66c:
    // 0x20b66c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b670:
    // 0x20b670: 0xc139fc8  jal         func_4E7F20
label_20b674:
    if (ctx->pc == 0x20B674u) {
        ctx->pc = 0x20B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B670u;
        // 0x20b674: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B678u;
        goto label_20b678;
    }
    ctx->pc = 0x20B670u;
    SET_GPR_U32(ctx, 31, 0x20B678u);
    ctx->pc = 0x20B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B670u;
    // 0x20b674: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x20B670u, 0x20B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B678u;
label_20b678:
    // 0x20b678: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x20b678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20b67c:
    // 0x20b67c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_20b680:
    // 0x20b680: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b684:
    // 0x20b684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b688:
    // 0x20b688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b68c:
    // 0x20b68c: 0x3e00008  jr          $ra
label_20b690:
    if (ctx->pc == 0x20B690u) {
        ctx->pc = 0x20B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B68Cu;
        // 0x20b690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B694u;
        goto label_20b694;
    }
    ctx->pc = 0x20B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B68Cu;
        // 0x20b690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B694u;
label_20b694:
    // 0x20b694: 0x0  nop
    ctx->pc = 0x20b694u;
    // NOP
    ctx->pc = 0x20b698u;
}
