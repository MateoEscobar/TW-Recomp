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

// Function: sub_002B5808
// Address: 0x2b5808 - 0x2b5a98
void sub_002B5808_0x2b5808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5808_0x2b5808");
#endif

    switch (ctx->pc) {
        case 0x2b5858u: goto label_2b5858;
        case 0x2b5888u: goto label_2b5888;
        case 0x2b5894u: goto label_2b5894;
        case 0x2b58b4u: goto label_2b58b4;
        case 0x2b58c4u: goto label_2b58c4;
        case 0x2b58d0u: goto label_2b58d0;
        case 0x2b58dcu: goto label_2b58dc;
        case 0x2b58ecu: goto label_2b58ec;
        case 0x2b58f8u: goto label_2b58f8;
        case 0x2b5920u: goto label_2b5920;
        case 0x2b5958u: goto label_2b5958;
        case 0x2b5968u: goto label_2b5968;
        case 0x2b5970u: goto label_2b5970;
        case 0x2b598cu: goto label_2b598c;
        case 0x2b59a0u: goto label_2b59a0;
        case 0x2b59acu: goto label_2b59ac;
        case 0x2b59c8u: goto label_2b59c8;
        case 0x2b59f0u: goto label_2b59f0;
        case 0x2b59fcu: goto label_2b59fc;
        case 0x2b5a10u: goto label_2b5a10;
        case 0x2b5a24u: goto label_2b5a24;
        case 0x2b5a4cu: goto label_2b5a4c;
        case 0x2b5a58u: goto label_2b5a58;
        case 0x2b5a68u: goto label_2b5a68;
        case 0x2b5a74u: goto label_2b5a74;
        default: break;
    }

    ctx->pc = 0x2b5808u;

    // 0x2b5808: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b5808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b580c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b5810: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b5810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b5814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5818: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b5818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b581c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b5820: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b5820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b5824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5828: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x2b5828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    // 0x2b582c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b5830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5838: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2b5838u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b583c: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x2b583cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b5840: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B5840u;
    {
        const bool branch_taken_0x2b5840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5840u;
        // 0x2b5844: 0xa2220017  sb          $v0, 0x17($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5840) {
            ctx->pc = 0x2B587Cu;
            goto label_2b587c;
        }
    }
    ctx->pc = 0x2B5848u;
    // 0x2b5848: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x2b5848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x2b584c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5850: 0xc089998  jal         func_226660
    ctx->pc = 0x2B5850u;
    SET_GPR_U32(ctx, 31, 0x2B5858u);
    ctx->pc = 0x2B5854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5850u;
    // 0x2b5854: 0x34a5eae0  ori         $a1, $a1, 0xEAE0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2B5850u, 0x2B5858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5858u;
label_2b5858:
    // 0x2b5858: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5858u;
    {
        const bool branch_taken_0x2b5858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5858) {
            ctx->pc = 0x2B585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5858u;
            // 0x2b585c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5880u;
            goto label_2b5880;
        }
    }
    ctx->pc = 0x2B5860u;
    // 0x2b5860: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2b5860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2b5864: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5864u;
    {
        const bool branch_taken_0x2b5864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5864) {
            ctx->pc = 0x2B5868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5864u;
            // 0x2b5868: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5880u;
            goto label_2b5880;
        }
    }
    ctx->pc = 0x2B586Cu;
    // 0x2b586c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b586cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b5870: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2b5870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2b5874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b5874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b5878: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b5878u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2b587c:
    // 0x2b587c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b587cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5880:
    // 0x2b5880: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B5880u;
    SET_GPR_U32(ctx, 31, 0x2B5888u);
    ctx->pc = 0x2B5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5880u;
    // 0x2b5884: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5880u, 0x2B5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5888u;
label_2b5888:
    // 0x2b5888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b588c: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B588Cu;
    SET_GPR_U32(ctx, 31, 0x2B5894u);
    ctx->pc = 0x2B5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B588Cu;
    // 0x2b5890: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B588Cu, 0x2B5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5894u;
label_2b5894:
    // 0x2b5894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b5894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5898: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B5898u;
    {
        const bool branch_taken_0x2b5898 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5898u;
        // 0x2b589c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5898) {
            ctx->pc = 0x2B58FCu;
            goto label_2b58fc;
        }
    }
    ctx->pc = 0x2B58A0u;
    // 0x2b58a0: 0x92300016  lbu         $s0, 0x16($s1)
    ctx->pc = 0x2b58a0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2b58a4: 0x56020016  bnel        $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B58A4u;
    {
        const bool branch_taken_0x2b58a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b58a4) {
            ctx->pc = 0x2B58A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B58A4u;
            // 0x2b58a8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5900u;
            goto label_2b5900;
        }
    }
    ctx->pc = 0x2B58ACu;
    // 0x2b58ac: 0xc08a158  jal         func_228560
    ctx->pc = 0x2B58ACu;
    SET_GPR_U32(ctx, 31, 0x2B58B4u);
    ctx->pc = 0x2B58B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B58ACu;
    // 0x2b58b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2B58ACu, 0x2B58B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58B4u;
