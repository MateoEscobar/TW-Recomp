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

// Function: sub_00368550
// Address: 0x368550 - 0x368670
void sub_00368550_0x368550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368550_0x368550");
#endif

    switch (ctx->pc) {
        case 0x368580u: goto label_368580;
        case 0x368588u: goto label_368588;
        case 0x36859cu: goto label_36859c;
        case 0x3685a4u: goto label_3685a4;
        case 0x3685b0u: goto label_3685b0;
        case 0x3685c8u: goto label_3685c8;
        case 0x3685d0u: goto label_3685d0;
        case 0x3685f0u: goto label_3685f0;
        case 0x3685f8u: goto label_3685f8;
        case 0x36860cu: goto label_36860c;
        case 0x368624u: goto label_368624;
        case 0x368638u: goto label_368638;
        default: break;
    }

    ctx->pc = 0x368550u;

    // 0x368550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x368550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x368554: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x368554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368558: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x368558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36855c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x368560: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x368564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368568: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x368568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36856c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x368570: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x368570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x368574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368578: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368578u;
    SET_GPR_U32(ctx, 31, 0x368580u);
    ctx->pc = 0x36857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368578u;
    // 0x36857c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368578u, 0x368580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368580u;
label_368580:
    // 0x368580: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368580u;
    SET_GPR_U32(ctx, 31, 0x368588u);
    ctx->pc = 0x368584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368580u;
    // 0x368584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368580u, 0x368588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368588u;
label_368588:
    // 0x368588: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36858c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368590: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x368590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368594: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368594u;
    SET_GPR_U32(ctx, 31, 0x36859Cu);
    ctx->pc = 0x368598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368594u;
    // 0x368598: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368594u, 0x36859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36859Cu;
label_36859c:
    // 0x36859c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36859Cu;
    SET_GPR_U32(ctx, 31, 0x3685A4u);
    ctx->pc = 0x3685A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36859Cu;
    // 0x3685a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36859Cu, 0x3685A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685A4u;
label_3685a4:
    // 0x3685a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3685a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3685a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3685a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685ac: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3685acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3685b0:
    // 0x3685b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3685b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3685b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3685b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3685b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3685bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3685bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685c0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3685C0u;
    SET_GPR_U32(ctx, 31, 0x3685C8u);
    ctx->pc = 0x3685C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685C0u;
    // 0x3685c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3685C0u, 0x3685C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685C8u;
label_3685c8:
    // 0x3685c8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3685C8u;
    SET_GPR_U32(ctx, 31, 0x3685D0u);
    ctx->pc = 0x3685CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685C8u;
    // 0x3685cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3685C8u, 0x3685D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685D0u;
label_3685d0:
    // 0x3685d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3685d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3685d4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3685d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3685d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3685D8u;
    {
        const bool branch_taken_0x3685d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685D8u;
        // 0x3685dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3685d8) {
            ctx->pc = 0x3685B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3685b0;
        }
    }
    ctx->pc = 0x3685E0u;
    // 0x3685e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3685e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3685e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3685e8: 0xc063756  jal         func_18DD58
    ctx->pc = 0x3685E8u;
    SET_GPR_U32(ctx, 31, 0x3685F0u);
    ctx->pc = 0x3685ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685E8u;
    // 0x3685ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD58u, 0x3685E8u, 0x3685F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685F0u;
label_3685f0:
    // 0x3685f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3685f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685f4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3685f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3685f8:
    // 0x3685f8: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x3685f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3685fc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3685fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x368600: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x368600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368604: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x368604u;
    SET_GPR_U32(ctx, 31, 0x36860Cu);
    ctx->pc = 0x368608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368604u;
    // 0x368608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x368604u, 0x36860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36860Cu;
label_36860c:
    // 0x36860c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36860Cu;
    {
        const bool branch_taken_0x36860c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x368610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36860Cu;
        // 0x368610: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36860c) {
            ctx->pc = 0x368628u;
            goto label_368628;
        }
    }
    ctx->pc = 0x368614u;
    // 0x368614: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x368614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x368618: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x368618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36861c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36861Cu;
    SET_GPR_U32(ctx, 31, 0x368624u);
    ctx->pc = 0x368620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36861Cu;
    // 0x368620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36861Cu, 0x368624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368624u;
label_368624:
    // 0x368624: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_368628:
    // 0x368628: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36862c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368630: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368630u;
    SET_GPR_U32(ctx, 31, 0x368638u);
    ctx->pc = 0x368634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368630u;
    // 0x368634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368630u, 0x368638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368638u;
label_368638:
    // 0x368638: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36863c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x36863cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368640: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x368640u;
    {
        const bool branch_taken_0x368640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368640u;
        // 0x368644: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368640) {
            ctx->pc = 0x3685F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3685f8;
        }
    }
    ctx->pc = 0x368648u;
    // 0x368648: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x368648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36864c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36864cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368650: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x368650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368654: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x368654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368658: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x368658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36865c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36865cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368660: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x368660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368664: 0x3e00008  jr          $ra
    ctx->pc = 0x368664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368664u;
        // 0x368668: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36866Cu;
    // 0x36866c: 0x0  nop
    ctx->pc = 0x36866cu;
    // NOP
    ctx->pc = 0x368670u;
}
