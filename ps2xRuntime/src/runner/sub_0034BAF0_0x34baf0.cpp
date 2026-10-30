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

// Function: sub_0034BAF0
// Address: 0x34baf0 - 0x34bbe8
void sub_0034BAF0_0x34baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BAF0_0x34baf0");
#endif

    ctx->pc = 0x34baf0u;

    // 0x34baf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34baf4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x34baf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bafc: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x34BAFCu;
    {
        const bool branch_taken_0x34bafc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x34BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BAFCu;
        // 0x34bb00: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bafc) {
            ctx->pc = 0x34BB60u;
            goto label_34bb60;
        }
    }
    ctx->pc = 0x34BB04u;
    // 0x34bb04: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x34bb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x34bb08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34BB08u;
    {
        const bool branch_taken_0x34bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB08u;
        // 0x34bb0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb08) {
            ctx->pc = 0x34BB20u;
            goto label_34bb20;
        }
    }
    ctx->pc = 0x34BB10u;
    // 0x34bb10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x34BB10u;
    {
        const bool branch_taken_0x34bb10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB10u;
        // 0x34bb14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb10) {
            ctx->pc = 0x34BB30u;
            goto label_34bb30;
        }
    }
    ctx->pc = 0x34BB18u;
    // 0x34bb18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x34BB18u;
    {
        const bool branch_taken_0x34bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB18u;
        // 0x34bb1c: 0x24421730  addiu       $v0, $v0, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb18) {
            ctx->pc = 0x34BB78u;
            goto label_34bb78;
        }
    }
    ctx->pc = 0x34BB20u;
label_34bb20:
    // 0x34bb20: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34BB20u;
    {
        const bool branch_taken_0x34bb20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x34BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB20u;
        // 0x34bb24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb20) {
            ctx->pc = 0x34BB48u;
            goto label_34bb48;
        }
    }
    ctx->pc = 0x34BB28u;
    // 0x34bb28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x34BB28u;
    {
        const bool branch_taken_0x34bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB28u;
        // 0x34bb2c: 0x24421730  addiu       $v0, $v0, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb28) {
            ctx->pc = 0x34BB78u;
            goto label_34bb78;
        }
    }
    ctx->pc = 0x34BB30u;
label_34bb30:
    // 0x34bb30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34bb34: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x34bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x34bb38: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x34bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x34bb3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bb40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34BB40u;
    {
        const bool branch_taken_0x34bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB40u;
        // 0x34bb44: 0x78830000  lq          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb40) {
            ctx->pc = 0x34BB7Cu;
            goto label_34bb7c;
        }
    }
    ctx->pc = 0x34BB48u;
label_34bb48:
    // 0x34bb48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34bb4c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x34bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x34bb50: 0x24422990  addiu       $v0, $v0, 0x2990
    ctx->pc = 0x34bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10640));
    // 0x34bb54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bb58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34BB58u;
    {
        const bool branch_taken_0x34bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB58u;
        // 0x34bb5c: 0x78830000  lq          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb58) {
            ctx->pc = 0x34BB7Cu;
            goto label_34bb7c;
        }
    }
    ctx->pc = 0x34BB60u;
label_34bb60:
    // 0x34bb60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34bb64: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x34bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x34bb68: 0x24422a50  addiu       $v0, $v0, 0x2A50
    ctx->pc = 0x34bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10832));
    // 0x34bb6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bb70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34BB70u;
    {
        const bool branch_taken_0x34bb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB70u;
        // 0x34bb74: 0x78830000  lq          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb70) {
            ctx->pc = 0x34BB7Cu;
            goto label_34bb7c;
        }
    }
    ctx->pc = 0x34BB78u;
label_34bb78:
    // 0x34bb78: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x34bb78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_34bb7c:
    // 0x34bb7c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x34bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x34bb80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x34bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x34bb84: 0x79250020  lq          $a1, 0x20($t1)
    ctx->pc = 0x34bb84u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x34bb88: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x34bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x34bb8c: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x34bb8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x34bb90: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x34bb90u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116C0u));
    // 0x34bb94: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34bb98: 0x79220010  lq          $v0, 0x10($t1)
    ctx->pc = 0x34bb98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x34bb9c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x34bb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x34bba0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x34bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x34bba4: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x34bba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
    // 0x34bba8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x34bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x34bbac: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x34bbacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34bbb0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34bbb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bbb4: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x34bbb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bbb8: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x34bbb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bbbc: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x34bbbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34bbc0: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x34bbc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x34bbc4: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x34bbc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x34bbc8: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x34bbc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x34bbcc: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x34bbccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34bbd0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34bbd4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x34bbd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34bbd8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x34bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x34bbdc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x34bbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x34bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x34BBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BBE0u;
        // 0x34bbe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BBE8u;
}
