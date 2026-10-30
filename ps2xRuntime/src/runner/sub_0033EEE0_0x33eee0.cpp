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

// Function: sub_0033EEE0
// Address: 0x33eee0 - 0x33f110
void sub_0033EEE0_0x33eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EEE0_0x33eee0");
#endif

    switch (ctx->pc) {
        case 0x33eee0u: goto label_33eee0;
        case 0x33eee4u: goto label_33eee4;
        case 0x33eee8u: goto label_33eee8;
        case 0x33eeecu: goto label_33eeec;
        case 0x33eef0u: goto label_33eef0;
        case 0x33eef4u: goto label_33eef4;
        case 0x33eef8u: goto label_33eef8;
        case 0x33eefcu: goto label_33eefc;
        case 0x33ef00u: goto label_33ef00;
        case 0x33ef04u: goto label_33ef04;
        case 0x33ef08u: goto label_33ef08;
        case 0x33ef0cu: goto label_33ef0c;
        case 0x33ef10u: goto label_33ef10;
        case 0x33ef14u: goto label_33ef14;
        case 0x33ef18u: goto label_33ef18;
        case 0x33ef1cu: goto label_33ef1c;
        case 0x33ef20u: goto label_33ef20;
        case 0x33ef24u: goto label_33ef24;
        case 0x33ef28u: goto label_33ef28;
        case 0x33ef2cu: goto label_33ef2c;
        case 0x33ef30u: goto label_33ef30;
        case 0x33ef34u: goto label_33ef34;
        case 0x33ef38u: goto label_33ef38;
        case 0x33ef3cu: goto label_33ef3c;
        case 0x33ef40u: goto label_33ef40;
        case 0x33ef44u: goto label_33ef44;
        case 0x33ef48u: goto label_33ef48;
        case 0x33ef4cu: goto label_33ef4c;
        case 0x33ef50u: goto label_33ef50;
        case 0x33ef54u: goto label_33ef54;
        case 0x33ef58u: goto label_33ef58;
        case 0x33ef5cu: goto label_33ef5c;
        case 0x33ef60u: goto label_33ef60;
        case 0x33ef64u: goto label_33ef64;
        case 0x33ef68u: goto label_33ef68;
        case 0x33ef6cu: goto label_33ef6c;
        case 0x33ef70u: goto label_33ef70;
        case 0x33ef74u: goto label_33ef74;
        case 0x33ef78u: goto label_33ef78;
        case 0x33ef7cu: goto label_33ef7c;
        case 0x33ef80u: goto label_33ef80;
        case 0x33ef84u: goto label_33ef84;
        case 0x33ef88u: goto label_33ef88;
        case 0x33ef8cu: goto label_33ef8c;
        case 0x33ef90u: goto label_33ef90;
        case 0x33ef94u: goto label_33ef94;
        case 0x33ef98u: goto label_33ef98;
        case 0x33ef9cu: goto label_33ef9c;
        case 0x33efa0u: goto label_33efa0;
        case 0x33efa4u: goto label_33efa4;
        case 0x33efa8u: goto label_33efa8;
        case 0x33efacu: goto label_33efac;
        case 0x33efb0u: goto label_33efb0;
        case 0x33efb4u: goto label_33efb4;
        case 0x33efb8u: goto label_33efb8;
        case 0x33efbcu: goto label_33efbc;
        case 0x33efc0u: goto label_33efc0;
        case 0x33efc4u: goto label_33efc4;
        case 0x33efc8u: goto label_33efc8;
        case 0x33efccu: goto label_33efcc;
        case 0x33efd0u: goto label_33efd0;
        case 0x33efd4u: goto label_33efd4;
        case 0x33efd8u: goto label_33efd8;
        case 0x33efdcu: goto label_33efdc;
        case 0x33efe0u: goto label_33efe0;
        case 0x33efe4u: goto label_33efe4;
        case 0x33efe8u: goto label_33efe8;
        case 0x33efecu: goto label_33efec;
        case 0x33eff0u: goto label_33eff0;
        case 0x33eff4u: goto label_33eff4;
        case 0x33eff8u: goto label_33eff8;
        case 0x33effcu: goto label_33effc;
        case 0x33f000u: goto label_33f000;
        case 0x33f004u: goto label_33f004;
        case 0x33f008u: goto label_33f008;
        case 0x33f00cu: goto label_33f00c;
        case 0x33f010u: goto label_33f010;
        case 0x33f014u: goto label_33f014;
        case 0x33f018u: goto label_33f018;
        case 0x33f01cu: goto label_33f01c;
        case 0x33f020u: goto label_33f020;
        case 0x33f024u: goto label_33f024;
        case 0x33f028u: goto label_33f028;
        case 0x33f02cu: goto label_33f02c;
        case 0x33f030u: goto label_33f030;
        case 0x33f034u: goto label_33f034;
        case 0x33f038u: goto label_33f038;
        case 0x33f03cu: goto label_33f03c;
        case 0x33f040u: goto label_33f040;
        case 0x33f044u: goto label_33f044;
        case 0x33f048u: goto label_33f048;
        case 0x33f04cu: goto label_33f04c;
        case 0x33f050u: goto label_33f050;
        case 0x33f054u: goto label_33f054;
        case 0x33f058u: goto label_33f058;
        case 0x33f05cu: goto label_33f05c;
        case 0x33f060u: goto label_33f060;
        case 0x33f064u: goto label_33f064;
        case 0x33f068u: goto label_33f068;
        case 0x33f06cu: goto label_33f06c;
        case 0x33f070u: goto label_33f070;
        case 0x33f074u: goto label_33f074;
        case 0x33f078u: goto label_33f078;
        case 0x33f07cu: goto label_33f07c;
        case 0x33f080u: goto label_33f080;
        case 0x33f084u: goto label_33f084;
        case 0x33f088u: goto label_33f088;
        case 0x33f08cu: goto label_33f08c;
        case 0x33f090u: goto label_33f090;
        case 0x33f094u: goto label_33f094;
        case 0x33f098u: goto label_33f098;
        case 0x33f09cu: goto label_33f09c;
        case 0x33f0a0u: goto label_33f0a0;
        case 0x33f0a4u: goto label_33f0a4;
        case 0x33f0a8u: goto label_33f0a8;
        case 0x33f0acu: goto label_33f0ac;
        case 0x33f0b0u: goto label_33f0b0;
        case 0x33f0b4u: goto label_33f0b4;
        case 0x33f0b8u: goto label_33f0b8;
        case 0x33f0bcu: goto label_33f0bc;
        case 0x33f0c0u: goto label_33f0c0;
        case 0x33f0c4u: goto label_33f0c4;
        case 0x33f0c8u: goto label_33f0c8;
        case 0x33f0ccu: goto label_33f0cc;
        case 0x33f0d0u: goto label_33f0d0;
        case 0x33f0d4u: goto label_33f0d4;
        case 0x33f0d8u: goto label_33f0d8;
        case 0x33f0dcu: goto label_33f0dc;
        case 0x33f0e0u: goto label_33f0e0;
        case 0x33f0e4u: goto label_33f0e4;
        case 0x33f0e8u: goto label_33f0e8;
        case 0x33f0ecu: goto label_33f0ec;
        case 0x33f0f0u: goto label_33f0f0;
        case 0x33f0f4u: goto label_33f0f4;
        case 0x33f0f8u: goto label_33f0f8;
        case 0x33f0fcu: goto label_33f0fc;
        case 0x33f100u: goto label_33f100;
        case 0x33f104u: goto label_33f104;
        case 0x33f108u: goto label_33f108;
        case 0x33f10cu: goto label_33f10c;
        default: break;
    }

    ctx->pc = 0x33eee0u;

