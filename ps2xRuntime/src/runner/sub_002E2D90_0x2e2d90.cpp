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

// Function: sub_002E2D90
// Address: 0x2e2d90 - 0x2e3090
void sub_002E2D90_0x2e2d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2D90_0x2e2d90");
#endif

    switch (ctx->pc) {
        case 0x2e2d90u: goto label_2e2d90;
        case 0x2e2d94u: goto label_2e2d94;
        case 0x2e2d98u: goto label_2e2d98;
        case 0x2e2d9cu: goto label_2e2d9c;
        case 0x2e2da0u: goto label_2e2da0;
        case 0x2e2da4u: goto label_2e2da4;
        case 0x2e2da8u: goto label_2e2da8;
        case 0x2e2dacu: goto label_2e2dac;
        case 0x2e2db0u: goto label_2e2db0;
        case 0x2e2db4u: goto label_2e2db4;
        case 0x2e2db8u: goto label_2e2db8;
        case 0x2e2dbcu: goto label_2e2dbc;
        case 0x2e2dc0u: goto label_2e2dc0;
        case 0x2e2dc4u: goto label_2e2dc4;
        case 0x2e2dc8u: goto label_2e2dc8;
        case 0x2e2dccu: goto label_2e2dcc;
        case 0x2e2dd0u: goto label_2e2dd0;
        case 0x2e2dd4u: goto label_2e2dd4;
        case 0x2e2dd8u: goto label_2e2dd8;
        case 0x2e2ddcu: goto label_2e2ddc;
        case 0x2e2de0u: goto label_2e2de0;
        case 0x2e2de4u: goto label_2e2de4;
        case 0x2e2de8u: goto label_2e2de8;
        case 0x2e2decu: goto label_2e2dec;
        case 0x2e2df0u: goto label_2e2df0;
        case 0x2e2df4u: goto label_2e2df4;
        case 0x2e2df8u: goto label_2e2df8;
        case 0x2e2dfcu: goto label_2e2dfc;
        case 0x2e2e00u: goto label_2e2e00;
        case 0x2e2e04u: goto label_2e2e04;
        case 0x2e2e08u: goto label_2e2e08;
        case 0x2e2e0cu: goto label_2e2e0c;
        case 0x2e2e10u: goto label_2e2e10;
        case 0x2e2e14u: goto label_2e2e14;
        case 0x2e2e18u: goto label_2e2e18;
        case 0x2e2e1cu: goto label_2e2e1c;
        case 0x2e2e20u: goto label_2e2e20;
        case 0x2e2e24u: goto label_2e2e24;
        case 0x2e2e28u: goto label_2e2e28;
        case 0x2e2e2cu: goto label_2e2e2c;
        case 0x2e2e30u: goto label_2e2e30;
        case 0x2e2e34u: goto label_2e2e34;
        case 0x2e2e38u: goto label_2e2e38;
        case 0x2e2e3cu: goto label_2e2e3c;
        case 0x2e2e40u: goto label_2e2e40;
        case 0x2e2e44u: goto label_2e2e44;
        case 0x2e2e48u: goto label_2e2e48;
        case 0x2e2e4cu: goto label_2e2e4c;
        case 0x2e2e50u: goto label_2e2e50;
        case 0x2e2e54u: goto label_2e2e54;
        case 0x2e2e58u: goto label_2e2e58;
        case 0x2e2e5cu: goto label_2e2e5c;
        case 0x2e2e60u: goto label_2e2e60;
        case 0x2e2e64u: goto label_2e2e64;
        case 0x2e2e68u: goto label_2e2e68;
        case 0x2e2e6cu: goto label_2e2e6c;
        case 0x2e2e70u: goto label_2e2e70;
        case 0x2e2e74u: goto label_2e2e74;
        case 0x2e2e78u: goto label_2e2e78;
        case 0x2e2e7cu: goto label_2e2e7c;
        case 0x2e2e80u: goto label_2e2e80;
        case 0x2e2e84u: goto label_2e2e84;
        case 0x2e2e88u: goto label_2e2e88;
        case 0x2e2e8cu: goto label_2e2e8c;
        case 0x2e2e90u: goto label_2e2e90;
        case 0x2e2e94u: goto label_2e2e94;
        case 0x2e2e98u: goto label_2e2e98;
        case 0x2e2e9cu: goto label_2e2e9c;
        case 0x2e2ea0u: goto label_2e2ea0;
        case 0x2e2ea4u: goto label_2e2ea4;
        case 0x2e2ea8u: goto label_2e2ea8;
        case 0x2e2eacu: goto label_2e2eac;
        case 0x2e2eb0u: goto label_2e2eb0;
        case 0x2e2eb4u: goto label_2e2eb4;
        case 0x2e2eb8u: goto label_2e2eb8;
        case 0x2e2ebcu: goto label_2e2ebc;
        case 0x2e2ec0u: goto label_2e2ec0;
        case 0x2e2ec4u: goto label_2e2ec4;
        case 0x2e2ec8u: goto label_2e2ec8;
        case 0x2e2eccu: goto label_2e2ecc;
        case 0x2e2ed0u: goto label_2e2ed0;
        case 0x2e2ed4u: goto label_2e2ed4;
        case 0x2e2ed8u: goto label_2e2ed8;
        case 0x2e2edcu: goto label_2e2edc;
        case 0x2e2ee0u: goto label_2e2ee0;
        case 0x2e2ee4u: goto label_2e2ee4;
        case 0x2e2ee8u: goto label_2e2ee8;
        case 0x2e2eecu: goto label_2e2eec;
        case 0x2e2ef0u: goto label_2e2ef0;
        case 0x2e2ef4u: goto label_2e2ef4;
        case 0x2e2ef8u: goto label_2e2ef8;
        case 0x2e2efcu: goto label_2e2efc;
        case 0x2e2f00u: goto label_2e2f00;
        case 0x2e2f04u: goto label_2e2f04;
        case 0x2e2f08u: goto label_2e2f08;
        case 0x2e2f0cu: goto label_2e2f0c;
        case 0x2e2f10u: goto label_2e2f10;
        case 0x2e2f14u: goto label_2e2f14;
        case 0x2e2f18u: goto label_2e2f18;
        case 0x2e2f1cu: goto label_2e2f1c;
        case 0x2e2f20u: goto label_2e2f20;
        case 0x2e2f24u: goto label_2e2f24;
        case 0x2e2f28u: goto label_2e2f28;
        case 0x2e2f2cu: goto label_2e2f2c;
        case 0x2e2f30u: goto label_2e2f30;
        case 0x2e2f34u: goto label_2e2f34;
        case 0x2e2f38u: goto label_2e2f38;
        case 0x2e2f3cu: goto label_2e2f3c;
        case 0x2e2f40u: goto label_2e2f40;
        case 0x2e2f44u: goto label_2e2f44;
        case 0x2e2f48u: goto label_2e2f48;
        case 0x2e2f4cu: goto label_2e2f4c;
        case 0x2e2f50u: goto label_2e2f50;
        case 0x2e2f54u: goto label_2e2f54;
        case 0x2e2f58u: goto label_2e2f58;
        case 0x2e2f5cu: goto label_2e2f5c;
        case 0x2e2f60u: goto label_2e2f60;
        case 0x2e2f64u: goto label_2e2f64;
        case 0x2e2f68u: goto label_2e2f68;
        case 0x2e2f6cu: goto label_2e2f6c;
        case 0x2e2f70u: goto label_2e2f70;
        case 0x2e2f74u: goto label_2e2f74;
        case 0x2e2f78u: goto label_2e2f78;
        case 0x2e2f7cu: goto label_2e2f7c;
        case 0x2e2f80u: goto label_2e2f80;
        case 0x2e2f84u: goto label_2e2f84;
        case 0x2e2f88u: goto label_2e2f88;
        case 0x2e2f8cu: goto label_2e2f8c;
        case 0x2e2f90u: goto label_2e2f90;
        case 0x2e2f94u: goto label_2e2f94;
        case 0x2e2f98u: goto label_2e2f98;
        case 0x2e2f9cu: goto label_2e2f9c;
        case 0x2e2fa0u: goto label_2e2fa0;
        case 0x2e2fa4u: goto label_2e2fa4;
        case 0x2e2fa8u: goto label_2e2fa8;
        case 0x2e2facu: goto label_2e2fac;
        case 0x2e2fb0u: goto label_2e2fb0;
        case 0x2e2fb4u: goto label_2e2fb4;
        case 0x2e2fb8u: goto label_2e2fb8;
        case 0x2e2fbcu: goto label_2e2fbc;
        case 0x2e2fc0u: goto label_2e2fc0;
        case 0x2e2fc4u: goto label_2e2fc4;
        case 0x2e2fc8u: goto label_2e2fc8;
        case 0x2e2fccu: goto label_2e2fcc;
        case 0x2e2fd0u: goto label_2e2fd0;
        case 0x2e2fd4u: goto label_2e2fd4;
        case 0x2e2fd8u: goto label_2e2fd8;
        case 0x2e2fdcu: goto label_2e2fdc;
        case 0x2e2fe0u: goto label_2e2fe0;
        case 0x2e2fe4u: goto label_2e2fe4;
        case 0x2e2fe8u: goto label_2e2fe8;
        case 0x2e2fecu: goto label_2e2fec;
        case 0x2e2ff0u: goto label_2e2ff0;
        case 0x2e2ff4u: goto label_2e2ff4;
        case 0x2e2ff8u: goto label_2e2ff8;
        case 0x2e2ffcu: goto label_2e2ffc;
        case 0x2e3000u: goto label_2e3000;
        case 0x2e3004u: goto label_2e3004;
        case 0x2e3008u: goto label_2e3008;
        case 0x2e300cu: goto label_2e300c;
        case 0x2e3010u: goto label_2e3010;
        case 0x2e3014u: goto label_2e3014;
        case 0x2e3018u: goto label_2e3018;
        case 0x2e301cu: goto label_2e301c;
        case 0x2e3020u: goto label_2e3020;
        case 0x2e3024u: goto label_2e3024;
        case 0x2e3028u: goto label_2e3028;
        case 0x2e302cu: goto label_2e302c;
        case 0x2e3030u: goto label_2e3030;
        case 0x2e3034u: goto label_2e3034;
        case 0x2e3038u: goto label_2e3038;
        case 0x2e303cu: goto label_2e303c;
        case 0x2e3040u: goto label_2e3040;
        case 0x2e3044u: goto label_2e3044;
        case 0x2e3048u: goto label_2e3048;
        case 0x2e304cu: goto label_2e304c;
        case 0x2e3050u: goto label_2e3050;
        case 0x2e3054u: goto label_2e3054;
        case 0x2e3058u: goto label_2e3058;
        case 0x2e305cu: goto label_2e305c;
        case 0x2e3060u: goto label_2e3060;
        case 0x2e3064u: goto label_2e3064;
        case 0x2e3068u: goto label_2e3068;
        case 0x2e306cu: goto label_2e306c;
        case 0x2e3070u: goto label_2e3070;
        case 0x2e3074u: goto label_2e3074;
        case 0x2e3078u: goto label_2e3078;
        case 0x2e307cu: goto label_2e307c;
        case 0x2e3080u: goto label_2e3080;
        case 0x2e3084u: goto label_2e3084;
        case 0x2e3088u: goto label_2e3088;
        case 0x2e308cu: goto label_2e308c;
        default: break;
    }

    ctx->pc = 0x2e2d90u;

