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

// Function: sub_0017EA60
// Address: 0x17ea60 - 0x17ec38
void sub_0017EA60_0x17ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EA60_0x17ea60");
#endif

    switch (ctx->pc) {
        case 0x17ebb4u: goto label_17ebb4;
        case 0x17ebe4u: goto label_17ebe4;
        case 0x17ebf4u: goto label_17ebf4;
        case 0x17ec08u: goto label_17ec08;
        case 0x17ec10u: goto label_17ec10;
        case 0x17ec1cu: goto label_17ec1c;
        default: break;
    }

    ctx->pc = 0x17ea60u;

    // 0x17ea60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x17ea64: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17ea68: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x17ea68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x17ea6c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x17ea6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x17ea70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17ea70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea74: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x17ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x17ea78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17ea78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea7c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x17ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x17ea80: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17ea84: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x17ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x17ea88: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x17ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x17ea8c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x17ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17ea90: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17EA90u;
    {
        const bool branch_taken_0x17ea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ea90) {
            ctx->pc = 0x17EA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EA90u;
            // 0x17ea94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EA98u;
            goto label_17ea98;
        }
    }
    ctx->pc = 0x17EA98u;
label_17ea98:
    // 0x17ea98: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x17ea98u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x17ea9c: 0x1012  mflo        $v0
    ctx->pc = 0x17ea9cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x17eaa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17eaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17eaa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EAA4u;
    {
        const bool branch_taken_0x17eaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAA4u;
        // 0x17eaa8: 0x7a420060  lq          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eaa4) {
            ctx->pc = 0x17EABCu;
            goto label_17eabc;
        }
    }
    ctx->pc = 0x17EAACu;
    // 0x17eaac: 0x7a430070  lq          $v1, 0x70($s2)
    ctx->pc = 0x17eaacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x17eab0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17eab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x17eab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17EAB4u;
    {
        const bool branch_taken_0x17eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAB4u;
        // 0x17eab8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eab4) {
            ctx->pc = 0x17EAC8u;
            goto label_17eac8;
        }
    }
    ctx->pc = 0x17EABCu;
label_17eabc:
    // 0x17eabc: 0x7a430070  lq          $v1, 0x70($s2)
    ctx->pc = 0x17eabcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x17eac0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x17eac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x17eac4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x17eac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_17eac8:
    // 0x17eac8: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x17eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x17eacc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x17eaccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x17ead0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ead4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17EAD4u;
    {
        const bool branch_taken_0x17ead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ead4) {
            ctx->pc = 0x17EAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAD4u;
            // 0x17ead8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EADCu;
            goto label_17eadc;
        }
    }
    ctx->pc = 0x17EADCu;
label_17eadc:
    // 0x17eadc: 0x2010  mfhi        $a0
    ctx->pc = 0x17eadcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x17eae0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EAE0u;
    {
        const bool branch_taken_0x17eae0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x17EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAE0u;
        // 0x17eae4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eae0) {
            ctx->pc = 0x17EAFCu;
            goto label_17eafc;
        }
    }
    ctx->pc = 0x17EAE8u;
    // 0x17eae8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17eae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eaec: 0x0  nop
    ctx->pc = 0x17eaecu;
    // NOP
    // 0x17eaf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17eaf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17eaf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17EAF4u;
    {
        const bool branch_taken_0x17eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eaf4) {
            ctx->pc = 0x17EB14u;
            goto label_17eb14;
        }
    }
    ctx->pc = 0x17EAFCu;
label_17eafc:
    // 0x17eafc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x17eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17eb00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17eb04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17eb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb08: 0x0  nop
    ctx->pc = 0x17eb08u;
    // NOP
    // 0x17eb0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17eb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17eb10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17eb10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17eb14:
    // 0x17eb14: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EB14u;
    {
        const bool branch_taken_0x17eb14 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB14u;
        // 0x17eb18: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb14) {
            ctx->pc = 0x17EB30u;
            goto label_17eb30;
        }
    }
    ctx->pc = 0x17EB1Cu;
    // 0x17eb1c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17eb1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eb20: 0x0  nop
    ctx->pc = 0x17eb20u;
    // NOP
    // 0x17eb24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17eb24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17eb28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17EB28u;
    {
        const bool branch_taken_0x17eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb28) {
            ctx->pc = 0x17EB48u;
            goto label_17eb48;
        }
    }
    ctx->pc = 0x17EB30u;
