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

// Function: sub_002274A8
// Address: 0x2274a8 - 0x227598
void sub_002274A8_0x2274a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002274A8_0x2274a8");
#endif

    switch (ctx->pc) {
        case 0x2274f0u: goto label_2274f0;
        default: break;
    }

    ctx->pc = 0x2274a8u;

    // 0x2274a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2274a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2274ac: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2274ACu;
    {
        const bool branch_taken_0x2274ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274ACu;
        // 0x2274b0: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274ac) {
            ctx->pc = 0x2274BCu;
            goto label_2274bc;
        }
    }
    ctx->pc = 0x2274B4u;
    // 0x2274b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2274B4u;
    {
        const bool branch_taken_0x2274b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274B4u;
        // 0x2274b8: 0x84c60092  lh          $a2, 0x92($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274b4) {
            ctx->pc = 0x2274C4u;
            goto label_2274c4;
        }
    }
    ctx->pc = 0x2274BCu;
label_2274bc:
    // 0x2274bc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2274bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2274c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2274c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2274c4:
    // 0x2274c4: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2274c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2274c8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2274c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2274cc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2274ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2274d0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2274d4: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x2274d4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2274d8: 0x244e0c80  addiu       $t6, $v0, 0xC80
    ctx->pc = 0x2274d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2274dc: 0x246d4b00  addiu       $t5, $v1, 0x4B00
    ctx->pc = 0x2274dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2274e0: 0x24845390  addiu       $a0, $a0, 0x5390
    ctx->pc = 0x2274e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21392));
    // 0x2274e4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2274e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274e8: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2274e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2274ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2274f0:
    // 0x2274f0: 0x5166001f  beql        $t3, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x2274F0u;
    {
        const bool branch_taken_0x2274f0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 6));
        if (branch_taken_0x2274f0) {
            ctx->pc = 0x2274F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2274F0u;
            // 0x2274f4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227570u;
            goto label_227570;
        }
    }
    ctx->pc = 0x2274F8u;
    // 0x2274f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2274fc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2274fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x227500: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x227500u;
    {
        const bool branch_taken_0x227500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227500) {
            ctx->pc = 0x227504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227500u;
            // 0x227504: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227570u;
            goto label_227570;
        }
    }
    ctx->pc = 0x227508u;
    // 0x227508: 0x79a20000  lq          $v0, 0x0($t5)
    ctx->pc = 0x227508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x22750c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x22750cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x227510: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x227510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x227514: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x227514u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x227518: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x227518u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x22751c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x22751cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x227520: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x227520u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x227524: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x227524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x227528: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x227528u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x22752c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x22752cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x227530: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x227530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x227534: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x227534u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x227538: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x227538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x22753c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22753cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227540: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x227540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
    // 0x227544: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x227544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227548: 0x0  nop
    ctx->pc = 0x227548u;
    // NOP
    // 0x22754c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22754Cu;
    {
        const bool branch_taken_0x22754c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22754Cu;
        // 0x227550: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22754c) {
            ctx->pc = 0x22756Cu;
            goto label_22756c;
        }
    }
    ctx->pc = 0x227554u;
    // 0x227554: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x227554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x227558: 0xad4e0000  sw          $t6, 0x0($t2)
    ctx->pc = 0x227558u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 14));
    // 0x22755c: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x227560: 0x185182b  sltu        $v1, $t4, $a1
    ctx->pc = 0x227560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x227564: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x227564u;
    {
        const bool branch_taken_0x227564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227564u;
        // 0x227568: 0x1e25021  addu        $t2, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227564) {
            ctx->pc = 0x227584u;
            goto label_227584;
        }
    }
    ctx->pc = 0x22756Cu;
label_22756c:
    // 0x22756c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x22756cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_227570:
    // 0x227570: 0x25ce06d0  addiu       $t6, $t6, 0x6D0
    ctx->pc = 0x227570u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1744));
    // 0x227574: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x227574u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x227578: 0x2d62003c  sltiu       $v0, $t3, 0x3C
    ctx->pc = 0x227578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x22757c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x22757Cu;
    {
        const bool branch_taken_0x22757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22757Cu;
        // 0x227580: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22757c) {
            ctx->pc = 0x2274F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2274f0;
        }
    }
    ctx->pc = 0x227584u;
label_227584:
    // 0x227584: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x227584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x227588: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x227588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22758c: 0x3e00008  jr          $ra
    ctx->pc = 0x22758Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22758Cu;
        // 0x227590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22758Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227594u;
    // 0x227594: 0x0  nop
    ctx->pc = 0x227594u;
    // NOP
    ctx->pc = 0x227598u;
}