label_2b58b4:
    // 0x2b58b4: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B58B4u;
    {
        const bool branch_taken_0x2b58b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b58b4) {
            ctx->pc = 0x2B58D4u;
            goto label_2b58d4;
        }
    }
    ctx->pc = 0x2B58BCu;
    // 0x2b58bc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B58BCu;
    SET_GPR_U32(ctx, 31, 0x2B58C4u);
    ctx->pc = 0x2B58C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B58BCu;
    // 0x2b58c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B58BCu, 0x2B58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58C4u;
label_2b58c4:
    // 0x2b58c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b58c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58c8: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B58C8u;
    SET_GPR_U32(ctx, 31, 0x2B58D0u);
    ctx->pc = 0x2B58CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B58C8u;
    // 0x2b58cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B58C8u, 0x2B58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58D0u;
label_2b58d0:
    // 0x2b58d0: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x2b58d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_2b58d4:
    // 0x2b58d4: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2B58D4u;
    SET_GPR_U32(ctx, 31, 0x2B58DCu);
    ctx->pc = 0x2B58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B58D4u;
    // 0x2b58d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2B58D4u, 0x2B58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58DCu;
label_2b58dc:
    // 0x2b58dc: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B58DCu;
    {
        const bool branch_taken_0x2b58dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b58dc) {
            ctx->pc = 0x2B58E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B58DCu;
            // 0x2b58e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5900u;
            goto label_2b5900;
        }
    }
    ctx->pc = 0x2B58E4u;
    // 0x2b58e4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B58E4u;
    SET_GPR_U32(ctx, 31, 0x2B58ECu);
    ctx->pc = 0x2B58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B58E4u;
    // 0x2b58e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B58E4u, 0x2B58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58ECu;
label_2b58ec:
    // 0x2b58ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b58ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b58f0: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B58F0u;
    SET_GPR_U32(ctx, 31, 0x2B58F8u);
    ctx->pc = 0x2B58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B58F0u;
    // 0x2b58f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B58F0u, 0x2B58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B58F8u;
label_2b58f8:
    // 0x2b58f8: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x2b58f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_2b58fc:
    // 0x2b58fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b58fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5900:
    // 0x2b5900: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b5900u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2b5904: 0x1c40005b  bgtz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B5904u;
    {
        const bool branch_taken_0x2b5904 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5904u;
        // 0x2b5908: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5904) {
            ctx->pc = 0x2B5A74u;
            goto label_2b5a74;
        }
    }
    ctx->pc = 0x2B590Cu;
    // 0x2b590c: 0x92220016  lbu         $v0, 0x16($s1)
    ctx->pc = 0x2b590cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2b5910: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5910u;
    {
        const bool branch_taken_0x2b5910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5910) {
            ctx->pc = 0x2B5914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5910u;
            // 0x2b5914: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5930u;
            goto label_2b5930;
        }
    }
    ctx->pc = 0x2B5918u;
    // 0x2b5918: 0xc088eb4  jal         func_223AD0
    ctx->pc = 0x2B5918u;
    SET_GPR_U32(ctx, 31, 0x2B5920u);
    ctx->pc = 0x2B591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5918u;
    // 0x2b591c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2B5918u, 0x2B5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5920u;
label_2b5920:
    // 0x2b5920: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2b5920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b5924: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5928: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2B5928u;
    {
        const bool branch_taken_0x2b5928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5928u;
        // 0x2b592c: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5928) {
            ctx->pc = 0x2B5A78u;
            goto label_2b5a78;
        }
    }
    ctx->pc = 0x2B5930u;
label_2b5930:
    // 0x2b5930: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2b5930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b5934: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2b5934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2b5938: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2b5938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b593c: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x2b593cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b5940: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B5940u;
    {
        const bool branch_taken_0x2b5940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5940u;
        // 0x2b5944: 0x901023  subu        $v0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5940) {
            ctx->pc = 0x2B59B4u;
            goto label_2b59b4;
        }
    }
    ctx->pc = 0x2B5948u;
    // 0x2b5948: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B5948u;
    {
        const bool branch_taken_0x2b5948 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5948) {
            ctx->pc = 0x2B594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5948u;
            // 0x2b594c: 0xa2200016  sb          $zero, 0x16($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5998u;
            goto label_2b5998;
        }
    }
    ctx->pc = 0x2B5950u;
    // 0x2b5950: 0xc08a10a  jal         func_228428
    ctx->pc = 0x2B5950u;
    SET_GPR_U32(ctx, 31, 0x2B5958u);
    ctx->pc = 0x2B5954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5950u;
    // 0x2b5954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228428u, 0x2B5950u, 0x2B5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5958u;
