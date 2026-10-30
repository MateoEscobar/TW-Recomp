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

// Function: sub_0029BCA0
// Address: 0x29bca0 - 0x29be58
void sub_0029BCA0_0x29bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BCA0_0x29bca0");
#endif

    switch (ctx->pc) {
        case 0x29bca0u: goto label_29bca0;
        case 0x29bca4u: goto label_29bca4;
        case 0x29bca8u: goto label_29bca8;
        case 0x29bcacu: goto label_29bcac;
        case 0x29bcb0u: goto label_29bcb0;
        case 0x29bcb4u: goto label_29bcb4;
        case 0x29bcb8u: goto label_29bcb8;
        case 0x29bcbcu: goto label_29bcbc;
        case 0x29bcc0u: goto label_29bcc0;
        case 0x29bcc4u: goto label_29bcc4;
        case 0x29bcc8u: goto label_29bcc8;
        case 0x29bcccu: goto label_29bccc;
        case 0x29bcd0u: goto label_29bcd0;
        case 0x29bcd4u: goto label_29bcd4;
        case 0x29bcd8u: goto label_29bcd8;
        case 0x29bcdcu: goto label_29bcdc;
        case 0x29bce0u: goto label_29bce0;
        case 0x29bce4u: goto label_29bce4;
        case 0x29bce8u: goto label_29bce8;
        case 0x29bcecu: goto label_29bcec;
        case 0x29bcf0u: goto label_29bcf0;
        case 0x29bcf4u: goto label_29bcf4;
        case 0x29bcf8u: goto label_29bcf8;
        case 0x29bcfcu: goto label_29bcfc;
        case 0x29bd00u: goto label_29bd00;
        case 0x29bd04u: goto label_29bd04;
        case 0x29bd08u: goto label_29bd08;
        case 0x29bd0cu: goto label_29bd0c;
        case 0x29bd10u: goto label_29bd10;
        case 0x29bd14u: goto label_29bd14;
        case 0x29bd18u: goto label_29bd18;
        case 0x29bd1cu: goto label_29bd1c;
        case 0x29bd20u: goto label_29bd20;
        case 0x29bd24u: goto label_29bd24;
        case 0x29bd28u: goto label_29bd28;
        case 0x29bd2cu: goto label_29bd2c;
        case 0x29bd30u: goto label_29bd30;
        case 0x29bd34u: goto label_29bd34;
        case 0x29bd38u: goto label_29bd38;
        case 0x29bd3cu: goto label_29bd3c;
        case 0x29bd40u: goto label_29bd40;
        case 0x29bd44u: goto label_29bd44;
        case 0x29bd48u: goto label_29bd48;
        case 0x29bd4cu: goto label_29bd4c;
        case 0x29bd50u: goto label_29bd50;
        case 0x29bd54u: goto label_29bd54;
        case 0x29bd58u: goto label_29bd58;
        case 0x29bd5cu: goto label_29bd5c;
        case 0x29bd60u: goto label_29bd60;
        case 0x29bd64u: goto label_29bd64;
        case 0x29bd68u: goto label_29bd68;
        case 0x29bd6cu: goto label_29bd6c;
        case 0x29bd70u: goto label_29bd70;
        case 0x29bd74u: goto label_29bd74;
        case 0x29bd78u: goto label_29bd78;
        case 0x29bd7cu: goto label_29bd7c;
        case 0x29bd80u: goto label_29bd80;
        case 0x29bd84u: goto label_29bd84;
        case 0x29bd88u: goto label_29bd88;
        case 0x29bd8cu: goto label_29bd8c;
        case 0x29bd90u: goto label_29bd90;
        case 0x29bd94u: goto label_29bd94;
        case 0x29bd98u: goto label_29bd98;
        case 0x29bd9cu: goto label_29bd9c;
        case 0x29bda0u: goto label_29bda0;
        case 0x29bda4u: goto label_29bda4;
        case 0x29bda8u: goto label_29bda8;
        case 0x29bdacu: goto label_29bdac;
        case 0x29bdb0u: goto label_29bdb0;
        case 0x29bdb4u: goto label_29bdb4;
        case 0x29bdb8u: goto label_29bdb8;
        case 0x29bdbcu: goto label_29bdbc;
        case 0x29bdc0u: goto label_29bdc0;
        case 0x29bdc4u: goto label_29bdc4;
        case 0x29bdc8u: goto label_29bdc8;
        case 0x29bdccu: goto label_29bdcc;
        case 0x29bdd0u: goto label_29bdd0;
        case 0x29bdd4u: goto label_29bdd4;
        case 0x29bdd8u: goto label_29bdd8;
        case 0x29bddcu: goto label_29bddc;
        case 0x29bde0u: goto label_29bde0;
        case 0x29bde4u: goto label_29bde4;
        case 0x29bde8u: goto label_29bde8;
        case 0x29bdecu: goto label_29bdec;
        case 0x29bdf0u: goto label_29bdf0;
        case 0x29bdf4u: goto label_29bdf4;
        case 0x29bdf8u: goto label_29bdf8;
        case 0x29bdfcu: goto label_29bdfc;
        case 0x29be00u: goto label_29be00;
        case 0x29be04u: goto label_29be04;
        case 0x29be08u: goto label_29be08;
        case 0x29be0cu: goto label_29be0c;
        case 0x29be10u: goto label_29be10;
        case 0x29be14u: goto label_29be14;
        case 0x29be18u: goto label_29be18;
        case 0x29be1cu: goto label_29be1c;
        case 0x29be20u: goto label_29be20;
        case 0x29be24u: goto label_29be24;
        case 0x29be28u: goto label_29be28;
        case 0x29be2cu: goto label_29be2c;
        case 0x29be30u: goto label_29be30;
        case 0x29be34u: goto label_29be34;
        case 0x29be38u: goto label_29be38;
        case 0x29be3cu: goto label_29be3c;
        case 0x29be40u: goto label_29be40;
        case 0x29be44u: goto label_29be44;
        case 0x29be48u: goto label_29be48;
        case 0x29be4cu: goto label_29be4c;
        case 0x29be50u: goto label_29be50;
        case 0x29be54u: goto label_29be54;
        default: break;
    }

    ctx->pc = 0x29bca0u;

