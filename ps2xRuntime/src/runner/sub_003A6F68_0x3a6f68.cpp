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

// Function: sub_003A6F68
// Address: 0x3a6f68 - 0x3a7d58
void sub_003A6F68_0x3a6f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6F68_0x3a6f68");
#endif

    switch (ctx->pc) {
        case 0x3a7030u: goto label_3a7030;
        case 0x3a70bcu: goto label_3a70bc;
        case 0x3a7118u: goto label_3a7118;
        case 0x3a7128u: goto label_3a7128;
        case 0x3a7140u: goto label_3a7140;
        case 0x3a714cu: goto label_3a714c;
        case 0x3a7214u: goto label_3a7214;
        case 0x3a7230u: goto label_3a7230;
        case 0x3a723cu: goto label_3a723c;
        case 0x3a728cu: goto label_3a728c;
        case 0x3a72d4u: goto label_3a72d4;
        case 0x3a7368u: goto label_3a7368;
        case 0x3a7384u: goto label_3a7384;
        case 0x3a7394u: goto label_3a7394;
        case 0x3a740cu: goto label_3a740c;
        case 0x3a7440u: goto label_3a7440;
        case 0x3a745cu: goto label_3a745c;
        case 0x3a7468u: goto label_3a7468;
        case 0x3a74a4u: goto label_3a74a4;
        case 0x3a7500u: goto label_3a7500;
        case 0x3a7520u: goto label_3a7520;
        case 0x3a7530u: goto label_3a7530;
        case 0x3a7540u: goto label_3a7540;
        case 0x3a75c4u: goto label_3a75c4;
        case 0x3a75e4u: goto label_3a75e4;
        case 0x3a75f0u: goto label_3a75f0;
        case 0x3a75fcu: goto label_3a75fc;
        case 0x3a7680u: goto label_3a7680;
        case 0x3a769cu: goto label_3a769c;
        case 0x3a76a8u: goto label_3a76a8;
        case 0x3a76f8u: goto label_3a76f8;
        case 0x3a7710u: goto label_3a7710;
        case 0x3a7724u: goto label_3a7724;
        case 0x3a7740u: goto label_3a7740;
        case 0x3a777cu: goto label_3a777c;
        case 0x3a778cu: goto label_3a778c;
        case 0x3a77a4u: goto label_3a77a4;
        case 0x3a77d0u: goto label_3a77d0;
        case 0x3a7820u: goto label_3a7820;
        case 0x3a7834u: goto label_3a7834;
        case 0x3a7858u: goto label_3a7858;
        case 0x3a7884u: goto label_3a7884;
        case 0x3a78b0u: goto label_3a78b0;
        case 0x3a78dcu: goto label_3a78dc;
        case 0x3a78e8u: goto label_3a78e8;
        case 0x3a78f8u: goto label_3a78f8;
        case 0x3a7990u: goto label_3a7990;
        case 0x3a79ccu: goto label_3a79cc;
        case 0x3a7a24u: goto label_3a7a24;
        case 0x3a7a74u: goto label_3a7a74;
        case 0x3a7a80u: goto label_3a7a80;
        case 0x3a7a88u: goto label_3a7a88;
        case 0x3a7a98u: goto label_3a7a98;
        case 0x3a7aa0u: goto label_3a7aa0;
        case 0x3a7b78u: goto label_3a7b78;
        case 0x3a7b88u: goto label_3a7b88;
        case 0x3a7b9cu: goto label_3a7b9c;
        case 0x3a7bb8u: goto label_3a7bb8;
        case 0x3a7bf4u: goto label_3a7bf4;
        case 0x3a7c04u: goto label_3a7c04;
        case 0x3a7c3cu: goto label_3a7c3c;
        case 0x3a7c50u: goto label_3a7c50;
        case 0x3a7ca4u: goto label_3a7ca4;
        case 0x3a7cb0u: goto label_3a7cb0;
        case 0x3a7ce4u: goto label_3a7ce4;
        case 0x3a7d04u: goto label_3a7d04;
        case 0x3a7d14u: goto label_3a7d14;
        default: break;
    }

    ctx->pc = 0x3a6f68u;

    // 0x3a6f68: 0x27bdfa10  addiu       $sp, $sp, -0x5F0
    ctx->pc = 0x3a6f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965776));
    // 0x3a6f6c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3a6f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f70: 0x7fb40570  sq          $s4, 0x570($sp)
    ctx->pc = 0x3a6f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), GPR_VEC(ctx, 20));
    // 0x3a6f74: 0xe7b805e0  swc1        $f24, 0x5E0($sp)
    ctx->pc = 0x3a6f74u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1504), bits); }
    // 0x3a6f78: 0x7fb005b0  sq          $s0, 0x5B0($sp)
    ctx->pc = 0x3a6f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1456), GPR_VEC(ctx, 16));
    // 0x3a6f7c: 0x7fb105a0  sq          $s1, 0x5A0($sp)
    ctx->pc = 0x3a6f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1440), GPR_VEC(ctx, 17));
    // 0x3a6f80: 0x7fb20590  sq          $s2, 0x590($sp)
    ctx->pc = 0x3a6f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1424), GPR_VEC(ctx, 18));
    // 0x3a6f84: 0x7fb30580  sq          $s3, 0x580($sp)
    ctx->pc = 0x3a6f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), GPR_VEC(ctx, 19));
    // 0x3a6f88: 0x7fb50560  sq          $s5, 0x560($sp)
    ctx->pc = 0x3a6f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 21));
    // 0x3a6f8c: 0x7fb60550  sq          $s6, 0x550($sp)
    ctx->pc = 0x3a6f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), GPR_VEC(ctx, 22));
    // 0x3a6f90: 0x7fb70540  sq          $s7, 0x540($sp)
    ctx->pc = 0x3a6f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 23));
    // 0x3a6f94: 0x7fbe0530  sq          $fp, 0x530($sp)
    ctx->pc = 0x3a6f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 30));
    // 0x3a6f98: 0xffbf0520  sd          $ra, 0x520($sp)
    ctx->pc = 0x3a6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 31));
    // 0x3a6f9c: 0xe7b705d8  swc1        $f23, 0x5D8($sp)
    ctx->pc = 0x3a6f9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1496), bits); }
    // 0x3a6fa0: 0xe7b605d0  swc1        $f22, 0x5D0($sp)
    ctx->pc = 0x3a6fa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1488), bits); }
    // 0x3a6fa4: 0xe7b505c8  swc1        $f21, 0x5C8($sp)
    ctx->pc = 0x3a6fa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1480), bits); }
    // 0x3a6fa8: 0xe7b405c0  swc1        $f20, 0x5C0($sp)
    ctx->pc = 0x3a6fa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1472), bits); }
    // 0x3a6fac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6fb0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3a6fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3a6fb4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a6fb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6fb8: 0xafa60508  sw          $a2, 0x508($sp)
    ctx->pc = 0x3a6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 6));
    // 0x3a6fbc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3a6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a6fc0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a6fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3a6fc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a6fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6fc8: 0x4407c000  mfc1        $a3, $f24
    ctx->pc = 0x3a6fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3a6fcc: 0x8c5600c4  lw          $s6, 0xC4($v0)
    ctx->pc = 0x3a6fccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x3a6fd0: 0xafbd0500  sw          $sp, 0x500($sp)
    ctx->pc = 0x3a6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 29));
    // 0x3a6fd4: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x3a6fd4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a6fd8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3a6fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a6fdc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3a6fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3a6fe0: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3a6fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3a6fe4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a6fe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a6fe8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a6fe8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a6fec: 0xafa50504  sw          $a1, 0x504($sp)
    ctx->pc = 0x3a6fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1284), GPR_U32(ctx, 5));
    // 0x3a6ff0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a6ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a6ff4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3a6ff4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a6ff8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a6ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a6ffc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a6ffcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a7000: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3a7000u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a7004: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a7004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x3a7008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a7008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a700c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3a7010: 0x8fa50508  lw          $a1, 0x508($sp)
    ctx->pc = 0x3a7010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a7014: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3a7014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x3a7018: 0xafa7050c  sw          $a3, 0x50C($sp)
    ctx->pc = 0x3a7018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 7));
    // 0x3a701c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x3a701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x3a7020: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a7020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3a7024: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3a7024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3a7028: 0xc0e90ca  jal         func_3A4328
    ctx->pc = 0x3A7028u;
    SET_GPR_U32(ctx, 31, 0x3A7030u);
    ctx->pc = 0x3A702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7028u;
    // 0x3a702c: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3A7028u, 0x3A7030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7030u;
label_3a7030:
    // 0x3a7030: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x3a7030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a7034: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a7034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3a7038: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a7038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a703c: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x3a703cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x3a7040: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3a7040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a7044: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a7044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a7048: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a7048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a704c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a704cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a7050: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a7050u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a7054: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a7054u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a7058: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a7058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3a705c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3a705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3a7060: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a7060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3a7064: 0x24821af8  addiu       $v0, $a0, 0x1AF8
    ctx->pc = 0x3a7064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6904));
    // 0x3a7068: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3a7068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3a706c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3a706cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3a7070: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x3a7070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3a7074: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x3a7074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3a7078: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x3a7078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3a707c: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x3a707cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3a7080: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x3a7080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7084: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x3a7084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7088: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x3a7088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a708c: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x3a708cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7090: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x3a7090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7094: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x3a7094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7098: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7098u;
    {
        const bool branch_taken_0x3a7098 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7098u;
        // 0x3a709c: 0x8fa3050c  lw          $v1, 0x50C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7098) {
            ctx->pc = 0x3A70B0u;
            goto label_3a70b0;
        }
    }
    ctx->pc = 0x3A70A0u;
    // 0x3a70a0: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x3a70a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3a70a4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3a70a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3a70a8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3a70a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3a70ac: 0xafa3050c  sw          $v1, 0x50C($sp)
    ctx->pc = 0x3a70acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 3));
