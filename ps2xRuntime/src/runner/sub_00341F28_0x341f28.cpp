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

// Function: sub_00341F28
// Address: 0x341f28 - 0x3420c8
void sub_00341F28_0x341f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341F28_0x341f28");
#endif

    switch (ctx->pc) {
        case 0x341f28u: goto label_341f28;
        case 0x341f2cu: goto label_341f2c;
        case 0x341f30u: goto label_341f30;
        case 0x341f34u: goto label_341f34;
        case 0x341f38u: goto label_341f38;
        case 0x341f3cu: goto label_341f3c;
        case 0x341f40u: goto label_341f40;
        case 0x341f44u: goto label_341f44;
        case 0x341f48u: goto label_341f48;
        case 0x341f4cu: goto label_341f4c;
        case 0x341f50u: goto label_341f50;
        case 0x341f54u: goto label_341f54;
        case 0x341f58u: goto label_341f58;
        case 0x341f5cu: goto label_341f5c;
        case 0x341f60u: goto label_341f60;
        case 0x341f64u: goto label_341f64;
        case 0x341f68u: goto label_341f68;
        case 0x341f6cu: goto label_341f6c;
        case 0x341f70u: goto label_341f70;
        case 0x341f74u: goto label_341f74;
        case 0x341f78u: goto label_341f78;
        case 0x341f7cu: goto label_341f7c;
        case 0x341f80u: goto label_341f80;
        case 0x341f84u: goto label_341f84;
        case 0x341f88u: goto label_341f88;
        case 0x341f8cu: goto label_341f8c;
        case 0x341f90u: goto label_341f90;
        case 0x341f94u: goto label_341f94;
        case 0x341f98u: goto label_341f98;
        case 0x341f9cu: goto label_341f9c;
        case 0x341fa0u: goto label_341fa0;
        case 0x341fa4u: goto label_341fa4;
        case 0x341fa8u: goto label_341fa8;
        case 0x341facu: goto label_341fac;
        case 0x341fb0u: goto label_341fb0;
        case 0x341fb4u: goto label_341fb4;
        case 0x341fb8u: goto label_341fb8;
        case 0x341fbcu: goto label_341fbc;
        case 0x341fc0u: goto label_341fc0;
        case 0x341fc4u: goto label_341fc4;
        case 0x341fc8u: goto label_341fc8;
        case 0x341fccu: goto label_341fcc;
        case 0x341fd0u: goto label_341fd0;
        case 0x341fd4u: goto label_341fd4;
        case 0x341fd8u: goto label_341fd8;
        case 0x341fdcu: goto label_341fdc;
        case 0x341fe0u: goto label_341fe0;
        case 0x341fe4u: goto label_341fe4;
        case 0x341fe8u: goto label_341fe8;
        case 0x341fecu: goto label_341fec;
        case 0x341ff0u: goto label_341ff0;
        case 0x341ff4u: goto label_341ff4;
        case 0x341ff8u: goto label_341ff8;
        case 0x341ffcu: goto label_341ffc;
        case 0x342000u: goto label_342000;
        case 0x342004u: goto label_342004;
        case 0x342008u: goto label_342008;
        case 0x34200cu: goto label_34200c;
        case 0x342010u: goto label_342010;
        case 0x342014u: goto label_342014;
        case 0x342018u: goto label_342018;
        case 0x34201cu: goto label_34201c;
        case 0x342020u: goto label_342020;
        case 0x342024u: goto label_342024;
        case 0x342028u: goto label_342028;
        case 0x34202cu: goto label_34202c;
        case 0x342030u: goto label_342030;
        case 0x342034u: goto label_342034;
        case 0x342038u: goto label_342038;
        case 0x34203cu: goto label_34203c;
        case 0x342040u: goto label_342040;
        case 0x342044u: goto label_342044;
        case 0x342048u: goto label_342048;
        case 0x34204cu: goto label_34204c;
        case 0x342050u: goto label_342050;
        case 0x342054u: goto label_342054;
        case 0x342058u: goto label_342058;
        case 0x34205cu: goto label_34205c;
        case 0x342060u: goto label_342060;
        case 0x342064u: goto label_342064;
        case 0x342068u: goto label_342068;
        case 0x34206cu: goto label_34206c;
        case 0x342070u: goto label_342070;
        case 0x342074u: goto label_342074;
        case 0x342078u: goto label_342078;
        case 0x34207cu: goto label_34207c;
        case 0x342080u: goto label_342080;
        case 0x342084u: goto label_342084;
        case 0x342088u: goto label_342088;
        case 0x34208cu: goto label_34208c;
        case 0x342090u: goto label_342090;
        case 0x342094u: goto label_342094;
        case 0x342098u: goto label_342098;
        case 0x34209cu: goto label_34209c;
        case 0x3420a0u: goto label_3420a0;
        case 0x3420a4u: goto label_3420a4;
        case 0x3420a8u: goto label_3420a8;
        case 0x3420acu: goto label_3420ac;
        case 0x3420b0u: goto label_3420b0;
        case 0x3420b4u: goto label_3420b4;
        case 0x3420b8u: goto label_3420b8;
        case 0x3420bcu: goto label_3420bc;
        case 0x3420c0u: goto label_3420c0;
        case 0x3420c4u: goto label_3420c4;
        default: break;
    }

    ctx->pc = 0x341f28u;