label_2e2d90:
    // 0x2e2d90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2e2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2e2d94:
    // 0x2e2d94: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2e2d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2e2d98:
    // 0x2e2d98: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2e2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2e2d9c:
    // 0x2e2d9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e2d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e2da0:
    // 0x2e2da0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2e2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2e2da4:
    // 0x2e2da4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2e2da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2e2da8:
    // 0x2e2da8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2e2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2e2dac:
    // 0x2e2dac: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2e2dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2e2db0:
    // 0x2e2db0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2e2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2e2db4:
    // 0x2e2db4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e2db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2e2db8:
    // 0x2e2db8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e2db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e2dbc:
    // 0x2e2dbc: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2e2dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2e2dc0:
    // 0x2e2dc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2dc4:
    // 0x2e2dc4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2e2dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e2dc8:
    // 0x2e2dc8: 0xc05959e  jal         func_165678
label_2e2dcc:
    if (ctx->pc == 0x2E2DCCu) {
        ctx->pc = 0x2E2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DC8u;
        // 0x2e2dcc: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2DD0u;
        goto label_2e2dd0;
    }
    ctx->pc = 0x2E2DC8u;
    SET_GPR_U32(ctx, 31, 0x2E2DD0u);
    ctx->pc = 0x2E2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DC8u;
    // 0x2e2dcc: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E2DC8u, 0x2E2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2DD0u;
