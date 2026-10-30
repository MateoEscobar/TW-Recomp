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

// Function: sub_0021F290
// Address: 0x21f290 - 0x21f410
void sub_0021F290_0x21f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F290_0x21f290");
#endif

    switch (ctx->pc) {
        case 0x21f2f0u: goto label_21f2f0;
        case 0x21f304u: goto label_21f304;
        case 0x21f32cu: goto label_21f32c;
        case 0x21f3a0u: goto label_21f3a0;
        case 0x21f3e0u: goto label_21f3e0;
        default: break;
    }

    ctx->pc = 0x21f290u;

    // 0x21f290: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21f294: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x21f294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x21f298: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x21f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x21f29c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21f29cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x21f2a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21f2a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x21f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x21f2ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21f2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2b0: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x21f2b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21f2b4: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x21f2b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x21f2b8: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x21f2b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x21f2bc: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x21f2bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x21f2c0: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x21f2c0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x21f2c4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x21f2c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x21f2c8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x21f2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2cc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x21f2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21f2d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f2d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21f2d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21f2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x21f2dc: 0x8e2201d8  lw          $v0, 0x1D8($s1)
    ctx->pc = 0x21f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x21f2e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x21f2e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21f2e4: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x21f2e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x21f2e8: 0xc0878ea  jal         func_21E3A8
    ctx->pc = 0x21F2E8u;
    SET_GPR_U32(ctx, 31, 0x21F2F0u);
    ctx->pc = 0x21F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2E8u;
    // 0x21f2ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3A8u, 0x21F2E8u, 0x21F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2F0u;
label_21f2f0:
    // 0x21f2f0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x21f2f4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x21f2f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x21f2f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21f2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2fc: 0xc0442aa  jal         func_110AA8
    ctx->pc = 0x21F2FCu;
    SET_GPR_U32(ctx, 31, 0x21F304u);
    ctx->pc = 0x21F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2FCu;
    // 0x21f300: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AA8u, 0x21F2FCu, 0x21F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F304u;
label_21f304:
    // 0x21f304: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x21f304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x21f308: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f308u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21f30c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F30Cu;
    {
        const bool branch_taken_0x21f30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F30Cu;
        // 0x21f310: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f30c) {
            ctx->pc = 0x21F31Cu;
            goto label_21f31c;
        }
    }
    ctx->pc = 0x21F314u;
    // 0x21f314: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x21f314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x21f318: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21f318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21f31c:
    // 0x21f31c: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21F31Cu;
    {
        const bool branch_taken_0x21f31c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F31Cu;
        // 0x21f320: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f31c) {
            ctx->pc = 0x21F350u;
            goto label_21f350;
        }
    }
    ctx->pc = 0x21F324u;
    // 0x21f324: 0xc08a05a  jal         func_228168
    ctx->pc = 0x21F324u;
    SET_GPR_U32(ctx, 31, 0x21F32Cu);
    ctx->pc = 0x21F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F324u;
    // 0x21f328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x21F324u, 0x21F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F32Cu;
label_21f32c:
    // 0x21f32c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F32Cu;
    {
        const bool branch_taken_0x21f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F32Cu;
        // 0x21f330: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f32c) {
            ctx->pc = 0x21F34Cu;
            goto label_21f34c;
        }
    }
    ctx->pc = 0x21F334u;
    // 0x21f334: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x21f334u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x21f338: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21f338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21f33c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21f33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f340: 0x0  nop
    ctx->pc = 0x21f340u;
    // NOP
    // 0x21f344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21f344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21f348: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x21f348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_21f34c:
    // 0x21f34c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21f350:
    // 0x21f350: 0x16420015  bne         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21F350u;
    {
        const bool branch_taken_0x21f350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F350u;
        // 0x21f354: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f350) {
            ctx->pc = 0x21F3A8u;
            goto label_21f3a8;
        }
    }
    ctx->pc = 0x21F358u;
    // 0x21f358: 0x2462ff89  addiu       $v0, $v1, -0x77
    ctx->pc = 0x21f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967177));
    // 0x21f35c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x21f35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21f360: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21F360u;
    {
        const bool branch_taken_0x21f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F360u;
        // 0x21f364: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f360) {
            ctx->pc = 0x21F3A8u;
            goto label_21f3a8;
        }
    }
    ctx->pc = 0x21F368u;
    // 0x21f368: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x21f368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f36c: 0x86270092  lh          $a3, 0x92($s1)
    ctx->pc = 0x21f36cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x21f370: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21f374: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x21f374u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x21f378: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x21f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
    // 0x21f37c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x21f37cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x21f380: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21f380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f384: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x21f384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21f388: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x21f388u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x21f38c: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x21f38cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x21f390: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x21f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21f394: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x21f394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21f398: 0xc044250  jal         func_110940
    ctx->pc = 0x21F398u;
    SET_GPR_U32(ctx, 31, 0x21F3A0u);
    ctx->pc = 0x21F39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F398u;
    // 0x21f39c: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110940u, 0x21F398u, 0x21F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3A0u;
label_21f3a0:
    // 0x21f3a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21F3A0u;
    {
        const bool branch_taken_0x21f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3A0u;
        // 0x21f3a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3a0) {
            ctx->pc = 0x21F3E4u;
            goto label_21f3e4;
        }
    }
    ctx->pc = 0x21F3A8u;
label_21f3a8:
    // 0x21f3a8: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x21f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f3ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21f3b0: 0x86270092  lh          $a3, 0x92($s1)
    ctx->pc = 0x21f3b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x21f3b4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21f3b8: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x21f3b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x21f3bc: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x21f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
    // 0x21f3c0: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x21f3c4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21f3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f3c8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x21f3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21f3cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3d0: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x21f3d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x21f3d4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x21f3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21f3d8: 0xc04420c  jal         func_110830
    ctx->pc = 0x21F3D8u;
    SET_GPR_U32(ctx, 31, 0x21F3E0u);
    ctx->pc = 0x21F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3D8u;
    // 0x21f3dc: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110830u, 0x21F3D8u, 0x21F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3E0u;
label_21f3e0:
    // 0x21f3e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21f3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21f3e4:
    // 0x21f3e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x21f3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f3e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21f3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f3ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21f3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f3f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f3f4: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x21f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x21f3f8: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x21f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21f3fc: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x21f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21f400: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x21f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21f404: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x21f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21f408: 0x3e00008  jr          $ra
    ctx->pc = 0x21F408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F408u;
        // 0x21f40c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F410u;
}
