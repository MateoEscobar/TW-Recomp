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

// Function: sub_0015C5F8
// Address: 0x15c5f8 - 0x15c680
void sub_0015C5F8_0x15c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C5F8_0x15c5f8");
#endif

    switch (ctx->pc) {
        case 0x15c5f8u: goto label_15c5f8;
        case 0x15c5fcu: goto label_15c5fc;
        case 0x15c600u: goto label_15c600;
        case 0x15c604u: goto label_15c604;
        case 0x15c608u: goto label_15c608;
        case 0x15c60cu: goto label_15c60c;
        case 0x15c610u: goto label_15c610;
        case 0x15c614u: goto label_15c614;
        case 0x15c618u: goto label_15c618;
        case 0x15c61cu: goto label_15c61c;
        case 0x15c620u: goto label_15c620;
        case 0x15c624u: goto label_15c624;
        case 0x15c628u: goto label_15c628;
        case 0x15c62cu: goto label_15c62c;
        case 0x15c630u: goto label_15c630;
        case 0x15c634u: goto label_15c634;
        case 0x15c638u: goto label_15c638;
        case 0x15c63cu: goto label_15c63c;
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        default: break;
    }

    ctx->pc = 0x15c5f8u;

label_15c5f8:
    // 0x15c5f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15c5fc:
    // 0x15c5fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c600:
    // 0x15c600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c604:
    // 0x15c604: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15c604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15c608:
    // 0x15c608: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c60c:
    // 0x15c60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15c610:
    // 0x15c610: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x15c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15c614:
    // 0x15c614: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_15c618:
    if (ctx->pc == 0x15C618u) {
        ctx->pc = 0x15C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C614u;
        // 0x15c618: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C61Cu;
        goto label_15c61c;
    }
    ctx->pc = 0x15C614u;
    {
        const bool branch_taken_0x15c614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C614u;
        // 0x15c618: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c614) {
            ctx->pc = 0x15C670u;
            goto label_15c670;
        }
    }
    ctx->pc = 0x15C61Cu;
label_15c61c:
    // 0x15c61c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15c620:
    // 0x15c620: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15c620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15c624:
    // 0x15c624: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15c624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15c628:
    // 0x15c628: 0x24a5f2e0  addiu       $a1, $a1, -0xD20
    ctx->pc = 0x15c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
label_15c62c:
    // 0x15c62c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15c62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15c630:
    // 0x15c630: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15c630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15c634:
    // 0x15c634: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15c634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15c638:
    // 0x15c638: 0x40f809  jalr        $v0
label_15c63c:
    if (ctx->pc == 0x15C63Cu) {
        ctx->pc = 0x15C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C638u;
        // 0x15c63c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C640u;
        goto label_15c640;
    }
    ctx->pc = 0x15C638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C640u);
        ctx->pc = 0x15C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C638u;
        // 0x15c63c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C638u, 0x15C640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C640u;
label_15c640:
    // 0x15c640: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x15c640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15c644:
    // 0x15c644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c648:
    // 0x15c648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c64c:
    // 0x15c64c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15c650:
    // 0x15c650: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15c650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15c654:
    // 0x15c654: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15c654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15c658:
    // 0x15c658: 0x60f809  jalr        $v1
label_15c65c:
    if (ctx->pc == 0x15C65Cu) {
        ctx->pc = 0x15C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C658u;
        // 0x15c65c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C660u;
        goto label_15c660;
    }
    ctx->pc = 0x15C658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C660u);
        ctx->pc = 0x15C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C658u;
        // 0x15c65c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C658u, 0x15C660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C660u;
label_15c660:
    // 0x15c660: 0xc0581ee  jal         func_1607B8
label_15c664:
    if (ctx->pc == 0x15C664u) {
        ctx->pc = 0x15C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C660u;
        // 0x15c664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C668u;
        goto label_15c668;
    }
    ctx->pc = 0x15C660u;
    SET_GPR_U32(ctx, 31, 0x15C668u);
    ctx->pc = 0x15C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C660u;
    // 0x15c664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1607B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1607B8u, 0x15C660u, 0x15C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C668u;
label_15c668:
    // 0x15c668: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x15c668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_15c66c:
    // 0x15c66c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15c66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c670:
    // 0x15c670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c674:
    // 0x15c674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15c678:
    // 0x15c678: 0x3e00008  jr          $ra
label_15c67c:
    if (ctx->pc == 0x15C67Cu) {
        ctx->pc = 0x15C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C678u;
        // 0x15c67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C680u;
        goto label_fallthrough_0x15c678;
    }
    ctx->pc = 0x15C678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C678u;
        // 0x15c67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15c678:
    ctx->pc = 0x15C680u;
}
