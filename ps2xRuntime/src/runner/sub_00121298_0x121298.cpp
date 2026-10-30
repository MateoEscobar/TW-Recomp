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

// Function: sub_00121298
// Address: 0x121298 - 0x121720
void sub_00121298_0x121298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121298_0x121298");
#endif

    switch (ctx->pc) {
        case 0x1212e0u: goto label_1212e0;
        case 0x121340u: goto label_121340;
        case 0x121370u: goto label_121370;
        case 0x121378u: goto label_121378;
        case 0x121490u: goto label_121490;
        case 0x1215f8u: goto label_1215f8;
        case 0x121604u: goto label_121604;
        case 0x121610u: goto label_121610;
        case 0x1216c8u: goto label_1216c8;
        case 0x1216d8u: goto label_1216d8;
        default: break;
    }

    ctx->pc = 0x121298u;

    // 0x121298: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x121298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x12129c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x12129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1212a0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1212a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1212a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1212a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212a8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1212a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1212ac: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1212acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1212b0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1212b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1212b4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1212b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1212b8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1212b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1212bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1212bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1212c0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1212c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1212c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1212c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1212c8: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x1212c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1212cc: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1212ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1212d0: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1212d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1212d4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1212d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1212d8: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1212D8u;
    SET_GPR_U32(ctx, 31, 0x1212E0u);
    ctx->pc = 0x1212DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1212D8u;
    // 0x1212dc: 0xafa50030  sw          $a1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1212D8u, 0x1212E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212E0u;
label_1212e0:
    // 0x1212e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1212e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1212e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1212E4u;
    {
        const bool branch_taken_0x1212e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212E4u;
        // 0x1212e8: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212e4) {
            ctx->pc = 0x1212F4u;
            goto label_1212f4;
        }
    }
    ctx->pc = 0x1212ECu;
    // 0x1212ec: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1212ECu;
    {
        const bool branch_taken_0x1212ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212ECu;
        // 0x1212f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212ec) {
            ctx->pc = 0x1216DCu;
            goto label_1216dc;
        }
    }
    ctx->pc = 0x1212F4u;
label_1212f4:
    // 0x1212f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1212f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1212f8: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1212f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1212fc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1212fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x121300: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x121300u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121304: 0x3c01c974  lui         $at, 0xC974
    ctx->pc = 0x121304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51572 << 16));
    // 0x121308: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x121308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
    // 0x12130c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12130cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x121310: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x121310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x121314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121318: 0x184000a4  blez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x121318u;
    {
        const bool branch_taken_0x121318 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121318u;
        // 0x12131c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121318) {
            ctx->pc = 0x1215ACu;
            goto label_1215ac;
        }
    }
    ctx->pc = 0x121320u;
    // 0x121320: 0x24020224  addiu       $v0, $zero, 0x224
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
    // 0x121324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121328: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x121328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12132c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x12132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x121330: 0x4600bd06  mov.s       $f20, $f23
    ctx->pc = 0x121330u;
    ctx->f[20] = FPU_MOV_S(ctx->f[23]);
    // 0x121334: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x121334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121338: 0x26b301a8  addiu       $s3, $s5, 0x1A8
    ctx->pc = 0x121338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 424));
    // 0x12133c: 0x0  nop
    ctx->pc = 0x12133cu;
    // NOP
label_121340:
    // 0x121340: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x121340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121344: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x121344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121348: 0x0  nop
    ctx->pc = 0x121348u;
    // NOP
    // 0x12134c: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x12134Cu;
    {
        const bool branch_taken_0x12134c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12134Cu;
        // 0x121350: 0x26b601c0  addiu       $s6, $s5, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12134c) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121354u;
    // 0x121354: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x121354u;
    {
        const bool branch_taken_0x121354 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x121358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121354u;
        // 0x121358: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121354) {
            ctx->pc = 0x121380u;
            goto label_121380;
        }
    }
    ctx->pc = 0x12135Cu;
    // 0x12135c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x12135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x121360: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x121360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x121364: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x121364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x121368: 0xc0e409a  jal         func_390268
    ctx->pc = 0x121368u;
    SET_GPR_U32(ctx, 31, 0x121370u);
    ctx->pc = 0x12136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121368u;
    // 0x12136c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x121368u, 0x121370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121370u;
