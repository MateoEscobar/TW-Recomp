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

// Function: sub_0036B670
// Address: 0x36b670 - 0x36b790
void sub_0036B670_0x36b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B670_0x36b670");
#endif

    switch (ctx->pc) {
        case 0x36b6a0u: goto label_36b6a0;
        case 0x36b6a8u: goto label_36b6a8;
        case 0x36b6bcu: goto label_36b6bc;
        case 0x36b6c4u: goto label_36b6c4;
        case 0x36b6d0u: goto label_36b6d0;
        case 0x36b6e8u: goto label_36b6e8;
        case 0x36b6f0u: goto label_36b6f0;
        case 0x36b710u: goto label_36b710;
        case 0x36b718u: goto label_36b718;
        case 0x36b72cu: goto label_36b72c;
        case 0x36b744u: goto label_36b744;
        case 0x36b758u: goto label_36b758;
        default: break;
    }

    ctx->pc = 0x36b670u;

    // 0x36b670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x36b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x36b674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b678: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x36b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x36b67c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x36b67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x36b680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36b680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36b684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b688: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x36b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x36b68c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x36b68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x36b690: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36b690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x36b694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36b698: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B698u;
    SET_GPR_U32(ctx, 31, 0x36B6A0u);
    ctx->pc = 0x36B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B698u;
    // 0x36b69c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B698u, 0x36B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6A0u;
label_36b6a0:
    // 0x36b6a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B6A0u;
    SET_GPR_U32(ctx, 31, 0x36B6A8u);
    ctx->pc = 0x36B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B6A0u;
    // 0x36b6a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B6A0u, 0x36B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6A8u;
label_36b6a8:
    // 0x36b6a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b6b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B6B4u;
    SET_GPR_U32(ctx, 31, 0x36B6BCu);
    ctx->pc = 0x36B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B6B4u;
    // 0x36b6b8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B6B4u, 0x36B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6BCu;
label_36b6bc:
    // 0x36b6bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B6BCu;
    SET_GPR_U32(ctx, 31, 0x36B6C4u);
    ctx->pc = 0x36B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B6BCu;
    // 0x36b6c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B6BCu, 0x36B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6C4u;
label_36b6c4:
    // 0x36b6c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36b6c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36b6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6cc: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36b6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36b6d0:
    // 0x36b6d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36b6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36b6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36b6dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36b6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b6e0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36B6E0u;
    SET_GPR_U32(ctx, 31, 0x36B6E8u);
    ctx->pc = 0x36B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B6E0u;
    // 0x36b6e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36B6E0u, 0x36B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6E8u;
label_36b6e8:
    // 0x36b6e8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B6E8u;
    SET_GPR_U32(ctx, 31, 0x36B6F0u);
    ctx->pc = 0x36B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B6E8u;
    // 0x36b6ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B6E8u, 0x36B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B6F0u;
label_36b6f0:
    // 0x36b6f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36b6f4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x36b6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x36b6f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36B6F8u;
    {
        const bool branch_taken_0x36b6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B6F8u;
        // 0x36b6fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b6f8) {
            ctx->pc = 0x36B6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b6d0;
        }
    }
    ctx->pc = 0x36B700u;
    // 0x36b700: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36b700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b704: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36b704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b708: 0xc07aa8c  jal         func_1EAA30
    ctx->pc = 0x36B708u;
    SET_GPR_U32(ctx, 31, 0x36B710u);
    ctx->pc = 0x36B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B708u;
    // 0x36b70c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA30u, 0x36B708u, 0x36B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B710u;
label_36b710:
    // 0x36b710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36b710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b714: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36b714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36b718:
    // 0x36b718: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x36b718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36b71c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x36b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36b720: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x36b720u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b724: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36B724u;
    SET_GPR_U32(ctx, 31, 0x36B72Cu);
    ctx->pc = 0x36B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B724u;
    // 0x36b728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36B724u, 0x36B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B72Cu;
label_36b72c:
    // 0x36b72c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36B72Cu;
    {
        const bool branch_taken_0x36b72c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B72Cu;
        // 0x36b730: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b72c) {
            ctx->pc = 0x36B748u;
            goto label_36b748;
        }
    }
    ctx->pc = 0x36B734u;
    // 0x36b734: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36b734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36b738: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36b738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36b73c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36B73Cu;
    SET_GPR_U32(ctx, 31, 0x36B744u);
    ctx->pc = 0x36B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B73Cu;
    // 0x36b740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36B73Cu, 0x36B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B744u;
label_36b744:
    // 0x36b744: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36b744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36b748:
    // 0x36b748: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b74c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36b74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b750: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36B750u;
    SET_GPR_U32(ctx, 31, 0x36B758u);
    ctx->pc = 0x36B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B750u;
    // 0x36b754: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36B750u, 0x36B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B758u;
label_36b758:
    // 0x36b758: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b75c: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x36b75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x36b760: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x36B760u;
    {
        const bool branch_taken_0x36b760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B760u;
        // 0x36b764: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b760) {
            ctx->pc = 0x36B718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36b718;
        }
    }
    ctx->pc = 0x36B768u;
    // 0x36b768: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x36b768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36b76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b770: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x36b770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36b774: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x36b774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b778: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x36b778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b77c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36b77cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b780: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36b780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b784: 0x3e00008  jr          $ra
    ctx->pc = 0x36B784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B784u;
        // 0x36b788: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B78Cu;
    // 0x36b78c: 0x0  nop
    ctx->pc = 0x36b78cu;
    // NOP
    ctx->pc = 0x36b790u;
}