label_2e2dd0:
    // 0x2e2dd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2dd4:
    // 0x2e2dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e2dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2dd8:
    // 0x2e2dd8: 0xc0a352c  jal         func_28D4B0
label_2e2ddc:
    if (ctx->pc == 0x2E2DDCu) {
        ctx->pc = 0x2E2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DD8u;
        // 0x2e2ddc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2DE0u;
        goto label_2e2de0;
    }
    ctx->pc = 0x2E2DD8u;
    SET_GPR_U32(ctx, 31, 0x2E2DE0u);
    ctx->pc = 0x2E2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DD8u;
    // 0x2e2ddc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2E2DD8u, 0x2E2DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2DE0u;
label_2e2de0:
    // 0x2e2de0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e2de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2de4:
    // 0x2e2de4: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_2e2de8:
    if (ctx->pc == 0x2E2DE8u) {
        ctx->pc = 0x2E2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DE4u;
        // 0x2e2de8: 0x86820092  lh          $v0, 0x92($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2DECu;
        goto label_2e2dec;
    }
    ctx->pc = 0x2E2DE4u;
    {
        const bool branch_taken_0x2e2de4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2de4) {
            ctx->pc = 0x2E2DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2DE4u;
            // 0x2e2de8: 0x86820092  lh          $v0, 0x92($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E04u;
            goto label_2e2e04;
        }
    }
    ctx->pc = 0x2E2DECu;
