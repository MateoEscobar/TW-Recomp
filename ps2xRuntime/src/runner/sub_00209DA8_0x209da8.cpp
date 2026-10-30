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

// Function: sub_00209DA8
// Address: 0x209da8 - 0x20a158
void sub_00209DA8_0x209da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209DA8_0x209da8");
#endif

    switch (ctx->pc) {
        case 0x209da8u: goto label_209da8;
        case 0x209dacu: goto label_209dac;
        case 0x209db0u: goto label_209db0;
        case 0x209db4u: goto label_209db4;
        case 0x209db8u: goto label_209db8;
        case 0x209dbcu: goto label_209dbc;
        case 0x209dc0u: goto label_209dc0;
        case 0x209dc4u: goto label_209dc4;
        case 0x209dc8u: goto label_209dc8;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd0u: goto label_209dd0;
        case 0x209dd4u: goto label_209dd4;
        case 0x209dd8u: goto label_209dd8;
        case 0x209ddcu: goto label_209ddc;
        case 0x209de0u: goto label_209de0;
        case 0x209de4u: goto label_209de4;
        case 0x209de8u: goto label_209de8;
        case 0x209decu: goto label_209dec;
        case 0x209df0u: goto label_209df0;
        case 0x209df4u: goto label_209df4;
        case 0x209df8u: goto label_209df8;
        case 0x209dfcu: goto label_209dfc;
        case 0x209e00u: goto label_209e00;
        case 0x209e04u: goto label_209e04;
        case 0x209e08u: goto label_209e08;
        case 0x209e0cu: goto label_209e0c;
        case 0x209e10u: goto label_209e10;
        case 0x209e14u: goto label_209e14;
        case 0x209e18u: goto label_209e18;
        case 0x209e1cu: goto label_209e1c;
        case 0x209e20u: goto label_209e20;
        case 0x209e24u: goto label_209e24;
        case 0x209e28u: goto label_209e28;
        case 0x209e2cu: goto label_209e2c;
        case 0x209e30u: goto label_209e30;
        case 0x209e34u: goto label_209e34;
        case 0x209e38u: goto label_209e38;
        case 0x209e3cu: goto label_209e3c;
        case 0x209e40u: goto label_209e40;
        case 0x209e44u: goto label_209e44;
        case 0x209e48u: goto label_209e48;
        case 0x209e4cu: goto label_209e4c;
        case 0x209e50u: goto label_209e50;
        case 0x209e54u: goto label_209e54;
        case 0x209e58u: goto label_209e58;
        case 0x209e5cu: goto label_209e5c;
        case 0x209e60u: goto label_209e60;
        case 0x209e64u: goto label_209e64;
        case 0x209e68u: goto label_209e68;
        case 0x209e6cu: goto label_209e6c;
        case 0x209e70u: goto label_209e70;
        case 0x209e74u: goto label_209e74;
        case 0x209e78u: goto label_209e78;
        case 0x209e7cu: goto label_209e7c;
        case 0x209e80u: goto label_209e80;
        case 0x209e84u: goto label_209e84;
        case 0x209e88u: goto label_209e88;
        case 0x209e8cu: goto label_209e8c;
        case 0x209e90u: goto label_209e90;
        case 0x209e94u: goto label_209e94;
        case 0x209e98u: goto label_209e98;
        case 0x209e9cu: goto label_209e9c;
        case 0x209ea0u: goto label_209ea0;
        case 0x209ea4u: goto label_209ea4;
        case 0x209ea8u: goto label_209ea8;
        case 0x209eacu: goto label_209eac;
        case 0x209eb0u: goto label_209eb0;
        case 0x209eb4u: goto label_209eb4;
        case 0x209eb8u: goto label_209eb8;
        case 0x209ebcu: goto label_209ebc;
        case 0x209ec0u: goto label_209ec0;
        case 0x209ec4u: goto label_209ec4;
        case 0x209ec8u: goto label_209ec8;
        case 0x209eccu: goto label_209ecc;
        case 0x209ed0u: goto label_209ed0;
        case 0x209ed4u: goto label_209ed4;
        case 0x209ed8u: goto label_209ed8;
        case 0x209edcu: goto label_209edc;
        case 0x209ee0u: goto label_209ee0;
        case 0x209ee4u: goto label_209ee4;
        case 0x209ee8u: goto label_209ee8;
        case 0x209eecu: goto label_209eec;
        case 0x209ef0u: goto label_209ef0;
        case 0x209ef4u: goto label_209ef4;
        case 0x209ef8u: goto label_209ef8;
        case 0x209efcu: goto label_209efc;
        case 0x209f00u: goto label_209f00;
        case 0x209f04u: goto label_209f04;
        case 0x209f08u: goto label_209f08;
        case 0x209f0cu: goto label_209f0c;
        case 0x209f10u: goto label_209f10;
        case 0x209f14u: goto label_209f14;
        case 0x209f18u: goto label_209f18;
        case 0x209f1cu: goto label_209f1c;
        case 0x209f20u: goto label_209f20;
        case 0x209f24u: goto label_209f24;
        case 0x209f28u: goto label_209f28;
        case 0x209f2cu: goto label_209f2c;
        case 0x209f30u: goto label_209f30;
        case 0x209f34u: goto label_209f34;
        case 0x209f38u: goto label_209f38;
        case 0x209f3cu: goto label_209f3c;
        case 0x209f40u: goto label_209f40;
        case 0x209f44u: goto label_209f44;
        case 0x209f48u: goto label_209f48;
        case 0x209f4cu: goto label_209f4c;
        case 0x209f50u: goto label_209f50;
        case 0x209f54u: goto label_209f54;
        case 0x209f58u: goto label_209f58;
        case 0x209f5cu: goto label_209f5c;
        case 0x209f60u: goto label_209f60;
        case 0x209f64u: goto label_209f64;
        case 0x209f68u: goto label_209f68;
        case 0x209f6cu: goto label_209f6c;
        case 0x209f70u: goto label_209f70;
        case 0x209f74u: goto label_209f74;
        case 0x209f78u: goto label_209f78;
        case 0x209f7cu: goto label_209f7c;
        case 0x209f80u: goto label_209f80;
        case 0x209f84u: goto label_209f84;
        case 0x209f88u: goto label_209f88;
        case 0x209f8cu: goto label_209f8c;
        case 0x209f90u: goto label_209f90;
        case 0x209f94u: goto label_209f94;
        case 0x209f98u: goto label_209f98;
        case 0x209f9cu: goto label_209f9c;
        case 0x209fa0u: goto label_209fa0;
        case 0x209fa4u: goto label_209fa4;
        case 0x209fa8u: goto label_209fa8;
        case 0x209facu: goto label_209fac;
        case 0x209fb0u: goto label_209fb0;
        case 0x209fb4u: goto label_209fb4;
        case 0x209fb8u: goto label_209fb8;
        case 0x209fbcu: goto label_209fbc;
        case 0x209fc0u: goto label_209fc0;
        case 0x209fc4u: goto label_209fc4;
        case 0x209fc8u: goto label_209fc8;
        case 0x209fccu: goto label_209fcc;
        case 0x209fd0u: goto label_209fd0;
        case 0x209fd4u: goto label_209fd4;
        case 0x209fd8u: goto label_209fd8;
        case 0x209fdcu: goto label_209fdc;
        case 0x209fe0u: goto label_209fe0;
        case 0x209fe4u: goto label_209fe4;
        case 0x209fe8u: goto label_209fe8;
        case 0x209fecu: goto label_209fec;
        case 0x209ff0u: goto label_209ff0;
        case 0x209ff4u: goto label_209ff4;
        case 0x209ff8u: goto label_209ff8;
        case 0x209ffcu: goto label_209ffc;
        case 0x20a000u: goto label_20a000;
        case 0x20a004u: goto label_20a004;
        case 0x20a008u: goto label_20a008;
        case 0x20a00cu: goto label_20a00c;
        case 0x20a010u: goto label_20a010;
        case 0x20a014u: goto label_20a014;
        case 0x20a018u: goto label_20a018;
        case 0x20a01cu: goto label_20a01c;
        case 0x20a020u: goto label_20a020;
        case 0x20a024u: goto label_20a024;
        case 0x20a028u: goto label_20a028;
        case 0x20a02cu: goto label_20a02c;
        case 0x20a030u: goto label_20a030;
        case 0x20a034u: goto label_20a034;
        case 0x20a038u: goto label_20a038;
        case 0x20a03cu: goto label_20a03c;
        case 0x20a040u: goto label_20a040;
        case 0x20a044u: goto label_20a044;
        case 0x20a048u: goto label_20a048;
        case 0x20a04cu: goto label_20a04c;
        case 0x20a050u: goto label_20a050;
        case 0x20a054u: goto label_20a054;
        case 0x20a058u: goto label_20a058;
        case 0x20a05cu: goto label_20a05c;
        case 0x20a060u: goto label_20a060;
        case 0x20a064u: goto label_20a064;
        case 0x20a068u: goto label_20a068;
        case 0x20a06cu: goto label_20a06c;
        case 0x20a070u: goto label_20a070;
        case 0x20a074u: goto label_20a074;
        case 0x20a078u: goto label_20a078;
        case 0x20a07cu: goto label_20a07c;
        case 0x20a080u: goto label_20a080;
        case 0x20a084u: goto label_20a084;
        case 0x20a088u: goto label_20a088;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a090u: goto label_20a090;
        case 0x20a094u: goto label_20a094;
        case 0x20a098u: goto label_20a098;
        case 0x20a09cu: goto label_20a09c;
        case 0x20a0a0u: goto label_20a0a0;
        case 0x20a0a4u: goto label_20a0a4;
        case 0x20a0a8u: goto label_20a0a8;
        case 0x20a0acu: goto label_20a0ac;
        case 0x20a0b0u: goto label_20a0b0;
        case 0x20a0b4u: goto label_20a0b4;
        case 0x20a0b8u: goto label_20a0b8;
        case 0x20a0bcu: goto label_20a0bc;
        case 0x20a0c0u: goto label_20a0c0;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a0c8u: goto label_20a0c8;
        case 0x20a0ccu: goto label_20a0cc;
        case 0x20a0d0u: goto label_20a0d0;
        case 0x20a0d4u: goto label_20a0d4;
        case 0x20a0d8u: goto label_20a0d8;
        case 0x20a0dcu: goto label_20a0dc;
        case 0x20a0e0u: goto label_20a0e0;
        case 0x20a0e4u: goto label_20a0e4;
        case 0x20a0e8u: goto label_20a0e8;
        case 0x20a0ecu: goto label_20a0ec;
        case 0x20a0f0u: goto label_20a0f0;
        case 0x20a0f4u: goto label_20a0f4;
        case 0x20a0f8u: goto label_20a0f8;
        case 0x20a0fcu: goto label_20a0fc;
        case 0x20a100u: goto label_20a100;
        case 0x20a104u: goto label_20a104;
        case 0x20a108u: goto label_20a108;
        case 0x20a10cu: goto label_20a10c;
        case 0x20a110u: goto label_20a110;
        case 0x20a114u: goto label_20a114;
        case 0x20a118u: goto label_20a118;
        case 0x20a11cu: goto label_20a11c;
        case 0x20a120u: goto label_20a120;
        case 0x20a124u: goto label_20a124;
        case 0x20a128u: goto label_20a128;
        case 0x20a12cu: goto label_20a12c;
        case 0x20a130u: goto label_20a130;
        case 0x20a134u: goto label_20a134;
        case 0x20a138u: goto label_20a138;
        case 0x20a13cu: goto label_20a13c;
        case 0x20a140u: goto label_20a140;
        case 0x20a144u: goto label_20a144;
        case 0x20a148u: goto label_20a148;
        case 0x20a14cu: goto label_20a14c;
        case 0x20a150u: goto label_20a150;
        case 0x20a154u: goto label_20a154;
        default: break;
    }

    ctx->pc = 0x209da8u;

