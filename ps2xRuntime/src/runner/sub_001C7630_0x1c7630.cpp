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

// Function: sub_001C7630
// Address: 0x1c7630 - 0x1c76a8
void sub_001C7630_0x1c7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7630_0x1c7630");
#endif

    switch (ctx->pc) {
        case 0x1c7630u: goto label_1c7630;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c7638u: goto label_1c7638;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c7640u: goto label_1c7640;
        case 0x1c7644u: goto label_1c7644;
        case 0x1c7648u: goto label_1c7648;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7650u: goto label_1c7650;
        case 0x1c7654u: goto label_1c7654;
        case 0x1c7658u: goto label_1c7658;
        case 0x1c765cu: goto label_1c765c;
        case 0x1c7660u: goto label_1c7660;
        case 0x1c7664u: goto label_1c7664;
        case 0x1c7668u: goto label_1c7668;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c7670u: goto label_1c7670;
        case 0x1c7674u: goto label_1c7674;
        case 0x1c7678u: goto label_1c7678;
        case 0x1c767cu: goto label_1c767c;
        case 0x1c7680u: goto label_1c7680;
        case 0x1c7684u: goto label_1c7684;
        case 0x1c7688u: goto label_1c7688;
        case 0x1c768cu: goto label_1c768c;
        case 0x1c7690u: goto label_1c7690;
        case 0x1c7694u: goto label_1c7694;
        case 0x1c7698u: goto label_1c7698;
        case 0x1c769cu: goto label_1c769c;
        case 0x1c76a0u: goto label_1c76a0;
        case 0x1c76a4u: goto label_1c76a4;
        default: break;
    }

    ctx->pc = 0x1c7630u;

label_1c7630:
    // 0x1c7630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c7634:
    // 0x1c7634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c7638:
    // 0x1c7638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c763c:
    // 0x1c763c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c763cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7640:
    // 0x1c7640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c7640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c7644:
    // 0x1c7644: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c7644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c7648:
    // 0x1c7648: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c764c:
    // 0x1c764c: 0x40f809  jalr        $v0
label_1c7650:
    if (ctx->pc == 0x1C7650u) {
        ctx->pc = 0x1C7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C764Cu;
        // 0x1c7650: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7654u;
        goto label_1c7654;
    }
    ctx->pc = 0x1C764Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7654u);
        ctx->pc = 0x1C7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C764Cu;
        // 0x1c7650: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C764Cu, 0x1C7654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7654u;
label_1c7654:
    // 0x1c7654: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1c7658:
    if (ctx->pc == 0x1C7658u) {
        ctx->pc = 0x1C7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7654u;
        // 0x1c7658: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C765Cu;
        goto label_1c765c;
    }
    ctx->pc = 0x1C7654u;
    {
        const bool branch_taken_0x1c7654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7654) {
            ctx->pc = 0x1C7658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7654u;
            // 0x1c7658: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C769Cu;
            goto label_1c769c;
        }
    }
    ctx->pc = 0x1C765Cu;
label_1c765c:
    // 0x1c765c: 0xc071d22  jal         func_1C7488
label_1c7660:
    if (ctx->pc == 0x1C7660u) {
        ctx->pc = 0x1C7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C765Cu;
        // 0x1c7660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7664u;
        goto label_1c7664;
    }
    ctx->pc = 0x1C765Cu;
    SET_GPR_U32(ctx, 31, 0x1C7664u);
    ctx->pc = 0x1C7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C765Cu;
    // 0x1c7660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7488u, 0x1C765Cu, 0x1C7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7664u;
label_1c7664:
    // 0x1c7664: 0xc0706c4  jal         func_1C1B10
label_1c7668:
    if (ctx->pc == 0x1C7668u) {
        ctx->pc = 0x1C7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7664u;
        // 0x1c7668: 0x26040420  addiu       $a0, $s0, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C766Cu;
        goto label_1c766c;
    }
    ctx->pc = 0x1C7664u;
    SET_GPR_U32(ctx, 31, 0x1C766Cu);
    ctx->pc = 0x1C7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7664u;
    // 0x1c7668: 0x26040420  addiu       $a0, $s0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C7664u, 0x1C766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C766Cu;
label_1c766c:
    // 0x1c766c: 0xc073b50  jal         func_1CED40
label_1c7670:
    if (ctx->pc == 0x1C7670u) {
        ctx->pc = 0x1C7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C766Cu;
        // 0x1c7670: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7674u;
        goto label_1c7674;
    }
    ctx->pc = 0x1C766Cu;
    SET_GPR_U32(ctx, 31, 0x1C7674u);
    ctx->pc = 0x1C7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C766Cu;
    // 0x1c7670: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1C766Cu, 0x1C7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7674u;
label_1c7674:
    // 0x1c7674: 0xae0004fc  sw          $zero, 0x4FC($s0)
    ctx->pc = 0x1c7674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 0));
label_1c7678:
    // 0x1c7678: 0xc0753c8  jal         func_1D4F20
label_1c767c:
    if (ctx->pc == 0x1C767Cu) {
        ctx->pc = 0x1C767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7678u;
        // 0x1c767c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7680u;
        goto label_1c7680;
    }
    ctx->pc = 0x1C7678u;
    SET_GPR_U32(ctx, 31, 0x1C7680u);
    ctx->pc = 0x1C767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7678u;
    // 0x1c767c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F20u, 0x1C7678u, 0x1C7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7680u;
label_1c7680:
    // 0x1c7680: 0x8e0404fc  lw          $a0, 0x4FC($s0)
    ctx->pc = 0x1c7680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1276)));
label_1c7684:
    // 0x1c7684: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1c7688:
    if (ctx->pc == 0x1C7688u) {
        ctx->pc = 0x1C7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7684u;
        // 0x1c7688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C768Cu;
        goto label_1c768c;
    }
    ctx->pc = 0x1C7684u;
    {
        const bool branch_taken_0x1c7684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7684) {
            ctx->pc = 0x1C7688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7684u;
            // 0x1c7688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C769Cu;
            goto label_1c769c;
        }
    }
    ctx->pc = 0x1C768Cu;
label_1c768c:
    // 0x1c768c: 0x8e0204f8  lw          $v0, 0x4F8($s0)
    ctx->pc = 0x1c768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1272)));
label_1c7690:
    // 0x1c7690: 0x40f809  jalr        $v0
label_1c7694:
    if (ctx->pc == 0x1C7694u) {
        ctx->pc = 0x1C7698u;
        goto label_1c7698;
    }
    ctx->pc = 0x1C7690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7698u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7690u, 0x1C7698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7698u;
label_1c7698:
    // 0x1c7698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c769c:
    // 0x1c769c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c76a0:
    // 0x1c76a0: 0x3e00008  jr          $ra
label_1c76a4:
    if (ctx->pc == 0x1C76A4u) {
        ctx->pc = 0x1C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76A0u;
        // 0x1c76a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76A8u;
        goto label_fallthrough_0x1c76a0;
    }
    ctx->pc = 0x1C76A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76A0u;
        // 0x1c76a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C76A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c76a0:
    ctx->pc = 0x1C76A8u;
}
