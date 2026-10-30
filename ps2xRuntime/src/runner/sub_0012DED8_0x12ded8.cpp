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

// Function: sub_0012DED8
// Address: 0x12ded8 - 0x12e170
void sub_0012DED8_0x12ded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DED8_0x12ded8");
#endif

    switch (ctx->pc) {
        case 0x12ded8u: goto label_12ded8;
        case 0x12dedcu: goto label_12dedc;
        case 0x12dee0u: goto label_12dee0;
        case 0x12dee4u: goto label_12dee4;
        case 0x12dee8u: goto label_12dee8;
        case 0x12deecu: goto label_12deec;
        case 0x12def0u: goto label_12def0;
        case 0x12def4u: goto label_12def4;
        case 0x12def8u: goto label_12def8;
        case 0x12defcu: goto label_12defc;
        case 0x12df00u: goto label_12df00;
        case 0x12df04u: goto label_12df04;
        case 0x12df08u: goto label_12df08;
        case 0x12df0cu: goto label_12df0c;
        case 0x12df10u: goto label_12df10;
        case 0x12df14u: goto label_12df14;
        case 0x12df18u: goto label_12df18;
        case 0x12df1cu: goto label_12df1c;
        case 0x12df20u: goto label_12df20;
        case 0x12df24u: goto label_12df24;
        case 0x12df28u: goto label_12df28;
        case 0x12df2cu: goto label_12df2c;
        case 0x12df30u: goto label_12df30;
        case 0x12df34u: goto label_12df34;
        case 0x12df38u: goto label_12df38;
        case 0x12df3cu: goto label_12df3c;
        case 0x12df40u: goto label_12df40;
        case 0x12df44u: goto label_12df44;
        case 0x12df48u: goto label_12df48;
        case 0x12df4cu: goto label_12df4c;
        case 0x12df50u: goto label_12df50;
        case 0x12df54u: goto label_12df54;
        case 0x12df58u: goto label_12df58;
        case 0x12df5cu: goto label_12df5c;
        case 0x12df60u: goto label_12df60;
        case 0x12df64u: goto label_12df64;
        case 0x12df68u: goto label_12df68;
        case 0x12df6cu: goto label_12df6c;
        case 0x12df70u: goto label_12df70;
        case 0x12df74u: goto label_12df74;
        case 0x12df78u: goto label_12df78;
        case 0x12df7cu: goto label_12df7c;
        case 0x12df80u: goto label_12df80;
        case 0x12df84u: goto label_12df84;
        case 0x12df88u: goto label_12df88;
        case 0x12df8cu: goto label_12df8c;
        case 0x12df90u: goto label_12df90;
        case 0x12df94u: goto label_12df94;
        case 0x12df98u: goto label_12df98;
        case 0x12df9cu: goto label_12df9c;
        case 0x12dfa0u: goto label_12dfa0;
        case 0x12dfa4u: goto label_12dfa4;
        case 0x12dfa8u: goto label_12dfa8;
        case 0x12dfacu: goto label_12dfac;
        case 0x12dfb0u: goto label_12dfb0;
        case 0x12dfb4u: goto label_12dfb4;
        case 0x12dfb8u: goto label_12dfb8;
        case 0x12dfbcu: goto label_12dfbc;
        case 0x12dfc0u: goto label_12dfc0;
        case 0x12dfc4u: goto label_12dfc4;
        case 0x12dfc8u: goto label_12dfc8;
        case 0x12dfccu: goto label_12dfcc;
        case 0x12dfd0u: goto label_12dfd0;
        case 0x12dfd4u: goto label_12dfd4;
        case 0x12dfd8u: goto label_12dfd8;
        case 0x12dfdcu: goto label_12dfdc;
        case 0x12dfe0u: goto label_12dfe0;
        case 0x12dfe4u: goto label_12dfe4;
        case 0x12dfe8u: goto label_12dfe8;
        case 0x12dfecu: goto label_12dfec;
        case 0x12dff0u: goto label_12dff0;
        case 0x12dff4u: goto label_12dff4;
        case 0x12dff8u: goto label_12dff8;
        case 0x12dffcu: goto label_12dffc;
        case 0x12e000u: goto label_12e000;
        case 0x12e004u: goto label_12e004;
        case 0x12e008u: goto label_12e008;
        case 0x12e00cu: goto label_12e00c;
        case 0x12e010u: goto label_12e010;
        case 0x12e014u: goto label_12e014;
        case 0x12e018u: goto label_12e018;
        case 0x12e01cu: goto label_12e01c;
        case 0x12e020u: goto label_12e020;
        case 0x12e024u: goto label_12e024;
        case 0x12e028u: goto label_12e028;
        case 0x12e02cu: goto label_12e02c;
        case 0x12e030u: goto label_12e030;
        case 0x12e034u: goto label_12e034;
        case 0x12e038u: goto label_12e038;
        case 0x12e03cu: goto label_12e03c;
        case 0x12e040u: goto label_12e040;
        case 0x12e044u: goto label_12e044;
        case 0x12e048u: goto label_12e048;
        case 0x12e04cu: goto label_12e04c;
        case 0x12e050u: goto label_12e050;
        case 0x12e054u: goto label_12e054;
        case 0x12e058u: goto label_12e058;
        case 0x12e05cu: goto label_12e05c;
        case 0x12e060u: goto label_12e060;
        case 0x12e064u: goto label_12e064;
        case 0x12e068u: goto label_12e068;
        case 0x12e06cu: goto label_12e06c;
        case 0x12e070u: goto label_12e070;
        case 0x12e074u: goto label_12e074;
        case 0x12e078u: goto label_12e078;
        case 0x12e07cu: goto label_12e07c;
        case 0x12e080u: goto label_12e080;
        case 0x12e084u: goto label_12e084;
        case 0x12e088u: goto label_12e088;
        case 0x12e08cu: goto label_12e08c;
        case 0x12e090u: goto label_12e090;
        case 0x12e094u: goto label_12e094;
        case 0x12e098u: goto label_12e098;
        case 0x12e09cu: goto label_12e09c;
        case 0x12e0a0u: goto label_12e0a0;
        case 0x12e0a4u: goto label_12e0a4;
        case 0x12e0a8u: goto label_12e0a8;
        case 0x12e0acu: goto label_12e0ac;
        case 0x12e0b0u: goto label_12e0b0;
        case 0x12e0b4u: goto label_12e0b4;
        case 0x12e0b8u: goto label_12e0b8;
        case 0x12e0bcu: goto label_12e0bc;
        case 0x12e0c0u: goto label_12e0c0;
        case 0x12e0c4u: goto label_12e0c4;
        case 0x12e0c8u: goto label_12e0c8;
        case 0x12e0ccu: goto label_12e0cc;
        case 0x12e0d0u: goto label_12e0d0;
        case 0x12e0d4u: goto label_12e0d4;
        case 0x12e0d8u: goto label_12e0d8;
        case 0x12e0dcu: goto label_12e0dc;
        case 0x12e0e0u: goto label_12e0e0;
        case 0x12e0e4u: goto label_12e0e4;
        case 0x12e0e8u: goto label_12e0e8;
        case 0x12e0ecu: goto label_12e0ec;
        case 0x12e0f0u: goto label_12e0f0;
        case 0x12e0f4u: goto label_12e0f4;
        case 0x12e0f8u: goto label_12e0f8;
        case 0x12e0fcu: goto label_12e0fc;
        case 0x12e100u: goto label_12e100;
        case 0x12e104u: goto label_12e104;
        case 0x12e108u: goto label_12e108;
        case 0x12e10cu: goto label_12e10c;
        case 0x12e110u: goto label_12e110;
        case 0x12e114u: goto label_12e114;
        case 0x12e118u: goto label_12e118;
        case 0x12e11cu: goto label_12e11c;
        case 0x12e120u: goto label_12e120;
        case 0x12e124u: goto label_12e124;
        case 0x12e128u: goto label_12e128;
        case 0x12e12cu: goto label_12e12c;
        case 0x12e130u: goto label_12e130;
        case 0x12e134u: goto label_12e134;
        case 0x12e138u: goto label_12e138;
        case 0x12e13cu: goto label_12e13c;
        case 0x12e140u: goto label_12e140;
        case 0x12e144u: goto label_12e144;
        case 0x12e148u: goto label_12e148;
        case 0x12e14cu: goto label_12e14c;
        case 0x12e150u: goto label_12e150;
        case 0x12e154u: goto label_12e154;
        case 0x12e158u: goto label_12e158;
        case 0x12e15cu: goto label_12e15c;
        case 0x12e160u: goto label_12e160;
        case 0x12e164u: goto label_12e164;
        case 0x12e168u: goto label_12e168;
        case 0x12e16cu: goto label_12e16c;
        default: break;
    }

    ctx->pc = 0x12ded8u;

