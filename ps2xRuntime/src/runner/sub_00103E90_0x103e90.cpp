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

// Function: sub_00103E90
// Address: 0x103e90 - 0x104110
void sub_00103E90_0x103e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103E90_0x103e90");
#endif

    switch (ctx->pc) {
        case 0x103f00u: goto label_103f00;
        case 0x103fecu: goto label_103fec;
        case 0x103ff8u: goto label_103ff8;
        case 0x104004u: goto label_104004;
        case 0x104010u: goto label_104010;
        case 0x104020u: goto label_104020;
        case 0x104028u: goto label_104028;
        case 0x104090u: goto label_104090;
        case 0x10409cu: goto label_10409c;
        case 0x1040acu: goto label_1040ac;
        case 0x1040b4u: goto label_1040b4;
        default: break;
    }

    ctx->pc = 0x103e90u;

    // 0x103e90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x103e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x103e94: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x103e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x103e98: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x103e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x103e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ea0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x103ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x103ea4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x103ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x103ea8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x103ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x103eac: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x103eacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x103eb0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x103eb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x103eb4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x103eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x103eb8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x103eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x103ebc: 0x8e300120  lw          $s0, 0x120($s1)
    ctx->pc = 0x103ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x103ec0: 0x12000089  beqz        $s0, . + 4 + (0x89 << 2)
    ctx->pc = 0x103EC0u;
    {
        const bool branch_taken_0x103ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC0u;
        // 0x103ec4: 0x8c5302b8  lw          $s3, 0x2B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ec0) {
            ctx->pc = 0x1040E8u;
            goto label_1040e8;
        }
    }
    ctx->pc = 0x103EC8u;
    // 0x103ec8: 0x96220124  lhu         $v0, 0x124($s1)
    ctx->pc = 0x103ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x103ecc: 0x96230126  lhu         $v1, 0x126($s1)
    ctx->pc = 0x103eccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
    // 0x103ed0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x103ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x103ed4: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x103ED4u;
    {
        const bool branch_taken_0x103ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103ED4u;
        // 0x103ed8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ed4) {
            ctx->pc = 0x1040E8u;
            goto label_1040e8;
        }
    }
    ctx->pc = 0x103EDCu;
    // 0x103edc: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x103edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x103ee0: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x103ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x103ee4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x103ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x103ee8: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x103ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
    // 0x103eec: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x103eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
    // 0x103ef0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x103ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x103ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x103ef8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x103ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x103efc: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x103efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_103f00:
    // 0x103f00: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x103f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x103f04: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x103F04u;
    {
        const bool branch_taken_0x103f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103f04) {
            ctx->pc = 0x103F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F04u;
            // 0x103f08: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1040B8u;
            goto label_1040b8;
        }
    }
    ctx->pc = 0x103F0Cu;
    // 0x103f0c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x103f0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x103f10: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x103f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x103f14: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x103F14u;
    {
        const bool branch_taken_0x103f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x103F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F14u;
        // 0x103f18: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f14) {
            ctx->pc = 0x104030u;
            goto label_104030;
        }
    }
    ctx->pc = 0x103F1Cu;
    // 0x103f1c: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x103f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x103f20: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x103f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x103f24: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x103f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x103f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103f2c: 0x0  nop
    ctx->pc = 0x103f2cu;
    // NOP
    // 0x103f30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x103f34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x103f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x103f38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x103f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x103f3c: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x103f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x103f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103f44: 0x0  nop
    ctx->pc = 0x103f44u;
    // NOP
    // 0x103f48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x103f4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x103f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x103f50: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x103f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x103f54: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x103f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x103f58: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x103f58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x103f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103f60: 0x0  nop
    ctx->pc = 0x103f60u;
    // NOP
    // 0x103f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x103f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x103f68: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x103f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x103f6c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x103f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x103f70: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x103f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x103f74: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x103f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x103f78: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x103f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x103f7c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x103f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x103f80: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x103f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x103f84: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x103f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x103f88: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x103f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103f8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x103f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x103f90: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x103f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x103f94: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x103f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x103f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x103f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103f9c: 0x0  nop
    ctx->pc = 0x103f9cu;
    // NOP
    // 0x103fa0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x103fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x103fa4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x103fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x103fa8: 0x4bc3093c  vitof0.xyz  $vf3, $vf1
    ctx->pc = 0x103fa8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103fac: 0x4bc21858  vmulx.xyz   $vf1, $vf3, $vf2x
    ctx->pc = 0x103facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x103fb0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x103fb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103fb4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x103fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103fb8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x103fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x103fbc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x103fbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x103fc0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x103fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x103fc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x103fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x103fc8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x103fc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x103fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x103fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103fd0: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x103fd4: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x103fd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x103fd8: 0x0  nop
    ctx->pc = 0x103fd8u;
    // NOP
    // 0x103fdc: 0x0  nop
    ctx->pc = 0x103fdcu;
    // NOP
    // 0x103fe0: 0x46000004  c1          0x4
    ctx->pc = 0x103fe0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x103fe4: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x103FE4u;
    SET_GPR_U32(ctx, 31, 0x103FECu);
    ctx->pc = 0x103FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FE4u;
    // 0x103fe8: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x103FE4u, 0x103FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FECu;
