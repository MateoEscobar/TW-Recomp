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

// Function: sub_002FBBE8
// Address: 0x2fbbe8 - 0x2fbd18
void sub_002FBBE8_0x2fbbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBBE8_0x2fbbe8");
#endif

    switch (ctx->pc) {
        case 0x2fbbe8u: goto label_2fbbe8;
        case 0x2fbbecu: goto label_2fbbec;
        case 0x2fbbf0u: goto label_2fbbf0;
        case 0x2fbbf4u: goto label_2fbbf4;
        case 0x2fbbf8u: goto label_2fbbf8;
        case 0x2fbbfcu: goto label_2fbbfc;
        case 0x2fbc00u: goto label_2fbc00;
        case 0x2fbc04u: goto label_2fbc04;
        case 0x2fbc08u: goto label_2fbc08;
        case 0x2fbc0cu: goto label_2fbc0c;
        case 0x2fbc10u: goto label_2fbc10;
        case 0x2fbc14u: goto label_2fbc14;
        case 0x2fbc18u: goto label_2fbc18;
        case 0x2fbc1cu: goto label_2fbc1c;
        case 0x2fbc20u: goto label_2fbc20;
        case 0x2fbc24u: goto label_2fbc24;
        case 0x2fbc28u: goto label_2fbc28;
        case 0x2fbc2cu: goto label_2fbc2c;
        case 0x2fbc30u: goto label_2fbc30;
        case 0x2fbc34u: goto label_2fbc34;
        case 0x2fbc38u: goto label_2fbc38;
        case 0x2fbc3cu: goto label_2fbc3c;
        case 0x2fbc40u: goto label_2fbc40;
        case 0x2fbc44u: goto label_2fbc44;
        case 0x2fbc48u: goto label_2fbc48;
        case 0x2fbc4cu: goto label_2fbc4c;
        case 0x2fbc50u: goto label_2fbc50;
        case 0x2fbc54u: goto label_2fbc54;
        case 0x2fbc58u: goto label_2fbc58;
        case 0x2fbc5cu: goto label_2fbc5c;
        case 0x2fbc60u: goto label_2fbc60;
        case 0x2fbc64u: goto label_2fbc64;
        case 0x2fbc68u: goto label_2fbc68;
        case 0x2fbc6cu: goto label_2fbc6c;
        case 0x2fbc70u: goto label_2fbc70;
        case 0x2fbc74u: goto label_2fbc74;
        case 0x2fbc78u: goto label_2fbc78;
        case 0x2fbc7cu: goto label_2fbc7c;
        case 0x2fbc80u: goto label_2fbc80;
        case 0x2fbc84u: goto label_2fbc84;
        case 0x2fbc88u: goto label_2fbc88;
        case 0x2fbc8cu: goto label_2fbc8c;
        case 0x2fbc90u: goto label_2fbc90;
        case 0x2fbc94u: goto label_2fbc94;
        case 0x2fbc98u: goto label_2fbc98;
        case 0x2fbc9cu: goto label_2fbc9c;
        case 0x2fbca0u: goto label_2fbca0;
        case 0x2fbca4u: goto label_2fbca4;
        case 0x2fbca8u: goto label_2fbca8;
        case 0x2fbcacu: goto label_2fbcac;
        case 0x2fbcb0u: goto label_2fbcb0;
        case 0x2fbcb4u: goto label_2fbcb4;
        case 0x2fbcb8u: goto label_2fbcb8;
        case 0x2fbcbcu: goto label_2fbcbc;
        case 0x2fbcc0u: goto label_2fbcc0;
        case 0x2fbcc4u: goto label_2fbcc4;
        case 0x2fbcc8u: goto label_2fbcc8;
        case 0x2fbcccu: goto label_2fbccc;
        case 0x2fbcd0u: goto label_2fbcd0;
        case 0x2fbcd4u: goto label_2fbcd4;
        case 0x2fbcd8u: goto label_2fbcd8;
        case 0x2fbcdcu: goto label_2fbcdc;
        case 0x2fbce0u: goto label_2fbce0;
        case 0x2fbce4u: goto label_2fbce4;
        case 0x2fbce8u: goto label_2fbce8;
        case 0x2fbcecu: goto label_2fbcec;
        case 0x2fbcf0u: goto label_2fbcf0;
        case 0x2fbcf4u: goto label_2fbcf4;
        case 0x2fbcf8u: goto label_2fbcf8;
        case 0x2fbcfcu: goto label_2fbcfc;
        case 0x2fbd00u: goto label_2fbd00;
        case 0x2fbd04u: goto label_2fbd04;
        case 0x2fbd08u: goto label_2fbd08;
        case 0x2fbd0cu: goto label_2fbd0c;
        case 0x2fbd10u: goto label_2fbd10;
        case 0x2fbd14u: goto label_2fbd14;
        default: break;
    }

    ctx->pc = 0x2fbbe8u;

