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

// Function: sub_00346500
// Address: 0x346500 - 0x346680
void sub_00346500_0x346500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346500_0x346500");
#endif

    switch (ctx->pc) {
        case 0x3465a4u: goto label_3465a4;
        default: break;
    }

    ctx->pc = 0x346500u;

    // 0x346500: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x346500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x346504: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x346504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x346508: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x346508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34650c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x34650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x346510: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x346510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346514: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x346514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x346518: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x346518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34651c: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x34651cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x346520: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x346520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346524: 0x7a080050  lq          $t0, 0x50($s0)
    ctx->pc = 0x346524u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x346528: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x346528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x34652c: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x34652cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x346530: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x346530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x346534: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x346534u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346538: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346538u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34653c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x34653cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346540: 0x482a1000  qmfc2.ni    $t2, $vf2
    ctx->pc = 0x346540u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x346544: 0x7a270050  lq          $a3, 0x50($s1)
    ctx->pc = 0x346544u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x346548: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x346548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34654c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34654cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346550: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346550u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346554: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x346554u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346558: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x346558u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34655c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x34655cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x346560: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x346560u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346564: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346564u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346568: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x346568u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x34656c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x34656cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x346570: 0x7faa0040  sq          $t2, 0x40($sp)
    ctx->pc = 0x346570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
    // 0x346574: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x346574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x346578: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x346578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x34657c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x34657cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x346580: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x346580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x346584: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x346584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346588: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x346588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x34658c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x34658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x346590: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x346590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x346594: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x346594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x346598: 0x7faa0010  sq          $t2, 0x10($sp)
    ctx->pc = 0x346598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 10));
    // 0x34659c: 0xc0d2b54  jal         func_34AD50
    ctx->pc = 0x34659Cu;
    SET_GPR_U32(ctx, 31, 0x3465A4u);
    ctx->pc = 0x3465A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34659Cu;
    // 0x3465a0: 0x7fa90020  sq          $t1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AD50u, 0x34659Cu, 0x3465A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465A4u;
label_3465a4:
    // 0x3465a4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x3465a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3465a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3465a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3465ac: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x3465acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3465b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3465b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3465b4: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x3465b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3465b8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x3465b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3465bc: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x3465bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3465c0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3465c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3465c4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3465c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3465c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3465c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3465cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3465ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3465d0: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3465d0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3465d4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3465d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3465d8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3465d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3465dc: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3465dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3465e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3465e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3465e4: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3465e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3465e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3465e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3465ec: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3465ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3465f0: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3465f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3465f4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3465f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3465f8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3465f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3465fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3465fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346600: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x346600u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x346604: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x346604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x346608: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x346608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x34660c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34660cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x346610: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x346610u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x346614: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x346614u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x346618: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x346618u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34661c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x34661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x346620: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x346620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346624: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x346624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x346628: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x346628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x34662c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x34662cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346630: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x346630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x346634: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x346634u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x346638: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x346638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x34663c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34663cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346640: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x346640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x346644: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x346644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346648: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x346648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x34664c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x34664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x346650: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x346650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x346654: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x346654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x346658: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x346658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34665c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x34665Cu;
    {
        const bool branch_taken_0x34665c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x346660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34665Cu;
        // 0x346660: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34665c) {
            ctx->pc = 0x346668u;
            goto label_346668;
        }
    }
    ctx->pc = 0x346664u;
    // 0x346664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x346664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346668:
    // 0x346668: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x346668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34666c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x34666cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346670: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x346670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x346674: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x346674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x346678: 0x3e00008  jr          $ra
    ctx->pc = 0x346678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346678u;
        // 0x34667c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346680u;
}