label_103fec:
    // 0x103fec: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x103fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x103ff0: 0xc0e8b60  jal         func_3A2D80
    ctx->pc = 0x103FF0u;
    SET_GPR_U32(ctx, 31, 0x103FF8u);
    ctx->pc = 0x103FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FF0u;
    // 0x103ff4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D80u, 0x103FF0u, 0x103FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FF8u;
label_103ff8:
    // 0x103ff8: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x103ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x103ffc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x103FFCu;
    SET_GPR_U32(ctx, 31, 0x104004u);
    ctx->pc = 0x104000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FFCu;
    // 0x104000: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x103FFCu, 0x104004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104004u;
label_104004:
    // 0x104004: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x104004u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x104008: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x104008u;
    SET_GPR_U32(ctx, 31, 0x104010u);
    ctx->pc = 0x10400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104008u;
    // 0x10400c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x104008u, 0x104010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104010u;
label_104010:
    // 0x104010: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x104014: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x104014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104018: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x104018u;
    SET_GPR_U32(ctx, 31, 0x104020u);
    ctx->pc = 0x10401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104018u;
    // 0x10401c: 0x24060089  addiu       $a2, $zero, 0x89 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x104018u, 0x104020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104020u;
label_104020:
    // 0x104020: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x104020u;
    SET_GPR_U32(ctx, 31, 0x104028u);
    ctx->pc = 0x104024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104020u;
    // 0x104024: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x104020u, 0x104028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104028u;
label_104028:
    // 0x104028: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x104028u;
    {
        const bool branch_taken_0x104028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104028u;
        // 0x10402c: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104028) {
            ctx->pc = 0x1040B8u;
            goto label_1040b8;
        }
    }
    ctx->pc = 0x104030u;
label_104030:
    // 0x104030: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x104030u;
    {
        const bool branch_taken_0x104030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x104030) {
            ctx->pc = 0x104034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104030u;
            // 0x104034: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1040B8u;
            goto label_1040b8;
        }
    }
    ctx->pc = 0x104038u;
    // 0x104038: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x104038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10403c: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x10403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x104040: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x104040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x104044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104048: 0x0  nop
    ctx->pc = 0x104048u;
    // NOP
    // 0x10404c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10404cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104050: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x104050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x104054: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x104054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x104058: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x104058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x10405c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10405cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104060: 0x0  nop
    ctx->pc = 0x104060u;
    // NOP
    // 0x104064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104068: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x104068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x10406c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x10406cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x104070: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x104070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104074: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x104074u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x104078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x104078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10407c: 0x0  nop
    ctx->pc = 0x10407cu;
    // NOP
    // 0x104080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x104080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x104084: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x104084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x104088: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x104088u;
    SET_GPR_U32(ctx, 31, 0x104090u);
    ctx->pc = 0x10408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104088u;
    // 0x10408c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x104088u, 0x104090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104090u;
label_104090:
    // 0x104090: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x104090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x104094: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x104094u;
    SET_GPR_U32(ctx, 31, 0x10409Cu);
    ctx->pc = 0x104098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104094u;
    // 0x104098: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x104094u, 0x10409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10409Cu;
label_10409c:
    // 0x10409c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x10409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x1040a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1040a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040a4: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x1040A4u;
    SET_GPR_U32(ctx, 31, 0x1040ACu);
    ctx->pc = 0x1040A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040A4u;
    // 0x1040a8: 0x2406008a  addiu       $a2, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x1040A4u, 0x1040ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040ACu;
label_1040ac:
    // 0x1040ac: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x1040ACu;
    SET_GPR_U32(ctx, 31, 0x1040B4u);
    ctx->pc = 0x1040B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040ACu;
    // 0x1040b0: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x1040ACu, 0x1040B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040B4u;
label_1040b4:
    // 0x1040b4: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1040b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_1040b8:
    // 0x1040b8: 0x96230124  lhu         $v1, 0x124($s1)
    ctx->pc = 0x1040b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x1040bc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1040bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1040c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1040c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1040c4: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x1040c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x1040c8: 0xa6240124  sh          $a0, 0x124($s1)
    ctx->pc = 0x1040c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 292), (uint16_t)GPR_U32(ctx, 4));
    // 0x1040cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1040CCu;
    {
        const bool branch_taken_0x1040cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040CCu;
        // 0x1040d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040cc) {
            ctx->pc = 0x1040E8u;
            goto label_1040e8;
        }
    }
    ctx->pc = 0x1040D4u;
    // 0x1040d4: 0x96230126  lhu         $v1, 0x126($s1)
    ctx->pc = 0x1040d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
    // 0x1040d8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1040d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1040dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1040dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1040e0: 0x5440ff87  bnel        $v0, $zero, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1040E0u;
    {
        const bool branch_taken_0x1040e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1040e0) {
            ctx->pc = 0x1040E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1040E0u;
            // 0x1040e4: 0x9622001e  lhu         $v0, 0x1E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103f00;
        }
    }
    ctx->pc = 0x1040E8u;
label_1040e8:
    // 0x1040e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1040e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1040ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1040ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1040f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1040f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1040f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1040f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1040f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1040f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1040fc: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1040fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x104100: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x104100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x104104: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x104104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104108: 0x3e00008  jr          $ra
    ctx->pc = 0x104108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104108u;
        // 0x10410c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104110u;
}