label_209da8:
    // 0x209da8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x209da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_209dac:
    // 0x209dac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x209dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_209db0:
    // 0x209db0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x209db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_209db4:
    // 0x209db4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x209db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209db8:
    // 0x209db8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x209db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_209dbc:
    // 0x209dbc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x209dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_209dc0:
    // 0x209dc0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x209dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_209dc4:
    // 0x209dc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x209dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_209dc8:
    // 0x209dc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x209dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_209dcc:
    // 0x209dcc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x209dccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_209dd0:
    // 0x209dd0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x209dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_209dd4:
    // 0x209dd4: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
label_209dd8:
    if (ctx->pc == 0x209DD8u) {
        ctx->pc = 0x209DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DD4u;
        // 0x209dd8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DDCu;
        goto label_209ddc;
    }
    ctx->pc = 0x209DD4u;
    {
        const bool branch_taken_0x209dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DD4u;
        // 0x209dd8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dd4) {
            ctx->pc = 0x20A134u;
            goto label_20a134;
        }
    }
    ctx->pc = 0x209DDCu;
label_209ddc:
    // 0x209ddc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_209de0:
    // 0x209de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209de4:
    // 0x209de4: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x209de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_209de8:
    // 0x209de8: 0xc06ba36  jal         func_1AE8D8