label_3a70b0:
    // 0x3a70b0: 0x8fa40508  lw          $a0, 0x508($sp)
    ctx->pc = 0x3a70b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a70b4: 0xc0e8dee  jal         func_3A37B8
    ctx->pc = 0x3A70B4u;
    SET_GPR_U32(ctx, 31, 0x3A70BCu);
    ctx->pc = 0x3A70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A70B4u;
    // 0x3a70b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3A70B4u, 0x3A70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A70BCu;
label_3a70bc:
    // 0x3a70bc: 0x8fa4050c  lw          $a0, 0x50C($sp)
    ctx->pc = 0x3a70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
    // 0x3a70c0: 0x1080020f  beqz        $a0, . + 4 + (0x20F << 2)
    ctx->pc = 0x3A70C0u;
    {
        const bool branch_taken_0x3a70c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70C0u;
        // 0x3a70c4: 0xafa20510  sw          $v0, 0x510($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70c0) {
            ctx->pc = 0x3A7900u;
            goto label_3a7900;
        }
    }
    ctx->pc = 0x3A70C8u;
    // 0x3a70c8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3a70c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a70cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a70d0: 0x8fa70504  lw          $a3, 0x504($sp)
    ctx->pc = 0x3a70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1284)));
    // 0x3a70d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3a70d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a70d8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3a70d8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3a70dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3a70dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3a70e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a70e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a70e4: 0x8fa60508  lw          $a2, 0x508($sp)
    ctx->pc = 0x3a70e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a70e8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x3a70e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3a70ec: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3a70ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a70f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a70f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a70f4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3a70f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3a70f8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3a70f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a70fc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3a70fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3a7100: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x3a7100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3a7104: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x3a7104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a7108: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3a7108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3a710c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x3a710cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a7110: 0xc0e8db8  jal         func_3A36E0
    ctx->pc = 0x3A7110u;
    SET_GPR_U32(ctx, 31, 0x3A7118u);
    ctx->pc = 0x3A7114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7110u;
    // 0x3a7114: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3A7110u, 0x3A7118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7118u;
label_3a7118:
    // 0x3a7118: 0x504001fa  beql        $v0, $zero, . + 4 + (0x1FA << 2)
    ctx->pc = 0x3A7118u;
    {
        const bool branch_taken_0x3a7118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7118) {
            ctx->pc = 0x3A711Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7118u;
            // 0x3a711c: 0xafa0050c  sw          $zero, 0x50C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7904u;
            goto label_3a7904;
        }
    }
    ctx->pc = 0x3A7120u;
    // 0x3a7120: 0xc0e8f9e  jal         func_3A3E78
    ctx->pc = 0x3A7120u;
    SET_GPR_U32(ctx, 31, 0x3A7128u);
    ctx->pc = 0x3A7124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7120u;
    // 0x3a7124: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E78u, 0x3A7120u, 0x3A7128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7128u;
label_3a7128:
    // 0x3a7128: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3a7128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3a712c: 0x544001f5  bnel        $v0, $zero, . + 4 + (0x1F5 << 2)
    ctx->pc = 0x3A712Cu;
    {
        const bool branch_taken_0x3a712c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a712c) {
            ctx->pc = 0x3A7130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A712Cu;
            // 0x3a7130: 0xafa0050c  sw          $zero, 0x50C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7904u;
            goto label_3a7904;
        }
    }
    ctx->pc = 0x3A7134u;
    // 0x3a7134: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3a7134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3a7138: 0xc0e8f5c  jal         func_3A3D70
    ctx->pc = 0x3A7138u;
    SET_GPR_U32(ctx, 31, 0x3A7140u);
    ctx->pc = 0x3A713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7138u;
    // 0x3a713c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3A7138u, 0x3A7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7140u;
label_3a7140:
    // 0x3a7140: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3a7140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a7144: 0xc0e8f5c  jal         func_3A3D70
    ctx->pc = 0x3A7144u;
    SET_GPR_U32(ctx, 31, 0x3A714Cu);
    ctx->pc = 0x3A7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7144u;
    // 0x3a7148: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3A7144u, 0x3A714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A714Cu;
label_3a714c:
    // 0x3a714c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x3a714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x3a7150: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3a7150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3a7154: 0x3c04eafc  lui         $a0, 0xEAFC
    ctx->pc = 0x3a7154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60156 << 16));
    // 0x3a7158: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3a7158u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a715c: 0x34847fa6  ori         $a0, $a0, 0x7FA6
    ctx->pc = 0x3a715cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32678);
    // 0x3a7160: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a7160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a7164: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3a7164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a7168: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a7168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a716c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x3a716cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a7170: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x3a7170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a7174: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a7174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a7178: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a7178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a717c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a717cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a7180: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a7180u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a7184: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x3a7184u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a7188: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3a7188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x3a718c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3a718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3a7190: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3a7190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x3a7194: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x3a7194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x3a7198: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x3a7198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x3a719c: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x3a719cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x3a71a0: 0x16c40028  bne         $s6, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A71A0u;
    {
        const bool branch_taken_0x3a71a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71A0u;
        // 0x3a71a4: 0x7fa50020  sq          $a1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71a0) {
            ctx->pc = 0x3A7244u;
            goto label_3a7244;
        }
    }
    ctx->pc = 0x3A71A8u;
    // 0x3a71a8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x3a71a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a71ac: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x3a71acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x3a71b0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3a71b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x3a71b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a71b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a71b8: 0x0  nop
    ctx->pc = 0x3a71b8u;
    // NOP
    // 0x3a71bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a71bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a71c0: 0x0  nop
    ctx->pc = 0x3a71c0u;
    // NOP
    // 0x3a71c4: 0x450301c8  bc1tl       . + 4 + (0x1C8 << 2)
    ctx->pc = 0x3A71C4u;
    {
        const bool branch_taken_0x3a71c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a71c4) {
            ctx->pc = 0x3A71C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A71C4u;
            // 0x3a71c8: 0xafa0050c  sw          $zero, 0x50C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A78E8u;
            goto label_3a78e8;
        }
    }
    ctx->pc = 0x3A71CCu;
    // 0x3a71cc: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3a71ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a71d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a71d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a71d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a71d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a71d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a71dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a71dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a71e0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3a71e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x3a71e4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a71e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a71e8: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3a71e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x3a71ec: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a71ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3a71f0: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x3a71f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3a71f4: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x3a71f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x3a71f8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3a71f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a71fc: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x3a71fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a7200: 0x26311b10  addiu       $s1, $s1, 0x1B10
    ctx->pc = 0x3a7200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6928));
    // 0x3a7204: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3a7204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    // 0x3a7208: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3a7208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x3a720c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A720Cu;
    SET_GPR_U32(ctx, 31, 0x3A7214u);
    ctx->pc = 0x3A7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A720Cu;
    // 0x3a7210: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A720Cu, 0x3A7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7214u;
label_3a7214:
    // 0x3a7214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a7214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a7218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a721c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3a721cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3a7220: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3a7220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a7224: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a7224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7228: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3A7228u;
    SET_GPR_U32(ctx, 31, 0x3A7230u);
    ctx->pc = 0x3A722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7228u;
    // 0x3a722c: 0x27a800b0  addiu       $t0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3A7228u, 0x3A7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7230u;
label_3a7230:
    // 0x3a7230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7234: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A7234u;
    SET_GPR_U32(ctx, 31, 0x3A723Cu);
    ctx->pc = 0x3A7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7234u;
    // 0x3a7238: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A7234u, 0x3A723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A723Cu;
label_3a723c:
    // 0x3a723c: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x3A723Cu;
    {
        const bool branch_taken_0x3a723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A723Cu;
        // 0x3a7240: 0x8fa40510  lw          $a0, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a723c) {
            ctx->pc = 0x3A78ECu;
            goto label_3a78ec;
        }
    }
    ctx->pc = 0x3A7244u;
label_3a7244:
    // 0x3a7244: 0x3c02f777  lui         $v0, 0xF777
    ctx->pc = 0x3a7244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63351 << 16));
    // 0x3a7248: 0x344211ed  ori         $v0, $v0, 0x11ED
    ctx->pc = 0x3a7248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4589);
    // 0x3a724c: 0x52c20006  beql        $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A724Cu;
    {
        const bool branch_taken_0x3a724c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a724c) {
            ctx->pc = 0x3A7250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A724Cu;
            // 0x3a7250: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7268u;
            goto label_3a7268;
        }
    }
    ctx->pc = 0x3A7254u;
    // 0x3a7254: 0x3c02cf3c  lui         $v0, 0xCF3C
    ctx->pc = 0x3a7254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53052 << 16));
    // 0x3a7258: 0x3442e42e  ori         $v0, $v0, 0xE42E
    ctx->pc = 0x3a7258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58414);
    // 0x3a725c: 0x16c2001f  bne         $s6, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A725Cu;
    {
        const bool branch_taken_0x3a725c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A725Cu;
        // 0x3a7260: 0x3c0231a7  lui         $v0, 0x31A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12711 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a725c) {
            ctx->pc = 0x3A72DCu;
            goto label_3a72dc;
        }
    }
    ctx->pc = 0x3A7264u;
    // 0x3a7264: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x3a7264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3a7268:
    // 0x3a7268: 0x3c063a40  lui         $a2, 0x3A40
    ctx->pc = 0x3a7268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14912 << 16));
    // 0x3a726c: 0x3c071c1c  lui         $a3, 0x1C1C
    ctx->pc = 0x3a726cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7196 << 16));
    // 0x3a7270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a7270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7274: 0x34c63aff  ori         $a2, $a2, 0x3AFF
    ctx->pc = 0x3a7274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15103);
    // 0x3a7278: 0x34e71cff  ori         $a3, $a3, 0x1CFF
    ctx->pc = 0x3a7278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)7423);
    // 0x3a727c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a727cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7280: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3a7280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7284: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x3A7284u;
    SET_GPR_U32(ctx, 31, 0x3A728Cu);
    ctx->pc = 0x3A7288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7284u;
    // 0x3a7288: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3A7284u, 0x3A728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A728Cu;