label_33eee0:
    // 0x33eee0: 0x27bdf6e0  addiu       $sp, $sp, -0x920
    ctx->pc = 0x33eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964960));
label_33eee4:
    // 0x33eee4: 0x7fb00900  sq          $s0, 0x900($sp)
    ctx->pc = 0x33eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 16));
label_33eee8:
    // 0x33eee8: 0x7fb108f0  sq          $s1, 0x8F0($sp)
    ctx->pc = 0x33eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 17));
label_33eeec:
    // 0x33eeec: 0x27b00830  addiu       $s0, $sp, 0x830
    ctx->pc = 0x33eeecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_33eef0:
    // 0x33eef0: 0x7fb208e0  sq          $s2, 0x8E0($sp)
    ctx->pc = 0x33eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 18));
label_33eef4:
    // 0x33eef4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x33eef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33eef8:
    // 0x33eef8: 0x7fb308d0  sq          $s3, 0x8D0($sp)
    ctx->pc = 0x33eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 19));
label_33eefc:
    // 0x33eefc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x33eefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33ef00:
    // 0x33ef00: 0x7fb408c0  sq          $s4, 0x8C0($sp)
    ctx->pc = 0x33ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 20));
label_33ef04:
    // 0x33ef04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33ef04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ef08:
    // 0x33ef08: 0x7fb508b0  sq          $s5, 0x8B0($sp)
    ctx->pc = 0x33ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 21));
