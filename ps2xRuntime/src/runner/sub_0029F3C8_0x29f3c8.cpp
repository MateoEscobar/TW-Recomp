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

// Function: sub_0029F3C8
// Address: 0x29f3c8 - 0x29f710
void sub_0029F3C8_0x29f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F3C8_0x29f3c8");
#endif

    switch (ctx->pc) {
        case 0x29f428u: goto label_29f428;
        case 0x29f498u: goto label_29f498;
        case 0x29f4b8u: goto label_29f4b8;
        case 0x29f4c4u: goto label_29f4c4;
        case 0x29f55cu: goto label_29f55c;
        case 0x29f58cu: goto label_29f58c;
        case 0x29f598u: goto label_29f598;
        case 0x29f684u: goto label_29f684;
        case 0x29f6a8u: goto label_29f6a8;
        case 0x29f6c0u: goto label_29f6c0;
        default: break;
    }

    ctx->pc = 0x29f3c8u;

    // 0x29f3c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x29f3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x29f3cc: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x29f3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x29f3d0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x29f3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x29f3d4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x29f3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x29f3d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29f3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3dc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x29f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x29f3e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29f3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3e4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x29f3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x29f3e8: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x29f3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29f3ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x29f3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x29f3f0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x29f3f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3f4: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x29f3f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x29f3f8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x29f3f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3fc: 0x44156000  mfc1        $s5, $f12
    ctx->pc = 0x29f3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x29f400: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x29f400u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x29f404: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x29f404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x29f408: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x29f408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x29f40c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29f410: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x29f410u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x29f414: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x29f414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x29f418: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x29f418u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x29f41c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29F41Cu;
    {
        const bool branch_taken_0x29f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F41Cu;
        // 0x29f420: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f41c) {
            ctx->pc = 0x29F430u;
            goto label_29f430;
        }
    }
    ctx->pc = 0x29F424u;
    // 0x29f424: 0x0  nop
    ctx->pc = 0x29f424u;
    // NOP
label_29f428:
    // 0x29f428: 0x6400098  bltz        $s2, . + 4 + (0x98 << 2)
    ctx->pc = 0x29F428u;
    {
        const bool branch_taken_0x29f428 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x29f428) {
            ctx->pc = 0x29F68Cu;
            goto label_29f68c;
        }
    }
    ctx->pc = 0x29F430u;
label_29f430:
    // 0x29f430: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x29F430u;
    {
        const bool branch_taken_0x29f430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F430u;
        // 0x29f434: 0x2684b880  addiu       $a0, $s4, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f430) {
            ctx->pc = 0x29F554u;
            goto label_29f554;
        }
    }
    ctx->pc = 0x29F438u;
    // 0x29f438: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x29f438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f43c: 0x4600b307  neg.s       $f12, $f22
    ctx->pc = 0x29f43cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    // 0x29f440: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x29f440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29f444: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29f444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29f448: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29f448u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29f44c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29f44cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29f450: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29f450u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29f454: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29f454u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29f458: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x29f458u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x29f45c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29f45cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29f460: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29f460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29f464: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29f464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29f468: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29f468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29f46c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29f46cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x29f470: 0x4a0003bf  vwaitq
    ctx->pc = 0x29f470u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x29f474: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29f474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29f478: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29f478u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29f47c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29f480: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x29f484: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x29f484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x29f488: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29f488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x29f48c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29f490: 0xc0cd508  jal         func_335420
    ctx->pc = 0x29F490u;
    SET_GPR_U32(ctx, 31, 0x29F498u);
    ctx->pc = 0x29F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F490u;
    // 0x29f494: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x29F490u, 0x29F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F498u;
label_29f498:
    // 0x29f498: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29f498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29f49c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29f49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29f4a0: 0x26621740  addiu       $v0, $s3, 0x1740
    ctx->pc = 0x29f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x29f4a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29f4a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f4a8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x29f4a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29f4ac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x29f4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x29f4b0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x29F4B0u;
    SET_GPR_U32(ctx, 31, 0x29F4B8u);
    ctx->pc = 0x29F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4B0u;
    // 0x29f4b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x29F4B0u, 0x29F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4B8u;
