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

// Function: sub_001C3DE0
// Address: 0x1c3de0 - 0x1c41a0
void sub_001C3DE0_0x1c3de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3DE0_0x1c3de0");
#endif

    switch (ctx->pc) {
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3de4u: goto label_1c3de4;
        case 0x1c3de8u: goto label_1c3de8;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3df0u: goto label_1c3df0;
        case 0x1c3df4u: goto label_1c3df4;
        case 0x1c3df8u: goto label_1c3df8;
        case 0x1c3dfcu: goto label_1c3dfc;
        case 0x1c3e00u: goto label_1c3e00;
        case 0x1c3e04u: goto label_1c3e04;
        case 0x1c3e08u: goto label_1c3e08;
        case 0x1c3e0cu: goto label_1c3e0c;
        case 0x1c3e10u: goto label_1c3e10;
        case 0x1c3e14u: goto label_1c3e14;
        case 0x1c3e18u: goto label_1c3e18;
        case 0x1c3e1cu: goto label_1c3e1c;
        case 0x1c3e20u: goto label_1c3e20;
        case 0x1c3e24u: goto label_1c3e24;
        case 0x1c3e28u: goto label_1c3e28;
        case 0x1c3e2cu: goto label_1c3e2c;
        case 0x1c3e30u: goto label_1c3e30;
        case 0x1c3e34u: goto label_1c3e34;
        case 0x1c3e38u: goto label_1c3e38;
        case 0x1c3e3cu: goto label_1c3e3c;
        case 0x1c3e40u: goto label_1c3e40;
        case 0x1c3e44u: goto label_1c3e44;
        case 0x1c3e48u: goto label_1c3e48;
        case 0x1c3e4cu: goto label_1c3e4c;
        case 0x1c3e50u: goto label_1c3e50;
        case 0x1c3e54u: goto label_1c3e54;
        case 0x1c3e58u: goto label_1c3e58;
        case 0x1c3e5cu: goto label_1c3e5c;
        case 0x1c3e60u: goto label_1c3e60;
        case 0x1c3e64u: goto label_1c3e64;
        case 0x1c3e68u: goto label_1c3e68;
        case 0x1c3e6cu: goto label_1c3e6c;
        case 0x1c3e70u: goto label_1c3e70;
        case 0x1c3e74u: goto label_1c3e74;
        case 0x1c3e78u: goto label_1c3e78;
        case 0x1c3e7cu: goto label_1c3e7c;
        case 0x1c3e80u: goto label_1c3e80;
        case 0x1c3e84u: goto label_1c3e84;
        case 0x1c3e88u: goto label_1c3e88;
        case 0x1c3e8cu: goto label_1c3e8c;
        case 0x1c3e90u: goto label_1c3e90;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3e98u: goto label_1c3e98;
        case 0x1c3e9cu: goto label_1c3e9c;
        case 0x1c3ea0u: goto label_1c3ea0;
        case 0x1c3ea4u: goto label_1c3ea4;
        case 0x1c3ea8u: goto label_1c3ea8;
        case 0x1c3eacu: goto label_1c3eac;
        case 0x1c3eb0u: goto label_1c3eb0;
        case 0x1c3eb4u: goto label_1c3eb4;
        case 0x1c3eb8u: goto label_1c3eb8;
        case 0x1c3ebcu: goto label_1c3ebc;
        case 0x1c3ec0u: goto label_1c3ec0;
        case 0x1c3ec4u: goto label_1c3ec4;
        case 0x1c3ec8u: goto label_1c3ec8;
        case 0x1c3eccu: goto label_1c3ecc;
        case 0x1c3ed0u: goto label_1c3ed0;
        case 0x1c3ed4u: goto label_1c3ed4;
        case 0x1c3ed8u: goto label_1c3ed8;
        case 0x1c3edcu: goto label_1c3edc;
        case 0x1c3ee0u: goto label_1c3ee0;
        case 0x1c3ee4u: goto label_1c3ee4;
        case 0x1c3ee8u: goto label_1c3ee8;
        case 0x1c3eecu: goto label_1c3eec;
        case 0x1c3ef0u: goto label_1c3ef0;
        case 0x1c3ef4u: goto label_1c3ef4;
        case 0x1c3ef8u: goto label_1c3ef8;
        case 0x1c3efcu: goto label_1c3efc;
        case 0x1c3f00u: goto label_1c3f00;
        case 0x1c3f04u: goto label_1c3f04;
        case 0x1c3f08u: goto label_1c3f08;
        case 0x1c3f0cu: goto label_1c3f0c;
        case 0x1c3f10u: goto label_1c3f10;
        case 0x1c3f14u: goto label_1c3f14;
        case 0x1c3f18u: goto label_1c3f18;
        case 0x1c3f1cu: goto label_1c3f1c;
        case 0x1c3f20u: goto label_1c3f20;
        case 0x1c3f24u: goto label_1c3f24;
        case 0x1c3f28u: goto label_1c3f28;
        case 0x1c3f2cu: goto label_1c3f2c;
        case 0x1c3f30u: goto label_1c3f30;
        case 0x1c3f34u: goto label_1c3f34;
        case 0x1c3f38u: goto label_1c3f38;
        case 0x1c3f3cu: goto label_1c3f3c;
        case 0x1c3f40u: goto label_1c3f40;
        case 0x1c3f44u: goto label_1c3f44;
        case 0x1c3f48u: goto label_1c3f48;
        case 0x1c3f4cu: goto label_1c3f4c;
        case 0x1c3f50u: goto label_1c3f50;
        case 0x1c3f54u: goto label_1c3f54;
        case 0x1c3f58u: goto label_1c3f58;
        case 0x1c3f5cu: goto label_1c3f5c;
        case 0x1c3f60u: goto label_1c3f60;
        case 0x1c3f64u: goto label_1c3f64;
        case 0x1c3f68u: goto label_1c3f68;
        case 0x1c3f6cu: goto label_1c3f6c;
        case 0x1c3f70u: goto label_1c3f70;
        case 0x1c3f74u: goto label_1c3f74;
        case 0x1c3f78u: goto label_1c3f78;
        case 0x1c3f7cu: goto label_1c3f7c;
        case 0x1c3f80u: goto label_1c3f80;
        case 0x1c3f84u: goto label_1c3f84;
        case 0x1c3f88u: goto label_1c3f88;
        case 0x1c3f8cu: goto label_1c3f8c;
        case 0x1c3f90u: goto label_1c3f90;
        case 0x1c3f94u: goto label_1c3f94;
        case 0x1c3f98u: goto label_1c3f98;
        case 0x1c3f9cu: goto label_1c3f9c;
        case 0x1c3fa0u: goto label_1c3fa0;
        case 0x1c3fa4u: goto label_1c3fa4;
        case 0x1c3fa8u: goto label_1c3fa8;
        case 0x1c3facu: goto label_1c3fac;
        case 0x1c3fb0u: goto label_1c3fb0;
        case 0x1c3fb4u: goto label_1c3fb4;
        case 0x1c3fb8u: goto label_1c3fb8;
        case 0x1c3fbcu: goto label_1c3fbc;
        case 0x1c3fc0u: goto label_1c3fc0;
        case 0x1c3fc4u: goto label_1c3fc4;
        case 0x1c3fc8u: goto label_1c3fc8;
        case 0x1c3fccu: goto label_1c3fcc;
        case 0x1c3fd0u: goto label_1c3fd0;
        case 0x1c3fd4u: goto label_1c3fd4;
        case 0x1c3fd8u: goto label_1c3fd8;
        case 0x1c3fdcu: goto label_1c3fdc;
        case 0x1c3fe0u: goto label_1c3fe0;
        case 0x1c3fe4u: goto label_1c3fe4;
        case 0x1c3fe8u: goto label_1c3fe8;
        case 0x1c3fecu: goto label_1c3fec;
        case 0x1c3ff0u: goto label_1c3ff0;
        case 0x1c3ff4u: goto label_1c3ff4;
        case 0x1c3ff8u: goto label_1c3ff8;
        case 0x1c3ffcu: goto label_1c3ffc;
        case 0x1c4000u: goto label_1c4000;
        case 0x1c4004u: goto label_1c4004;
        case 0x1c4008u: goto label_1c4008;
        case 0x1c400cu: goto label_1c400c;
        case 0x1c4010u: goto label_1c4010;
        case 0x1c4014u: goto label_1c4014;
        case 0x1c4018u: goto label_1c4018;
        case 0x1c401cu: goto label_1c401c;
        case 0x1c4020u: goto label_1c4020;
        case 0x1c4024u: goto label_1c4024;
        case 0x1c4028u: goto label_1c4028;
        case 0x1c402cu: goto label_1c402c;
        case 0x1c4030u: goto label_1c4030;
        case 0x1c4034u: goto label_1c4034;
        case 0x1c4038u: goto label_1c4038;
        case 0x1c403cu: goto label_1c403c;
        case 0x1c4040u: goto label_1c4040;
        case 0x1c4044u: goto label_1c4044;
        case 0x1c4048u: goto label_1c4048;
        case 0x1c404cu: goto label_1c404c;
        case 0x1c4050u: goto label_1c4050;
        case 0x1c4054u: goto label_1c4054;
        case 0x1c4058u: goto label_1c4058;
        case 0x1c405cu: goto label_1c405c;
        case 0x1c4060u: goto label_1c4060;
        case 0x1c4064u: goto label_1c4064;
        case 0x1c4068u: goto label_1c4068;
        case 0x1c406cu: goto label_1c406c;
        case 0x1c4070u: goto label_1c4070;
        case 0x1c4074u: goto label_1c4074;
        case 0x1c4078u: goto label_1c4078;
        case 0x1c407cu: goto label_1c407c;
        case 0x1c4080u: goto label_1c4080;
        case 0x1c4084u: goto label_1c4084;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c408cu: goto label_1c408c;
        case 0x1c4090u: goto label_1c4090;
        case 0x1c4094u: goto label_1c4094;
        case 0x1c4098u: goto label_1c4098;
        case 0x1c409cu: goto label_1c409c;
        case 0x1c40a0u: goto label_1c40a0;
        case 0x1c40a4u: goto label_1c40a4;
        case 0x1c40a8u: goto label_1c40a8;
        case 0x1c40acu: goto label_1c40ac;
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40b4u: goto label_1c40b4;
        case 0x1c40b8u: goto label_1c40b8;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40c0u: goto label_1c40c0;
        case 0x1c40c4u: goto label_1c40c4;
        case 0x1c40c8u: goto label_1c40c8;
        case 0x1c40ccu: goto label_1c40cc;
        case 0x1c40d0u: goto label_1c40d0;
        case 0x1c40d4u: goto label_1c40d4;
        case 0x1c40d8u: goto label_1c40d8;
        case 0x1c40dcu: goto label_1c40dc;
        case 0x1c40e0u: goto label_1c40e0;
        case 0x1c40e4u: goto label_1c40e4;
        case 0x1c40e8u: goto label_1c40e8;
        case 0x1c40ecu: goto label_1c40ec;
        case 0x1c40f0u: goto label_1c40f0;
        case 0x1c40f4u: goto label_1c40f4;
        case 0x1c40f8u: goto label_1c40f8;
        case 0x1c40fcu: goto label_1c40fc;
        case 0x1c4100u: goto label_1c4100;
        case 0x1c4104u: goto label_1c4104;
        case 0x1c4108u: goto label_1c4108;
        case 0x1c410cu: goto label_1c410c;
        case 0x1c4110u: goto label_1c4110;
        case 0x1c4114u: goto label_1c4114;
        case 0x1c4118u: goto label_1c4118;
        case 0x1c411cu: goto label_1c411c;
        case 0x1c4120u: goto label_1c4120;
        case 0x1c4124u: goto label_1c4124;
        case 0x1c4128u: goto label_1c4128;
        case 0x1c412cu: goto label_1c412c;
        case 0x1c4130u: goto label_1c4130;
        case 0x1c4134u: goto label_1c4134;
        case 0x1c4138u: goto label_1c4138;
        case 0x1c413cu: goto label_1c413c;
        case 0x1c4140u: goto label_1c4140;
        case 0x1c4144u: goto label_1c4144;
        case 0x1c4148u: goto label_1c4148;
        case 0x1c414cu: goto label_1c414c;
        case 0x1c4150u: goto label_1c4150;
        case 0x1c4154u: goto label_1c4154;
        case 0x1c4158u: goto label_1c4158;
        case 0x1c415cu: goto label_1c415c;
        case 0x1c4160u: goto label_1c4160;
        case 0x1c4164u: goto label_1c4164;
        case 0x1c4168u: goto label_1c4168;
        case 0x1c416cu: goto label_1c416c;
        case 0x1c4170u: goto label_1c4170;
        case 0x1c4174u: goto label_1c4174;
        case 0x1c4178u: goto label_1c4178;
        case 0x1c417cu: goto label_1c417c;
        case 0x1c4180u: goto label_1c4180;
        case 0x1c4184u: goto label_1c4184;
        case 0x1c4188u: goto label_1c4188;
        case 0x1c418cu: goto label_1c418c;
        case 0x1c4190u: goto label_1c4190;
        case 0x1c4194u: goto label_1c4194;
        case 0x1c4198u: goto label_1c4198;
        case 0x1c419cu: goto label_1c419c;
        default: break;
    }

    ctx->pc = 0x1c3de0u;

