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

// Function: sub_003A5530
// Address: 0x3a5530 - 0x3a57d8
void sub_003A5530_0x3a5530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5530_0x3a5530");
#endif

    switch (ctx->pc) {
        case 0x3a5584u: goto label_3a5584;
        case 0x3a559cu: goto label_3a559c;
        case 0x3a5618u: goto label_3a5618;
        case 0x3a5650u: goto label_3a5650;
        case 0x3a5670u: goto label_3a5670;
        case 0x3a567cu: goto label_3a567c;
        case 0x3a5688u: goto label_3a5688;
        case 0x3a5698u: goto label_3a5698;
        case 0x3a56a4u: goto label_3a56a4;
        case 0x3a56ecu: goto label_3a56ec;
        case 0x3a5704u: goto label_3a5704;
        case 0x3a571cu: goto label_3a571c;
        case 0x3a573cu: goto label_3a573c;
        case 0x3a576cu: goto label_3a576c;
        case 0x3a5778u: goto label_3a5778;
        case 0x3a5784u: goto label_3a5784;
        case 0x3a5794u: goto label_3a5794;
        case 0x3a579cu: goto label_3a579c;
        default: break;
    }

    ctx->pc = 0x3a5530u;

    // 0x3a5530: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3a5530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3a5534: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a5534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a5538: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3a5538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x3a553c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3a553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x3a5540: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3a5540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5544: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3a5544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x3a5548: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3a5548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a554c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3a554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x3a5550: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a5550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5554: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3a5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x3a5558: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3a5558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3a555c: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x3a555cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3a5560: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x3a5560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x3a5564: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x3a5564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x3a5568: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3a5568u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3a556c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a556cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5570: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a5570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a5574: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a5574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3a5578: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3a5578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a557c: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A557Cu;
    SET_GPR_U32(ctx, 31, 0x3A5584u);
    ctx->pc = 0x3A5580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A557Cu;
    // 0x3a5580: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A557Cu, 0x3A5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5584u;
label_3a5584:
    // 0x3a5584: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a5584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a5588: 0x54400085  bnel        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x3A5588u;
    {
        const bool branch_taken_0x3a5588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5588) {
            ctx->pc = 0x3A558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5588u;
            // 0x3a558c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A57A0u;
            goto label_3a57a0;
        }
    }
    ctx->pc = 0x3A5590u;
    // 0x3a5590: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3a5590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a5594: 0xc0e910a  jal         func_3A4428
    ctx->pc = 0x3A5594u;
    SET_GPR_U32(ctx, 31, 0x3A559Cu);
    ctx->pc = 0x3A5598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5594u;
    // 0x3a5598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4428u, 0x3A5594u, 0x3A559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A559Cu;
label_3a559c:
    // 0x3a559c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3a559cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a55a0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a55a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a55a4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a55a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3a55a8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3a55a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3a55ac: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3a55acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x3a55b0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a55b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a55b4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a55b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a55b8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3a55b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3a55bc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a55bcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3a55c0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a55c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3a55c4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a55c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3a55c8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3a55c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3a55cc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3a55ccu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a55d0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a55d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3a55d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3a55d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3a55d8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3a55d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a55dc: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3a55dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3a55e0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3a55e0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3a55e4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3a55e4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3a55e8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3a55e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3a55ec: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3a55ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3a55f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3a55f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3a55f4: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3a55f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a55f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a55f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3a55fc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3a55fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3a5600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a5600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5604: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a5604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3a5608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a5608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a560c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3a5610: 0xc0e90b6  jal         func_3A42D8
    ctx->pc = 0x3A5610u;
    SET_GPR_U32(ctx, 31, 0x3A5618u);
    ctx->pc = 0x3A5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5610u;
    // 0x3a5614: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A42D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A42D8u, 0x3A5610u, 0x3A5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5618u;
label_3a5618:
    // 0x3a5618: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x3a5618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x3a561c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a561cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a5620: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3a5620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5624: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3a5624u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a5628: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a5628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a562c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a562cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a5630: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a5630u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a5634: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a5634u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a5638: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a5638u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a563c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5640: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a5640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3a5644: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3a5644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3a5648: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A5648u;
    SET_GPR_U32(ctx, 31, 0x3A5650u);
    ctx->pc = 0x3A564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5648u;
    // 0x3a564c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A5648u, 0x3A5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5650u;
label_3a5650:
    // 0x3a5650: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3a5650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x3a5654: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a5654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a5658: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a565c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a565cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3a5660: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a5660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a5664: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a5664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a5668: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A5668u;
    SET_GPR_U32(ctx, 31, 0x3A5670u);
    ctx->pc = 0x3A566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5668u;
    // 0x3a566c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5668u, 0x3A5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5670u;
label_3a5670:
    // 0x3a5670: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5674: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A5674u;
    SET_GPR_U32(ctx, 31, 0x3A567Cu);
    ctx->pc = 0x3A5678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5674u;
    // 0x3a5678: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5674u, 0x3A567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A567Cu;