label_341f28:
    // 0x341f28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x341f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_341f2c:
    // 0x341f2c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x341f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_341f30:
    // 0x341f30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x341f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_341f34:
    // 0x341f34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x341f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341f38:
    // 0x341f38: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x341f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_341f3c:
    // 0x341f3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x341f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_341f40:
    // 0x341f40: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x341f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_341f44:
    // 0x341f44: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x341f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_341f48:
    // 0x341f48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x341f48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341f4c:
    // 0x341f4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x341f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_341f50:
    // 0x341f50: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x341f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_341f54:
    // 0x341f54: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x341f54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_341f58:
    // 0x341f58: 0x8e500030  lw          $s0, 0x30($s2)
    ctx->pc = 0x341f58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_341f5c:
    // 0x341f5c: 0xc086624  jal         func_219890
label_341f60:
    if (ctx->pc == 0x341F60u) {
        ctx->pc = 0x341F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F5Cu;
        // 0x341f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F64u;
        goto label_341f64;
    }
    ctx->pc = 0x341F5Cu;
    SET_GPR_U32(ctx, 31, 0x341F64u);
    ctx->pc = 0x341F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341F5Cu;
    // 0x341f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x341F5Cu, 0x341F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F64u;
label_341f64:
    // 0x341f64: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x341f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_341f68:
    // 0x341f68: 0xc086618  jal         func_219860
label_341f6c:
    if (ctx->pc == 0x341F6Cu) {
        ctx->pc = 0x341F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F68u;
        // 0x341f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F70u;
        goto label_341f70;
    }
    ctx->pc = 0x341F68u;
    SET_GPR_U32(ctx, 31, 0x341F70u);
    ctx->pc = 0x341F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341F68u;
    // 0x341f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x341F68u, 0x341F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F70u;
label_341f70:
    // 0x341f70: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x341f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_341f74:
    // 0x341f74: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x341f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_341f78:
    // 0x341f78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x341f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_341f7c:
    // 0x341f7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x341f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_341f80:
    // 0x341f80: 0x8e500080  lw          $s0, 0x80($s2)
    ctx->pc = 0x341f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_341f84:
    // 0x341f84: 0x245528e0  addiu       $s5, $v0, 0x28E0
    ctx->pc = 0x341f84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 10464));
label_341f88:
    // 0x341f88: 0x247428b0  addiu       $s4, $v1, 0x28B0
    ctx->pc = 0x341f88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10416));
label_341f8c:
    // 0x341f8c: 0x24932810  addiu       $s3, $a0, 0x2810
    ctx->pc = 0x341f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 10256));