label_1c3de0:
    // 0x1c3de0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1c3de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1c3de4:
    // 0x1c3de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3de8:
    // 0x1c3de8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1c3de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1c3dec:
    // 0x1c3dec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c3decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3df0:
    // 0x1c3df0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1c3df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1c3df4:
    // 0x1c3df4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1c3df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1c3df8:
    // 0x1c3df8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c3df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1c3dfc:
    // 0x1c3dfc: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1c3dfcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_1c3e00:
    // 0x1c3e00: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1c3e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1c3e04:
    // 0x1c3e04: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x1c3e04u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
label_1c3e08:
    // 0x1c3e08: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1c3e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1c3e0c:
    // 0x1c3e0c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1c3e10:
    // 0x1c3e10: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1c3e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1c3e14:
    // 0x1c3e14: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1c3e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1c3e18:
    // 0x1c3e18: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1c3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1c3e1c:
    // 0x1c3e1c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c3e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c3e20:
    // 0x1c3e20: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x1c3e20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1c3e24:
    // 0x1c3e24: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1c3e24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1c3e28:
    // 0x1c3e28: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c3e28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1c3e2c:
    // 0x1c3e2c: 0xae450090  sw          $a1, 0x90($s2)
    ctx->pc = 0x1c3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 5));
label_1c3e30:
    // 0x1c3e30: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1c3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_1c3e34:
    // 0x1c3e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3e38:
    // 0x1c3e38: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1c3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_1c3e3c:
    // 0x1c3e3c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1c3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1c3e40:
    // 0x1c3e40: 0xc071140  jal         func_1C4500