label_12ded8:
    // 0x12ded8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12ded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_12dedc:
    // 0x12dedc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12dedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_12dee0:
    // 0x12dee0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_12dee4:
    // 0x12dee4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12dee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12dee8:
    // 0x12dee8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_12deec:
    // 0x12deec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12deecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12def0:
    // 0x12def0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12def0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_12def4:
    // 0x12def4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12def4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12def8:
    // 0x12def8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x12def8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12defc:
    // 0x12defc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12defcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12df00:
    // 0x12df00: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x12df00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_12df04:
    // 0x12df04: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x12df04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_12df08:
    // 0x12df08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_12df0c:
    // 0x12df0c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12df0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_12df10:
    // 0x12df10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12df10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12df14:
    // 0x12df14: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x12df14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_12df18:
    // 0x12df18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x12df18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12df1c:
    // 0x12df1c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x12df1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12df20:
    // 0x12df20: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12df20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12df24:
    // 0x12df24: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x12df24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_12df28:
    // 0x12df28: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x12df28u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_12df2c:
    // 0x12df2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x12df2cu;
    // VWAITQ (Q already resolved in this runtime)
label_12df30:
    // 0x12df30: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12df30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_12df34:
    // 0x12df34: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x12df34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_12df38:
    // 0x12df38: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_12df3c:
    // 0x12df3c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x12df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_12df40:
    // 0x12df40: 0xc0cd766  jal         func_335D98
