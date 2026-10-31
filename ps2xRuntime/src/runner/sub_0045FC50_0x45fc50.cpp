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

// Function: sub_0045FC50
// Address: 0x45fc50 - 0x45ffa0
void sub_0045FC50_0x45fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045FC50_0x45fc50");
#endif

    switch (ctx->pc) {
        case 0x45fcd0u: goto label_45fcd0;
        case 0x45fcd8u: goto label_45fcd8;
        case 0x45fce4u: goto label_45fce4;
        default: break;
    }

    ctx->pc = 0x45fc50u;

    // 0x45fc50: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x45fc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x45fc54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45fc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45fc58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x45fc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x45fc5c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x45fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x45fc60: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x45fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x45fc64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x45fc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x45fc68: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x45fc68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45fc6c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x45fc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x45fc70: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x45fc70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45fc74: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x45fc74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x45fc78: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x45fc78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45fc7c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x45fc7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x45fc80: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x45fc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x45fc84: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x45fc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x45fc88: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x45fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x45fc8c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x45fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x45fc90: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x45fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x45fc94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45fc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45fc98: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x45fc98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x45fc9c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x45fc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45fca0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x45fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x45fca4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x45fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x45fca8: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x45fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fcac: 0xc6610074  lwc1        $f1, 0x74($s3)
    ctx->pc = 0x45fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fcb0: 0x8e7e0038  lw          $fp, 0x38($s3)
    ctx->pc = 0x45fcb0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x45fcb4: 0x46020582  mul.s       $f22, $f0, $f2
    ctx->pc = 0x45fcb4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45fcb8: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x45fcb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45fcbc: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x45fcbcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x45fcc0: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x45fcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x45fcc4: 0x18e000a6  blez        $a3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x45FCC4u;
    {
        const bool branch_taken_0x45fcc4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x45FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45FCC4u;
        // 0x45fcc8: 0x8e720034  lw          $s2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fcc4) {
            ctx->pc = 0x45FF60u;
            goto label_45ff60;
        }
    }
    ctx->pc = 0x45FCCCu;
    // 0x45fccc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x45fcccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_45fcd0:
    // 0x45fcd0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x45FCD0u;
    SET_GPR_U32(ctx, 31, 0x45FCD8u);
    ctx->pc = 0x45FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45FCD0u;
    // 0x45fcd4: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x45FCD0u, 0x45FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FCD8u;
label_45fcd8:
    // 0x45fcd8: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x45fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x45fcdc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x45FCDCu;
    SET_GPR_U32(ctx, 31, 0x45FCE4u);
    ctx->pc = 0x45FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45FCDCu;
    // 0x45fce0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x45FCDCu, 0x45FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FCE4u;
