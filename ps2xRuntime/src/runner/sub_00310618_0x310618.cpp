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

// Function: sub_00310618
// Address: 0x310618 - 0x3106a0
void sub_00310618_0x310618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310618_0x310618");
#endif

    switch (ctx->pc) {
        case 0x310630u: goto label_310630;
        case 0x310638u: goto label_310638;
        case 0x310640u: goto label_310640;
        case 0x310684u: goto label_310684;
        default: break;
    }

    ctx->pc = 0x310618u;

    // 0x310618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31061c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310620: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x310620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x310624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310628: 0xc0c40a2  jal         func_310288
    ctx->pc = 0x310628u;
    SET_GPR_U32(ctx, 31, 0x310630u);
    ctx->pc = 0x31062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310628u;
    // 0x31062c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310288u, 0x310628u, 0x310630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310630u;
label_310630:
    // 0x310630: 0xc05a51a  jal         func_169468
    ctx->pc = 0x310630u;
    SET_GPR_U32(ctx, 31, 0x310638u);
    ctx->pc = 0x310634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310630u;
    // 0x310634: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169468u, 0x310630u, 0x310638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310638u;
label_310638:
    // 0x310638: 0xc05959e  jal         func_165678
    ctx->pc = 0x310638u;
    SET_GPR_U32(ctx, 31, 0x310640u);
    ctx->pc = 0x31063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310638u;
    // 0x31063c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x310638u, 0x310640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310640u;
label_310640:
    // 0x310640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x310640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310644: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x310644u;
    {
        const bool branch_taken_0x310644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x310644) {
            ctx->pc = 0x310648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310644u;
            // 0x310648: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310694u;
            goto label_310694;
        }
    }
    ctx->pc = 0x31064Cu;
    // 0x31064c: 0x808501b0  lb          $a1, 0x1B0($a0)
    ctx->pc = 0x31064cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x310650: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x310650u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x310654: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x310654u;
    {
        const bool branch_taken_0x310654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310654u;
        // 0x310658: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310654) {
            ctx->pc = 0x31068Cu;
            goto label_31068c;
        }
    }
    ctx->pc = 0x31065Cu;
    // 0x31065c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31065cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x310660: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x310660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x310664: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x310664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x310668: 0x90620416  lbu         $v0, 0x416($v1)
    ctx->pc = 0x310668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1046)));
    // 0x31066c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31066Cu;
    {
        const bool branch_taken_0x31066c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31066c) {
            ctx->pc = 0x310670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31066Cu;
            // 0x310670: 0xa2060034  sb          $a2, 0x34($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310690u;
            goto label_310690;
        }
    }
    ctx->pc = 0x310674u;
    // 0x310674: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x310674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x310678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x310678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31067c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31067Cu;
    SET_GPR_U32(ctx, 31, 0x310684u);
    ctx->pc = 0x310680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31067Cu;
    // 0x310680: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31067Cu, 0x310684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310684u;
label_310684:
    // 0x310684: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x310684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x310688: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x310688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31068c:
    // 0x31068c: 0xa2060034  sb          $a2, 0x34($s0)
    ctx->pc = 0x31068cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 6));
label_310690:
    // 0x310690: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x310690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310694:
    // 0x310694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310698: 0x3e00008  jr          $ra
    ctx->pc = 0x310698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310698u;
        // 0x31069c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3106A0u;
}