label_341f90:
    // 0x341f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x341f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341f94:
    // 0x341f94: 0xc087408  jal         func_21D020
label_341f98:
    if (ctx->pc == 0x341F98u) {
        ctx->pc = 0x341F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F94u;
        // 0x341f98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341F9Cu;
        goto label_341f9c;
    }
    ctx->pc = 0x341F94u;
    SET_GPR_U32(ctx, 31, 0x341F9Cu);
    ctx->pc = 0x341F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341F94u;
    // 0x341f98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x341F94u, 0x341F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F9Cu;
label_341f9c:
    // 0x341f9c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x341f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_341fa0:
    // 0x341fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x341fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341fa4:
    // 0x341fa4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x341fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_341fa8:
    // 0x341fa8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x341fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_341fac:
    // 0x341fac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x341facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_341fb0:
    // 0x341fb0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x341fb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_341fb4:
    // 0x341fb4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_341fb8:
    // 0x341fb8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x341fb8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_341fbc:
    // 0x341fbc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x341fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_341fc0:
    // 0x341fc0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x341fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_341fc4:
    // 0x341fc4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x341fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_341fc8:
    // 0x341fc8: 0xc087408  jal         func_21D020
label_341fcc:
    if (ctx->pc == 0x341FCCu) {
        ctx->pc = 0x341FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FC8u;
        // 0x341fcc: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341FD0u;
        goto label_341fd0;
    }
    ctx->pc = 0x341FC8u;
    SET_GPR_U32(ctx, 31, 0x341FD0u);
    ctx->pc = 0x341FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341FC8u;
    // 0x341fcc: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x341FC8u, 0x341FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341FD0u;
label_341fd0:
    // 0x341fd0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x341fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341fd4:
    // 0x341fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x341fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_341fd8:
    // 0x341fd8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x341fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_341fdc:
    // 0x341fdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x341fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_341fe0:
    // 0x341fe0: 0xc087408  jal         func_21D020
label_341fe4:
    if (ctx->pc == 0x341FE4u) {
        ctx->pc = 0x341FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FE0u;
        // 0x341fe4: 0xe6010060  swc1        $f1, 0x60($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x341FE8u;
        goto label_341fe8;
    }
    ctx->pc = 0x341FE0u;
    SET_GPR_U32(ctx, 31, 0x341FE8u);
    ctx->pc = 0x341FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341FE0u;
    // 0x341fe4: 0xe6010060  swc1        $f1, 0x60($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x341FE0u, 0x341FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341FE8u;
label_341fe8:
    // 0x341fe8: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x341fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_341fec:
    // 0x341fec: 0x2ec20005  sltiu       $v0, $s6, 0x5
    ctx->pc = 0x341fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_341ff0:
    // 0x341ff0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x341ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_341ff4:
    // 0x341ff4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x341ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_341ff8:
    // 0x341ff8: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x341ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_341ffc:
    // 0x341ffc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_342000:
    if (ctx->pc == 0x342000u) {
        ctx->pc = 0x342000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FFCu;
        // 0x342000: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342004u;
        goto label_342004;
    }
    ctx->pc = 0x341FFCu;
    {
        const bool branch_taken_0x341ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FFCu;
        // 0x342000: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ffc) {
            ctx->pc = 0x341F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341f90;
        }
    }
    ctx->pc = 0x342004u;
label_342004:
    // 0x342004: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x342004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_342008:
    // 0x342008: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x342008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_34200c:
    // 0x34200c: 0x245528c8  addiu       $s5, $v0, 0x28C8
    ctx->pc = 0x34200cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 10440));
label_342010:
    // 0x342010: 0x24742860  addiu       $s4, $v1, 0x2860
    ctx->pc = 0x342010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 10336));
label_342014:
    // 0x342014: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x342014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342018:
    // 0x342018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34201c:
    // 0x34201c: 0xc087408  jal         func_21D020