label_29bca0:
    // 0x29bca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_29bca4:
    // 0x29bca4: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x29bca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_29bca8:
    // 0x29bca8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x29bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_29bcac:
    // 0x29bcac: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x29bcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_29bcb0:
    // 0x29bcb0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29bcb4:
    // 0x29bcb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29bcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bcb8:
    // 0x29bcb8: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x29bcb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_29bcbc:
    // 0x29bcbc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29bcc0:
    // 0x29bcc0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x29bcc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_29bcc4:
    // 0x29bcc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29bcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bcc8:
    // 0x29bcc8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_29bccc:
    // 0x29bccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29bcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_29bcd0:
    // 0x29bcd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29bcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_29bcd4:
    // 0x29bcd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29bcd8:
    // 0x29bcd8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x29bcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29bcdc:
    // 0x29bcdc: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x29bcdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_29bce0:
    // 0x29bce0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29bce4:
    // 0x29bce4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_29bce8:
    // 0x29bce8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29bce8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29bcec:
    // 0x29bcec: 0xc0a68f0  jal         func_29A3C0
label_29bcf0:
    if (ctx->pc == 0x29BCF0u) {
        ctx->pc = 0x29BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCECu;
        // 0x29bcf0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BCF4u;
        goto label_29bcf4;
    }
    ctx->pc = 0x29BCECu;
    SET_GPR_U32(ctx, 31, 0x29BCF4u);
    ctx->pc = 0x29BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCECu;
    // 0x29bcf0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29BCECu, 0x29BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCF4u;
label_29bcf4:
    // 0x29bcf4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x29bcf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29bcf8:
    // 0x29bcf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29bcfc:
    // 0x29bcfc: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x29bcfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29bd00:
    // 0x29bd00: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29bd00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29bd04:
    // 0x29bd04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x29bd04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29bd08:
    // 0x29bd08: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29bd08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29bd0c:
    // 0x29bd0c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29bd0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29bd10:
    // 0x29bd10: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x29bd10u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_29bd14:
    // 0x29bd14: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x29bd14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29bd18:
    // 0x29bd18: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x29bd18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29bd1c:
    // 0x29bd1c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29bd1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29bd20:
    // 0x29bd20: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x29bd20u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_29bd24:
    // 0x29bd24: 0x4a0003bf  vwaitq
    ctx->pc = 0x29bd24u;
    // VWAITQ (Q already resolved in this runtime)