label_12df44:
    if (ctx->pc == 0x12DF44u) {
        ctx->pc = 0x12DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF40u;
        // 0x12df44: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF48u;
        goto label_12df48;
    }
    ctx->pc = 0x12DF40u;
    SET_GPR_U32(ctx, 31, 0x12DF48u);
    ctx->pc = 0x12DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF40u;
    // 0x12df44: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x12DF40u, 0x12DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF48u;
label_12df48:
    // 0x12df48: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12df48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12df4c:
    // 0x12df4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12df4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12df50:
    // 0x12df50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12df50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12df54:
    // 0x12df54: 0xe6200350  swc1        $f0, 0x350($s1)
    ctx->pc = 0x12df54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 848), bits); }
label_12df58:
    // 0x12df58: 0xc0cd742  jal         func_335D08
label_12df5c:
    if (ctx->pc == 0x12DF5Cu) {
        ctx->pc = 0x12DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF58u;
        // 0x12df5c: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF60u;
        goto label_12df60;
    }
    ctx->pc = 0x12DF58u;
    SET_GPR_U32(ctx, 31, 0x12DF60u);
    ctx->pc = 0x12DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DF58u;
    // 0x12df5c: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x12DF58u, 0x12DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF60u;
label_12df60:
    // 0x12df60: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x12df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_12df64:
    // 0x12df64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12df68:
    // 0x12df68: 0xc4418af0  lwc1        $f1, -0x7510($v0)
    ctx->pc = 0x12df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12df6c:
    // 0x12df6c: 0xe6200350  swc1        $f0, 0x350($s1)
    ctx->pc = 0x12df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 848), bits); }
label_12df70:
    // 0x12df70: 0xa2230475  sb          $v1, 0x475($s1)
    ctx->pc = 0x12df70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1141), (uint8_t)GPR_U32(ctx, 3));
label_12df74:
    // 0x12df74: 0xe621043c  swc1        $f1, 0x43C($s1)
    ctx->pc = 0x12df74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1084), bits); }
label_12df78:
    // 0x12df78: 0xa2200462  sb          $zero, 0x462($s1)
    ctx->pc = 0x12df78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1122), (uint8_t)GPR_U32(ctx, 0));