label_2fbbe8:
    // 0x2fbbe8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fbbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2fbbec:
    // 0x2fbbec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2fbbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2fbbf0:
    // 0x2fbbf0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fbbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2fbbf4:
    // 0x2fbbf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fbbf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbbf8:
    // 0x2fbbf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fbbf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fbbfc:
    // 0x2fbbfc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2fbbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2fbc00:
    // 0x2fbc00: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2fbc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2fbc04:
    // 0x2fbc04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fbc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fbc08:
    // 0x2fbc08: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2fbc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2fbc0c:
    // 0x2fbc0c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2fbc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2fbc10:
    // 0x2fbc10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fbc14:
    // 0x2fbc14: 0xc136afa  jal         func_4DABE8
label_2fbc18:
    if (ctx->pc == 0x2FBC18u) {
        ctx->pc = 0x2FBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC14u;
        // 0x2fbc18: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC1Cu;
        goto label_2fbc1c;
    }
    ctx->pc = 0x2FBC14u;
    SET_GPR_U32(ctx, 31, 0x2FBC1Cu);
    ctx->pc = 0x2FBC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC14u;
    // 0x2fbc18: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FBC14u, 0x2FBC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC1Cu;
label_2fbc1c:
    // 0x2fbc1c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2fbc1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbc20:
    // 0x2fbc20: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fbc20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2fbc24:
    // 0x2fbc24: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2fbc24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fbc28:
    // 0x2fbc28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fbc28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fbc2c:
    // 0x2fbc2c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2fbc2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2fbc30:
    // 0x2fbc30: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2fbc30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2fbc34:
    // 0x2fbc34: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2fbc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_2fbc38:
    // 0x2fbc38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2fbc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2fbc3c:
    // 0x2fbc3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fbc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fbc40:
    // 0x2fbc40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fbc40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fbc44:
    // 0x2fbc44: 0x0  nop
    ctx->pc = 0x2fbc44u;
    // NOP
label_2fbc48:
    // 0x2fbc48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fbc48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fbc4c:
    // 0x2fbc4c: 0x0  nop
    ctx->pc = 0x2fbc4cu;
    // NOP
label_2fbc50:
    // 0x2fbc50: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_2fbc54:
    if (ctx->pc == 0x2FBC54u) {
        ctx->pc = 0x2FBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC50u;
        // 0x2fbc54: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC58u;
        goto label_2fbc58;
    }
    ctx->pc = 0x2FBC50u;
    {
        const bool branch_taken_0x2fbc50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC50u;
        // 0x2fbc54: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc50) {
            ctx->pc = 0x2FBCF4u;
            goto label_2fbcf4;
        }
    }
    ctx->pc = 0x2FBC58u;
label_2fbc58:
    // 0x2fbc58: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2fbc58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2fbc5c:
    // 0x2fbc5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fbc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2fbc60:
    // 0x2fbc60: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x2fbc60u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_2fbc64:
    // 0x2fbc64: 0x247100e0  addiu       $s1, $v1, 0xE0
    ctx->pc = 0x2fbc64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_2fbc68:
    // 0x2fbc68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2fbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2fbc6c:
    // 0x2fbc6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2fbc70:
    if (ctx->pc == 0x2FBC70u) {
        ctx->pc = 0x2FBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC6Cu;
        // 0x2fbc70: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC74u;
        goto label_2fbc74;
    }
    ctx->pc = 0x2FBC6Cu;
    {
        const bool branch_taken_0x2fbc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC6Cu;
        // 0x2fbc70: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc6c) {
            ctx->pc = 0x2FBCA8u;
            goto label_2fbca8;
        }
    }
    ctx->pc = 0x2FBC74u;
label_2fbc74:
    // 0x2fbc74: 0xc0a6c8e  jal         func_29B238
label_2fbc78:
    if (ctx->pc == 0x2FBC78u) {
        ctx->pc = 0x2FBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC74u;
        // 0x2fbc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC7Cu;
        goto label_2fbc7c;
    }
    ctx->pc = 0x2FBC74u;
    SET_GPR_U32(ctx, 31, 0x2FBC7Cu);
    ctx->pc = 0x2FBC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC74u;
    // 0x2fbc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B238u, 0x2FBC74u, 0x2FBC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC7Cu;
label_2fbc7c:
    // 0x2fbc7c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fbc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fbc80:
    // 0x2fbc80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fbc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fbc84:
    // 0x2fbc84: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2fbc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2fbc88:
    // 0x2fbc88: 0xc0a6cae  jal         func_29B2B8
label_2fbc8c:
    if (ctx->pc == 0x2FBC8Cu) {
        ctx->pc = 0x2FBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC88u;
        // 0x2fbc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBC90u;
        goto label_2fbc90;
    }
    ctx->pc = 0x2FBC88u;
    SET_GPR_U32(ctx, 31, 0x2FBC90u);
    ctx->pc = 0x2FBC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC88u;
    // 0x2fbc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2B8u, 0x2FBC88u, 0x2FBC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBC90u;