label_2e2dec:
    // 0x2e2dec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2df0:
    // 0x2e2df0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e2df4:
    // 0x2e2df4: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x2e2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
label_2e2df8:
    // 0x2e2df8: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2e2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2e2dfc:
    // 0x2e2dfc: 0x10000097  b           . + 4 + (0x97 << 2)
label_2e2e00:
    if (ctx->pc == 0x2E2E00u) {
        ctx->pc = 0x2E2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DFCu;
        // 0x2e2e00: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2E04u;
        goto label_2e2e04;
    }
    ctx->pc = 0x2E2DFCu;
    {
        const bool branch_taken_0x2e2dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DFCu;
        // 0x2e2e00: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2dfc) {
            ctx->pc = 0x2E305Cu;
            goto label_2e305c;
        }
    }
    ctx->pc = 0x2E2E04u;
label_2e2e04:
    // 0x2e2e04: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2e2e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_2e2e08:
    // 0x2e2e08: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2e2e08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e2e0c:
    // 0x2e2e0c: 0x26670090  addiu       $a3, $s3, 0x90
    ctx->pc = 0x2e2e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2e2e10:
    // 0x2e2e10: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2e2e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2e2e14:
    // 0x2e2e14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e2e18:
    // 0x2e2e18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2e2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e2e1c:
    // 0x2e2e1c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e2e1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e2e20:
    // 0x2e2e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e2e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e2e24:
    // 0x2e2e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e2e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e2e28:
    // 0x2e2e28: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e2e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e2e2c:
    // 0x2e2e2c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2e2e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2e2e30:
    // 0x2e2e30: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x2e2e30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_2e2e34:
    // 0x2e2e34: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e2e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e2e38:
    // 0x2e2e38: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2e2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e2e3c:
    // 0x2e2e3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e2e3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e2e40:
    // 0x2e2e40: 0xc0cdb38  jal         func_336CE0
label_2e2e44:
    if (ctx->pc == 0x2E2E44u) {
        ctx->pc = 0x2E2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E40u;
        // 0x2e2e44: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2E48u;
        goto label_2e2e48;
    }
    ctx->pc = 0x2E2E40u;
    SET_GPR_U32(ctx, 31, 0x2E2E48u);
    ctx->pc = 0x2E2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E40u;
    // 0x2e2e44: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E2E40u, 0x2E2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E48u;
label_2e2e48:
    // 0x2e2e48: 0x8e7001a8  lw          $s0, 0x1A8($s3)
    ctx->pc = 0x2e2e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 424)));
label_2e2e4c:
    // 0x2e2e4c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2e2e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2e2e50:
    // 0x2e2e50: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_2e2e54:
    if (ctx->pc == 0x2E2E54u) {
        ctx->pc = 0x2E2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E50u;
        // 0x2e2e54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2E58u;
        goto label_2e2e58;
    }
    ctx->pc = 0x2E2E50u;
    {
        const bool branch_taken_0x2e2e50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E50u;
        // 0x2e2e54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e50) {
            ctx->pc = 0x2E2E78u;
            goto label_2e2e78;
        }
    }
    ctx->pc = 0x2E2E58u;
label_2e2e58:
    // 0x2e2e58: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x2e2e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
label_2e2e5c:
    // 0x2e2e5c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2e2e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2e2e60:
    // 0x2e2e60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2e64:
    // 0x2e2e64: 0x0  nop
    ctx->pc = 0x2e2e64u;
    // NOP
label_2e2e68:
    // 0x2e2e68: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e2e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2e6c:
    // 0x2e2e6c: 0x0  nop
    ctx->pc = 0x2e2e6cu;
    // NOP
label_2e2e70:
    // 0x2e2e70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e2e74:
    if (ctx->pc == 0x2E2E74u) {
        ctx->pc = 0x2E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E70u;
        // 0x2e2e74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2E78u;
        goto label_2e2e78;
    }
    ctx->pc = 0x2E2E70u;
    {
        const bool branch_taken_0x2e2e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E70u;
        // 0x2e2e74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e70) {
            ctx->pc = 0x2E2E80u;
            goto label_2e2e80;
        }
    }
    ctx->pc = 0x2E2E78u;
