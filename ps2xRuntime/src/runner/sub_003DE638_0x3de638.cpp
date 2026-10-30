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

// Function: sub_003DE638
// Address: 0x3de638 - 0x3de6d0
void sub_003DE638_0x3de638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE638_0x3de638");
#endif

    switch (ctx->pc) {
        case 0x3de638u: goto label_3de638;
        case 0x3de63cu: goto label_3de63c;
        case 0x3de640u: goto label_3de640;
        case 0x3de644u: goto label_3de644;
        case 0x3de648u: goto label_3de648;
        case 0x3de64cu: goto label_3de64c;
        case 0x3de650u: goto label_3de650;
        case 0x3de654u: goto label_3de654;
        case 0x3de658u: goto label_3de658;
        case 0x3de65cu: goto label_3de65c;
        case 0x3de660u: goto label_3de660;
        case 0x3de664u: goto label_3de664;
        case 0x3de668u: goto label_3de668;
        case 0x3de66cu: goto label_3de66c;
        case 0x3de670u: goto label_3de670;
        case 0x3de674u: goto label_3de674;
        case 0x3de678u: goto label_3de678;
        case 0x3de67cu: goto label_3de67c;
        case 0x3de680u: goto label_3de680;
        case 0x3de684u: goto label_3de684;
        case 0x3de688u: goto label_3de688;
        case 0x3de68cu: goto label_3de68c;
        case 0x3de690u: goto label_3de690;
        case 0x3de694u: goto label_3de694;
        case 0x3de698u: goto label_3de698;
        case 0x3de69cu: goto label_3de69c;
        case 0x3de6a0u: goto label_3de6a0;
        case 0x3de6a4u: goto label_3de6a4;
        case 0x3de6a8u: goto label_3de6a8;
        case 0x3de6acu: goto label_3de6ac;
        case 0x3de6b0u: goto label_3de6b0;
        case 0x3de6b4u: goto label_3de6b4;
        case 0x3de6b8u: goto label_3de6b8;
        case 0x3de6bcu: goto label_3de6bc;
        case 0x3de6c0u: goto label_3de6c0;
        case 0x3de6c4u: goto label_3de6c4;
        case 0x3de6c8u: goto label_3de6c8;
        case 0x3de6ccu: goto label_3de6cc;
        default: break;
    }

    ctx->pc = 0x3de638u;

label_3de638:
    // 0x3de638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3de638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3de63c:
    // 0x3de63c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3de63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3de640:
    // 0x3de640: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3de640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3de644:
    // 0x3de644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de648:
    // 0x3de648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3de648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3de64c:
    // 0x3de64c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3de64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3de650:
    // 0x3de650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de654:
    // 0x3de654: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3de654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3de658:
    // 0x3de658: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3de658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3de65c:
    // 0x3de65c: 0x40f809  jalr        $v0
label_3de660:
    if (ctx->pc == 0x3DE660u) {
        ctx->pc = 0x3DE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE65Cu;
        // 0x3de660: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE664u;
        goto label_3de664;
    }
    ctx->pc = 0x3DE65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE664u);
        ctx->pc = 0x3DE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE65Cu;
        // 0x3de660: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE65Cu, 0x3DE664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE664u;
label_3de664:
    // 0x3de664: 0x24030420  addiu       $v1, $zero, 0x420
    ctx->pc = 0x3de664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
label_3de668:
    // 0x3de668: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3de668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3de66c:
    // 0x3de66c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3de66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de670:
    // 0x3de670: 0xc0ea12a  jal         func_3A84A8
label_3de674:
    if (ctx->pc == 0x3DE674u) {
        ctx->pc = 0x3DE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE670u;
        // 0x3de674: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE678u;
        goto label_3de678;
    }
    ctx->pc = 0x3DE670u;
    SET_GPR_U32(ctx, 31, 0x3DE678u);
    ctx->pc = 0x3DE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE670u;
    // 0x3de674: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE670u, 0x3DE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE678u;
label_3de678:
    // 0x3de678: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3de678u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3de67c:
    // 0x3de67c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3de67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3de680:
    // 0x3de680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3de680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3de684:
    // 0x3de684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de688:
    // 0x3de688: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3de688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3de68c:
    // 0x3de68c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3de68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3de690:
    // 0x3de690: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3de690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3de694:
    // 0x3de694: 0xc0e858c  jal         func_3A1630
label_3de698:
    if (ctx->pc == 0x3DE698u) {
        ctx->pc = 0x3DE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE694u;
        // 0x3de698: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE69Cu;
        goto label_3de69c;
    }
    ctx->pc = 0x3DE694u;
    SET_GPR_U32(ctx, 31, 0x3DE69Cu);
    ctx->pc = 0x3DE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE694u;
    // 0x3de698: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DE694u, 0x3DE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE69Cu;
label_3de69c:
    // 0x3de69c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3de69cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3de6a0:
    // 0x3de6a0: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x3de6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
label_3de6a4:
    // 0x3de6a4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x3de6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_3de6a8:
    // 0x3de6a8: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x3de6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_3de6ac:
    // 0x3de6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de6b0:
    // 0x3de6b0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3de6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3de6b4:
    // 0x3de6b4: 0xc0e9404  jal         func_3A5010
label_3de6b8:
    if (ctx->pc == 0x3DE6B8u) {
        ctx->pc = 0x3DE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6B4u;
        // 0x3de6b8: 0x34a50003  ori         $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE6BCu;
        goto label_3de6bc;
    }
    ctx->pc = 0x3DE6B4u;
    SET_GPR_U32(ctx, 31, 0x3DE6BCu);
    ctx->pc = 0x3DE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE6B4u;
    // 0x3de6b8: 0x34a50003  ori         $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DE6B4u, 0x3DE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE6BCu;
label_3de6bc:
    // 0x3de6bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3de6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3de6c0:
    // 0x3de6c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3de6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3de6c4:
    // 0x3de6c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3de6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3de6c8:
    // 0x3de6c8: 0x3e00008  jr          $ra
label_3de6cc:
    if (ctx->pc == 0x3DE6CCu) {
        ctx->pc = 0x3DE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6C8u;
        // 0x3de6cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE6D0u;
        goto label_fallthrough_0x3de6c8;
    }
    ctx->pc = 0x3DE6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6C8u;
        // 0x3de6cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3de6c8:
    ctx->pc = 0x3DE6D0u;
}
