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

// Function: sub_003D8DA0
// Address: 0x3d8da0 - 0x3d9178
void sub_003D8DA0_0x3d8da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8DA0_0x3d8da0");
#endif

    switch (ctx->pc) {
        case 0x3d8da0u: goto label_3d8da0;
        case 0x3d8da4u: goto label_3d8da4;
        case 0x3d8da8u: goto label_3d8da8;
        case 0x3d8dacu: goto label_3d8dac;
        case 0x3d8db0u: goto label_3d8db0;
        case 0x3d8db4u: goto label_3d8db4;
        case 0x3d8db8u: goto label_3d8db8;
        case 0x3d8dbcu: goto label_3d8dbc;
        case 0x3d8dc0u: goto label_3d8dc0;
        case 0x3d8dc4u: goto label_3d8dc4;
        case 0x3d8dc8u: goto label_3d8dc8;
        case 0x3d8dccu: goto label_3d8dcc;
        case 0x3d8dd0u: goto label_3d8dd0;
        case 0x3d8dd4u: goto label_3d8dd4;
        case 0x3d8dd8u: goto label_3d8dd8;
        case 0x3d8ddcu: goto label_3d8ddc;
        case 0x3d8de0u: goto label_3d8de0;
        case 0x3d8de4u: goto label_3d8de4;
        case 0x3d8de8u: goto label_3d8de8;
        case 0x3d8decu: goto label_3d8dec;
        case 0x3d8df0u: goto label_3d8df0;
        case 0x3d8df4u: goto label_3d8df4;
        case 0x3d8df8u: goto label_3d8df8;
        case 0x3d8dfcu: goto label_3d8dfc;
        case 0x3d8e00u: goto label_3d8e00;
        case 0x3d8e04u: goto label_3d8e04;
        case 0x3d8e08u: goto label_3d8e08;
        case 0x3d8e0cu: goto label_3d8e0c;
        case 0x3d8e10u: goto label_3d8e10;
        case 0x3d8e14u: goto label_3d8e14;
        case 0x3d8e18u: goto label_3d8e18;
        case 0x3d8e1cu: goto label_3d8e1c;
        case 0x3d8e20u: goto label_3d8e20;
        case 0x3d8e24u: goto label_3d8e24;
        case 0x3d8e28u: goto label_3d8e28;
        case 0x3d8e2cu: goto label_3d8e2c;
        case 0x3d8e30u: goto label_3d8e30;
        case 0x3d8e34u: goto label_3d8e34;
        case 0x3d8e38u: goto label_3d8e38;
        case 0x3d8e3cu: goto label_3d8e3c;
        case 0x3d8e40u: goto label_3d8e40;
        case 0x3d8e44u: goto label_3d8e44;
        case 0x3d8e48u: goto label_3d8e48;
        case 0x3d8e4cu: goto label_3d8e4c;
        case 0x3d8e50u: goto label_3d8e50;
        case 0x3d8e54u: goto label_3d8e54;
        case 0x3d8e58u: goto label_3d8e58;
        case 0x3d8e5cu: goto label_3d8e5c;
        case 0x3d8e60u: goto label_3d8e60;
        case 0x3d8e64u: goto label_3d8e64;
        case 0x3d8e68u: goto label_3d8e68;
        case 0x3d8e6cu: goto label_3d8e6c;
        case 0x3d8e70u: goto label_3d8e70;
        case 0x3d8e74u: goto label_3d8e74;
        case 0x3d8e78u: goto label_3d8e78;
        case 0x3d8e7cu: goto label_3d8e7c;
        case 0x3d8e80u: goto label_3d8e80;
        case 0x3d8e84u: goto label_3d8e84;
        case 0x3d8e88u: goto label_3d8e88;
        case 0x3d8e8cu: goto label_3d8e8c;
        case 0x3d8e90u: goto label_3d8e90;
        case 0x3d8e94u: goto label_3d8e94;
        case 0x3d8e98u: goto label_3d8e98;
        case 0x3d8e9cu: goto label_3d8e9c;
        case 0x3d8ea0u: goto label_3d8ea0;
        case 0x3d8ea4u: goto label_3d8ea4;
        case 0x3d8ea8u: goto label_3d8ea8;
        case 0x3d8eacu: goto label_3d8eac;
        case 0x3d8eb0u: goto label_3d8eb0;
        case 0x3d8eb4u: goto label_3d8eb4;
        case 0x3d8eb8u: goto label_3d8eb8;
        case 0x3d8ebcu: goto label_3d8ebc;
        case 0x3d8ec0u: goto label_3d8ec0;
        case 0x3d8ec4u: goto label_3d8ec4;
        case 0x3d8ec8u: goto label_3d8ec8;
        case 0x3d8eccu: goto label_3d8ecc;
        case 0x3d8ed0u: goto label_3d8ed0;
        case 0x3d8ed4u: goto label_3d8ed4;
        case 0x3d8ed8u: goto label_3d8ed8;
        case 0x3d8edcu: goto label_3d8edc;
        case 0x3d8ee0u: goto label_3d8ee0;
        case 0x3d8ee4u: goto label_3d8ee4;
        case 0x3d8ee8u: goto label_3d8ee8;
        case 0x3d8eecu: goto label_3d8eec;
        case 0x3d8ef0u: goto label_3d8ef0;
        case 0x3d8ef4u: goto label_3d8ef4;
        case 0x3d8ef8u: goto label_3d8ef8;
        case 0x3d8efcu: goto label_3d8efc;
        case 0x3d8f00u: goto label_3d8f00;
        case 0x3d8f04u: goto label_3d8f04;
        case 0x3d8f08u: goto label_3d8f08;
        case 0x3d8f0cu: goto label_3d8f0c;
        case 0x3d8f10u: goto label_3d8f10;
        case 0x3d8f14u: goto label_3d8f14;
        case 0x3d8f18u: goto label_3d8f18;
        case 0x3d8f1cu: goto label_3d8f1c;
        case 0x3d8f20u: goto label_3d8f20;
        case 0x3d8f24u: goto label_3d8f24;
        case 0x3d8f28u: goto label_3d8f28;
        case 0x3d8f2cu: goto label_3d8f2c;
        case 0x3d8f30u: goto label_3d8f30;
        case 0x3d8f34u: goto label_3d8f34;
        case 0x3d8f38u: goto label_3d8f38;
        case 0x3d8f3cu: goto label_3d8f3c;
        case 0x3d8f40u: goto label_3d8f40;
        case 0x3d8f44u: goto label_3d8f44;
        case 0x3d8f48u: goto label_3d8f48;
        case 0x3d8f4cu: goto label_3d8f4c;
        case 0x3d8f50u: goto label_3d8f50;
        case 0x3d8f54u: goto label_3d8f54;
        case 0x3d8f58u: goto label_3d8f58;
        case 0x3d8f5cu: goto label_3d8f5c;
        case 0x3d8f60u: goto label_3d8f60;
        case 0x3d8f64u: goto label_3d8f64;
        case 0x3d8f68u: goto label_3d8f68;
        case 0x3d8f6cu: goto label_3d8f6c;
        case 0x3d8f70u: goto label_3d8f70;
        case 0x3d8f74u: goto label_3d8f74;
        case 0x3d8f78u: goto label_3d8f78;
        case 0x3d8f7cu: goto label_3d8f7c;
        case 0x3d8f80u: goto label_3d8f80;
        case 0x3d8f84u: goto label_3d8f84;
        case 0x3d8f88u: goto label_3d8f88;
        case 0x3d8f8cu: goto label_3d8f8c;
        case 0x3d8f90u: goto label_3d8f90;
        case 0x3d8f94u: goto label_3d8f94;
        case 0x3d8f98u: goto label_3d8f98;
        case 0x3d8f9cu: goto label_3d8f9c;
        case 0x3d8fa0u: goto label_3d8fa0;
        case 0x3d8fa4u: goto label_3d8fa4;
        case 0x3d8fa8u: goto label_3d8fa8;
        case 0x3d8facu: goto label_3d8fac;
        case 0x3d8fb0u: goto label_3d8fb0;
        case 0x3d8fb4u: goto label_3d8fb4;
        case 0x3d8fb8u: goto label_3d8fb8;
        case 0x3d8fbcu: goto label_3d8fbc;
        case 0x3d8fc0u: goto label_3d8fc0;
        case 0x3d8fc4u: goto label_3d8fc4;
        case 0x3d8fc8u: goto label_3d8fc8;
        case 0x3d8fccu: goto label_3d8fcc;
        case 0x3d8fd0u: goto label_3d8fd0;
        case 0x3d8fd4u: goto label_3d8fd4;
        case 0x3d8fd8u: goto label_3d8fd8;
        case 0x3d8fdcu: goto label_3d8fdc;
        case 0x3d8fe0u: goto label_3d8fe0;
        case 0x3d8fe4u: goto label_3d8fe4;
        case 0x3d8fe8u: goto label_3d8fe8;
        case 0x3d8fecu: goto label_3d8fec;
        case 0x3d8ff0u: goto label_3d8ff0;
        case 0x3d8ff4u: goto label_3d8ff4;
        case 0x3d8ff8u: goto label_3d8ff8;
        case 0x3d8ffcu: goto label_3d8ffc;
        case 0x3d9000u: goto label_3d9000;
        case 0x3d9004u: goto label_3d9004;
        case 0x3d9008u: goto label_3d9008;
        case 0x3d900cu: goto label_3d900c;
        case 0x3d9010u: goto label_3d9010;
        case 0x3d9014u: goto label_3d9014;
        case 0x3d9018u: goto label_3d9018;
        case 0x3d901cu: goto label_3d901c;
        case 0x3d9020u: goto label_3d9020;
        case 0x3d9024u: goto label_3d9024;
        case 0x3d9028u: goto label_3d9028;
        case 0x3d902cu: goto label_3d902c;
        case 0x3d9030u: goto label_3d9030;
        case 0x3d9034u: goto label_3d9034;
        case 0x3d9038u: goto label_3d9038;
        case 0x3d903cu: goto label_3d903c;
        case 0x3d9040u: goto label_3d9040;
        case 0x3d9044u: goto label_3d9044;
        case 0x3d9048u: goto label_3d9048;
        case 0x3d904cu: goto label_3d904c;
        case 0x3d9050u: goto label_3d9050;
        case 0x3d9054u: goto label_3d9054;
        case 0x3d9058u: goto label_3d9058;
        case 0x3d905cu: goto label_3d905c;
        case 0x3d9060u: goto label_3d9060;
        case 0x3d9064u: goto label_3d9064;
        case 0x3d9068u: goto label_3d9068;
        case 0x3d906cu: goto label_3d906c;
        case 0x3d9070u: goto label_3d9070;
        case 0x3d9074u: goto label_3d9074;
        case 0x3d9078u: goto label_3d9078;
        case 0x3d907cu: goto label_3d907c;
        case 0x3d9080u: goto label_3d9080;
        case 0x3d9084u: goto label_3d9084;
        case 0x3d9088u: goto label_3d9088;
        case 0x3d908cu: goto label_3d908c;
        case 0x3d9090u: goto label_3d9090;
        case 0x3d9094u: goto label_3d9094;
        case 0x3d9098u: goto label_3d9098;
        case 0x3d909cu: goto label_3d909c;
        case 0x3d90a0u: goto label_3d90a0;
        case 0x3d90a4u: goto label_3d90a4;
        case 0x3d90a8u: goto label_3d90a8;
        case 0x3d90acu: goto label_3d90ac;
        case 0x3d90b0u: goto label_3d90b0;
        case 0x3d90b4u: goto label_3d90b4;
        case 0x3d90b8u: goto label_3d90b8;
        case 0x3d90bcu: goto label_3d90bc;
        case 0x3d90c0u: goto label_3d90c0;
        case 0x3d90c4u: goto label_3d90c4;
        case 0x3d90c8u: goto label_3d90c8;
        case 0x3d90ccu: goto label_3d90cc;
        case 0x3d90d0u: goto label_3d90d0;
        case 0x3d90d4u: goto label_3d90d4;
        case 0x3d90d8u: goto label_3d90d8;
        case 0x3d90dcu: goto label_3d90dc;
        case 0x3d90e0u: goto label_3d90e0;
        case 0x3d90e4u: goto label_3d90e4;
        case 0x3d90e8u: goto label_3d90e8;
        case 0x3d90ecu: goto label_3d90ec;
        case 0x3d90f0u: goto label_3d90f0;
        case 0x3d90f4u: goto label_3d90f4;
        case 0x3d90f8u: goto label_3d90f8;
        case 0x3d90fcu: goto label_3d90fc;
        case 0x3d9100u: goto label_3d9100;
        case 0x3d9104u: goto label_3d9104;
        case 0x3d9108u: goto label_3d9108;
        case 0x3d910cu: goto label_3d910c;
        case 0x3d9110u: goto label_3d9110;
        case 0x3d9114u: goto label_3d9114;
        case 0x3d9118u: goto label_3d9118;
        case 0x3d911cu: goto label_3d911c;
        case 0x3d9120u: goto label_3d9120;
        case 0x3d9124u: goto label_3d9124;
        case 0x3d9128u: goto label_3d9128;
        case 0x3d912cu: goto label_3d912c;
        case 0x3d9130u: goto label_3d9130;
        case 0x3d9134u: goto label_3d9134;
        case 0x3d9138u: goto label_3d9138;
        case 0x3d913cu: goto label_3d913c;
        case 0x3d9140u: goto label_3d9140;
        case 0x3d9144u: goto label_3d9144;
        case 0x3d9148u: goto label_3d9148;
        case 0x3d914cu: goto label_3d914c;
        case 0x3d9150u: goto label_3d9150;
        case 0x3d9154u: goto label_3d9154;
        case 0x3d9158u: goto label_3d9158;
        case 0x3d915cu: goto label_3d915c;
        case 0x3d9160u: goto label_3d9160;
        case 0x3d9164u: goto label_3d9164;
        case 0x3d9168u: goto label_3d9168;
        case 0x3d916cu: goto label_3d916c;
        case 0x3d9170u: goto label_3d9170;
        case 0x3d9174u: goto label_3d9174;
        default: break;
    }

    ctx->pc = 0x3d8da0u;