label_2fbc90:
    // 0x2fbc90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fbc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fbc94:
    // 0x2fbc94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fbc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fbc98:
    // 0x2fbc98: 0xc0937ba  jal         func_24DEE8
label_2fbc9c:
    if (ctx->pc == 0x2FBC9Cu) {
        ctx->pc = 0x2FBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBC98u;
        // 0x2fbc9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBCA0u;
        goto label_2fbca0;
    }
    ctx->pc = 0x2FBC98u;
    SET_GPR_U32(ctx, 31, 0x2FBCA0u);
    ctx->pc = 0x2FBC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBC98u;
    // 0x2fbc9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEE8u, 0x2FBC98u, 0x2FBCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBCA0u;
label_2fbca0:
    // 0x2fbca0: 0x10540015  beq         $v0, $s4, . + 4 + (0x15 << 2)
label_2fbca4:
    if (ctx->pc == 0x2FBCA4u) {
        ctx->pc = 0x2FBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCA0u;
        // 0x2fbca4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBCA8u;
        goto label_2fbca8;
    }
    ctx->pc = 0x2FBCA0u;
    {
        const bool branch_taken_0x2fbca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2FBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCA0u;
        // 0x2fbca4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbca0) {
            ctx->pc = 0x2FBCF8u;
            goto label_2fbcf8;
        }
    }
    ctx->pc = 0x2FBCA8u;
label_2fbca8:
    // 0x2fbca8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2fbca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2fbcac:
    // 0x2fbcac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fbcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbcb0:
    // 0x2fbcb0: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x2fbcb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_2fbcb4:
    // 0x2fbcb4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2fbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2fbcb8:
    // 0x2fbcb8: 0x40f809  jalr        $v0
label_2fbcbc:
    if (ctx->pc == 0x2FBCBCu) {
        ctx->pc = 0x2FBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB8u;
        // 0x2fbcbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBCC0u;
        goto label_2fbcc0;
    }
    ctx->pc = 0x2FBCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FBCC0u);
        ctx->pc = 0x2FBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCB8u;
        // 0x2fbcbc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBCB8u, 0x2FBCC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FBCC0u;
label_2fbcc0:
    // 0x2fbcc0: 0x1454000d  bne         $v0, $s4, . + 4 + (0xD << 2)
label_2fbcc4:
    if (ctx->pc == 0x2FBCC4u) {
        ctx->pc = 0x2FBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCC0u;
        // 0x2fbcc4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBCC8u;
        goto label_2fbcc8;
    }
    ctx->pc = 0x2FBCC0u;
    {
        const bool branch_taken_0x2fbcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2FBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBCC0u;
        // 0x2fbcc4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcc0) {
            ctx->pc = 0x2FBCF8u;
            goto label_2fbcf8;
        }
    }
    ctx->pc = 0x2FBCC8u;
label_2fbcc8:
    // 0x2fbcc8: 0xde420048  ld          $v0, 0x48($s2)
    ctx->pc = 0x2fbcc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 72)));
label_2fbccc:
    // 0x2fbccc: 0x3403feff  ori         $v1, $zero, 0xFEFF
    ctx->pc = 0x2fbcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
label_2fbcd0:
    // 0x2fbcd0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fbcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2fbcd4:
    // 0x2fbcd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fbcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2fbcd8:
    // 0x2fbcd8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fbcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2fbcdc:
    // 0x2fbcdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fbcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2fbce0:
    // 0x2fbce0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fbce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2fbce4:
    // 0x2fbce4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fbce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2fbce8:
    // 0x2fbce8: 0xa2400006  sb          $zero, 0x6($s2)
    ctx->pc = 0x2fbce8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
label_2fbcec:
    // 0x2fbcec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fbcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fbcf0:
    // 0x2fbcf0: 0xfe420048  sd          $v0, 0x48($s2)
    ctx->pc = 0x2fbcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 2));
label_2fbcf4:
    // 0x2fbcf4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2fbcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2fbcf8:
    // 0x2fbcf8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2fbcf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fbcfc:
    // 0x2fbcfc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2fbcfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fbd00:
    // 0x2fbd00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fbd00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fbd04:
    // 0x2fbd04: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2fbd04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fbd08:
    // 0x2fbd08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbd0c:
    // 0x2fbd0c: 0x3e00008  jr          $ra
label_2fbd10:
    if (ctx->pc == 0x2FBD10u) {
        ctx->pc = 0x2FBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD0Cu;
        // 0x2fbd10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBD14u;
        goto label_2fbd14;
    }
    ctx->pc = 0x2FBD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD0Cu;
        // 0x2fbd10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBD14u;
label_2fbd14:
    // 0x2fbd14: 0x0  nop
    ctx->pc = 0x2fbd14u;
    // NOP
    ctx->pc = 0x2fbd18u;
}
