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

// Function: sub_002C9E18
// Address: 0x2c9e18 - 0x2c9f58
void sub_002C9E18_0x2c9e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E18_0x2c9e18");
#endif

    switch (ctx->pc) {
        case 0x2c9e40u: goto label_2c9e40;
        case 0x2c9e64u: goto label_2c9e64;
        case 0x2c9e6cu: goto label_2c9e6c;
        case 0x2c9e98u: goto label_2c9e98;
        case 0x2c9ea0u: goto label_2c9ea0;
        case 0x2c9f0cu: goto label_2c9f0c;
        default: break;
    }

    ctx->pc = 0x2c9e18u;

    // 0x2c9e18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c9e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c9e1c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2c9e20: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c9e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2c9e24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c9e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e28: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c9e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2c9e2c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2c9e30: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c9e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c9e34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c9e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e38: 0xc0a3678  jal         func_28D9E0
    ctx->pc = 0x2C9E38u;
    SET_GPR_U32(ctx, 31, 0x2C9E40u);
    ctx->pc = 0x2C9E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E38u;
    // 0x2c9e3c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2C9E38u, 0x2C9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E40u;
label_2c9e40:
    // 0x2c9e40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e44: 0x86110092  lh          $s1, 0x92($s0)
    ctx->pc = 0x2c9e44u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2c9e48: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2c9e4c: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x2c9e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2c9e50: 0x118940  sll         $s1, $s1, 5
    ctx->pc = 0x2c9e50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2c9e54: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2c9e58: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2c9e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c9e5c: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2C9E5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9E64u);
    ctx->pc = 0x2C9E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E5Cu;
    // 0x2c9e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C9E5Cu, 0x2C9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E64u;
label_2c9e64:
    // 0x2c9e64: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2C9E64u;
    SET_GPR_U32(ctx, 31, 0x2C9E6Cu);
    ctx->pc = 0x2C9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E64u;
    // 0x2c9e68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C9E64u, 0x2C9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E6Cu;
label_2c9e6c:
    // 0x2c9e6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c9e6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e74: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2c9e74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c9e78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2c9e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2c9e7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2c9e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2c9e80: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c9e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c9e84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c9e84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2c9e88: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2c9e88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2c9e8c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2c9e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2c9e90: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2C9E90u;
    SET_GPR_U32(ctx, 31, 0x2C9E98u);
    ctx->pc = 0x2C9E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E90u;
    // 0x2c9e94: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C9E90u, 0x2C9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E98u;
label_2c9e98:
    // 0x2c9e98: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2C9E98u;
    SET_GPR_U32(ctx, 31, 0x2C9EA0u);
    ctx->pc = 0x2C9E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E98u;
    // 0x2c9e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C9E98u, 0x2C9EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EA0u;
label_2c9ea0:
    // 0x2c9ea0: 0x7a460030  lq          $a2, 0x30($s2)
    ctx->pc = 0x2c9ea0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2c9ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c9ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ea8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2c9ea8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9eac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c9eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c9eb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c9eb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2c9eb4: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2c9eb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2c9eb8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2c9eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2c9ebc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2c9ebcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2c9ec0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2c9ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2c9ec4: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x2c9ec4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2c9ec8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2c9ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2c9ecc: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2c9eccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2c9ed0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2c9ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2c9ed4: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x2c9ed4u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c9ed8: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x2c9ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x2c9edc: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x2c9edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x2c9ee0: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2c9ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x2c9ee4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c9ee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9ee8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2c9ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2c9eec: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x2c9eecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x2c9ef0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2c9ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c9ef4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2c9ef4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2c9ef8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2c9ef8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2c9efc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2c9efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x2c9f00: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2c9f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2c9f04: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2C9F04u;
    SET_GPR_U32(ctx, 31, 0x2C9F0Cu);
    ctx->pc = 0x2C9F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9F04u;
    // 0x2c9f08: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C9F04u, 0x2C9F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F0Cu;
label_2c9f0c:
    // 0x2c9f0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c9f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c9f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c9f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c9f14: 0x0  nop
    ctx->pc = 0x2c9f14u;
    // NOP
    // 0x2c9f18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c9f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c9f1c: 0x0  nop
    ctx->pc = 0x2c9f1cu;
    // NOP
    // 0x2c9f20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9F20u;
    {
        const bool branch_taken_0x2c9f20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F20u;
        // 0x2c9f24: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f20) {
            ctx->pc = 0x2C9F38u;
            goto label_2c9f38;
        }
    }
    ctx->pc = 0x2C9F28u;
    // 0x2c9f28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c9f2c: 0x8c4419e8  lw          $a0, 0x19E8($v0)
    ctx->pc = 0x2c9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2c9f30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9f34: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c9f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2c9f38:
    // 0x2c9f38: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c9f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c9f3c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c9f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c9f40: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c9f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c9f44: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c9f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c9f48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c9f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F4Cu;
        // 0x2c9f50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9F54u;
    // 0x2c9f54: 0x0  nop
    ctx->pc = 0x2c9f54u;
    // NOP
    ctx->pc = 0x2c9f58u;
}
