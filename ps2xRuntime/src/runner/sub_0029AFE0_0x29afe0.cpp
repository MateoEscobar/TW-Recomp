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

// Function: sub_0029AFE0
// Address: 0x29afe0 - 0x29b170
void sub_0029AFE0_0x29afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AFE0_0x29afe0");
#endif

    switch (ctx->pc) {
        case 0x29afe0u: goto label_29afe0;
        case 0x29afe4u: goto label_29afe4;
        case 0x29afe8u: goto label_29afe8;
        case 0x29afecu: goto label_29afec;
        case 0x29aff0u: goto label_29aff0;
        case 0x29aff4u: goto label_29aff4;
        case 0x29aff8u: goto label_29aff8;
        case 0x29affcu: goto label_29affc;
        case 0x29b000u: goto label_29b000;
        case 0x29b004u: goto label_29b004;
        case 0x29b008u: goto label_29b008;
        case 0x29b00cu: goto label_29b00c;
        case 0x29b010u: goto label_29b010;
        case 0x29b014u: goto label_29b014;
        case 0x29b018u: goto label_29b018;
        case 0x29b01cu: goto label_29b01c;
        case 0x29b020u: goto label_29b020;
        case 0x29b024u: goto label_29b024;
        case 0x29b028u: goto label_29b028;
        case 0x29b02cu: goto label_29b02c;
        case 0x29b030u: goto label_29b030;
        case 0x29b034u: goto label_29b034;
        case 0x29b038u: goto label_29b038;
        case 0x29b03cu: goto label_29b03c;
        case 0x29b040u: goto label_29b040;
        case 0x29b044u: goto label_29b044;
        case 0x29b048u: goto label_29b048;
        case 0x29b04cu: goto label_29b04c;
        case 0x29b050u: goto label_29b050;
        case 0x29b054u: goto label_29b054;
        case 0x29b058u: goto label_29b058;
        case 0x29b05cu: goto label_29b05c;
        case 0x29b060u: goto label_29b060;
        case 0x29b064u: goto label_29b064;
        case 0x29b068u: goto label_29b068;
        case 0x29b06cu: goto label_29b06c;
        case 0x29b070u: goto label_29b070;
        case 0x29b074u: goto label_29b074;
        case 0x29b078u: goto label_29b078;
        case 0x29b07cu: goto label_29b07c;
        case 0x29b080u: goto label_29b080;
        case 0x29b084u: goto label_29b084;
        case 0x29b088u: goto label_29b088;
        case 0x29b08cu: goto label_29b08c;
        case 0x29b090u: goto label_29b090;
        case 0x29b094u: goto label_29b094;
        case 0x29b098u: goto label_29b098;
        case 0x29b09cu: goto label_29b09c;
        case 0x29b0a0u: goto label_29b0a0;
        case 0x29b0a4u: goto label_29b0a4;
        case 0x29b0a8u: goto label_29b0a8;
        case 0x29b0acu: goto label_29b0ac;
        case 0x29b0b0u: goto label_29b0b0;
        case 0x29b0b4u: goto label_29b0b4;
        case 0x29b0b8u: goto label_29b0b8;
        case 0x29b0bcu: goto label_29b0bc;
        case 0x29b0c0u: goto label_29b0c0;
        case 0x29b0c4u: goto label_29b0c4;
        case 0x29b0c8u: goto label_29b0c8;
        case 0x29b0ccu: goto label_29b0cc;
        case 0x29b0d0u: goto label_29b0d0;
        case 0x29b0d4u: goto label_29b0d4;
        case 0x29b0d8u: goto label_29b0d8;
        case 0x29b0dcu: goto label_29b0dc;
        case 0x29b0e0u: goto label_29b0e0;
        case 0x29b0e4u: goto label_29b0e4;
        case 0x29b0e8u: goto label_29b0e8;
        case 0x29b0ecu: goto label_29b0ec;
        case 0x29b0f0u: goto label_29b0f0;
        case 0x29b0f4u: goto label_29b0f4;
        case 0x29b0f8u: goto label_29b0f8;
        case 0x29b0fcu: goto label_29b0fc;
        case 0x29b100u: goto label_29b100;
        case 0x29b104u: goto label_29b104;
        case 0x29b108u: goto label_29b108;
        case 0x29b10cu: goto label_29b10c;
        case 0x29b110u: goto label_29b110;
        case 0x29b114u: goto label_29b114;
        case 0x29b118u: goto label_29b118;
        case 0x29b11cu: goto label_29b11c;
        case 0x29b120u: goto label_29b120;
        case 0x29b124u: goto label_29b124;
        case 0x29b128u: goto label_29b128;
        case 0x29b12cu: goto label_29b12c;
        case 0x29b130u: goto label_29b130;
        case 0x29b134u: goto label_29b134;
        case 0x29b138u: goto label_29b138;
        case 0x29b13cu: goto label_29b13c;
        case 0x29b140u: goto label_29b140;
        case 0x29b144u: goto label_29b144;
        case 0x29b148u: goto label_29b148;
        case 0x29b14cu: goto label_29b14c;
        case 0x29b150u: goto label_29b150;
        case 0x29b154u: goto label_29b154;
        case 0x29b158u: goto label_29b158;
        case 0x29b15cu: goto label_29b15c;
        case 0x29b160u: goto label_29b160;
        case 0x29b164u: goto label_29b164;
        case 0x29b168u: goto label_29b168;
        case 0x29b16cu: goto label_29b16c;
        default: break;
    }

    ctx->pc = 0x29afe0u;