label_12df7c:
    // 0x12df7c: 0xa2200463  sb          $zero, 0x463($s1)
    ctx->pc = 0x12df7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1123), (uint8_t)GPR_U32(ctx, 0));
label_12df80:
    // 0x12df80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_12df84:
    if (ctx->pc == 0x12DF84u) {
        ctx->pc = 0x12DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF80u;
        // 0x12df84: 0xa2200464  sb          $zero, 0x464($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1124), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DF88u;
        goto label_12df88;
    }
    ctx->pc = 0x12DF80u;
    {
        const bool branch_taken_0x12df80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF80u;
        // 0x12df84: 0xa2200464  sb          $zero, 0x464($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1124), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df80) {
            ctx->pc = 0x12DFECu;
            goto label_12dfec;
        }
    }
    ctx->pc = 0x12DF88u;
label_12df88:
    // 0x12df88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12df88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12df8c:
    // 0x12df8c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x12df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_12df90:
    // 0x12df90: 0x8c65b198  lw          $a1, -0x4E68($v1)
    ctx->pc = 0x12df90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_12df94:
    // 0x12df94: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x12df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_12df98:
    // 0x12df98: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
label_12df9c:
    if (ctx->pc == 0x12DF9Cu) {
        ctx->pc = 0x12DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF98u;
        // 0x12df9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFA0u;
        goto label_12dfa0;
    }
    ctx->pc = 0x12DF98u;
    {
        const bool branch_taken_0x12df98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x12DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF98u;
        // 0x12df9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df98) {
            ctx->pc = 0x12DFECu;
            goto label_12dfec;
        }
    }
    ctx->pc = 0x12DFA0u;
label_12dfa0:
    // 0x12dfa0: 0xc047e78  jal         func_11F9E0
label_12dfa4:
    if (ctx->pc == 0x12DFA4u) {
        ctx->pc = 0x12DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFA0u;
        // 0x12dfa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFA8u;
        goto label_12dfa8;
    }
    ctx->pc = 0x12DFA0u;
    SET_GPR_U32(ctx, 31, 0x12DFA8u);
    ctx->pc = 0x12DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFA0u;
    // 0x12dfa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12DFA0u, 0x12DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFA8u;
label_12dfa8:
    // 0x12dfa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12dfac:
    // 0x12dfac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12dfb0:
    // 0x12dfb0: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x12dfb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_12dfb4:
    // 0x12dfb4: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x12dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_12dfb8:
    // 0x12dfb8: 0xc0f809  jalr        $a2
label_12dfbc:
    if (ctx->pc == 0x12DFBCu) {
        ctx->pc = 0x12DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFB8u;
        // 0x12dfbc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFC0u;
        goto label_12dfc0;
    }
    ctx->pc = 0x12DFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x12DFC0u);
        ctx->pc = 0x12DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFB8u;
        // 0x12dfbc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DFB8u, 0x12DFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12DFC0u;
label_12dfc0:
    // 0x12dfc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12dfc4:
    // 0x12dfc4: 0xc047e78  jal         func_11F9E0
label_12dfc8:
    if (ctx->pc == 0x12DFC8u) {
        ctx->pc = 0x12DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFC4u;
        // 0x12dfc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFCCu;
        goto label_12dfcc;
    }
    ctx->pc = 0x12DFC4u;
    SET_GPR_U32(ctx, 31, 0x12DFCCu);
    ctx->pc = 0x12DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DFC4u;
    // 0x12dfc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x12DFC4u, 0x12DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFCCu;
label_12dfcc:
    // 0x12dfcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12dfd0:
    // 0x12dfd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12dfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12dfd4:
    // 0x12dfd4: 0x84640290  lh          $a0, 0x290($v1)
    ctx->pc = 0x12dfd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 656)));
label_12dfd8:
    // 0x12dfd8: 0x8c660294  lw          $a2, 0x294($v1)
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_12dfdc:
    // 0x12dfdc: 0xc0f809  jalr        $a2
