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

// Function: sub_003715F8
// Address: 0x3715f8 - 0x3716f8
void sub_003715F8_0x3715f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003715F8_0x3715f8");
#endif

    switch (ctx->pc) {
        case 0x371620u: goto label_371620;
        case 0x371630u: goto label_371630;
        case 0x371648u: goto label_371648;
        case 0x371650u: goto label_371650;
        case 0x37166cu: goto label_37166c;
        case 0x371678u: goto label_371678;
        case 0x371690u: goto label_371690;
        case 0x37169cu: goto label_37169c;
        case 0x3716a8u: goto label_3716a8;
        case 0x3716b8u: goto label_3716b8;
        case 0x3716ccu: goto label_3716cc;
        default: break;
    }

    ctx->pc = 0x3715f8u;

    // 0x3715f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3715f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3715fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3715fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371600: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x371600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x371604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371608: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x371608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x37160c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x371610: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x371610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x371614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x371614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x371618: 0xc102488  jal         func_409220
    ctx->pc = 0x371618u;
    SET_GPR_U32(ctx, 31, 0x371620u);
    ctx->pc = 0x37161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371618u;
    // 0x37161c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371618u, 0x371620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371620u;
label_371620:
    // 0x371620: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x371620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371624: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x371624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371628: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x371628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37162c: 0x0  nop
    ctx->pc = 0x37162cu;
    // NOP
label_371630:
    // 0x371630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371638: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x371638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37163c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37163cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371640: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x371640u;
    SET_GPR_U32(ctx, 31, 0x371648u);
    ctx->pc = 0x371644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371640u;
    // 0x371644: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x371640u, 0x371648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371648u;
label_371648:
    // 0x371648: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x371648u;
    SET_GPR_U32(ctx, 31, 0x371650u);
    ctx->pc = 0x37164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371648u;
    // 0x37164c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x371648u, 0x371650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371650u;
label_371650:
    // 0x371650: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x371650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x371654: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x371654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x371658: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x371658u;
    {
        const bool branch_taken_0x371658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371658u;
        // 0x37165c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371658) {
            ctx->pc = 0x371630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371630;
        }
    }
    ctx->pc = 0x371660u;
    // 0x371660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371664: 0xc044da0  jal         func_113680
    ctx->pc = 0x371664u;
    SET_GPR_U32(ctx, 31, 0x37166Cu);
    ctx->pc = 0x371668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371664u;
    // 0x371668: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113680u, 0x371664u, 0x37166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37166Cu;
label_37166c:
    // 0x37166c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37166cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371670: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x371670u;
    SET_GPR_U32(ctx, 31, 0x371678u);
    ctx->pc = 0x371674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371670u;
    // 0x371674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x371670u, 0x371678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371678u;
label_371678:
    // 0x371678: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x371678u;
    {
        const bool branch_taken_0x371678 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371678u;
        // 0x37167c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371678) {
            ctx->pc = 0x371694u;
            goto label_371694;
        }
    }
    ctx->pc = 0x371680u;
    // 0x371680: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x371680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x371684: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x371684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x371688: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x371688u;
    SET_GPR_U32(ctx, 31, 0x371690u);
    ctx->pc = 0x37168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371688u;
    // 0x37168c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x371688u, 0x371690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371690u;
label_371690:
    // 0x371690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x371690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_371694:
    // 0x371694: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x371694u;
    SET_GPR_U32(ctx, 31, 0x37169Cu);
    ctx->pc = 0x371698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371694u;
    // 0x371698: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x371694u, 0x37169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37169Cu;
label_37169c:
    // 0x37169c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37169cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3716a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3716a4: 0x0  nop
    ctx->pc = 0x3716a4u;
    // NOP
label_3716a8:
    // 0x3716a8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3716a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3716ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3716acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3716b0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3716B0u;
    SET_GPR_U32(ctx, 31, 0x3716B8u);
    ctx->pc = 0x3716B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3716B0u;
    // 0x3716b4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3716B0u, 0x3716B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716B8u;
label_3716b8:
    // 0x3716b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3716b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3716bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3716c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3716c4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3716C4u;
    SET_GPR_U32(ctx, 31, 0x3716CCu);
    ctx->pc = 0x3716C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3716C4u;
    // 0x3716c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3716C4u, 0x3716CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716CCu;
label_3716cc:
    // 0x3716cc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3716ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3716d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3716D0u;
    {
        const bool branch_taken_0x3716d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3716D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3716D0u;
        // 0x3716d4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3716d0) {
            ctx->pc = 0x3716A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3716a8;
        }
    }
    ctx->pc = 0x3716D8u;
    // 0x3716d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3716d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3716dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3716dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3716e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3716e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3716e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3716e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3716e8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3716e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3716ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3716ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3716f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3716F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3716F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3716F0u;
        // 0x3716f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3716F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3716F8u;
}