label_3a728c:
    // 0x3a728c: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x3a728cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a7290: 0x3c02221a  lui         $v0, 0x221A
    ctx->pc = 0x3a7290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8730 << 16));
    // 0x3a7294: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3a7294u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7298: 0x34420460  ori         $v0, $v0, 0x460
    ctx->pc = 0x3a7298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1120);
    // 0x3a729c: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3a729cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x3a72a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a72a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a72a4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3a72a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x3a72a8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a72a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3a72ac: 0x7fa504a0  sq          $a1, 0x4A0($sp)
    ctx->pc = 0x3a72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 5));
    // 0x3a72b0: 0x27b00490  addiu       $s0, $sp, 0x490
    ctx->pc = 0x3a72b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x3a72b4: 0x27b204a0  addiu       $s2, $sp, 0x4A0
    ctx->pc = 0x3a72b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x3a72b8: 0x27b304b0  addiu       $s3, $sp, 0x4B0
    ctx->pc = 0x3a72b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x3a72bc: 0x26311b10  addiu       $s1, $s1, 0x1B10
    ctx->pc = 0x3a72bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6928));
    // 0x3a72c0: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x3a72c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
    // 0x3a72c4: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3a72c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    // 0x3a72c8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3a72c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x3a72cc: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A72CCu;
    SET_GPR_U32(ctx, 31, 0x3A72D4u);
    ctx->pc = 0x3A72D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A72CCu;
    // 0x3a72d0: 0xafa204b0  sw          $v0, 0x4B0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A72CCu, 0x3A72D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A72D4u;
label_3a72d4:
    // 0x3a72d4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3A72D4u;
    {
        const bool branch_taken_0x3a72d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72D4u;
        // 0x3a72d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72d4) {
            ctx->pc = 0x3A736Cu;
            goto label_3a736c;
        }
    }
    ctx->pc = 0x3A72DCu;
label_3a72dc:
    // 0x3a72dc: 0x3442dd7a  ori         $v0, $v0, 0xDD7A
    ctx->pc = 0x3a72dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56698);
    // 0x3a72e0: 0x12c2000b  beq         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A72E0u;
    {
        const bool branch_taken_0x3a72e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72E0u;
        // 0x3a72e4: 0x7ba50070  lq          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72e0) {
            ctx->pc = 0x3A7310u;
            goto label_3a7310;
        }
    }
    ctx->pc = 0x3A72E8u;
    // 0x3a72e8: 0x3c02a8ae  lui         $v0, 0xA8AE
    ctx->pc = 0x3a72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43182 << 16));
    // 0x3a72ec: 0x34428cc0  ori         $v0, $v0, 0x8CC0
    ctx->pc = 0x3a72ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36032);
    // 0x3a72f0: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A72F0u;
    {
        const bool branch_taken_0x3a72f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72F0u;
        // 0x3a72f4: 0x3c0217c3  lui         $v0, 0x17C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6083 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72f0) {
            ctx->pc = 0x3A7310u;
            goto label_3a7310;
        }
    }
    ctx->pc = 0x3A72F8u;
    // 0x3a72f8: 0x34429130  ori         $v0, $v0, 0x9130
    ctx->pc = 0x3a72f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37168);
    // 0x3a72fc: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A72FCu;
    {
        const bool branch_taken_0x3a72fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72FCu;
        // 0x3a7300: 0x3c025063  lui         $v0, 0x5063 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20579 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72fc) {
            ctx->pc = 0x3A7310u;
            goto label_3a7310;
        }
    }
    ctx->pc = 0x3A7304u;
    // 0x3a7304: 0x3442ebe0  ori         $v0, $v0, 0xEBE0
    ctx->pc = 0x3a7304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60384);
    // 0x3a7308: 0x16c20024  bne         $s6, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A7308u;
    {
        const bool branch_taken_0x3a7308 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a7308) {
            ctx->pc = 0x3A739Cu;
            goto label_3a739c;
        }
    }
    ctx->pc = 0x3A7310u;
label_3a7310:
    // 0x3a7310: 0x3c024f2f  lui         $v0, 0x4F2F
    ctx->pc = 0x3a7310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20271 << 16));
    // 0x3a7314: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3a7314u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7318: 0x344224a0  ori         $v0, $v0, 0x24A0
    ctx->pc = 0x3a7318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9376);
    // 0x3a731c: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3a731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x3a7320: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3a7320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x3a7324: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a7328: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a7328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x3a732c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3a732cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x3a7330: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a7330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a7334: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a7334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7338: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a7338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3a733c: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x3a733cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a7340: 0x7fa504a0  sq          $a1, 0x4A0($sp)
    ctx->pc = 0x3a7340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 5));
    // 0x3a7344: 0x27b10490  addiu       $s1, $sp, 0x490
    ctx->pc = 0x3a7344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x3a7348: 0x27b204a0  addiu       $s2, $sp, 0x4A0
    ctx->pc = 0x3a7348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x3a734c: 0x27b304b0  addiu       $s3, $sp, 0x4B0
    ctx->pc = 0x3a734cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x3a7350: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x3a7350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
    // 0x3a7354: 0x26101b10  addiu       $s0, $s0, 0x1B10
    ctx->pc = 0x3a7354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6928));
    // 0x3a7358: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3a7358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    // 0x3a735c: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3a735cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
    // 0x3a7360: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7360u;
    SET_GPR_U32(ctx, 31, 0x3A7368u);
    ctx->pc = 0x3A7364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7360u;
    // 0x3a7364: 0xafa0050c  sw          $zero, 0x50C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7360u, 0x3A7368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7368u;
label_3a7368:
    // 0x3a7368: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a7368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a736c:
    // 0x3a736c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7370: 0xe7a004c0  swc1        $f0, 0x4C0($sp)
    ctx->pc = 0x3a7370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
    // 0x3a7374: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a7374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7378: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a7378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a737c: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3A737Cu;
    SET_GPR_U32(ctx, 31, 0x3A7384u);
    ctx->pc = 0x3A7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A737Cu;
    // 0x3a7380: 0x27a804c0  addiu       $t0, $sp, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3A737Cu, 0x3A7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7384u;
label_3a7384:
    // 0x3a7384: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a7384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3a7388: 0x24841b10  addiu       $a0, $a0, 0x1B10
    ctx->pc = 0x3a7388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6928));
    // 0x3a738c: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A738Cu;
    SET_GPR_U32(ctx, 31, 0x3A7394u);
    ctx->pc = 0x3A7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A738Cu;
    // 0x3a7390: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A738Cu, 0x3A7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7394u;
label_3a7394:
    // 0x3a7394: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x3A7394u;
    {
        const bool branch_taken_0x3a7394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7394u;
        // 0x3a7398: 0x8fa40510  lw          $a0, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7394) {
            ctx->pc = 0x3A78ECu;
            goto label_3a78ec;
        }
    }
    ctx->pc = 0x3A739Cu;
label_3a739c:
    // 0x3a739c: 0x3c02dfa9  lui         $v0, 0xDFA9
    ctx->pc = 0x3a739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57257 << 16));
    // 0x3a73a0: 0x3442bc56  ori         $v0, $v0, 0xBC56
    ctx->pc = 0x3a73a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48214);
    // 0x3a73a4: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A73A4u;
    {
        const bool branch_taken_0x3a73a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A73A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73A4u;
        // 0x3a73a8: 0x3c026d03  lui         $v0, 0x6D03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27907 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a73a4) {
            ctx->pc = 0x3A73B8u;
            goto label_3a73b8;
        }
    }
    ctx->pc = 0x3A73ACu;
    // 0x3a73ac: 0x3442c250  ori         $v0, $v0, 0xC250
    ctx->pc = 0x3a73acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49744);
    // 0x3a73b0: 0x16c2002f  bne         $s6, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3A73B0u;
    {
        const bool branch_taken_0x3a73b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a73b0) {
            ctx->pc = 0x3A7470u;
            goto label_3a7470;
        }
    }
    ctx->pc = 0x3A73B8u;
label_3a73b8:
    // 0x3a73b8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3a73bc: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3a73bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    // 0x3a73c0: 0x24461b20  addiu       $a2, $v0, 0x1B20
    ctx->pc = 0x3a73c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6944));
    // 0x3a73c4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3a73c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3a73c8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3a73c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3a73cc: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x3a73ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a73d0: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x3a73d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a73d4: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x3a73d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
    // 0x3a73d8: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x3a73d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x3a73dc: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3a73dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a73e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a73e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a73e4: 0x27b404a0  addiu       $s4, $sp, 0x4A0
    ctx->pc = 0x3a73e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x3a73e8: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3a73e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a73ec: 0x27b304b0  addiu       $s3, $sp, 0x4B0
    ctx->pc = 0x3a73ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x3a73f0: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3a73f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
    // 0x3a73f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a73f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a73f8: 0x7fa304b0  sq          $v1, 0x4B0($sp)
    ctx->pc = 0x3a73f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 3));
    // 0x3a73fc: 0x26521b10  addiu       $s2, $s2, 0x1B10
    ctx->pc = 0x3a73fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6928));
    // 0x3a7400: 0xafa0050c  sw          $zero, 0x50C($sp)
    ctx->pc = 0x3a7400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 0));
    // 0x3a7404: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A7404u;
    SET_GPR_U32(ctx, 31, 0x3A740Cu);
    ctx->pc = 0x3A7408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7404u;
    // 0x3a7408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A7404u, 0x3A740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A740Cu;