label_1c3e44:
    if (ctx->pc == 0x1C3E44u) {
        ctx->pc = 0x1C3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E40u;
        // 0x1c3e44: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E48u;
        goto label_1c3e48;
    }
    ctx->pc = 0x1C3E40u;
    SET_GPR_U32(ctx, 31, 0x1C3E48u);
    ctx->pc = 0x1C3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E40u;
    // 0x1c3e44: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4500u, 0x1C3E40u, 0x1C3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E48u;
label_1c3e48:
    // 0x1c3e48: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1c3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1c3e4c:
    // 0x1c3e4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c3e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c3e50:
    // 0x1c3e50: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1c3e50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c3e54:
    // 0x1c3e54: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1c3e54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_1c3e58:
    // 0x1c3e58: 0x27c816c0  addiu       $t0, $fp, 0x16C0
    ctx->pc = 0x1c3e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
label_1c3e5c:
    // 0x1c3e5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3e60:
    // 0x1c3e60: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1c3e64:
    // 0x1c3e64: 0x0  nop
    ctx->pc = 0x1c3e64u;
    // NOP
label_1c3e68:
    // 0x1c3e68: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_1c3e6c:
    // 0x1c3e6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c3e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1c3e70:
    // 0x1c3e70: 0xaca20930  sw          $v0, 0x930($a1)
    ctx->pc = 0x1c3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2352), GPR_U32(ctx, 2));