label_2b5958:
    // 0x2b5958: 0x5454000f  bnel        $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2B5958u;
    {
        const bool branch_taken_0x2b5958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b5958) {
            ctx->pc = 0x2B595Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5958u;
            // 0x2b595c: 0xa2200016  sb          $zero, 0x16($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5998u;
            goto label_2b5998;
        }
    }
    ctx->pc = 0x2B5960u;
    // 0x2b5960: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B5960u;
    SET_GPR_U32(ctx, 31, 0x2B5968u);
    ctx->pc = 0x2B5964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5960u;
    // 0x2b5964: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B5960u, 0x2B5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5968u;
label_2b5968:
    // 0x2b5968: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B5968u;
    SET_GPR_U32(ctx, 31, 0x2B5970u);
    ctx->pc = 0x2B596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5968u;
    // 0x2b596c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B5968u, 0x2B5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5970u;
label_2b5970:
    // 0x2b5970: 0x54520009  bnel        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5970u;
    {
        const bool branch_taken_0x2b5970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2b5970) {
            ctx->pc = 0x2B5974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5970u;
            // 0x2b5974: 0xa2200016  sb          $zero, 0x16($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5998u;
            goto label_2b5998;
        }
    }
    ctx->pc = 0x2B5978u;
    // 0x2b5978: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b5978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b597c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2b597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2b5980: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b5980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2b5984: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2B5984u;
    SET_GPR_U32(ctx, 31, 0x2B598Cu);
    ctx->pc = 0x2B5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5984u;
    // 0x2b5988: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B5984u, 0x2B598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B598Cu;
label_2b598c:
    // 0x2b598c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b5990: 0xa2340015  sb          $s4, 0x15($s1)
    ctx->pc = 0x2b5990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 20));
    // 0x2b5994: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2b5994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2b5998:
    // 0x2b5998: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B5998u;
    SET_GPR_U32(ctx, 31, 0x2B59A0u);
    ctx->pc = 0x2B599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5998u;
    // 0x2b599c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B5998u, 0x2B59A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59A0u;
label_2b59a0:
    // 0x2b59a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b59a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b59a4: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B59A4u;
    SET_GPR_U32(ctx, 31, 0x2B59ACu);
    ctx->pc = 0x2B59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B59A4u;
    // 0x2b59a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B59A4u, 0x2B59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59ACu;
label_2b59ac:
    // 0x2b59ac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B59ACu;
    {
        const bool branch_taken_0x2b59ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59ACu;
        // 0x2b59b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59ac) {
            ctx->pc = 0x2B5A78u;
            goto label_2b5a78;
        }
    }
    ctx->pc = 0x2B59B4u;
label_2b59b4:
    // 0x2b59b4: 0x2c4203e8  sltiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2b59b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2b59b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B59B8u;
    {
        const bool branch_taken_0x2b59b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59B8u;
        // 0x2b59bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59b8) {
            ctx->pc = 0x2B59D0u;
            goto label_2b59d0;
        }
    }
    ctx->pc = 0x2B59C0u;
    // 0x2b59c0: 0xc0ad5c6  jal         func_2B5718
    ctx->pc = 0x2B59C0u;
    SET_GPR_U32(ctx, 31, 0x2B59C8u);
    ctx->pc = 0x2B59C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B59C0u;
    // 0x2b59c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5718u, 0x2B59C0u, 0x2B59C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59C8u;
label_2b59c8:
    // 0x2b59c8: 0x1054002b  beq         $v0, $s4, . + 4 + (0x2B << 2)
    ctx->pc = 0x2B59C8u;
    {
        const bool branch_taken_0x2b59c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59C8u;
        // 0x2b59cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59c8) {
            ctx->pc = 0x2B5A78u;
            goto label_2b5a78;
        }
    }
    ctx->pc = 0x2B59D0u;
