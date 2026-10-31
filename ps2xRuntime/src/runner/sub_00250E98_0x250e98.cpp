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

// Function: sub_00250E98
// Address: 0x250e98 - 0x251070
void sub_00250E98_0x250e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250E98_0x250e98");
#endif

    switch (ctx->pc) {
        case 0x250ef8u: goto label_250ef8;
        case 0x250f40u: goto label_250f40;
        case 0x250fb0u: goto label_250fb0;
        case 0x251010u: goto label_251010;
        default: break;
    }

    ctx->pc = 0x250e98u;

    // 0x250e98: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x250e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x250e9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x250e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x250ea0: 0x7fb10320  sq          $s1, 0x320($sp)
    ctx->pc = 0x250ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 17));
    // 0x250ea4: 0x7fb30300  sq          $s3, 0x300($sp)
    ctx->pc = 0x250ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 19));
    // 0x250ea8: 0x7fb402f0  sq          $s4, 0x2F0($sp)
    ctx->pc = 0x250ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 20));
    // 0x250eac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x250eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250eb0: 0x7fb502e0  sq          $s5, 0x2E0($sp)
    ctx->pc = 0x250eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 21));
    // 0x250eb4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x250eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250eb8: 0x7fb702c0  sq          $s7, 0x2C0($sp)
    ctx->pc = 0x250eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 23));
    // 0x250ebc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x250ebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ec0: 0x7fb00330  sq          $s0, 0x330($sp)
    ctx->pc = 0x250ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 16));
    // 0x250ec4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x250ec4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ec8: 0x7fb20310  sq          $s2, 0x310($sp)
    ctx->pc = 0x250ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 18));
    // 0x250ecc: 0x7fb602d0  sq          $s6, 0x2D0($sp)
    ctx->pc = 0x250eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 22));
    // 0x250ed0: 0x7fbe02b0  sq          $fp, 0x2B0($sp)
    ctx->pc = 0x250ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 30));
    // 0x250ed4: 0xffbf02a0  sd          $ra, 0x2A0($sp)
    ctx->pc = 0x250ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 31));
    // 0x250ed8: 0x8c510598  lw          $s1, 0x598($v0)
    ctx->pc = 0x250ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x510598u));
    // 0x250edc: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x250edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x250ee0: 0x12200053  beqz        $s1, . + 4 + (0x53 << 2)
    ctx->pc = 0x250EE0u;
    {
        const bool branch_taken_0x250ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EE0u;
        // 0x250ee4: 0x8c760008  lw          $s6, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ee0) {
            ctx->pc = 0x251030u;
            goto label_251030;
        }
    }
    ctx->pc = 0x250EE8u;
    // 0x250ee8: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x250ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x250eec: 0x16f140  sll         $fp, $s6, 5
    ctx->pc = 0x250eecu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x250ef0: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x250ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x250ef4: 0x0  nop
    ctx->pc = 0x250ef4u;
    // NOP
label_250ef8:
    // 0x250ef8: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x250ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x250efc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x250efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x250f00: 0x3c014cbe  lui         $at, 0x4CBE
    ctx->pc = 0x250f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19646 << 16));
    // 0x250f04: 0x3421bc20  ori         $at, $at, 0xBC20
    ctx->pc = 0x250f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48160);
    // 0x250f08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250f0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x250f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250f10: 0x18c00045  blez        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x250F10u;
    {
        const bool branch_taken_0x250f10 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x250F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F10u;
        // 0x250f14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f10) {
            ctx->pc = 0x251028u;
            goto label_251028;
        }
    }
    ctx->pc = 0x250F18u;
    // 0x250f18: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x250f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x250f1c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x250f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x250f20: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x250f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x250f24: 0x7aa90000  lq          $t1, 0x0($s5)
    ctx->pc = 0x250f24u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x250f28: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x250f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x250f2c: 0x8c8b0598  lw          $t3, 0x598($a0)
    ctx->pc = 0x250f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1432)));
    // 0x250f30: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x250f30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250f34: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x250f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250f38: 0x2508ffe0  addiu       $t0, $t0, -0x20
    ctx->pc = 0x250f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x250f3c: 0x0  nop
    ctx->pc = 0x250f3cu;
    // NOP
label_250f40:
    // 0x250f40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x250f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x250f44: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x250f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x250f48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250f4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x250f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250f50: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x250f50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x250f54: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x250f54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x250f58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x250f58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x250f5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x250f5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x250f60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x250f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250f64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250f64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250f68: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x250f68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250f6c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x250f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250f70: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x250f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x250f74: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x250f74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x250f78: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x250f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
    // 0x250f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x250f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250f80: 0x0  nop
    ctx->pc = 0x250f80u;
    // NOP
    // 0x250f84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x250f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250f88: 0x0  nop
    ctx->pc = 0x250f88u;
    // NOP
    // 0x250f8c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x250F8Cu;
    {
        const bool branch_taken_0x250f8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F8Cu;
        // 0x250f90: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f8c) {
            ctx->pc = 0x250FE0u;
            goto label_250fe0;
        }
    }
    ctx->pc = 0x250F94u;
    // 0x250f94: 0x2564ffff  addiu       $a0, $t3, -0x1
    ctx->pc = 0x250f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x250f98: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x250f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x250f9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x250F9Cu;
    {
        const bool branch_taken_0x250f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F9Cu;
        // 0x250fa0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f9c) {
            ctx->pc = 0x250FD0u;
            goto label_250fd0;
        }
    }
    ctx->pc = 0x250FA4u;
    // 0x250fa4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x250fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x250fa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x250FA8u;
    {
        const bool branch_taken_0x250fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FA8u;
        // 0x250fac: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fa8) {
            ctx->pc = 0x250FC0u;
            goto label_250fc0;
        }
    }
    ctx->pc = 0x250FB0u;