label_209dec:
    if (ctx->pc == 0x209DECu) {
        ctx->pc = 0x209DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DE8u;
        // 0x209dec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DF0u;
        goto label_209df0;
    }
    ctx->pc = 0x209DE8u;
    SET_GPR_U32(ctx, 31, 0x209DF0u);
    ctx->pc = 0x209DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DE8u;
    // 0x209dec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x209DE8u, 0x209DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DF0u;
label_209df0:
    // 0x209df0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x209df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_209df4:
    // 0x209df4: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x209df4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_209df8:
    // 0x209df8: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x209df8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_209dfc:
    // 0x209dfc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x209dfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209e00:
    // 0x209e00: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x209e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_209e04:
    // 0x209e04: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x209e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_209e08:
    // 0x209e08: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x209e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_209e0c:
    // 0x209e0c: 0x24a58f80  addiu       $a1, $a1, -0x7080
    ctx->pc = 0x209e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938496));
label_209e10:
    // 0x209e10: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_209e14:
    // 0x209e14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_209e18:
    // 0x209e18: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x209e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_209e1c:
    // 0x209e1c: 0x25088f90  addiu       $t0, $t0, -0x7070
    ctx->pc = 0x209e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938512));
label_209e20:
    // 0x209e20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_209e24:
    // 0x209e24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209e24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209e28:
    // 0x209e28: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x209e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_209e2c:
    // 0x209e2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x209e2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209e30:
    // 0x209e30: 0x40f809  jalr        $v0
