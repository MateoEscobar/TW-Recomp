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

// Function: sub_001575B8
// Address: 0x1575b8 - 0x157860
void sub_001575B8_0x1575b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001575B8_0x1575b8");
#endif

    switch (ctx->pc) {
        case 0x157618u: goto label_157618;
        case 0x157638u: goto label_157638;
        case 0x157644u: goto label_157644;
        case 0x157660u: goto label_157660;
        case 0x157680u: goto label_157680;
        case 0x157694u: goto label_157694;
        case 0x1576c0u: goto label_1576c0;
        case 0x1576d0u: goto label_1576d0;
        case 0x157710u: goto label_157710;
        case 0x157758u: goto label_157758;
        case 0x15776cu: goto label_15776c;
        case 0x157794u: goto label_157794;
        case 0x1577b0u: goto label_1577b0;
        case 0x1577c8u: goto label_1577c8;
        case 0x1577f8u: goto label_1577f8;
        default: break;
    }

    ctx->pc = 0x1575b8u;

    // 0x1575b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1575bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1575bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1575c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1575c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1575c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1575c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1575c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1575c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1575cc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1575ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1575d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1575d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1575d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1575d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1575d8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1575d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1575dc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1575dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1575e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1575e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1575e4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1575e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1575e8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1575E8u;
    {
        const bool branch_taken_0x1575e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575E8u;
        // 0x1575ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575e8) {
            ctx->pc = 0x1576D0u;
            goto label_1576d0;
        }
    }
    ctx->pc = 0x1575F0u;
    // 0x1575f0: 0x1464003f  bne         $v1, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1575F0u;
    {
        const bool branch_taken_0x1575f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1575F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575F0u;
        // 0x1575f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575f0) {
            ctx->pc = 0x1576F0u;
            goto label_1576f0;
        }
    }
    ctx->pc = 0x1575F8u;
    // 0x1575f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1575f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1575fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1575fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157600: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x157600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x157604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x157604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157608: 0x84730224  lh          $s3, 0x224($v1)
    ctx->pc = 0x157608u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x15760c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15760Cu;
    {
        const bool branch_taken_0x15760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15760Cu;
        // 0x157610: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15760c) {
            ctx->pc = 0x15761Cu;
            goto label_15761c;
        }
    }
    ctx->pc = 0x157614u;
    // 0x157614: 0x0  nop
    ctx->pc = 0x157614u;
    // NOP
label_157618:
    // 0x157618: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x157618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15761c:
    // 0x15761c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x15761cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x157620: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157620u;
    {
        const bool branch_taken_0x157620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157620u;
        // 0x157624: 0x8e02489c  lw          $v0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157620) {
            ctx->pc = 0x157650u;
            goto label_157650;
        }
    }
    ctx->pc = 0x157628u;
    // 0x157628: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15762c: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x15762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x157630: 0xc0e409a  jal         func_390268
    ctx->pc = 0x157630u;
    SET_GPR_U32(ctx, 31, 0x157638u);
    ctx->pc = 0x157634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157630u;
    // 0x157634: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x157630u, 0x157638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157638u;
label_157638:
    // 0x157638: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x157638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15763c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x15763Cu;
    SET_GPR_U32(ctx, 31, 0x157644u);
    ctx->pc = 0x157640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15763Cu;
    // 0x157640: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x15763Cu, 0x157644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157644u;
label_157644:
    // 0x157644: 0x80430019  lb          $v1, 0x19($v0)
    ctx->pc = 0x157644u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x157648: 0x463fff3  bgezl       $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x157648u;
    {
        const bool branch_taken_0x157648 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x157648) {
            ctx->pc = 0x15764Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157648u;
            // 0x15764c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157618;
        }
    }
    ctx->pc = 0x157650u;
label_157650:
    // 0x157650: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x157650u;
    {
        const bool branch_taken_0x157650 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x157650) {
            ctx->pc = 0x157654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157650u;
            // 0x157654: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157670u;
            goto label_157670;
        }
    }
    ctx->pc = 0x157658u;
    // 0x157658: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x157658u;
    SET_GPR_U32(ctx, 31, 0x157660u);
    ctx->pc = 0x15765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157658u;
    // 0x15765c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x157658u, 0x157660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157660u;
