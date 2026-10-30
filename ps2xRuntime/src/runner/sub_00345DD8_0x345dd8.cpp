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

// Function: sub_00345DD8
// Address: 0x345dd8 - 0x346388
void sub_00345DD8_0x345dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345DD8_0x345dd8");
#endif

    switch (ctx->pc) {
        case 0x345eb8u: goto label_345eb8;
        case 0x345f80u: goto label_345f80;
        case 0x346028u: goto label_346028;
        default: break;
    }

    ctx->pc = 0x345dd8u;

    // 0x345dd8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x345dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x345ddc: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x345ddcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345de0: 0xe7bf0188  swc1        $f31, 0x188($sp)
    ctx->pc = 0x345de0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x345de4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x345de4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345de8: 0xe7be0180  swc1        $f30, 0x180($sp)
    ctx->pc = 0x345de8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x345dec: 0x25e60050  addiu       $a2, $t7, 0x50
    ctx->pc = 0x345decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x345df0: 0xe7bd0178  swc1        $f29, 0x178($sp)
    ctx->pc = 0x345df0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x345df4: 0xe7bc0170  swc1        $f28, 0x170($sp)
    ctx->pc = 0x345df4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x345df8: 0xe7bb0168  swc1        $f27, 0x168($sp)
    ctx->pc = 0x345df8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x345dfc: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x345dfcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x345e00: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x345e00u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x345e04: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x345e04u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x345e08: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x345e08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x345e0c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x345e0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x345e10: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x345e10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x345e14: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x345e14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x345e18: 0x79e50050  lq          $a1, 0x50($t7)
    ctx->pc = 0x345e18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 15), 80)));
    // 0x345e1c: 0x78c40030  lq          $a0, 0x30($a2)
    ctx->pc = 0x345e1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x345e20: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x345e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x345e24: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x345e24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x345e28: 0x70654ca8  pextuw      $t1, $v1, $a1
    ctx->pc = 0x345e28u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x345e2c: 0x708254a8  pextuw      $t2, $a0, $v0
    ctx->pc = 0x345e2cu;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x345e30: 0x70655c88  pextlw      $t3, $v1, $a1
    ctx->pc = 0x345e30u;
    SET_GPR_VEC(ctx, 11, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x345e34: 0x70826488  pextlw      $t4, $a0, $v0
    ctx->pc = 0x345e34u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x345e38: 0x712a6ba9  pcpyud      $t5, $t1, $t2
    ctx->pc = 0x345e38u;
    SET_GPR_VEC(ctx, 13, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x345e3c: 0x71494389  pcpyld      $t0, $t2, $t1
    ctx->pc = 0x345e3cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x345e40: 0x716c3ba9  pcpyud      $a3, $t3, $t4
    ctx->pc = 0x345e40u;
    SET_GPR_VEC(ctx, 7, _mm_unpackhi_epi64(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x345e44: 0x718b2b89  pcpyld      $a1, $t4, $t3
    ctx->pc = 0x345e44u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x345e48: 0x79c30080  lq          $v1, 0x80($t6)
    ctx->pc = 0x345e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 128)));
    // 0x345e4c: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x345e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345e50: 0x79e20080  lq          $v0, 0x80($t7)
    ctx->pc = 0x345e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 15), 128)));
    // 0x345e54: 0x25c60050  addiu       $a2, $t6, 0x50
    ctx->pc = 0x345e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 80));
    // 0x345e58: 0xd9c50050  lqc2        $vf5, 0x50($t6)
    ctx->pc = 0x345e58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x345e5c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x345e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x345e60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x345e60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345e64: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x345e64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345e68: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x345e68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x345e6c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x345e6cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x345e70: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x345e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x345e74: 0x27ac00a0  addiu       $t4, $sp, 0xA0
    ctx->pc = 0x345e74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x345e78: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x345e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x345e7c: 0x27b80010  addiu       $t8, $sp, 0x10
    ctx->pc = 0x345e7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x345e80: 0x7fa800b0  sq          $t0, 0xB0($sp)
    ctx->pc = 0x345e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 8));
    // 0x345e84: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x345e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x345e88: 0x7fa50050  sq          $a1, 0x50($sp)
    ctx->pc = 0x345e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 5));
    // 0x345e8c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x345e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e90: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x345e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
    // 0x345e94: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x345e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e98: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x345e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x345e9c: 0x7fad0080  sq          $t5, 0x80($sp)
    ctx->pc = 0x345e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 13));
    // 0x345ea0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x345ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x345ea4: 0x7fad00c0  sq          $t5, 0xC0($sp)
    ctx->pc = 0x345ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 13));
    // 0x345ea8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x345ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x345eac: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x345eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x345eb0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x345eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x345eb4: 0x0  nop
    ctx->pc = 0x345eb4u;
    // NOP