label_250fb0:
    // 0x250fb0: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x250fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x250fb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x250FB4u;
    {
        const bool branch_taken_0x250fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FB4u;
        // 0x250fb8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fb4) {
            ctx->pc = 0x250FD0u;
            goto label_250fd0;
        }
    }
    ctx->pc = 0x250FBCu;
    // 0x250fbc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x250fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_250fc0:
    // 0x250fc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x250fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250fc4: 0x5466fffa  bnel        $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x250FC4u;
    {
        const bool branch_taken_0x250fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x250fc4) {
            ctx->pc = 0x250FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250FC4u;
            // 0x250fc8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250fb0;
        }
    }
    ctx->pc = 0x250FCCu;
    // 0x250fcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x250fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250fd0:
    // 0x250fd0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x250FD0u;
    {
        const bool branch_taken_0x250fd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fd0) {
            ctx->pc = 0x250FE0u;
            goto label_250fe0;
        }
    }
    ctx->pc = 0x250FD8u;
    // 0x250fd8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x250fd8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x250fdc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x250fdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_250fe0:
    // 0x250fe0: 0x1cc0ffd7  bgtz        $a2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x250FE0u;
    {
        const bool branch_taken_0x250fe0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x250FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FE0u;
        // 0x250fe4: 0x2508ffe0  addiu       $t0, $t0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fe0) {
            ctx->pc = 0x250F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250f40;
        }
    }
    ctx->pc = 0x250FE8u;
    // 0x250fe8: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x250fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x250fec: 0x2ca1821  addu        $v1, $s6, $t2
    ctx->pc = 0x250fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x250ff0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x250ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x250ff4: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x250ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x250ff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x250ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ffc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x250ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251000: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x251000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x251004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x251004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251008: 0xc093ca4  jal         func_24F290
    ctx->pc = 0x251008u;
    SET_GPR_U32(ctx, 31, 0x251010u);
    ctx->pc = 0x25100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251008u;
    // 0x25100c: 0xd03021  addu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F290u, 0x251008u, 0x251010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251010u;
label_251010:
    // 0x251010: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251010u;
    {
        const bool branch_taken_0x251010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251010u;
        // 0x251014: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251010) {
            ctx->pc = 0x251028u;
            goto label_251028;
        }
    }
    ctx->pc = 0x251018u;
    // 0x251018: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x251018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25101c: 0xaee40598  sw          $a0, 0x598($s7)
    ctx->pc = 0x25101cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1432), GPR_U32(ctx, 4));
    // 0x251020: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x251020u;
    {
        const bool branch_taken_0x251020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251020u;
        // 0x251024: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251020) {
            ctx->pc = 0x25103Cu;
            goto label_25103c;
        }
    }
    ctx->pc = 0x251028u;
label_251028:
    // 0x251028: 0x5620ffb3  bnel        $s1, $zero, . + 4 + (-0x4D << 2)
    ctx->pc = 0x251028u;
    {
        const bool branch_taken_0x251028 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x251028) {
            ctx->pc = 0x25102Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251028u;
            // 0x25102c: 0x8e82004c  lw          $v0, 0x4C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250ef8;
        }
    }
    ctx->pc = 0x251030u;
label_251030:
    // 0x251030: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x251030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x251034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x251034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251038: 0xaee30598  sw          $v1, 0x598($s7)
    ctx->pc = 0x251038u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1432), GPR_U32(ctx, 3));
label_25103c:
    // 0x25103c: 0x7bb00330  lq          $s0, 0x330($sp)
    ctx->pc = 0x25103cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x251040: 0x7bb10320  lq          $s1, 0x320($sp)
    ctx->pc = 0x251040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x251044: 0x7bb20310  lq          $s2, 0x310($sp)
    ctx->pc = 0x251044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x251048: 0x7bb30300  lq          $s3, 0x300($sp)
    ctx->pc = 0x251048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x25104c: 0x7bb402f0  lq          $s4, 0x2F0($sp)
    ctx->pc = 0x25104cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x251050: 0x7bb502e0  lq          $s5, 0x2E0($sp)
    ctx->pc = 0x251050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x251054: 0x7bb602d0  lq          $s6, 0x2D0($sp)
    ctx->pc = 0x251054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x251058: 0x7bb702c0  lq          $s7, 0x2C0($sp)
    ctx->pc = 0x251058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x25105c: 0x7bbe02b0  lq          $fp, 0x2B0($sp)
    ctx->pc = 0x25105cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x251060: 0xdfbf02a0  ld          $ra, 0x2A0($sp)
    ctx->pc = 0x251060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x251064: 0x3e00008  jr          $ra
    ctx->pc = 0x251064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251064u;
        // 0x251068: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25106Cu;
    // 0x25106c: 0x0  nop
    ctx->pc = 0x25106cu;
    // NOP
    ctx->pc = 0x251070u;
}