label_29bd28:
    // 0x29bd28: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x29bd28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29bd2c:
    // 0x29bd2c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x29bd2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_29bd30:
    // 0x29bd30: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x29bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_29bd34:
    // 0x29bd34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29bd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29bd38:
    // 0x29bd38: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x29bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_29bd3c:
    // 0x29bd3c: 0x0  nop
    ctx->pc = 0x29bd3cu;
    // NOP
label_29bd40:
    // 0x29bd40: 0x0  nop
    ctx->pc = 0x29bd40u;
    // NOP
label_29bd44:
    // 0x29bd44: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x29bd44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_29bd48:
    // 0x29bd48: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x29bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_29bd4c:
    // 0x29bd4c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29bd4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29bd50:
    // 0x29bd50: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x29bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_29bd54:
    // 0x29bd54: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x29bd54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_29bd58:
    // 0x29bd58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29bd58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29bd5c:
    // 0x29bd5c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x29bd5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_29bd60:
    // 0x29bd60: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29bd60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29bd64:
    // 0x29bd64: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29bd64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_29bd68:
    // 0x29bd68: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_29bd6c:
    // 0x29bd6c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_29bd70:
    // 0x29bd70: 0xc0cd766  jal         func_335D98
label_29bd74:
    if (ctx->pc == 0x29BD74u) {
        ctx->pc = 0x29BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD70u;
        // 0x29bd74: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BD78u;
        goto label_29bd78;
    }
    ctx->pc = 0x29BD70u;
    SET_GPR_U32(ctx, 31, 0x29BD78u);
    ctx->pc = 0x29BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD70u;
    // 0x29bd74: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x29BD70u, 0x29BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD78u;
label_29bd78:
    // 0x29bd78: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29bd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29bd7c:
    // 0x29bd7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29bd7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_29bd80:
    // 0x29bd80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29bd84:
    // 0x29bd84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29bd88:
    // 0x29bd88: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x29bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29bd8c:
    // 0x29bd8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x29bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29bd90:
    // 0x29bd90: 0x7c620090  sq          $v0, 0x90($v1)
    ctx->pc = 0x29bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 2));
label_29bd94:
    // 0x29bd94: 0xe4600118  swc1        $f0, 0x118($v1)
    ctx->pc = 0x29bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
label_29bd98:
    // 0x29bd98: 0xe475009c  swc1        $f21, 0x9C($v1)
    ctx->pc = 0x29bd98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_29bd9c:
    // 0x29bd9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29bda0:
    // 0x29bda0: 0xe4540110  swc1        $f20, 0x110($v0)
    ctx->pc = 0x29bda0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_29bda4:
    // 0x29bda4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29bda8:
    // 0x29bda8: 0xa064011c  sb          $a0, 0x11C($v1)
    ctx->pc = 0x29bda8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 4));
label_29bdac:
    // 0x29bdac: 0xc0a2ab0  jal         func_28AAC0
label_29bdb0:
    if (ctx->pc == 0x29BDB0u) {
        ctx->pc = 0x29BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDACu;
        // 0x29bdb0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDB4u;
        goto label_29bdb4;
    }
    ctx->pc = 0x29BDACu;
    SET_GPR_U32(ctx, 31, 0x29BDB4u);
    ctx->pc = 0x29BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDACu;
    // 0x29bdb0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x29BDACu, 0x29BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDB4u;
label_29bdb4:
    // 0x29bdb4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x29bdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_29bdb8:
    // 0x29bdb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29bdb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_29bdbc:
    // 0x29bdbc: 0xc0cd7a8  jal         func_335EA0
label_29bdc0:
    if (ctx->pc == 0x29BDC0u) {
        ctx->pc = 0x29BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDBCu;
        // 0x29bdc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDC4u;
        goto label_29bdc4;
    }
    ctx->pc = 0x29BDBCu;
    SET_GPR_U32(ctx, 31, 0x29BDC4u);
    ctx->pc = 0x29BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDBCu;
    // 0x29bdc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x29BDBCu, 0x29BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDC4u;