label_3d8da0:
    // 0x3d8da0: 0x27bdf660  addiu       $sp, $sp, -0x9A0
    ctx->pc = 0x3d8da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964832));
label_3d8da4:
    // 0x3d8da4: 0x7fb40930  sq          $s4, 0x930($sp)
    ctx->pc = 0x3d8da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 20));
label_3d8da8:
    // 0x3d8da8: 0x7fb50920  sq          $s5, 0x920($sp)
    ctx->pc = 0x3d8da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 21));
label_3d8dac:
    // 0x3d8dac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d8dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8db0:
    // 0x3d8db0: 0x7fb00970  sq          $s0, 0x970($sp)
    ctx->pc = 0x3d8db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 16));
label_3d8db4:
    // 0x3d8db4: 0x7fb10960  sq          $s1, 0x960($sp)
    ctx->pc = 0x3d8db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 17));
label_3d8db8:
    // 0x3d8db8: 0x7fb20950  sq          $s2, 0x950($sp)
    ctx->pc = 0x3d8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 18));
label_3d8dbc:
    // 0x3d8dbc: 0x7fb30940  sq          $s3, 0x940($sp)
    ctx->pc = 0x3d8dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 19));
label_3d8dc0:
    // 0x3d8dc0: 0xffbf0910  sd          $ra, 0x910($sp)
    ctx->pc = 0x3d8dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2320), GPR_U64(ctx, 31));
