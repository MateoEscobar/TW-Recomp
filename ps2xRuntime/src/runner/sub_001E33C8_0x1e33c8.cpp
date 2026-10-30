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

// Function: sub_001E33C8
// Address: 0x1e33c8 - 0x1e3458
void sub_001E33C8_0x1e33c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E33C8_0x1e33c8");
#endif

    switch (ctx->pc) {
        case 0x1e33c8u: goto label_1e33c8;
        case 0x1e33ccu: goto label_1e33cc;
        case 0x1e33d0u: goto label_1e33d0;
        case 0x1e33d4u: goto label_1e33d4;
        case 0x1e33d8u: goto label_1e33d8;
        case 0x1e33dcu: goto label_1e33dc;
        case 0x1e33e0u: goto label_1e33e0;
        case 0x1e33e4u: goto label_1e33e4;
        case 0x1e33e8u: goto label_1e33e8;
        case 0x1e33ecu: goto label_1e33ec;
        case 0x1e33f0u: goto label_1e33f0;
        case 0x1e33f4u: goto label_1e33f4;
        case 0x1e33f8u: goto label_1e33f8;
        case 0x1e33fcu: goto label_1e33fc;
        case 0x1e3400u: goto label_1e3400;
        case 0x1e3404u: goto label_1e3404;
        case 0x1e3408u: goto label_1e3408;
        case 0x1e340cu: goto label_1e340c;
        case 0x1e3410u: goto label_1e3410;
        case 0x1e3414u: goto label_1e3414;
        case 0x1e3418u: goto label_1e3418;
        case 0x1e341cu: goto label_1e341c;
        case 0x1e3420u: goto label_1e3420;
        case 0x1e3424u: goto label_1e3424;
        case 0x1e3428u: goto label_1e3428;
        case 0x1e342cu: goto label_1e342c;
        case 0x1e3430u: goto label_1e3430;
        case 0x1e3434u: goto label_1e3434;
        case 0x1e3438u: goto label_1e3438;
        case 0x1e343cu: goto label_1e343c;
        case 0x1e3440u: goto label_1e3440;
        case 0x1e3444u: goto label_1e3444;
        case 0x1e3448u: goto label_1e3448;
        case 0x1e344cu: goto label_1e344c;
        case 0x1e3450u: goto label_1e3450;
        case 0x1e3454u: goto label_1e3454;
        default: break;
    }

    ctx->pc = 0x1e33c8u;

label_1e33c8:
    // 0x1e33c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e33c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e33cc:
    // 0x1e33cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e33ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e33d0:
    // 0x1e33d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e33d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e33d4:
    // 0x1e33d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e33d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e33d8:
    // 0x1e33d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e33dc:
    // 0x1e33dc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e33dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e33e0:
    // 0x1e33e0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e33e4:
    // 0x1e33e4: 0x40f809  jalr        $v0
label_1e33e8:
    if (ctx->pc == 0x1E33E8u) {
        ctx->pc = 0x1E33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33E4u;
        // 0x1e33e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33ECu;
        goto label_1e33ec;
    }
    ctx->pc = 0x1E33E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E33ECu);
        ctx->pc = 0x1E33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33E4u;
        // 0x1e33e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33E4u, 0x1E33ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E33ECu;
label_1e33ec:
    // 0x1e33ec: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1e33f0:
    if (ctx->pc == 0x1E33F0u) {
        ctx->pc = 0x1E33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33ECu;
        // 0x1e33f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33F4u;
        goto label_1e33f4;
    }
    ctx->pc = 0x1E33ECu;
    {
        const bool branch_taken_0x1e33ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33ec) {
            ctx->pc = 0x1E33F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E33ECu;
            // 0x1e33f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E344Cu;
            goto label_1e344c;
        }
    }
    ctx->pc = 0x1E33F4u;
label_1e33f4:
    // 0x1e33f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e33f8:
    // 0x1e33f8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1e33fc:
    if (ctx->pc == 0x1E33FCu) {
        ctx->pc = 0x1E33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33F8u;
        // 0x1e33fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3400u;
        goto label_1e3400;
    }
    ctx->pc = 0x1E33F8u;
    {
        const bool branch_taken_0x1e33f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33f8) {
            ctx->pc = 0x1E33FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E33F8u;
            // 0x1e33fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E344Cu;
            goto label_1e344c;
        }
    }
    ctx->pc = 0x1E3400u;