label_33ef0c:
    // 0x33ef0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33ef0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33ef10:
    // 0x33ef10: 0x7fb608a0  sq          $s6, 0x8A0($sp)
    ctx->pc = 0x33ef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 22));
label_33ef14:
    // 0x33ef14: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x33ef14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ef18:
    // 0x33ef18: 0x7fb70890  sq          $s7, 0x890($sp)
    ctx->pc = 0x33ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 23));
label_33ef1c:
    // 0x33ef1c: 0x7fbe0880  sq          $fp, 0x880($sp)
    ctx->pc = 0x33ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 30));
label_33ef20:
    // 0x33ef20: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x33ef20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33ef24:
    // 0x33ef24: 0xe7b50918  swc1        $f21, 0x918($sp)
    ctx->pc = 0x33ef24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2328), bits); }
label_33ef28:
    // 0x33ef28: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x33ef28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33ef2c:
    // 0x33ef2c: 0xe7b40910  swc1        $f20, 0x910($sp)
    ctx->pc = 0x33ef2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2320), bits); }
label_33ef30:
    // 0x33ef30: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x33ef30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_33ef34:
    // 0x33ef34: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x33ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
label_33ef38:
    // 0x33ef38: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x33ef38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33ef3c:
    // 0x33ef3c: 0x7ae30010  lq          $v1, 0x10($s7)
    ctx->pc = 0x33ef3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 16)));
label_33ef40:
    // 0x33ef40: 0x7ae60000  lq          $a2, 0x0($s7)
    ctx->pc = 0x33ef40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_33ef44:
    // 0x33ef44: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x33ef44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33ef48:
    // 0x33ef48: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x33ef48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_33ef4c:
    // 0x33ef4c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33ef4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_33ef50:
    // 0x33ef50: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x33ef50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_33ef54:
    // 0x33ef54: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x33ef54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_33ef58:
    // 0x33ef58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33ef58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33ef5c:
    // 0x33ef5c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x33ef5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_33ef60:
    // 0x33ef60: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33ef60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33ef64:
    // 0x33ef64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x33ef64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_33ef68:
    // 0x33ef68: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x33ef68u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_33ef6c:
    // 0x33ef6c: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x33ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_33ef70:
    // 0x33ef70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33ef74:
    // 0x33ef74: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x33ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_33ef78:
    // 0x33ef78: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x33ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_33ef7c:
    // 0x33ef7c: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x33ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_33ef80:
    // 0x33ef80: 0x7fa90820  sq          $t1, 0x820($sp)
    ctx->pc = 0x33ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 9));
label_33ef84:
    // 0x33ef84: 0xc0d0456  jal         func_341158
label_33ef88:
    if (ctx->pc == 0x33EF88u) {
        ctx->pc = 0x33EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EF84u;
        // 0x33ef88: 0xafa00860  sw          $zero, 0x860($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EF8Cu;
        goto label_33ef8c;
    }
    ctx->pc = 0x33EF84u;
    SET_GPR_U32(ctx, 31, 0x33EF8Cu);
    ctx->pc = 0x33EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EF84u;
    // 0x33ef88: 0xafa00860  sw          $zero, 0x860($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x33EF84u, 0x33EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EF8Cu;