label_1c3e74:
    // 0x1c3e74: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1c3e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_1c3e78:
    // 0x1c3e78: 0xaca00934  sw          $zero, 0x934($a1)
    ctx->pc = 0x1c3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2356), GPR_U32(ctx, 0));
label_1c3e7c:
    // 0x1c3e7c: 0x7ca30920  sq          $v1, 0x920($a1)
    ctx->pc = 0x1c3e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 2336), GPR_VEC(ctx, 3));
label_1c3e80:
    // 0x1c3e80: 0xa0a00951  sb          $zero, 0x951($a1)
    ctx->pc = 0x1c3e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2385), (uint8_t)GPR_U32(ctx, 0));
label_1c3e84:
    // 0x1c3e84: 0xa4a0094c  sh          $zero, 0x94C($a1)
    ctx->pc = 0x1c3e84u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2380), (uint16_t)GPR_U32(ctx, 0));
label_1c3e88:
    // 0x1c3e88: 0xa0a00950  sb          $zero, 0x950($a1)
    ctx->pc = 0x1c3e88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2384), (uint8_t)GPR_U32(ctx, 0));
label_1c3e8c:
    // 0x1c3e8c: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x1c3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_1c3e90:
    // 0x1c3e90: 0xaca00948  sw          $zero, 0x948($a1)
    ctx->pc = 0x1c3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2376), GPR_U32(ctx, 0));
label_1c3e94:
    // 0x1c3e94: 0xaca20944  sw          $v0, 0x944($a1)
    ctx->pc = 0x1c3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2372), GPR_U32(ctx, 2));
label_1c3e98:
    // 0x1c3e98: 0xa4a0094e  sh          $zero, 0x94E($a1)
    ctx->pc = 0x1c3e98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2382), (uint16_t)GPR_U32(ctx, 0));
label_1c3e9c:
    // 0x1c3e9c: 0x4c1fff2  bgez        $a2, . + 4 + (-0xE << 2)
label_1c3ea0:
    if (ctx->pc == 0x1C3EA0u) {
        ctx->pc = 0x1C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E9Cu;
        // 0x1c3ea0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3EA4u;
        goto label_1c3ea4;
    }
    ctx->pc = 0x1C3E9Cu;
    {
        const bool branch_taken_0x1c3e9c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E9Cu;
        // 0x1c3ea0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e9c) {
            ctx->pc = 0x1C3E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3e68;
        }
    }
    ctx->pc = 0x1C3EA4u;
label_1c3ea4:
    // 0x1c3ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ea8:
    // 0x1c3ea8: 0xc10c1fa  jal         func_4307E8
label_1c3eac:
    if (ctx->pc == 0x1C3EACu) {
        ctx->pc = 0x1C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EA8u;
        // 0x1c3eac: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3EB0u;
        goto label_1c3eb0;
    }
    ctx->pc = 0x1C3EA8u;
    SET_GPR_U32(ctx, 31, 0x1C3EB0u);
    ctx->pc = 0x1C3EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3EA8u;
    // 0x1c3eac: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1C3EA8u, 0x1C3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EB0u;
label_1c3eb0:
    // 0x1c3eb0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c3eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1c3eb4:
    // 0x1c3eb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c3eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c3eb8:
    // 0x1c3eb8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1c3eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1c3ebc:
    // 0x1c3ebc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1c3ec0:
    // 0x1c3ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c3ec4:
    // 0x1c3ec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c3ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ec8:
    // 0x1c3ec8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c3ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c3ecc:
    // 0x1c3ecc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c3eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1c3ed0:
    // 0x1c3ed0: 0x2653005c  addiu       $s3, $s2, 0x5C
    ctx->pc = 0x1c3ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
label_1c3ed4:
    // 0x1c3ed4: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1c3ed8:
    // 0x1c3ed8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1c3ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1c3edc:
    // 0x1c3edc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c3ee0:
    // 0x1c3ee0: 0x26550070  addiu       $s5, $s2, 0x70
    ctx->pc = 0x1c3ee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1c3ee4:
    // 0x1c3ee4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c3ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c3ee8:
    // 0x1c3ee8: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1c3eec:
    // 0x1c3eec: 0x0  nop
    ctx->pc = 0x1c3eecu;
    // NOP
