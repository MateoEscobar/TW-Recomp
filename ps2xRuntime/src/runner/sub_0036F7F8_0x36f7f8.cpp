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

// Function: sub_0036F7F8
// Address: 0x36f7f8 - 0x36f8e8
void sub_0036F7F8_0x36f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F7F8_0x36f7f8");
#endif

    switch (ctx->pc) {
        case 0x36f82cu: goto label_36f82c;
        case 0x36f834u: goto label_36f834;
        case 0x36f848u: goto label_36f848;
        case 0x36f850u: goto label_36f850;
        case 0x36f868u: goto label_36f868;
        case 0x36f870u: goto label_36f870;
        case 0x36f884u: goto label_36f884;
        case 0x36f88cu: goto label_36f88c;
        case 0x36f8a0u: goto label_36f8a0;
        case 0x36f8a8u: goto label_36f8a8;
        case 0x36f8c0u: goto label_36f8c0;
        default: break;
    }

    ctx->pc = 0x36f7f8u;

    // 0x36f7f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36f7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36f7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f800: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36f800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36f804: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36f808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f80c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36f80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36f810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36f814: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36f814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x36f818: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f820: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x36f820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x36f824: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F824u;
    SET_GPR_U32(ctx, 31, 0x36F82Cu);
    ctx->pc = 0x36F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F824u;
    // 0x36f828: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F824u, 0x36F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F82Cu;
label_36f82c:
    // 0x36f82c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F82Cu;
    SET_GPR_U32(ctx, 31, 0x36F834u);
    ctx->pc = 0x36F830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F82Cu;
    // 0x36f830: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F82Cu, 0x36F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F834u;
label_36f834:
    // 0x36f834: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f838: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36f838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f83c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f840: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F840u;
    SET_GPR_U32(ctx, 31, 0x36F848u);
    ctx->pc = 0x36F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F840u;
    // 0x36f844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F840u, 0x36F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F848u;
label_36f848:
    // 0x36f848: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36F848u;
    SET_GPR_U32(ctx, 31, 0x36F850u);
    ctx->pc = 0x36F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F848u;
    // 0x36f84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36F848u, 0x36F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F850u;
label_36f850:
    // 0x36f850: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x36f850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x36f854: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x36f854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x36f858: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36f858u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36f85c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f860: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F860u;
    SET_GPR_U32(ctx, 31, 0x36F868u);
    ctx->pc = 0x36F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F860u;
    // 0x36f864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F860u, 0x36F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F868u;
label_36f868:
    // 0x36f868: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36F868u;
    SET_GPR_U32(ctx, 31, 0x36F870u);
    ctx->pc = 0x36F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F868u;
    // 0x36f86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36F868u, 0x36F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F870u;
label_36f870:
    // 0x36f870: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36f870u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36f874: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f878: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f87c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F87Cu;
    SET_GPR_U32(ctx, 31, 0x36F884u);
    ctx->pc = 0x36F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F87Cu;
    // 0x36f880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F87Cu, 0x36F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F884u;
label_36f884:
    // 0x36f884: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F884u;
    SET_GPR_U32(ctx, 31, 0x36F88Cu);
    ctx->pc = 0x36F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F884u;
    // 0x36f888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F884u, 0x36F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F88Cu;
label_36f88c:
    // 0x36f88c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36f88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f890: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36f890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f898: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F898u;
    SET_GPR_U32(ctx, 31, 0x36F8A0u);
    ctx->pc = 0x36F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F898u;
    // 0x36f89c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F898u, 0x36F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8A0u;
label_36f8a0:
    // 0x36f8a0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36F8A0u;
    SET_GPR_U32(ctx, 31, 0x36F8A8u);
    ctx->pc = 0x36F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8A0u;
    // 0x36f8a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36F8A0u, 0x36F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8A8u;
label_36f8a8:
    // 0x36f8a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36f8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36f8acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36f8b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36f8b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x36f8b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36f8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8b8: 0xc06d514  jal         func_1B5450
    ctx->pc = 0x36F8B8u;
    SET_GPR_U32(ctx, 31, 0x36F8C0u);
    ctx->pc = 0x36F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F8B8u;
    // 0x36f8bc: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5450u, 0x36F8B8u, 0x36F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F8C0u;
label_36f8c0:
    // 0x36f8c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36f8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36f8c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f8c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36f8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36f8cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36f8ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f8d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36f8d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f8d8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x36f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36f8dc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x36f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36f8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F8E0u;
        // 0x36f8e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F8E8u;
}