label_33ef8c:
    // 0x33ef8c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_33ef90:
    // 0x33ef90: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x33ef90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_33ef94:
    // 0x33ef94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x33ef94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_33ef98:
    // 0x33ef98: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x33ef98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33ef9c:
    // 0x33ef9c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x33ef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_33efa0:
    // 0x33efa0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x33efa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33efa4:
    // 0x33efa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33efa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33efa8:
    // 0x33efa8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33efa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33efac:
    // 0x33efac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33efacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33efb0:
    // 0x33efb0: 0x4bc208af  vmini.xyz   $vf2, $vf1, $vf2
    ctx->pc = 0x33efb0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33efb4:
    // 0x33efb4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x33efb4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_33efb8:
    // 0x33efb8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x33efb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33efbc:
    // 0x33efbc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x33efbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_33efc0:
    // 0x33efc0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33efc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_33efc4:
    // 0x33efc4: 0x4bc208ab  vmax.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x33efc4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_33efc8:
    // 0x33efc8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x33efc8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_33efcc:
    // 0x33efcc: 0x7fa40820  sq          $a0, 0x820($sp)
    ctx->pc = 0x33efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 4));
label_33efd0:
    // 0x33efd0: 0x7fa40830  sq          $a0, 0x830($sp)
    ctx->pc = 0x33efd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 4));
label_33efd4:
    // 0x33efd4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x33efd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33efd8:
    // 0x33efd8: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x33efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_33efdc:
    // 0x33efdc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x33efdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_33efe0:
    // 0x33efe0: 0x7fa20820  sq          $v0, 0x820($sp)
    ctx->pc = 0x33efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2080), GPR_VEC(ctx, 2));
label_33efe4:
    // 0x33efe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33efe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33efe8:
    // 0x33efe8: 0xc0cffac  jal         func_33FEB0
label_33efec:
    if (ctx->pc == 0x33EFECu) {
        ctx->pc = 0x33EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFE8u;
        // 0x33efec: 0x240a2000  addiu       $t2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EFF0u;
        goto label_33eff0;
    }
    ctx->pc = 0x33EFE8u;
    SET_GPR_U32(ctx, 31, 0x33EFF0u);
    ctx->pc = 0x33EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EFE8u;
    // 0x33efec: 0x240a2000  addiu       $t2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FEB0u, 0x33EFE8u, 0x33EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EFF0u;
label_33eff0:
    // 0x33eff0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x33eff0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33eff4:
    // 0x33eff4: 0x12c00031  beqz        $s6, . + 4 + (0x31 << 2)
label_33eff8:
    if (ctx->pc == 0x33EFF8u) {
        ctx->pc = 0x33EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFF4u;
        // 0x33eff8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EFFCu;
        goto label_33effc;
    }
    ctx->pc = 0x33EFF4u;
    {
        const bool branch_taken_0x33eff4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EFF4u;
        // 0x33eff8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eff4) {
            ctx->pc = 0x33F0BCu;
            goto label_33f0bc;
        }
    }
    ctx->pc = 0x33EFFCu;
label_33effc:
    // 0x33effc: 0x0  nop
    ctx->pc = 0x33effcu;
    // NOP
label_33f000:
    // 0x33f000: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33f004:
    // 0x33f004: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x33f004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_33f008:
    // 0x33f008: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33f008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33f00c:
    // 0x33f00c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_33f010:
    // 0x33f010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33f010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f014:
    // 0x33f014: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x33f014u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33f018:
    // 0x33f018: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33f018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_33f01c:
    // 0x33f01c: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x33f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_33f020:
    // 0x33f020: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33f020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33f024:
    // 0x33f024: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33f024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33f028:
    // 0x33f028: 0x40f809  jalr        $v0
label_33f02c:
    if (ctx->pc == 0x33F02Cu) {
        ctx->pc = 0x33F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F028u;
        // 0x33f02c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F030u;
        goto label_33f030;
    }
    ctx->pc = 0x33F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F030u);
        ctx->pc = 0x33F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F028u;
        // 0x33f02c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F028u, 0x33F030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F030u;
label_33f030:
    // 0x33f030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33f030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33f034:
    // 0x33f034: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_33f038:
    if (ctx->pc == 0x33F038u) {
        ctx->pc = 0x33F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F034u;
        // 0x33f038: 0x276102b  sltu        $v0, $s3, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F03Cu;
        goto label_33f03c;
    }
    ctx->pc = 0x33F034u;
    {
        const bool branch_taken_0x33f034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F034u;
        // 0x33f038: 0x276102b  sltu        $v0, $s3, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f034) {
            ctx->pc = 0x33F0B4u;
            goto label_33f0b4;
        }
    }
    ctx->pc = 0x33F03Cu;