label_342020:
    if (ctx->pc == 0x342020u) {
        ctx->pc = 0x342020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34201Cu;
        // 0x342020: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342024u;
        goto label_342024;
    }
    ctx->pc = 0x34201Cu;
    SET_GPR_U32(ctx, 31, 0x342024u);
    ctx->pc = 0x342020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34201Cu;
    // 0x342020: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x34201Cu, 0x342024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342024u;
label_342024:
    // 0x342024: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x342024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_342028:
    // 0x342028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34202c:
    // 0x34202c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34202cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_342030:
    // 0x342030: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x342030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_342034:
    // 0x342034: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x342034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342038:
    // 0x342038: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x342038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_34203c:
    // 0x34203c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34203cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_342040:
    // 0x342040: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x342040u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_342044:
    // 0x342044: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x342044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_342048:
    // 0x342048: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x342048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_34204c:
    // 0x34204c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x34204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_342050:
    // 0x342050: 0xc087408  jal         func_21D020
label_342054:
    if (ctx->pc == 0x342054u) {
        ctx->pc = 0x342054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342050u;
        // 0x342054: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342058u;
        goto label_342058;
    }
    ctx->pc = 0x342050u;
    SET_GPR_U32(ctx, 31, 0x342058u);
    ctx->pc = 0x342054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342050u;
    // 0x342054: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x342050u, 0x342058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342058u;
label_342058:
    // 0x342058: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x342058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34205c:
    // 0x34205c: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x34205cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_342060:
    // 0x342060: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x342060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_342064:
    // 0x342064: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x342064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_342068:
    // 0x342068: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x342068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_34206c:
    // 0x34206c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_342070:
    if (ctx->pc == 0x342070u) {
        ctx->pc = 0x342070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34206Cu;
        // 0x342070: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342074u;
        goto label_342074;
    }
    ctx->pc = 0x34206Cu;
    {
        const bool branch_taken_0x34206c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34206Cu;
        // 0x342070: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34206c) {
            ctx->pc = 0x342018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342018;
        }
    }
    ctx->pc = 0x342074u;
label_342074:
    // 0x342074: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x342074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_342078:
    // 0x342078: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x342078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_34207c:
    // 0x34207c: 0x8e460074  lw          $a2, 0x74($s2)
    ctx->pc = 0x34207cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_342080:
    // 0x342080: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x342080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_342084:
    // 0x342084: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x342084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_342088:
    // 0x342088: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x342088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_34208c:
    // 0x34208c: 0x84c40010  lh          $a0, 0x10($a2)
    ctx->pc = 0x34208cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
label_342090:
    // 0x342090: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x342090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_342094:
    // 0x342094: 0x40f809  jalr        $v0
label_342098:
    if (ctx->pc == 0x342098u) {
        ctx->pc = 0x342098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342094u;
        // 0x342098: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34209Cu;
        goto label_34209c;
    }
    ctx->pc = 0x342094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34209Cu);
        ctx->pc = 0x342098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342094u;
        // 0x342098: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342094u, 0x34209Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34209Cu;
label_34209c:
    // 0x34209c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x34209cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3420a0:
    // 0x3420a0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3420a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3420a4:
    // 0x3420a4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3420a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3420a8:
    // 0x3420a8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3420a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3420ac:
    // 0x3420ac: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3420acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3420b0:
    // 0x3420b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3420b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3420b4:
    // 0x3420b4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3420b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3420b8:
    // 0x3420b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3420b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3420bc:
    // 0x3420bc: 0x3e00008  jr          $ra
label_3420c0:
    if (ctx->pc == 0x3420C0u) {
        ctx->pc = 0x3420C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420BCu;
        // 0x3420c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3420C4u;
        goto label_3420c4;
    }
    ctx->pc = 0x3420BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3420C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420BCu;
        // 0x3420c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3420BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3420C4u;
label_3420c4:
    // 0x3420c4: 0x0  nop
    ctx->pc = 0x3420c4u;
    // NOP
    ctx->pc = 0x3420c8u;
}