label_3a740c:
    // 0x3a740c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a740cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a7410: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3a7410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x3a7414: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3a7414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x3a7418: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a741c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3a741cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a7420: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3a7420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x3a7424: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a7424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a7428: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a7428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a742c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7434: 0x27b004c0  addiu       $s0, $sp, 0x4C0
    ctx->pc = 0x3a7434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x3a7438: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7438u;
    SET_GPR_U32(ctx, 31, 0x3A7440u);
    ctx->pc = 0x3A743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7438u;
    // 0x3a743c: 0xafa204c0  sw          $v0, 0x4C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7438u, 0x3A7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7440u;
label_3a7440:
    // 0x3a7440: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a7440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7444: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3a7444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a7448: 0xe7a004d0  swc1        $f0, 0x4D0($sp)
    ctx->pc = 0x3a7448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
    // 0x3a744c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a744cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7450: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a7450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7454: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3A7454u;
    SET_GPR_U32(ctx, 31, 0x3A745Cu);
    ctx->pc = 0x3A7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7454u;
    // 0x3a7458: 0x27a804d0  addiu       $t0, $sp, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3A7454u, 0x3A745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A745Cu;
label_3a745c:
    // 0x3a745c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7460: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A7460u;
    SET_GPR_U32(ctx, 31, 0x3A7468u);
    ctx->pc = 0x3A7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7460u;
    // 0x3a7464: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A7460u, 0x3A7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7468u;
label_3a7468:
    // 0x3a7468: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x3A7468u;
    {
        const bool branch_taken_0x3a7468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7468u;
        // 0x3a746c: 0x8fa40510  lw          $a0, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7468) {
            ctx->pc = 0x3A78ECu;
            goto label_3a78ec;
        }
    }
    ctx->pc = 0x3A7470u;
label_3a7470:
    // 0x3a7470: 0x3c02f29f  lui         $v0, 0xF29F
    ctx->pc = 0x3a7470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62111 << 16));
    // 0x3a7474: 0x344215db  ori         $v0, $v0, 0x15DB
    ctx->pc = 0x3a7474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5595);
    // 0x3a7478: 0x16c200db  bne         $s6, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x3A7478u;
    {
        const bool branch_taken_0x3a7478 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7478u;
        // 0x3a747c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7478) {
            ctx->pc = 0x3A77E8u;
            goto label_3a77e8;
        }
    }
    ctx->pc = 0x3A7480u;
    // 0x3a7480: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x3a7480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3a7484: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3a7484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
    // 0x3a7488: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3a7488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x3a748c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a748cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a7490: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a7490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a7494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a7494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a7498: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a7498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a749c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A749Cu;
    SET_GPR_U32(ctx, 31, 0x3A74A4u);
    ctx->pc = 0x3A74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A749Cu;
    // 0x3a74a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A749Cu, 0x3A74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A74A4u;
label_3a74a4:
    // 0x3a74a4: 0x3c1e0001  lui         $fp, 0x1
    ctx->pc = 0x3a74a4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1 << 16));
    // 0x3a74a8: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3a74a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a74ac: 0x3c03d3cc  lui         $v1, 0xD3CC
    ctx->pc = 0x3a74acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54220 << 16));
    // 0x3a74b0: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x3a74b0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a74b4: 0x34635f80  ori         $v1, $v1, 0x5F80
    ctx->pc = 0x3a74b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24448);
    // 0x3a74b8: 0x7fa40490  sq          $a0, 0x490($sp)
    ctx->pc = 0x3a74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 4));
    // 0x3a74bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a74c0: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3a74c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x3a74c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a74c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a74c8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a74c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a74cc: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x3a74ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x3a74d0: 0x27b404a0  addiu       $s4, $sp, 0x4A0
    ctx->pc = 0x3a74d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x3a74d4: 0x27b504b0  addiu       $s5, $sp, 0x4B0
    ctx->pc = 0x3a74d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x3a74d8: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x3a74d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a74dc: 0x27b10490  addiu       $s1, $sp, 0x490
    ctx->pc = 0x3a74dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x3a74e0: 0xafa204b0  sw          $v0, 0x4B0($sp)
    ctx->pc = 0x3a74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 2));
    // 0x3a74e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a74e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a74e8: 0x7fa504a0  sq          $a1, 0x4A0($sp)
    ctx->pc = 0x3a74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 5));
    // 0x3a74ec: 0x26731b10  addiu       $s3, $s3, 0x1B10
    ctx->pc = 0x3a74ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6928));
    // 0x3a74f0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3a74f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3a74f4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a74f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a74f8: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A74F8u;
    SET_GPR_U32(ctx, 31, 0x3A7500u);
    ctx->pc = 0x3A74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A74F8u;
    // 0x3a74fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A74F8u, 0x3A7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7500u;
label_3a7500:
    // 0x3a7500: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3a7500u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7504: 0xe7a004c0  swc1        $f0, 0x4C0($sp)
    ctx->pc = 0x3a7504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
    // 0x3a7508: 0x27a804c0  addiu       $t0, $sp, 0x4C0
    ctx->pc = 0x3a7508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x3a750c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a750cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7510: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3a7510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a7514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7518: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3A7518u;
    SET_GPR_U32(ctx, 31, 0x3A7520u);
    ctx->pc = 0x3A751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7518u;
    // 0x3a751c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3A7518u, 0x3A7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7520u;
label_3a7520:
    // 0x3a7520: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x3a7520u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x3a7524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a7524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7528: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A7528u;
    SET_GPR_U32(ctx, 31, 0x3A7530u);
    ctx->pc = 0x3A752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7528u;
    // 0x3a752c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A7528u, 0x3A7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7530u;
label_3a7530:
    // 0x3a7530: 0x37de0002  ori         $fp, $fp, 0x2
    ctx->pc = 0x3a7530u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)2);
    // 0x3a7534: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x3a7534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3a7538: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A7538u;
    SET_GPR_U32(ctx, 31, 0x3A7540u);
    ctx->pc = 0x3A753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7538u;
    // 0x3a753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A7538u, 0x3A7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7540u;
label_3a7540:
    // 0x3a7540: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3a7540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x3a7544: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3a7544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3a7548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a7548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a754c: 0x3c048924  lui         $a0, 0x8924
    ctx->pc = 0x3a754cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35108 << 16));
    // 0x3a7550: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3a7550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a7554: 0x34842480  ori         $a0, $a0, 0x2480
    ctx->pc = 0x3a7554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9344);
    // 0x3a7558: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3a7558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3a755c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a7560: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x3a7560u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7564: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a7564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a7568: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3a7568u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3a756c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a756cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a7570: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3a7570u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a7574: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a7574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a7578: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3a7578u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3a757c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a757cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a7580: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a7580u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a7584: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3a7584u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a7588: 0x27b204d0  addiu       $s2, $sp, 0x4D0
    ctx->pc = 0x3a7588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x3a758c: 0xafa204d0  sw          $v0, 0x4D0($sp)
    ctx->pc = 0x3a758cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
    // 0x3a7590: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a7590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a7594: 0x7fa604a0  sq          $a2, 0x4A0($sp)
    ctx->pc = 0x3a7594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 6));
    // 0x3a7598: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3a7598u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3a759c: 0x7fa304b0  sq          $v1, 0x4B0($sp)
    ctx->pc = 0x3a759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 3));
    // 0x3a75a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a75a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75a4: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x3a75a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x3a75a8: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x3a75a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x3a75ac: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x3a75acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x3a75b0: 0x7fa304f0  sq          $v1, 0x4F0($sp)
    ctx->pc = 0x3a75b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 3));
    // 0x3a75b4: 0x7fa304e0  sq          $v1, 0x4E0($sp)
    ctx->pc = 0x3a75b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 3));
    // 0x3a75b8: 0x7fa304c0  sq          $v1, 0x4C0($sp)
    ctx->pc = 0x3a75b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 3));
    // 0x3a75bc: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A75BCu;
    SET_GPR_U32(ctx, 31, 0x3A75C4u);
    ctx->pc = 0x3A75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75BCu;
    // 0x3a75c0: 0xafa00514  sw          $zero, 0x514($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A75BCu, 0x3A75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75C4u;
label_3a75c4:
    // 0x3a75c4: 0x27b104e0  addiu       $s1, $sp, 0x4E0
    ctx->pc = 0x3a75c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x3a75c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3a75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a75cc: 0xe7a004e0  swc1        $f0, 0x4E0($sp)
    ctx->pc = 0x3a75ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
    // 0x3a75d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a75d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a75d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3a75d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a75dc: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3A75DCu;
    SET_GPR_U32(ctx, 31, 0x3A75E4u);
    ctx->pc = 0x3A75E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75DCu;
    // 0x3a75e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3A75DCu, 0x3A75E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75E4u;
label_3a75e4:
    // 0x3a75e4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3a75e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a75e8: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A75E8u;
    SET_GPR_U32(ctx, 31, 0x3A75F0u);
    ctx->pc = 0x3A75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75E8u;
    // 0x3a75ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A75E8u, 0x3A75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75F0u;
label_3a75f0:
    // 0x3a75f0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x3a75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3a75f4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A75F4u;
    SET_GPR_U32(ctx, 31, 0x3A75FCu);
    ctx->pc = 0x3A75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A75F4u;
    // 0x3a75f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A75F4u, 0x3A75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A75FCu;
