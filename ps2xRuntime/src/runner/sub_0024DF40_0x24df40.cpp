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

// Function: sub_0024DF40
// Address: 0x24df40 - 0x24e078
void sub_0024DF40_0x24df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DF40_0x24df40");
#endif

    switch (ctx->pc) {
        case 0x24e048u: goto label_24e048;
        default: break;
    }

    ctx->pc = 0x24df40u;

    // 0x24df40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x24df44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24df44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24df48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24df48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24df4c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x24df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x24df50: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x24df50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df54: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x24df54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x24df58: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x24df58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24df5c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24df60: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x24df60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x24df64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24df64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24df68: 0x108380b  movn        $a3, $t0, $t0
    ctx->pc = 0x24df68u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x24df6c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x24df6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24df70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24df70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df74: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x24df74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24df78: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x24df78u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
    // 0x24df7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24df7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24df80: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x24df80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x24df84: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24df84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24df88: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24df88u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x24df8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x24df8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x24df90: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x24df90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24df94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24df98: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x24df98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24df9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x24df9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24dfa0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x24dfa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24dfa4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x24dfa4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x24dfa8: 0x4a0003bf  vwaitq
    ctx->pc = 0x24dfa8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24dfac: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x24dfacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x24dfb0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x24dfb0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x24dfb4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x24dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x24dfb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24dfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24dfbc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x24dfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24dfc0: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x24dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x24dfc4: 0x0  nop
    ctx->pc = 0x24dfc4u;
    // NOP
    // 0x24dfc8: 0x0  nop
    ctx->pc = 0x24dfc8u;
    // NOP
    // 0x24dfcc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24dfccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24dfd0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x24dfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24dfd4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x24dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x24dfd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24dfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfdc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x24dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x24dfe0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24dfe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24dfe4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x24dfe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24dfe8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24dfe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24dfec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24dfecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24dff0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x24dff0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24dff4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x24dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x24dff8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x24dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x24dffc: 0x8d2447c4  lw          $a0, 0x47C4($t1)
    ctx->pc = 0x24dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 18372)));
    // 0x24e000: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x24e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x24e004: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x24e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x24e008: 0xafb10068  sw          $s1, 0x68($sp)
    ctx->pc = 0x24e008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
    // 0x24e00c: 0x2543d270  addiu       $v1, $t2, -0x2D90
    ctx->pc = 0x24e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955632));
    // 0x24e010: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x24e010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x24e014: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x24e014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x24e018: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x24e018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x24e01c: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x24e01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x24e020: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x24e020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x24e024: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x24e024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x24e028: 0xb3a90087  sdl         $t1, 0x87($sp)
    ctx->pc = 0x24e028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e02c: 0xb7a90080  sdr         $t1, 0x80($sp)
    ctx->pc = 0x24e02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e030: 0xb3ab008f  sdl         $t3, 0x8F($sp)
    ctx->pc = 0x24e030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e034: 0xb7ab0088  sdr         $t3, 0x88($sp)
    ctx->pc = 0x24e034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e038: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x24e038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e03c: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x24e03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24e040: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x24E040u;
    SET_GPR_U32(ctx, 31, 0x24E048u);
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x24E040u, 0x24E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E048u;
label_24e048:
    // 0x24e048: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E048u;
    {
        const bool branch_taken_0x24e048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E048u;
        // 0x24e04c: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e048) {
            ctx->pc = 0x24E054u;
            goto label_24e054;
        }
    }
    ctx->pc = 0x24E050u;
    // 0x24e050: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24e050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24e054:
    // 0x24e054: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x24e054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24e058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e05c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x24e05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24e060: 0x223100a  movz        $v0, $s1, $v1
    ctx->pc = 0x24e060u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x24e064: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24e064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24e068: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x24e068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e06c: 0x3e00008  jr          $ra
    ctx->pc = 0x24E06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E06Cu;
        // 0x24e070: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E074u;
    // 0x24e074: 0x0  nop
    ctx->pc = 0x24e074u;
    // NOP
    ctx->pc = 0x24e078u;
}
