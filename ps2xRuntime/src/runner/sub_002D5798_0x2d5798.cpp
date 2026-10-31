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

// Function: sub_002D5798
// Address: 0x2d5798 - 0x2d58b8
void sub_002D5798_0x2d5798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5798_0x2d5798");
#endif

    switch (ctx->pc) {
        case 0x2d57bcu: goto label_2d57bc;
        case 0x2d57f0u: goto label_2d57f0;
        case 0x2d57fcu: goto label_2d57fc;
        case 0x2d5810u: goto label_2d5810;
        case 0x2d5820u: goto label_2d5820;
        case 0x2d5834u: goto label_2d5834;
        case 0x2d5848u: goto label_2d5848;
        case 0x2d586cu: goto label_2d586c;
        case 0x2d589cu: goto label_2d589c;
        default: break;
    }

    ctx->pc = 0x2d5798u;

    // 0x2d5798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d579c: 0x24054e20  addiu       $a1, $zero, 0x4E20
    ctx->pc = 0x2d579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x2d57a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d57a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d57a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d57a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d57a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d57a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d57ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d57acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d57b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d57b4: 0xc0a484c  jal         func_292130
    ctx->pc = 0x2D57B4u;
    SET_GPR_U32(ctx, 31, 0x2D57BCu);
    ctx->pc = 0x2D57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D57B4u;
    // 0x2d57b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292130u, 0x2D57B4u, 0x2D57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57BCu;
label_2d57bc:
    // 0x2d57bc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d57bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d57c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d57c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d57c8: 0x54430035  bnel        $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2D57C8u;
    {
        const bool branch_taken_0x2d57c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d57c8) {
            ctx->pc = 0x2D57CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D57C8u;
            // 0x2d57cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D58A0u;
            goto label_2d58a0;
        }
    }
    ctx->pc = 0x2D57D0u;
    // 0x2d57d0: 0x8e03026c  lw          $v1, 0x26C($s0)
    ctx->pc = 0x2d57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x2d57d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d57d8: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D57D8u;
    {
        const bool branch_taken_0x2d57d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d57d8) {
            ctx->pc = 0x2D57DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D57D8u;
            // 0x2d57dc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D58A0u;
            goto label_2d58a0;
        }
    }
    ctx->pc = 0x2D57E0u;
    // 0x2d57e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d57e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d57e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57e8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D57E8u;
    SET_GPR_U32(ctx, 31, 0x2D57F0u);
    ctx->pc = 0x2D57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D57E8u;
    // 0x2d57ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D57E8u, 0x2D57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57F0u;
label_2d57f0:
    // 0x2d57f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d57f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57f4: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2D57F4u;
    SET_GPR_U32(ctx, 31, 0x2D57FCu);
    ctx->pc = 0x2D57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D57F4u;
    // 0x2d57f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2D57F4u, 0x2D57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57FCu;
label_2d57fc:
    // 0x2d57fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d57fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5800: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D5800u;
    {
        const bool branch_taken_0x2d5800 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5800u;
        // 0x2d5804: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5800) {
            ctx->pc = 0x2D58A0u;
            goto label_2d58a0;
        }
    }
    ctx->pc = 0x2D5808u;
    // 0x2d5808: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D5808u;
    SET_GPR_U32(ctx, 31, 0x2D5810u);
    ctx->pc = 0x2D580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5808u;
    // 0x2d580c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D5808u, 0x2D5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5810u;
label_2d5810:
    // 0x2d5810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5814: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d5814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5818: 0xc0a408c  jal         func_290230
    ctx->pc = 0x2D5818u;
    SET_GPR_U32(ctx, 31, 0x2D5820u);
    ctx->pc = 0x2D581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5818u;
    // 0x2d581c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2D5818u, 0x2D5820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5820u;
label_2d5820:
    // 0x2d5820: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D5820u;
    {
        const bool branch_taken_0x2d5820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5820) {
            ctx->pc = 0x2D5824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5820u;
            // 0x2d5824: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D58A0u;
            goto label_2d58a0;
        }
    }
    ctx->pc = 0x2D5828u;
    // 0x2d5828: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d5828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d582c: 0xc0a404e  jal         func_290138
    ctx->pc = 0x2D582Cu;
    SET_GPR_U32(ctx, 31, 0x2D5834u);
    ctx->pc = 0x2D5830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D582Cu;
    // 0x2d5830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2D582Cu, 0x2D5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5834u;
label_2d5834:
    // 0x2d5834: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5834u;
    {
        const bool branch_taken_0x2d5834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5834) {
            ctx->pc = 0x2D5838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5834u;
            // 0x2d5838: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D584Cu;
            goto label_2d584c;
        }
    }
    ctx->pc = 0x2D583Cu;
    // 0x2d583c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5840: 0xc0a40ca  jal         func_290328
    ctx->pc = 0x2D5840u;
    SET_GPR_U32(ctx, 31, 0x2D5848u);
    ctx->pc = 0x2D5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5840u;
    // 0x2d5844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290328u, 0x2D5840u, 0x2D5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5848u;
label_2d5848:
    // 0x2d5848: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d5848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d584c:
    // 0x2d584c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5850: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2d5850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2d5854: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5858: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2d5858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2d585c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2d585cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2d5860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d5860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5864: 0xc0a34ba  jal         func_28D2E8
    ctx->pc = 0x2D5864u;
    SET_GPR_U32(ctx, 31, 0x2D586Cu);
    ctx->pc = 0x2D5868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5864u;
    // 0x2d5868: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2D5864u, 0x2D586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D586Cu;
label_2d586c:
    // 0x2d586c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5870: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d5870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d5874: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d5874u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d5878: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2d5878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d587c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d587cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d5880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5884: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2d5884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2d5888: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d5888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d588c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d588cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5890: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d5890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5894: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2D5894u;
    SET_GPR_U32(ctx, 31, 0x2D589Cu);
    ctx->pc = 0x2D5898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5894u;
    // 0x2d5898: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D5894u, 0x2D589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D589Cu;
label_2d589c:
    // 0x2d589c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d589cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d58a0:
    // 0x2d58a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d58a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d58a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d58a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d58a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d58a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d58ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D58ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58ACu;
        // 0x2d58b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D58ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D58B4u;
    // 0x2d58b4: 0x0  nop
    ctx->pc = 0x2d58b4u;
    // NOP
    ctx->pc = 0x2d58b8u;
}