label_3a75fc:
    // 0x3a75fc: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3a75fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a7600: 0x3c041c4c  lui         $a0, 0x1C4C
    ctx->pc = 0x3a7600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7244 << 16));
    // 0x3a7604: 0x3c063d23  lui         $a2, 0x3D23
    ctx->pc = 0x3a7604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15651 << 16));
    // 0x3a7608: 0x34c6d70a  ori         $a2, $a2, 0xD70A
    ctx->pc = 0x3a7608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x3a760c: 0x34842880  ori         $a0, $a0, 0x2880
    ctx->pc = 0x3a760cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10368);
    // 0x3a7610: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a7610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a7614: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3a7614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3a7618: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a7618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a761c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3a761cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a7620: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a7624: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a7624u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3a7628: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x3a7628u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x3a762c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a762cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3a7630: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a7630u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3a7634: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3a7634u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3a7638: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x3a7638u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a763c: 0x7fa304d0  sq          $v1, 0x4D0($sp)
    ctx->pc = 0x3a763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 3));
    // 0x3a7640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7644: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3a7644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x3a7648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a764c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3a764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x3a7650: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3a7650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3a7654: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a7654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7658: 0x7fa604a0  sq          $a2, 0x4A0($sp)
    ctx->pc = 0x3a7658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 6));
    // 0x3a765c: 0x7fa304b0  sq          $v1, 0x4B0($sp)
    ctx->pc = 0x3a765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 3));
    // 0x3a7660: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x3a7660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x3a7664: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x3a7664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x3a7668: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x3a7668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x3a766c: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x3a766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x3a7670: 0x7fa304e0  sq          $v1, 0x4E0($sp)
    ctx->pc = 0x3a7670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 3));
    // 0x3a7674: 0x7fa304c0  sq          $v1, 0x4C0($sp)
    ctx->pc = 0x3a7674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 3));
    // 0x3a7678: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7678u;
    SET_GPR_U32(ctx, 31, 0x3A7680u);
    ctx->pc = 0x3A767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7678u;
    // 0x3a767c: 0xafa204d0  sw          $v0, 0x4D0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7678u, 0x3A7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7680u;
label_3a7680:
    // 0x3a7680: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a7680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7684: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a7684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7688: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3a7688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a768c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3a768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3a7690: 0xe7a004e0  swc1        $f0, 0x4E0($sp)
    ctx->pc = 0x3a7690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
    // 0x3a7694: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3A7694u;
    SET_GPR_U32(ctx, 31, 0x3A769Cu);
    ctx->pc = 0x3A7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7694u;
    // 0x3a7698: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3A7694u, 0x3A769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A769Cu;
label_3a769c:
    // 0x3a769c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a76a0: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A76A0u;
    SET_GPR_U32(ctx, 31, 0x3A76A8u);
    ctx->pc = 0x3A76A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A76A0u;
    // 0x3a76a4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A76A0u, 0x3A76A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A76A8u;
label_3a76a8:
    // 0x3a76a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a76a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3a76ac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a76acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3a76b0: 0x24861b28  addiu       $a2, $a0, 0x1B28
    ctx->pc = 0x3a76b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 6952));
    // 0x3a76b4: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x3a76b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3a76b8: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x3a76b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3a76bc: 0x68c2000f  ldl         $v0, 0xF($a2)
    ctx->pc = 0x3a76bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3a76c0: 0x6cc20008  ldr         $v0, 0x8($a2)
    ctx->pc = 0x3a76c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3a76c4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x3a76c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x581B38u));
    // 0x3a76c8: 0xb3a70097  sdl         $a3, 0x97($sp)
    ctx->pc = 0x3a76c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a76cc: 0xb7a70090  sdr         $a3, 0x90($sp)
    ctx->pc = 0x3a76ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a76d0: 0xb3a2009f  sdl         $v0, 0x9F($sp)
    ctx->pc = 0x3a76d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a76d4: 0xb7a20098  sdr         $v0, 0x98($sp)
    ctx->pc = 0x3a76d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a76d8: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x3a76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x3a76dc: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3a76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x3a76e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3a76e0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x3a76e4: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x3a76e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3a76e8: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x3a76e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3a76ec: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a76ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3a76f0: 0x8fa70514  lw          $a3, 0x514($sp)
    ctx->pc = 0x3a76f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
    // 0x3a76f4: 0x0  nop
    ctx->pc = 0x3a76f4u;
    // NOP
label_3a76f8:
    // 0x3a76f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a76f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a76fc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a76fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a7700: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a7700u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x3a7704: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3a7704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3a7708: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7708u;
    SET_GPR_U32(ctx, 31, 0x3A7710u);
    ctx->pc = 0x3A770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7708u;
    // 0x3a770c: 0xafa70514  sw          $a3, 0x514($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7708u, 0x3A7710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7710u;
label_3a7710:
    // 0x3a7710: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3a7710u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3a7714: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a7714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7718: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a7718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a771c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A771Cu;
    SET_GPR_U32(ctx, 31, 0x3A7724u);
    ctx->pc = 0x3A7720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A771Cu;
    // 0x3a7720: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A771Cu, 0x3A7724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7724u;
label_3a7724:
    // 0x3a7724: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3a7724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x3a7728: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a772c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a772cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a7730: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3a7730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x3a7734: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a7734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7738: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7738u;
    SET_GPR_U32(ctx, 31, 0x3A7740u);
    ctx->pc = 0x3A773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7738u;
    // 0x3a773c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7738u, 0x3A7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7740u;
label_3a7740:
    // 0x3a7740: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x3a7740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3a7744: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a7744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7748: 0xe7b500d0  swc1        $f21, 0xD0($sp)
    ctx->pc = 0x3a7748u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3a774c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x3a774cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3a7750: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3a7750u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x3a7754: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3a7754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3a7758: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a7758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a775c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a775cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a7760: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3a7760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a7764: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3a7764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x3a7768: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a7768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a776c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a776cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7770: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a7770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3a7774: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7774u;
    SET_GPR_U32(ctx, 31, 0x3A777Cu);
    ctx->pc = 0x3A7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7774u;
    // 0x3a7778: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7774u, 0x3A777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A777Cu;
label_3a777c:
    // 0x3a777c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a777cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a7780: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a7780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7784: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A7784u;
    SET_GPR_U32(ctx, 31, 0x3A778Cu);
    ctx->pc = 0x3A7788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7784u;
    // 0x3a7788: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A7784u, 0x3A778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A778Cu;
label_3a778c:
    // 0x3a778c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3a778cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a7790: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a7790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7794: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x3a7794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x3a7798: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a7798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a779c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A779Cu;
    SET_GPR_U32(ctx, 31, 0x3A77A4u);
    ctx->pc = 0x3A77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A779Cu;
    // 0x3a77a0: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A779Cu, 0x3A77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77A4u;
label_3a77a4:
    // 0x3a77a4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3a77a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a77a8: 0x5e4021  addu        $t0, $v0, $fp
    ctx->pc = 0x3a77a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x3a77ac: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a77acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3a77b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a77b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a77b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a77b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a77b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a77b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a77bc: 0x8fa40500  lw          $a0, 0x500($sp)
    ctx->pc = 0x3a77bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x3a77c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a77c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a77c4: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3a77c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3a77c8: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x3A77C8u;
    SET_GPR_U32(ctx, 31, 0x3A77D0u);
    ctx->pc = 0x3A77CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A77C8u;
    // 0x3a77cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3A77C8u, 0x3A77D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77D0u;
label_3a77d0:
    // 0x3a77d0: 0x8fa30514  lw          $v1, 0x514($sp)
    ctx->pc = 0x3a77d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
    // 0x3a77d4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3a77d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a77d8: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x3A77D8u;
    {
        const bool branch_taken_0x3a77d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77D8u;
        // 0x3a77dc: 0x8fa70514  lw          $a3, 0x514($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77d8) {
            ctx->pc = 0x3A76F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A77E0u;
    // 0x3a77e0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3A77E0u;
    {
        const bool branch_taken_0x3a77e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77E0u;
        // 0x3a77e4: 0x8fa40510  lw          $a0, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77e0) {
            ctx->pc = 0x3A78ECu;
            goto label_3a78ec;
        }
    }
    ctx->pc = 0x3A77E8u;
label_3a77e8:
    // 0x3a77e8: 0x3c02c07d  lui         $v0, 0xC07D
    ctx->pc = 0x3a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49277 << 16));
    // 0x3a77ec: 0x3442850e  ori         $v0, $v0, 0x850E
    ctx->pc = 0x3a77ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34062);
    // 0x3a77f0: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A77F0u;
    {
        const bool branch_taken_0x3a77f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77F0u;
        // 0x3a77f4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77f0) {
            ctx->pc = 0x3A7800u;
            goto label_3a7800;
        }
    }
    ctx->pc = 0x3A77F8u;
    // 0x3a77f8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3A77F8u;
    {
        const bool branch_taken_0x3a77f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77F8u;
        // 0x3a77fc: 0xafa0050c  sw          $zero, 0x50C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77f8) {
            ctx->pc = 0x3A78E8u;
            goto label_3a78e8;
        }
    }
    ctx->pc = 0x3A7800u;
label_3a7800:
    // 0x3a7800: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3a7800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x3a7804: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a7808: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3a7808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x3a780c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x3a780cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x3a7810: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3a7810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3a7814: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a7814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7818: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7818u;
    SET_GPR_U32(ctx, 31, 0x3A7820u);
    ctx->pc = 0x3A781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7818u;
    // 0x3a781c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7818u, 0x3A7820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7820u;
label_3a7820:
    // 0x3a7820: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a7820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a7824: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a7824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a7828: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3a7828u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3a782c: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A782Cu;
    SET_GPR_U32(ctx, 31, 0x3A7834u);
    ctx->pc = 0x3A7830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A782Cu;
    // 0x3a7830: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A782Cu, 0x3A7834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7834u;
label_3a7834:
    // 0x3a7834: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a7834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a7838: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7838u;
    {
        const bool branch_taken_0x3a7838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7838u;
        // 0x3a783c: 0x27b30080  addiu       $s3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7838) {
            ctx->pc = 0x3A7860u;
            goto label_3a7860;
        }
    }
    ctx->pc = 0x3A7840u;
    // 0x3a7840: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3a7840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3a7844: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a7848: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3a7848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x3a784c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a784cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7850: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7850u;
    SET_GPR_U32(ctx, 31, 0x3A7858u);
    ctx->pc = 0x3A7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7850u;
    // 0x3a7854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7850u, 0x3A7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7858u;
