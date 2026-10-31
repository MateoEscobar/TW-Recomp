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

// Function: sub_00207658
// Address: 0x207658 - 0x2076b0
void sub_00207658_0x207658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207658_0x207658");
#endif

    switch (ctx->pc) {
        case 0x207658u: goto label_207658;
        case 0x20765cu: goto label_20765c;
        case 0x207660u: goto label_207660;
        case 0x207664u: goto label_207664;
        case 0x207668u: goto label_207668;
        case 0x20766cu: goto label_20766c;
        case 0x207670u: goto label_207670;
        case 0x207674u: goto label_207674;
        case 0x207678u: goto label_207678;
        case 0x20767cu: goto label_20767c;
        case 0x207680u: goto label_207680;
        case 0x207684u: goto label_207684;
        case 0x207688u: goto label_207688;
        case 0x20768cu: goto label_20768c;
        case 0x207690u: goto label_207690;
        case 0x207694u: goto label_207694;
        case 0x207698u: goto label_207698;
        case 0x20769cu: goto label_20769c;
        case 0x2076a0u: goto label_2076a0;
        case 0x2076a4u: goto label_2076a4;
        case 0x2076a8u: goto label_2076a8;
        case 0x2076acu: goto label_2076ac;
        default: break;
    }

    ctx->pc = 0x207658u;

label_207658:
    // 0x207658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20765c:
    // 0x20765c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_207660:
    // 0x207660: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_207664:
    // 0x207664: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x207664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_207668:
    // 0x207668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20766c:
    // 0x20766c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20766cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207670:
    // 0x207670: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x207670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_207674:
    // 0x207674: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x207674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207678:
    // 0x207678: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20767c:
    // 0x20767c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_207680:
    // 0x207680: 0xa0f809  jalr        $a1
label_207684:
    if (ctx->pc == 0x207684u) {
        ctx->pc = 0x207684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207680u;
        // 0x207684: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207688u;
        goto label_207688;
    }
    ctx->pc = 0x207680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x207688u);
        ctx->pc = 0x207684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207680u;
        // 0x207684: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207680u, 0x207688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207688u;
label_207688:
    // 0x207688: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20768c:
    // 0x20768c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20768cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_207690:
    // 0x207690: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_207694:
    // 0x207694: 0x60f809  jalr        $v1
label_207698:
    if (ctx->pc == 0x207698u) {
        ctx->pc = 0x207698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207694u;
        // 0x207698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20769Cu;
        goto label_20769c;
    }
    ctx->pc = 0x207694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20769Cu);
        ctx->pc = 0x207698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207694u;
        // 0x207698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207694u, 0x20769Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20769Cu;
label_20769c:
    // 0x20769c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x20769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2076a0:
    // 0x2076a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2076a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2076a4:
    // 0x2076a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2076a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2076a8:
    // 0x2076a8: 0x3e00008  jr          $ra
label_2076ac:
    if (ctx->pc == 0x2076ACu) {
        ctx->pc = 0x2076ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076A8u;
        // 0x2076ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2076B0u;
        goto label_fallthrough_0x2076a8;
    }
    ctx->pc = 0x2076A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2076ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076A8u;
        // 0x2076ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2076a8:
    ctx->pc = 0x2076B0u;
}
