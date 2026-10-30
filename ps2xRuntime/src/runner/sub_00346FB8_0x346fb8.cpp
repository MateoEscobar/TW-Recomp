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

// Function: sub_00346FB8
// Address: 0x346fb8 - 0x347148
void sub_00346FB8_0x346fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346FB8_0x346fb8");
#endif

    switch (ctx->pc) {
        case 0x347068u: goto label_347068;
        default: break;
    }

    ctx->pc = 0x346fb8u;

    // 0x346fb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x346fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x346fbc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x346fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x346fc0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x346fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x346fc4: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x346fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x346fc8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x346fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x346fcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x346fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fd0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x346fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x346fd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x346fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fd8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x346fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x346fdc: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x346fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x346fe0: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x346fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346fe4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x346fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346fe8: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x346fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x346fec: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x346fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346ff0: 0x7a0a0050  lq          $t2, 0x50($s0)
    ctx->pc = 0x346ff0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x346ff4: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x346ff4u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x511740u));
    // 0x346ff8: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x346ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x346ffc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x346ffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x347000: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x347000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347004: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x347004u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x347008: 0x482b1000  qmfc2.ni    $t3, $vf2
    ctx->pc = 0x347008u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34700c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34700cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x347010: 0x7fab0040  sq          $t3, 0x40($sp)
    ctx->pc = 0x347010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 11));
    // 0x347014: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x347014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x347018: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x347018u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x34701c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34701cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x347020: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x347020u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347024: 0x7a230050  lq          $v1, 0x50($s1)
    ctx->pc = 0x347024u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x347028: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x347028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34702c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34702cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x347030: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x347030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347034: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x347034u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x347038: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x347038u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34703c: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x34703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x347040: 0x7faa0010  sq          $t2, 0x10($sp)
    ctx->pc = 0x347040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 10));
    // 0x347044: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x347044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x347048: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x347048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x34704c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x34704cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x347050: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x347050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x347054: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x347054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x347058: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x347058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34705c: 0x7fab0010  sq          $t3, 0x10($sp)
    ctx->pc = 0x34705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 11));
    // 0x347060: 0xc0d2b54  jal         func_34AD50
    ctx->pc = 0x347060u;
    SET_GPR_U32(ctx, 31, 0x347068u);
    ctx->pc = 0x347064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347060u;
    // 0x347064: 0x7fa90020  sq          $t1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AD50u, 0x347060u, 0x347068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347068u;
label_347068:
    // 0x347068: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x347068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34706c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34706cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347070: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x347070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347074: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x347074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x347078: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x347078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34707c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x34707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347080: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x347080u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347084: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x347084u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x347088: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x347088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x34708c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x34708cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x347090: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x347090u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x347094: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x347094u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347098: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x347098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34709c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x34709cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3470a0: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3470a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3470a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3470a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3470a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3470a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3470ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3470acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3470b0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3470b0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3470b4: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3470b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3470b8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3470b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3470bc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3470bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3470c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3470c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3470c4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x3470c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3470c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3470c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3470cc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3470ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3470d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3470d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3470d4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3470d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3470d8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3470d8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3470dc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3470dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3470e0: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x3470e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x3470e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3470e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3470e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3470e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3470ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3470ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3470f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3470f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3470f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3470f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3470f8: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x3470f8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3470fc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3470fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x347100: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x347100u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347104: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x347104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
    // 0x347108: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x347108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34710c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x34710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x347110: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x347110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x347114: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x347114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x347118: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x347118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x34711c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x347120: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x347120u;
    {
        const bool branch_taken_0x347120 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x347124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347120u;
        // 0x347124: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347120) {
            ctx->pc = 0x34712Cu;
            goto label_34712c;
        }
    }
    ctx->pc = 0x347128u;
    // 0x347128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34712c:
    // 0x34712c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x34712cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x347130: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x347130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347134: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x347134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x347138: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x347138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34713c: 0x3e00008  jr          $ra
    ctx->pc = 0x34713Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34713Cu;
        // 0x347140: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34713Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347144u;
    // 0x347144: 0x0  nop
    ctx->pc = 0x347144u;
    // NOP
    ctx->pc = 0x347148u;
}