label_29f4b8:
    // 0x29f4b8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x29f4b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29f4bc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x29F4BCu;
    SET_GPR_U32(ctx, 31, 0x29F4C4u);
    ctx->pc = 0x29F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4BCu;
    // 0x29f4c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x29F4BCu, 0x29F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4C4u;
label_29f4c4:
    // 0x29f4c4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29f4c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f4c8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x29f4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29f4cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29f4ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29f4d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29f4d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29f4d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29f4d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29f4d8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29f4d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29f4dc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x29f4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x29f4e0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29f4e4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x29f4e8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f4ec: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x29f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4f0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f4f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x29f4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29f4f8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x29f4f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29f4fc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x29f4fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29f500: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29f500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f504: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29f504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f508: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29f508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29f50c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29f50cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29f510: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x29f510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f514: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x29f514u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x29f518: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x29f518u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x29f51c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29f51cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f520: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x29f520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f524: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x29f524u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29f528: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29f528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f52c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x29f52cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x29f530: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x29f530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29f534: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x29f534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f538: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x29f538u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x29f53c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x29f53cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f540: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x29f540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f544: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x29f544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f548: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x29f548u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x29f54c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x29F54Cu;
    {
        const bool branch_taken_0x29f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F54Cu;
        // 0x29f550: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f54c) {
            ctx->pc = 0x29F62Cu;
            goto label_29f62c;
        }
    }
    ctx->pc = 0x29F554u;
label_29f554:
    // 0x29f554: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x29F554u;
    SET_GPR_U32(ctx, 31, 0x29F55Cu);
    ctx->pc = 0x29F558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F554u;
    // 0x29f558: 0x2684b880  addiu       $a0, $s4, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x29F554u, 0x29F55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F55Cu;
label_29f55c:
    // 0x29f55c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x29f55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x29f560: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x29f560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x29f564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29f564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29f568: 0x26631740  addiu       $v1, $s3, 0x1740
    ctx->pc = 0x29f568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x29f56c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29f56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29f570: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29f570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29f574: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x29f574u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29f578: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29f578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f57c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29f57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29f580: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x29f580u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x29f584: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x29F584u;
    SET_GPR_U32(ctx, 31, 0x29F58Cu);
    ctx->pc = 0x29F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F584u;
    // 0x29f588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x29F584u, 0x29F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F58Cu;
label_29f58c:
    // 0x29f58c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x29f58cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29f590: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x29F590u;
    SET_GPR_U32(ctx, 31, 0x29F598u);
    ctx->pc = 0x29F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F590u;
    // 0x29f594: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x29F590u, 0x29F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F598u;
label_29f598:
    // 0x29f598: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x29f598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f59c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29f5a0: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x29f5a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29f5a4: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x29f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
    // 0x29f5a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29f5a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29f5ac: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29f5acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x29f5b0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29f5b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29f5b4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29f5b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29f5b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x29f5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x29f5bc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x29f5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x29f5c0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29f5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f5c4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x29f5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f5c8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x29f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29f5cc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x29f5ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29f5d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x29f5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29f5d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x29f5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29f5d8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x29f5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29f5dc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29f5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x29f5e0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29f5e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f5e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29f5e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29f5e8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x29f5e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x29f5ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x29f5ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f5f0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x29f5f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x29f5f4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x29f5f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x29f5f8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29f5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f5fc: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x29f5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f600: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x29f600u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29f604: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x29f604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f608: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x29f608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x29f60c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x29f60cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29f610: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x29f610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f614: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x29f614u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x29f618: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x29f618u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x29f61c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x29f61cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f620: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x29f620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x29f624: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x29f624u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x29f628: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x29f628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_29f62c:
    // 0x29f62c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29f62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x29f630: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x29f630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f634: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29f634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f638: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x29f638u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29f63c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29f63cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29f640: 0x48b51000  qmtc2.ni    $s5, $vf2
    ctx->pc = 0x29f640u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 21));
    // 0x29f644: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29f644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x29f648: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29f648u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x29f64c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29f64cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x29f650: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29f650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x29f654: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29f654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x29f658: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29f658u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x29f65c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x29f65cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x29f660: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29f660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x29f664: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x29f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x29f668: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x29f668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x29f66c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x29f670: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x29f674: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x29f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x29f678: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29f678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x29f67c: 0xc0941c2  jal         func_250708
    ctx->pc = 0x29F67Cu;
    SET_GPR_U32(ctx, 31, 0x29F684u);
    ctx->pc = 0x29F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F67Cu;
    // 0x29f680: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x29F67Cu, 0x29F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F684u;