label_12dfe0:
    if (ctx->pc == 0x12DFE0u) {
        ctx->pc = 0x12DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFDCu;
        // 0x12dfe0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12DFE4u;
        goto label_12dfe4;
    }
    ctx->pc = 0x12DFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x12DFE4u);
        ctx->pc = 0x12DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFDCu;
        // 0x12dfe0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DFDCu, 0x12DFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12DFE4u;
label_12dfe4:
    // 0x12dfe4: 0xc048bb4  jal         func_122ED0
label_12dfe8:
    if (ctx->pc == 0x12DFE8u) {
        ctx->pc = 0x12DFECu;
        goto label_12dfec;
    }
    ctx->pc = 0x12DFE4u;
    SET_GPR_U32(ctx, 31, 0x12DFECu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x12DFE4u, 0x12DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DFECu;
label_12dfec:
    // 0x12dfec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12dfecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12dff0:
    // 0x12dff0: 0x0  nop
    ctx->pc = 0x12dff0u;
    // NOP
label_12dff4:
    // 0x12dff4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x12dff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12dff8:
    // 0x12dff8: 0x0  nop
    ctx->pc = 0x12dff8u;
    // NOP
label_12dffc:
    // 0x12dffc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_12e000:
    if (ctx->pc == 0x12E000u) {
        ctx->pc = 0x12E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFFCu;
        // 0x12e000: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E004u;
        goto label_12e004;
    }
    ctx->pc = 0x12DFFCu;
    {
        const bool branch_taken_0x12dffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12dffc) {
            ctx->pc = 0x12E000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DFFCu;
            // 0x12e000: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E004u;
            goto label_12e004;
        }
    }
    ctx->pc = 0x12E004u;
label_12e004:
    // 0x12e004: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
label_12e008:
    if (ctx->pc == 0x12E008u) {
        ctx->pc = 0x12E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E004u;
        // 0x12e008: 0x7a430000  lq          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E00Cu;
        goto label_12e00c;
    }
    ctx->pc = 0x12E004u;
    {
        const bool branch_taken_0x12e004 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e004) {
            ctx->pc = 0x12E008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E004u;
            // 0x12e008: 0x7a430000  lq          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E030u;
            goto label_12e030;
        }
    }
    ctx->pc = 0x12E00Cu;
label_12e00c:
    // 0x12e00c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x12e00cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e010:
    // 0x12e010: 0x0  nop
    ctx->pc = 0x12e010u;
    // NOP
label_12e014:
    // 0x12e014: 0x4500004a  bc1f        . + 4 + (0x4A << 2)
label_12e018:
    if (ctx->pc == 0x12E018u) {
        ctx->pc = 0x12E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E014u;
        // 0x12e018: 0xe634040c  swc1        $f20, 0x40C($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E01Cu;
        goto label_12e01c;
    }
    ctx->pc = 0x12E014u;
    {
        const bool branch_taken_0x12e014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E014u;
        // 0x12e018: 0xe634040c  swc1        $f20, 0x40C($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e014) {
            ctx->pc = 0x12E140u;
            goto label_12e140;
        }
    }
    ctx->pc = 0x12E01Cu;
label_12e01c:
    // 0x12e01c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x12e01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_12e020:
    // 0x12e020: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12e020u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12e024:
    // 0x12e024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e028:
    // 0x12e028: 0x10000045  b           . + 4 + (0x45 << 2)
label_12e02c:
    if (ctx->pc == 0x12E02Cu) {
        ctx->pc = 0x12E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E028u;
        // 0x12e02c: 0xe620040c  swc1        $f0, 0x40C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E030u;
        goto label_12e030;
    }
    ctx->pc = 0x12E028u;
    {
        const bool branch_taken_0x12e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E028u;
        // 0x12e02c: 0xe620040c  swc1        $f0, 0x40C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1036), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e028) {
            ctx->pc = 0x12E140u;
            goto label_12e140;
        }
    }
    ctx->pc = 0x12E030u;
label_12e030:
    // 0x12e030: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12e030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12e034:
    // 0x12e034: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12e034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12e038:
    // 0x12e038: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12e038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e03c:
    // 0x12e03c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12e03cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e040:
    // 0x12e040: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e044:
    // 0x12e044: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12e044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e048:
    // 0x12e048: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12e048u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e04c:
    // 0x12e04c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12e050:
    // 0x12e050: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e054:
    // 0x12e054: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12e054u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12e058:
    // 0x12e058: 0x0  nop
    ctx->pc = 0x12e058u;
    // NOP
