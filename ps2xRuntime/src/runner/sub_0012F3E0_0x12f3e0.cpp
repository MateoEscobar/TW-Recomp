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

// Function: sub_0012F3E0
// Address: 0x12f3e0 - 0x12f858
void sub_0012F3E0_0x12f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F3E0_0x12f3e0");
#endif

    switch (ctx->pc) {
        case 0x12f434u: goto label_12f434;
        case 0x12f47cu: goto label_12f47c;
        case 0x12f490u: goto label_12f490;
        case 0x12f4a4u: goto label_12f4a4;
        case 0x12f578u: goto label_12f578;
        case 0x12f658u: goto label_12f658;
        case 0x12f6ecu: goto label_12f6ec;
        case 0x12f7ccu: goto label_12f7cc;
        default: break;
    }

    ctx->pc = 0x12f3e0u;

    // 0x12f3e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x12f3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x12f3e4: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x12f3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x12f3e8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x12f3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x12f3ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12f3ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3f0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x12f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x12f3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3f8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x12f3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x12f3fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12f3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f400: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x12f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x12f404: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12f404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f408: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x12f408u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x12f40c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x12f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f410: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x12f410u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x12f414: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x12f414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f418: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x12f418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x12f41c: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x12f41cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x12f420: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x12f420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x12f424: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x12f424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f428: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x12f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x12f42c: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x12F42Cu;
    SET_GPR_U32(ctx, 31, 0x12F434u);
    ctx->pc = 0x12F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F42Cu;
    // 0x12f430: 0x26060180  addiu       $a2, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x12F42Cu, 0x12F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F434u;
label_12f434:
    // 0x12f434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12f434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12f438: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12f438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12f43c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12f43cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f444: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f448: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x12f448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f44c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f44cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f450: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x12f450u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x12f454: 0x4a0003bf  vwaitq
    ctx->pc = 0x12f454u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12f458: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x12f458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f45c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12f45cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f460: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f464: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x12f464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f468: 0x0  nop
    ctx->pc = 0x12f468u;
    // NOP
    // 0x12f46c: 0x0  nop
    ctx->pc = 0x12f46cu;
    // NOP
    // 0x12f470: 0x4614ab03  div.s       $f12, $f21, $f20
    ctx->pc = 0x12f470u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x12f474: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x12F474u;
    SET_GPR_U32(ctx, 31, 0x12F47Cu);
    ctx->pc = 0x12F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F474u;
    // 0x12f478: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12F474u, 0x12F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F47Cu;
label_12f47c:
    // 0x12f47c: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x12f47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x12f480: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x12f480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x12f484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12f484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f488: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12F488u;
    SET_GPR_U32(ctx, 31, 0x12F490u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12F488u, 0x12F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F490u;
label_12f490:
    // 0x12f490: 0x3c013fc2  lui         $at, 0x3FC2
    ctx->pc = 0x12f490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16322 << 16));
    // 0x12f494: 0x34215c21  ori         $at, $at, 0x5C21
    ctx->pc = 0x12f494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23585);
    // 0x12f498: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12f498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f49c: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x12F49Cu;
    SET_GPR_U32(ctx, 31, 0x12F4A4u);
    ctx->pc = 0x12F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F49Cu;
    // 0x12f4a0: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x12F49Cu, 0x12F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4A4u;