label_3a567c:
    // 0x3a567c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5680: 0xc0e8b70  jal         func_3A2DC0
    ctx->pc = 0x3A5680u;
    SET_GPR_U32(ctx, 31, 0x3A5688u);
    ctx->pc = 0x3A5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5680u;
    // 0x3a5684: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3A5680u, 0x3A5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5688u;
label_3a5688:
    // 0x3a5688: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a568c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5690: 0xc0e8b98  jal         func_3A2E60
    ctx->pc = 0x3A5690u;
    SET_GPR_U32(ctx, 31, 0x3A5698u);
    ctx->pc = 0x3A5694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5690u;
    // 0x3a5694: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x3A5690u, 0x3A5698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5698u;
label_3a5698:
    // 0x3a5698: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a569c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A569Cu;
    SET_GPR_U32(ctx, 31, 0x3A56A4u);
    ctx->pc = 0x3A56A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A569Cu;
    // 0x3a56a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A569Cu, 0x3A56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A56A4u;
label_3a56a4:
    // 0x3a56a4: 0x7a0300b0  lq          $v1, 0xB0($s0)
    ctx->pc = 0x3a56a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3a56a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a56a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a56ac: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3a56acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x3a56b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a56b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a56b4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3a56b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a56b8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3a56b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a56bc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3a56bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a56c0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3a56c0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3a56c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x3a56c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3a56c8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3a56c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a56cc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a56ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a56d0: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3a56d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
    // 0x3a56d4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a56d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3a56d8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3a56d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3a56dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a56dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56e0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3a56e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x3a56e4: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A56E4u;
    SET_GPR_U32(ctx, 31, 0x3A56ECu);
    ctx->pc = 0x3A56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A56E4u;
    // 0x3a56e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A56E4u, 0x3A56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A56ECu;
label_3a56ec:
    // 0x3a56ec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3a56ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3a56f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a56f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56f4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a56f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a56f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a56f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a56fc: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A56FCu;
    SET_GPR_U32(ctx, 31, 0x3A5704u);
    ctx->pc = 0x3A5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A56FCu;
    // 0x3a5700: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A56FCu, 0x3A5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5704u;
label_3a5704:
    // 0x3a5704: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3a5704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3a5708: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a5708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a570c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a570cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a5710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5714: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5714u;
    SET_GPR_U32(ctx, 31, 0x3A571Cu);
    ctx->pc = 0x3A5718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5714u;
    // 0x3a5718: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5714u, 0x3A571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A571Cu;
label_3a571c:
    // 0x3a571c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3a571cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3a5720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a5720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a5724: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a5724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a5728: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3a5728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3a572c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a572cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a5730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5734: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A5734u;
    SET_GPR_U32(ctx, 31, 0x3A573Cu);
    ctx->pc = 0x3A5738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5734u;
    // 0x3a5738: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A5734u, 0x3A573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A573Cu;
label_3a573c:
    // 0x3a573c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3a573cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a5740: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a5740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a5744: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a5744u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a5748: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a5748u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a574c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a574cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a5750: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a5750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a5754: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5758: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a5758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3a575c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3a575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x3a5760: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3a5760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x3a5764: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A5764u;
    SET_GPR_U32(ctx, 31, 0x3A576Cu);
    ctx->pc = 0x3A5768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5764u;
    // 0x3a5768: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A5764u, 0x3A576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A576Cu;
label_3a576c:
    // 0x3a576c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5770: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A5770u;
    SET_GPR_U32(ctx, 31, 0x3A5778u);
    ctx->pc = 0x3A5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5770u;
    // 0x3a5774: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A5770u, 0x3A5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5778u;
label_3a5778:
    // 0x3a5778: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a577c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A577Cu;
    SET_GPR_U32(ctx, 31, 0x3A5784u);
    ctx->pc = 0x3A5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A577Cu;
    // 0x3a5780: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A577Cu, 0x3A5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5784u;
label_3a5784:
    // 0x3a5784: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a5784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a5788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a5788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a578c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3A578Cu;
    SET_GPR_U32(ctx, 31, 0x3A5794u);
    ctx->pc = 0x3A5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A578Cu;
    // 0x3a5790: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3A578Cu, 0x3A5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5794u;
label_3a5794:
    // 0x3a5794: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A5794u;
    SET_GPR_U32(ctx, 31, 0x3A579Cu);
    ctx->pc = 0x3A5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5794u;
    // 0x3a5798: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A5794u, 0x3A579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A579Cu;
label_3a579c:
    // 0x3a579c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a579cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a57a0:
    // 0x3a57a0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3a57a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3a57a4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3a57a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3a57a8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3a57a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3a57ac: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3a57acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a57b0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3a57b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a57b4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3a57b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a57b8: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x3a57b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a57bc: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x3a57bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a57c0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x3a57c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a57c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A57C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57C4u;
        // 0x3a57c8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A57C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A57CCu;
    // 0x3a57cc: 0x0  nop
    ctx->pc = 0x3a57ccu;
    // NOP
    // 0x3a57d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a57d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a57d4: 0x0  nop
    ctx->pc = 0x3a57d4u;
    // NOP
    ctx->pc = 0x3a57d8u;
}
