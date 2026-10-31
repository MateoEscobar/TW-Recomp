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

// Function: sub_00110830
// Address: 0x110830 - 0x110940
void sub_00110830_0x110830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110830_0x110830");
#endif

    switch (ctx->pc) {
        case 0x110878u: goto label_110878;
        case 0x110894u: goto label_110894;
        case 0x1108c0u: goto label_1108c0;
        case 0x1108ecu: goto label_1108ec;
        case 0x110918u: goto label_110918;
        default: break;
    }

    ctx->pc = 0x110830u;

    // 0x110830: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x110830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x110834: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x110834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110838: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x110838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11083c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x11083cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110840: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x110840u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x110844: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x110844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x110848: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x110848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11084c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11084cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110850: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x110850u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x110854: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x110854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110858: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x110858u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x11085c: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x11085cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x110860: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x110860u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x110864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x110868: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x110868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x11086c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x11086cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x110870: 0xc0451b0  jal         func_1146C0
    ctx->pc = 0x110870u;
    SET_GPR_U32(ctx, 31, 0x110878u);
    ctx->pc = 0x110874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110870u;
    // 0x110874: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1146C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1146C0u, 0x110870u, 0x110878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110878u;
label_110878:
    // 0x110878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11087c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x11087cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x110880: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x110880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x110884: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110884u;
    {
        const bool branch_taken_0x110884 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x110888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110884u;
        // 0x110888: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110884) {
            ctx->pc = 0x1108A8u;
            goto label_1108a8;
        }
    }
    ctx->pc = 0x11088Cu;
    // 0x11088c: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x11088Cu;
    SET_GPR_U32(ctx, 31, 0x110894u);
    ctx->pc = 0x110890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11088Cu;
    // 0x110890: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x11088Cu, 0x110894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110894u;
label_110894:
    // 0x110894: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x110894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x110898: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x110898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11089c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11089cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1108a0: 0x0  nop
    ctx->pc = 0x1108a0u;
    // NOP
    // 0x1108a4: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x1108a4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1108a8:
    // 0x1108a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1108a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1108ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1108acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1108b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1108b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1108b4: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x1108b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x1108b8: 0xc044594  jal         func_111650
    ctx->pc = 0x1108B8u;
    SET_GPR_U32(ctx, 31, 0x1108C0u);
    ctx->pc = 0x1108BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108B8u;
    // 0x1108bc: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x1108B8u, 0x1108C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108C0u;
label_1108c0:
    // 0x1108c0: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x1108c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1108c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1108c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108c8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1108c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1108cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1108ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1108d0: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x1108d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x1108d4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1108d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1108d8: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x1108d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x1108dc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1108dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1108e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1108e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1108e4: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x1108E4u;
    SET_GPR_U32(ctx, 31, 0x1108ECu);
    ctx->pc = 0x1108E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1108E4u;
    // 0x1108e8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x1108E4u, 0x1108ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1108ECu;
label_1108ec:
    // 0x1108ec: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1108ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1108f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1108f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1108f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1108f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1108f8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1108f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1108fc: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x1108fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x110900: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x110900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x110904: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x110904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110908: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x110908u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x11090c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11090cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110910: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x110910u;
    SET_GPR_U32(ctx, 31, 0x110918u);
    ctx->pc = 0x110914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110910u;
    // 0x110914: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x110910u, 0x110918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110918u;
label_110918:
    // 0x110918: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x110918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11091c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11091cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110920: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x110920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110924: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x110924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110928: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x110928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11092c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x11092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x110930: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x110930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x110934: 0x3e00008  jr          $ra
    ctx->pc = 0x110934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110934u;
        // 0x110938: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11093Cu;
    // 0x11093c: 0x0  nop
    ctx->pc = 0x11093cu;
    // NOP
    ctx->pc = 0x110940u;
}
