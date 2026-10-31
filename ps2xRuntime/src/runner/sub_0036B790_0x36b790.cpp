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

// Function: sub_0036B790
// Address: 0x36b790 - 0x36b8a8
void sub_0036B790_0x36b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B790_0x36b790");
#endif

    switch (ctx->pc) {
        case 0x36b7bcu: goto label_36b7bc;
        case 0x36b7c4u: goto label_36b7c4;
        case 0x36b7d8u: goto label_36b7d8;
        case 0x36b7e8u: goto label_36b7e8;
        case 0x36b800u: goto label_36b800;
        case 0x36b808u: goto label_36b808;
        case 0x36b828u: goto label_36b828;
        case 0x36b830u: goto label_36b830;
        case 0x36b844u: goto label_36b844;
        case 0x36b85cu: goto label_36b85c;
        case 0x36b870u: goto label_36b870;
        default: break;
    }

    ctx->pc = 0x36b790u;

    // 0x36b790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36b794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b798: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x36b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x36b79c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36b79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7a0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x36b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x36b7a4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x36b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x36b7a8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x36b7ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36b7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36b7b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36b7b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B7B4u;
    SET_GPR_U32(ctx, 31, 0x36B7BCu);
    ctx->pc = 0x36B7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B7B4u;
    // 0x36b7b8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B7B4u, 0x36B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B7BCu;
label_36b7bc:
    // 0x36b7bc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36B7BCu;
    SET_GPR_U32(ctx, 31, 0x36B7C4u);
    ctx->pc = 0x36B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B7BCu;
    // 0x36b7c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36B7BCu, 0x36B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B7C4u;
label_36b7c4:
    // 0x36b7c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36b7c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b7d0: 0xc102488  jal         func_409220
    ctx->pc = 0x36B7D0u;
    SET_GPR_U32(ctx, 31, 0x36B7D8u);
    ctx->pc = 0x36B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B7D0u;
    // 0x36b7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B7D0u, 0x36B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B7D8u;
label_36b7d8:
    // 0x36b7d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36b7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36b7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7e0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36b7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7e4: 0x0  nop
    ctx->pc = 0x36b7e4u;
    // NOP
label_36b7e8:
    // 0x36b7e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36b7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36b7ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36b7f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7f8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36B7F8u;
    SET_GPR_U32(ctx, 31, 0x36B800u);
    ctx->pc = 0x36B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B7F8u;
    // 0x36b7fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36B7F8u, 0x36B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B800u;
label_36b800:
    // 0x36b800: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B800u;
    SET_GPR_U32(ctx, 31, 0x36B808u);
    ctx->pc = 0x36B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B800u;
    // 0x36b804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B800u, 0x36B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B808u;
label_36b808:
    // 0x36b808: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36b80c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x36b80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x36b810: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36B810u;
    {
        const bool branch_taken_0x36b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B810u;
        // 0x36b814: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b810) {
            ctx->pc = 0x36B7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b7e8;
        }
    }
    ctx->pc = 0x36B818u;
    // 0x36b818: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36b818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b81c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36b81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b820: 0xc07b260  jal         func_1EC980
    ctx->pc = 0x36B820u;
    SET_GPR_U32(ctx, 31, 0x36B828u);
    ctx->pc = 0x36B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B820u;
    // 0x36b824: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC980u, 0x36B820u, 0x36B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B828u;
label_36b828:
    // 0x36b828: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36b828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b82c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36b830:
    // 0x36b830: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x36b830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36b834: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36b834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36b838: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x36b838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b83c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36B83Cu;
    SET_GPR_U32(ctx, 31, 0x36B844u);
    ctx->pc = 0x36B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B83Cu;
    // 0x36b840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36B83Cu, 0x36B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B844u;
label_36b844:
    // 0x36b844: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36B844u;
    {
        const bool branch_taken_0x36b844 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B844u;
        // 0x36b848: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b844) {
            ctx->pc = 0x36B860u;
            goto label_36b860;
        }
    }
    ctx->pc = 0x36B84Cu;
    // 0x36b84c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36b84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36b850: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36b850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36b854: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36B854u;
    SET_GPR_U32(ctx, 31, 0x36B85Cu);
    ctx->pc = 0x36B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B854u;
    // 0x36b858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36B854u, 0x36B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B85Cu;
label_36b85c:
    // 0x36b85c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36b85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b860:
    // 0x36b860: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b868: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36B868u;
    SET_GPR_U32(ctx, 31, 0x36B870u);
    ctx->pc = 0x36B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B868u;
    // 0x36b86c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36B868u, 0x36B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B870u;
label_36b870:
    // 0x36b870: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b874: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x36b874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x36b878: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x36B878u;
    {
        const bool branch_taken_0x36b878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B878u;
        // 0x36b87c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b878) {
            ctx->pc = 0x36B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b830;
        }
    }
    ctx->pc = 0x36B880u;
    // 0x36b880: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x36b880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36b884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b888: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x36b888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b88c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x36b88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b890: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36b890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36b894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b898: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36b898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b89c: 0x3e00008  jr          $ra
    ctx->pc = 0x36B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B89Cu;
        // 0x36b8a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B8A4u;
    // 0x36b8a4: 0x0  nop
    ctx->pc = 0x36b8a4u;
    // NOP
    ctx->pc = 0x36b8a8u;
}