label_17eb30:
    // 0x17eb30: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x17eb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17eb34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17eb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17eb38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17eb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eb3c: 0x0  nop
    ctx->pc = 0x17eb3cu;
    // NOP
    // 0x17eb40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17eb40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17eb44: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17eb44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17eb48:
    // 0x17eb48: 0x0  nop
    ctx->pc = 0x17eb48u;
    // NOP
    // 0x17eb4c: 0x0  nop
    ctx->pc = 0x17eb4cu;
    // NOP
    // 0x17eb50: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x17eb50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17eb54: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x17eb54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17eb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17eb5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17eb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb60: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x17eb60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17eb64: 0x8e510044  lw          $s1, 0x44($s2)
    ctx->pc = 0x17eb64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17eb68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17eb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17eb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x17eb70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17eb74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17eb74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17eb78: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17eb78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17eb7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17eb7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17eb80: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x17eb80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17eb84: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17eb84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17eb88: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x17eb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x17eb8c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x17eb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x17eb90: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x17eb90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17eb94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17eb98: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17eb98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17eb9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x17eb9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17eba0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x17eba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17eba4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x17eba4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17eba8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x17eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x17ebac: 0xc05f1c0  jal         func_17C700
    ctx->pc = 0x17EBACu;
    SET_GPR_U32(ctx, 31, 0x17EBB4u);
    ctx->pc = 0x17EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBACu;
    // 0x17ebb0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C700u, 0x17EBACu, 0x17EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBB4u;
label_17ebb4:
    // 0x17ebb4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x17ebb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ebb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebbc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x17ebbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ebc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ebc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebc4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17ebc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17ebc8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17ebc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17ebcc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x17ebccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17ebd0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x17ebd0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x17ebd4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x17ebd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17ebd8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x17ebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x17ebdc: 0xc05f210  jal         func_17C840
    ctx->pc = 0x17EBDCu;
    SET_GPR_U32(ctx, 31, 0x17EBE4u);
    ctx->pc = 0x17EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBDCu;
    // 0x17ebe0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C840u, 0x17EBDCu, 0x17EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBE4u;
label_17ebe4:
    // 0x17ebe4: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x17ebe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ebe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebec: 0xc05f1c0  jal         func_17C700
    ctx->pc = 0x17EBECu;
    SET_GPR_U32(ctx, 31, 0x17EBF4u);
    ctx->pc = 0x17EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBECu;
    // 0x17ebf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C700u, 0x17EBECu, 0x17EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBF4u;
label_17ebf4:
    // 0x17ebf4: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x17ebf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x17ebf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ebf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec00: 0xc05f210  jal         func_17C840
    ctx->pc = 0x17EC00u;
    SET_GPR_U32(ctx, 31, 0x17EC08u);
    ctx->pc = 0x17EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC00u;
    // 0x17ec04: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C840u, 0x17EC00u, 0x17EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC08u;
label_17ec08:
    // 0x17ec08: 0xc05f9fa  jal         func_17E7E8
    ctx->pc = 0x17EC08u;
    SET_GPR_U32(ctx, 31, 0x17EC10u);
    ctx->pc = 0x17EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC08u;
    // 0x17ec0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E7E8u, 0x17EC08u, 0x17EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC10u;
label_17ec10:
    // 0x17ec10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec14: 0xc05f620  jal         func_17D880
    ctx->pc = 0x17EC14u;
    SET_GPR_U32(ctx, 31, 0x17EC1Cu);
    ctx->pc = 0x17EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC14u;
    // 0x17ec18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D880u, 0x17EC14u, 0x17EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC1Cu;
label_17ec1c:
    // 0x17ec1c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x17ec1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ec20: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x17ec20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ec24: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x17ec24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17ec28: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x17ec28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17ec2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17ec2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ec30: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC30u;
        // 0x17ec34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EC38u;
}