label_3d8dc4:
    // 0x3d8dc4: 0xe7b70998  swc1        $f23, 0x998($sp)
    ctx->pc = 0x3d8dc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2456), bits); }
label_3d8dc8:
    // 0x3d8dc8: 0xe7b60990  swc1        $f22, 0x990($sp)
    ctx->pc = 0x3d8dc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2448), bits); }
label_3d8dcc:
    // 0x3d8dcc: 0xe7b50988  swc1        $f21, 0x988($sp)
    ctx->pc = 0x3d8dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2440), bits); }
label_3d8dd0:
    // 0x3d8dd0: 0xe7b40980  swc1        $f20, 0x980($sp)
    ctx->pc = 0x3d8dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2432), bits); }
label_3d8dd4:
    // 0x3d8dd4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3d8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d8dd8:
    // 0x3d8dd8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8ddc:
    // 0x3d8ddc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8de0:
    // 0x3d8de0: 0x40f809  jalr        $v0
label_3d8de4:
    if (ctx->pc == 0x3D8DE4u) {
        ctx->pc = 0x3D8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8DE0u;
        // 0x3d8de4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8DE8u;
        goto label_3d8de8;
    }
    ctx->pc = 0x3D8DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8DE8u);
        ctx->pc = 0x3D8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8DE0u;
        // 0x3d8de4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8DE0u, 0x3D8DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8DE8u;
