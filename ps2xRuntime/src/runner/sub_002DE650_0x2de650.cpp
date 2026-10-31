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

// Function: sub_002DE650
// Address: 0x2de650 - 0x2de7c0
void sub_002DE650_0x2de650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE650_0x2de650");
#endif

    switch (ctx->pc) {
        case 0x2de694u: goto label_2de694;
        case 0x2de6bcu: goto label_2de6bc;
        case 0x2de6e0u: goto label_2de6e0;
        case 0x2de6e8u: goto label_2de6e8;
        case 0x2de6f0u: goto label_2de6f0;
        case 0x2de738u: goto label_2de738;
        case 0x2de744u: goto label_2de744;
        case 0x2de74cu: goto label_2de74c;
        case 0x2de778u: goto label_2de778;
        default: break;
    }

    ctx->pc = 0x2de650u;

    // 0x2de650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2de650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2de654: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2de654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2de658: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2de658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2de65c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2de65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de660: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2de660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2de664: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2de664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de670: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2de670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2de674: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2de674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2de678: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2de678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2de67c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2DE67Cu;
    {
        const bool branch_taken_0x2de67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE67Cu;
        // 0x2de680: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de67c) {
            ctx->pc = 0x2DE788u;
            goto label_2de788;
        }
    }
    ctx->pc = 0x2DE684u;
    // 0x2de684: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DE684u;
    {
        const bool branch_taken_0x2de684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de684) {
            ctx->pc = 0x2DE688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE684u;
            // 0x2de688: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE6CCu;
            goto label_2de6cc;
        }
    }
    ctx->pc = 0x2DE68Cu;
    // 0x2de68c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DE68Cu;
    SET_GPR_U32(ctx, 31, 0x2DE694u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DE68Cu, 0x2DE694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE694u;
label_2de694:
    // 0x2de694: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2de694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de698: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x2de698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2de69c: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DE69Cu;
    {
        const bool branch_taken_0x2de69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE69Cu;
        // 0x2de6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de69c) {
            ctx->pc = 0x2DE7A4u;
            goto label_2de7a4;
        }
    }
    ctx->pc = 0x2DE6A4u;
    // 0x2de6a4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2de6a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2de6a8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2de6a8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2de6ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE6ACu;
    {
        const bool branch_taken_0x2de6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6ac) {
            ctx->pc = 0x2DE6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE6ACu;
            // 0x2de6b0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE6CCu;
            goto label_2de6cc;
        }
    }
    ctx->pc = 0x2DE6B4u;
    // 0x2de6b4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DE6B4u;
    SET_GPR_U32(ctx, 31, 0x2DE6BCu);
    ctx->pc = 0x2DE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE6B4u;
    // 0x2de6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DE6B4u, 0x2DE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6BCu;
label_2de6bc:
    // 0x2de6bc: 0x904302e4  lbu         $v1, 0x2E4($v0)
    ctx->pc = 0x2de6bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 740)));
    // 0x2de6c0: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2DE6C0u;
    {
        const bool branch_taken_0x2de6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6C0u;
        // 0x2de6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6c0) {
            ctx->pc = 0x2DE7A4u;
            goto label_2de7a4;
        }
    }
    ctx->pc = 0x2DE6C8u;
    // 0x2de6c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2de6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2de6cc:
    // 0x2de6cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2de6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2de6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de6d4: 0x245101a4  addiu       $s1, $v0, 0x1A4
    ctx->pc = 0x2de6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x2de6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6dc: 0x0  nop
    ctx->pc = 0x2de6dcu;
    // NOP
label_2de6e0:
    // 0x2de6e0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2DE6E0u;
    SET_GPR_U32(ctx, 31, 0x2DE6E8u);
    ctx->pc = 0x2DE6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE6E0u;
    // 0x2de6e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2DE6E0u, 0x2DE6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6E8u;
label_2de6e8:
    // 0x2de6e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2DE6E8u;
    SET_GPR_U32(ctx, 31, 0x2DE6F0u);
    ctx->pc = 0x2DE6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE6E8u;
    // 0x2de6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DE6E8u, 0x2DE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6F0u;