label_157660:
    // 0x157660: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x157660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x157664: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x157664u;
    {
        const bool branch_taken_0x157664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157664u;
        // 0x157668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157664) {
            ctx->pc = 0x157834u;
            goto label_157834;
        }
    }
    ctx->pc = 0x15766Cu;
    // 0x15766c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15766cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_157670:
    // 0x157670: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x157670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157674: 0x2450d810  addiu       $s0, $v0, -0x27F0
    ctx->pc = 0x157674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x157678: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x157678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15767c: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_157680:
    // 0x157680: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x157684: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x157684u;
    {
        const bool branch_taken_0x157684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157684u;
        // 0x157688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157684) {
            ctx->pc = 0x1576D8u;
            goto label_1576d8;
        }
    }
    ctx->pc = 0x15768Cu;
    // 0x15768c: 0xc0512ea  jal         func_144BA8
    ctx->pc = 0x15768Cu;
    SET_GPR_U32(ctx, 31, 0x157694u);
    ctx->pc = 0x157690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15768Cu;
    // 0x157690: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BA8u, 0x15768Cu, 0x157694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157694u;
label_157694:
    // 0x157694: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x157694u;
    {
        const bool branch_taken_0x157694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157694) {
            ctx->pc = 0x157698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157694u;
            // 0x157698: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1576DCu;
            goto label_1576dc;
        }
    }
    ctx->pc = 0x15769Cu;
    // 0x15769c: 0x86020042  lh          $v0, 0x42($s0)
    ctx->pc = 0x15769cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x1576a0: 0x5453000e  bnel        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1576A0u;
    {
        const bool branch_taken_0x1576a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1576a0) {
            ctx->pc = 0x1576A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1576A0u;
            // 0x1576a4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1576DCu;
            goto label_1576dc;
        }
    }
    ctx->pc = 0x1576A8u;
    // 0x1576a8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1576A8u;
    {
        const bool branch_taken_0x1576a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576A8u;
        // 0x1576ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576a8) {
            ctx->pc = 0x1576C4u;
            goto label_1576c4;
        }
    }
    ctx->pc = 0x1576B0u;
    // 0x1576b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1576b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1576b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1576b8: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x1576B8u;
    SET_GPR_U32(ctx, 31, 0x1576C0u);
    ctx->pc = 0x1576BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576B8u;
    // 0x1576bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AA78u, 0x1576B8u, 0x1576C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576C0u;
label_1576c0:
    // 0x1576c0: 0x824501b0  lb          $a1, 0x1B0($s2)
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_1576c4:
    // 0x1576c4: 0x26840840  addiu       $a0, $s4, 0x840
    ctx->pc = 0x1576c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
    // 0x1576c8: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1576C8u;
    SET_GPR_U32(ctx, 31, 0x1576D0u);
    ctx->pc = 0x1576CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576C8u;
    // 0x1576cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1576C8u, 0x1576D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1576D0u;
label_1576d0:
    // 0x1576d0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1576D0u;
    {
        const bool branch_taken_0x1576d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576D0u;
        // 0x1576d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576d0) {
            ctx->pc = 0x157834u;
            goto label_157834;
        }
    }
    ctx->pc = 0x1576D8u;
label_1576d8:
    // 0x1576d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1576d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1576dc:
    // 0x1576dc: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1576dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1576e0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1576E0u;
    {
        const bool branch_taken_0x1576e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576E0u;
        // 0x1576e4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576e0) {
            ctx->pc = 0x157680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157680;
        }
    }
    ctx->pc = 0x1576E8u;
    // 0x1576e8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1576E8u;
    {
        const bool branch_taken_0x1576e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576E8u;
        // 0x1576ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576e8) {
            ctx->pc = 0x157834u;
            goto label_157834;
        }
    }
    ctx->pc = 0x1576F0u;
