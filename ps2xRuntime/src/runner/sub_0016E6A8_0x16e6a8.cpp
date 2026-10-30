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

// Function: sub_0016E6A8
// Address: 0x16e6a8 - 0x16e740
void sub_0016E6A8_0x16e6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E6A8_0x16e6a8");
#endif

    switch (ctx->pc) {
        case 0x16e6a8u: goto label_16e6a8;
        case 0x16e6acu: goto label_16e6ac;
        case 0x16e6b0u: goto label_16e6b0;
        case 0x16e6b4u: goto label_16e6b4;
        case 0x16e6b8u: goto label_16e6b8;
        case 0x16e6bcu: goto label_16e6bc;
        case 0x16e6c0u: goto label_16e6c0;
        case 0x16e6c4u: goto label_16e6c4;
        case 0x16e6c8u: goto label_16e6c8;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e6d0u: goto label_16e6d0;
        case 0x16e6d4u: goto label_16e6d4;
        case 0x16e6d8u: goto label_16e6d8;
        case 0x16e6dcu: goto label_16e6dc;
        case 0x16e6e0u: goto label_16e6e0;
        case 0x16e6e4u: goto label_16e6e4;
        case 0x16e6e8u: goto label_16e6e8;
        case 0x16e6ecu: goto label_16e6ec;
        case 0x16e6f0u: goto label_16e6f0;
        case 0x16e6f4u: goto label_16e6f4;
        case 0x16e6f8u: goto label_16e6f8;
        case 0x16e6fcu: goto label_16e6fc;
        case 0x16e700u: goto label_16e700;
        case 0x16e704u: goto label_16e704;
        case 0x16e708u: goto label_16e708;
        case 0x16e70cu: goto label_16e70c;
        case 0x16e710u: goto label_16e710;
        case 0x16e714u: goto label_16e714;
        case 0x16e718u: goto label_16e718;
        case 0x16e71cu: goto label_16e71c;
        case 0x16e720u: goto label_16e720;
        case 0x16e724u: goto label_16e724;
        case 0x16e728u: goto label_16e728;
        case 0x16e72cu: goto label_16e72c;
        case 0x16e730u: goto label_16e730;
        case 0x16e734u: goto label_16e734;
        case 0x16e738u: goto label_16e738;
        case 0x16e73cu: goto label_16e73c;
        default: break;
    }

    ctx->pc = 0x16e6a8u;

label_16e6a8:
    // 0x16e6a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16e6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16e6ac:
    // 0x16e6ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_16e6b0:
    // 0x16e6b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16e6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_16e6b4:
    // 0x16e6b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_16e6b8:
    // 0x16e6b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_16e6bc:
    // 0x16e6bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16e6bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e6c0:
    // 0x16e6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e6c4:
    // 0x16e6c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16e6c8:
    // 0x16e6c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16e6cc:
    // 0x16e6cc: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x16e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_16e6d0:
    // 0x16e6d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e6d4:
    // 0x16e6d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16e6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16e6d8:
    // 0x16e6d8: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x16e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_16e6dc:
    // 0x16e6dc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16e6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16e6e0:
    // 0x16e6e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_16e6e4:
    // 0x16e6e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16e6e8:
    // 0x16e6e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16e6ec:
    // 0x16e6ec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16e6ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16e6f0:
    // 0x16e6f0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16e6f4:
    // 0x16e6f4: 0x40f809  jalr        $v0
label_16e6f8:
    if (ctx->pc == 0x16E6F8u) {
        ctx->pc = 0x16E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6F4u;
        // 0x16e6f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E6FCu;
        goto label_16e6fc;
    }
    ctx->pc = 0x16E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E6FCu);
        ctx->pc = 0x16E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E6F4u;
        // 0x16e6f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E6F4u, 0x16E6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E6FCu;
label_16e6fc:
    // 0x16e6fc: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x16e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_16e700:
    // 0x16e700: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x16e700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_16e704:
    // 0x16e704: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16e704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16e708:
    // 0x16e708: 0x24638970  addiu       $v1, $v1, -0x7690
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936944));
label_16e70c:
    // 0x16e70c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x16e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_16e710:
    // 0x16e710: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16e710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e714:
    // 0x16e714: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x16e714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_16e718:
    // 0x16e718: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x16e718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_16e71c:
    // 0x16e71c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x16e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_16e720:
    // 0x16e720: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16e720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e724:
    // 0x16e724: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16e724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e728:
    // 0x16e728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16e728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e72c:
    // 0x16e72c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16e72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e730:
    // 0x16e730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e734:
    // 0x16e734: 0x3e00008  jr          $ra
label_16e738:
    if (ctx->pc == 0x16E738u) {
        ctx->pc = 0x16E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E734u;
        // 0x16e738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E73Cu;
        goto label_16e73c;
    }
    ctx->pc = 0x16E734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E734u;
        // 0x16e738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E73Cu;
label_16e73c:
    // 0x16e73c: 0x0  nop
    ctx->pc = 0x16e73cu;
    // NOP
    ctx->pc = 0x16e740u;
}