label_29afe0:
    // 0x29afe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_29afe4:
    // 0x29afe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29afe8:
    // 0x29afe8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x29afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_29afec:
    // 0x29afec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_29aff0:
    // 0x29aff0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_29aff4:
    // 0x29aff4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x29aff4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_29aff8:
    // 0x29aff8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x29aff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_29affc:
    // 0x29affc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x29affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29b000:
    // 0x29b000: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
label_29b004:
    if (ctx->pc == 0x29B004u) {
        ctx->pc = 0x29B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B000u;
        // 0x29b004: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B008u;
        goto label_29b008;
    }
    ctx->pc = 0x29B000u;
    {
        const bool branch_taken_0x29b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B000u;
        // 0x29b004: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b000) {
            ctx->pc = 0x29B154u;
            goto label_29b154;
        }
    }
    ctx->pc = 0x29B008u;
label_29b008:
    // 0x29b008: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_29b00c:
    if (ctx->pc == 0x29B00Cu) {
        ctx->pc = 0x29B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B008u;
        // 0x29b00c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B010u;
        goto label_29b010;
    }
    ctx->pc = 0x29B008u;
    {
        const bool branch_taken_0x29b008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b008) {
            ctx->pc = 0x29B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B008u;
            // 0x29b00c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B020u;
            goto label_29b020;
        }
    }
    ctx->pc = 0x29B010u;
label_29b010:
    // 0x29b010: 0xc0a6d0a  jal         func_29B428
label_29b014:
    if (ctx->pc == 0x29B014u) {
        ctx->pc = 0x29B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B010u;
        // 0x29b014: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B018u;
        goto label_29b018;
    }
    ctx->pc = 0x29B010u;
    SET_GPR_U32(ctx, 31, 0x29B018u);
    ctx->pc = 0x29B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B010u;
    // 0x29b014: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B428u, 0x29B010u, 0x29B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B018u;
label_29b018:
    // 0x29b018: 0x1000004f  b           . + 4 + (0x4F << 2)
label_29b01c:
    if (ctx->pc == 0x29B01Cu) {
        ctx->pc = 0x29B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B018u;
        // 0x29b01c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B020u;
        goto label_29b020;
    }
    ctx->pc = 0x29B018u;
    {
        const bool branch_taken_0x29b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B018u;
        // 0x29b01c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b018) {
            ctx->pc = 0x29B158u;
            goto label_29b158;
        }
    }
    ctx->pc = 0x29B020u;