label_121370:
    // 0x121370: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x121370u;
    SET_GPR_U32(ctx, 31, 0x121378u);
    ctx->pc = 0x121374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121370u;
    // 0x121374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x121370u, 0x121378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121378u;
label_121378:
    // 0x121378: 0x805e0019  lb          $fp, 0x19($v0)
    ctx->pc = 0x121378u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x12137c: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x12137cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121380:
    // 0x121380: 0x26a201b4  addiu       $v0, $s5, 0x1B4
    ctx->pc = 0x121380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 436));
    // 0x121384: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x121384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x121388: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x121388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x12138c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121390: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x121390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121394: 0x0  nop
    ctx->pc = 0x121394u;
    // NOP
    // 0x121398: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x121398u;
    {
        const bool branch_taken_0x121398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121398) {
            ctx->pc = 0x1213C8u;
            goto label_1213c8;
        }
    }
    ctx->pc = 0x1213A0u;
    // 0x1213a0: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1213a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1213a4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1213a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1213a8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1213a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1213ac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1213acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1213b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1213b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1213b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1213b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1213b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1213b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1213bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1213bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1213c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1213C0u;
    {
        const bool branch_taken_0x1213c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213C0u;
        // 0x1213c4: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213c0) {
            ctx->pc = 0x12140Cu;
            goto label_12140c;
        }
    }
    ctx->pc = 0x1213C8u;
label_1213c8:
    // 0x1213c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1213c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1213cc: 0x0  nop
    ctx->pc = 0x1213ccu;
    // NOP
    // 0x1213d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1213D0u;
    {
        const bool branch_taken_0x1213d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1213D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213D0u;
        // 0x1213d4: 0x2d71021  addu        $v0, $s6, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213d0) {
            ctx->pc = 0x121410u;
            goto label_121410;
        }
    }
    ctx->pc = 0x1213D8u;
    // 0x1213d8: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1213d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1213dc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1213dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1213e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1213e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1213e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1213e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1213e8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1213e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1213ec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1213ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1213f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1213f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1213f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1213f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1213f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1213f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1213fc: 0x0  nop
    ctx->pc = 0x1213fcu;
    // NOP
    // 0x121400: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x121400u;
    {
        const bool branch_taken_0x121400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x121404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121400u;
        // 0x121404: 0xe6600018  swc1        $f0, 0x18($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x121400) {
            ctx->pc = 0x121410u;
            goto label_121410;
        }
    }
    ctx->pc = 0x121408u;
    // 0x121408: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x121408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_12140c:
    // 0x12140c: 0x2d71021  addu        $v0, $s6, $s7
    ctx->pc = 0x12140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_121410:
    // 0x121410: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x121410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121414: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x121414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121418: 0x460100a9  min.s       $f2, $f0, $f1
    ctx->pc = 0x121418u;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[1]);
    // 0x12141c: 0x7c0002c  bltz        $fp, . + 4 + (0x2C << 2)
    ctx->pc = 0x12141Cu;
    {
        const bool branch_taken_0x12141c = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x121420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12141Cu;
        // 0x121420: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12141c) {
            ctx->pc = 0x1214D0u;
            goto label_1214d0;
        }
    }
    ctx->pc = 0x121424u;
    // 0x121424: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x121428: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x121428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x12142c: 0x400013  mtlo        $v0
    ctx->pc = 0x12142cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x121430: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x121430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x121434: 0x73c2a000  madd        $s4, $fp, $v0
    ctx->pc = 0x121434u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x121438: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x121438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x12143c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12143Cu;
    {
        const bool branch_taken_0x12143c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12143Cu;
        // 0x121440: 0x2a61821  addu        $v1, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12143c) {
            ctx->pc = 0x1214D0u;
            goto label_1214d0;
        }
    }
    ctx->pc = 0x121444u;
    // 0x121444: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x121444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x121448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12144c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x12144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121454: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x121454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x121458: 0x906201d0  lbu         $v0, 0x1D0($v1)
    ctx->pc = 0x121458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x12145c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x12145cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x121460: 0x0  nop
    ctx->pc = 0x121460u;
    // NOP
    // 0x121464: 0x0  nop
    ctx->pc = 0x121464u;
    // NOP
    // 0x121468: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x121468u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x12146c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x12146cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x121470: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x121474: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x121474u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x121478: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x121478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12147c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12147cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x121480: 0x14c5000b  bne         $a2, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x121480u;
    {
        const bool branch_taken_0x121480 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x121484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121480u;
        // 0x121484: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121480) {
            ctx->pc = 0x1214B0u;
            goto label_1214b0;
        }
    }
    ctx->pc = 0x121488u;
    // 0x121488: 0xc08cf14  jal         func_233C50
    ctx->pc = 0x121488u;
    SET_GPR_U32(ctx, 31, 0x121490u);
    ctx->pc = 0x12148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121488u;
    // 0x12148c: 0x7fa60040  sq          $a2, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x121488u, 0x121490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121490u;