label_3d8de8:
    // 0x3d8de8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d8de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8dec:
    // 0x3d8dec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d8decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d8df0:
    // 0x3d8df0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d8df4:
    // 0x3d8df4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d8df8:
    // 0x3d8df8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d8dfc:
    // 0x3d8dfc: 0x0  nop
    ctx->pc = 0x3d8dfcu;
    // NOP
label_3d8e00:
    // 0x3d8e00: 0x0  nop
    ctx->pc = 0x3d8e00u;
    // NOP
label_3d8e04:
    // 0x3d8e04: 0x0  nop
    ctx->pc = 0x3d8e04u;
    // NOP
label_3d8e08:
    // 0x3d8e08: 0x0  nop
    ctx->pc = 0x3d8e08u;
    // NOP
label_3d8e0c:
    // 0x3d8e0c: 0x0  nop
    ctx->pc = 0x3d8e0cu;
    // NOP
label_3d8e10:
    // 0x3d8e10: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d8e14:
    if (ctx->pc == 0x3D8E14u) {
        ctx->pc = 0x3D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E10u;
        // 0x3d8e14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8E18u;
        goto label_3d8e18;
    }
    ctx->pc = 0x3D8E10u;
    {
        const bool branch_taken_0x3d8e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E10u;
        // 0x3d8e14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e10) {
            ctx->pc = 0x3D8E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8e00;
        }
    }
    ctx->pc = 0x3D8E18u;
label_3d8e18:
    // 0x3d8e18: 0xc138ddc  jal         func_4E3770
label_3d8e1c:
    if (ctx->pc == 0x3D8E1Cu) {
        ctx->pc = 0x3D8E20u;
        goto label_3d8e20;
    }
    ctx->pc = 0x3D8E18u;
    SET_GPR_U32(ctx, 31, 0x3D8E20u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D8E18u, 0x3D8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E20u;
label_3d8e20:
    // 0x3d8e20: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x3d8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3d8e24:
    // 0x3d8e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d8e28:
    // 0x3d8e28: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_3d8e2c:
    if (ctx->pc == 0x3D8E2Cu) {
        ctx->pc = 0x3D8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E28u;
        // 0x3d8e2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8E30u;
        goto label_3d8e30;
    }
    ctx->pc = 0x3D8E28u;
    {
        const bool branch_taken_0x3d8e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E28u;
        // 0x3d8e2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e28) {
            ctx->pc = 0x3D8E6Cu;
            goto label_3d8e6c;
        }
    }
    ctx->pc = 0x3D8E30u;
label_3d8e30:
    // 0x3d8e30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d8e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d8e34:
    // 0x3d8e34: 0xc0e858c  jal         func_3A1630
label_3d8e38:
    if (ctx->pc == 0x3D8E38u) {
        ctx->pc = 0x3D8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E34u;
        // 0x3d8e38: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8E3Cu;
        goto label_3d8e3c;
    }
    ctx->pc = 0x3D8E34u;
    SET_GPR_U32(ctx, 31, 0x3D8E3Cu);
    ctx->pc = 0x3D8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8E34u;
    // 0x3d8e38: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8E34u, 0x3D8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E3Cu;
label_3d8e3c:
    // 0x3d8e3c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3d8e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3d8e40:
    // 0x3d8e40: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3d8e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3d8e44:
    // 0x3d8e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8e48:
    // 0x3d8e48: 0x3c02fafe  lui         $v0, 0xFAFE
    ctx->pc = 0x3d8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64254 << 16));
label_3d8e4c:
    // 0x3d8e4c: 0x3c03fafe  lui         $v1, 0xFAFE
    ctx->pc = 0x3d8e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64254 << 16));
label_3d8e50:
    // 0x3d8e50: 0x3442c9ff  ori         $v0, $v0, 0xC9FF
    ctx->pc = 0x3d8e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51711);
label_3d8e54:
    // 0x3d8e54: 0x3463c920  ori         $v1, $v1, 0xC920
    ctx->pc = 0x3d8e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51488);
label_3d8e58:
    // 0x3d8e58: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x3d8e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_3d8e5c:
    // 0x3d8e5c: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x3d8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
label_3d8e60:
    // 0x3d8e60: 0xae8300b4  sw          $v1, 0xB4($s4)
    ctx->pc = 0x3d8e60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 3));
label_3d8e64:
    // 0x3d8e64: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x3d8e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3d8e68:
    // 0x3d8e68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d8e6c:
    // 0x3d8e6c: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
label_3d8e70:
    if (ctx->pc == 0x3D8E70u) {
        ctx->pc = 0x3D8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E6Cu;
        // 0x3d8e70: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8E74u;
        goto label_3d8e74;
    }
    ctx->pc = 0x3D8E6Cu;
    {
        const bool branch_taken_0x3d8e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E6Cu;
        // 0x3d8e70: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8e6c) {
            ctx->pc = 0x3D9134u;
            goto label_3d9134;
        }
    }
    ctx->pc = 0x3D8E74u;
