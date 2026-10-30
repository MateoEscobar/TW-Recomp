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

// Function: sub_00269DC8
// Address: 0x269dc8 - 0x269f30
void sub_00269DC8_0x269dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269DC8_0x269dc8");
#endif

    switch (ctx->pc) {
        case 0x269e18u: goto label_269e18;
        case 0x269e70u: goto label_269e70;
        case 0x269ea8u: goto label_269ea8;
        case 0x269f10u: goto label_269f10;
        default: break;
    }

    ctx->pc = 0x269dc8u;

    // 0x269dc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x269dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x269dcc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x269dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x269dd0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x269dd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x269dd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x269dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269dd8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x269dd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x269ddc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x269ddcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x269de0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x269de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x269de4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x269de4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x269de8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x269de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x269dec: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x269DECu;
    {
        const bool branch_taken_0x269dec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x269DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DECu;
        // 0x269df0: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269dec) {
            ctx->pc = 0x269E20u;
            goto label_269e20;
        }
    }
    ctx->pc = 0x269DF4u;
    // 0x269df4: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x269df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x269df8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x269df8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x269dfc: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x269dfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x269e00: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x269e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x269e04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x269e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x269e08: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x269e08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x269e0c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x269e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x269e10: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x269E10u;
    SET_GPR_U32(ctx, 31, 0x269E18u);
    ctx->pc = 0x269E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E10u;
    // 0x269e14: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x269E10u, 0x269E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E18u;
label_269e18:
    // 0x269e18: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x269E18u;
    {
        const bool branch_taken_0x269e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e18) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269E20u;
label_269e20:
    // 0x269e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269e24: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269E24u;
    {
        const bool branch_taken_0x269e24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x269E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E24u;
        // 0x269e28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e24) {
            ctx->pc = 0x269E40u;
            goto label_269e40;
        }
    }
    ctx->pc = 0x269E2Cu;
    // 0x269e2c: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x269e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x269e30: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x269e30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x269e34: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x269e34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x269e38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x269E38u;
    {
        const bool branch_taken_0x269e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E38u;
        // 0x269e3c: 0x26104b00  addiu       $s0, $s0, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e38) {
            ctx->pc = 0x269E94u;
            goto label_269e94;
        }
    }
    ctx->pc = 0x269E40u;
label_269e40:
    // 0x269e40: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x269E40u;
    {
        const bool branch_taken_0x269e40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x269E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E40u;
        // 0x269e44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e40) {
            ctx->pc = 0x269E78u;
            goto label_269e78;
        }
    }
    ctx->pc = 0x269E48u;
    // 0x269e48: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x269e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x269e4c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x269e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x269e50: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x269e50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x269e54: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x269e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x269e58: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x269e58u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x269e5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x269e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x269e60: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x269e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x269e64: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x269e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x269e68: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x269E68u;
    SET_GPR_U32(ctx, 31, 0x269E70u);
    ctx->pc = 0x269E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E68u;
    // 0x269e6c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x269E68u, 0x269E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E70u;
label_269e70:
    // 0x269e70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x269E70u;
    {
        const bool branch_taken_0x269e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e70) {
            ctx->pc = 0x269EA8u;
            goto label_269ea8;
        }
    }
    ctx->pc = 0x269E78u;
label_269e78:
    // 0x269e78: 0x14a20022  bne         $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x269E78u;
    {
        const bool branch_taken_0x269e78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x269E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E78u;
        // 0x269e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e78) {
            ctx->pc = 0x269F04u;
            goto label_269f04;
        }
    }
    ctx->pc = 0x269E80u;
    // 0x269e80: 0x26510090  addiu       $s1, $s2, 0x90
    ctx->pc = 0x269e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x269e84: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x269e84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x269e88: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x269e88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x269e8c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x269e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x269e90: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x269e90u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_269e94:
    // 0x269e94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x269e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x269e98: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x269e98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x269e9c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x269e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x269ea0: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x269EA0u;
    SET_GPR_U32(ctx, 31, 0x269EA8u);
    ctx->pc = 0x269EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269EA0u;
    // 0x269ea4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x269EA0u, 0x269EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EA8u;
label_269ea8:
    // 0x269ea8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x269ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x269eac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x269eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269eb0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x269eb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x269eb4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x269eb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x269eb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x269eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x269ebc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x269ebcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x269ec0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x269ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x269ec4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x269ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x269ec8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x269ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x269ecc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x269eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x269ed0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x269ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x269ed4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x269ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x269ed8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x269ed8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269edc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x269edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x269ee0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x269ee0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x269ee4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x269ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x269ee8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x269ee8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x269eec: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x269eecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x269ef0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x269ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x269ef4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x269ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x269ef8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x269ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x269efc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x269efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x269f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269f04:
    // 0x269f04: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x269f04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x269f08: 0xc08f4ae  jal         func_23D2B8
    ctx->pc = 0x269F08u;
    SET_GPR_U32(ctx, 31, 0x269F10u);
    ctx->pc = 0x269F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F08u;
    // 0x269f0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x269F08u, 0x269F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F10u;
label_269f10:
    // 0x269f10: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x269f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x269f14: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x269f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x269f18: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x269f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x269f1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x269f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x269f20: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x269f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x269f24: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x269f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x269f28: 0x3e00008  jr          $ra
    ctx->pc = 0x269F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F28u;
        // 0x269f2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269F30u;
}
