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

// Function: sub_00364640
// Address: 0x364640 - 0x364708
void sub_00364640_0x364640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364640_0x364640");
#endif

    switch (ctx->pc) {
        case 0x364668u: goto label_364668;
        case 0x364670u: goto label_364670;
        case 0x36467cu: goto label_36467c;
        case 0x364694u: goto label_364694;
        case 0x3646a8u: goto label_3646a8;
        case 0x3646b0u: goto label_3646b0;
        case 0x3646c8u: goto label_3646c8;
        case 0x3646d0u: goto label_3646d0;
        case 0x3646e4u: goto label_3646e4;
        default: break;
    }

    ctx->pc = 0x364640u;

    // 0x364640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x364640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x364644: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364648: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x364648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36464c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36464cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364654: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x364654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x364658: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x364658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36465c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364660: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364660u;
    SET_GPR_U32(ctx, 31, 0x364668u);
    ctx->pc = 0x364664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364660u;
    // 0x364664: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364660u, 0x364668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364668u;
label_364668:
    // 0x364668: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364668u;
    SET_GPR_U32(ctx, 31, 0x364670u);
    ctx->pc = 0x36466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364668u;
    // 0x36466c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364668u, 0x364670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364670u;
label_364670:
    // 0x364670: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364674: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x364674u;
    SET_GPR_U32(ctx, 31, 0x36467Cu);
    ctx->pc = 0x364678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364674u;
    // 0x364678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x364674u, 0x36467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36467Cu;
label_36467c:
    // 0x36467c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x36467cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x364680: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x364680u;
    {
        const bool branch_taken_0x364680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364680u;
        // 0x364684: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364680) {
            ctx->pc = 0x364698u;
            goto label_364698;
        }
    }
    ctx->pc = 0x364688u;
    // 0x364688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36468c: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x36468Cu;
    SET_GPR_U32(ctx, 31, 0x364694u);
    ctx->pc = 0x364690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36468Cu;
    // 0x364690: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x36468Cu, 0x364694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364694u;
label_364694:
    // 0x364694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x364694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_364698:
    // 0x364698: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x364698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36469c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36469cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3646a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3646A0u;
    SET_GPR_U32(ctx, 31, 0x3646A8u);
    ctx->pc = 0x3646A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646A0u;
    // 0x3646a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3646A0u, 0x3646A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646A8u;
label_3646a8:
    // 0x3646a8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3646A8u;
    SET_GPR_U32(ctx, 31, 0x3646B0u);
    ctx->pc = 0x3646ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646A8u;
    // 0x3646ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3646A8u, 0x3646B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646B0u;
label_3646b0:
    // 0x3646b0: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x3646b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3646b4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3646b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3646b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3646b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3646bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3646bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3646c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3646C0u;
    SET_GPR_U32(ctx, 31, 0x3646C8u);
    ctx->pc = 0x3646C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646C0u;
    // 0x3646c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3646C0u, 0x3646C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646C8u;
label_3646c8:
    // 0x3646c8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3646C8u;
    SET_GPR_U32(ctx, 31, 0x3646D0u);
    ctx->pc = 0x3646CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646C8u;
    // 0x3646cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3646C8u, 0x3646D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646D0u;
label_3646d0:
    // 0x3646d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3646d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3646d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3646d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3646d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3646d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3646dc: 0xc0bf7dc  jal         func_2FDF70
    ctx->pc = 0x3646DCu;
    SET_GPR_U32(ctx, 31, 0x3646E4u);
    ctx->pc = 0x3646E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646DCu;
    // 0x3646e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF70u, 0x3646DCu, 0x3646E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646E4u;
label_3646e4:
    // 0x3646e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3646e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3646e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3646e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3646ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3646ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3646f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3646f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3646f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3646f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3646f8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3646f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3646fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3646FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646FCu;
        // 0x364700: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3646FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364704u;
    // 0x364704: 0x0  nop
    ctx->pc = 0x364704u;
    // NOP
    ctx->pc = 0x364708u;
}