label_3d8e74:
    // 0x3d8e74: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3d8e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d8e78:
    // 0x3d8e78: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3d8e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3d8e7c:
    // 0x3d8e7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3d8e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3d8e80:
    // 0x3d8e80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d8e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d8e84:
    // 0x3d8e84: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d8e88:
    // 0x3d8e88: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3d8e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3d8e8c:
    // 0x3d8e8c: 0x342104f7  ori         $at, $at, 0x4F7
    ctx->pc = 0x3d8e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1271);
label_3d8e90:
    // 0x3d8e90: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d8e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d8e94:
    // 0x3d8e94: 0xc0cd518  jal         func_335460
label_3d8e98:
    if (ctx->pc == 0x3D8E98u) {
        ctx->pc = 0x3D8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8E94u;
        // 0x3d8e98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8E9Cu;
        goto label_3d8e9c;
    }
    ctx->pc = 0x3D8E94u;
    SET_GPR_U32(ctx, 31, 0x3D8E9Cu);
    ctx->pc = 0x3D8E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8E94u;
    // 0x3d8e98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D8E94u, 0x3D8E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8E9Cu;
label_3d8e9c:
    // 0x3d8e9c: 0xe7b50440  swc1        $f21, 0x440($sp)
    ctx->pc = 0x3d8e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3d8ea0:
    // 0x3d8ea0: 0x27a30440  addiu       $v1, $sp, 0x440
    ctx->pc = 0x3d8ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d8ea4:
    // 0x3d8ea4: 0xe7b50444  swc1        $f21, 0x444($sp)
    ctx->pc = 0x3d8ea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3d8ea8:
    // 0x3d8ea8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3d8ea8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3d8eac:
    // 0x3d8eac: 0xe476000c  swc1        $f22, 0xC($v1)
    ctx->pc = 0x3d8eacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3d8eb0:
    // 0x3d8eb0: 0xe4760008  swc1        $f22, 0x8($v1)
    ctx->pc = 0x3d8eb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3d8eb4:
    // 0x3d8eb4: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3d8eb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d8eb8:
    // 0x3d8eb8: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d8ebc:
    // 0x3d8ebc: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x3d8ebcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_3d8ec0:
    // 0x3d8ec0: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d8ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d8ec4:
    // 0x3d8ec4: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3d8ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3d8ec8:
    // 0x3d8ec8: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3d8ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3d8ecc:
    // 0x3d8ecc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d8eccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d8ed0:
    // 0x3d8ed0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d8ed0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d8ed4:
    // 0x3d8ed4: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3d8ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8ed8:
    // 0x3d8ed8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d8ed8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d8edc:
    // 0x3d8edc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d8edcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d8ee0:
    // 0x3d8ee0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d8ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8ee4:
    // 0x3d8ee4: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3d8ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d8ee8:
    // 0x3d8ee8: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3d8ee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8eec:
    // 0x3d8eec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d8eecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8ef0:
    // 0x3d8ef0: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3d8ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8ef4:
    // 0x3d8ef4: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3d8ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8ef8:
    // 0x3d8ef8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d8ef8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d8efc:
    // 0x3d8efc: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d8efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d8f00:
    // 0x3d8f00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3d8f00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3d8f04:
    // 0x3d8f04: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3d8f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3d8f08:
    // 0x3d8f08: 0x7fa204a0  sq          $v0, 0x4A0($sp)
    ctx->pc = 0x3d8f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 2));
label_3d8f0c:
    // 0x3d8f0c: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d8f10:
    // 0x3d8f10: 0xc12e310  jal         func_4B8C40
label_3d8f14:
    if (ctx->pc == 0x3D8F14u) {
        ctx->pc = 0x3D8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8F10u;
        // 0x3d8f14: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8F18u;
        goto label_3d8f18;
    }
    ctx->pc = 0x3D8F10u;
    SET_GPR_U32(ctx, 31, 0x3D8F18u);
    ctx->pc = 0x3D8F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8F10u;
    // 0x3d8f14: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3D8F10u, 0x3D8F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8F18u;
label_3d8f18:
    // 0x3d8f18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3d8f18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3d8f1c:
    // 0x3d8f1c: 0xc12e29c  jal         func_4B8A70
label_3d8f20:
    if (ctx->pc == 0x3D8F20u) {
        ctx->pc = 0x3D8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8F1Cu;
        // 0x3d8f20: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8F24u;
        goto label_3d8f24;
    }
    ctx->pc = 0x3D8F1Cu;
    SET_GPR_U32(ctx, 31, 0x3D8F24u);
    ctx->pc = 0x3D8F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8F1Cu;
    // 0x3d8f20: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3D8F1Cu, 0x3D8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8F24u;
label_3d8f24:
    // 0x3d8f24: 0xe7b40450  swc1        $f20, 0x450($sp)
    ctx->pc = 0x3d8f24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3d8f28:
    // 0x3d8f28: 0xe7a0045c  swc1        $f0, 0x45C($sp)
    ctx->pc = 0x3d8f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1116), bits); }