label_2e2e78:
    // 0x2e2e78: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2e2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2e2e7c:
    // 0x2e2e7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2e2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2e2e80:
    // 0x2e2e80: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2e2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2e2e84:
    // 0x2e2e84: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2e2e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2e2e88:
    // 0x2e2e88: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x2e2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
label_2e2e8c:
    // 0x2e2e8c: 0x70b02a  slt         $s6, $v1, $s0
    ctx->pc = 0x2e2e8cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2e2e90:
    // 0x2e2e90: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2e2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2e2e94:
    // 0x2e2e94: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2e2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2e2e98:
    // 0x2e2e98: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2e2e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e2e9c:
    // 0x2e2e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e2ea0:
    if (ctx->pc == 0x2E2EA0u) {
        ctx->pc = 0x2E2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E9Cu;
        // 0x2e2ea0: 0x246207d0  addiu       $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2EA4u;
        goto label_2e2ea4;
    }
    ctx->pc = 0x2E2E9Cu;
    {
        const bool branch_taken_0x2e2e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E9Cu;
        // 0x2e2ea0: 0x246207d0  addiu       $v0, $v1, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e9c) {
            ctx->pc = 0x2E2EB0u;
            goto label_2e2eb0;
        }
    }
    ctx->pc = 0x2E2EA4u;
label_2e2ea4:
    // 0x2e2ea4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e2ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2ea8:
    // 0x2e2ea8: 0xc0a36c8  jal         func_28DB20
label_2e2eac:
    if (ctx->pc == 0x2E2EACu) {
        ctx->pc = 0x2E2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EA8u;
        // 0x2e2eac: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2EB0u;
        goto label_2e2eb0;
    }
    ctx->pc = 0x2E2EA8u;
    SET_GPR_U32(ctx, 31, 0x2E2EB0u);
    ctx->pc = 0x2E2EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2EA8u;
    // 0x2e2eac: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2E2EA8u, 0x2E2EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EB0u;
label_2e2eb0:
    // 0x2e2eb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2eb4:
    // 0x2e2eb4: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2e2eb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2e2eb8:
    // 0x2e2eb8: 0x1c400067  bgtz        $v0, . + 4 + (0x67 << 2)
label_2e2ebc:
    if (ctx->pc == 0x2E2EBCu) {
        ctx->pc = 0x2E2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EB8u;
        // 0x2e2ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2EC0u;
        goto label_2e2ec0;
    }
    ctx->pc = 0x2E2EB8u;
    {
        const bool branch_taken_0x2e2eb8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2E2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EB8u;
        // 0x2e2ebc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2eb8) {
            ctx->pc = 0x2E3058u;
            goto label_2e3058;
        }
    }
    ctx->pc = 0x2E2EC0u;
label_2e2ec0:
    // 0x2e2ec0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2e2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2e2ec4:
    // 0x2e2ec4: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_2e2ec8:
    if (ctx->pc == 0x2E2EC8u) {
        ctx->pc = 0x2E2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EC4u;
        // 0x2e2ec8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2ECCu;
        goto label_2e2ecc;
    }
    ctx->pc = 0x2E2EC4u;
    {
        const bool branch_taken_0x2e2ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EC4u;
        // 0x2e2ec8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ec4) {
            ctx->pc = 0x2E2ED4u;
            goto label_2e2ed4;
        }
    }
    ctx->pc = 0x2E2ECCu;
label_2e2ecc:
    // 0x2e2ecc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e2ed0:
    if (ctx->pc == 0x2E2ED0u) {
        ctx->pc = 0x2E2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ECCu;
        // 0x2e2ed0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2ED4u;
        goto label_2e2ed4;
    }
    ctx->pc = 0x2E2ECCu;
    {
        const bool branch_taken_0x2e2ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ECCu;
        // 0x2e2ed0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ecc) {
            ctx->pc = 0x2E2F00u;
            goto label_2e2f00;
        }
    }
    ctx->pc = 0x2E2ED4u;
label_2e2ed4:
    // 0x2e2ed4: 0x3c01451c  lui         $at, 0x451C
    ctx->pc = 0x2e2ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17692 << 16));
label_2e2ed8:
    // 0x2e2ed8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2e2ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_2e2edc:
    // 0x2e2edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2ee0:
    // 0x2e2ee0: 0x0  nop
    ctx->pc = 0x2e2ee0u;
    // NOP
label_2e2ee4:
    // 0x2e2ee4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e2ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2ee8:
    // 0x2e2ee8: 0x0  nop
    ctx->pc = 0x2e2ee8u;
    // NOP
