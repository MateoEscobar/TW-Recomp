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

// Function: sub_00460248
// Address: 0x460248 - 0x4605e8
void sub_00460248_0x460248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460248_0x460248");
#endif

    switch (ctx->pc) {
        case 0x4602c8u: goto label_4602c8;
        case 0x4602d0u: goto label_4602d0;
        case 0x4602dcu: goto label_4602dc;
        default: break;
    }

    ctx->pc = 0x460248u;

    // 0x460248: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x460248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x46024c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x46024cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x460250: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x460250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x460254: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x460254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x460258: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x460258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46025c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x46025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x460260: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x460260u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x460264: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x460264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x460268: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x460268u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46026c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x46026cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x460270: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x460270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x460274: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x460274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x460278: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x460278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x46027c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x46027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x460280: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x460280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x460284: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x460284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x460288: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x460288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x46028c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x46028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x460290: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x460290u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x460294: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x460294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x460298: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x460298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x46029c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x46029cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4602a0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x4602a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x4602a4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4602a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x4602a8: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x4602a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4602ac: 0x8e930034  lw          $s3, 0x34($s4)
    ctx->pc = 0x4602acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x4602b0: 0x18e000bf  blez        $a3, . + 4 + (0xBF << 2)
    ctx->pc = 0x4602B0u;
    {
        const bool branch_taken_0x4602b0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4602B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4602B0u;
        // 0x4602b4: 0x8e92001c  lw          $s2, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4602b0) {
            ctx->pc = 0x4605B0u;
            goto label_4605b0;
        }
    }
    ctx->pc = 0x4602B8u;
    // 0x4602b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4602b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4602bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4602bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x4602c0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4602c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4602c4: 0x0  nop
    ctx->pc = 0x4602c4u;
    // NOP
label_4602c8:
    // 0x4602c8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x4602C8u;
    SET_GPR_U32(ctx, 31, 0x4602D0u);
    ctx->pc = 0x4602CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4602C8u;
    // 0x4602cc: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x4602C8u, 0x4602D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4602D0u;
label_4602d0:
    // 0x4602d0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x4602d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4602d4: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x4602D4u;
    SET_GPR_U32(ctx, 31, 0x4602DCu);
    ctx->pc = 0x4602D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4602D4u;
    // 0x4602d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x4602D4u, 0x4602DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4602DCu;