label_209e34:
    if (ctx->pc == 0x209E34u) {
        ctx->pc = 0x209E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E30u;
        // 0x209e34: 0x2409002a  addiu       $t1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E38u;
        goto label_209e38;
    }
    ctx->pc = 0x209E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209E38u);
        ctx->pc = 0x209E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E30u;
        // 0x209e34: 0x2409002a  addiu       $t1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209E30u, 0x209E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209E38u;
label_209e38:
    // 0x209e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_209e3c:
    if (ctx->pc == 0x209E3Cu) {
        ctx->pc = 0x209E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E38u;
        // 0x209e3c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E40u;
        goto label_209e40;
    }
    ctx->pc = 0x209E38u;
    {
        const bool branch_taken_0x209e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E38u;
        // 0x209e3c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e38) {
            ctx->pc = 0x209E4Cu;
            goto label_209e4c;
        }
    }
    ctx->pc = 0x209E40u;
label_209e40:
    // 0x209e40: 0xc074fbc  jal         func_1D3EF0
label_209e44:
    if (ctx->pc == 0x209E44u) {
        ctx->pc = 0x209E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E40u;
        // 0x209e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E48u;
        goto label_209e48;
    }
    ctx->pc = 0x209E40u;
    SET_GPR_U32(ctx, 31, 0x209E48u);
    ctx->pc = 0x209E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E40u;
    // 0x209e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x209E40u, 0x209E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E48u;
label_209e48:
    // 0x209e48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x209e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_209e4c:
    // 0x209e4c: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x209e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_209e50:
    // 0x209e50: 0x8c83cdb4  lw          $v1, -0x324C($a0)
    ctx->pc = 0x209e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_209e54:
    // 0x209e54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_209e58:
    // 0x209e58: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x209e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_209e5c:
    // 0x209e5c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_209e60:
    if (ctx->pc == 0x209E60u) {
        ctx->pc = 0x209E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E5Cu;
        // 0x209e60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E64u;
        goto label_209e64;
    }
    ctx->pc = 0x209E5Cu;
    {
        const bool branch_taken_0x209e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E5Cu;
        // 0x209e60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e5c) {
            ctx->pc = 0x209F38u;
            goto label_209f38;
        }
    }
    ctx->pc = 0x209E64u;
label_209e64:
    // 0x209e64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x209e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209e68:
    // 0x209e68: 0xc080ec6  jal         func_203B18
label_209e6c:
    if (ctx->pc == 0x209E6Cu) {
        ctx->pc = 0x209E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E68u;
        // 0x209e6c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E70u;
        goto label_209e70;
    }
    ctx->pc = 0x209E68u;
    SET_GPR_U32(ctx, 31, 0x209E70u);
    ctx->pc = 0x209E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E68u;
    // 0x209e6c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x209E68u, 0x209E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E70u;
label_209e70:
    // 0x209e70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x209e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_209e74:
    // 0x209e74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_209e78:
    // 0x209e78: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_209e7c:
    // 0x209e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_209e80:
    // 0x209e80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_209e84:
    // 0x209e84: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x209e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_209e88:
    // 0x209e88: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x209e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_209e8c:
    // 0x209e8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209e90:
    // 0x209e90: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x209e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_209e94:
    // 0x209e94: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_209e98:
    // 0x209e98: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x209e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_209e9c:
    // 0x209e9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x209e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209ea0:
    // 0x209ea0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x209ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_209ea4:
    // 0x209ea4: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x209ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209ea8:
    // 0x209ea8: 0xc075044  jal         func_1D4110
label_209eac:
    if (ctx->pc == 0x209EACu) {
        ctx->pc = 0x209EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EA8u;
        // 0x209eac: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EB0u;
        goto label_209eb0;
    }
    ctx->pc = 0x209EA8u;
    SET_GPR_U32(ctx, 31, 0x209EB0u);
    ctx->pc = 0x209EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EA8u;
    // 0x209eac: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x209EA8u, 0x209EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EB0u;