label_12f4a4:
    // 0x12f4a4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x12f4a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f4a8: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x12f4a8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x12f4ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12f4acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f4b0: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12f4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f4b4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12f4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12f4b8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12f4b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x12f4bc: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12f4bcu;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12f4c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x12f4c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x12f4c4: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12f4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f4c8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x12f4c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f4cc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12f4ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f4d0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x12f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x12f4d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f4d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12f4d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12f4dc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12f4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f4e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f4e4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12f4e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f4e8: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x12f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x12f4ec: 0x46003107  neg.s       $f4, $f6
    ctx->pc = 0x12f4ecu;
    ctx->f[4] = FPU_NEG_S(ctx->f[6]);
    // 0x12f4f0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x12f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f4f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x12f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f4f8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x12f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f4fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12f4fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12f500: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x12f500u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x12f504: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x12f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f508: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x12f508u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x12f50c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x12f50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x12f510: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x12f510u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12f514: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x12f514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x12f518: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x12f518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x12f51c: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x12f51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f520: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x12f520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x12f524: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x12f524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x12f528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f52c: 0x7a040180  lq          $a0, 0x180($s0)
    ctx->pc = 0x12f52cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x12f530: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x12f530u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x12f534: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x12f534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12f538: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x12f538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x12f53c: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x12f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x12f540: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x12f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x12f544: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x12f544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12f548: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x12F548u;
    {
        const bool branch_taken_0x12f548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F548u;
        // 0x12f54c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f548) {
            ctx->pc = 0x12F6A4u;
            goto label_12f6a4;
        }
    }
    ctx->pc = 0x12F550u;
    // 0x12f550: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x12f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f558: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12f558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f55c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x12f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x12f560: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x12f560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x12f564: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12f564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f568: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f56c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12f56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12f570: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12F570u;
    SET_GPR_U32(ctx, 31, 0x12F578u);
    ctx->pc = 0x12F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F570u;
    // 0x12f574: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12F570u, 0x12F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F578u;
label_12f578:
    // 0x12f578: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f57c: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x12F57Cu;
    {
        const bool branch_taken_0x12f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F57Cu;
        // 0x12f580: 0x7ba40050  lq          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f57c) {
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F584u;
    // 0x12f584: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x12f584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f588: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12f588u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f58c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12f58cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f590: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12f590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f594: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f598: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12f598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f59c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12f59cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f5a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5a4: 0x0  nop
    ctx->pc = 0x12f5a4u;
    // NOP
    // 0x12f5a8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x12f5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f5ac: 0x0  nop
    ctx->pc = 0x12f5acu;
    // NOP
    // 0x12f5b0: 0x4500009c  bc1f        . + 4 + (0x9C << 2)
    ctx->pc = 0x12F5B0u;
    {
        const bool branch_taken_0x12f5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5B0u;
        // 0x12f5b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5b0) {
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F5B8u;
    // 0x12f5b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12f5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f5bc: 0xa2030460  sb          $v1, 0x460($s0)
    ctx->pc = 0x12f5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1120), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f5c0: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x12f5c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12f5c4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f5c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f5c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x12f5c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f5cc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12f5ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f5d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f5d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f5d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12f5d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f5d8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12f5d8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f5dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x12f5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12f5e0: 0x0  nop
    ctx->pc = 0x12f5e0u;
    // NOP
    // 0x12f5e4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x12f5e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f5e8: 0x0  nop
    ctx->pc = 0x12f5e8u;
    // NOP
    // 0x12f5ec: 0x4502008d  bc1fl       . + 4 + (0x8D << 2)
    ctx->pc = 0x12F5ECu;
    {
        const bool branch_taken_0x12f5ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f5ec) {
            ctx->pc = 0x12F5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5ECu;
            // 0x12f5f0: 0xe60103a4  swc1        $f1, 0x3A4($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F5F4u;
    // 0x12f5f4: 0x4603a836  c.le.s      $f21, $f3
    ctx->pc = 0x12f5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f5f8: 0x0  nop
    ctx->pc = 0x12f5f8u;
    // NOP
    // 0x12f5fc: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x12F5FCu;
    {
        const bool branch_taken_0x12f5fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5FCu;
        // 0x12f600: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5fc) {
            ctx->pc = 0x12F66Cu;
            goto label_12f66c;
        }
    }
    ctx->pc = 0x12F604u;
    // 0x12f604: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12f604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12f608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f60c: 0x0  nop
    ctx->pc = 0x12f60cu;
    // NOP
    // 0x12f610: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x12f610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f614: 0x0  nop
    ctx->pc = 0x12f614u;
    // NOP
    // 0x12f618: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x12F618u;
    {
        const bool branch_taken_0x12f618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f618) {
            ctx->pc = 0x12F61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F618u;
            // 0x12f61c: 0x46031b02  mul.s       $f12, $f3, $f3 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F634u;
            goto label_12f634;
        }
    }
    ctx->pc = 0x12F620u;
    // 0x12f620: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12f624: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12f628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f62c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12F62Cu;
    {
        const bool branch_taken_0x12f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f62c) {
            ctx->pc = 0x12F66Cu;
            goto label_12f66c;
        }
    }
    ctx->pc = 0x12F634u;