label_2e2eec:
    // 0x2e2eec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e2ef0:
    if (ctx->pc == 0x2E2EF0u) {
        ctx->pc = 0x2E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EECu;
        // 0x2e2ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2EF4u;
        goto label_2e2ef4;
    }
    ctx->pc = 0x2E2EECu;
    {
        const bool branch_taken_0x2e2eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EECu;
        // 0x2e2ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2eec) {
            ctx->pc = 0x2E2EFCu;
            goto label_2e2efc;
        }
    }
    ctx->pc = 0x2E2EF4u;
label_2e2ef4:
    // 0x2e2ef4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e2ef8:
    if (ctx->pc == 0x2E2EF8u) {
        ctx->pc = 0x2E2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EF4u;
        // 0x2e2ef8: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2EFCu;
        goto label_2e2efc;
    }
    ctx->pc = 0x2E2EF4u;
    {
        const bool branch_taken_0x2e2ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EF4u;
        // 0x2e2ef8: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ef4) {
            ctx->pc = 0x2E2F00u;
            goto label_2e2f00;
        }
    }
    ctx->pc = 0x2E2EFCu;
label_2e2efc:
    // 0x2e2efc: 0x52900a  movz        $s2, $v0, $s2
    ctx->pc = 0x2e2efcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_2e2f00:
    // 0x2e2f00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2f04:
    // 0x2e2f04: 0xc0a2ab0  jal         func_28AAC0
label_2e2f08:
    if (ctx->pc == 0x2E2F08u) {
        ctx->pc = 0x2E2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F04u;
        // 0x2e2f08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2F0Cu;
        goto label_2e2f0c;
    }
    ctx->pc = 0x2E2F04u;
    SET_GPR_U32(ctx, 31, 0x2E2F0Cu);
    ctx->pc = 0x2E2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F04u;
    // 0x2e2f08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2E2F04u, 0x2E2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F0Cu;
label_2e2f0c:
    // 0x2e2f0c: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x2e2f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2e2f10:
    // 0x2e2f10: 0x26e24b00  addiu       $v0, $s7, 0x4B00
    ctx->pc = 0x2e2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
label_2e2f14:
    // 0x2e2f14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e2f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e2f18:
    // 0x2e2f18: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e2f1c:
    // 0x2e2f1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2e2f20:
    // 0x2e2f20: 0xc0cd8ec  jal         func_3363B0
label_2e2f24:
    if (ctx->pc == 0x2E2F24u) {
        ctx->pc = 0x2E2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F20u;
        // 0x2e2f24: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2F28u;
        goto label_2e2f28;
    }
    ctx->pc = 0x2E2F20u;
    SET_GPR_U32(ctx, 31, 0x2E2F28u);
    ctx->pc = 0x2E2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F20u;
    // 0x2e2f24: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2E2F20u, 0x2E2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F28u;
label_2e2f28:
    // 0x2e2f28: 0xc66001ac  lwc1        $f0, 0x1AC($s3)
    ctx->pc = 0x2e2f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2f2c:
    // 0x2e2f2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e2f30:
    // 0x2e2f30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2e2f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e2f34:
    // 0x2e2f34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e2f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e2f38:
    // 0x2e2f38: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e2f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2e2f3c:
    // 0x2e2f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2f40:
    // 0x2e2f40: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e2f40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e2f44:
    // 0x2e2f44: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e2f44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e2f48:
    // 0x2e2f48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e2f48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e2f4c:
    // 0x2e2f4c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2e2f4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2e2f50:
    // 0x2e2f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e2f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2f54:
    // 0x2e2f54: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2e2f54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2f58:
    // 0x2e2f58: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e2f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e2f5c:
    // 0x2e2f5c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e2f5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e2f60:
    // 0x2e2f60: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e2f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e2f64:
    // 0x2e2f64: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e2f64u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e2f68:
    // 0x2e2f68: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2e2f68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e2f6c:
    // 0x2e2f6c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2e2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2e2f70:
    // 0x2e2f70: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2e2f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2e2f74:
    // 0x2e2f74: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2e2f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2e2f78:
    // 0x2e2f78: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2e2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2e2f7c:
    // 0x2e2f7c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2e2f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2e2f80:
    // 0x2e2f80: 0xc0888a2  jal         func_222288
label_2e2f84:
    if (ctx->pc == 0x2E2F84u) {
        ctx->pc = 0x2E2F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F80u;
        // 0x2e2f84: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2F88u;
        goto label_2e2f88;
    }
    ctx->pc = 0x2E2F80u;
    SET_GPR_U32(ctx, 31, 0x2E2F88u);
    ctx->pc = 0x2E2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F80u;
    // 0x2e2f84: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2E2F80u, 0x2E2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F88u;