label_29bdc4:
    // 0x29bdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29bdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29bdc8:
    // 0x29bdc8: 0xc086c40  jal         func_21B100
label_29bdcc:
    if (ctx->pc == 0x29BDCCu) {
        ctx->pc = 0x29BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BDC8u;
        // 0x29bdcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BDD0u;
        goto label_29bdd0;
    }
    ctx->pc = 0x29BDC8u;
    SET_GPR_U32(ctx, 31, 0x29BDD0u);
    ctx->pc = 0x29BDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDC8u;
    // 0x29bdcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x29BDC8u, 0x29BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDD0u;
label_29bdd0:
    // 0x29bdd0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x29bdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_29bdd4:
    // 0x29bdd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29bdd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29bdd8:
    // 0x29bdd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29bddc:
    // 0x29bddc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x29bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29bde0:
    // 0x29bde0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29bde0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29bde4:
    // 0x29bde4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x29bde4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29bde8:
    // 0x29bde8: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x29bde8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_29bdec:
    // 0x29bdec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29bdecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29bdf0:
    // 0x29bdf0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29bdf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29bdf4:
    // 0x29bdf4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29bdf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29bdf8:
    // 0x29bdf8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29bdf8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_29bdfc:
    // 0x29bdfc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_29be00:
    // 0x29be00: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_29be04:
    // 0x29be04: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_29be08:
    // 0x29be08: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x29be08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_29be0c:
    // 0x29be0c: 0x60f809  jalr        $v1
label_29be10:
    if (ctx->pc == 0x29BE10u) {
        ctx->pc = 0x29BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE0Cu;
        // 0x29be10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE14u;
        goto label_29be14;
    }
    ctx->pc = 0x29BE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29BE14u);
        ctx->pc = 0x29BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE0Cu;
        // 0x29be10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BE0Cu, 0x29BE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29BE14u;
label_29be14:
    // 0x29be14: 0xc0874fa  jal         func_21D3E8
label_29be18:
    if (ctx->pc == 0x29BE18u) {
        ctx->pc = 0x29BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE14u;
        // 0x29be18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE1Cu;
        goto label_29be1c;
    }
    ctx->pc = 0x29BE14u;
    SET_GPR_U32(ctx, 31, 0x29BE1Cu);
    ctx->pc = 0x29BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE14u;
    // 0x29be18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x29BE14u, 0x29BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE1Cu;
label_29be1c:
    // 0x29be1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29be1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29be20:
    // 0x29be20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29be20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29be24:
    // 0x29be24: 0xc08c424  jal         func_231090
label_29be28:
    if (ctx->pc == 0x29BE28u) {
        ctx->pc = 0x29BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE24u;
        // 0x29be28: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE2Cu;
        goto label_29be2c;
    }
    ctx->pc = 0x29BE24u;
    SET_GPR_U32(ctx, 31, 0x29BE2Cu);
    ctx->pc = 0x29BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE24u;
    // 0x29be28: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231090u, 0x29BE24u, 0x29BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE2Cu;
label_29be2c:
    // 0x29be2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29be30:
    // 0x29be30: 0xc051fbc  jal         func_147EF0
label_29be34:
    if (ctx->pc == 0x29BE34u) {
        ctx->pc = 0x29BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE30u;
        // 0x29be34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE38u;
        goto label_29be38;
    }
    ctx->pc = 0x29BE30u;
    SET_GPR_U32(ctx, 31, 0x29BE38u);
    ctx->pc = 0x29BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE30u;
    // 0x29be34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x29BE30u, 0x29BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE38u;
label_29be38:
    // 0x29be38: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29be38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29be3c:
    // 0x29be3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29be3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29be40:
    // 0x29be40: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x29be40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29be44:
    // 0x29be44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29be44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29be48:
    // 0x29be48: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x29be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29be4c:
    // 0x29be4c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x29be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29be50:
    // 0x29be50: 0x3e00008  jr          $ra
label_29be54:
    if (ctx->pc == 0x29BE54u) {
        ctx->pc = 0x29BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE50u;
        // 0x29be54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29BE58u;
        goto label_fallthrough_0x29be50;
    }
    ctx->pc = 0x29BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE50u;
        // 0x29be54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29be50:
    ctx->pc = 0x29BE58u;
}