label_121490:
    // 0x121490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121490u;
    {
        const bool branch_taken_0x121490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121490u;
        // 0x121494: 0x7ba60040  lq          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121490) {
            ctx->pc = 0x1214B0u;
            goto label_1214b0;
        }
    }
    ctx->pc = 0x121498u;
    // 0x121498: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x121498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x12149c: 0x111882  srl         $v1, $s1, 2
    ctx->pc = 0x12149cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 2));
    // 0x1214a0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1214a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1214a4: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x1214a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1214a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1214a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1214ac: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1214acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1214b0:
    // 0x1214b0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1214b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1214b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1214B4u;
    {
        const bool branch_taken_0x1214b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214B4u;
        // 0x1214b8: 0xa2800041  sb          $zero, 0x41($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 65), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214b4) {
            ctx->pc = 0x1214D0u;
            goto label_1214d0;
        }
    }
    ctx->pc = 0x1214BCu;
    // 0x1214bc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1214bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214c0: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1214c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1214c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1214C4u;
    {
        const bool branch_taken_0x1214c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1214c4) {
            ctx->pc = 0x1214C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1214C4u;
            // 0x1214c8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1214CCu;
            goto label_1214cc;
        }
    }
    ctx->pc = 0x1214CCu;
label_1214cc:
    // 0x1214cc: 0xa2830041  sb          $v1, 0x41($s4)
    ctx->pc = 0x1214ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 65), (uint8_t)GPR_U32(ctx, 3));