label_4602dc:
    // 0x4602dc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4602dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4602e0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4602e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4602e4: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x4602e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4602e8: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x4602e8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x4602ec: 0xc7c50004  lwc1        $f5, 0x4($fp)
    ctx->pc = 0x4602ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4602f0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4602f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4602f4: 0xc6e60000  lwc1        $f6, 0x0($s7)
    ctx->pc = 0x4602f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4602f8: 0x4602a202  mul.s       $f8, $f20, $f2
    ctx->pc = 0x4602f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x4602fc: 0xc6eb0004  lwc1        $f11, 0x4($s7)
    ctx->pc = 0x4602fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x460300: 0x4605a242  mul.s       $f9, $f20, $f5
    ctx->pc = 0x460300u;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x460304: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x460304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460308: 0x46060382  mul.s       $f14, $f0, $f6
    ctx->pc = 0x460308u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x46030c: 0xc7ca0008  lwc1        $f10, 0x8($fp)
    ctx->pc = 0x46030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x460310: 0x460b0342  mul.s       $f13, $f0, $f11
    ctx->pc = 0x460310u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x460314: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x460314u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x460318: 0xc6830068  lwc1        $f3, 0x68($s4)
    ctx->pc = 0x460318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46031c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x46031cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x460320: 0xc687006c  lwc1        $f7, 0x6C($s4)
    ctx->pc = 0x460320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x460324: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x460324u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x460328: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x460328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x46032c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x46032cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x460330: 0x46062182  mul.s       $f6, $f4, $f6
    ctx->pc = 0x460330u;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x460334: 0x460aa502  mul.s       $f20, $f20, $f10
    ctx->pc = 0x460334u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x460338: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x460338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x46033c: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x46033cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x460340: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x460340u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x460344: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460348: 0x460e4200  add.s       $f8, $f8, $f14
    ctx->pc = 0x460348u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[14]);
    // 0x46034c: 0x460ca500  add.s       $f20, $f20, $f12
    ctx->pc = 0x46034cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x460350: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x460350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x460354: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x460354u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x460358: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x460358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x46035c: 0x460d4a40  add.s       $f9, $f9, $f13
    ctx->pc = 0x46035cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[13]);
    // 0x460360: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x460360u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x460364: 0x46083842  mul.s       $f1, $f7, $f8
    ctx->pc = 0x460364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x460368: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x460368u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x46036c: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x46036cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x460370: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x460370u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x460374: 0x46021a82  mul.s       $f10, $f3, $f2
    ctx->pc = 0x460374u;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x460378: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x460378u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x46037c: 0x46143982  mul.s       $f6, $f7, $f20
    ctx->pc = 0x46037cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x460380: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x460380u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x460384: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x460384u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x460388: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x460388u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x46038c: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x46038cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x460390: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x460390u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x460394: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x460394u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x460398: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x460398u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x46039c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x46039cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4603a0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x4603a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4603a4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x4603a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x4603a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x4603a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4603ac: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x4603acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4603b0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4603b0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x4603b4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x4603b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4603b8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x4603b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x4603bc: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x4603bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x4603c0: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x4603c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4603c4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x4603c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4603c8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x4603c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x4603cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4603ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4603d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x4603d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4603d4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x4603d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4603d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4603d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4603dc: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x4603dcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x4603e0: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x4603e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4603e4: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x4603e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x4603e8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x4603e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4603ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4603ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4603f0: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x4603f0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x4603f4: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x4603f4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4603f8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x4603f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4603fc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x4603fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x460400: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x460400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x460404: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x460404u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x460408: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x460408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x46040c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x46040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460410: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x460410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x460414: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x460414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x460418: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x460418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x46041c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x46041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460420: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x460420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460424: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x460424u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x460428: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x460428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46042c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x46042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460430: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x460430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x460434: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x460434u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x460438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x46043c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x46043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x460440: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x460440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460444: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x460444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460448: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x460448u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x46044c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x46044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460450: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x460450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460454: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x460454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x460458: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x460458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x46045c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x46045cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460460: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x460460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x460464: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x460464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x460468: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x460468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46046c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x46046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460470: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x460470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460474: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x460474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460478: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x460478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x46047c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x46047cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x460480: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x460484: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x460484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x460488: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x460488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46048c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x46048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460490: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x460490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460494: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x460494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460498: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x460498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x46049c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x46049cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4604a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4604a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4604a4: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x4604a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4604a8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x4604a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4604ac: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x4604acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4604b0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x4604b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4604b4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x4604b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4604b8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4604b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4604bc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4604bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4604c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4604c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4604c4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x4604c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x4604c8: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x4604c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x4604cc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x4604ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4604d0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x4604d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4604d4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x4604d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4604d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4604d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4604dc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4604dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4604e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4604e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4604e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4604e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4604e8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x4604e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4604ec: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x4604ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4604f0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x4604f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4604f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x4604f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4604f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x4604f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4604fc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x4604fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x460500: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460504: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x460504u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x460508: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x460508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x46050c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x46050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460510: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x460510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460514: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x460514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460518: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x460518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46051c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x46051cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x460520: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x460520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x460524: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x460524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x460528: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x460528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x46052c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x46052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460530: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x460530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x460534: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x460534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460538: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x460538u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x46053c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x46053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460540: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x460540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460548: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x460548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x46054c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x46054cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x460550: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x460550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x460554: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x460554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x460558: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x460558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46055c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x46055cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x460560: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x460560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460564: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x460564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x460568: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x460568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x46056c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x46056cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x460570: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x460570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x460574: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x460574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x460578: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x460578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46057c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x46057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x460580: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x460580u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x460584: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x460584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x460588: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x460588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46058c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x46058cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x460590: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x460590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x460594: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x460594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x460598: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x460598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x46059c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x46059cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4605a0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x4605a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x4605a4: 0x16c0ff48  bnez        $s6, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x4605A4u;
    {
        const bool branch_taken_0x4605a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4605A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4605A4u;
        // 0x4605a8: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4605a4) {
            ctx->pc = 0x4602C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4602c8;
        }
    }
    ctx->pc = 0x4605ACu;
    // 0x4605ac: 0x0  nop
    ctx->pc = 0x4605acu;
    // NOP
label_4605b0:
    // 0x4605b0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4605b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4605b4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4605b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4605b8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4605b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4605bc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4605bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4605c0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4605c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4605c4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4605c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4605c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4605c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4605cc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4605ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4605d0: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x4605d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4605d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4605d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4605d8: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x4605d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4605dc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x4605dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4605e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4605E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4605E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4605E0u;
        // 0x4605e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4605E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4605E8u;
}