label_3a7858:
    // 0x3a7858: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a7858u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a785c: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x3a785cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3a7860:
    // 0x3a7860: 0x8fa50500  lw          $a1, 0x500($sp)
    ctx->pc = 0x3a7860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x3a7864: 0x3c064b81  lui         $a2, 0x4B81
    ctx->pc = 0x3a7864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19329 << 16));
    // 0x3a7868: 0x3c072e46  lui         $a3, 0x2E46
    ctx->pc = 0x3a7868u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)11846 << 16));
    // 0x3a786c: 0x34c691ff  ori         $a2, $a2, 0x91FF
    ctx->pc = 0x3a786cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37375);
    // 0x3a7870: 0x34e761ff  ori         $a3, $a3, 0x61FF
    ctx->pc = 0x3a7870u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25087);
    // 0x3a7874: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7878: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3a7878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a787c: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x3A787Cu;
    SET_GPR_U32(ctx, 31, 0x3A7884u);
    ctx->pc = 0x3A7880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A787Cu;
    // 0x3a7880: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x3A787Cu, 0x3A7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7884u;
label_3a7884:
    // 0x3a7884: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3a7884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a7888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a788c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a788cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7890: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3a7890u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x3a7894: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x3a7894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
    // 0x3a7898: 0x27b00490  addiu       $s0, $sp, 0x490
    ctx->pc = 0x3a7898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x3a789c: 0x27b204a0  addiu       $s2, $sp, 0x4A0
    ctx->pc = 0x3a789cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x3a78a0: 0x26311b10  addiu       $s1, $s1, 0x1B10
    ctx->pc = 0x3a78a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6928));
    // 0x3a78a4: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3a78a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
    // 0x3a78a8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A78A8u;
    SET_GPR_U32(ctx, 31, 0x3A78B0u);
    ctx->pc = 0x3A78ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78A8u;
    // 0x3a78ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A78A8u, 0x3A78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78B0u;
label_3a78b0:
    // 0x3a78b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a78b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a78b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78b8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3a78bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a78bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a78c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a78c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a78c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78c8: 0xe7b404c0  swc1        $f20, 0x4C0($sp)
    ctx->pc = 0x3a78c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1216), bits); }
    // 0x3a78cc: 0x27a704b0  addiu       $a3, $sp, 0x4B0
    ctx->pc = 0x3a78ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x3a78d0: 0xafa304b0  sw          $v1, 0x4B0($sp)
    ctx->pc = 0x3a78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 3));
    // 0x3a78d4: 0xc0e9fd0  jal         func_3A7F40
    ctx->pc = 0x3A78D4u;
    SET_GPR_U32(ctx, 31, 0x3A78DCu);
    ctx->pc = 0x3A78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78D4u;
    // 0x3a78d8: 0x27a804c0  addiu       $t0, $sp, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3A78D4u, 0x3A78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78DCu;
label_3a78dc:
    // 0x3a78dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a78dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78e0: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A78E0u;
    SET_GPR_U32(ctx, 31, 0x3A78E8u);
    ctx->pc = 0x3A78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78E0u;
    // 0x3a78e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A78E0u, 0x3A78E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78E8u;
label_3a78e8:
    // 0x3a78e8: 0x8fa40510  lw          $a0, 0x510($sp)
    ctx->pc = 0x3a78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3a78ec:
    // 0x3a78ec: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x3a78ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x3a78f0: 0xc045ca0  jal         func_117280
    ctx->pc = 0x3A78F0u;
    SET_GPR_U32(ctx, 31, 0x3A78F8u);
    ctx->pc = 0x3A78F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78F0u;
    // 0x3a78f4: 0x8fa60500  lw          $a2, 0x500($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3A78F0u, 0x3A78F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78F8u;
label_3a78f8:
    // 0x3a78f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A78F8u;
    {
        const bool branch_taken_0x3a78f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78F8u;
        // 0x3a78fc: 0x8fa4050c  lw          $a0, 0x50C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78f8) {
            ctx->pc = 0x3A7908u;
            goto label_3a7908;
        }
    }
    ctx->pc = 0x3A7900u;
label_3a7900:
    // 0x3a7900: 0xafa0050c  sw          $zero, 0x50C($sp)
    ctx->pc = 0x3a7900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 0));
label_3a7904:
    // 0x3a7904: 0x8fa4050c  lw          $a0, 0x50C($sp)
    ctx->pc = 0x3a7904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1292)));
label_3a7908:
    // 0x3a7908: 0x14800103  bnez        $a0, . + 4 + (0x103 << 2)
    ctx->pc = 0x3A7908u;
    {
        const bool branch_taken_0x3a7908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7908u;
        // 0x3a790c: 0x7bb005b0  lq          $s0, 0x5B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7908) {
            ctx->pc = 0x3A7D18u;
            goto label_3a7d18;
        }
    }
    ctx->pc = 0x3A7910u;
    // 0x3a7910: 0x3c02eafc  lui         $v0, 0xEAFC
    ctx->pc = 0x3a7910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60156 << 16));
    // 0x3a7914: 0x34427fa6  ori         $v0, $v0, 0x7FA6
    ctx->pc = 0x3a7914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32678);
    // 0x3a7918: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7918u;
    {
        const bool branch_taken_0x3a7918 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7918u;
        // 0x3a791c: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7918) {
            ctx->pc = 0x3A7934u;
            goto label_3a7934;
        }
    }
    ctx->pc = 0x3A7920u;
    // 0x3a7920: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a7920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3a7924: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3a7924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x3a7928: 0x8fa70508  lw          $a3, 0x508($sp)
    ctx->pc = 0x3a7928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a792c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3A792Cu;
    {
        const bool branch_taken_0x3a792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A792Cu;
        // 0x3a7930: 0x24841b40  addiu       $a0, $a0, 0x1B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a792c) {
            ctx->pc = 0x3A7988u;
            goto label_3a7988;
        }
    }
    ctx->pc = 0x3A7934u;
label_3a7934:
    // 0x3a7934: 0x3c02f777  lui         $v0, 0xF777
    ctx->pc = 0x3a7934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63351 << 16));
    // 0x3a7938: 0x344211ed  ori         $v0, $v0, 0x11ED
    ctx->pc = 0x3a7938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4589);
    // 0x3a793c: 0x12c20006  beq         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A793Cu;
    {
        const bool branch_taken_0x3a793c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A793Cu;
        // 0x3a7940: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a793c) {
            ctx->pc = 0x3A7958u;
            goto label_3a7958;
        }
    }
    ctx->pc = 0x3A7944u;
    // 0x3a7944: 0x3c02cf3c  lui         $v0, 0xCF3C
    ctx->pc = 0x3a7944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53052 << 16));
    // 0x3a7948: 0x3442e42e  ori         $v0, $v0, 0xE42E
    ctx->pc = 0x3a7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58414);
    // 0x3a794c: 0x16c20006  bne         $s6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A794Cu;
    {
        const bool branch_taken_0x3a794c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a794c) {
            ctx->pc = 0x3A7968u;
            goto label_3a7968;
        }
    }
    ctx->pc = 0x3A7954u;
    // 0x3a7954: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a7954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3a7958:
    // 0x3a7958: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3a7958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x3a795c: 0x8fa70508  lw          $a3, 0x508($sp)
    ctx->pc = 0x3a795cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a7960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7960u;
    {
        const bool branch_taken_0x3a7960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7960u;
        // 0x3a7964: 0x24841b58  addiu       $a0, $a0, 0x1B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7960) {
            ctx->pc = 0x3A7988u;
            goto label_3a7988;
        }
    }
    ctx->pc = 0x3A7968u;
label_3a7968:
    // 0x3a7968: 0x3c02f29f  lui         $v0, 0xF29F
    ctx->pc = 0x3a7968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62111 << 16));
    // 0x3a796c: 0x344215db  ori         $v0, $v0, 0x15DB
    ctx->pc = 0x3a796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5595);
    // 0x3a7970: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7970u;
    {
        const bool branch_taken_0x3a7970 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7970u;
        // 0x3a7974: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7970) {
            ctx->pc = 0x3A7998u;
            goto label_3a7998;
        }
    }
    ctx->pc = 0x3A7978u;
    // 0x3a7978: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a7978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3a797c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3a797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x3a7980: 0x8fa70508  lw          $a3, 0x508($sp)
    ctx->pc = 0x3a7980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a7984: 0x24841b68  addiu       $a0, $a0, 0x1B68
    ctx->pc = 0x3a7984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7016));
label_3a7988:
    // 0x3a7988: 0xc0e954c  jal         func_3A5530
    ctx->pc = 0x3A7988u;
    SET_GPR_U32(ctx, 31, 0x3A7990u);
    ctx->pc = 0x3A798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7988u;
    // 0x3a798c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3A7988u, 0x3A7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7990u;
label_3a7990:
    // 0x3a7990: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x3A7990u;
    {
        const bool branch_taken_0x3a7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7990u;
        // 0x3a7994: 0x8fa40510  lw          $a0, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7990) {
            ctx->pc = 0x3A7D08u;
            goto label_3a7d08;
        }
    }
    ctx->pc = 0x3A7998u;
label_3a7998:
    // 0x3a7998: 0x3c02c07d  lui         $v0, 0xC07D
    ctx->pc = 0x3a7998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49277 << 16));
    // 0x3a799c: 0x3442850e  ori         $v0, $v0, 0x850E
    ctx->pc = 0x3a799cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34062);
    // 0x3a79a0: 0x16c20041  bne         $s6, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3A79A0u;
    {
        const bool branch_taken_0x3a79a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79A0u;
        // 0x3a79a4: 0x3c0231a7  lui         $v0, 0x31A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12711 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a79a0) {
            ctx->pc = 0x3A7AA8u;
            goto label_3a7aa8;
        }
    }
    ctx->pc = 0x3A79A8u;
    // 0x3a79a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3a79a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3a79ac: 0x8fa70508  lw          $a3, 0x508($sp)
    ctx->pc = 0x3a79acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a79b0: 0x261016c0  addiu       $s0, $s0, 0x16C0
    ctx->pc = 0x3a79b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
    // 0x3a79b4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3a79b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a79b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a79bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79c0: 0x24841b80  addiu       $a0, $a0, 0x1B80
    ctx->pc = 0x3a79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7040));
    // 0x3a79c4: 0xc0e954c  jal         func_3A5530
    ctx->pc = 0x3A79C4u;
    SET_GPR_U32(ctx, 31, 0x3A79CCu);
    ctx->pc = 0x3A79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A79C4u;
    // 0x3a79c8: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3A79C4u, 0x3A79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A79CCu;