label_2de6f0:
    // 0x2de6f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE6F0u;
    {
        const bool branch_taken_0x2de6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6F0u;
        // 0x2de6f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6f0) {
            ctx->pc = 0x2DE70Cu;
            goto label_2de70c;
        }
    }
    ctx->pc = 0x2DE6F8u;
    // 0x2de6f8: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x2de6f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2de6fc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2de6fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2de700: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2de700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2de704: 0x10520027  beq         $v0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DE704u;
    {
        const bool branch_taken_0x2de704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE704u;
        // 0x2de708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de704) {
            ctx->pc = 0x2DE7A4u;
            goto label_2de7a4;
        }
    }
    ctx->pc = 0x2DE70Cu;
label_2de70c:
    // 0x2de70c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2de70cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2de710: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DE710u;
    {
        const bool branch_taken_0x2de710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE710u;
        // 0x2de714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de710) {
            ctx->pc = 0x2DE6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de6e0;
        }
    }
    ctx->pc = 0x2DE718u;
    // 0x2de718: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2de718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2de71c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2de71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de720: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2de720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2de724: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x2de724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x2de728: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DE728u;
    {
        const bool branch_taken_0x2de728 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2DE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE728u;
        // 0x2de72c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de728) {
            ctx->pc = 0x2DE76Cu;
            goto label_2de76c;
        }
    }
    ctx->pc = 0x2DE730u;
    // 0x2de730: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x2de730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x2de734: 0x0  nop
    ctx->pc = 0x2de734u;
    // NOP
label_2de738:
    // 0x2de738: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x2de738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x2de73c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2DE73Cu;
    SET_GPR_U32(ctx, 31, 0x2DE744u);
    ctx->pc = 0x2DE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE73Cu;
    // 0x2de740: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DE73Cu, 0x2DE744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE744u;
label_2de744:
    // 0x2de744: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DE744u;
    SET_GPR_U32(ctx, 31, 0x2DE74Cu);
    ctx->pc = 0x2DE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE744u;
    // 0x2de748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DE744u, 0x2DE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE74Cu;
label_2de74c:
    // 0x2de74c: 0x904302e4  lbu         $v1, 0x2E4($v0)
    ctx->pc = 0x2de74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 740)));
    // 0x2de750: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DE750u;
    {
        const bool branch_taken_0x2de750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE750u;
        // 0x2de754: 0x8e43489c  lw          $v1, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de750) {
            ctx->pc = 0x2DE790u;
            goto label_2de790;
        }
    }
    ctx->pc = 0x2DE758u;
    // 0x2de758: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2de758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2de75c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2de75cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x2de760: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2de760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2de764: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DE764u;
    {
        const bool branch_taken_0x2de764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE764u;
        // 0x2de768: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de764) {
            ctx->pc = 0x2DE738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de738;
        }
    }
    ctx->pc = 0x2DE76Cu;
label_2de76c:
    // 0x2de76c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2de76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2de770: 0xc05a596  jal         func_169658
    ctx->pc = 0x2DE770u;
    SET_GPR_U32(ctx, 31, 0x2DE778u);
    ctx->pc = 0x2DE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE770u;
    // 0x2de774: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x2DE770u, 0x2DE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE778u;
label_2de778:
    // 0x2de778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de780: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE780u;
    {
        const bool branch_taken_0x2de780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2de780) {
            ctx->pc = 0x2DE784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE780u;
            // 0x2de784: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE798u;
            goto label_2de798;
        }
    }
    ctx->pc = 0x2DE788u;
label_2de788:
    // 0x2de788: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE788u;
    {
        const bool branch_taken_0x2de788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE788u;
        // 0x2de78c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de788) {
            ctx->pc = 0x2DE7A4u;
            goto label_2de7a4;
        }
    }
    ctx->pc = 0x2DE790u;
label_2de790:
    // 0x2de790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE790u;
    {
        const bool branch_taken_0x2de790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE790u;
        // 0x2de794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de790) {
            ctx->pc = 0x2DE7A4u;
            goto label_2de7a4;
        }
    }
    ctx->pc = 0x2DE798u;
label_2de798:
    // 0x2de798: 0x90430152  lbu         $v1, 0x152($v0)
    ctx->pc = 0x2de798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 338)));
    // 0x2de79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7a0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2de7a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2de7a4:
    // 0x2de7a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2de7a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de7a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2de7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de7ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de7b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2de7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7B8u;
        // 0x2de7bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE7C0u;
}