label_209eb0:
    // 0x209eb0: 0xc067b9c  jal         func_19EE70
label_209eb4:
    if (ctx->pc == 0x209EB4u) {
        ctx->pc = 0x209EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EB0u;
        // 0x209eb4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EB8u;
        goto label_209eb8;
    }
    ctx->pc = 0x209EB0u;
    SET_GPR_U32(ctx, 31, 0x209EB8u);
    ctx->pc = 0x209EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EB0u;
    // 0x209eb4: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x209EB0u, 0x209EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EB8u;
label_209eb8:
    // 0x209eb8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x209eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_209ebc:
    // 0x209ebc: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x209ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_209ec0:
    // 0x209ec0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x209ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_209ec4:
    // 0x209ec4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209ec8:
    // 0x209ec8: 0x8c70d328  lw          $s0, -0x2CD8($v1)
    ctx->pc = 0x209ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955816)));
label_209ecc:
    // 0x209ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209ed0:
    // 0x209ed0: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x209ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209ed4:
    // 0x209ed4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209ed8:
    // 0x209ed8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209edc:
    // 0x209edc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x209edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_209ee0:
    // 0x209ee0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x209ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209ee4:
    // 0x209ee4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x209ee4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209ee8:
    // 0x209ee8: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x209ee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_209eec:
    // 0x209eec: 0xc07508c  jal         func_1D4230
label_209ef0:
    if (ctx->pc == 0x209EF0u) {
        ctx->pc = 0x209EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EECu;
        // 0x209ef0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EF4u;
        goto label_209ef4;
    }
    ctx->pc = 0x209EECu;
    SET_GPR_U32(ctx, 31, 0x209EF4u);
    ctx->pc = 0x209EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EECu;
    // 0x209ef0: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x209EECu, 0x209EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EF4u;
label_209ef4:
    // 0x209ef4: 0xc067b9c  jal         func_19EE70
label_209ef8:
    if (ctx->pc == 0x209EF8u) {
        ctx->pc = 0x209EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EF4u;
        // 0x209ef8: 0x24040079  addiu       $a0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EFCu;
        goto label_209efc;
    }
    ctx->pc = 0x209EF4u;
    SET_GPR_U32(ctx, 31, 0x209EFCu);
    ctx->pc = 0x209EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EF4u;
    // 0x209ef8: 0x24040079  addiu       $a0, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x209EF4u, 0x209EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EFCu;
label_209efc:
    // 0x209efc: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x209efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209f00:
    // 0x209f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209f04:
    // 0x209f04: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_209f08:
    // 0x209f08: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x209f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_209f0c:
    // 0x209f0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209f10:
    // 0x209f10: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x209f10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209f14:
    // 0x209f14: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x209f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_209f18:
    // 0x209f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209f1c:
    // 0x209f1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x209f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209f20:
    // 0x209f20: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_209f24:
    // 0x209f24: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x209f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209f28:
    // 0x209f28: 0xc07508c  jal         func_1D4230
label_209f2c:
    if (ctx->pc == 0x209F2Cu) {
        ctx->pc = 0x209F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F28u;
        // 0x209f2c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F30u;
        goto label_209f30;
    }
    ctx->pc = 0x209F28u;
    SET_GPR_U32(ctx, 31, 0x209F30u);
    ctx->pc = 0x209F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F28u;
    // 0x209f2c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x209F28u, 0x209F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F30u;
label_209f30:
    // 0x209f30: 0x10000049  b           . + 4 + (0x49 << 2)
label_209f34:
    if (ctx->pc == 0x209F34u) {
        ctx->pc = 0x209F38u;
        goto label_209f38;
    }
    ctx->pc = 0x209F30u;
    {
        const bool branch_taken_0x209f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f30) {
            ctx->pc = 0x20A058u;
            goto label_20a058;
        }
    }
    ctx->pc = 0x209F38u;
label_209f38:
    // 0x209f38: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_209f3c:
    // 0x209f3c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x209f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_209f40:
    // 0x209f40: 0x24468fc8  addiu       $a2, $v0, -0x7038
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938568));
label_209f44:
    // 0x209f44: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x209f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_209f48:
    // 0x209f48: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x209f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_209f4c:
    // 0x209f4c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x209f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_209f50:
    // 0x209f50: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x209f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_209f54:
    // 0x209f54: 0xc080eca  jal         func_203B28
label_209f58:
    if (ctx->pc == 0x209F58u) {
        ctx->pc = 0x209F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F54u;
        // 0x209f58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F5Cu;
        goto label_209f5c;
    }
    ctx->pc = 0x209F54u;
    SET_GPR_U32(ctx, 31, 0x209F5Cu);
    ctx->pc = 0x209F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F54u;
    // 0x209f58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B28u, 0x209F54u, 0x209F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F5Cu;