label_12e05c:
    // 0x12e05c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x12e05cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e060:
    // 0x12e060: 0x0  nop
    ctx->pc = 0x12e060u;
    // NOP
label_12e064:
    // 0x12e064: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12e068:
    if (ctx->pc == 0x12E068u) {
        ctx->pc = 0x12E06Cu;
        goto label_12e06c;
    }
    ctx->pc = 0x12E064u;
    {
        const bool branch_taken_0x12e064 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e064) {
            ctx->pc = 0x12E074u;
            goto label_12e074;
        }
    }
    ctx->pc = 0x12E06Cu;
label_12e06c:
    // 0x12e06c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_12e070:
    if (ctx->pc == 0x12E070u) {
        ctx->pc = 0x12E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E06Cu;
        // 0x12e070: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E074u;
        goto label_12e074;
    }
    ctx->pc = 0x12E06Cu;
    {
        const bool branch_taken_0x12e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E06Cu;
        // 0x12e070: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e06c) {
            ctx->pc = 0x12E0DCu;
            goto label_12e0dc;
        }
    }
    ctx->pc = 0x12E074u;
label_12e074:
    // 0x12e074: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12e074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12e078:
    // 0x12e078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12e078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e07c:
    // 0x12e07c: 0x0  nop
    ctx->pc = 0x12e07cu;
    // NOP
label_12e080:
    // 0x12e080: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12e080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e084:
    // 0x12e084: 0x0  nop
    ctx->pc = 0x12e084u;
    // NOP
label_12e088:
    // 0x12e088: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12e08c:
    if (ctx->pc == 0x12E08Cu) {
        ctx->pc = 0x12E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E088u;
        // 0x12e08c: 0x46021302  mul.s       $f12, $f2, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E090u;
        goto label_12e090;
    }
    ctx->pc = 0x12E088u;
    {
        const bool branch_taken_0x12e088 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e088) {
            ctx->pc = 0x12E08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E088u;
            // 0x12e08c: 0x46021302  mul.s       $f12, $f2, $f2 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0A4u;
            goto label_12e0a4;
        }
    }
    ctx->pc = 0x12E090u;
label_12e090:
    // 0x12e090: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12e094:
    // 0x12e094: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e098:
    // 0x12e098: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12e098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12e09c:
    // 0x12e09c: 0x10000010  b           . + 4 + (0x10 << 2)
label_12e0a0:
    if (ctx->pc == 0x12E0A0u) {
        ctx->pc = 0x12E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E09Cu;
        // 0x12e0a0: 0xe6220354  swc1        $f2, 0x354($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E0A4u;
        goto label_12e0a4;
    }
    ctx->pc = 0x12E09Cu;
    {
        const bool branch_taken_0x12e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E09Cu;
        // 0x12e0a0: 0xe6220354  swc1        $f2, 0x354($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e09c) {
            ctx->pc = 0x12E0E0u;
            goto label_12e0e0;
        }
    }
    ctx->pc = 0x12E0A4u;
label_12e0a4:
    // 0x12e0a4: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x12e0a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_12e0a8:
    // 0x12e0a8: 0x0  nop
    ctx->pc = 0x12e0a8u;
    // NOP
label_12e0ac:
    // 0x12e0ac: 0x0  nop
    ctx->pc = 0x12e0acu;
    // NOP
label_12e0b0:
    // 0x12e0b0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12e0b0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12e0b4:
    // 0x12e0b4: 0x0  nop
    ctx->pc = 0x12e0b4u;
    // NOP
label_12e0b8:
    // 0x12e0b8: 0x0  nop
    ctx->pc = 0x12e0b8u;
    // NOP
label_12e0bc:
    // 0x12e0bc: 0x460c1303  div.s       $f12, $f2, $f12
    ctx->pc = 0x12e0bcu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
label_12e0c0:
    // 0x12e0c0: 0xc0cd5a8  jal         func_3356A0