label_1214d0:
    // 0x1214d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1214d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1214d4: 0x3c0141ef  lui         $at, 0x41EF
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16879 << 16));
    // 0x1214d8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1214d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1214dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1214dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1214e0: 0xc44002cc  lwc1        $f0, 0x2CC($v0)
    ctx->pc = 0x1214e0u;
    { uint32_t bits = FAST_READ32(0x5102CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1214e4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1214e8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1214e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1214ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1214ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1214f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1214f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1214f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1214f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1214f8: 0xc6a101a0  lwc1        $f1, 0x1A0($s5)
    ctx->pc = 0x1214f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1214fc: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x121500: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x121500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x121504: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x121504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121508: 0x46160029  min.s       $f0, $f0, $f22
    ctx->pc = 0x121508u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[22]);
    // 0x12150c: 0x2d71021  addu        $v0, $s6, $s7
    ctx->pc = 0x12150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x121510: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x121510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x121514: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x121514u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x121518: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x121518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12151c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121520: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x121520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121524: 0x0  nop
    ctx->pc = 0x121524u;
    // NOP
    // 0x121528: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x121528u;
    {
        const bool branch_taken_0x121528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121528u;
        // 0x12152c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121528) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121530u;
    // 0x121530: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x121530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x121534: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x121534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x121538: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x121538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x12153c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12153cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121540: 0x7c00008  bltz        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x121540u;
    {
        const bool branch_taken_0x121540 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x121544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121540u;
        // 0x121544: 0x7ea20190  sq          $v0, 0x190($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 400), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121540) {
            ctx->pc = 0x121564u;
            goto label_121564;
        }
    }
    ctx->pc = 0x121548u;
    // 0x121548: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x121548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x12154c: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x12154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x121550: 0x600013  mtlo        $v1
    ctx->pc = 0x121550u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x121554: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x121554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x121558: 0x73c31000  madd        $v0, $fp, $v1
    ctx->pc = 0x121558u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12155c: 0xa0400041  sb          $zero, 0x41($v0)
    ctx->pc = 0x12155cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x121560: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x121560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
label_121564:
    // 0x121564: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x121564u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121568:
    // 0x121568: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x121568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x12156c: 0x2d71021  addu        $v0, $s6, $s7
    ctx->pc = 0x12156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x121570: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x121570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x121574: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x121574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x121578: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x121578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12157c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x12157cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x121580: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x121580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x121584: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x121584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x121588: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x121588u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
    // 0x12158c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x12158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121594: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x121594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x121598: 0x4600ad68  max.s       $f21, $f21, $f0
    ctx->pc = 0x121598u;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[0]);
    // 0x12159c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x12159cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1215a0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1215a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1215a4: 0x1440ff66  bnez        $v0, . + 4 + (-0x9A << 2)
    ctx->pc = 0x1215A4u;
    {
        const bool branch_taken_0x1215a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1215A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215A4u;
        // 0x1215a8: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215a4) {
            ctx->pc = 0x121340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121340;
        }
    }
    ctx->pc = 0x1215ACu;
label_1215ac:
    // 0x1215ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1215acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1215b0: 0x4615bde9  min.s       $f23, $f23, $f21
    ctx->pc = 0x1215b0u;
    ctx->f[23] = std::min(ctx->f[23], ctx->f[21]);
    // 0x1215b4: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1215b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1215b8: 0x0  nop
    ctx->pc = 0x1215b8u;
    // NOP
    // 0x1215bc: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x1215BCu;
    {
        const bool branch_taken_0x1215bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1215C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215BCu;
        // 0x1215c0: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215bc) {
            ctx->pc = 0x1216DCu;
            goto label_1216dc;
        }
    }
    ctx->pc = 0x1215C4u;
    // 0x1215c4: 0x92a201d7  lbu         $v0, 0x1D7($s5)
    ctx->pc = 0x1215c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 471)));
    // 0x1215c8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1215C8u;
    {
        const bool branch_taken_0x1215c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215C8u;
        // 0x1215cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215c8) {
            ctx->pc = 0x1216D8u;
            goto label_1216d8;
        }
    }
    ctx->pc = 0x1215D0u;
    // 0x1215d0: 0x8c43b1d0  lw          $v1, -0x4E30($v0)
    ctx->pc = 0x1215d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947280)));
    // 0x1215d4: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1215D4u;
    {
        const bool branch_taken_0x1215d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215D4u;
        // 0x1215d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215d4) {
            ctx->pc = 0x1216D8u;
            goto label_1216d8;
        }
    }
    ctx->pc = 0x1215DCu;
    // 0x1215dc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1215dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x1215e0: 0x2610b888  addiu       $s0, $s0, -0x4778
    ctx->pc = 0x1215e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
    // 0x1215e4: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x1215e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x1215e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1215e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1215ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1215ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1215f0: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x1215F0u;
    SET_GPR_U32(ctx, 31, 0x1215F8u);
    ctx->pc = 0x1215F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215F0u;
    // 0x1215f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x1215F0u, 0x1215F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1215F8u;
label_1215f8:
    // 0x1215f8: 0x46140581  sub.s       $f22, $f0, $f20
    ctx->pc = 0x1215f8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1215fc: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x1215FCu;
    SET_GPR_U32(ctx, 31, 0x121604u);
    ctx->pc = 0x121600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215FCu;
    // 0x121600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x1215FCu, 0x121604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121604u;