label_209f5c:
    // 0x209f5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x209f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_209f60:
    // 0x209f60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_209f64:
    // 0x209f64: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x209f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_209f68:
    // 0x209f68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_209f6c:
    // 0x209f6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_209f70:
    // 0x209f70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209f74:
    // 0x209f74: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x209f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_209f78:
    // 0x209f78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209f7c:
    // 0x209f7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x209f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_209f80:
    // 0x209f80: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x209f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_209f84:
    // 0x209f84: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x209f84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_209f88:
    // 0x209f88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x209f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209f8c:
    // 0x209f8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x209f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_209f90:
    // 0x209f90: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x209f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_209f94:
    // 0x209f94: 0xc075044  jal         func_1D4110
label_209f98:
    if (ctx->pc == 0x209F98u) {
        ctx->pc = 0x209F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F94u;
        // 0x209f98: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F9Cu;
        goto label_209f9c;
    }
    ctx->pc = 0x209F94u;
    SET_GPR_U32(ctx, 31, 0x209F9Cu);
    ctx->pc = 0x209F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F94u;
    // 0x209f98: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x209F94u, 0x209F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F9Cu;
label_209f9c:
    // 0x209f9c: 0xc067b9c  jal         func_19EE70
label_209fa0:
    if (ctx->pc == 0x209FA0u) {
        ctx->pc = 0x209FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F9Cu;
        // 0x209fa0: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FA4u;
        goto label_209fa4;
    }
    ctx->pc = 0x209F9Cu;
    SET_GPR_U32(ctx, 31, 0x209FA4u);
    ctx->pc = 0x209FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F9Cu;
    // 0x209fa0: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x209F9Cu, 0x209FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FA4u;
label_209fa4:
    // 0x209fa4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x209fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_209fa8:
    // 0x209fa8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x209fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_209fac:
    // 0x209fac: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x209facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_209fb0:
    // 0x209fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209fb4:
    // 0x209fb4: 0x8c70d328  lw          $s0, -0x2CD8($v1)
    ctx->pc = 0x209fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955816)));
label_209fb8:
    // 0x209fb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209fbc:
    // 0x209fbc: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x209fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209fc0:
    // 0x209fc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x209fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209fc4:
    // 0x209fc4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x209fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_209fc8:
    // 0x209fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209fcc:
    // 0x209fcc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x209fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_209fd0:
    // 0x209fd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209fd4:
    // 0x209fd4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x209fd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209fd8:
    // 0x209fd8: 0xc07508c  jal         func_1D4230
label_209fdc:
    if (ctx->pc == 0x209FDCu) {
        ctx->pc = 0x209FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FD8u;
        // 0x209fdc: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FE0u;
        goto label_209fe0;
    }
    ctx->pc = 0x209FD8u;
    SET_GPR_U32(ctx, 31, 0x209FE0u);
    ctx->pc = 0x209FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FD8u;
    // 0x209fdc: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x209FD8u, 0x209FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FE0u;
label_209fe0:
    // 0x209fe0: 0xc067b9c  jal         func_19EE70
label_209fe4:
    if (ctx->pc == 0x209FE4u) {
        ctx->pc = 0x209FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FE0u;
        // 0x209fe4: 0x2404008a  addiu       $a0, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FE8u;
        goto label_209fe8;
    }
    ctx->pc = 0x209FE0u;
    SET_GPR_U32(ctx, 31, 0x209FE8u);
    ctx->pc = 0x209FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FE0u;
    // 0x209fe4: 0x2404008a  addiu       $a0, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x209FE0u, 0x209FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FE8u;
label_209fe8:
    // 0x209fe8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x209fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_209fec:
    // 0x209fec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x209fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_209ff0:
    // 0x209ff0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x209ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_209ff4:
    // 0x209ff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209ff8:
    // 0x209ff8: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x209ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_209ffc:
    // 0x209ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x209ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a000:
    // 0x20a000: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x20a000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20a004:
    // 0x20a004: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20a004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20a008:
    // 0x20a008: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20a008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a00c:
    // 0x20a00c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20a00cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a010:
    // 0x20a010: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x20a010u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20a014:
    // 0x20a014: 0xc07508c  jal         func_1D4230
label_20a018:
    if (ctx->pc == 0x20A018u) {
        ctx->pc = 0x20A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A014u;
        // 0x20a018: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A01Cu;
        goto label_20a01c;
    }
    ctx->pc = 0x20A014u;
    SET_GPR_U32(ctx, 31, 0x20A01Cu);
    ctx->pc = 0x20A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A014u;
    // 0x20a018: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20A014u, 0x20A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A01Cu;