label_1576f0:
    // 0x1576f0: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1576F0u;
    {
        const bool branch_taken_0x1576f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1576F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576F0u;
        // 0x1576f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576f0) {
            ctx->pc = 0x15781Cu;
            goto label_15781c;
        }
    }
    ctx->pc = 0x1576F8u;
    // 0x1576f8: 0x96820100  lhu         $v0, 0x100($s4)
    ctx->pc = 0x1576f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x1576fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1576FCu;
    {
        const bool branch_taken_0x1576fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576FCu;
        // 0x157700: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576fc) {
            ctx->pc = 0x157728u;
            goto label_157728;
        }
    }
    ctx->pc = 0x157704u;
    // 0x157704: 0x26830100  addiu       $v1, $s4, 0x100
    ctx->pc = 0x157704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x157708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x157708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15770c: 0x0  nop
    ctx->pc = 0x15770cu;
    // NOP
label_157710:
    // 0x157710: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x157710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x157714: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157714u;
    {
        const bool branch_taken_0x157714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157714u;
        // 0x157718: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157714) {
            ctx->pc = 0x157728u;
            goto label_157728;
        }
    }
    ctx->pc = 0x15771Cu;
    // 0x15771c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x15771cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157720: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157720u;
    {
        const bool branch_taken_0x157720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157720) {
            ctx->pc = 0x157724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157720u;
            // 0x157724: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157710;
        }
    }
    ctx->pc = 0x157728u;
label_157728:
    // 0x157728: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15772c: 0x1222ffe8  beq         $s1, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15772Cu;
    {
        const bool branch_taken_0x15772c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x157730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15772Cu;
        // 0x157730: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15772c) {
            ctx->pc = 0x1576D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1576d0;
        }
    }
    ctx->pc = 0x157734u;
    // 0x157734: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x157734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x157738: 0x24550228  addiu       $s5, $v0, 0x228
    ctx->pc = 0x157738u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
    // 0x15773c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x15773cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x157740: 0x26820100  addiu       $v0, $s4, 0x100
    ctx->pc = 0x157740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x157744: 0x2490d810  addiu       $s0, $a0, -0x27F0
    ctx->pc = 0x157744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x157748: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x157748u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15774c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15774cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157750: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x157750u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x157754: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x157754u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_157758:
    // 0x157758: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x157758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x15775c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15775Cu;
    {
        const bool branch_taken_0x15775c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15775Cu;
        // 0x157760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15775c) {
            ctx->pc = 0x1577D0u;
            goto label_1577d0;
        }
    }
    ctx->pc = 0x157764u;
    // 0x157764: 0xc0512ea  jal         func_144BA8
    ctx->pc = 0x157764u;
    SET_GPR_U32(ctx, 31, 0x15776Cu);
    ctx->pc = 0x157768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157764u;
    // 0x157768: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BA8u, 0x157764u, 0x15776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15776Cu;
label_15776c:
    // 0x15776c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x15776Cu;
    {
        const bool branch_taken_0x15776c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15776c) {
            ctx->pc = 0x157770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15776Cu;
            // 0x157770: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1577D4u;
            goto label_1577d4;
        }
    }
    ctx->pc = 0x157774u;
    // 0x157774: 0x86020044  lh          $v0, 0x44($s0)
    ctx->pc = 0x157774u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x157778: 0x54510016  bnel        $v0, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x157778u;
    {
        const bool branch_taken_0x157778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x157778) {
            ctx->pc = 0x15777Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157778u;
            // 0x15777c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1577D4u;
            goto label_1577d4;
        }
    }
    ctx->pc = 0x157780u;
    // 0x157780: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x157780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x157784: 0x26900100  addiu       $s0, $s4, 0x100
    ctx->pc = 0x157784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x157788: 0x119040  sll         $s2, $s1, 1
    ctx->pc = 0x157788u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x15778c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x15778Cu;
    SET_GPR_U32(ctx, 31, 0x157794u);
    ctx->pc = 0x157790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15778Cu;
    // 0x157790: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x15778Cu, 0x157794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157794u;