label_3a79cc:
    // 0x3a79cc: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3a79ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a79d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3a79d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79d4: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x3a79d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x3a79d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a79d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a79dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a79dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a79e0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a79e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x3a79e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3a79e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x3a79e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a79e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a79ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a79ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a79f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3a79f4: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x3a79f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a79f8: 0x27b60470  addiu       $s6, $sp, 0x470
    ctx->pc = 0x3a79f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x3a79fc: 0x27b10480  addiu       $s1, $sp, 0x480
    ctx->pc = 0x3a79fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x3a7a00: 0x27b30490  addiu       $s3, $sp, 0x490
    ctx->pc = 0x3a7a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x3a7a04: 0x27b404a0  addiu       $s4, $sp, 0x4A0
    ctx->pc = 0x3a7a04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x3a7a08: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x3a7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
    // 0x3a7a0c: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3a7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
    // 0x3a7a10: 0x26101b90  addiu       $s0, $s0, 0x1B90
    ctx->pc = 0x3a7a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7056));
    // 0x3a7a14: 0xafb70480  sw          $s7, 0x480($sp)
    ctx->pc = 0x3a7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 23));
    // 0x3a7a18: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3a7a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    // 0x3a7a1c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7A1Cu;
    SET_GPR_U32(ctx, 31, 0x3A7A24u);
    ctx->pc = 0x3A7A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A1Cu;
    // 0x3a7a20: 0xafa00490  sw          $zero, 0x490($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7A1Cu, 0x3A7A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A24u;
label_3a7a24:
    // 0x3a7a24: 0x8fa50504  lw          $a1, 0x504($sp)
    ctx->pc = 0x3a7a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1284)));
    // 0x3a7a28: 0x27aa04d0  addiu       $t2, $sp, 0x4D0
    ctx->pc = 0x3a7a28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x3a7a2c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3a7a2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3a7a30: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3a7a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a34: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a7a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a7a38: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3a7a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a7a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a7a40: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3a7a40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3a7a44: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a7a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a7a48: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a7a48u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a7a4c: 0x27a904b0  addiu       $t1, $sp, 0x4B0
    ctx->pc = 0x3a7a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x3a7a50: 0x7fa204d0  sq          $v0, 0x4D0($sp)
    ctx->pc = 0x3a7a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 2));
    // 0x3a7a54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a7a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a58: 0x7fa204b0  sq          $v0, 0x4B0($sp)
    ctx->pc = 0x3a7a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
    // 0x3a7a5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3a7a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a60: 0x7fa204e0  sq          $v0, 0x4E0($sp)
    ctx->pc = 0x3a7a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 2));
    // 0x3a7a64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a7a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a68: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x3a7a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
    // 0x3a7a6c: 0xc0ea040  jal         func_3A8100
    ctx->pc = 0x3A7A6Cu;
    SET_GPR_U32(ctx, 31, 0x3A7A74u);
    ctx->pc = 0x3A7A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A6Cu;
    // 0x3a7a70: 0xafa004d0  sw          $zero, 0x4D0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3A7A6Cu, 0x3A7A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A74u;
label_3a7a74:
    // 0x3a7a74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3a7a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a78: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x3A7A78u;
    SET_GPR_U32(ctx, 31, 0x3A7A80u);
    ctx->pc = 0x3A7A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A78u;
    // 0x3a7a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A7A78u, 0x3A7A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A80u;
label_3a7a80:
    // 0x3a7a80: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A7A80u;
    SET_GPR_U32(ctx, 31, 0x3A7A88u);
    ctx->pc = 0x3A7A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A80u;
    // 0x3a7a84: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A7A80u, 0x3A7A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A88u;
label_3a7a88:
    // 0x3a7a88: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3a7a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3a7a8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3a7a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a90: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3A7A90u;
    SET_GPR_U32(ctx, 31, 0x3A7A98u);
    ctx->pc = 0x3A7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A90u;
    // 0x3a7a94: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3A7A90u, 0x3A7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A98u;
label_3a7a98:
    // 0x3a7a98: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A7A98u;
    SET_GPR_U32(ctx, 31, 0x3A7AA0u);
    ctx->pc = 0x3A7A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A98u;
    // 0x3a7a9c: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A7A98u, 0x3A7AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7AA0u;
label_3a7aa0:
    // 0x3a7aa0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x3A7AA0u;
    {
        const bool branch_taken_0x3a7aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AA0u;
        // 0x3a7aa4: 0x8fa40510  lw          $a0, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7aa0) {
            ctx->pc = 0x3A7D08u;
            goto label_3a7d08;
        }
    }
    ctx->pc = 0x3A7AA8u;
label_3a7aa8:
    // 0x3a7aa8: 0x3442dd7a  ori         $v0, $v0, 0xDD7A
    ctx->pc = 0x3a7aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56698);
    // 0x3a7aac: 0x12c20013  beq         $s6, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A7AACu;
    {
        const bool branch_taken_0x3a7aac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AACu;
        // 0x3a7ab0: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7aac) {
            ctx->pc = 0x3A7AFCu;
            goto label_3a7afc;
        }
    }
    ctx->pc = 0x3A7AB4u;
    // 0x3a7ab4: 0x3c02a8ae  lui         $v0, 0xA8AE
    ctx->pc = 0x3a7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43182 << 16));
    // 0x3a7ab8: 0x34428cc0  ori         $v0, $v0, 0x8CC0
    ctx->pc = 0x3a7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36032);
    // 0x3a7abc: 0x12c20010  beq         $s6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A7ABCu;
    {
        const bool branch_taken_0x3a7abc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7ABCu;
        // 0x3a7ac0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7abc) {
            ctx->pc = 0x3A7B00u;
            goto label_3a7b00;
        }
    }
    ctx->pc = 0x3A7AC4u;
    // 0x3a7ac4: 0x3c02dfa9  lui         $v0, 0xDFA9
    ctx->pc = 0x3a7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57257 << 16));
    // 0x3a7ac8: 0x3442bc56  ori         $v0, $v0, 0xBC56
    ctx->pc = 0x3a7ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48214);
    // 0x3a7acc: 0x12c2000b  beq         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A7ACCu;
    {
        const bool branch_taken_0x3a7acc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7ACCu;
        // 0x3a7ad0: 0x3c0217c3  lui         $v0, 0x17C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6083 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7acc) {
            ctx->pc = 0x3A7AFCu;
            goto label_3a7afc;
        }
    }
    ctx->pc = 0x3A7AD4u;
    // 0x3a7ad4: 0x34429130  ori         $v0, $v0, 0x9130
    ctx->pc = 0x3a7ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37168);
    // 0x3a7ad8: 0x12c20008  beq         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7AD8u;
    {
        const bool branch_taken_0x3a7ad8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AD8u;
        // 0x3a7adc: 0x3c025063  lui         $v0, 0x5063 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20579 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ad8) {
            ctx->pc = 0x3A7AFCu;
            goto label_3a7afc;
        }
    }
    ctx->pc = 0x3A7AE0u;
    // 0x3a7ae0: 0x3442ebe0  ori         $v0, $v0, 0xEBE0
    ctx->pc = 0x3a7ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60384);
    // 0x3a7ae4: 0x12c20005  beq         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7AE4u;
    {
        const bool branch_taken_0x3a7ae4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AE4u;
        // 0x3a7ae8: 0x3c026d03  lui         $v0, 0x6D03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27907 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ae4) {
            ctx->pc = 0x3A7AFCu;
            goto label_3a7afc;
        }
    }
    ctx->pc = 0x3A7AECu;
    // 0x3a7aec: 0x3442c250  ori         $v0, $v0, 0xC250
    ctx->pc = 0x3a7aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49744);
    // 0x3a7af0: 0x16c2007e  bne         $s6, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3A7AF0u;
    {
        const bool branch_taken_0x3a7af0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AF0u;
        // 0x3a7af4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7af0) {
            ctx->pc = 0x3A7CECu;
            goto label_3a7cec;
        }
    }
    ctx->pc = 0x3A7AF8u;
    // 0x3a7af8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x3a7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_3a7afc:
    // 0x3a7afc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a7b00:
    // 0x3a7b00: 0x24661b98  addiu       $a2, $v1, 0x1B98
    ctx->pc = 0x3a7b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7064));
    // 0x3a7b04: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x3a7b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3a7b08: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x3a7b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3a7b0c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3a7b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3a7b10: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3a7b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3a7b14: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x3a7b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3a7b18: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x3a7b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3a7b1c: 0xb3a70067  sdl         $a3, 0x67($sp)
    ctx->pc = 0x3a7b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7b20: 0xb7a70060  sdr         $a3, 0x60($sp)
    ctx->pc = 0x3a7b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7b24: 0xb3a4006f  sdl         $a0, 0x6F($sp)
    ctx->pc = 0x3a7b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7b28: 0xb7a40068  sdr         $a0, 0x68($sp)
    ctx->pc = 0x3a7b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7b2c: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x3a7b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7b30: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x3a7b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3a7b34: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a7b38: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3a7b38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7b3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a7b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3a7b40: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3a7b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3a7b44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a7b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a7b48: 0x2470b8b8  addiu       $s0, $v1, -0x4748
    ctx->pc = 0x3a7b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
    // 0x3a7b4c: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x3a7b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x3a7b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a7b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a7b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a7b58: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3a7b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3a7b5c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x3a7b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a7b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a7b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a7b64: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3a7b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3a7b68: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x3a7b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a7b6c: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x3a7b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3a7b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b74: 0x0  nop
    ctx->pc = 0x3a7b74u;
    // NOP