label_12f634:
    // 0x12f634: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x12f634u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x12f638: 0x0  nop
    ctx->pc = 0x12f638u;
    // NOP
    // 0x12f63c: 0x0  nop
    ctx->pc = 0x12f63cu;
    // NOP
    // 0x12f640: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12f640u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x12f644: 0x0  nop
    ctx->pc = 0x12f644u;
    // NOP
    // 0x12f648: 0x0  nop
    ctx->pc = 0x12f648u;
    // NOP
    // 0x12f64c: 0x460c1b03  div.s       $f12, $f3, $f12
    ctx->pc = 0x12f64cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[3], ctx->f[12]); }
    // 0x12f650: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x12F650u;
    SET_GPR_U32(ctx, 31, 0x12F658u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12F650u, 0x12F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F658u;
label_12f658:
    // 0x12f658: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x12f65c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f65cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12f660: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f664: 0x0  nop
    ctx->pc = 0x12f664u;
    // NOP
    // 0x12f668: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12f66c:
    // 0x12f66c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12f66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x12f670: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12f674: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12f674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f678: 0xc60103a4  lwc1        $f1, 0x3A4($s0)
    ctx->pc = 0x12f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f67c: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x12f67cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x12f680: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12f680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x12f684: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12f684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12f688: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12f688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12f68c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x12f68cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x12f690: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12f690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12f694: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12f694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f698: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x12f698u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x12f69c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x12F69Cu;
    {
        const bool branch_taken_0x12f69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F69Cu;
        // 0x12f6a0: 0xe60103a4  swc1        $f1, 0x3A4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f69c) {
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F6A4u;
label_12f6a4:
    // 0x12f6a4: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x12f6a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f6a8: 0x0  nop
    ctx->pc = 0x12f6a8u;
    // NOP
    // 0x12f6ac: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x12F6ACu;
    {
        const bool branch_taken_0x12f6ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6ACu;
        // 0x12f6b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6ac) {
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F6B4u;
    // 0x12f6b4: 0xc6020208  lwc1        $f2, 0x208($s0)
    ctx->pc = 0x12f6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f6b8: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x12f6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
    // 0x12f6bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12f6bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12f6c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f6c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12f6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6c8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x12f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f6cc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12f6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f6d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x12f6d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x12f6d4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x12f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x12f6d8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f6dc: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x12f6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x12f6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12f6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12f6e4: 0xc0d4336  jal         func_350CD8
    ctx->pc = 0x12F6E4u;
    SET_GPR_U32(ctx, 31, 0x12F6ECu);
    ctx->pc = 0x12F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6E4u;
    // 0x12f6e8: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x12F6E4u, 0x12F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6ECu;
label_12f6ec:
    // 0x12f6ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x12f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f6f0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x12F6F0u;
    {
        const bool branch_taken_0x12f6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6F0u;
        // 0x12f6f4: 0x7ba40050  lq          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6f0) {
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F6F8u;
    // 0x12f6f8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x12f6f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12f6fc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12f6fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f700: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12f700u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f704: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12f704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f708: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f70c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12f70cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f710: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12f710u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f718: 0x0  nop
    ctx->pc = 0x12f718u;
    // NOP
    // 0x12f71c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x12f71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f720: 0x0  nop
    ctx->pc = 0x12f720u;
    // NOP
    // 0x12f724: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x12F724u;
    {
        const bool branch_taken_0x12f724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F724u;
        // 0x12f728: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f724) {
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F72Cu;
    // 0x12f72c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12f72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f730: 0xa2030460  sb          $v1, 0x460($s0)
    ctx->pc = 0x12f730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1120), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f734: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x12f734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12f738: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12f738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12f73c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x12f73cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x12f740: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12f740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f744: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12f744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f748: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12f748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12f74c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12f74cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12f750: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x12f750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12f754: 0x0  nop
    ctx->pc = 0x12f754u;
    // NOP
    // 0x12f758: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x12f758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f75c: 0x0  nop
    ctx->pc = 0x12f75cu;
    // NOP
    // 0x12f760: 0x45020030  bc1fl       . + 4 + (0x30 << 2)
    ctx->pc = 0x12F760u;
    {
        const bool branch_taken_0x12f760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f760) {
            ctx->pc = 0x12F764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F760u;
            // 0x12f764: 0xe60103a4  swc1        $f1, 0x3A4($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F824u;
            goto label_12f824;
        }
    }
    ctx->pc = 0x12F768u;
    // 0x12f768: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x12f768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f76c: 0x0  nop
    ctx->pc = 0x12f76cu;
    // NOP
    // 0x12f770: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x12F770u;
    {
        const bool branch_taken_0x12f770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f770) {
            ctx->pc = 0x12F7E0u;
            goto label_12f7e0;
        }
    }
    ctx->pc = 0x12F778u;
    // 0x12f778: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12f77c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12f77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f780: 0x0  nop
    ctx->pc = 0x12f780u;
    // NOP
    // 0x12f784: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12f784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f788: 0x0  nop
    ctx->pc = 0x12f788u;
    // NOP
    // 0x12f78c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x12F78Cu;
    {
        const bool branch_taken_0x12f78c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f78c) {
            ctx->pc = 0x12F790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F78Cu;
            // 0x12f790: 0x4614a302  mul.s       $f12, $f20, $f20 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F7A8u;
            goto label_12f7a8;
        }
    }
    ctx->pc = 0x12F794u;
    // 0x12f794: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12f794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12f798: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12f79c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f7a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12F7A0u;
    {
        const bool branch_taken_0x12f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f7a0) {
            ctx->pc = 0x12F7E0u;
            goto label_12f7e0;
        }
    }
    ctx->pc = 0x12F7A8u;