label_121604:
    // 0x121604: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x121604u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x121608: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x121608u;
    SET_GPR_U32(ctx, 31, 0x121610u);
    ctx->pc = 0x12160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121608u;
    // 0x12160c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x121608u, 0x121610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121610u;
label_121610:
    // 0x121610: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x121610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x121614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12161c: 0xe7b60000  swc1        $f22, 0x0($sp)
    ctx->pc = 0x12161cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121620: 0x26a60190  addiu       $a2, $s5, 0x190
    ctx->pc = 0x121620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x121624: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x121624u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x121628: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x121628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12162c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x12162cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x121630: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x121630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x121634: 0x7aa30190  lq          $v1, 0x190($s5)
    ctx->pc = 0x121634u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 400)));
    // 0x121638: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x121638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12163c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12163cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x121640: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x121640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x121644: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x121644u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x121648: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x121648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12164c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12164cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121650: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x121650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x121654: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x121654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x121658: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x121658u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12165c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12165cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x121660: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x121660u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x121664: 0x7ea20190  sq          $v0, 0x190($s5)
    ctx->pc = 0x121664u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 400), GPR_VEC(ctx, 2));
    // 0x121668: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x121668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12166c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12166cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121670: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x121670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x121674: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x121674u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x121678: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x121678u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x12167c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x12167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x121680: 0x7ea40190  sq          $a0, 0x190($s5)
    ctx->pc = 0x121680u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 400), GPR_VEC(ctx, 4));
    // 0x121684: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x121684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x121688: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x121688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x12168c: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x12168cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x121690: 0x4403b800  mfc1        $v1, $f23
    ctx->pc = 0x121690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x121694: 0x7aa20190  lq          $v0, 0x190($s5)
    ctx->pc = 0x121694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 400)));
    // 0x121698: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x121698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12169c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12169cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1216a0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1216a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1216a4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1216a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1216a8: 0x7ea20190  sq          $v0, 0x190($s5)
    ctx->pc = 0x1216a8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 400), GPR_VEC(ctx, 2));
    // 0x1216ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1216acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1216b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1216b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1216b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1216B4u;
    {
        const bool branch_taken_0x1216b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1216b4) {
            ctx->pc = 0x1216D0u;
            goto label_1216d0;
        }
    }
    ctx->pc = 0x1216BCu;
    // 0x1216bc: 0x26a40180  addiu       $a0, $s5, 0x180
    ctx->pc = 0x1216bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x1216c0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1216C0u;
    SET_GPR_U32(ctx, 31, 0x1216C8u);
    ctx->pc = 0x1216C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216C0u;
    // 0x1216c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1216C0u, 0x1216C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216C8u;
label_1216c8:
    // 0x1216c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1216C8u;
    {
        const bool branch_taken_0x1216c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216C8u;
        // 0x1216cc: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216c8) {
            ctx->pc = 0x1216DCu;
            goto label_1216dc;
        }
    }
    ctx->pc = 0x1216D0u;
label_1216d0:
    // 0x1216d0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x1216D0u;
    SET_GPR_U32(ctx, 31, 0x1216D8u);
    ctx->pc = 0x1216D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1216D0u;
    // 0x1216d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1216D0u, 0x1216D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216D8u;
label_1216d8:
    // 0x1216d8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1216d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1216dc:
    // 0x1216dc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1216dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1216e0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1216e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1216e4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1216e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1216e8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1216e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1216ec: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1216ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1216f0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1216f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1216f4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1216f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1216f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1216f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1216fc: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1216fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x121700: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x121700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x121704: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x121704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x121708: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x121708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12170c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x12170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x121710: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x121710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121714: 0x3e00008  jr          $ra
    ctx->pc = 0x121714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121714u;
        // 0x121718: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12171Cu;
    // 0x12171c: 0x0  nop
    ctx->pc = 0x12171cu;
    // NOP
    ctx->pc = 0x121720u;
}
