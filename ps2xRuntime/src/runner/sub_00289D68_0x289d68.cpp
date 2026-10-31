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

// Function: sub_00289D68
// Address: 0x289d68 - 0x289ed0
void sub_00289D68_0x289d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289D68_0x289d68");
#endif

    switch (ctx->pc) {
        case 0x289da4u: goto label_289da4;
        case 0x289dd8u: goto label_289dd8;
        default: break;
    }

    ctx->pc = 0x289d68u;

    // 0x289d68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x289d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x289d6c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x289d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x289d70: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x289d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x289d74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x289d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x289d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x289d7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x289d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x289d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x289d84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x289d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d88: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x289d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x289d8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x289d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d90: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x289d90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x289d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x289d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x289d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d9c: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x289D9Cu;
    SET_GPR_U32(ctx, 31, 0x289DA4u);
    ctx->pc = 0x289DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D9Cu;
    // 0x289da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x289D9Cu, 0x289DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DA4u;
label_289da4:
    // 0x289da4: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x289da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x289da8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x289da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x289dac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x289dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289db0: 0x0  nop
    ctx->pc = 0x289db0u;
    // NOP
    // 0x289db4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x289db4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x289db8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x289db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289dbc: 0x0  nop
    ctx->pc = 0x289dbcu;
    // NOP
    // 0x289dc0: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
    ctx->pc = 0x289DC0u;
    {
        const bool branch_taken_0x289dc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DC0u;
        // 0x289dc4: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dc0) {
            ctx->pc = 0x289EACu;
            goto label_289eac;
        }
    }
    ctx->pc = 0x289DC8u;
    // 0x289dc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x289dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289dd0: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x289DD0u;
    SET_GPR_U32(ctx, 31, 0x289DD8u);
    ctx->pc = 0x289DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DD0u;
    // 0x289dd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x289DD0u, 0x289DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DD8u;
label_289dd8:
    // 0x289dd8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x289dd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289ddc: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x289ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x289de0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x289de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x289de4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x289de4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x289de8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x289de8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x289dec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x289decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x289df0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x289df0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x289df4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x289df4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x289df8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x289df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x289dfc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x289dfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289e00: 0x0  nop
    ctx->pc = 0x289e00u;
    // NOP
    // 0x289e04: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x289e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e08: 0x0  nop
    ctx->pc = 0x289e08u;
    // NOP
    // 0x289e0c: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x289E0Cu;
    {
        const bool branch_taken_0x289e0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E0Cu;
        // 0x289e10: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e0c) {
            ctx->pc = 0x289EACu;
            goto label_289eac;
        }
    }
    ctx->pc = 0x289E14u;
    // 0x289e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289e1c: 0x0  nop
    ctx->pc = 0x289e1cu;
    // NOP
    // 0x289e20: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x289e20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e24: 0x0  nop
    ctx->pc = 0x289e24u;
    // NOP
    // 0x289e28: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x289E28u;
    {
        const bool branch_taken_0x289e28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E28u;
        // 0x289e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e28) {
            ctx->pc = 0x289EB0u;
            goto label_289eb0;
        }
    }
    ctx->pc = 0x289E30u;
    // 0x289e30: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x289e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x289e34: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x289e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x289e38: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x289e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x289e3c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x289e3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x289e40: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x289e40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x289e44: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x289e44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x289e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289e4c: 0x3c013ecb  lui         $at, 0x3ECB
    ctx->pc = 0x289e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16075 << 16));
    // 0x289e50: 0x3421367a  ori         $at, $at, 0x367A
    ctx->pc = 0x289e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13946);
    // 0x289e54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x289e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x289e58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x289e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x289e5c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x289e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e60: 0x0  nop
    ctx->pc = 0x289e60u;
    // NOP
    // 0x289e64: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x289E64u;
    {
        const bool branch_taken_0x289e64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E64u;
        // 0x289e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e64) {
            ctx->pc = 0x289EB0u;
            goto label_289eb0;
        }
    }
    ctx->pc = 0x289E6Cu;
    // 0x289e6c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x289e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x289e70: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x289e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e74: 0x0  nop
    ctx->pc = 0x289e74u;
    // NOP
    // 0x289e78: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x289E78u;
    {
        const bool branch_taken_0x289e78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E78u;
        // 0x289e7c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e78) {
            ctx->pc = 0x289EB4u;
            goto label_289eb4;
        }
    }
    ctx->pc = 0x289E80u;
    // 0x289e80: 0x0  nop
    ctx->pc = 0x289e80u;
    // NOP
    // 0x289e84: 0x0  nop
    ctx->pc = 0x289e84u;
    // NOP
    // 0x289e88: 0x46000004  c1          0x4
    ctx->pc = 0x289e88u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x289e8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e90: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x289e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x289e94: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x289e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289e98: 0x0  nop
    ctx->pc = 0x289e98u;
    // NOP
    // 0x289e9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x289E9Cu;
    {
        const bool branch_taken_0x289e9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x289EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E9Cu;
        // 0x289ea0: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e9c) {
            ctx->pc = 0x289EB4u;
            goto label_289eb4;
        }
    }
    ctx->pc = 0x289EA4u;
    // 0x289ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289EA4u;
    {
        const bool branch_taken_0x289ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EA4u;
        // 0x289ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ea4) {
            ctx->pc = 0x289EB4u;
            goto label_289eb4;
        }
    }
    ctx->pc = 0x289EACu;
label_289eac:
    // 0x289eac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289eb0:
    // 0x289eb0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x289eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_289eb4:
    // 0x289eb4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x289eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289eb8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x289eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x289ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x289ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289ec4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x289ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x289EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EC8u;
        // 0x289ecc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289ED0u;
}