label_1c3ef0:
    // 0x1c3ef0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1c3ef4:
    if (ctx->pc == 0x1C3EF4u) {
        ctx->pc = 0x1C3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EF0u;
        // 0x1c3ef4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3EF8u;
        goto label_1c3ef8;
    }
    ctx->pc = 0x1C3EF0u;
    {
        const bool branch_taken_0x1c3ef0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EF0u;
        // 0x1c3ef4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ef0) {
            ctx->pc = 0x1C3F0Cu;
            goto label_1c3f0c;
        }
    }
    ctx->pc = 0x1C3EF8u;
label_1c3ef8:
    // 0x1c3ef8: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1c3ef8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c3efc:
    // 0x1c3efc: 0x0  nop
    ctx->pc = 0x1c3efcu;
    // NOP
label_1c3f00:
    // 0x1c3f00: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1c3f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c3f04:
    // 0x1c3f04: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c3f08:
    if (ctx->pc == 0x1C3F08u) {
        ctx->pc = 0x1C3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F04u;
        // 0x1c3f08: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F0Cu;
        goto label_1c3f0c;
    }
    ctx->pc = 0x1C3F04u;
    {
        const bool branch_taken_0x1c3f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F04u;
        // 0x1c3f08: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f04) {
            ctx->pc = 0x1C3F28u;
            goto label_1c3f28;
        }
    }
    ctx->pc = 0x1C3F0Cu;
label_1c3f0c:
    // 0x1c3f0c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1c3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1c3f10:
    // 0x1c3f10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c3f14:
    // 0x1c3f14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c3f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c3f18:
    // 0x1c3f18: 0x0  nop
    ctx->pc = 0x1c3f18u;
    // NOP
label_1c3f1c:
    // 0x1c3f1c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1c3f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c3f20:
    // 0x1c3f20: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1c3f20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1c3f24:
    // 0x1c3f24: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x1c3f24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_1c3f28:
    // 0x1c3f28: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1c3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1c3f2c:
    // 0x1c3f2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c3f30:
    // 0x1c3f30: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1c3f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c3f34:
    // 0x1c3f34: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1c3f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c3f38:
    // 0x1c3f38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c3f3c:
    // 0x1c3f3c: 0x46156300  add.s       $f12, $f12, $f21
    ctx->pc = 0x1c3f3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_1c3f40:
    // 0x1c3f40: 0xc0e70e2  jal         func_39C388
label_1c3f44:
    if (ctx->pc == 0x1C3F44u) {
        ctx->pc = 0x1C3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F40u;
        // 0x1c3f44: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F48u;
        goto label_1c3f48;
    }
    ctx->pc = 0x1C3F40u;
    SET_GPR_U32(ctx, 31, 0x1C3F48u);
    ctx->pc = 0x1C3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F40u;
    // 0x1c3f44: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C388u, 0x1C3F40u, 0x1C3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F48u;
label_1c3f48:
    // 0x1c3f48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c3f4c:
    // 0x1c3f4c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x1c3f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c3f50:
    // 0x1c3f50: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1c3f54:
    if (ctx->pc == 0x1C3F54u) {
        ctx->pc = 0x1C3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F50u;
        // 0x1c3f54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F58u;
        goto label_1c3f58;
    }
    ctx->pc = 0x1C3F50u;
    {
        const bool branch_taken_0x1c3f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F50u;
        // 0x1c3f54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f50) {
            ctx->pc = 0x1C3EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3ef0;
        }
    }
    ctx->pc = 0x1C3F58u;
label_1c3f58:
    // 0x1c3f58: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c3f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1c3f5c:
    // 0x1c3f5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c3f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c3f60:
    // 0x1c3f60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c3f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c3f64:
    // 0x1c3f64: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1c3f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f68:
    // 0x1c3f68: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1c3f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1c3f6c:
    // 0x1c3f6c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1c3f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1c3f70:
    // 0x1c3f70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c3f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1c3f74:
    // 0x1c3f74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c3f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f78:
    // 0x1c3f78: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1c3f7c:
    if (ctx->pc == 0x1C3F7Cu) {
        ctx->pc = 0x1C3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F78u;
        // 0x1c3f7c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F80u;
        goto label_1c3f80;
    }
    ctx->pc = 0x1C3F78u;
    {
        const bool branch_taken_0x1c3f78 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F78u;
        // 0x1c3f7c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f78) {
            ctx->pc = 0x1C3F94u;
            goto label_1c3f94;
        }
    }
    ctx->pc = 0x1C3F80u;
label_1c3f80:
    // 0x1c3f80: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1c3f80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c3f84:
    // 0x1c3f84: 0x0  nop
    ctx->pc = 0x1c3f84u;
    // NOP
label_1c3f88:
    // 0x1c3f88: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1c3f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c3f8c:
    // 0x1c3f8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c3f90:
    if (ctx->pc == 0x1C3F90u) {
        ctx->pc = 0x1C3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F8Cu;
        // 0x1c3f90: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F94u;
        goto label_1c3f94;
    }
    ctx->pc = 0x1C3F8Cu;
    {
        const bool branch_taken_0x1c3f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F8Cu;
        // 0x1c3f90: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f8c) {
            ctx->pc = 0x1C3FB0u;
            goto label_1c3fb0;
        }
    }
    ctx->pc = 0x1C3F94u;