label_20a01c:
    // 0x20a01c: 0xc067b9c  jal         func_19EE70
label_20a020:
    if (ctx->pc == 0x20A020u) {
        ctx->pc = 0x20A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A01Cu;
        // 0x20a020: 0x24040079  addiu       $a0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A024u;
        goto label_20a024;
    }
    ctx->pc = 0x20A01Cu;
    SET_GPR_U32(ctx, 31, 0x20A024u);
    ctx->pc = 0x20A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A01Cu;
    // 0x20a020: 0x24040079  addiu       $a0, $zero, 0x79 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20A01Cu, 0x20A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A024u;
label_20a024:
    // 0x20a024: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x20a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20a028:
    // 0x20a028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a02c:
    // 0x20a02c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x20a02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20a030:
    // 0x20a030: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20a030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_20a034:
    // 0x20a034: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20a038:
    // 0x20a038: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x20a038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a03c:
    // 0x20a03c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x20a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_20a040:
    // 0x20a040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a044:
    // 0x20a044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20a044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a048:
    // 0x20a048: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20a048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20a04c:
    // 0x20a04c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20a04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a050:
    // 0x20a050: 0xc07508c  jal         func_1D4230
label_20a054:
    if (ctx->pc == 0x20A054u) {
        ctx->pc = 0x20A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A050u;
        // 0x20a054: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A058u;
        goto label_20a058;
    }
    ctx->pc = 0x20A050u;
    SET_GPR_U32(ctx, 31, 0x20A058u);
    ctx->pc = 0x20A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A050u;
    // 0x20a054: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x20A050u, 0x20A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A058u;
label_20a058:
    // 0x20a058: 0xc080ebe  jal         func_203AF8
label_20a05c:
    if (ctx->pc == 0x20A05Cu) {
        ctx->pc = 0x20A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A058u;
        // 0x20a05c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A060u;
        goto label_20a060;
    }
    ctx->pc = 0x20A058u;
    SET_GPR_U32(ctx, 31, 0x20A060u);
    ctx->pc = 0x20A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A058u;
    // 0x20a05c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20A058u, 0x20A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A060u;
label_20a060:
    // 0x20a060: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x20a060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20a064:
    // 0x20a064: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20a068:
    // 0x20a068: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x20a068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_20a06c:
    // 0x20a06c: 0xac700088  sw          $s0, 0x88($v1)
    ctx->pc = 0x20a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 16));
label_20a070:
    // 0x20a070: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20a074:
    // 0x20a074: 0xac440094  sw          $a0, 0x94($v0)
    ctx->pc = 0x20a074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
label_20a078:
    // 0x20a078: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x20a078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20a07c:
    // 0x20a07c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a080:
    // 0x20a080: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_20a084:
    // 0x20a084: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x20a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20a088:
    // 0x20a088: 0x60f809  jalr        $v1
label_20a08c:
    if (ctx->pc == 0x20A08Cu) {
        ctx->pc = 0x20A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A088u;
        // 0x20a08c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A090u;
        goto label_20a090;
    }
    ctx->pc = 0x20A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A090u);
        ctx->pc = 0x20A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A088u;
        // 0x20a08c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A088u, 0x20A090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A090u;
label_20a090:
    // 0x20a090: 0xc080ebe  jal         func_203AF8
label_20a094:
    if (ctx->pc == 0x20A094u) {
        ctx->pc = 0x20A098u;
        goto label_20a098;
    }
    ctx->pc = 0x20A090u;
    SET_GPR_U32(ctx, 31, 0x20A098u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20A090u, 0x20A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A098u;
label_20a098:
    // 0x20a098: 0xc080ec2  jal         func_203B08
label_20a09c:
    if (ctx->pc == 0x20A09Cu) {
        ctx->pc = 0x20A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A098u;
        // 0x20a09c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0A0u;
        goto label_20a0a0;
    }
    ctx->pc = 0x20A098u;
    SET_GPR_U32(ctx, 31, 0x20A0A0u);
    ctx->pc = 0x20A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A098u;
    // 0x20a09c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20A098u, 0x20A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0A0u;
label_20a0a0:
    // 0x20a0a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20a0a4:
    // 0x20a0a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20a0a8:
    // 0x20a0a8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20a0ac:
    // 0x20a0ac: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20a0acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20a0b0:
    // 0x20a0b0: 0x24a58fd0  addiu       $a1, $a1, -0x7030
    ctx->pc = 0x20a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938576));
label_20a0b4:
    // 0x20a0b4: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20a0b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20a0b8:
    // 0x20a0b8: 0x26888f90  addiu       $t0, $s4, -0x7070
    ctx->pc = 0x20a0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938512));