label_12f7a8:
    // 0x12f7a8: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x12f7a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x12f7ac: 0x0  nop
    ctx->pc = 0x12f7acu;
    // NOP
    // 0x12f7b0: 0x0  nop
    ctx->pc = 0x12f7b0u;
    // NOP
    // 0x12f7b4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12f7b4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x12f7b8: 0x0  nop
    ctx->pc = 0x12f7b8u;
    // NOP
    // 0x12f7bc: 0x0  nop
    ctx->pc = 0x12f7bcu;
    // NOP
    // 0x12f7c0: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x12f7c0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
    // 0x12f7c4: 0xc0cd5a8  jal         func_3356A0
    ctx->pc = 0x12F7C4u;
    SET_GPR_U32(ctx, 31, 0x12F7CCu);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12F7C4u, 0x12F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F7CCu;
label_12f7cc:
    // 0x12f7cc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x12f7d0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f7d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12f7d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12f7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f7d8: 0x0  nop
    ctx->pc = 0x12f7d8u;
    // NOP
    // 0x12f7dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12f7dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12f7e0:
    // 0x12f7e0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12f7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x12f7e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12f7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12f7e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12f7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12f7ec: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x12f7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x12f7f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12f7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12f7f4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x12f7f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x12f7f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12f7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x12f7fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12f7fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12f800: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12f800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12f804: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x12f804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x12f808: 0xc60103a4  lwc1        $f1, 0x3A4($s0)
    ctx->pc = 0x12f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f80c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x12f80cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x12f810: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x12f810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x12f814: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12f814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x12f818: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12f818u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f81c: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x12f81cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x12f820: 0xe60103a4  swc1        $f1, 0x3A4($s0)
    ctx->pc = 0x12f820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
label_12f824:
    // 0x12f824: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x12f824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12f828: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x12f828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12f82c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x12f82cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12f830: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x12f830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12f834: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x12f834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12f838: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x12f838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12f83c: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x12f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12f840: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x12f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12f844: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x12f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12f848: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x12f848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12f84c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F84Cu;
        // 0x12f850: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F854u;
    // 0x12f854: 0x0  nop
    ctx->pc = 0x12f854u;
    // NOP
    ctx->pc = 0x12f858u;
}