label_1c3f94:
    // 0x1c3f94: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1c3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1c3f98:
    // 0x1c3f98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c3f9c:
    // 0x1c3f9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c3f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c3fa0:
    // 0x1c3fa0: 0x0  nop
    ctx->pc = 0x1c3fa0u;
    // NOP
label_1c3fa4:
    // 0x1c3fa4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1c3fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1c3fa8:
    // 0x1c3fa8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1c3fa8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1c3fac:
    // 0x1c3fac: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1c3facu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_1c3fb0:
    // 0x1c3fb0: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1c3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1c3fb4:
    // 0x1c3fb4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c3fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c3fb8:
    // 0x1c3fb8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1c3fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1c3fbc:
    // 0x1c3fbc: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1c3fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c3fc0:
    // 0x1c3fc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c3fc4:
    // 0x1c3fc4: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x1c3fc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_1c3fc8:
    // 0x1c3fc8: 0xc0e70e2  jal         func_39C388
label_1c3fcc:
    if (ctx->pc == 0x1C3FCCu) {
        ctx->pc = 0x1C3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FC8u;
        // 0x1c3fcc: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FD0u;
        goto label_1c3fd0;
    }
    ctx->pc = 0x1C3FC8u;
    SET_GPR_U32(ctx, 31, 0x1C3FD0u);
    ctx->pc = 0x1C3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FC8u;
    // 0x1c3fcc: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C388u, 0x1C3FC8u, 0x1C3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FD0u;
label_1c3fd0:
    // 0x1c3fd0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c3fd4:
    // 0x1c3fd4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1c3fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c3fd8:
    // 0x1c3fd8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1c3fdc:
    if (ctx->pc == 0x1C3FDCu) {
        ctx->pc = 0x1C3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FD8u;
        // 0x1c3fdc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FE0u;
        goto label_1c3fe0;
    }
    ctx->pc = 0x1C3FD8u;
    {
        const bool branch_taken_0x1c3fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FD8u;
        // 0x1c3fdc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fd8) {
            ctx->pc = 0x1C3F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3f78;
        }
    }
    ctx->pc = 0x1C3FE0u;
label_1c3fe0:
    // 0x1c3fe0: 0x3c01460c  lui         $at, 0x460C
    ctx->pc = 0x1c3fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17932 << 16));
label_1c3fe4:
    // 0x1c3fe4: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x1c3fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
label_1c3fe8:
    // 0x1c3fe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c3fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c3fec:
    // 0x1c3fec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c3fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c3ff0:
    // 0x1c3ff0: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1c3ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1c3ff4:
    // 0x1c3ff4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c3ff8:
    // 0x1c3ff8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1c3ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1c3ffc:
    // 0x1c3ffc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1c3ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1c4000:
    // 0x1c4000: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c4000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c4004:
    // 0x1c4004: 0xc0e70e2  jal         func_39C388
label_1c4008:
    if (ctx->pc == 0x1C4008u) {
        ctx->pc = 0x1C4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4004u;
        // 0x1c4008: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C400Cu;
        goto label_1c400c;
    }
    ctx->pc = 0x1C4004u;
    SET_GPR_U32(ctx, 31, 0x1C400Cu);
    ctx->pc = 0x1C4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4004u;
    // 0x1c4008: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C388u, 0x1C4004u, 0x1C400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C400Cu;
label_1c400c:
    // 0x1c400c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c400cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c4010:
    // 0x1c4010: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c4010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c4014:
    // 0x1c4014: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1c4014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c4018:
    // 0x1c4018: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c4018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c401c:
    // 0x1c401c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1c401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1c4020:
    // 0x1c4020: 0xc0e70e2  jal         func_39C388
label_1c4024:
    if (ctx->pc == 0x1C4024u) {
        ctx->pc = 0x1C4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4020u;
        // 0x1c4024: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4028u;
        goto label_1c4028;
    }
    ctx->pc = 0x1C4020u;
    SET_GPR_U32(ctx, 31, 0x1C4028u);
    ctx->pc = 0x1C4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4020u;
    // 0x1c4024: 0xae42004c  sw          $v0, 0x4C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C388u, 0x1C4020u, 0x1C4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4028u;
label_1c4028:
    // 0x1c4028: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c4028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c402c:
    // 0x1c402c: 0x24070084  addiu       $a3, $zero, 0x84
    ctx->pc = 0x1c402cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1c4030:
    // 0x1c4030: 0x8c66489c  lw          $a2, 0x489C($v1)
    ctx->pc = 0x1c4030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1c4034:
    // 0x1c4034: 0x26e491e0  addiu       $a0, $s7, -0x6E20
    ctx->pc = 0x1c4034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939104));
label_1c4038:
    // 0x1c4038: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x1c4038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
label_1c403c:
    // 0x1c403c: 0x94c556dc  lhu         $a1, 0x56DC($a2)
    ctx->pc = 0x1c403cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22236)));
label_1c4040:
    // 0x1c4040: 0xa71018  mult        $v0, $a1, $a3
    ctx->pc = 0x1c4040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c4044:
    // 0x1c4044: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1c4044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1c4048:
    // 0x1c4048: 0xc050fda  jal         func_143F68