label_345eb8:
    // 0x345eb8: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x345eb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x345ebc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x345ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x345ec0: 0xd8c40010  lqc2        $vf4, 0x10($a2)
    ctx->pc = 0x345ec0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x345ec4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x345ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x345ec8: 0xd8c20020  lqc2        $vf2, 0x20($a2)
    ctx->pc = 0x345ec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x345ecc: 0xd8c10030  lqc2        $vf1, 0x30($a2)
    ctx->pc = 0x345eccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x345ed0: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x345ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x345ed4: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x345ed4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x345ed8: 0x4be310be  vmaddaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x345ed8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x345edc: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x345edcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x345ee0: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x345ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x345ee4: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x345ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x345ee8: 0x521fff3  bgez        $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x345EE8u;
    {
        const bool branch_taken_0x345ee8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x345EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EE8u;
        // 0x345eec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ee8) {
            ctx->pc = 0x345EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345eb8;
        }
    }
    ctx->pc = 0x345EF0u;
    // 0x345ef0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x345ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x345ef4: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x345ef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x345ef8: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x345ef8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x345efc: 0x7ba50100  lq          $a1, 0x100($sp)
    ctx->pc = 0x345efcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x345f00: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x345f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x345f04: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x345f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x345f08: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x345f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x345f0c: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x345f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x345f10: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x345f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x345f14: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x345f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x345f18: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x345f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x345f1c: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x345f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x345f20: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x345f20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345f24: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x345f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x345f28: 0xd9620010  lqc2        $vf2, 0x10($t3)
    ctx->pc = 0x345f28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x345f2c: 0xd9630020  lqc2        $vf3, 0x20($t3)
    ctx->pc = 0x345f2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x345f30: 0xd9640030  lqc2        $vf4, 0x30($t3)
    ctx->pc = 0x345f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x345f34: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x345f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x345f38: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x345f38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x345f3c: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x345f3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x345f40: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x345f40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345f44: 0xf9810000  sqc2        $vf1, 0x0($t4)
    ctx->pc = 0x345f44u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345f48: 0xc5c90040  lwc1        $f9, 0x40($t6)
    ctx->pc = 0x345f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x345f4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x345f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f50: 0xc5c80044  lwc1        $f8, 0x44($t6)
    ctx->pc = 0x345f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x345f54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x345f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f58: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x345f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x345f5c: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x345f5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345f60: 0xc5c40048  lwc1        $f4, 0x48($t6)
    ctx->pc = 0x345f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x345f64: 0x25e40040  addiu       $a0, $t7, 0x40
    ctx->pc = 0x345f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 64));
    // 0x345f68: 0xe7a90124  swc1        $f9, 0x124($sp)
    ctx->pc = 0x345f68u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x345f6c: 0xe7a80128  swc1        $f8, 0x128($sp)
    ctx->pc = 0x345f6cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x345f70: 0x46002786  mov.s       $f30, $f4
    ctx->pc = 0x345f70u;
    ctx->f[30] = FPU_MOV_S(ctx->f[4]);
    // 0x345f74: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x345f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x345f78: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x345f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x345f7c: 0x0  nop
    ctx->pc = 0x345f7cu;
    // NOP
