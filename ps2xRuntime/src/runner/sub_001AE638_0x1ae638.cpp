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

// Function: sub_001AE638
// Address: 0x1ae638 - 0x1ae828
void sub_001AE638_0x1ae638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE638_0x1ae638");
#endif

    switch (ctx->pc) {
        case 0x1ae674u: goto label_1ae674;
        case 0x1ae6a0u: goto label_1ae6a0;
        case 0x1ae6e8u: goto label_1ae6e8;
        case 0x1ae6f0u: goto label_1ae6f0;
        case 0x1ae708u: goto label_1ae708;
        case 0x1ae734u: goto label_1ae734;
        case 0x1ae744u: goto label_1ae744;
        case 0x1ae74cu: goto label_1ae74c;
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae77cu: goto label_1ae77c;
        case 0x1ae790u: goto label_1ae790;
        case 0x1ae7c0u: goto label_1ae7c0;
        case 0x1ae7e4u: goto label_1ae7e4;
        default: break;
    }

    ctx->pc = 0x1ae638u;

    // 0x1ae638: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ae638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ae63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae640: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ae640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ae644: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ae644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1ae648: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ae648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae64c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ae64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1ae650: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ae650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae654: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ae654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1ae658: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ae658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ae65c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1ae65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1ae660: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1ae660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1ae664: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE664u;
    {
        const bool branch_taken_0x1ae664 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE664u;
        // 0x1ae668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae664) {
            ctx->pc = 0x1AE6A8u;
            goto label_1ae6a8;
        }
    }
    ctx->pc = 0x1AE66Cu;
    // 0x1ae66c: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1AE66Cu;
    SET_GPR_U32(ctx, 31, 0x1AE674u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1AE66Cu, 0x1AE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE674u;
label_1ae674:
    // 0x1ae674: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1AE674u;
    {
        const bool branch_taken_0x1ae674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE674u;
        // 0x1ae678: 0x132880  sll         $a1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae674) {
            ctx->pc = 0x1AE6ACu;
            goto label_1ae6ac;
        }
    }
    ctx->pc = 0x1AE67Cu;
    // 0x1ae67c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ae67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1ae680: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1ae680u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1ae684: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x1ae684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x1ae688: 0x14930009  bne         $a0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE688u;
    {
        const bool branch_taken_0x1ae688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae688) {
            ctx->pc = 0x1AE6B0u;
            goto label_1ae6b0;
        }
    }
    ctx->pc = 0x1AE690u;
    // 0x1ae690: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae698: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1AE698u;
    SET_GPR_U32(ctx, 31, 0x1AE6A0u);
    ctx->pc = 0x1AE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE698u;
    // 0x1ae69c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1AE698u, 0x1AE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6A0u;
label_1ae6a0:
    // 0x1ae6a0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1AE6A0u;
    {
        const bool branch_taken_0x1ae6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6A0u;
        // 0x1ae6a4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6a0) {
            ctx->pc = 0x1AE804u;
            goto label_1ae804;
        }
    }
    ctx->pc = 0x1AE6A8u;
label_1ae6a8:
    // 0x1ae6a8: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x1ae6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1ae6ac:
    // 0x1ae6ac: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x1ae6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1ae6b0:
    // 0x1ae6b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ae6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae6b4: 0x80660019  lb          $a2, 0x19($v1)
    ctx->pc = 0x1ae6b4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1ae6b8: 0x4c00015  bltz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AE6B8u;
    {
        const bool branch_taken_0x1ae6b8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1AE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6B8u;
        // 0x1ae6bc: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6b8) {
            ctx->pc = 0x1AE710u;
            goto label_1ae710;
        }
    }
    ctx->pc = 0x1AE6C0u;
    // 0x1ae6c0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ae6c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1ae6c8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1ae6c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae6cc: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1ae6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae6d4: 0x84640042  lh          $a0, 0x42($v1)
    ctx->pc = 0x1ae6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1ae6d8: 0x10930049  beq         $a0, $s3, . + 4 + (0x49 << 2)
    ctx->pc = 0x1AE6D8u;
    {
        const bool branch_taken_0x1ae6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x1AE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D8u;
        // 0x1ae6dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6d8) {
            ctx->pc = 0x1AE800u;
            goto label_1ae800;
        }
    }
    ctx->pc = 0x1AE6E0u;
    // 0x1ae6e0: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1AE6E0u;
    SET_GPR_U32(ctx, 31, 0x1AE6E8u);
    ctx->pc = 0x1AE6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6E0u;
    // 0x1ae6e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1AE6E0u, 0x1AE6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6E8u;
label_1ae6e8:
    // 0x1ae6e8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1AE6E8u;
    {
        const bool branch_taken_0x1ae6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6E8u;
        // 0x1ae6ec: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6e8) {
            ctx->pc = 0x1AE804u;
            goto label_1ae804;
        }
    }
    ctx->pc = 0x1AE6F0u;
label_1ae6f0:
    // 0x1ae6f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ae6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae6f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ae6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae700: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1AE700u;
    SET_GPR_U32(ctx, 31, 0x1AE708u);
    ctx->pc = 0x1AE704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE700u;
    // 0x1ae704: 0xa0700019  sb          $s0, 0x19($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1AE700u, 0x1AE708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE708u;
label_1ae708:
    // 0x1ae708: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1AE708u;
    {
        const bool branch_taken_0x1ae708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE708u;
        // 0x1ae70c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae708) {
            ctx->pc = 0x1AE804u;
            goto label_1ae804;
        }
    }
    ctx->pc = 0x1AE710u;