label_1c404c:
    if (ctx->pc == 0x1C404Cu) {
        ctx->pc = 0x1C404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4048u;
        // 0x1c404c: 0x24a5150d  addiu       $a1, $a1, 0x150D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5389));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4050u;
        goto label_1c4050;
    }
    ctx->pc = 0x1C4048u;
    SET_GPR_U32(ctx, 31, 0x1C4050u);
    ctx->pc = 0x1C404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4048u;
    // 0x1c404c: 0x24a5150d  addiu       $a1, $a1, 0x150D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5389));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1C4048u, 0x1C4050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4050u;
label_1c4050:
    // 0x1c4050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4054:
    // 0x1c4054: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1c4054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1c4058:
    // 0x1c4058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c405c:
    // 0x1c405c: 0x24c65190  addiu       $a2, $a2, 0x5190
    ctx->pc = 0x1c405cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20880));
label_1c4060:
    // 0x1c4060: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1c4060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1c4064:
    // 0x1c4064: 0xc10ca04  jal         func_432810
label_1c4068:
    if (ctx->pc == 0x1C4068u) {
        ctx->pc = 0x1C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4064u;
        // 0x1c4068: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C406Cu;
        goto label_1c406c;
    }
    ctx->pc = 0x1C4064u;
    SET_GPR_U32(ctx, 31, 0x1C406Cu);
    ctx->pc = 0x1C4068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4064u;
    // 0x1c4068: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C4064u, 0x1C406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C406Cu;
label_1c406c:
    // 0x1c406c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c406cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c4070:
    // 0x1c4070: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c4070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c4074:
    // 0x1c4074: 0x8c62b788  lw          $v0, -0x4878($v1)
    ctx->pc = 0x1c4074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_1c4078:
    // 0x1c4078: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x1c4078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_1c407c:
    // 0x1c407c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c4080:
    // 0x1c4080: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c4080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c4084:
    // 0x1c4084: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c4084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c4088:
    // 0x1c4088: 0x40f809  jalr        $v0
label_1c408c:
    if (ctx->pc == 0x1C408Cu) {
        ctx->pc = 0x1C408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4088u;
        // 0x1c408c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4090u;
        goto label_1c4090;
    }
    ctx->pc = 0x1C4088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4090u);
        ctx->pc = 0x1C408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4088u;
        // 0x1c408c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4088u, 0x1C4090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4090u;
label_1c4090:
    // 0x1c4090: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c4094:
    if (ctx->pc == 0x1C4094u) {
        ctx->pc = 0x1C4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4090u;
        // 0x1c4094: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4098u;
        goto label_1c4098;
    }
    ctx->pc = 0x1C4090u;
    {
        const bool branch_taken_0x1c4090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4090u;
        // 0x1c4094: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4090) {
            ctx->pc = 0x1C40CCu;
            goto label_1c40cc;
        }
    }
    ctx->pc = 0x1C4098u;
label_1c4098:
    // 0x1c4098: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_1c409c:
    // 0x1c409c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c409cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1c40a0:
    // 0x1c40a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c40a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c40a4:
    // 0x1c40a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c40a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c40a8:
    // 0x1c40a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c40ac:
    // 0x1c40ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c40acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c40b0:
    // 0x1c40b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c40b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c40b4:
    // 0x1c40b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c40b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c40b8:
    // 0x1c40b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c40b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c40bc:
    // 0x1c40bc: 0xc062bb0  jal         func_18AEC0
label_1c40c0:
    if (ctx->pc == 0x1C40C0u) {
        ctx->pc = 0x1C40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40BCu;
        // 0x1c40c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40C4u;
        goto label_1c40c4;
    }
    ctx->pc = 0x1C40BCu;
    SET_GPR_U32(ctx, 31, 0x1C40C4u);
    ctx->pc = 0x1C40C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40BCu;
    // 0x1c40c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1C40BCu, 0x1C40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40C4u;
label_1c40c4:
    // 0x1c40c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c40c8:
    if (ctx->pc == 0x1C40C8u) {
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0xa6420094  sh          $v0, 0x94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 148), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40CCu;
        goto label_1c40cc;
    }
    ctx->pc = 0x1C40C4u;
    {
        const bool branch_taken_0x1c40c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0xa6420094  sh          $v0, 0x94($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 148), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40c4) {
            ctx->pc = 0x1C40D4u;
            goto label_1c40d4;
        }
    }
    ctx->pc = 0x1C40CCu;
label_1c40cc:
    // 0x1c40cc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c40d0:
    // 0x1c40d0: 0xa6420094  sh          $v0, 0x94($s2)
    ctx->pc = 0x1c40d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 148), (uint16_t)GPR_U32(ctx, 2));
label_1c40d4:
    // 0x1c40d4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c40d8:
    // 0x1c40d8: 0x26e491e0  addiu       $a0, $s7, -0x6E20
    ctx->pc = 0x1c40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939104));
label_1c40dc:
    // 0x1c40dc: 0xc050fda  jal         func_143F68