label_345f80:
    // 0x345f80: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x345f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345f84: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x345f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345f88: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x345f88u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x345f8c: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x345f8cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
    // 0x345f90: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x345f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x345f94: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x345f94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x345f98: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x345f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345f9c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x345f9cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x345fa0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x345fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345fa4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x345fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x345fa8: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x345fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x345fac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x345facu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x345fb0: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x345fb0u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x345fb4: 0x46011180  add.s       $f6, $f2, $f1
    ctx->pc = 0x345fb4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x345fb8: 0x46063800  add.s       $f0, $f7, $f6
    ctx->pc = 0x345fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x345fbc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x345fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345fc0: 0x0  nop
    ctx->pc = 0x345fc0u;
    // NOP
    // 0x345fc4: 0x450100e0  bc1t        . + 4 + (0xE0 << 2)
    ctx->pc = 0x345FC4u;
    {
        const bool branch_taken_0x345fc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x345FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FC4u;
        // 0x345fc8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fc4) {
            ctx->pc = 0x346348u;
            goto label_346348;
        }
    }
    ctx->pc = 0x345FCCu;
    // 0x345fcc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x345fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x345fd0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x345fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x345fd4: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x345fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x345fd8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x345FD8u;
    {
        const bool branch_taken_0x345fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FD8u;
        // 0x345fdc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fd8) {
            ctx->pc = 0x345F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345f80;
        }
    }
    ctx->pc = 0x345FE0u;
    // 0x345fe0: 0xc5e90048  lwc1        $f9, 0x48($t7)
    ctx->pc = 0x345fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x345fe4: 0x25c60040  addiu       $a2, $t6, 0x40
    ctx->pc = 0x345fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x345fe8: 0xc5ee0040  lwc1        $f14, 0x40($t7)
    ctx->pc = 0x345fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x345fec: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x345fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ff0: 0xc5ef0044  lwc1        $f15, 0x44($t7)
    ctx->pc = 0x345ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x345ff4: 0x46004cc6  mov.s       $f19, $f9
    ctx->pc = 0x345ff4u;
    ctx->f[19] = FPU_MOV_S(ctx->f[9]);
    // 0x345ff8: 0xc7b00000  lwc1        $f16, 0x0($sp)
    ctx->pc = 0x345ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x345ffc: 0x46007486  mov.s       $f18, $f14
    ctx->pc = 0x345ffcu;
    ctx->f[18] = FPU_MOV_S(ctx->f[14]);
    // 0x346000: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x346000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x346004: 0x46007c46  mov.s       $f17, $f15
    ctx->pc = 0x346004u;
    ctx->f[17] = FPU_MOV_S(ctx->f[15]);
    // 0x346008: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x346008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x34600c: 0x46008306  mov.s       $f12, $f16
    ctx->pc = 0x34600cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[16]);
    // 0x346010: 0x46006ac6  mov.s       $f11, $f13
    ctx->pc = 0x346010u;
    ctx->f[11] = FPU_MOV_S(ctx->f[13]);
    // 0x346014: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x346014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346018: 0x46004286  mov.s       $f10, $f8
    ctx->pc = 0x346018u;
    ctx->f[10] = FPU_MOV_S(ctx->f[8]);
    // 0x34601c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x346020: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x346020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346024: 0x0  nop
    ctx->pc = 0x346024u;
    // NOP