label_2b59d0:
    // 0x2b59d0: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B59D0u;
    {
        const bool branch_taken_0x2b59d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b59d0) {
            ctx->pc = 0x2B5A60u;
            goto label_2b5a60;
        }
    }
    ctx->pc = 0x2B59D8u;
    // 0x2b59d8: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x2b59d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x2b59dc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B59DCu;
    {
        const bool branch_taken_0x2b59dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59DCu;
        // 0x2b59e0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59dc) {
            ctx->pc = 0x2B5A60u;
            goto label_2b5a60;
        }
    }
    ctx->pc = 0x2B59E4u;
    // 0x2b59e4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b59e8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B59E8u;
    SET_GPR_U32(ctx, 31, 0x2B59F0u);
    ctx->pc = 0x2B59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B59E8u;
    // 0x2b59ec: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B59E8u, 0x2B59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59F0u;
label_2b59f0:
    // 0x2b59f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b59f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b59f4: 0xc088d7e  jal         func_2235F8
    ctx->pc = 0x2B59F4u;
    SET_GPR_U32(ctx, 31, 0x2B59FCu);
    ctx->pc = 0x2B59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B59F4u;
    // 0x2b59f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235F8u, 0x2B59F4u, 0x2B59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59FCu;
label_2b59fc:
    // 0x2b59fc: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x2b59fcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b5a00: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B5A00u;
    {
        const bool branch_taken_0x2b5a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A00u;
        // 0x2b5a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a00) {
            ctx->pc = 0x2B5A60u;
            goto label_2b5a60;
        }
    }
    ctx->pc = 0x2B5A08u;
    // 0x2b5a08: 0xc09643e  jal         func_2590F8
    ctx->pc = 0x2B5A08u;
    SET_GPR_U32(ctx, 31, 0x2B5A10u);
    ctx->pc = 0x2B5A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A08u;
    // 0x2b5a0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x2B5A08u, 0x2B5A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A10u;
label_2b5a10:
    // 0x2b5a10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b5a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5a14: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5A14u;
    {
        const bool branch_taken_0x2b5a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A14u;
        // 0x2b5a18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a14) {
            ctx->pc = 0x2B5A2Cu;
            goto label_2b5a2c;
        }
    }
    ctx->pc = 0x2B5A1Cu;
    // 0x2b5a1c: 0xc0963a2  jal         func_258E88
    ctx->pc = 0x2B5A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B5A24u);
    ctx->pc = 0x2B5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A1Cu;
    // 0x2b5a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x2B5A1Cu, 0x2B5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A24u;
label_2b5a24:
    // 0x2b5a24: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B5A24u;
    {
        const bool branch_taken_0x2b5a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2b5a24) {
            ctx->pc = 0x2B5A60u;
            goto label_2b5a60;
        }
    }
    ctx->pc = 0x2B5A2Cu;
label_2b5a2c:
    // 0x2b5a2c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2b5a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2b5a30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5A30u;
    {
        const bool branch_taken_0x2b5a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A30u;
        // 0x2b5a34: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a30) {
            ctx->pc = 0x2B5A44u;
            goto label_2b5a44;
        }
    }
    ctx->pc = 0x2B5A38u;
    // 0x2b5a38: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2b5a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2b5a3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b5a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b5a40: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2b5a40u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2b5a44:
    // 0x2b5a44: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B5A44u;
    SET_GPR_U32(ctx, 31, 0x2B5A4Cu);
    ctx->pc = 0x2B5A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A44u;
    // 0x2b5a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B5A44u, 0x2B5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A4Cu;
label_2b5a4c:
    // 0x2b5a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a50: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B5A50u;
    SET_GPR_U32(ctx, 31, 0x2B5A58u);
    ctx->pc = 0x2B5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A50u;
    // 0x2b5a54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B5A50u, 0x2B5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A58u;
label_2b5a58:
    // 0x2b5a58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5A58u;
    {
        const bool branch_taken_0x2b5a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A58u;
        // 0x2b5a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a58) {
            ctx->pc = 0x2B5A78u;
            goto label_2b5a78;
        }
    }
    ctx->pc = 0x2B5A60u;
label_2b5a60:
    // 0x2b5a60: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B5A60u;
    SET_GPR_U32(ctx, 31, 0x2B5A68u);
    ctx->pc = 0x2B5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A60u;
    // 0x2b5a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B5A60u, 0x2B5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A68u;
label_2b5a68:
    // 0x2b5a68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a6c: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B5A6Cu;
    SET_GPR_U32(ctx, 31, 0x2B5A74u);
    ctx->pc = 0x2B5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A6Cu;
    // 0x2b5a70: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B5A6Cu, 0x2B5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A74u;
label_2b5a74:
    // 0x2b5a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a78:
    // 0x2b5a78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b5a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5a7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b5a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5a80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b5a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5a84: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b5a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5a88: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b5a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A90u;
        // 0x2b5a94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5A98u;
}