label_33f03c:
    // 0x33f03c: 0x27d20108  addiu       $s2, $fp, 0x108
    ctx->pc = 0x33f03cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
label_33f040:
    // 0x33f040: 0x96020032  lhu         $v0, 0x32($s0)
    ctx->pc = 0x33f040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_33f044:
    // 0x33f044: 0x0  nop
    ctx->pc = 0x33f044u;
    // NOP
label_33f048:
    // 0x33f048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33f048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33f04c:
    // 0x33f04c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_33f050:
    if (ctx->pc == 0x33F050u) {
        ctx->pc = 0x33F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F04Cu;
        // 0x33f050: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F054u;
        goto label_33f054;
    }
    ctx->pc = 0x33F04Cu;
    {
        const bool branch_taken_0x33f04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f04c) {
            ctx->pc = 0x33F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F04Cu;
            // 0x33f050: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F0A8u;
            goto label_33f0a8;
        }
    }
    ctx->pc = 0x33F054u;
label_33f054:
    // 0x33f054: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x33f054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
label_33f058:
    // 0x33f058: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33f058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33f05c:
    // 0x33f05c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x33f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_33f060:
    // 0x33f060: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33f064:
    // 0x33f064: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_33f068:
    if (ctx->pc == 0x33F068u) {
        ctx->pc = 0x33F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F064u;
        // 0x33f068: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F06Cu;
        goto label_33f06c;
    }
    ctx->pc = 0x33F064u;
    {
        const bool branch_taken_0x33f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F064u;
        // 0x33f068: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f064) {
            ctx->pc = 0x33F0A4u;
            goto label_33f0a4;
        }
    }
    ctx->pc = 0x33F06Cu;
label_33f06c:
    // 0x33f06c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x33f06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33f070:
    // 0x33f070: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x33f070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_33f074:
    // 0x33f074: 0x40f809  jalr        $v0
label_33f078:
    if (ctx->pc == 0x33F078u) {
        ctx->pc = 0x33F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F074u;
        // 0x33f078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F07Cu;
        goto label_33f07c;
    }
    ctx->pc = 0x33F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33F07Cu);
        ctx->pc = 0x33F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F074u;
        // 0x33f078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F074u, 0x33F07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F07Cu;
label_33f07c:
    // 0x33f07c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_33f080:
    if (ctx->pc == 0x33F080u) {
        ctx->pc = 0x33F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F07Cu;
        // 0x33f080: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F084u;
        goto label_33f084;
    }
    ctx->pc = 0x33F07Cu;
    {
        const bool branch_taken_0x33f07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f07c) {
            ctx->pc = 0x33F080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F07Cu;
            // 0x33f080: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F0A8u;
            goto label_33f0a8;
        }
    }
    ctx->pc = 0x33F084u;
label_33f084:
    // 0x33f084: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x33f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33f088:
    // 0x33f088: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x33f088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33f08c:
    // 0x33f08c: 0x0  nop
    ctx->pc = 0x33f08cu;
    // NOP
label_33f090:
    // 0x33f090: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_33f094:
    if (ctx->pc == 0x33F094u) {
        ctx->pc = 0x33F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F090u;
        // 0x33f094: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F098u;
        goto label_33f098;
    }
    ctx->pc = 0x33F090u;
    {
        const bool branch_taken_0x33f090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33f090) {
            ctx->pc = 0x33F094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F090u;
            // 0x33f094: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F0A8u;
            goto label_33f0a8;
        }
    }
    ctx->pc = 0x33F098u;
label_33f098:
    // 0x33f098: 0xafb00860  sw          $s0, 0x860($sp)
    ctx->pc = 0x33f098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 16));
label_33f09c:
    // 0x33f09c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33f09cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_33f0a0:
    // 0x33f0a0: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x33f0a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f0a4:
    // 0x33f0a4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x33f0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33f0a8:
    // 0x33f0a8: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
label_33f0ac:
    if (ctx->pc == 0x33F0ACu) {
        ctx->pc = 0x33F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0A8u;
        // 0x33f0ac: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F0B0u;
        goto label_33f0b0;
    }
    ctx->pc = 0x33F0A8u;
    {
        const bool branch_taken_0x33f0a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f0a8) {
            ctx->pc = 0x33F0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F0A8u;
            // 0x33f0ac: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f048;
        }
    }
    ctx->pc = 0x33F0B0u;