label_346028:
    // 0x346028: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x346028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34602c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x34602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x346030: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x346030u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x346034: 0x460028c5  abs.s       $f3, $f5
    ctx->pc = 0x346034u;
    ctx->f[3] = FPU_ABS_S(ctx->f[5]);
    // 0x346038: 0x46029082  mul.s       $f2, $f18, $f2
    ctx->pc = 0x346038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[2]);
    // 0x34603c: 0x460388c2  mul.s       $f3, $f17, $f3
    ctx->pc = 0x34603cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[17], ctx->f[3]);
    // 0x346040: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x346040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x346044: 0x46002045  abs.s       $f1, $f4
    ctx->pc = 0x346044u;
    ctx->f[1] = FPU_ABS_S(ctx->f[4]);
    // 0x346048: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x346048u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x34604c: 0x46019842  mul.s       $f1, $f19, $f1
    ctx->pc = 0x34604cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[1]);
    // 0x346050: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x346050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x346054: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x346054u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x346058: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x346058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x34605c: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x34605cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x346060: 0x460111c0  add.s       $f7, $f2, $f1
    ctx->pc = 0x346060u;
    ctx->f[7] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346064: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x346064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x346068: 0x46063840  add.s       $f1, $f7, $f6
    ctx->pc = 0x346068u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x34606c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x34606cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x346070: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x346070u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x346074: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x346074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346078: 0x0  nop
    ctx->pc = 0x346078u;
    // NOP
    // 0x34607c: 0x450100b2  bc1t        . + 4 + (0xB2 << 2)
    ctx->pc = 0x34607Cu;
    {
        const bool branch_taken_0x34607c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x346080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34607Cu;
        // 0x346080: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34607c) {
            ctx->pc = 0x346348u;
            goto label_346348;
        }
    }
    ctx->pc = 0x346084u;
    // 0x346084: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x346084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x346088: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x346088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x34608c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x34608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x346090: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x346090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x346094: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x346094u;
    {
        const bool branch_taken_0x346094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346094u;
        // 0x346098: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346094) {
            ctx->pc = 0x346028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346028;
        }
    }
    ctx->pc = 0x34609Cu;
    // 0x34609c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x34609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3460a0: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x3460a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3460a4: 0x460006c5  abs.s       $f27, $f0
    ctx->pc = 0x3460a4u;
    ctx->f[27] = FPU_ABS_S(ctx->f[0]);
    // 0x3460a8: 0xc7b20030  lwc1        $f18, 0x30($sp)
    ctx->pc = 0x3460a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x3460ac: 0xc7bd0020  lwc1        $f29, 0x20($sp)
    ctx->pc = 0x3460acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x3460b0: 0x461b1102  mul.s       $f4, $f2, $f27
    ctx->pc = 0x3460b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[27]);
    // 0x3460b4: 0xc7bf0014  lwc1        $f31, 0x14($sp)
    ctx->pc = 0x3460b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x3460b8: 0x46009705  abs.s       $f28, $f18
    ctx->pc = 0x3460b8u;
    ctx->f[28] = FPU_ABS_S(ctx->f[18]);
    // 0x3460bc: 0x4600ed45  abs.s       $f21, $f29
    ctx->pc = 0x3460bcu;
    ctx->f[21] = FPU_ABS_S(ctx->f[29]);
    // 0x3460c0: 0x4600fe05  abs.s       $f24, $f31
    ctx->pc = 0x3460c0u;
    ctx->f[24] = FPU_ABS_S(ctx->f[31]);
    // 0x3460c4: 0x46154842  mul.s       $f1, $f9, $f21
    ctx->pc = 0x3460c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[21]);
    // 0x3460c8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x3460c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x3460cc: 0x4618f082  mul.s       $f2, $f30, $f24
    ctx->pc = 0x3460ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[24]);
    // 0x3460d0: 0x461c78c2  mul.s       $f3, $f15, $f28
    ctx->pc = 0x3460d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[28]);
    // 0x3460d4: 0x461d4002  mul.s       $f0, $f8, $f29
    ctx->pc = 0x3460d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[29]);
    // 0x3460d8: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x3460d8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x3460dc: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x3460dcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3460e0: 0x46126842  mul.s       $f1, $f13, $f18
    ctx->pc = 0x3460e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[18]);
    // 0x3460e4: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x3460e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x3460e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3460e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3460ec: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x3460ecu;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x3460f0: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x3460f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3460f4: 0x0  nop
    ctx->pc = 0x3460f4u;
    // NOP
    // 0x3460f8: 0x45030094  bc1tl       . + 4 + (0x94 << 2)
    ctx->pc = 0x3460F8u;
    {
        const bool branch_taken_0x3460f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3460f8) {
            ctx->pc = 0x3460FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3460F8u;
            // 0x3460fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x346100u;
    // 0x346100: 0xc7ab0034  lwc1        $f11, 0x34($sp)
    ctx->pc = 0x346100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x346104: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x346104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346108: 0x46005dc5  abs.s       $f23, $f11
    ctx->pc = 0x346108u;
    ctx->f[23] = FPU_ABS_S(ctx->f[11]);
    // 0x34610c: 0xc7ba0024  lwc1        $f26, 0x24($sp)
    ctx->pc = 0x34610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x346110: 0x461778c2  mul.s       $f3, $f15, $f23
    ctx->pc = 0x346110u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[23]);
    // 0x346114: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x346114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x346118: 0x4600d505  abs.s       $f20, $f26
    ctx->pc = 0x346118u;
    ctx->f[20] = FPU_ABS_S(ctx->f[26]);
    // 0x34611c: 0x4600b445  abs.s       $f17, $f22
    ctx->pc = 0x34611cu;
    ctx->f[17] = FPU_ABS_S(ctx->f[22]);
    // 0x346120: 0x461b0102  mul.s       $f4, $f0, $f27
    ctx->pc = 0x346120u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x346124: 0x46144842  mul.s       $f1, $f9, $f20
    ctx->pc = 0x346124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
    // 0x346128: 0x4611f082  mul.s       $f2, $f30, $f17
    ctx->pc = 0x346128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[17]);
    // 0x34612c: 0x461a4002  mul.s       $f0, $f8, $f26
    ctx->pc = 0x34612cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[26]);
    // 0x346130: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x346130u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x346134: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x346134u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x346138: 0x460b6842  mul.s       $f1, $f13, $f11
    ctx->pc = 0x346138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x34613c: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x34613cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x346140: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x346140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x346144: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x346144u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x346148: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x346148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34614c: 0x0  nop
    ctx->pc = 0x34614cu;
    // NOP
    // 0x346150: 0x4503007e  bc1tl       . + 4 + (0x7E << 2)
    ctx->pc = 0x346150u;
    {
        const bool branch_taken_0x346150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x346150) {
            ctx->pc = 0x346154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346150u;
            // 0x346154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x346158u;
    // 0x346158: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x346158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34615c: 0xc7aa0038  lwc1        $f10, 0x38($sp)
    ctx->pc = 0x34615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x346160: 0xc7b90028  lwc1        $f25, 0x28($sp)
    ctx->pc = 0x346160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x346164: 0x46180902  mul.s       $f4, $f1, $f24
    ctx->pc = 0x346164u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x346168: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x346168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34616c: 0x46005305  abs.s       $f12, $f10
    ctx->pc = 0x34616cu;
    ctx->f[12] = FPU_ABS_S(ctx->f[10]);
    // 0x346170: 0x4600ccc5  abs.s       $f19, $f25
    ctx->pc = 0x346170u;
    ctx->f[19] = FPU_ABS_S(ctx->f[25]);
    // 0x346174: 0x460c78c2  mul.s       $f3, $f15, $f12
    ctx->pc = 0x346174u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x346178: 0x46110082  mul.s       $f2, $f0, $f17
    ctx->pc = 0x346178u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x34617c: 0x46134842  mul.s       $f1, $f9, $f19
    ctx->pc = 0x34617cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[19]);
    // 0x346180: 0x46194002  mul.s       $f0, $f8, $f25
    ctx->pc = 0x346180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[25]);
    // 0x346184: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x346184u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x346188: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x346188u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34618c: 0x460a6842  mul.s       $f1, $f13, $f10
    ctx->pc = 0x34618cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[10]);
    // 0x346190: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x346190u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x346194: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x346194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x346198: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x346198u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x34619c: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x34619cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3461a0: 0x0  nop
    ctx->pc = 0x3461a0u;
    // NOP
    // 0x3461a4: 0x45030069  bc1tl       . + 4 + (0x69 << 2)
    ctx->pc = 0x3461A4u;
    {
        const bool branch_taken_0x3461a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3461a4) {
            ctx->pc = 0x3461A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3461A4u;
            // 0x3461a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x3461ACu;
    // 0x3461ac: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x3461acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3461b0: 0x46114842  mul.s       $f1, $f9, $f17
    ctx->pc = 0x3461b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[17]);
    // 0x3461b4: 0x461c70c2  mul.s       $f3, $f14, $f28
    ctx->pc = 0x3461b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[28]);
    // 0x3461b8: 0x46131102  mul.s       $f4, $f2, $f19
    ctx->pc = 0x3461b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
    // 0x3461bc: 0x4614f082  mul.s       $f2, $f30, $f20
    ctx->pc = 0x3461bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[20]);
    // 0x3461c0: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x3461c0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3461c4: 0x46128002  mul.s       $f0, $f16, $f18
    ctx->pc = 0x3461c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[18]);
    // 0x3461c8: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x3461c8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x3461cc: 0x46164042  mul.s       $f1, $f8, $f22
    ctx->pc = 0x3461ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[22]);
    // 0x3461d0: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x3461d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x3461d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3461d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3461d8: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x3461d8u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x3461dc: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x3461dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3461e0: 0x0  nop
    ctx->pc = 0x3461e0u;
    // NOP
    // 0x3461e4: 0x45030059  bc1tl       . + 4 + (0x59 << 2)
    ctx->pc = 0x3461E4u;
    {
        const bool branch_taken_0x3461e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3461e4) {
            ctx->pc = 0x3461E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3461E4u;
            // 0x3461e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x3461ECu;
    // 0x3461ec: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x3461ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3461f0: 0x46184842  mul.s       $f1, $f9, $f24
    ctx->pc = 0x3461f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x3461f4: 0x4615f082  mul.s       $f2, $f30, $f21
    ctx->pc = 0x3461f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[21]);
    // 0x3461f8: 0x46130102  mul.s       $f4, $f0, $f19
    ctx->pc = 0x3461f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[19]);
    // 0x3461fc: 0x461770c2  mul.s       $f3, $f14, $f23
    ctx->pc = 0x3461fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[23]);
    // 0x346200: 0x460b8002  mul.s       $f0, $f16, $f11
    ctx->pc = 0x346200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[11]);
    // 0x346204: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x346204u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x346208: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x346208u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34620c: 0x461f4042  mul.s       $f1, $f8, $f31
    ctx->pc = 0x34620cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[31]);
    // 0x346210: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x346210u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x346214: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x346214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x346218: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x346218u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x34621c: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x34621cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346220: 0x0  nop
    ctx->pc = 0x346220u;
    // NOP
    // 0x346224: 0x45030049  bc1tl       . + 4 + (0x49 << 2)
    ctx->pc = 0x346224u;
    {
        const bool branch_taken_0x346224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x346224) {
            ctx->pc = 0x346228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346224u;
            // 0x346228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x34622Cu;
    // 0x34622c: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x34622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346230: 0x460c7042  mul.s       $f1, $f14, $f12
    ctx->pc = 0x346230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x346234: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x346234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346238: 0x461b48c2  mul.s       $f3, $f9, $f27
    ctx->pc = 0x346238u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[27]);
    // 0x34623c: 0x46141102  mul.s       $f4, $f2, $f20
    ctx->pc = 0x34623cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x346240: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x346240u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x346244: 0x460309c0  add.s       $f7, $f1, $f3
    ctx->pc = 0x346244u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x346248: 0x460a8002  mul.s       $f0, $f16, $f10
    ctx->pc = 0x346248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[10]);
    // 0x34624c: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x34624cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x346250: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x346250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346254: 0x46024042  mul.s       $f1, $f8, $f2
    ctx->pc = 0x346254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x346258: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x346258u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x34625c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34625cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x346260: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x346260u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x346264: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x346264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346268: 0x0  nop
    ctx->pc = 0x346268u;
    // NOP
    // 0x34626c: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
    ctx->pc = 0x34626Cu;
    {
        const bool branch_taken_0x34626c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34626c) {
            ctx->pc = 0x346270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34626Cu;
            // 0x346270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x346274u;
    // 0x346274: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x346274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346278: 0x46117842  mul.s       $f1, $f15, $f17
    ctx->pc = 0x346278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[17]);
    // 0x34627c: 0x4617f082  mul.s       $f2, $f30, $f23
    ctx->pc = 0x34627cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[23]);
    // 0x346280: 0x460c0102  mul.s       $f4, $f0, $f12
    ctx->pc = 0x346280u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x346284: 0x461570c2  mul.s       $f3, $f14, $f21
    ctx->pc = 0x346284u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x346288: 0x46166802  mul.s       $f0, $f13, $f22
    ctx->pc = 0x346288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[22]);
    // 0x34628c: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x34628cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x346290: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x346290u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x346294: 0x461d8042  mul.s       $f1, $f16, $f29
    ctx->pc = 0x346294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[29]);
    // 0x346298: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x346298u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x34629c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34629cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3462a0: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x3462a0u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x3462a4: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x3462a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3462a8: 0x0  nop
    ctx->pc = 0x3462a8u;
    // NOP
    // 0x3462ac: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x3462ACu;
    {
        const bool branch_taken_0x3462ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3462B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462ACu;
        // 0x3462b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462ac) {
            ctx->pc = 0x34634Cu;
            goto label_34634c;
        }
    }
    ctx->pc = 0x3462B4u;
    // 0x3462b4: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x3462b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3462b8: 0x46187842  mul.s       $f1, $f15, $f24
    ctx->pc = 0x3462b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[24]);
    // 0x3462bc: 0x461470c2  mul.s       $f3, $f14, $f20
    ctx->pc = 0x3462bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x3462c0: 0x460c1102  mul.s       $f4, $f2, $f12
    ctx->pc = 0x3462c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x3462c4: 0x461cf082  mul.s       $f2, $f30, $f28
    ctx->pc = 0x3462c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[30], ctx->f[28]);
    // 0x3462c8: 0x460119c0  add.s       $f7, $f3, $f1
    ctx->pc = 0x3462c8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3462cc: 0x461f6802  mul.s       $f0, $f13, $f31
    ctx->pc = 0x3462ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[31]);
    // 0x3462d0: 0x46022180  add.s       $f6, $f4, $f2
    ctx->pc = 0x3462d0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x3462d4: 0x461a8042  mul.s       $f1, $f16, $f26
    ctx->pc = 0x3462d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[26]);
    // 0x3462d8: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x3462d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x3462dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3462dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3462e0: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x3462e0u;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x3462e4: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x3462e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3462e8: 0x0  nop
    ctx->pc = 0x3462e8u;
    // NOP
    // 0x3462ec: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3462ECu;
    {
        const bool branch_taken_0x3462ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3462F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462ECu;
        // 0x3462f0: 0xc7bf0188  lwc1        $f31, 0x188($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462ec) {
            ctx->pc = 0x346350u;
            goto label_346350;
        }
    }
    ctx->pc = 0x3462F4u;
    // 0x3462f4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x3462f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3462f8: 0x461b7842  mul.s       $f1, $f15, $f27
    ctx->pc = 0x3462f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[27]);
    // 0x3462fc: 0x46137102  mul.s       $f4, $f14, $f19
    ctx->pc = 0x3462fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[19]);
    // 0x346300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346304: 0x461700c2  mul.s       $f3, $f0, $f23
    ctx->pc = 0x346304u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x346308: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x346308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34630c: 0x460121c0  add.s       $f7, $f4, $f1
    ctx->pc = 0x34630cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x346310: 0x461c0082  mul.s       $f2, $f0, $f28
    ctx->pc = 0x346310u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
    // 0x346314: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x346314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346318: 0x46016802  mul.s       $f0, $f13, $f1
    ctx->pc = 0x346318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x34631c: 0x46021980  add.s       $f6, $f3, $f2
    ctx->pc = 0x34631cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x346320: 0x46198042  mul.s       $f1, $f16, $f25
    ctx->pc = 0x346320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[25]);
    // 0x346324: 0x46063880  add.s       $f2, $f7, $f6
    ctx->pc = 0x346324u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x346328: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x346328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34632c: 0x46000145  abs.s       $f5, $f0
    ctx->pc = 0x34632cu;
    ctx->f[5] = FPU_ABS_S(ctx->f[0]);
    // 0x346330: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x346330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346334: 0x0  nop
    ctx->pc = 0x346334u;
    // NOP
    // 0x346338: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x346338u;
    {
        const bool branch_taken_0x346338 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x346338) {
            ctx->pc = 0x34633Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346338u;
            // 0x34633c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346350u;
            goto label_346350;
        }
    }
    ctx->pc = 0x346340u;
    // 0x346340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x346340u;
    {
        const bool branch_taken_0x346340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346340u;
        // 0x346344: 0xc7be0180  lwc1        $f30, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346340) {
            ctx->pc = 0x346354u;
            goto label_346354;
        }
    }
    ctx->pc = 0x346348u;
label_346348:
    // 0x346348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34634c:
    // 0x34634c: 0xc7bf0188  lwc1        $f31, 0x188($sp)
    ctx->pc = 0x34634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_346350:
    // 0x346350: 0xc7be0180  lwc1        $f30, 0x180($sp)
    ctx->pc = 0x346350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_346354:
    // 0x346354: 0xc7bd0178  lwc1        $f29, 0x178($sp)
    ctx->pc = 0x346354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x346358: 0xc7bc0170  lwc1        $f28, 0x170($sp)
    ctx->pc = 0x346358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x34635c: 0xc7bb0168  lwc1        $f27, 0x168($sp)
    ctx->pc = 0x34635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x346360: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x346360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x346364: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x346364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x346368: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x346368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34636c: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x34636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x346370: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x346370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x346374: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x346374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x346378: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x346378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34637c: 0x3e00008  jr          $ra
    ctx->pc = 0x34637Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34637Cu;
        // 0x346380: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34637Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346384u;
    // 0x346384: 0x0  nop
    ctx->pc = 0x346384u;
    // NOP
    ctx->pc = 0x346388u;
}