label_45fce4:
    // 0x45fce4: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x45fce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x45fce8: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x45fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fcec: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x45fcecu;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x45fcf0: 0xc6e50004  lwc1        $f5, 0x4($s7)
    ctx->pc = 0x45fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45fcf4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x45fcf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x45fcf8: 0xc6c70000  lwc1        $f7, 0x0($s6)
    ctx->pc = 0x45fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x45fcfc: 0x4603a202  mul.s       $f8, $f20, $f3
    ctx->pc = 0x45fcfcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x45fd00: 0xc6cb0004  lwc1        $f11, 0x4($s6)
    ctx->pc = 0x45fd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x45fd04: 0x4605a282  mul.s       $f10, $f20, $f5
    ctx->pc = 0x45fd04u;
    ctx->f[10] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x45fd08: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x45fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fd0c: 0x46070382  mul.s       $f14, $f0, $f7
    ctx->pc = 0x45fd0cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45fd10: 0xc6e90008  lwc1        $f9, 0x8($s7)
    ctx->pc = 0x45fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x45fd14: 0x460b0342  mul.s       $f13, $f0, $f11
    ctx->pc = 0x45fd14u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x45fd18: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x45fd18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x45fd1c: 0xc6620068  lwc1        $f2, 0x68($s3)
    ctx->pc = 0x45fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fd20: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x45fd20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45fd24: 0xc666006c  lwc1        $f6, 0x6C($s3)
    ctx->pc = 0x45fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x45fd28: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x45fd28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x45fd2c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x45fd2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x45fd30: 0x460721c2  mul.s       $f7, $f4, $f7
    ctx->pc = 0x45fd30u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x45fd34: 0x4609a502  mul.s       $f20, $f20, $f9
    ctx->pc = 0x45fd34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[9]);
    // 0x45fd38: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x45fd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x45fd3c: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x45fd3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x45fd40: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x45fd40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x45fd44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fd48: 0x460e4200  add.s       $f8, $f8, $f14
    ctx->pc = 0x45fd48u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[14]);
    // 0x45fd4c: 0x460ca500  add.s       $f20, $f20, $f12
    ctx->pc = 0x45fd4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x45fd50: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x45fd50u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x45fd54: 0x460d5280  add.s       $f10, $f10, $f13
    ctx->pc = 0x45fd54u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
    // 0x45fd58: 0x46083042  mul.s       $f1, $f6, $f8
    ctx->pc = 0x45fd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x45fd5c: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x45fd5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x45fd60: 0x46031242  mul.s       $f9, $f2, $f3
    ctx->pc = 0x45fd60u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x45fd64: 0x461431c2  mul.s       $f7, $f6, $f20
    ctx->pc = 0x45fd64u;
    ctx->f[7] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x45fd68: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x45fd68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x45fd6c: 0x460a3182  mul.s       $f6, $f6, $f10
    ctx->pc = 0x45fd6cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x45fd70: 0x46014a40  add.s       $f9, $f9, $f1
    ctx->pc = 0x45fd70u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[1]);
    // 0x45fd74: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x45fd74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x45fd78: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x45fd78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x45fd7c: 0x46154202  mul.s       $f8, $f8, $f21
    ctx->pc = 0x45fd7cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
    // 0x45fd80: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x45fd80u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x45fd84: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x45fd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x45fd88: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x45fd88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45fd8c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x45fd8cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x45fd90: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x45fd90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x45fd94: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x45fd94u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x45fd98: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x45fd98u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45fd9c: 0x46155282  mul.s       $f10, $f10, $f21
    ctx->pc = 0x45fd9cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[21]);
    // 0x45fda0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x45fda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45fda4: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x45fda4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x45fda8: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x45fda8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x45fdac: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x45fdacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45fdb0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x45fdb0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x45fdb4: 0xe7aa0014  swc1        $f10, 0x14($sp)
    ctx->pc = 0x45fdb4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45fdb8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x45fdb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45fdbc: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x45fdbcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x45fdc0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fdc4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x45fdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x45fdc8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x45fdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x45fdcc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45fdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45fdd0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fdd4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fdd8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45fdd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45fddc: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x45fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fde0: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x45fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fde4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x45fde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45fde8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x45fde8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x45fdec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fdecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fdf0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45fdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45fdf4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fdf8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fdfc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45fdfcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45fe00: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x45fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fe04: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x45fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fe08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x45fe08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45fe0c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x45fe0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x45fe10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fe10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fe14: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45fe18: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x45fe18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x45fe1c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x45fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fe20: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x45fe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fe24: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fe28: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x45fe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fe2c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x45fe2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x45fe30: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x45fe30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x45fe34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45fe34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45fe38: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x45fe38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45fe3c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x45fe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fe40: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x45fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fe44: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x45fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fe48: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x45fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fe4c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x45fe4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x45fe50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x45fe50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x45fe54: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x45fe54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x45fe58: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x45fe58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45fe5c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x45fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fe60: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x45fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fe64: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fe68: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x45fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fe6c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x45fe6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x45fe70: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x45fe70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x45fe74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45fe74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45fe78: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x45fe78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45fe7c: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x45fe7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x45fe80: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x45fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fe84: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x45fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fe88: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fe8c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x45fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fe90: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x45fe90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x45fe94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x45fe94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45fe98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45fe98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45fe9c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x45fe9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45fea0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x45fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fea4: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x45fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fea8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x45fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45feac: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x45feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45feb0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x45feb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x45feb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45feb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45feb8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x45feb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x45febc: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x45febcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45fec0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x45fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fec4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x45fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fec8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fecc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x45feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fed0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x45fed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x45fed4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x45fed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45fed8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45fed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45fedc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x45fedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45fee0: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x45fee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x45fee4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x45fee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fee8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x45fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45feec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x45feecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x45fef0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x45fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fef4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x45fef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45fef8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45fef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fefc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x45fefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x45ff00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45ff00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45ff04: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x45ff04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45ff08: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x45ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ff0c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x45ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ff10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x45ff10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x45ff14: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x45ff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45ff18: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x45ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45ff1c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45ff1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45ff20: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x45ff20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x45ff24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45ff24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45ff28: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x45ff28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45ff2c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x45ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ff30: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x45ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ff34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x45ff34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x45ff38: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x45ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45ff3c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x45ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45ff40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45ff40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45ff44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ff48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x45ff48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x45ff4c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x45ff4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x45ff50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45ff50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x45ff54: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x45ff54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45ff58: 0x16a0ff5d  bnez        $s5, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x45FF58u;
    {
        const bool branch_taken_0x45ff58 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x45FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45FF58u;
        // 0x45ff5c: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ff58) {
            ctx->pc = 0x45FCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45fcd0;
        }
    }
    ctx->pc = 0x45FF60u;
label_45ff60:
    // 0x45ff60: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x45ff60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x45ff64: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x45ff64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x45ff68: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x45ff68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45ff6c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x45ff6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45ff70: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x45ff70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45ff74: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x45ff74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45ff78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x45ff78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45ff7c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x45ff7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ff80: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x45ff80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ff84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45ff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ff88: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x45ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x45ff8c: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x45ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x45ff90: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x45ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x45ff94: 0x3e00008  jr          $ra
    ctx->pc = 0x45FF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45FF94u;
        // 0x45ff98: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45FF9Cu;
    // 0x45ff9c: 0x0  nop
    ctx->pc = 0x45ff9cu;
    // NOP
    ctx->pc = 0x45ffa0u;
}