label_2e2f88:
    // 0x2e2f88: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_2e2f8c:
    if (ctx->pc == 0x2E2F8Cu) {
        ctx->pc = 0x2E2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F88u;
        // 0x2e2f8c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2F90u;
        goto label_2e2f90;
    }
    ctx->pc = 0x2E2F88u;
    {
        const bool branch_taken_0x2e2f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f88) {
            ctx->pc = 0x2E2F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2F88u;
            // 0x2e2f8c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3018u;
            goto label_2e3018;
        }
    }
    ctx->pc = 0x2E2F90u;
label_2e2f90:
    // 0x2e2f90: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2e2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2e2f94:
    // 0x2e2f94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2e2f98:
    if (ctx->pc == 0x2E2F98u) {
        ctx->pc = 0x2E2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F94u;
        // 0x2e2f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2F9Cu;
        goto label_2e2f9c;
    }
    ctx->pc = 0x2E2F94u;
    {
        const bool branch_taken_0x2e2f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F94u;
        // 0x2e2f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f94) {
            ctx->pc = 0x2E2FB0u;
            goto label_2e2fb0;
        }
    }
    ctx->pc = 0x2E2F9Cu;
label_2e2f9c:
    // 0x2e2f9c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2e2f9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e2fa0:
    // 0x2e2fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2fa4:
    // 0x2e2fa4: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2e2fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_2e2fa8:
    // 0x2e2fa8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2e2fac:
    if (ctx->pc == 0x2E2FACu) {
        ctx->pc = 0x2E2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FA8u;
        // 0x2e2fac: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2FB0u;
        goto label_2e2fb0;
    }
    ctx->pc = 0x2E2FA8u;
    {
        const bool branch_taken_0x2e2fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FA8u;
        // 0x2e2fac: 0x7e230010  sq          $v1, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fa8) {
            ctx->pc = 0x2E3010u;
            goto label_2e3010;
        }
    }
    ctx->pc = 0x2E2FB0u;
label_2e2fb0:
    // 0x2e2fb0: 0xc0cdb38  jal         func_336CE0
label_2e2fb4:
    if (ctx->pc == 0x2E2FB4u) {
        ctx->pc = 0x2E2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FB0u;
        // 0x2e2fb4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2FB8u;
        goto label_2e2fb8;
    }
    ctx->pc = 0x2E2FB0u;
    SET_GPR_U32(ctx, 31, 0x2E2FB8u);
    ctx->pc = 0x2E2FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2FB0u;
    // 0x2e2fb4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E2FB0u, 0x2E2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2FB8u;
label_2e2fb8:
    // 0x2e2fb8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2e2fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2e2fbc:
    // 0x2e2fbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2fc0:
    // 0x2e2fc0: 0x0  nop
    ctx->pc = 0x2e2fc0u;
    // NOP
label_2e2fc4:
    // 0x2e2fc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e2fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2fc8:
    // 0x2e2fc8: 0x0  nop
    ctx->pc = 0x2e2fc8u;
    // NOP
label_2e2fcc:
    // 0x2e2fcc: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_2e2fd0:
    if (ctx->pc == 0x2E2FD0u) {
        ctx->pc = 0x2E2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FCCu;
        // 0x2e2fd0: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2FD4u;
        goto label_2e2fd4;
    }
    ctx->pc = 0x2E2FCCu;
    {
        const bool branch_taken_0x2e2fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2fcc) {
            ctx->pc = 0x2E2FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2FCCu;
            // 0x2e2fd0: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3014u;
            goto label_2e3014;
        }
    }
    ctx->pc = 0x2E2FD4u;
label_2e2fd4:
    // 0x2e2fd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2fd8:
    // 0x2e2fd8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2e2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2e2fdc:
    // 0x2e2fdc: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x2e2fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2e2fe0:
    // 0x2e2fe0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2e2fe4:
    if (ctx->pc == 0x2E2FE4u) {
        ctx->pc = 0x2E2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FE0u;
        // 0x2e2fe4: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2FE8u;
        goto label_2e2fe8;
    }
    ctx->pc = 0x2E2FE0u;
    {
        const bool branch_taken_0x2e2fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fe0) {
            ctx->pc = 0x2E2FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2FE0u;
            // 0x2e2fe4: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3014u;
            goto label_2e3014;
        }
    }
    ctx->pc = 0x2E2FE8u;
label_2e2fe8:
    // 0x2e2fe8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2e2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2e2fec:
    // 0x2e2fec: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2e2fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2e2ff0:
    // 0x2e2ff0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2e2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2e2ff4:
    // 0x2e2ff4: 0x40f809  jalr        $v0
