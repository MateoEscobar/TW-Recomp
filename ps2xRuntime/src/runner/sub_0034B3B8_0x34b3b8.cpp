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

// Function: sub_0034B3B8
// Address: 0x34b3b8 - 0x34b600
void sub_0034B3B8_0x34b3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B3B8_0x34b3b8");
#endif

    switch (ctx->pc) {
        case 0x34b570u: goto label_34b570;
        case 0x34b5acu: goto label_34b5ac;
        default: break;
    }

    ctx->pc = 0x34b3b8u;

    // 0x34b3b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x34b3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x34b3bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b3c0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x34b3c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34b3c4: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x34b3c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34b3c8: 0x46009d06  mov.s       $f20, $f19
    ctx->pc = 0x34b3c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[19]);
    // 0x34b3cc: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x34b3ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x34b3d0: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x34b3d0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x34b3d4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x34b3d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x34b3d8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x34b3d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b3dc: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x34b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34b3e0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x34b3e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x34b3e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x34b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x34b3e8: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x34b3e8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x34b3ec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x34b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x34b3f0: 0x46008b86  mov.s       $f14, $f17
    ctx->pc = 0x34b3f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[17]);
    // 0x34b3f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x34b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x34b3f8: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x34b3f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x34b3fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x34b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x34b400: 0x46008306  mov.s       $f12, $f16
    ctx->pc = 0x34b400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[16]);
    // 0x34b404: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x34b404u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x34b408: 0x460093c6  mov.s       $f15, $f18
    ctx->pc = 0x34b408u;
    ctx->f[15] = FPU_MOV_S(ctx->f[18]);
    // 0x34b40c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x34b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x34b410: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x34b410u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x34b414: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34b418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34b418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b41c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b420: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34b420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b424: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34b424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b428: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34B428u;
    {
        const bool branch_taken_0x34b428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B428u;
        // 0x34b42c: 0xc7b100d0  lwc1        $f17, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b428) {
            ctx->pc = 0x34B454u;
            goto label_34b454;
        }
    }
    ctx->pc = 0x34B430u;
    // 0x34b430: 0x4616ab41  sub.s       $f13, $f21, $f22
    ctx->pc = 0x34b430u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x34b434: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x34b434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b438: 0x46146082  mul.s       $f2, $f12, $f20
    ctx->pc = 0x34b438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x34b43c: 0x461470c2  mul.s       $f3, $f14, $f20
    ctx->pc = 0x34b43cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x34b440: 0x460f6802  mul.s       $f0, $f13, $f15
    ctx->pc = 0x34b440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
    // 0x34b444: 0x46116842  mul.s       $f1, $f13, $f17
    ctx->pc = 0x34b444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[17]);
    // 0x34b448: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x34b448u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x34b44c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34B44Cu;
    {
        const bool branch_taken_0x34b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B44Cu;
        // 0x34b450: 0x46011841  sub.s       $f1, $f3, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b44c) {
            ctx->pc = 0x34B474u;
            goto label_34b474;
        }
    }
    ctx->pc = 0x34B454u;
label_34b454:
    // 0x34b454: 0x4616ab40  add.s       $f13, $f21, $f22
    ctx->pc = 0x34b454u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x34b458: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x34b458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34b45c: 0x46146082  mul.s       $f2, $f12, $f20
    ctx->pc = 0x34b45cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x34b460: 0x461470c2  mul.s       $f3, $f14, $f20
    ctx->pc = 0x34b460u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x34b464: 0x460f6802  mul.s       $f0, $f13, $f15
    ctx->pc = 0x34b464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
    // 0x34b468: 0x46116842  mul.s       $f1, $f13, $f17
    ctx->pc = 0x34b468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[17]);
    // 0x34b46c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x34b46cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x34b470: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34b470u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_34b474:
    // 0x34b474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34b474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b478: 0x0  nop
    ctx->pc = 0x34b478u;
    // NOP
    // 0x34b47c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34b47cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b480: 0x0  nop
    ctx->pc = 0x34b480u;
    // NOP
    // 0x34b484: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
    ctx->pc = 0x34B484u;
    {
        const bool branch_taken_0x34b484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b484) {
            ctx->pc = 0x34B488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B484u;
            // 0x34b488: 0x46118802  mul.s       $f0, $f17, $f17 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B590u;
            goto label_34b590;
        }
    }
    ctx->pc = 0x34B48Cu;
    // 0x34b48c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34b48cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b490: 0x0  nop
    ctx->pc = 0x34b490u;
    // NOP
    // 0x34b494: 0x4502003e  bc1fl       . + 4 + (0x3E << 2)
    ctx->pc = 0x34B494u;
    {
        const bool branch_taken_0x34b494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b494) {
            ctx->pc = 0x34B498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B494u;
            // 0x34b498: 0x46118802  mul.s       $f0, $f17, $f17 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B590u;
            goto label_34b590;
        }
    }
    ctx->pc = 0x34B49Cu;
    // 0x34b49c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x34b49cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x34b4a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x34b4a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x34b4a4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x34b4a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x34b4a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34b4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34b4ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34b4acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34b4b0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x34b4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34b4b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34b4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b4b8: 0x0  nop
    ctx->pc = 0x34b4b8u;
    // NOP
    // 0x34b4bc: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
    ctx->pc = 0x34B4BCu;
    {
        const bool branch_taken_0x34b4bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b4bc) {
            ctx->pc = 0x34B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B4BCu;
            // 0x34b4c0: 0x46118802  mul.s       $f0, $f17, $f17 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B590u;
            goto label_34b590;
        }
    }
    ctx->pc = 0x34B4C4u;
    // 0x34b4c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34b4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34b4c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34b4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b4cc: 0xe7af0000  swc1        $f15, 0x0($sp)
    ctx->pc = 0x34b4ccu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34b4d0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x34b4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x34b4d4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x34b4d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34b4d8: 0xe7b10008  swc1        $f17, 0x8($sp)
    ctx->pc = 0x34b4d8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34b4dc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x34b4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x34b4e0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x34b4e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b4e4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34b4e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34b4e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34b4e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34b4ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34b4ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b4f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34b4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b4f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34b4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b4f8: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x34b4f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34b4fc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x34b4fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34b500: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x34b500u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x34b504: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x34b504u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x34b508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b50c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x34b50cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b510: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34b510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b514: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34b514u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34b518: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x34b518u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34b51c: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x34b51cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34b520: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x34b520u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34b524: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x34b524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x34b528: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x34b528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b52c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34b52cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34b530: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x34b530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b534: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34b534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b538: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x34b538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34b53c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x34b53cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x34b540: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34b544: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b548: 0x0  nop
    ctx->pc = 0x34b548u;
    // NOP
    // 0x34b54c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34b54cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b550: 0x0  nop
    ctx->pc = 0x34b550u;
    // NOP
    // 0x34b554: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34B554u;
    {
        const bool branch_taken_0x34b554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B554u;
        // 0x34b558: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b554) {
            ctx->pc = 0x34B564u;
            goto label_34b564;
        }
    }
    ctx->pc = 0x34B55Cu;
    // 0x34b55c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x34B55Cu;
    {
        const bool branch_taken_0x34b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B55Cu;
        // 0x34b560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b55c) {
            ctx->pc = 0x34B5CCu;
            goto label_34b5cc;
        }
    }
    ctx->pc = 0x34B564u;
