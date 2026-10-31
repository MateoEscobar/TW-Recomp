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

// Function: sub_00347170
// Address: 0x347170 - 0x347300
void sub_00347170_0x347170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347170_0x347170");
#endif

    switch (ctx->pc) {
        case 0x3471b8u: goto label_3471b8;
        default: break;
    }

    ctx->pc = 0x347170u;

    // 0x347170: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x347170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x347174: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x347174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347178: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x347178u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x34717c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x34717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x347180: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x347180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x347184: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x347184u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x347188: 0x94620084  lhu         $v0, 0x84($v1)
    ctx->pc = 0x347188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x34718c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x34718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x347190: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x347190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x347194: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x347194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x347198: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x347198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x34719c: 0x30427ff0  andi        $v0, $v0, 0x7FF0
    ctx->pc = 0x34719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32752);
    // 0x3471a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3471a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3471a4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3471A4u;
    {
        const bool branch_taken_0x3471a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3471A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471A4u;
        // 0x3471a8: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471a4) {
            ctx->pc = 0x3471D0u;
            goto label_3471d0;
        }
    }
    ctx->pc = 0x3471ACu;
    // 0x3471ac: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x3471acu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3471b0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3471b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3471b4: 0x0  nop
    ctx->pc = 0x3471b4u;
    // NOP
label_3471b8:
    // 0x3471b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3471b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3471bc: 0x0  nop
    ctx->pc = 0x3471bcu;
    // NOP
    // 0x3471c0: 0x0  nop
    ctx->pc = 0x3471c0u;
    // NOP
    // 0x3471c4: 0x0  nop
    ctx->pc = 0x3471c4u;
    // NOP
    // 0x3471c8: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3471C8u;
    {
        const bool branch_taken_0x3471c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3471c8) {
            ctx->pc = 0x3471CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3471C8u;
            // 0x3471cc: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3471B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3471b8;
        }
    }
    ctx->pc = 0x3471D0u;
label_3471d0:
    // 0x3471d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3471d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3471d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3471d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3471d8: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x3471d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3471dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3471dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3471e0: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x3471e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3471e4: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x3471e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3471e8: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x3471e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3471ec: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x3471ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3471f0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x3471f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3471f4: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x3471f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3471f8: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x3471f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3471fc: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3471fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347200: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x347200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x347204: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x347204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x347208: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x347208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x34720c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x34720cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347210: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x347210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347214: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x347214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x347218: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x347218u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x34721c: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x34721cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x347220: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x347220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x347224: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x347224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x347228: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x347228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x34722c: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x34722cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x347230: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x347230u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347234: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x347234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x347238: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x347238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x34723c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x34723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x347240: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x347240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x347244: 0x78830050  lq          $v1, 0x50($a0)
    ctx->pc = 0x347244u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x347248: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x347248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34724c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34724cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x347250: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x347250u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347254: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x347254u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x347258: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x347258u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x34725c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x347260: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x347260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x347264: 0x78830060  lq          $v1, 0x60($a0)
    ctx->pc = 0x347264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x347268: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x347268u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34726c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x34726cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x347270: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x347270u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347274: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x347274u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x347278: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x347278u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x34727c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x347280: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x347280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x347284: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x347284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x347288: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x347288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x34728c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x34728cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x347290: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x347290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x347294: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x347294u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347298: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x347298u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x34729c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x34729cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3472a0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3472a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3472a4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3472a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3472a8: 0x78820060  lq          $v0, 0x60($a0)
    ctx->pc = 0x3472a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3472ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3472acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3472b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3472b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3472b4: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x3472b4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3472b8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3472b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3472bc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3472bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3472c0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3472c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3472c4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3472c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3472c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3472c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3472cc: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x3472ccu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3472d0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3472d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3472d4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3472d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3472d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3472d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3472dc: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3472dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3472e0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3472e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3472e4: 0x4be2097c  vftoi0.xyzw $vf2, $vf1
    ctx->pc = 0x3472e4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3472e8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3472e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3472ec: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3472ecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3472f0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3472f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x3472f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3472F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3472F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472F4u;
        // 0x3472f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3472F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3472FCu;
    // 0x3472fc: 0x0  nop
    ctx->pc = 0x3472fcu;
    // NOP
    ctx->pc = 0x347300u;
}