label_29b020:
    // 0x29b020: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x29b020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_29b024:
    // 0x29b024: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x29b024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_29b028:
    // 0x29b028: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29b028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b02c:
    // 0x29b02c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x29b02cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29b030:
    // 0x29b030: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29b034:
    // 0x29b034: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x29b034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_29b038:
    // 0x29b038: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x29b038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_29b03c:
    // 0x29b03c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29b040:
    // 0x29b040: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_29b044:
    // 0x29b044: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29b044u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29b048:
    // 0x29b048: 0xc0a68f0  jal         func_29A3C0
label_29b04c:
    if (ctx->pc == 0x29B04Cu) {
        ctx->pc = 0x29B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B048u;
        // 0x29b04c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B050u;
        goto label_29b050;
    }
    ctx->pc = 0x29B048u;
    SET_GPR_U32(ctx, 31, 0x29B050u);
    ctx->pc = 0x29B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B048u;
    // 0x29b04c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3C0u, 0x29B048u, 0x29B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B050u;
label_29b050:
    // 0x29b050: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x29b050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b054:
    // 0x29b054: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x29b054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_29b058:
    // 0x29b058: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29b058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29b05c:
    // 0x29b05c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29b060:
    // 0x29b060: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29b064:
    // 0x29b064: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29b064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29b068:
    // 0x29b068: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29b068u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29b06c:
    // 0x29b06c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29b06cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29b070:
    // 0x29b070: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29b070u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_29b074:
    // 0x29b074: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29b078:
    // 0x29b078: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x29b078u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29b07c:
    // 0x29b07c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29b07cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29b080:
    // 0x29b080: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29b080u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_29b084:
    // 0x29b084: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x29b084u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29b088:
    // 0x29b088: 0x4a0003bf  vwaitq
    ctx->pc = 0x29b088u;
    // VWAITQ (Q already resolved in this runtime)
label_29b08c:
    // 0x29b08c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x29b08cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29b090:
    // 0x29b090: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x29b090u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_29b094:
    // 0x29b094: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_29b098:
    // 0x29b098: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x29b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_29b09c:
    // 0x29b09c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x29b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_29b0a0:
    // 0x29b0a0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x29b0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_29b0a4:
    // 0x29b0a4: 0xc0cd766  jal         func_335D98
label_29b0a8:
    if (ctx->pc == 0x29B0A8u) {
        ctx->pc = 0x29B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0A4u;
        // 0x29b0a8: 0x7fa50040  sq          $a1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B0ACu;
        goto label_29b0ac;
    }
    ctx->pc = 0x29B0A4u;
    SET_GPR_U32(ctx, 31, 0x29B0ACu);
    ctx->pc = 0x29B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0A4u;
    // 0x29b0a8: 0x7fa50040  sq          $a1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x29B0A4u, 0x29B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0ACu;
label_29b0ac:
    // 0x29b0ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29b0acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_29b0b0:
    // 0x29b0b0: 0xc0cd7a8  jal         func_335EA0
label_29b0b4:
    if (ctx->pc == 0x29B0B4u) {
        ctx->pc = 0x29B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0B0u;
        // 0x29b0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B0B8u;
        goto label_29b0b8;
    }
    ctx->pc = 0x29B0B0u;
    SET_GPR_U32(ctx, 31, 0x29B0B8u);
    ctx->pc = 0x29B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0B0u;
    // 0x29b0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x29B0B0u, 0x29B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0B8u;
label_29b0b8:
    // 0x29b0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29b0bc:
    // 0x29b0bc: 0xc086c40  jal         func_21B100
label_29b0c0:
    if (ctx->pc == 0x29B0C0u) {
        ctx->pc = 0x29B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0BCu;
        // 0x29b0c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B0C4u;
        goto label_29b0c4;
    }
    ctx->pc = 0x29B0BCu;
    SET_GPR_U32(ctx, 31, 0x29B0C4u);
    ctx->pc = 0x29B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0BCu;
    // 0x29b0c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x29B0BCu, 0x29B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0C4u;
label_29b0c4:
    // 0x29b0c4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x29b0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29b0c8:
    // 0x29b0c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x29b0c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_29b0cc:
    // 0x29b0cc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b0ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29b0d0:
    // 0x29b0d0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x29b0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29b0d4:
    // 0x29b0d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x29b0d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29b0d8:
    // 0x29b0d8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x29b0d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_29b0dc:
    // 0x29b0dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x29b0dcu;
    // VWAITQ (Q already resolved in this runtime)
