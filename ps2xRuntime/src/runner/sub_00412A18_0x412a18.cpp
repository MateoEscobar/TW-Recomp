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

// Function: sub_00412A18
// Address: 0x412a18 - 0x412bf8
void sub_00412A18_0x412a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412A18_0x412a18");
#endif

    switch (ctx->pc) {
        case 0x412a40u: goto label_412a40;
        case 0x412abcu: goto label_412abc;
        case 0x412b20u: goto label_412b20;
        case 0x412b80u: goto label_412b80;
        default: break;
    }

    ctx->pc = 0x412a18u;

    // 0x412a18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x412a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x412a1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x412a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x412a20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x412a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x412a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x412a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412a28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x412a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412a2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x412a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x412a30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x412a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x412a34: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x412a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x412a38: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x412A38u;
    SET_GPR_U32(ctx, 31, 0x412A40u);
    ctx->pc = 0x412A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412A38u;
    // 0x412a3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x412A38u, 0x412A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412A40u;
label_412a40:
    // 0x412a40: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x412a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x412a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x412a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x412a48: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x412a48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x412a4c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x412a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x412a50: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x412a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x412a54: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x412a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x412a58: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x412a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x412a5c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x412a5cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x412a60: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x412a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x412a64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x412a64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x412a68: 0x0  nop
    ctx->pc = 0x412a68u;
    // NOP
    // 0x412a6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x412a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x412a70: 0x0  nop
    ctx->pc = 0x412a70u;
    // NOP
    // 0x412a74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x412A74u;
    {
        const bool branch_taken_0x412a74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x412A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A74u;
        // 0x412a78: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a74) {
            ctx->pc = 0x412A80u;
            goto label_412a80;
        }
    }
    ctx->pc = 0x412A7Cu;
    // 0x412a7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x412a7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412a80:
    // 0x412a80: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x412A80u;
    {
        const bool branch_taken_0x412a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x412A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A80u;
        // 0x412a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412a80) {
            ctx->pc = 0x412BE4u;
            goto label_412be4;
        }
    }
    ctx->pc = 0x412A88u;
    // 0x412a88: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x412a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x412a8c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x412a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x412a90: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x412a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x412a94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x412a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x412a98: 0x0  nop
    ctx->pc = 0x412a98u;
    // NOP
    // 0x412a9c: 0x45030052  bc1tl       . + 4 + (0x52 << 2)
    ctx->pc = 0x412A9Cu;
    {
        const bool branch_taken_0x412a9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x412a9c) {
            ctx->pc = 0x412AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412A9Cu;
            // 0x412aa0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412BE8u;
            goto label_412be8;
        }
    }
    ctx->pc = 0x412AA4u;
    // 0x412aa4: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x412aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x412aa8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x412aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x412aac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x412aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x412ab0: 0x0  nop
    ctx->pc = 0x412ab0u;
    // NOP
    // 0x412ab4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x412AB4u;
    {
        const bool branch_taken_0x412ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x412ab4) {
            ctx->pc = 0x412AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412AB4u;
            // 0x412ab8: 0xc4620004  lwc1        $f2, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x412AC4u;
            goto label_412ac4;
        }
    }
    ctx->pc = 0x412ABCu;
label_412abc:
    // 0x412abc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x412ABCu;
    {
        const bool branch_taken_0x412abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412ABCu;
        // 0x412ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412abc) {
            ctx->pc = 0x412BE4u;
            goto label_412be4;
        }
    }
    ctx->pc = 0x412AC4u;
label_412ac4:
    // 0x412ac4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x412ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x412ac8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x412ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x412acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x412accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412ad0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x412ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x412ad4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x412ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412ad8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x412ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x412adc: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x412adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412ae0: 0xc62b0004  lwc1        $f11, 0x4($s1)
    ctx->pc = 0x412ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x412ae4: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x412ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x412ae8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x412ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x412aec: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x412aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x412af0: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x412af0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x412af4: 0xc6090054  lwc1        $f9, 0x54($s0)
    ctx->pc = 0x412af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x412af8: 0xc62a0000  lwc1        $f10, 0x0($s1)
    ctx->pc = 0x412af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x412afc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x412afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x412b00: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x412b00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x412b04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x412b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x412b08: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x412b08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x412b0c: 0xc6050030  lwc1        $f5, 0x30($s0)
    ctx->pc = 0x412b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x412b10: 0xc6080048  lwc1        $f8, 0x48($s0)
    ctx->pc = 0x412b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x412b14: 0xc6040034  lwc1        $f4, 0x34($s0)
    ctx->pc = 0x412b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x412b18: 0xc607004c  lwc1        $f7, 0x4C($s0)
    ctx->pc = 0x412b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x412b1c: 0xc6060050  lwc1        $f6, 0x50($s0)
    ctx->pc = 0x412b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_412b20:
    // 0x412b20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x412b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x412b24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x412b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x412b28: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x412b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x412b2c: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x412b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x412b30: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x412b30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x412b34: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x412b34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x412b38: 0x46080082  mul.s       $f2, $f0, $f8
    ctx->pc = 0x412b38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x412b3c: 0x460708c2  mul.s       $f3, $f1, $f7
    ctx->pc = 0x412b3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x412b40: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x412b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x412b44: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x412b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x412b48: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x412b48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x412b4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x412b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x412b50: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x412b50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x412b54: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x412b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x412b58: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x412b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x412b5c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x412b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x412b60: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x412b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x412b64: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x412B64u;
    {
        const bool branch_taken_0x412b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412B64u;
        // 0x412b68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b64) {
            ctx->pc = 0x412B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412b20;
        }
    }
    ctx->pc = 0x412B6Cu;
    // 0x412b6c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x412b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b70: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x412b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x412b74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x412b74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b78: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x412b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x412b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_412b80:
    // 0x412b80: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x412b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x412b84: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x412b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x412b88: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x412b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x412b8c: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x412b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x412b90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x412b94: 0x460550c1  sub.s       $f3, $f10, $f5
    ctx->pc = 0x412b94u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x412b98: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x412b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x412b9c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x412b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x412ba0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x412ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x412ba4: 0x46045881  sub.s       $f2, $f11, $f4
    ctx->pc = 0x412ba4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[4]);
    // 0x412ba8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x412ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x412bac: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x412bacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x412bb0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x412bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x412bb4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x412bb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x412bb8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x412bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x412bbc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x412bbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x412bc0: 0x46061836  c.le.s      $f3, $f6
    ctx->pc = 0x412bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x412bc4: 0x0  nop
    ctx->pc = 0x412bc4u;
    // NOP
    // 0x412bc8: 0x4501ffbc  bc1t        . + 4 + (-0x44 << 2)
    ctx->pc = 0x412BC8u;
    {
        const bool branch_taken_0x412bc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x412BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BC8u;
        // 0x412bcc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412bc8) {
            ctx->pc = 0x412ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412abc;
        }
    }
    ctx->pc = 0x412BD0u;
    // 0x412bd0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x412bd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412bd4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x412bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x412bd8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x412BD8u;
    {
        const bool branch_taken_0x412bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BD8u;
        // 0x412bdc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412bd8) {
            ctx->pc = 0x412B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412b80;
        }
    }
    ctx->pc = 0x412BE0u;
    // 0x412be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x412be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412be4:
    // 0x412be4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x412be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412be8:
    // 0x412be8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x412be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x412bec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x412becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x412bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x412BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BF0u;
        // 0x412bf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412BF8u;
}
