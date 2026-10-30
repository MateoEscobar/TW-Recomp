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

// Function: sub_001F2650
// Address: 0x1f2650 - 0x1f26a8
void sub_001F2650_0x1f2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2650_0x1f2650");
#endif

    switch (ctx->pc) {
        case 0x1f2650u: goto label_1f2650;
        case 0x1f2654u: goto label_1f2654;
        case 0x1f2658u: goto label_1f2658;
        case 0x1f265cu: goto label_1f265c;
        case 0x1f2660u: goto label_1f2660;
        case 0x1f2664u: goto label_1f2664;
        case 0x1f2668u: goto label_1f2668;
        case 0x1f266cu: goto label_1f266c;
        case 0x1f2670u: goto label_1f2670;
        case 0x1f2674u: goto label_1f2674;
        case 0x1f2678u: goto label_1f2678;
        case 0x1f267cu: goto label_1f267c;
        case 0x1f2680u: goto label_1f2680;
        case 0x1f2684u: goto label_1f2684;
        case 0x1f2688u: goto label_1f2688;
        case 0x1f268cu: goto label_1f268c;
        case 0x1f2690u: goto label_1f2690;
        case 0x1f2694u: goto label_1f2694;
        case 0x1f2698u: goto label_1f2698;
        case 0x1f269cu: goto label_1f269c;
        case 0x1f26a0u: goto label_1f26a0;
        case 0x1f26a4u: goto label_1f26a4;
        default: break;
    }

    ctx->pc = 0x1f2650u;

label_1f2650:
    // 0x1f2650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f2654:
    // 0x1f2654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f2658:
    // 0x1f2658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f265c:
    // 0x1f265c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f265cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2660:
    // 0x1f2660: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1f2660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f2664:
    // 0x1f2664: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f2664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f2668:
    // 0x1f2668: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f2668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f266c:
    // 0x1f266c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f2670:
    // 0x1f2670: 0x40f809  jalr        $v0
label_1f2674:
    if (ctx->pc == 0x1F2674u) {
        ctx->pc = 0x1F2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2670u;
        // 0x1f2674: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2678u;
        goto label_1f2678;
    }
    ctx->pc = 0x1F2670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2678u);
        ctx->pc = 0x1F2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2670u;
        // 0x1f2674: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2670u, 0x1F2678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2678u;
label_1f2678:
    // 0x1f2678: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1f267c:
    if (ctx->pc == 0x1F267Cu) {
        ctx->pc = 0x1F267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2678u;
        // 0x1f267c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2680u;
        goto label_1f2680;
    }
    ctx->pc = 0x1F2678u;
    {
        const bool branch_taken_0x1f2678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2678) {
            ctx->pc = 0x1F267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2678u;
            // 0x1f267c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F269Cu;
            goto label_1f269c;
        }
    }
    ctx->pc = 0x1F2680u;
label_1f2680:
    // 0x1f2680: 0x8e050078  lw          $a1, 0x78($s0)
    ctx->pc = 0x1f2680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1f2684:
    // 0x1f2684: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f2688:
    // 0x1f2688: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f2688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f268c:
    // 0x1f268c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f2690:
    // 0x1f2690: 0x60f809  jalr        $v1
label_1f2694:
    if (ctx->pc == 0x1F2694u) {
        ctx->pc = 0x1F2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2690u;
        // 0x1f2694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2698u;
        goto label_1f2698;
    }
    ctx->pc = 0x1F2690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F2698u);
        ctx->pc = 0x1F2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2690u;
        // 0x1f2694: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2690u, 0x1F2698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2698u;
label_1f2698:
    // 0x1f2698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f2698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f269c:
    // 0x1f269c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f269cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f26a0:
    // 0x1f26a0: 0x3e00008  jr          $ra
label_1f26a4:
    if (ctx->pc == 0x1F26A4u) {
        ctx->pc = 0x1F26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26A0u;
        // 0x1f26a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26A8u;
        goto label_fallthrough_0x1f26a0;
    }
    ctx->pc = 0x1F26A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26A0u;
        // 0x1f26a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f26a0:
    ctx->pc = 0x1F26A8u;
}