label_2e2ff8:
    if (ctx->pc == 0x2E2FF8u) {
        ctx->pc = 0x2E2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FF4u;
        // 0x2e2ff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2FFCu;
        goto label_2e2ffc;
    }
    ctx->pc = 0x2E2FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E2FFCu);
        ctx->pc = 0x2E2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FF4u;
        // 0x2e2ff8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2FF4u, 0x2E2FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2FFCu;
label_2e2ffc:
    // 0x2e2ffc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2e3000:
    // 0x2e3000: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2e3004:
    if (ctx->pc == 0x2E3004u) {
        ctx->pc = 0x2E3004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3000u;
        // 0x2e3004: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3008u;
        goto label_2e3008;
    }
    ctx->pc = 0x2E3000u;
    {
        const bool branch_taken_0x2e3000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e3000) {
            ctx->pc = 0x2E3004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3000u;
            // 0x2e3004: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3014u;
            goto label_2e3014;
        }
    }
    ctx->pc = 0x2E3008u;
label_2e3008:
    // 0x2e3008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e300c:
    // 0x2e300c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2e3010:
    // 0x2e3010: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2e3010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2e3014:
    // 0x2e3014: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e3014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2e3018:
    // 0x2e3018: 0xc0a367c  jal         func_28D9F0
label_2e301c:
    if (ctx->pc == 0x2E301Cu) {
        ctx->pc = 0x2E301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3018u;
        // 0x2e301c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3020u;
        goto label_2e3020;
    }
    ctx->pc = 0x2E3018u;
    SET_GPR_U32(ctx, 31, 0x2E3020u);
    ctx->pc = 0x2E301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3018u;
    // 0x2e301c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E3018u, 0x2E3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3020u;
label_2e3020:
    // 0x2e3020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e3024:
    // 0x2e3024: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2e3028:
    if (ctx->pc == 0x2E3028u) {
        ctx->pc = 0x2E3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3024u;
        // 0x2e3028: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E302Cu;
        goto label_2e302c;
    }
    ctx->pc = 0x2E3024u;
    {
        const bool branch_taken_0x2e3024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3024u;
        // 0x2e3028: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3024) {
            ctx->pc = 0x2E3058u;
            goto label_2e3058;
        }
    }
    ctx->pc = 0x2E302Cu;
label_2e302c:
    // 0x2e302c: 0x240901f4  addiu       $t1, $zero, 0x1F4
    ctx->pc = 0x2e302cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2e3030:
    // 0x2e3030: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e3030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e3034:
    // 0x2e3034: 0x16480a  movz        $t1, $zero, $s6
    ctx->pc = 0x2e3034u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_2e3038:
    // 0x2e3038: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e3038u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2e303c:
    // 0x2e303c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e303cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e3040:
    // 0x2e3040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e3044:
    // 0x2e3044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e3044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e3048:
    // 0x2e3048: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e3048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e304c:
    // 0x2e304c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e304cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3050:
    // 0x2e3050: 0xc0bee7a  jal         func_2FB9E8
label_2e3054:
    if (ctx->pc == 0x2E3054u) {
        ctx->pc = 0x2E3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3050u;
        // 0x2e3054: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3058u;
        goto label_2e3058;
    }
    ctx->pc = 0x2E3050u;
    SET_GPR_U32(ctx, 31, 0x2E3058u);
    ctx->pc = 0x2E3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3050u;
    // 0x2e3054: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2E3050u, 0x2E3058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3058u;
label_2e3058:
    // 0x2e3058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e3058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e305c:
    // 0x2e305c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2e305cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e3060:
    // 0x2e3060: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2e3060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e3064:
    // 0x2e3064: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2e3064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e3068:
    // 0x2e3068: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2e3068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e306c:
    // 0x2e306c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2e306cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e3070:
    // 0x2e3070: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2e3070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e3074:
    // 0x2e3074: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2e3074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e3078:
    // 0x2e3078: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e3078u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e307c:
    // 0x2e307c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e307cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e3080:
    // 0x2e3080: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2e3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e3084:
    // 0x2e3084: 0x3e00008  jr          $ra
label_2e3088:
    if (ctx->pc == 0x2E3088u) {
        ctx->pc = 0x2E3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3084u;
        // 0x2e3088: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E308Cu;
        goto label_2e308c;
    }
    ctx->pc = 0x2E3084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3084u;
        // 0x2e3088: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E308Cu;
label_2e308c:
    // 0x2e308c: 0x0  nop
    ctx->pc = 0x2e308cu;
    // NOP
    ctx->pc = 0x2e3090u;
}
