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

// Function: sub_0047D300
// Address: 0x47d300 - 0x47d4c0
void sub_0047D300_0x47d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D300_0x47d300");
#endif

    switch (ctx->pc) {
        case 0x47d49cu: goto label_47d49c;
        case 0x47d4a8u: goto label_47d4a8;
        default: break;
    }

    ctx->pc = 0x47d300u;

    // 0x47d300: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x47d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x47d304: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x47d304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47d30c: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x47D30Cu;
    {
        const bool branch_taken_0x47d30c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D30Cu;
        // 0x47d310: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d30c) {
            ctx->pc = 0x47D350u;
            goto label_47d350;
        }
    }
    ctx->pc = 0x47D314u;
    // 0x47d314: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x47D314u;
    {
        const bool branch_taken_0x47d314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D314u;
        // 0x47d318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d314) {
            ctx->pc = 0x47D32Cu;
            goto label_47d32c;
        }
    }
    ctx->pc = 0x47D31Cu;
    // 0x47d31c: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x47D31Cu;
    {
        const bool branch_taken_0x47d31c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D31Cu;
        // 0x47d320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d31c) {
            ctx->pc = 0x47D3E8u;
            goto label_47d3e8;
        }
    }
    ctx->pc = 0x47D324u;
    // 0x47d324: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x47D324u;
    {
        const bool branch_taken_0x47d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D324u;
        // 0x47d328: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d324) {
            ctx->pc = 0x47D488u;
            goto label_47d488;
        }
    }
    ctx->pc = 0x47D32Cu;
label_47d32c:
    // 0x47d32c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x47d32cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47d330: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x47d330u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x47d334: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x47d334u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x47d338: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x47d338u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x47d33c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x47d33cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x47d340: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x47d340u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x47d344: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x47d344u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x47d348: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x47D348u;
    {
        const bool branch_taken_0x47d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D348u;
        // 0x47d34c: 0x7ce30030  sq          $v1, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d348) {
            ctx->pc = 0x47D4B0u;
            goto label_47d4b0;
        }
    }
    ctx->pc = 0x47D350u;
label_47d350:
    // 0x47d350: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x47d350u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47d354: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x47d354u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x47d358: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x47d358u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x47d35c: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x47d35cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x47d360: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x47d360u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x47d364: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x47d364u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47d368: 0xd8e60010  lqc2        $vf6, 0x10($a3)
    ctx->pc = 0x47d368u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x47d36c: 0xd8e70020  lqc2        $vf7, 0x20($a3)
    ctx->pc = 0x47d36cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x47d370: 0xd8e80030  lqc2        $vf8, 0x30($a3)
    ctx->pc = 0x47d370u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x47d374: 0x9ce3000c  lwu         $v1, 0xC($a3)
    ctx->pc = 0x47d374u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x47d378: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x47d378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d37c: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x47d37cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d380: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x47d380u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x47d384: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x47d384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d388: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x47d388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d38c: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x47d38cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x47d390: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x47d390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d394: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x47d394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d398: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x47d398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x47d39c: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x47d39cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d3a0: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x47d3a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d3a4: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x47d3a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d3a8: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x47d3a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x47d3ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x47d3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x47d3b0: 0xfba90000  sqc2        $vf9, 0x0($sp)
    ctx->pc = 0x47d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x47d3b4: 0xfbaa0010  sqc2        $vf10, 0x10($sp)
    ctx->pc = 0x47d3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x47d3b8: 0xfbab0020  sqc2        $vf11, 0x20($sp)
    ctx->pc = 0x47d3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x47d3bc: 0xfbac0030  sqc2        $vf12, 0x30($sp)
    ctx->pc = 0x47d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x47d3c0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x47d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x47d3c4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x47d3c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47d3c8: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x47d3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x47d3cc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x47d3ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47d3d0: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x47d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x47d3d4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x47d3d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47d3d8: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x47d3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x47d3dc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x47d3dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47d3e0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x47D3E0u;
    {
        const bool branch_taken_0x47d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D3E0u;
        // 0x47d3e4: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d3e0) {
            ctx->pc = 0x47D4B0u;
            goto label_47d4b0;
        }
    }
    ctx->pc = 0x47D3E8u;
label_47d3e8:
    // 0x47d3e8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x47d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47d3ec: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x47d3ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47d3f0: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x47d3f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x47d3f4: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x47d3f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x47d3f8: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x47d3f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x47d3fc: 0x9ce4000c  lwu         $a0, 0xC($a3)
    ctx->pc = 0x47d3fcu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x47d400: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x47d400u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47d404: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x47d404u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x47d408: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x47d408u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x47d40c: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x47d40cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x47d410: 0x9ca3000c  lwu         $v1, 0xC($a1)
    ctx->pc = 0x47d410u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x47d414: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x47d414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d418: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x47d418u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d41c: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x47d41cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x47d420: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x47d420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d424: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x47d424u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d428: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x47d428u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x47d42c: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x47d42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d430: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x47d430u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d434: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x47d434u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x47d438: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x47d438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d43c: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x47d43cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d440: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x47d440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x47d444: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x47d444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x47d448: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x47d448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x47d44c: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x47d44cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x47d450: 0xf84a0010  sqc2        $vf10, 0x10($v0)
    ctx->pc = 0x47d450u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x47d454: 0xf84b0020  sqc2        $vf11, 0x20($v0)
    ctx->pc = 0x47d454u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x47d458: 0xf84c0030  sqc2        $vf12, 0x30($v0)
    ctx->pc = 0x47d458u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x47d45c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x47d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x47d460: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x47d460u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47d464: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x47d464u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x47d468: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x47d468u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47d46c: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x47d46cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x47d470: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x47d470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47d474: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x47d474u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x47d478: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x47d478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47d47c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x47D47Cu;
    {
        const bool branch_taken_0x47d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D47Cu;
        // 0x47d480: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d47c) {
            ctx->pc = 0x47D4B0u;
            goto label_47d4b0;
        }
    }
    ctx->pc = 0x47D484u;
    // 0x47d484: 0x0  nop
    ctx->pc = 0x47d484u;
    // NOP
label_47d488:
    // 0x47d488: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47d488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47d48c: 0x24a5ef98  addiu       $a1, $a1, -0x1068
    ctx->pc = 0x47d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963096));
    // 0x47d490: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x47d490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x47d494: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47D494u;
    SET_GPR_U32(ctx, 31, 0x47D49Cu);
    ctx->pc = 0x47D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D494u;
    // 0x47d498: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47D494u, 0x47D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D49Cu;
label_47d49c:
    // 0x47d49c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x47d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x47d4a0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47D4A0u;
    SET_GPR_U32(ctx, 31, 0x47D4A8u);
    ctx->pc = 0x47D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D4A0u;
    // 0x47d4a4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47D4A0u, 0x47D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D4A8u;
label_47d4a8:
    // 0x47d4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47d4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d4ac: 0x0  nop
    ctx->pc = 0x47d4acu;
    // NOP
label_47d4b0:
    // 0x47d4b0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x47d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47d4b4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x47d4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47d4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x47D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D4B8u;
        // 0x47d4bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D4C0u;
}