label_3d8f2c:
    // 0x3d8f2c: 0xe7b50454  swc1        $f21, 0x454($sp)
    ctx->pc = 0x3d8f2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3d8f30:
    // 0x3d8f30: 0xe7b50458  swc1        $f21, 0x458($sp)
    ctx->pc = 0x3d8f30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3d8f34:
    // 0x3d8f34: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3d8f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d8f38:
    // 0x3d8f38: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3d8f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d8f3c:
    // 0x3d8f3c: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d8f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d8f40:
    // 0x3d8f40: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d8f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d8f44:
    // 0x3d8f44: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3d8f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3d8f48:
    // 0x3d8f48: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d8f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d8f4c:
    // 0x3d8f4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d8f4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d8f50:
    // 0x3d8f50: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3d8f50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8f54:
    // 0x3d8f54: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d8f54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d8f58:
    // 0x3d8f58: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d8f58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d8f5c:
    // 0x3d8f5c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d8f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8f60:
    // 0x3d8f60: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3d8f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d8f64:
    // 0x3d8f64: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3d8f64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8f68:
    // 0x3d8f68: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d8f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8f6c:
    // 0x3d8f6c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3d8f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8f70:
    // 0x3d8f70: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3d8f70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d8f74:
    // 0x3d8f74: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d8f74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d8f78:
    // 0x3d8f78: 0x7a840010  lq          $a0, 0x10($s4)
    ctx->pc = 0x3d8f78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_3d8f7c:
    // 0x3d8f7c: 0x27b104b0  addiu       $s1, $sp, 0x4B0
    ctx->pc = 0x3d8f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_3d8f80:
    // 0x3d8f80: 0x27b20420  addiu       $s2, $sp, 0x420
    ctx->pc = 0x3d8f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d8f84:
    // 0x3d8f84: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d8f84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d8f88:
    // 0x3d8f88: 0x7fa40420  sq          $a0, 0x420($sp)
    ctx->pc = 0x3d8f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 4));
label_3d8f8c:
    // 0x3d8f8c: 0x261050e0  addiu       $s0, $s0, 0x50E0
    ctx->pc = 0x3d8f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20704));
label_3d8f90:
    // 0x3d8f90: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3d8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3d8f94:
    // 0x3d8f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8f98:
    // 0x3d8f98: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x3d8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
label_3d8f9c:
    // 0x3d8f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d8f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d8fa0:
    // 0x3d8fa0: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x3d8fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
label_3d8fa4:
    // 0x3d8fa4: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x3d8fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d8fa8:
    // 0x3d8fa8: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3d8fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3d8fac:
    // 0x3d8fac: 0xc0e9f84  jal         func_3A7E10
label_3d8fb0:
    if (ctx->pc == 0x3D8FB0u) {
        ctx->pc = 0x3D8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FACu;
        // 0x3d8fb0: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8FB4u;
        goto label_3d8fb4;
    }
    ctx->pc = 0x3D8FACu;
    SET_GPR_U32(ctx, 31, 0x3D8FB4u);
    ctx->pc = 0x3D8FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8FACu;
    // 0x3d8fb0: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3D8FACu, 0x3D8FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8FB4u;
label_3d8fb4:
    // 0x3d8fb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d8fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8fb8:
    // 0x3d8fb8: 0xc0f15bc  jal         func_3C56F0
label_3d8fbc:
    if (ctx->pc == 0x3D8FBCu) {
        ctx->pc = 0x3D8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FB8u;
        // 0x3d8fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8FC0u;
        goto label_3d8fc0;
    }
    ctx->pc = 0x3D8FB8u;
    SET_GPR_U32(ctx, 31, 0x3D8FC0u);
    ctx->pc = 0x3D8FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8FB8u;
    // 0x3d8fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D8FB8u, 0x3D8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8FC0u;
label_3d8fc0:
    // 0x3d8fc0: 0xe7b6045c  swc1        $f22, 0x45C($sp)
    ctx->pc = 0x3d8fc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1116), bits); }
label_3d8fc4:
    // 0x3d8fc4: 0xe7b60450  swc1        $f22, 0x450($sp)
    ctx->pc = 0x3d8fc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3d8fc8:
    // 0x3d8fc8: 0xe7b50454  swc1        $f21, 0x454($sp)
    ctx->pc = 0x3d8fc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1108), bits); }
label_3d8fcc:
    // 0x3d8fcc: 0xe7b50458  swc1        $f21, 0x458($sp)
    ctx->pc = 0x3d8fccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3d8fd0:
    // 0x3d8fd0: 0x7ba30410  lq          $v1, 0x410($sp)
    ctx->pc = 0x3d8fd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3d8fd4:
    // 0x3d8fd4: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3d8fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d8fd8:
    // 0x3d8fd8: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3d8fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3d8fdc:
    // 0x3d8fdc: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d8fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d8fe0:
    // 0x3d8fe0: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d8fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d8fe4:
    // 0x3d8fe4: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3d8fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3d8fe8:
    // 0x3d8fe8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d8fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d8fec:
    // 0x3d8fec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d8fecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d8ff0:
    // 0x3d8ff0: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3d8ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d8ff4:
    // 0x3d8ff4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d8ff4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d8ff8:
    // 0x3d8ff8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d8ff8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d8ffc:
    // 0x3d8ffc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d8ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d9000:
    // 0x3d9000: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3d9000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d9004:
    // 0x3d9004: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3d9004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d9008:
    // 0x3d9008: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d9008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d900c:
    // 0x3d900c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3d900cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d9010:
    // 0x3d9010: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3d9010u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d9014:
    // 0x3d9014: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d9014u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d9018:
    // 0x3d9018: 0x7a850010  lq          $a1, 0x10($s4)
    ctx->pc = 0x3d9018u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 20), 16)));