label_34b564:
    // 0x34b564: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x34b564u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x34b568: 0xc0d2bd4  jal         func_34AF50
    ctx->pc = 0x34B568u;
    SET_GPR_U32(ctx, 31, 0x34B570u);
    ctx->pc = 0x34B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B568u;
    // 0x34b56c: 0x46002c86  mov.s       $f18, $f5 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[5]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AF50u, 0x34B568u, 0x34B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B570u;
label_34b570:
    // 0x34b570: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x34b570u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b574: 0x0  nop
    ctx->pc = 0x34b574u;
    // NOP
    // 0x34b578: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34b578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34b57c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x34b57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b580: 0xe6370000  swc1        $f23, 0x0($s1)
    ctx->pc = 0x34b580u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34b584: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x34b584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x34b588: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34B588u;
    {
        const bool branch_taken_0x34b588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B588u;
        // 0x34b58c: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b588) {
            ctx->pc = 0x34B5C4u;
            goto label_34b5c4;
        }
    }
    ctx->pc = 0x34B590u;
label_34b590:
    // 0x34b590: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x34b590u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x34b594: 0x460f7c02  mul.s       $f16, $f15, $f15
    ctx->pc = 0x34b594u;
    ctx->f[16] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x34b598: 0x46007b86  mov.s       $f14, $f15
    ctx->pc = 0x34b598u;
    ctx->f[14] = FPU_MOV_S(ctx->f[15]);
    // 0x34b59c: 0x46008bc6  mov.s       $f15, $f17
    ctx->pc = 0x34b59cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[17]);
    // 0x34b5a0: 0x46002c46  mov.s       $f17, $f5
    ctx->pc = 0x34b5a0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[5]);
    // 0x34b5a4: 0xc0d2bf6  jal         func_34AFD8
    ctx->pc = 0x34B5A4u;
    SET_GPR_U32(ctx, 31, 0x34B5ACu);
    ctx->pc = 0x34B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5A4u;
    // 0x34b5a8: 0x46100400  add.s       $f16, $f0, $f16 (Delay Slot)
    ctx->f[16] = FPU_ADD_S(ctx->f[0], ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AFD8u, 0x34B5A4u, 0x34B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5ACu;
label_34b5ac:
    // 0x34b5ac: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x34b5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x34b5b0: 0xe6370000  swc1        $f23, 0x0($s1)
    ctx->pc = 0x34b5b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x34b5b4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x34b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b5b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x34b5b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x34b5bc: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x34b5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x34b5c0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x34b5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_34b5c4:
    // 0x34b5c4: 0xe6780000  swc1        $f24, 0x0($s3)
    ctx->pc = 0x34b5c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x34b5c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b5cc:
    // 0x34b5cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x34b5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34b5d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x34b5d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34b5d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x34b5d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34b5d8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x34b5d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34b5dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34b5dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34b5e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34b5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b5e4: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x34b5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34b5e8: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x34b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34b5ec: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x34b5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34b5f0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x34b5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34b5f4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x34b5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34b5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x34B5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5F8u;
        // 0x34b5fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B600u;
}