label_29b0e0:
    // 0x29b0e0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x29b0e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_29b0e4:
    // 0x29b0e4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x29b0e4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_29b0e8:
    // 0x29b0e8: 0x3c0140fa  lui         $at, 0x40FA
    ctx->pc = 0x29b0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16634 << 16));
label_29b0ec:
    // 0x29b0ec: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x29b0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_29b0f0:
    // 0x29b0f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29b0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29b0f4:
    // 0x29b0f4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x29b0f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_29b0f8:
    // 0x29b0f8: 0xc0cde2c  jal         func_3378B0
label_29b0fc:
    if (ctx->pc == 0x29B0FCu) {
        ctx->pc = 0x29B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B0F8u;
        // 0x29b0fc: 0xc7ae0028  lwc1        $f14, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B100u;
        goto label_29b100;
    }
    ctx->pc = 0x29B0F8u;
    SET_GPR_U32(ctx, 31, 0x29B100u);
    ctx->pc = 0x29B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0F8u;
    // 0x29b0fc: 0xc7ae0028  lwc1        $f14, 0x28($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378B0u, 0x29B0F8u, 0x29B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B100u;
label_29b100:
    // 0x29b100: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x29b100u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29b104:
    // 0x29b104: 0x0  nop
    ctx->pc = 0x29b104u;
    // NOP
label_29b108:
    // 0x29b108: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_29b10c:
    if (ctx->pc == 0x29B10Cu) {
        ctx->pc = 0x29B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B108u;
        // 0x29b10c: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B110u;
        goto label_29b110;
    }
    ctx->pc = 0x29B108u;
    {
        const bool branch_taken_0x29b108 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B108u;
        // 0x29b10c: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b108) {
            ctx->pc = 0x29B11Cu;
            goto label_29b11c;
        }
    }
    ctx->pc = 0x29B110u;
label_29b110:
    // 0x29b110: 0x0  nop
    ctx->pc = 0x29b110u;
    // NOP
label_29b114:
    // 0x29b114: 0x0  nop
    ctx->pc = 0x29b114u;
    // NOP
label_29b118:
    // 0x29b118: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x29b118u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_29b11c:
    // 0x29b11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b120:
    // 0x29b120: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x29b120u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29b124:
    // 0x29b124: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x29b124u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29b128:
    // 0x29b128: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29b128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29b12c:
    // 0x29b12c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29b12cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29b130:
    // 0x29b130: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x29b130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29b134:
    // 0x29b134: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x29b134u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_29b138:
    // 0x29b138: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x29b138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_29b13c:
    // 0x29b13c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x29b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_29b140:
    // 0x29b140: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x29b140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_29b144:
    // 0x29b144: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x29b144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_29b148:
    // 0x29b148: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x29b148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_29b14c:
    // 0x29b14c: 0x60f809  jalr        $v1
label_29b150:
    if (ctx->pc == 0x29B150u) {
        ctx->pc = 0x29B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B14Cu;
        // 0x29b150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B154u;
        goto label_29b154;
    }
    ctx->pc = 0x29B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29B154u);
        ctx->pc = 0x29B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B14Cu;
        // 0x29b150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B14Cu, 0x29B154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B154u;
label_29b154:
    // 0x29b154: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29b154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_29b158:
    // 0x29b158: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x29b158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29b15c:
    // 0x29b15c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29b15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29b160:
    // 0x29b160: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x29b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29b164:
    // 0x29b164: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x29b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29b168:
    // 0x29b168: 0x3e00008  jr          $ra
label_29b16c:
    if (ctx->pc == 0x29B16Cu) {
        ctx->pc = 0x29B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B168u;
        // 0x29b16c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B170u;
        goto label_fallthrough_0x29b168;
    }
    ctx->pc = 0x29B168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B168u;
        // 0x29b16c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29b168:
    ctx->pc = 0x29B170u;
}
