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

// Function: sub_0017F650
// Address: 0x17f650 - 0x17f6d0
void sub_0017F650_0x17f650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F650_0x17f650");
#endif

    switch (ctx->pc) {
        case 0x17f650u: goto label_17f650;
        case 0x17f654u: goto label_17f654;
        case 0x17f658u: goto label_17f658;
        case 0x17f65cu: goto label_17f65c;
        case 0x17f660u: goto label_17f660;
        case 0x17f664u: goto label_17f664;
        case 0x17f668u: goto label_17f668;
        case 0x17f66cu: goto label_17f66c;
        case 0x17f670u: goto label_17f670;
        case 0x17f674u: goto label_17f674;
        case 0x17f678u: goto label_17f678;
        case 0x17f67cu: goto label_17f67c;
        case 0x17f680u: goto label_17f680;
        case 0x17f684u: goto label_17f684;
        case 0x17f688u: goto label_17f688;
        case 0x17f68cu: goto label_17f68c;
        case 0x17f690u: goto label_17f690;
        case 0x17f694u: goto label_17f694;
        case 0x17f698u: goto label_17f698;
        case 0x17f69cu: goto label_17f69c;
        case 0x17f6a0u: goto label_17f6a0;
        case 0x17f6a4u: goto label_17f6a4;
        case 0x17f6a8u: goto label_17f6a8;
        case 0x17f6acu: goto label_17f6ac;
        case 0x17f6b0u: goto label_17f6b0;
        case 0x17f6b4u: goto label_17f6b4;
        case 0x17f6b8u: goto label_17f6b8;
        case 0x17f6bcu: goto label_17f6bc;
        case 0x17f6c0u: goto label_17f6c0;
        case 0x17f6c4u: goto label_17f6c4;
        case 0x17f6c8u: goto label_17f6c8;
        case 0x17f6ccu: goto label_17f6cc;
        default: break;
    }

    ctx->pc = 0x17f650u;

label_17f650:
    // 0x17f650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17f654:
    // 0x17f654: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17f654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_17f658:
    // 0x17f658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17f65c:
    // 0x17f65c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_17f660:
    // 0x17f660: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17f664:
    // 0x17f664: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17f664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f668:
    // 0x17f668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f66c:
    // 0x17f66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17f670:
    // 0x17f670: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17f670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17f674:
    // 0x17f674: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x17f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_17f678:
    // 0x17f678: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17f678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_17f67c:
    // 0x17f67c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x17f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_17f680:
    // 0x17f680: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f684:
    // 0x17f684: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f688:
    // 0x17f688: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f68c:
    // 0x17f68c: 0x40f809  jalr        $v0
label_17f690:
    if (ctx->pc == 0x17F690u) {
        ctx->pc = 0x17F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F68Cu;
        // 0x17f690: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F694u;
        goto label_17f694;
    }
    ctx->pc = 0x17F68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F694u);
        ctx->pc = 0x17F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F68Cu;
        // 0x17f690: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F68Cu, 0x17F694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F694u;
label_17f694:
    // 0x17f694: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x17f694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_17f698:
    // 0x17f698: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x17f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_17f69c:
    // 0x17f69c: 0x24638ce0  addiu       $v1, $v1, -0x7320
    ctx->pc = 0x17f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937824));
label_17f6a0:
    // 0x17f6a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_17f6a4:
    // 0x17f6a4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x17f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_17f6a8:
    // 0x17f6a8: 0xc05fdb4  jal         func_17F6D0
label_17f6ac:
    if (ctx->pc == 0x17F6ACu) {
        ctx->pc = 0x17F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6A8u;
        // 0x17f6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F6B0u;
        goto label_17f6b0;
    }
    ctx->pc = 0x17F6A8u;
    SET_GPR_U32(ctx, 31, 0x17F6B0u);
    ctx->pc = 0x17F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6A8u;
    // 0x17f6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F6D0u, 0x17F6A8u, 0x17F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6B0u;
label_17f6b0:
    // 0x17f6b0: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x17f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_17f6b4:
    // 0x17f6b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17f6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f6b8:
    // 0x17f6b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17f6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f6bc:
    // 0x17f6bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f6c0:
    // 0x17f6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f6c4:
    // 0x17f6c4: 0x3e00008  jr          $ra
label_17f6c8:
    if (ctx->pc == 0x17F6C8u) {
        ctx->pc = 0x17F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6C4u;
        // 0x17f6c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F6CCu;
        goto label_17f6cc;
    }
    ctx->pc = 0x17F6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6C4u;
        // 0x17f6c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6CCu;
label_17f6cc:
    // 0x17f6cc: 0x0  nop
    ctx->pc = 0x17f6ccu;
    // NOP
    ctx->pc = 0x17f6d0u;
}