label_3d901c:
    // 0x3d901c: 0x27b10830  addiu       $s1, $sp, 0x830
    ctx->pc = 0x3d901cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d9020:
    // 0x3d9020: 0x7fa30840  sq          $v1, 0x840($sp)
    ctx->pc = 0x3d9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 3));
label_3d9024:
    // 0x3d9024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d9024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d9028:
    // 0x3d9028: 0x7fa50830  sq          $a1, 0x830($sp)
    ctx->pc = 0x3d9028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 5));
label_3d902c:
    // 0x3d902c: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3d902cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d9030:
    // 0x3d9030: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x3d9030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
label_3d9034:
    // 0x3d9034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d9034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9038:
    // 0x3d9038: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x3d9038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
label_3d903c:
    // 0x3d903c: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3d903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3d9040:
    // 0x3d9040: 0xc0e9f84  jal         func_3A7E10
label_3d9044:
    if (ctx->pc == 0x3D9044u) {
        ctx->pc = 0x3D9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9040u;
        // 0x3d9044: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9048u;
        goto label_3d9048;
    }
    ctx->pc = 0x3D9040u;
    SET_GPR_U32(ctx, 31, 0x3D9048u);
    ctx->pc = 0x3D9044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9040u;
    // 0x3d9044: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3D9040u, 0x3D9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9048u;
label_3d9048:
    // 0x3d9048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d904c:
    // 0x3d904c: 0xc0f15bc  jal         func_3C56F0
label_3d9050:
    if (ctx->pc == 0x3D9050u) {
        ctx->pc = 0x3D9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D904Cu;
        // 0x3d9050: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9054u;
        goto label_3d9054;
    }
    ctx->pc = 0x3D904Cu;
    SET_GPR_U32(ctx, 31, 0x3D9054u);
    ctx->pc = 0x3D9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D904Cu;
    // 0x3d9050: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D904Cu, 0x3D9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9054u;
label_3d9054:
    // 0x3d9054: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x3d9054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_3d9058:
    // 0x3d9058: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x3d9058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3d905c:
    // 0x3d905c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3d905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3d9060:
    // 0x3d9060: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d9060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d9064:
    // 0x3d9064: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d9064u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d9068:
    // 0x3d9068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d9068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d906c:
    // 0x3d906c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d906cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d9070:
    // 0x3d9070: 0x261050f8  addiu       $s0, $s0, 0x50F8
    ctx->pc = 0x3d9070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20728));
label_3d9074:
    // 0x3d9074: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3d9074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3d9078:
    // 0x3d9078: 0xe7b50884  swc1        $f21, 0x884($sp)
    ctx->pc = 0x3d9078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2180), bits); }
label_3d907c:
    // 0x3d907c: 0xe7b50880  swc1        $f21, 0x880($sp)
    ctx->pc = 0x3d907cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2176), bits); }
label_3d9080:
    // 0x3d9080: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3d9080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3d9084:
    // 0x3d9084: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3d9084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3d9088:
    // 0x3d9088: 0x7ba30880  lq          $v1, 0x880($sp)
    ctx->pc = 0x3d9088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3d908c:
    // 0x3d908c: 0x7ba20860  lq          $v0, 0x860($sp)
    ctx->pc = 0x3d908cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_3d9090:
    // 0x3d9090: 0x7fa30870  sq          $v1, 0x870($sp)
    ctx->pc = 0x3d9090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 3));
label_3d9094:
    // 0x3d9094: 0x7fa208e0  sq          $v0, 0x8E0($sp)
    ctx->pc = 0x3d9094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 2));
label_3d9098:
    // 0x3d9098: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d9098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d909c:
    // 0x3d909c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d909cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d90a0:
    // 0x3d90a0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d90a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d90a4:
    // 0x3d90a4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d90a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d90a8:
    // 0x3d90a8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d90a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d90ac:
    // 0x3d90ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d90acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d90b0:
    // 0x3d90b0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d90b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d90b4:
    // 0x3d90b4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d90b4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d90b8:
    // 0x3d90b8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d90b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d90bc:
    // 0x3d90bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d90bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d90c0:
    // 0x3d90c0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d90c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d90c4:
    // 0x3d90c4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d90c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d90c8:
    // 0x3d90c8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d90c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d90cc:
    // 0x3d90cc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d90ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d90d0:
    // 0x3d90d0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d90d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d90d4:
    // 0x3d90d4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d90d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d90d8:
    // 0x3d90d8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d90d8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d90dc:
    // 0x3d90dc: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3d90dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3d90e0:
    // 0x3d90e0: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3d90e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d90e4:
    // 0x3d90e4: 0x7fa208f0  sq          $v0, 0x8F0($sp)
    ctx->pc = 0x3d90e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 2));
label_3d90e8:
    // 0x3d90e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d90e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d90ec:
    // 0x3d90ec: 0xc136b18  jal         func_4DAC60
label_3d90f0:
    if (ctx->pc == 0x3D90F0u) {
        ctx->pc = 0x3D90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D90ECu;
        // 0x3d90f0: 0x7fa20900  sq          $v0, 0x900($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D90F4u;
        goto label_3d90f4;
    }
    ctx->pc = 0x3D90ECu;
    SET_GPR_U32(ctx, 31, 0x3D90F4u);
    ctx->pc = 0x3D90F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D90ECu;
    // 0x3d90f0: 0x7fa20900  sq          $v0, 0x900($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D90ECu, 0x3D90F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D90F4u;