label_157794:
    // 0x157794: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157794u;
    {
        const bool branch_taken_0x157794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157794u;
        // 0x157798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157794) {
            ctx->pc = 0x1577B0u;
            goto label_1577b0;
        }
    }
    ctx->pc = 0x15779Cu;
    // 0x15779c: 0x96c60000  lhu         $a2, 0x0($s6)
    ctx->pc = 0x15779cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1577a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1577a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577a4: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x1577a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x1577a8: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x1577A8u;
    SET_GPR_U32(ctx, 31, 0x1577B0u);
    ctx->pc = 0x1577ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577A8u;
    // 0x1577ac: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AA78u, 0x1577A8u, 0x1577B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577B0u;
label_1577b0:
    // 0x1577b0: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1577b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1577b4: 0x26e40840  addiu       $a0, $s7, 0x840
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2112));
    // 0x1577b8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1577b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1577bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1577bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1577c0: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1577C0u;
    SET_GPR_U32(ctx, 31, 0x1577C8u);
    ctx->pc = 0x1577C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1577C0u;
    // 0x1577c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1577C0u, 0x1577C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577C8u;
label_1577c8:
    // 0x1577c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1577C8u;
    {
        const bool branch_taken_0x1577c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577C8u;
        // 0x1577cc: 0x96820100  lhu         $v0, 0x100($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577c8) {
            ctx->pc = 0x1577E4u;
            goto label_1577e4;
        }
    }
    ctx->pc = 0x1577D0u;
label_1577d0:
    // 0x1577d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1577d4:
    // 0x1577d4: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1577d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1577d8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1577D8u;
    {
        const bool branch_taken_0x1577d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577D8u;
        // 0x1577dc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577d8) {
            ctx->pc = 0x157758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157758;
        }
    }
    ctx->pc = 0x1577E0u;
    // 0x1577e0: 0x96820100  lhu         $v0, 0x100($s4)
    ctx->pc = 0x1577e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 256)));
label_1577e4:
    // 0x1577e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1577E4u;
    {
        const bool branch_taken_0x1577e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1577E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577E4u;
        // 0x1577e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577e4) {
            ctx->pc = 0x157810u;
            goto label_157810;
        }
    }
    ctx->pc = 0x1577ECu;
    // 0x1577ec: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x1577ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x1577f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1577f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1577f4: 0x0  nop
    ctx->pc = 0x1577f4u;
    // NOP
label_1577f8:
    // 0x1577f8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1577f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1577fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1577FCu;
    {
        const bool branch_taken_0x1577fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577FCu;
        // 0x157800: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577fc) {
            ctx->pc = 0x157810u;
            goto label_157810;
        }
    }
    ctx->pc = 0x157804u;
    // 0x157804: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x157804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157808: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157808u;
    {
        const bool branch_taken_0x157808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157808) {
            ctx->pc = 0x15780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157808u;
            // 0x15780c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1577F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1577f8;
        }
    }
    ctx->pc = 0x157810u;
label_157810:
    // 0x157810: 0x3a220002  xori        $v0, $s1, 0x2
    ctx->pc = 0x157810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
    // 0x157814: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157814u;
    {
        const bool branch_taken_0x157814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157814u;
        // 0x157818: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157814) {
            ctx->pc = 0x157834u;
            goto label_157834;
        }
    }
    ctx->pc = 0x15781Cu;
label_15781c:
    // 0x15781c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15781Cu;
    {
        const bool branch_taken_0x15781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x157820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15781Cu;
        // 0x157820: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15781c) {
            ctx->pc = 0x15782Cu;
            goto label_15782c;
        }
    }
    ctx->pc = 0x157824u;
    // 0x157824: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157824u;
    {
        const bool branch_taken_0x157824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157824u;
        // 0x157828: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157824) {
            ctx->pc = 0x157834u;
            goto label_157834;
        }
    }
    ctx->pc = 0x15782Cu;
label_15782c:
    // 0x15782c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15782cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x157830: 0x8c62bcf4  lw          $v0, -0x430C($v1)
    ctx->pc = 0x157830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50BCF4u));
label_157834:
    // 0x157834: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x157834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157838: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x157838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15783c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x15783cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157840: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x157840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157844: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157844u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157848: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x157848u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15784c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x15784cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157850: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x157850u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157858: 0x3e00008  jr          $ra
    ctx->pc = 0x157858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157858u;
        // 0x15785c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157860u;
}