label_29f684:
    // 0x29f684: 0x1040ff68  beqz        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x29F684u;
    {
        const bool branch_taken_0x29f684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f684) {
            ctx->pc = 0x29F428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f428;
        }
    }
    ctx->pc = 0x29F68Cu;
label_29f68c:
    // 0x29f68c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29F68Cu;
    {
        const bool branch_taken_0x29f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F68Cu;
        // 0x29f690: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f68c) {
            ctx->pc = 0x29F6D0u;
            goto label_29f6d0;
        }
    }
    ctx->pc = 0x29F694u;
    // 0x29f694: 0x12d00006  beq         $s6, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29F694u;
    {
        const bool branch_taken_0x29f694 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 16));
        ctx->pc = 0x29F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F694u;
        // 0x29f698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f694) {
            ctx->pc = 0x29F6B0u;
            goto label_29f6b0;
        }
    }
    ctx->pc = 0x29F69Cu;
    // 0x29f69c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29f69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6a0: 0xc0937ba  jal         func_24DEE8
    ctx->pc = 0x29F6A0u;
    SET_GPR_U32(ctx, 31, 0x29F6A8u);
    ctx->pc = 0x29F6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6A0u;
    // 0x29f6a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEE8u, 0x29F6A0u, 0x29F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6A8u;
label_29f6a8:
    // 0x29f6a8: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x29F6A8u;
    {
        const bool branch_taken_0x29f6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6A8u;
        // 0x29f6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6a8) {
            ctx->pc = 0x29F6D4u;
            goto label_29f6d4;
        }
    }
    ctx->pc = 0x29F6B0u;
label_29f6b0:
    // 0x29f6b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x29f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x29f6b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29f6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29f6b8: 0xc0d3e54  jal         func_34F950
    ctx->pc = 0x29F6B8u;
    SET_GPR_U32(ctx, 31, 0x29F6C0u);
    ctx->pc = 0x29F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6B8u;
    // 0x29f6bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F950u, 0x29F6B8u, 0x29F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6C0u;
label_29f6c0:
    // 0x29f6c0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29f6c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f6c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29F6C8u;
    {
        const bool branch_taken_0x29f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F6C8u;
        // 0x29f6cc: 0x7ee30000  sq          $v1, 0x0($s7) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6c8) {
            ctx->pc = 0x29F6D4u;
            goto label_29f6d4;
        }
    }
    ctx->pc = 0x29F6D0u;
label_29f6d0:
    // 0x29f6d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29f6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f6d4:
    // 0x29f6d4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x29f6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29f6d8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x29f6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29f6dc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x29f6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29f6e0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x29f6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29f6e4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x29f6e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29f6e8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x29f6e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29f6ec: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x29f6ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29f6f0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x29f6f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29f6f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29f6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29f6f8: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x29f6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29f6fc: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x29f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29f700: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x29f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29f704: 0x3e00008  jr          $ra
    ctx->pc = 0x29F704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F704u;
        // 0x29f708: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F70Cu;
    // 0x29f70c: 0x0  nop
    ctx->pc = 0x29f70cu;
    // NOP
    ctx->pc = 0x29f710u;
}