label_33f0b0:
    // 0x33f0b0: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x33f0b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_33f0b4:
    // 0x33f0b4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_33f0b8:
    if (ctx->pc == 0x33F0B8u) {
        ctx->pc = 0x33F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0B4u;
        // 0x33f0b8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F0BCu;
        goto label_33f0bc;
    }
    ctx->pc = 0x33F0B4u;
    {
        const bool branch_taken_0x33f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0B4u;
        // 0x33f0b8: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0b4) {
            ctx->pc = 0x33F000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f000;
        }
    }
    ctx->pc = 0x33F0BCu;
label_33f0bc:
    // 0x33f0bc: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_33f0c0:
    if (ctx->pc == 0x33F0C0u) {
        ctx->pc = 0x33F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0BCu;
        // 0x33f0c0: 0x8fa20860  lw          $v0, 0x860($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F0C4u;
        goto label_33f0c4;
    }
    ctx->pc = 0x33F0BCu;
    {
        const bool branch_taken_0x33f0bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0BCu;
        // 0x33f0c0: 0x8fa20860  lw          $v0, 0x860($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0bc) {
            ctx->pc = 0x33F0D4u;
            goto label_33f0d4;
        }
    }
    ctx->pc = 0x33F0C4u;
label_33f0c4:
    // 0x33f0c4: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x33f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_33f0c8:
    // 0x33f0c8: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x33f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_33f0cc:
    // 0x33f0cc: 0xe6940080  swc1        $f20, 0x80($s4)
    ctx->pc = 0x33f0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
label_33f0d0:
    // 0x33f0d0: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x33f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_33f0d4:
    // 0x33f0d4: 0x15102b  sltu        $v0, $zero, $s5
    ctx->pc = 0x33f0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_33f0d8:
    // 0x33f0d8: 0x7bb00900  lq          $s0, 0x900($sp)
    ctx->pc = 0x33f0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_33f0dc:
    // 0x33f0dc: 0x7bb108f0  lq          $s1, 0x8F0($sp)
    ctx->pc = 0x33f0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_33f0e0:
    // 0x33f0e0: 0x7bb208e0  lq          $s2, 0x8E0($sp)
    ctx->pc = 0x33f0e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_33f0e4:
    // 0x33f0e4: 0x7bb308d0  lq          $s3, 0x8D0($sp)
    ctx->pc = 0x33f0e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_33f0e8:
    // 0x33f0e8: 0x7bb408c0  lq          $s4, 0x8C0($sp)
    ctx->pc = 0x33f0e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_33f0ec:
    // 0x33f0ec: 0x7bb508b0  lq          $s5, 0x8B0($sp)
    ctx->pc = 0x33f0ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_33f0f0:
    // 0x33f0f0: 0x7bb608a0  lq          $s6, 0x8A0($sp)
    ctx->pc = 0x33f0f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_33f0f4:
    // 0x33f0f4: 0x7bb70890  lq          $s7, 0x890($sp)
    ctx->pc = 0x33f0f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_33f0f8:
    // 0x33f0f8: 0x7bbe0880  lq          $fp, 0x880($sp)
    ctx->pc = 0x33f0f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_33f0fc:
    // 0x33f0fc: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x33f0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
label_33f100:
    // 0x33f100: 0xc7b50918  lwc1        $f21, 0x918($sp)
    ctx->pc = 0x33f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_33f104:
    // 0x33f104: 0xc7b40910  lwc1        $f20, 0x910($sp)
    ctx->pc = 0x33f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33f108:
    // 0x33f108: 0x3e00008  jr          $ra
label_33f10c:
    if (ctx->pc == 0x33F10Cu) {
        ctx->pc = 0x33F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F108u;
        // 0x33f10c: 0x27bd0920  addiu       $sp, $sp, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F110u;
        goto label_fallthrough_0x33f108;
    }
    ctx->pc = 0x33F108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F108u;
        // 0x33f10c: 0x27bd0920  addiu       $sp, $sp, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33f108:
    ctx->pc = 0x33F110u;
}
