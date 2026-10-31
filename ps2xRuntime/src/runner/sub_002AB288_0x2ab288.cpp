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

// Function: sub_002AB288
// Address: 0x2ab288 - 0x2ab470
void sub_002AB288_0x2ab288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB288_0x2ab288");
#endif

    switch (ctx->pc) {
        case 0x2ab2dcu: goto label_2ab2dc;
        case 0x2ab324u: goto label_2ab324;
        case 0x2ab374u: goto label_2ab374;
        default: break;
    }

    ctx->pc = 0x2ab288u;

    // 0x2ab288: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2ab288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2ab28c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ab28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ab290: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2ab290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x2ab294: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ab294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ab298: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x2ab298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x2ab29c: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x2ab29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x2ab2a0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2ab2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2ab2a4: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2ab2a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2ab2a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ab2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2ac: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x2ab2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x2ab2b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ab2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2b4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2ab2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2ab2b8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2ab2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2ab2bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ab2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ab2c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ab2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab2c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ab2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab2c8: 0x84b00092  lh          $s0, 0x92($a1)
    ctx->pc = 0x2ab2c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x2ab2cc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2ab2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2ab2d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ab2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ab2d4: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2AB2D4u;
    SET_GPR_U32(ctx, 31, 0x2AB2DCu);
    ctx->pc = 0x2AB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB2D4u;
    // 0x2ab2d8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2AB2D4u, 0x2AB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2DCu;
label_2ab2dc:
    // 0x2ab2dc: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2ab2dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ab2e0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2ab2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab2e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2ab2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2ab2e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ab2e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ab2ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ab2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab2f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2ab2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ab2f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2ab2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2ab2f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2fc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2ab2fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab304: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2ab304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab308: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ab308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab30c: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2ab30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2ab310: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab314: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2ab314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2ab318: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2ab318u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ab31c: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2AB31Cu;
    SET_GPR_U32(ctx, 31, 0x2AB324u);
    ctx->pc = 0x2AB320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB31Cu;
    // 0x2ab320: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2AB31Cu, 0x2AB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB324u;
label_2ab324:
    // 0x2ab324: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ab324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab32c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ab32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab330: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ab330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ab334: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2ab334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab338: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ab338u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ab33c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ab33cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ab340: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2ab340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab344: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2ab344u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2ab348: 0x8e4447c4  lw          $a0, 0x47C4($s2)
    ctx->pc = 0x2ab348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    // 0x2ab34c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2ab34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2ab350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab354: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2ab354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2ab358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ab358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab35c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2ab35cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2ab360: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2ab360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2ab364: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2ab364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ab368: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2ab368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2ab36c: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2AB36Cu;
    SET_GPR_U32(ctx, 31, 0x2AB374u);
    ctx->pc = 0x2AB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB36Cu;
    // 0x2ab370: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2AB36Cu, 0x2AB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB374u;
label_2ab374:
    // 0x2ab374: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2ab374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ab378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab37c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab380: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab384: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AB384u;
    {
        const bool branch_taken_0x2ab384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB384u;
        // 0x2ab388: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab384) {
            ctx->pc = 0x2AB3D8u;
            goto label_2ab3d8;
        }
    }
    ctx->pc = 0x2AB38Cu;
    // 0x2ab38c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AB38Cu;
    {
        const bool branch_taken_0x2ab38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB38Cu;
        // 0x2ab390: 0xc7a10094  lwc1        $f1, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab38c) {
            ctx->pc = 0x2AB3D0u;
            goto label_2ab3d0;
        }
    }
    ctx->pc = 0x2AB394u;
    // 0x2ab394: 0xc7b40054  lwc1        $f20, 0x54($sp)
    ctx->pc = 0x2ab394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab398: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2ab398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab39c: 0x0  nop
    ctx->pc = 0x2ab39cu;
    // NOP
    // 0x2ab3a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB3A0u;
    {
        const bool branch_taken_0x2ab3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab3a0) {
            ctx->pc = 0x2AB3C0u;
            goto label_2ab3c0;
        }
    }
    ctx->pc = 0x2AB3A8u;
    // 0x2ab3a8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ab3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ab3ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab3acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab3b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ab3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ab3b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab3b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB3B8u;
    {
        const bool branch_taken_0x2ab3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB3B8u;
        // 0x2ab3bc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab3b8) {
            ctx->pc = 0x2AB3D8u;
            goto label_2ab3d8;
        }
    }
    ctx->pc = 0x2AB3C0u;
label_2ab3c0:
    // 0x2ab3c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ab3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ab3c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab3c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB3C8u;
    {
        const bool branch_taken_0x2ab3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB3C8u;
        // 0x2ab3cc: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab3c8) {
            ctx->pc = 0x2AB3D8u;
            goto label_2ab3d8;
        }
    }
    ctx->pc = 0x2AB3D0u;
label_2ab3d0:
    // 0x2ab3d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ab3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ab3d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ab3d8:
    // 0x2ab3d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ab3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab3dc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ab3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3e0: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x2ab3e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab3e4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2ab3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ab3e8: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x2ab3e8u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x2ab3ec: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2ab3ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ab3f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ab3f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ab3f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2ab3f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ab3f8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2ab3f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ab3fc: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2ab3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2ab400: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2ab400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ab404: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2ab404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2ab408: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2ab408u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ab40c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2ab40cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ab410: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2ab410u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ab414: 0x7fa400f0  sq          $a0, 0xF0($sp)
    ctx->pc = 0x2ab414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 4));
    // 0x2ab418: 0x7fa400e0  sq          $a0, 0xE0($sp)
    ctx->pc = 0x2ab418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 4));
    // 0x2ab41c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2ab41cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab420: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2ab420u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2ab424: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2ab424u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2ab428: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2ab428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2ab42c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2ab42cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ab430: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2ab430u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2ab434: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x2ab434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
    // 0x2ab438: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x2ab438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x2ab43c: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x2ab43cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x2ab440: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2ab440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2ab444: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2ab444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ab448: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2ab448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2ab44c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2ab44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ab450: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2ab450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab454: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x2ab454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x2ab458: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x2ab458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x2ab45c: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x2ab45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x2ab460: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x2ab460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x2ab464: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB464u;
        // 0x2ab468: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB46Cu;
    // 0x2ab46c: 0x0  nop
    ctx->pc = 0x2ab46cu;
    // NOP
    ctx->pc = 0x2ab470u;
}