label_3a7b78:
    // 0x3a7b78: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a7b78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a7b7c: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x3a7b7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x3a7b80: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7B80u;
    SET_GPR_U32(ctx, 31, 0x3A7B88u);
    ctx->pc = 0x3A7B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B80u;
    // 0x3a7b84: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7B80u, 0x3A7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B88u;
label_3a7b88:
    // 0x3a7b88: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3a7b88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3a7b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b90: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a7b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a7b94: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7B94u;
    SET_GPR_U32(ctx, 31, 0x3A7B9Cu);
    ctx->pc = 0x3A7B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B94u;
    // 0x3a7b98: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7B94u, 0x3A7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B9Cu;
label_3a7b9c:
    // 0x3a7b9c: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3a7b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x3a7ba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a7ba4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a7ba4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a7ba8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3a7ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x3a7bac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a7bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7bb0: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7BB0u;
    SET_GPR_U32(ctx, 31, 0x3A7BB8u);
    ctx->pc = 0x3A7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7BB0u;
    // 0x3a7bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7BB0u, 0x3A7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7BB8u;
label_3a7bb8:
    // 0x3a7bb8: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x3a7bb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3a7bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bc0: 0xe7b500a0  swc1        $f21, 0xA0($sp)
    ctx->pc = 0x3a7bc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3a7bc4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3a7bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3a7bc8: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3a7bc8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x3a7bcc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3a7bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x3a7bd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a7bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a7bd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a7bd8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3a7bd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a7bdc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3a7bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3a7be0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a7be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a7be4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a7be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a7be8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3a7be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x3a7bec: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A7BECu;
    SET_GPR_U32(ctx, 31, 0x3A7BF4u);
    ctx->pc = 0x3A7BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7BECu;
    // 0x3a7bf0: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A7BECu, 0x3A7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7BF4u;
label_3a7bf4:
    // 0x3a7bf4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a7bf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a7bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bfc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A7BFCu;
    SET_GPR_U32(ctx, 31, 0x3A7C04u);
    ctx->pc = 0x3A7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7BFCu;
    // 0x3a7c00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A7BFCu, 0x3A7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C04u;
label_3a7c04:
    // 0x3a7c04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a7c08: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a7c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3a7c0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a7c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a7c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a7c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a7c14: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3a7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3a7c18: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3a7c18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3a7c1c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3a7c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7c20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a7c20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a7c24: 0x8fa40500  lw          $a0, 0x500($sp)
    ctx->pc = 0x3a7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x3a7c28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a7c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c2c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3a7c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3a7c30: 0x3508003b  ori         $t0, $t0, 0x3B
    ctx->pc = 0x3a7c30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)59);
    // 0x3a7c34: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x3A7C34u;
    SET_GPR_U32(ctx, 31, 0x3A7C3Cu);
    ctx->pc = 0x3A7C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C34u;
    // 0x3a7c38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x3A7C34u, 0x3A7C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C3Cu;
label_3a7c3c:
    // 0x3a7c3c: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x3a7c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a7c40: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3A7C40u;
    {
        const bool branch_taken_0x3a7c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C40u;
        // 0x3a7c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c40) {
            ctx->pc = 0x3A7B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7b78;
        }
    }
    ctx->pc = 0x3A7C48u;
    // 0x3a7c48: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A7C48u;
    SET_GPR_U32(ctx, 31, 0x3A7C50u);
    ctx->pc = 0x3A7C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C48u;
    // 0x3a7c4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A7C48u, 0x3A7C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C50u;
label_3a7c50:
    // 0x3a7c50: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3a7c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x3a7c54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a7c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a7c58: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3a7c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x3a7c5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a7c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a7c60: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a7c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a7c64: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x3a7c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x3a7c68: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x3a7c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x3a7c6c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3a7c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x3a7c70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a7c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a7c74: 0x3c087853  lui         $t0, 0x7853
    ctx->pc = 0x3a7c74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30803 << 16));
    // 0x3a7c78: 0x8fa40500  lw          $a0, 0x500($sp)
    ctx->pc = 0x3a7c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x3a7c7c: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x3a7c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3a7c80: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x3a7c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x3a7c84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3a7c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7c88: 0x35083bff  ori         $t0, $t0, 0x3BFF
    ctx->pc = 0x3a7c88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15359);
    // 0x3a7c8c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a7c8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a7c90: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a7c90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a7c94: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a7c94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3a7c98: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3a7c98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x3a7c9c: 0xc0e97ec  jal         func_3A5FB0
    ctx->pc = 0x3A7C9Cu;
    SET_GPR_U32(ctx, 31, 0x3A7CA4u);
    ctx->pc = 0x3A7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C9Cu;
    // 0x3a7ca0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x3A7C9Cu, 0x3A7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CA4u;
label_3a7ca4:
    // 0x3a7ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7ca8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A7CA8u;
    SET_GPR_U32(ctx, 31, 0x3A7CB0u);
    ctx->pc = 0x3A7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CA8u;
    // 0x3a7cac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A7CA8u, 0x3A7CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CB0u;
label_3a7cb0:
    // 0x3a7cb0: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x3a7cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x3a7cb4: 0x3c08dfc3  lui         $t0, 0xDFC3
    ctx->pc = 0x3a7cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57283 << 16));
    // 0x3a7cb8: 0x8fa40500  lw          $a0, 0x500($sp)
    ctx->pc = 0x3a7cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x3a7cbc: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x3a7cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3a7cc0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a7cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a7cc4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a7cc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a7cc8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3a7cc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3a7ccc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x3a7cccu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x3a7cd0: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x3a7cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x3a7cd4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3a7cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7cd8: 0x3508a2ff  ori         $t0, $t0, 0xA2FF
    ctx->pc = 0x3a7cd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)41727);
    // 0x3a7cdc: 0xc0e97ec  jal         func_3A5FB0
    ctx->pc = 0x3A7CDCu;
    SET_GPR_U32(ctx, 31, 0x3A7CE4u);
    ctx->pc = 0x3A7CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CDCu;
    // 0x3a7ce0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x3A7CDCu, 0x3A7CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CE4u;
label_3a7ce4:
    // 0x3a7ce4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7CE4u;
    {
        const bool branch_taken_0x3a7ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CE4u;
        // 0x3a7ce8: 0x8fa40510  lw          $a0, 0x510($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ce4) {
            ctx->pc = 0x3A7D08u;
            goto label_3a7d08;
        }
    }
    ctx->pc = 0x3A7CECu;
label_3a7cec:
    // 0x3a7cec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3a7cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x3a7cf0: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3a7cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x3a7cf4: 0x8fa70508  lw          $a3, 0x508($sp)
    ctx->pc = 0x3a7cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
    // 0x3a7cf8: 0x24841bb0  addiu       $a0, $a0, 0x1BB0
    ctx->pc = 0x3a7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7088));
    // 0x3a7cfc: 0xc0e954c  jal         func_3A5530
    ctx->pc = 0x3A7CFCu;
    SET_GPR_U32(ctx, 31, 0x3A7D04u);
    ctx->pc = 0x3A7D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CFCu;
    // 0x3a7d00: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5530u, 0x3A7CFCu, 0x3A7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D04u;
label_3a7d04:
    // 0x3a7d04: 0x8fa40510  lw          $a0, 0x510($sp)
    ctx->pc = 0x3a7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_3a7d08:
    // 0x3a7d08: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x3a7d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x3a7d0c: 0xc045ca0  jal         func_117280
    ctx->pc = 0x3A7D0Cu;
    SET_GPR_U32(ctx, 31, 0x3A7D14u);
    ctx->pc = 0x3A7D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D0Cu;
    // 0x3a7d10: 0x8fa60500  lw          $a2, 0x500($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3A7D0Cu, 0x3A7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D14u;
label_3a7d14:
    // 0x3a7d14: 0x7bb005b0  lq          $s0, 0x5B0($sp)
    ctx->pc = 0x3a7d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1456)));
label_3a7d18:
    // 0x3a7d18: 0x7bb105a0  lq          $s1, 0x5A0($sp)
    ctx->pc = 0x3a7d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x3a7d1c: 0x7bb20590  lq          $s2, 0x590($sp)
    ctx->pc = 0x3a7d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x3a7d20: 0x7bb30580  lq          $s3, 0x580($sp)
    ctx->pc = 0x3a7d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x3a7d24: 0x7bb40570  lq          $s4, 0x570($sp)
    ctx->pc = 0x3a7d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x3a7d28: 0x7bb50560  lq          $s5, 0x560($sp)
    ctx->pc = 0x3a7d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x3a7d2c: 0x7bb60550  lq          $s6, 0x550($sp)
    ctx->pc = 0x3a7d2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x3a7d30: 0x7bb70540  lq          $s7, 0x540($sp)
    ctx->pc = 0x3a7d30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x3a7d34: 0x7bbe0530  lq          $fp, 0x530($sp)
    ctx->pc = 0x3a7d34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
    // 0x3a7d38: 0xdfbf0520  ld          $ra, 0x520($sp)
    ctx->pc = 0x3a7d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x3a7d3c: 0xc7b805e0  lwc1        $f24, 0x5E0($sp)
    ctx->pc = 0x3a7d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3a7d40: 0xc7b705d8  lwc1        $f23, 0x5D8($sp)
    ctx->pc = 0x3a7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3a7d44: 0xc7b605d0  lwc1        $f22, 0x5D0($sp)
    ctx->pc = 0x3a7d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a7d48: 0xc7b505c8  lwc1        $f21, 0x5C8($sp)
    ctx->pc = 0x3a7d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a7d4c: 0xc7b405c0  lwc1        $f20, 0x5C0($sp)
    ctx->pc = 0x3a7d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a7d50: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D50u;
        // 0x3a7d54: 0x27bd05f0  addiu       $sp, $sp, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1520));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7D58u;
}