label_1c40e0:
    if (ctx->pc == 0x1C40E0u) {
        ctx->pc = 0x1C40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40DCu;
        // 0x1c40e0: 0x24a55198  addiu       $a1, $a1, 0x5198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40E4u;
        goto label_1c40e4;
    }
    ctx->pc = 0x1C40DCu;
    SET_GPR_U32(ctx, 31, 0x1C40E4u);
    ctx->pc = 0x1C40E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C40DCu;
    // 0x1c40e0: 0x24a55198  addiu       $a1, $a1, 0x5198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1C40DCu, 0x1C40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40E4u;
label_1c40e4:
    // 0x1c40e4: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1c40e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1c40e8:
    // 0x1c40e8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1c40e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1c40ec:
    // 0x1c40ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c40ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c40f0:
    // 0x1c40f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1c40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c40f4:
    // 0x1c40f4: 0x8ec4cd4c  lw          $a0, -0x32B4($s6)
    ctx->pc = 0x1c40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
label_1c40f8:
    // 0x1c40f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c40f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c40fc:
    // 0x1c40fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c4100:
    // 0x1c4100: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c4100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4104:
    // 0x1c4104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4108:
    // 0x1c4108: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c4108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c410c:
    // 0x1c410c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c410cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4110:
    // 0x1c4110: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c4110u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4114:
    // 0x1c4114: 0xc062bb0  jal         func_18AEC0
label_1c4118:
    if (ctx->pc == 0x1C4118u) {
        ctx->pc = 0x1C4118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4114u;
        // 0x1c4118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C411Cu;
        goto label_1c411c;
    }
    ctx->pc = 0x1C4114u;
    SET_GPR_U32(ctx, 31, 0x1C411Cu);
    ctx->pc = 0x1C4118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4114u;
    // 0x1c4118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1C4114u, 0x1C411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C411Cu;
label_1c411c:
    // 0x1c411c: 0xa6420096  sh          $v0, 0x96($s2)
    ctx->pc = 0x1c411cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 150), (uint16_t)GPR_U32(ctx, 2));
label_1c4120:
    // 0x1c4120: 0x27c316c0  addiu       $v1, $fp, 0x16C0
    ctx->pc = 0x1c4120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 5824));
label_1c4124:
    // 0x1c4124: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c4124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1c4128:
    // 0x1c4128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c412c:
    // 0x1c412c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1c412cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4130:
    // 0x1c4130: 0x24a51780  addiu       $a1, $a1, 0x1780
    ctx->pc = 0x1c4130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
label_1c4134:
    // 0x1c4134: 0x7e420070  sq          $v0, 0x70($s2)
    ctx->pc = 0x1c4134u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 2));
label_1c4138:
    // 0x1c4138: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1c4138u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c413c:
    // 0x1c413c: 0xc0710e2  jal         func_1C4388
label_1c4140:
    if (ctx->pc == 0x1C4140u) {
        ctx->pc = 0x1C4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C413Cu;
        // 0x1c4140: 0x7ea30010  sq          $v1, 0x10($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4144u;
        goto label_1c4144;
    }
    ctx->pc = 0x1C413Cu;
    SET_GPR_U32(ctx, 31, 0x1C4144u);
    ctx->pc = 0x1C4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C413Cu;
    // 0x1c4140: 0x7ea30010  sq          $v1, 0x10($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4388u, 0x1C413Cu, 0x1C4144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4144u;
label_1c4144:
    // 0x1c4144: 0xc0710ba  jal         func_1C42E8
label_1c4148:
    if (ctx->pc == 0x1C4148u) {
        ctx->pc = 0x1C4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4144u;
        // 0x1c4148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C414Cu;
        goto label_1c414c;
    }
    ctx->pc = 0x1C4144u;
    SET_GPR_U32(ctx, 31, 0x1C414Cu);
    ctx->pc = 0x1C4148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4144u;
    // 0x1c4148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42E8u, 0x1C4144u, 0x1C414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C414Cu;
label_1c414c:
    // 0x1c414c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c4150:
    // 0x1c4150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c4154:
    // 0x1c4154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4158:
    // 0x1c4158: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c4158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1c415c:
    // 0x1c415c: 0xe6402920  swc1        $f0, 0x2920($s2)
    ctx->pc = 0x1c415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 10528), bits); }
label_1c4160:
    // 0x1c4160: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x1c4160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_1c4164:
    // 0x1c4164: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1c4164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1c4168:
    // 0x1c4168: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1c4168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c416c:
    // 0x1c416c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1c416cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c4170:
    // 0x1c4170: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1c4170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c4174:
    // 0x1c4174: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1c4174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c4178:
    // 0x1c4178: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1c4178u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c417c:
    // 0x1c417c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1c417cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c4180:
    // 0x1c4180: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c4180u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c4184:
    // 0x1c4184: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1c4184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4188:
    // 0x1c4188: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c4188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c418c:
    // 0x1c418c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x1c418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c4190:
    // 0x1c4190: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1c4190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c4194:
    // 0x1c4194: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c4194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c4198:
    // 0x1c4198: 0x3e00008  jr          $ra
label_1c419c:
    if (ctx->pc == 0x1C419Cu) {
        ctx->pc = 0x1C419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4198u;
        // 0x1c419c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C41A0u;
        goto label_fallthrough_0x1c4198;
    }
    ctx->pc = 0x1C4198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4198u;
        // 0x1c419c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c4198:
    ctx->pc = 0x1C41A0u;
}