label_12e0c4:
    if (ctx->pc == 0x12E0C4u) {
        ctx->pc = 0x12E0C8u;
        goto label_12e0c8;
    }
    ctx->pc = 0x12E0C0u;
    SET_GPR_U32(ctx, 31, 0x12E0C8u);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12E0C0u, 0x12E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0C8u;
label_12e0c8:
    // 0x12e0c8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12e0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12e0cc:
    // 0x12e0cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12e0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12e0d0:
    // 0x12e0d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e0d4:
    // 0x12e0d4: 0x0  nop
    ctx->pc = 0x12e0d4u;
    // NOP
label_12e0d8:
    // 0x12e0d8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x12e0d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12e0dc:
    // 0x12e0dc: 0xe6220354  swc1        $f2, 0x354($s1)
    ctx->pc = 0x12e0dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
label_12e0e0:
    // 0x12e0e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12e0e4:
    // 0x12e0e4: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x12e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_12e0e8:
    // 0x12e0e8: 0x3c01b727  lui         $at, 0xB727
    ctx->pc = 0x12e0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46887 << 16));
label_12e0ec:
    // 0x12e0ec: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_12e0f0:
    // 0x12e0f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12e0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12e0f4:
    // 0x12e0f4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x12e0f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_12e0f8:
    // 0x12e0f8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x12e0f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_12e0fc:
    // 0x12e0fc: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x12e0fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_12e100:
    // 0x12e100: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12e100u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12e104:
    // 0x12e104: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x12e104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e108:
    // 0x12e108: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12e108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e10c:
    // 0x12e10c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x12e10cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12e110:
    // 0x12e110: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x12e110u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_12e114:
    // 0x12e114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12e114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12e118:
    // 0x12e118: 0x0  nop
    ctx->pc = 0x12e118u;
    // NOP
label_12e11c:
    // 0x12e11c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12e11cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12e120:
    // 0x12e120: 0x0  nop
    ctx->pc = 0x12e120u;
    // NOP
label_12e124:
    // 0x12e124: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_12e128:
    if (ctx->pc == 0x12E128u) {
        ctx->pc = 0x12E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E124u;
        // 0x12e128: 0xae33047c  sw          $s3, 0x47C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E12Cu;
        goto label_12e12c;
    }
    ctx->pc = 0x12E124u;
    {
        const bool branch_taken_0x12e124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12e124) {
            ctx->pc = 0x12E128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E124u;
            // 0x12e128: 0xae33047c  sw          $s3, 0x47C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E138u;
            goto label_12e138;
        }
    }
    ctx->pc = 0x12E12Cu;
label_12e12c:
    // 0x12e12c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x12e12cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_12e130:
    // 0x12e130: 0xe6200354  swc1        $f0, 0x354($s1)
    ctx->pc = 0x12e130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
label_12e134:
    // 0x12e134: 0xae33047c  sw          $s3, 0x47C($s1)
    ctx->pc = 0x12e134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1148), GPR_U32(ctx, 19));
label_12e138:
    // 0x12e138: 0xe63503c0  swc1        $f21, 0x3C0($s1)
    ctx->pc = 0x12e138u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 960), bits); }
label_12e13c:
    // 0x12e13c: 0xe634040c  swc1        $f20, 0x40C($s1)
    ctx->pc = 0x12e13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1036), bits); }
label_12e140:
    // 0x12e140: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x12e140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_12e144:
    // 0x12e144: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12e144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12e148:
    // 0x12e148: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x12e148u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_12e14c:
    // 0x12e14c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12e14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12e150:
    // 0x12e150: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12e150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12e154:
    // 0x12e154: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12e154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12e158:
    // 0x12e158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12e15c:
    // 0x12e15c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x12e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12e160:
    // 0x12e160: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x12e160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12e164:
    // 0x12e164: 0x3e00008  jr          $ra
label_12e168:
    if (ctx->pc == 0x12E168u) {
        ctx->pc = 0x12E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E164u;
        // 0x12e168: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E16Cu;
        goto label_12e16c;
    }
    ctx->pc = 0x12E164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E164u;
        // 0x12e168: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E16Cu;
label_12e16c:
    // 0x12e16c: 0x0  nop
    ctx->pc = 0x12e16cu;
    // NOP
    ctx->pc = 0x12e170u;
}