label_1ae710:
    // 0x1ae710: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1ae710u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1ae714: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1ae714u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1ae718: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x1ae718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1ae71c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ae71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ae720: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE720u;
    {
        const bool branch_taken_0x1ae720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE720u;
        // 0x1ae724: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae720) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE728u;
    // 0x1ae728: 0x24b00228  addiu       $s0, $a1, 0x228
    ctx->pc = 0x1ae728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    // 0x1ae72c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1AE72Cu;
    SET_GPR_U32(ctx, 31, 0x1AE734u);
    ctx->pc = 0x1AE730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE72Cu;
    // 0x1ae730: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AE72Cu, 0x1AE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE734u;
label_1ae734:
    // 0x1ae734: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AE734u;
    {
        const bool branch_taken_0x1ae734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE734u;
        // 0x1ae738: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae734) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE73Cu;
    // 0x1ae73c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1AE73Cu;
    SET_GPR_U32(ctx, 31, 0x1AE744u);
    ctx->pc = 0x1AE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE73Cu;
    // 0x1ae740: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1AE73Cu, 0x1AE744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE744u;
label_1ae744:
    // 0x1ae744: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x1AE744u;
    SET_GPR_U32(ctx, 31, 0x1AE74Cu);
    ctx->pc = 0x1AE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE744u;
    // 0x1ae748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1AE744u, 0x1AE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE74Cu;
label_1ae74c:
    // 0x1ae74c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE74Cu;
    {
        const bool branch_taken_0x1ae74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae74c) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE754u;
    // 0x1ae754: 0x80460019  lb          $a2, 0x19($v0)
    ctx->pc = 0x1ae754u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1ae758: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE758u;
    {
        const bool branch_taken_0x1ae758 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1AE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE758u;
        // 0x1ae75c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae758) {
            ctx->pc = 0x1AE76Cu;
            goto label_1ae76c;
        }
    }
    ctx->pc = 0x1AE760u;
    // 0x1ae760: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ae760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae764: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1AE764u;
    SET_GPR_U32(ctx, 31, 0x1AE76Cu);
    ctx->pc = 0x1AE768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE764u;
    // 0x1ae768: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1AE764u, 0x1AE76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE76Cu;
label_1ae76c:
    // 0x1ae76c: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE76Cu;
    {
        const bool branch_taken_0x1ae76c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE76Cu;
        // 0x1ae770: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae76c) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE774u;
    // 0x1ae774: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1AE774u;
    SET_GPR_U32(ctx, 31, 0x1AE77Cu);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1AE774u, 0x1AE77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE77Cu;
label_1ae77c:
    // 0x1ae77c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ae77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ae780: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE780u;
    {
        const bool branch_taken_0x1ae780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae780) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE788u;
    // 0x1ae788: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1AE788u;
    SET_GPR_U32(ctx, 31, 0x1AE790u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1AE788u, 0x1AE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE790u;
label_1ae790:
    // 0x1ae790: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x1ae790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x1ae794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae798: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1ae798u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1ae79c:
    // 0x1ae79c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AE79Cu;
    {
        const bool branch_taken_0x1ae79c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE79Cu;
        // 0x1ae7a0: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae79c) {
            ctx->pc = 0x1AE800u;
            goto label_1ae800;
        }
    }
    ctx->pc = 0x1AE7A4u;
    // 0x1ae7a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ae7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae7a8: 0x2471d810  addiu       $s1, $v1, -0x27F0
    ctx->pc = 0x1ae7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x1ae7ac: 0x13100b  movn        $v0, $zero, $s3
    ctx->pc = 0x1ae7acu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ae7b0: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x1ae7b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ae7b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7b8: 0x2632004c  addiu       $s2, $s1, 0x4C
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1ae7bc: 0x0  nop
    ctx->pc = 0x1ae7bcu;
    // NOP
label_1ae7c0:
    // 0x1ae7c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ae7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ae7c4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE7C4u;
    {
        const bool branch_taken_0x1ae7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7c4) {
            ctx->pc = 0x1AE7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE7C4u;
            // 0x1ae7c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE7F0u;
            goto label_1ae7f0;
        }
    }
    ctx->pc = 0x1AE7CCu;
    // 0x1ae7cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1ae7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ae7d0: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x1ae7d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1ae7d4: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE7D4u;
    {
        const bool branch_taken_0x1ae7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7D4u;
        // 0x1ae7d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7d4) {
            ctx->pc = 0x1AE7ECu;
            goto label_1ae7ec;
        }
    }
    ctx->pc = 0x1AE7DCu;
    // 0x1ae7dc: 0xc0512fc  jal         func_144BF0
    ctx->pc = 0x1AE7DCu;
    SET_GPR_U32(ctx, 31, 0x1AE7E4u);
    ctx->pc = 0x1AE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7DCu;
    // 0x1ae7e0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x1AE7DCu, 0x1AE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7E4u;
label_1ae7e4:
    // 0x1ae7e4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1AE7E4u;
    {
        const bool branch_taken_0x1ae7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7E4u;
        // 0x1ae7e8: 0x2961021  addu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7e4) {
            ctx->pc = 0x1AE6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae6f0;
        }
    }
    ctx->pc = 0x1AE7ECu;
label_1ae7ec:
    // 0x1ae7ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ae7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ae7f0:
    // 0x1ae7f0: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1ae7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1ae7f4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1ae7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ae7f8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AE7F8u;
    {
        const bool branch_taken_0x1ae7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7F8u;
        // 0x1ae7fc: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7f8) {
            ctx->pc = 0x1AE7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae7c0;
        }
    }
    ctx->pc = 0x1AE800u;
label_1ae800:
    // 0x1ae800: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ae800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ae804:
    // 0x1ae804: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ae804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae808: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ae808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae80c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ae80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae810: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ae810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae814: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ae814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae818: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1ae818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae820: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE820u;
        // 0x1ae824: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE828u;
}