label_20a0bc:
    // 0x20a0bc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x20a0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_20a0c0:
    // 0x20a0c0: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x20a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_20a0c4:
    // 0x20a0c4: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x20a0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_20a0c8:
    // 0x20a0c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20a0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20a0cc:
    // 0x20a0cc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x20a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_20a0d0:
    // 0x20a0d0: 0x24090044  addiu       $t1, $zero, 0x44
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_20a0d4:
    // 0x20a0d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a0d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a0d8:
    // 0x20a0d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20a0d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a0dc:
    // 0x20a0dc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20a0e0:
    // 0x20a0e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20a0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20a0e4:
    // 0x20a0e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20a0e8:
    // 0x20a0e8: 0x40f809  jalr        $v0
label_20a0ec:
    if (ctx->pc == 0x20A0ECu) {
        ctx->pc = 0x20A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E8u;
        // 0x20a0ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0F0u;
        goto label_20a0f0;
    }
    ctx->pc = 0x20A0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A0F0u);
        ctx->pc = 0x20A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E8u;
        // 0x20a0ec: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0E8u, 0x20A0F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A0F0u;
label_20a0f0:
    // 0x20a0f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20a0f4:
    if (ctx->pc == 0x20A0F4u) {
        ctx->pc = 0x20A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0F0u;
        // 0x20a0f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0F8u;
        goto label_20a0f8;
    }
    ctx->pc = 0x20A0F0u;
    {
        const bool branch_taken_0x20a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a0f0) {
            ctx->pc = 0x20A0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A0F0u;
            // 0x20a0f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A104u;
            goto label_20a104;
        }
    }
    ctx->pc = 0x20A0F8u;
label_20a0f8:
    // 0x20a0f8: 0xc073a9c  jal         func_1CEA70
label_20a0fc:
    if (ctx->pc == 0x20A0FCu) {
        ctx->pc = 0x20A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0F8u;
        // 0x20a0fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A100u;
        goto label_20a100;
    }
    ctx->pc = 0x20A0F8u;
    SET_GPR_U32(ctx, 31, 0x20A100u);
    ctx->pc = 0x20A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0F8u;
    // 0x20a0fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x20A0F8u, 0x20A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A100u;
label_20a100:
    // 0x20a100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20a100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20a104:
    // 0x20a104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20a108:
    // 0x20a108: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a10c:
    // 0x20a10c: 0xc073ad0  jal         func_1CEB40
label_20a110:
    if (ctx->pc == 0x20A110u) {
        ctx->pc = 0x20A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A10Cu;
        // 0x20a110: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A114u;
        goto label_20a114;
    }
    ctx->pc = 0x20A10Cu;
    SET_GPR_U32(ctx, 31, 0x20A114u);
    ctx->pc = 0x20A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A10Cu;
    // 0x20a110: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x20A10Cu, 0x20A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A114u;
label_20a114:
    // 0x20a114: 0xc067b9c  jal         func_19EE70
label_20a118:
    if (ctx->pc == 0x20A118u) {
        ctx->pc = 0x20A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A114u;
        // 0x20a118: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A11Cu;
        goto label_20a11c;
    }
    ctx->pc = 0x20A114u;
    SET_GPR_U32(ctx, 31, 0x20A11Cu);
    ctx->pc = 0x20A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A114u;
    // 0x20a118: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20A114u, 0x20A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A11Cu;
label_20a11c:
    // 0x20a11c: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x20a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20a120:
    // 0x20a120: 0xc073b0a  jal         func_1CEC28
label_20a124:
    if (ctx->pc == 0x20A124u) {
        ctx->pc = 0x20A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A120u;
        // 0x20a124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A128u;
        goto label_20a128;
    }
    ctx->pc = 0x20A120u;
    SET_GPR_U32(ctx, 31, 0x20A128u);
    ctx->pc = 0x20A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A120u;
    // 0x20a124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20A120u, 0x20A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A128u;
label_20a128:
    // 0x20a128: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x20a128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_20a12c:
    // 0x20a12c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x20a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_20a130:
    // 0x20a130: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20a130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20a134:
    // 0x20a134: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20a134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20a138:
    // 0x20a138: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20a138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20a13c:
    // 0x20a13c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20a13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20a140:
    // 0x20a140: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20a140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20a144:
    // 0x20a144: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20a144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20a148:
    // 0x20a148: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20a148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20a14c:
    // 0x20a14c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20a150:
    // 0x20a150: 0x3e00008  jr          $ra
label_20a154:
    if (ctx->pc == 0x20A154u) {
        ctx->pc = 0x20A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A150u;
        // 0x20a154: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A158u;
        goto label_fallthrough_0x20a150;
    }
    ctx->pc = 0x20A150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A150u;
        // 0x20a154: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a150:
    ctx->pc = 0x20A158u;
}