label_3d90f4:
    // 0x3d90f4: 0x7ba20880  lq          $v0, 0x880($sp)
    ctx->pc = 0x3d90f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3d90f8:
    // 0x3d90f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d90f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d90fc:
    // 0x3d90fc: 0xafb40860  sw          $s4, 0x860($sp)
    ctx->pc = 0x3d90fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 20));
label_3d9100:
    // 0x3d9100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d9100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d9104:
    // 0x3d9104: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3d9104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3d9108:
    // 0x3d9108: 0x27a60860  addiu       $a2, $sp, 0x860
    ctx->pc = 0x3d9108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3d910c:
    // 0x3d910c: 0xc0e9f84  jal         func_3A7E10
label_3d9110:
    if (ctx->pc == 0x3D9110u) {
        ctx->pc = 0x3D9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D910Cu;
        // 0x3d9110: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9114u;
        goto label_3d9114;
    }
    ctx->pc = 0x3D910Cu;
    SET_GPR_U32(ctx, 31, 0x3D9114u);
    ctx->pc = 0x3D9110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D910Cu;
    // 0x3d9110: 0x7fa20840  sq          $v0, 0x840($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3D910Cu, 0x3D9114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9114u;
label_3d9114:
    // 0x3d9114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9118:
    // 0x3d9118: 0xc0f15bc  jal         func_3C56F0
label_3d911c:
    if (ctx->pc == 0x3D911Cu) {
        ctx->pc = 0x3D911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9118u;
        // 0x3d911c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9120u;
        goto label_3d9120;
    }
    ctx->pc = 0x3D9118u;
    SET_GPR_U32(ctx, 31, 0x3D9120u);
    ctx->pc = 0x3D911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9118u;
    // 0x3d911c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D9118u, 0x3D9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9120u;
label_3d9120:
    // 0x3d9120: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x3d9120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3d9124:
    // 0x3d9124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9128:
    // 0x3d9128: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d912c:
    // 0x3d912c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d9130:
    if (ctx->pc == 0x3D9130u) {
        ctx->pc = 0x3D9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D912Cu;
        // 0x3d9130: 0xaea30010  sw          $v1, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9134u;
        goto label_3d9134;
    }
    ctx->pc = 0x3D912Cu;
    {
        const bool branch_taken_0x3d912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D912Cu;
        // 0x3d9130: 0xaea30010  sw          $v1, 0x10($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d912c) {
            ctx->pc = 0x3D9140u;
            goto label_3d9140;
        }
    }
    ctx->pc = 0x3D9134u;
label_3d9134:
    // 0x3d9134: 0xc0e93de  jal         func_3A4F78
label_3d9138:
    if (ctx->pc == 0x3D9138u) {
        ctx->pc = 0x3D9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9134u;
        // 0x3d9138: 0x8e8400c4  lw          $a0, 0xC4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D913Cu;
        goto label_3d913c;
    }
    ctx->pc = 0x3D9134u;
    SET_GPR_U32(ctx, 31, 0x3D913Cu);
    ctx->pc = 0x3D9138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9134u;
    // 0x3d9138: 0x8e8400c4  lw          $a0, 0xC4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3D9134u, 0x3D913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D913Cu;
label_3d913c:
    // 0x3d913c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d9140:
    // 0x3d9140: 0x7bb00970  lq          $s0, 0x970($sp)
    ctx->pc = 0x3d9140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
label_3d9144:
    // 0x3d9144: 0x7bb10960  lq          $s1, 0x960($sp)
    ctx->pc = 0x3d9144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_3d9148:
    // 0x3d9148: 0x7bb20950  lq          $s2, 0x950($sp)
    ctx->pc = 0x3d9148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3d914c:
    // 0x3d914c: 0x7bb30940  lq          $s3, 0x940($sp)
    ctx->pc = 0x3d914cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3d9150:
    // 0x3d9150: 0x7bb40930  lq          $s4, 0x930($sp)
    ctx->pc = 0x3d9150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3d9154:
    // 0x3d9154: 0x7bb50920  lq          $s5, 0x920($sp)
    ctx->pc = 0x3d9154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3d9158:
    // 0x3d9158: 0xdfbf0910  ld          $ra, 0x910($sp)
    ctx->pc = 0x3d9158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2320)));
label_3d915c:
    // 0x3d915c: 0xc7b70998  lwc1        $f23, 0x998($sp)
    ctx->pc = 0x3d915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d9160:
    // 0x3d9160: 0xc7b60990  lwc1        $f22, 0x990($sp)
    ctx->pc = 0x3d9160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d9164:
    // 0x3d9164: 0xc7b50988  lwc1        $f21, 0x988($sp)
    ctx->pc = 0x3d9164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d9168:
    // 0x3d9168: 0xc7b40980  lwc1        $f20, 0x980($sp)
    ctx->pc = 0x3d9168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d916c:
    // 0x3d916c: 0x3e00008  jr          $ra
label_3d9170:
    if (ctx->pc == 0x3D9170u) {
        ctx->pc = 0x3D9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D916Cu;
        // 0x3d9170: 0x27bd09a0  addiu       $sp, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9174u;
        goto label_3d9174;
    }
    ctx->pc = 0x3D916Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D916Cu;
        // 0x3d9170: 0x27bd09a0  addiu       $sp, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D916Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9174u;
label_3d9174:
    // 0x3d9174: 0x0  nop
    ctx->pc = 0x3d9174u;
    // NOP
    ctx->pc = 0x3d9178u;
}