label_1e3400:
    // 0x1e3400: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e3400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e3404:
    // 0x1e3404: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1e3408:
    if (ctx->pc == 0x1E3408u) {
        ctx->pc = 0x1E3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3404u;
        // 0x1e3408: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E340Cu;
        goto label_1e340c;
    }
    ctx->pc = 0x1E3404u;
    {
        const bool branch_taken_0x1e3404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3404) {
            ctx->pc = 0x1E3408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3404u;
            // 0x1e3408: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E344Cu;
            goto label_1e344c;
        }
    }
    ctx->pc = 0x1E340Cu;
label_1e340c:
    // 0x1e340c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3410:
    // 0x1e3410: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1e3410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1e3414:
    // 0x1e3414: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1e3414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1e3418:
    // 0x1e3418: 0x40f809  jalr        $v0
label_1e341c:
    if (ctx->pc == 0x1E341Cu) {
        ctx->pc = 0x1E341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3418u;
        // 0x1e341c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3420u;
        goto label_1e3420;
    }
    ctx->pc = 0x1E3418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3420u);
        ctx->pc = 0x1E341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3418u;
        // 0x1e341c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3418u, 0x1E3420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3420u;
label_1e3420:
    // 0x1e3420: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e3424:
    if (ctx->pc == 0x1E3424u) {
        ctx->pc = 0x1E3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3420u;
        // 0x1e3424: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3428u;
        goto label_1e3428;
    }
    ctx->pc = 0x1E3420u;
    {
        const bool branch_taken_0x1e3420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3420u;
        // 0x1e3424: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3420) {
            ctx->pc = 0x1E343Cu;
            goto label_1e343c;
        }
    }
    ctx->pc = 0x1E3428u;
label_1e3428:
    // 0x1e3428: 0x8e050260  lw          $a1, 0x260($s0)
    ctx->pc = 0x1e3428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1e342c:
    // 0x1e342c: 0xc06ec0e  jal         func_1BB038
label_1e3430:
    if (ctx->pc == 0x1E3430u) {
        ctx->pc = 0x1E3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E342Cu;
        // 0x1e3430: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3434u;
        goto label_1e3434;
    }
    ctx->pc = 0x1E342Cu;
    SET_GPR_U32(ctx, 31, 0x1E3434u);
    ctx->pc = 0x1E3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E342Cu;
    // 0x1e3430: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB038u, 0x1E342Cu, 0x1E3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3434u;
label_1e3434:
    // 0x1e3434: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e3438:
    if (ctx->pc == 0x1E3438u) {
        ctx->pc = 0x1E3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3434u;
        // 0x1e3438: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E343Cu;
        goto label_1e343c;
    }
    ctx->pc = 0x1E3434u;
    {
        const bool branch_taken_0x1e3434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3434u;
        // 0x1e3438: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3434) {
            ctx->pc = 0x1E344Cu;
            goto label_1e344c;
        }
    }
    ctx->pc = 0x1E343Cu;
label_1e343c:
    // 0x1e343c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e3440:
    // 0x1e3440: 0xc06ec0e  jal         func_1BB038
label_1e3444:
    if (ctx->pc == 0x1E3444u) {
        ctx->pc = 0x1E3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3440u;
        // 0x1e3444: 0x8c45d320  lw          $a1, -0x2CE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3448u;
        goto label_1e3448;
    }
    ctx->pc = 0x1E3440u;
    SET_GPR_U32(ctx, 31, 0x1E3448u);
    ctx->pc = 0x1E3444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3440u;
    // 0x1e3444: 0x8c45d320  lw          $a1, -0x2CE0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB038u, 0x1E3440u, 0x1E3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3448u;
label_1e3448:
    // 0x1e3448: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e344c:
    // 0x1e344c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3450:
    // 0x1e3450: 0x3e00008  jr          $ra
label_1e3454:
    if (ctx->pc == 0x1E3454u) {
        ctx->pc = 0x1E3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3450u;
        // 0x1e3454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3458u;
        goto label_fallthrough_0x1e3450;
    }
    ctx->pc = 0x1E3450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3450u;
        // 0x1e3454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3450:
    ctx->pc = 0x1E3458u;
}
