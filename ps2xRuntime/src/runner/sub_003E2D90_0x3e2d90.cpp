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

// Function: sub_003E2D90
// Address: 0x3e2d90 - 0x3e3058
void sub_003E2D90_0x3e2d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2D90_0x3e2d90");
#endif

    switch (ctx->pc) {
        case 0x3e2d90u: goto label_3e2d90;
        case 0x3e2d94u: goto label_3e2d94;
        case 0x3e2d98u: goto label_3e2d98;
        case 0x3e2d9cu: goto label_3e2d9c;
        case 0x3e2da0u: goto label_3e2da0;
        case 0x3e2da4u: goto label_3e2da4;
        case 0x3e2da8u: goto label_3e2da8;
        case 0x3e2dacu: goto label_3e2dac;
        case 0x3e2db0u: goto label_3e2db0;
        case 0x3e2db4u: goto label_3e2db4;
        case 0x3e2db8u: goto label_3e2db8;
        case 0x3e2dbcu: goto label_3e2dbc;
        case 0x3e2dc0u: goto label_3e2dc0;
        case 0x3e2dc4u: goto label_3e2dc4;
        case 0x3e2dc8u: goto label_3e2dc8;
        case 0x3e2dccu: goto label_3e2dcc;
        case 0x3e2dd0u: goto label_3e2dd0;
        case 0x3e2dd4u: goto label_3e2dd4;
        case 0x3e2dd8u: goto label_3e2dd8;
        case 0x3e2ddcu: goto label_3e2ddc;
        case 0x3e2de0u: goto label_3e2de0;
        case 0x3e2de4u: goto label_3e2de4;
        case 0x3e2de8u: goto label_3e2de8;
        case 0x3e2decu: goto label_3e2dec;
        case 0x3e2df0u: goto label_3e2df0;
        case 0x3e2df4u: goto label_3e2df4;
        case 0x3e2df8u: goto label_3e2df8;
        case 0x3e2dfcu: goto label_3e2dfc;
        case 0x3e2e00u: goto label_3e2e00;
        case 0x3e2e04u: goto label_3e2e04;
        case 0x3e2e08u: goto label_3e2e08;
        case 0x3e2e0cu: goto label_3e2e0c;
        case 0x3e2e10u: goto label_3e2e10;
        case 0x3e2e14u: goto label_3e2e14;
        case 0x3e2e18u: goto label_3e2e18;
        case 0x3e2e1cu: goto label_3e2e1c;
        case 0x3e2e20u: goto label_3e2e20;
        case 0x3e2e24u: goto label_3e2e24;
        case 0x3e2e28u: goto label_3e2e28;
        case 0x3e2e2cu: goto label_3e2e2c;
        case 0x3e2e30u: goto label_3e2e30;
        case 0x3e2e34u: goto label_3e2e34;
        case 0x3e2e38u: goto label_3e2e38;
        case 0x3e2e3cu: goto label_3e2e3c;
        case 0x3e2e40u: goto label_3e2e40;
        case 0x3e2e44u: goto label_3e2e44;
        case 0x3e2e48u: goto label_3e2e48;
        case 0x3e2e4cu: goto label_3e2e4c;
        case 0x3e2e50u: goto label_3e2e50;
        case 0x3e2e54u: goto label_3e2e54;
        case 0x3e2e58u: goto label_3e2e58;
        case 0x3e2e5cu: goto label_3e2e5c;
        case 0x3e2e60u: goto label_3e2e60;
        case 0x3e2e64u: goto label_3e2e64;
        case 0x3e2e68u: goto label_3e2e68;
        case 0x3e2e6cu: goto label_3e2e6c;
        case 0x3e2e70u: goto label_3e2e70;
        case 0x3e2e74u: goto label_3e2e74;
        case 0x3e2e78u: goto label_3e2e78;
        case 0x3e2e7cu: goto label_3e2e7c;
        case 0x3e2e80u: goto label_3e2e80;
        case 0x3e2e84u: goto label_3e2e84;
        case 0x3e2e88u: goto label_3e2e88;
        case 0x3e2e8cu: goto label_3e2e8c;
        case 0x3e2e90u: goto label_3e2e90;
        case 0x3e2e94u: goto label_3e2e94;
        case 0x3e2e98u: goto label_3e2e98;
        case 0x3e2e9cu: goto label_3e2e9c;
        case 0x3e2ea0u: goto label_3e2ea0;
        case 0x3e2ea4u: goto label_3e2ea4;
        case 0x3e2ea8u: goto label_3e2ea8;
        case 0x3e2eacu: goto label_3e2eac;
        case 0x3e2eb0u: goto label_3e2eb0;
        case 0x3e2eb4u: goto label_3e2eb4;
        case 0x3e2eb8u: goto label_3e2eb8;
        case 0x3e2ebcu: goto label_3e2ebc;
        case 0x3e2ec0u: goto label_3e2ec0;
        case 0x3e2ec4u: goto label_3e2ec4;
        case 0x3e2ec8u: goto label_3e2ec8;
        case 0x3e2eccu: goto label_3e2ecc;
        case 0x3e2ed0u: goto label_3e2ed0;
        case 0x3e2ed4u: goto label_3e2ed4;
        case 0x3e2ed8u: goto label_3e2ed8;
        case 0x3e2edcu: goto label_3e2edc;
        case 0x3e2ee0u: goto label_3e2ee0;
        case 0x3e2ee4u: goto label_3e2ee4;
        case 0x3e2ee8u: goto label_3e2ee8;
        case 0x3e2eecu: goto label_3e2eec;
        case 0x3e2ef0u: goto label_3e2ef0;
        case 0x3e2ef4u: goto label_3e2ef4;
        case 0x3e2ef8u: goto label_3e2ef8;
        case 0x3e2efcu: goto label_3e2efc;
        case 0x3e2f00u: goto label_3e2f00;
        case 0x3e2f04u: goto label_3e2f04;
        case 0x3e2f08u: goto label_3e2f08;
        case 0x3e2f0cu: goto label_3e2f0c;
        case 0x3e2f10u: goto label_3e2f10;
        case 0x3e2f14u: goto label_3e2f14;
        case 0x3e2f18u: goto label_3e2f18;
        case 0x3e2f1cu: goto label_3e2f1c;
        case 0x3e2f20u: goto label_3e2f20;
        case 0x3e2f24u: goto label_3e2f24;
        case 0x3e2f28u: goto label_3e2f28;
        case 0x3e2f2cu: goto label_3e2f2c;
        case 0x3e2f30u: goto label_3e2f30;
        case 0x3e2f34u: goto label_3e2f34;
        case 0x3e2f38u: goto label_3e2f38;
        case 0x3e2f3cu: goto label_3e2f3c;
        case 0x3e2f40u: goto label_3e2f40;
        case 0x3e2f44u: goto label_3e2f44;
        case 0x3e2f48u: goto label_3e2f48;
        case 0x3e2f4cu: goto label_3e2f4c;
        case 0x3e2f50u: goto label_3e2f50;
        case 0x3e2f54u: goto label_3e2f54;
        case 0x3e2f58u: goto label_3e2f58;
        case 0x3e2f5cu: goto label_3e2f5c;
        case 0x3e2f60u: goto label_3e2f60;
        case 0x3e2f64u: goto label_3e2f64;
        case 0x3e2f68u: goto label_3e2f68;
        case 0x3e2f6cu: goto label_3e2f6c;
        case 0x3e2f70u: goto label_3e2f70;
        case 0x3e2f74u: goto label_3e2f74;
        case 0x3e2f78u: goto label_3e2f78;
        case 0x3e2f7cu: goto label_3e2f7c;
        case 0x3e2f80u: goto label_3e2f80;
        case 0x3e2f84u: goto label_3e2f84;
        case 0x3e2f88u: goto label_3e2f88;
        case 0x3e2f8cu: goto label_3e2f8c;
        case 0x3e2f90u: goto label_3e2f90;
        case 0x3e2f94u: goto label_3e2f94;
        case 0x3e2f98u: goto label_3e2f98;
        case 0x3e2f9cu: goto label_3e2f9c;
        case 0x3e2fa0u: goto label_3e2fa0;
        case 0x3e2fa4u: goto label_3e2fa4;
        case 0x3e2fa8u: goto label_3e2fa8;
        case 0x3e2facu: goto label_3e2fac;
        case 0x3e2fb0u: goto label_3e2fb0;
        case 0x3e2fb4u: goto label_3e2fb4;
        case 0x3e2fb8u: goto label_3e2fb8;
        case 0x3e2fbcu: goto label_3e2fbc;
        case 0x3e2fc0u: goto label_3e2fc0;
        case 0x3e2fc4u: goto label_3e2fc4;
        case 0x3e2fc8u: goto label_3e2fc8;
        case 0x3e2fccu: goto label_3e2fcc;
        case 0x3e2fd0u: goto label_3e2fd0;
        case 0x3e2fd4u: goto label_3e2fd4;
        case 0x3e2fd8u: goto label_3e2fd8;
        case 0x3e2fdcu: goto label_3e2fdc;
        case 0x3e2fe0u: goto label_3e2fe0;
        case 0x3e2fe4u: goto label_3e2fe4;
        case 0x3e2fe8u: goto label_3e2fe8;
        case 0x3e2fecu: goto label_3e2fec;
        case 0x3e2ff0u: goto label_3e2ff0;
        case 0x3e2ff4u: goto label_3e2ff4;
        case 0x3e2ff8u: goto label_3e2ff8;
        case 0x3e2ffcu: goto label_3e2ffc;
        case 0x3e3000u: goto label_3e3000;
        case 0x3e3004u: goto label_3e3004;
        case 0x3e3008u: goto label_3e3008;
        case 0x3e300cu: goto label_3e300c;
        case 0x3e3010u: goto label_3e3010;
        case 0x3e3014u: goto label_3e3014;
        case 0x3e3018u: goto label_3e3018;
        case 0x3e301cu: goto label_3e301c;
        case 0x3e3020u: goto label_3e3020;
        case 0x3e3024u: goto label_3e3024;
        case 0x3e3028u: goto label_3e3028;
        case 0x3e302cu: goto label_3e302c;
        case 0x3e3030u: goto label_3e3030;
        case 0x3e3034u: goto label_3e3034;
        case 0x3e3038u: goto label_3e3038;
        case 0x3e303cu: goto label_3e303c;
        case 0x3e3040u: goto label_3e3040;
        case 0x3e3044u: goto label_3e3044;
        case 0x3e3048u: goto label_3e3048;
        case 0x3e304cu: goto label_3e304c;
        case 0x3e3050u: goto label_3e3050;
        case 0x3e3054u: goto label_3e3054;
        default: break;
    }

    ctx->pc = 0x3e2d90u;

label_3e2d90:
    // 0x3e2d90: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x3e2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_3e2d94:
    // 0x3e2d94: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x3e2d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_3e2d98:
    // 0x3e2d98: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x3e2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_3e2d9c:
    // 0x3e2d9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e2d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e2da0:
    // 0x3e2da0: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x3e2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_3e2da4:
    // 0x3e2da4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e2da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e2da8:
    // 0x3e2da8: 0x7fb30870  sq          $s3, 0x870($sp)
    ctx->pc = 0x3e2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 19));
label_3e2dac:
    // 0x3e2dac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_3e2db0:
    if (ctx->pc == 0x3E2DB0u) {
        ctx->pc = 0x3E2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DACu;
        // 0x3e2db0: 0xffbf0860  sd          $ra, 0x860($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2DB4u;
        goto label_3e2db4;
    }
    ctx->pc = 0x3E2DACu;
    {
        const bool branch_taken_0x3e2dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DACu;
        // 0x3e2db0: 0xffbf0860  sd          $ra, 0x860($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2dac) {
            ctx->pc = 0x3E2DC8u;
            goto label_3e2dc8;
        }
    }
    ctx->pc = 0x3E2DB4u;
label_3e2db4:
    // 0x3e2db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2db8:
    // 0x3e2db8: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
label_3e2dbc:
    if (ctx->pc == 0x3E2DBCu) {
        ctx->pc = 0x3E2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DB8u;
        // 0x3e2dbc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2DC0u;
        goto label_3e2dc0;
    }
    ctx->pc = 0x3E2DB8u;
    {
        const bool branch_taken_0x3e2db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DB8u;
        // 0x3e2dbc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2db8) {
            ctx->pc = 0x3E2E3Cu;
            goto label_3e2e3c;
        }
    }
    ctx->pc = 0x3E2DC0u;
label_3e2dc0:
    // 0x3e2dc0: 0x1000009f  b           . + 4 + (0x9F << 2)
label_3e2dc4:
    if (ctx->pc == 0x3E2DC4u) {
        ctx->pc = 0x3E2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DC0u;
        // 0x3e2dc4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2DC8u;
        goto label_3e2dc8;
    }
    ctx->pc = 0x3E2DC0u;
    {
        const bool branch_taken_0x3e2dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DC0u;
        // 0x3e2dc4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2dc0) {
            ctx->pc = 0x3E3040u;
            goto label_3e3040;
        }
    }
    ctx->pc = 0x3E2DC8u;
label_3e2dc8:
    // 0x3e2dc8: 0xc0ea14c  jal         func_3A8530
label_3e2dcc:
    if (ctx->pc == 0x3E2DCCu) {
        ctx->pc = 0x3E2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2DC8u;
        // 0x3e2dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2DD0u;
        goto label_3e2dd0;
    }
    ctx->pc = 0x3E2DC8u;
    SET_GPR_U32(ctx, 31, 0x3E2DD0u);
    ctx->pc = 0x3E2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2DC8u;
    // 0x3e2dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E2DC8u, 0x3E2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2DD0u;
label_3e2dd0:
    // 0x3e2dd0: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3e2dd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3e2dd4:
    // 0x3e2dd4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e2dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e2dd8:
    // 0x3e2dd8: 0x8e4900c8  lw          $t1, 0xC8($s2)
    ctx->pc = 0x3e2dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_3e2ddc:
    // 0x3e2ddc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e2ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e2de0:
    // 0x3e2de0: 0x7a420080  lq          $v0, 0x80($s2)
    ctx->pc = 0x3e2de0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_3e2de4:
    // 0x3e2de4: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3e2de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e2de8:
    // 0x3e2de8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3e2de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3e2dec:
    // 0x3e2dec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e2decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e2df0:
    // 0x3e2df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e2df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2df4:
    // 0x3e2df4: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3e2df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e2df8:
    // 0x3e2df8: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3e2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3e2dfc:
    // 0x3e2dfc: 0x27a70430  addiu       $a3, $sp, 0x430
    ctx->pc = 0x3e2dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e2e00:
    // 0x3e2e00: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3e2e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3e2e04:
    // 0x3e2e04: 0x27a80440  addiu       $t0, $sp, 0x440
    ctx->pc = 0x3e2e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e2e08:
    // 0x3e2e08: 0xe7a00430  swc1        $f0, 0x430($sp)
    ctx->pc = 0x3e2e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3e2e0c:
    // 0x3e2e0c: 0x261053c8  addiu       $s0, $s0, 0x53C8
    ctx->pc = 0x3e2e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21448));
label_3e2e10:
    // 0x3e2e10: 0xc0e9fd0  jal         func_3A7F40
label_3e2e14:
    if (ctx->pc == 0x3E2E14u) {
        ctx->pc = 0x3E2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E10u;
        // 0x3e2e14: 0xafa90440  sw          $t1, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E18u;
        goto label_3e2e18;
    }
    ctx->pc = 0x3E2E10u;
    SET_GPR_U32(ctx, 31, 0x3E2E18u);
    ctx->pc = 0x3E2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E10u;
    // 0x3e2e14: 0xafa90440  sw          $t1, 0x440($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3E2E10u, 0x3E2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E18u;
label_3e2e18:
    // 0x3e2e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e1c:
    // 0x3e2e1c: 0xc0f15bc  jal         func_3C56F0
label_3e2e20:
    if (ctx->pc == 0x3E2E20u) {
        ctx->pc = 0x3E2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E1Cu;
        // 0x3e2e20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E24u;
        goto label_3e2e24;
    }
    ctx->pc = 0x3E2E1Cu;
    SET_GPR_U32(ctx, 31, 0x3E2E24u);
    ctx->pc = 0x3E2E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E1Cu;
    // 0x3e2e20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E2E1Cu, 0x3E2E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E24u;
label_3e2e24:
    // 0x3e2e24: 0xc0e91b2  jal         func_3A46C8
label_3e2e28:
    if (ctx->pc == 0x3E2E28u) {
        ctx->pc = 0x3E2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E24u;
        // 0x3e2e28: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E2Cu;
        goto label_3e2e2c;
    }
    ctx->pc = 0x3E2E24u;
    SET_GPR_U32(ctx, 31, 0x3E2E2Cu);
    ctx->pc = 0x3E2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E24u;
    // 0x3e2e28: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3E2E24u, 0x3E2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E2Cu;
label_3e2e2c:
    // 0x3e2e2c: 0xc0e91b2  jal         func_3A46C8
label_3e2e30:
    if (ctx->pc == 0x3E2E30u) {
        ctx->pc = 0x3E2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E2Cu;
        // 0x3e2e30: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E34u;
        goto label_3e2e34;
    }
    ctx->pc = 0x3E2E2Cu;
    SET_GPR_U32(ctx, 31, 0x3E2E34u);
    ctx->pc = 0x3E2E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E2Cu;
    // 0x3e2e30: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3E2E2Cu, 0x3E2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E34u;
label_3e2e34:
    // 0x3e2e34: 0x10000082  b           . + 4 + (0x82 << 2)
label_3e2e38:
    if (ctx->pc == 0x3E2E38u) {
        ctx->pc = 0x3E2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E34u;
        // 0x3e2e38: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E3Cu;
        goto label_3e2e3c;
    }
    ctx->pc = 0x3E2E34u;
    {
        const bool branch_taken_0x3e2e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E34u;
        // 0x3e2e38: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e34) {
            ctx->pc = 0x3E3040u;
            goto label_3e3040;
        }
    }
    ctx->pc = 0x3E2E3Cu;
label_3e2e3c:
    // 0x3e2e3c: 0xc0ea12a  jal         func_3A84A8
label_3e2e40:
    if (ctx->pc == 0x3E2E40u) {
        ctx->pc = 0x3E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E3Cu;
        // 0x3e2e40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E44u;
        goto label_3e2e44;
    }
    ctx->pc = 0x3E2E3Cu;
    SET_GPR_U32(ctx, 31, 0x3E2E44u);
    ctx->pc = 0x3E2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E3Cu;
    // 0x3e2e40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E2E3Cu, 0x3E2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E44u;
label_3e2e44:
    // 0x3e2e44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e2e44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e2e48:
    // 0x3e2e48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e2e4c:
    // 0x3e2e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e2e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e50:
    // 0x3e2e50: 0xc0ea12a  jal         func_3A84A8
label_3e2e54:
    if (ctx->pc == 0x3E2E54u) {
        ctx->pc = 0x3E2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E50u;
        // 0x3e2e54: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E58u;
        goto label_3e2e58;
    }
    ctx->pc = 0x3E2E50u;
    SET_GPR_U32(ctx, 31, 0x3E2E58u);
    ctx->pc = 0x3E2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E50u;
    // 0x3e2e54: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E2E50u, 0x3E2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E58u;
label_3e2e58:
    // 0x3e2e58: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e2e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e2e5c:
    // 0x3e2e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e60:
    // 0x3e2e60: 0xc0ea146  jal         func_3A8518
label_3e2e64:
    if (ctx->pc == 0x3E2E64u) {
        ctx->pc = 0x3E2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E60u;
        // 0x3e2e64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E68u;
        goto label_3e2e68;
    }
    ctx->pc = 0x3E2E60u;
    SET_GPR_U32(ctx, 31, 0x3E2E68u);
    ctx->pc = 0x3E2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E60u;
    // 0x3e2e64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E2E60u, 0x3E2E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E68u;
label_3e2e68:
    // 0x3e2e68: 0xc0ea146  jal         func_3A8518
label_3e2e6c:
    if (ctx->pc == 0x3E2E6Cu) {
        ctx->pc = 0x3E2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E68u;
        // 0x3e2e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E70u;
        goto label_3e2e70;
    }
    ctx->pc = 0x3E2E68u;
    SET_GPR_U32(ctx, 31, 0x3E2E70u);
    ctx->pc = 0x3E2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E68u;
    // 0x3e2e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E2E68u, 0x3E2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E70u;
label_3e2e70:
    // 0x3e2e70: 0xc0ea14c  jal         func_3A8530
label_3e2e74:
    if (ctx->pc == 0x3E2E74u) {
        ctx->pc = 0x3E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E70u;
        // 0x3e2e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E78u;
        goto label_3e2e78;
    }
    ctx->pc = 0x3E2E70u;
    SET_GPR_U32(ctx, 31, 0x3E2E78u);
    ctx->pc = 0x3E2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E70u;
    // 0x3e2e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E2E70u, 0x3E2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E78u;
label_3e2e78:
    // 0x3e2e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e7c:
    // 0x3e2e7c: 0xc0ea14c  jal         func_3A8530
label_3e2e80:
    if (ctx->pc == 0x3E2E80u) {
        ctx->pc = 0x3E2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E7Cu;
        // 0x3e2e80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E84u;
        goto label_3e2e84;
    }
    ctx->pc = 0x3E2E7Cu;
    SET_GPR_U32(ctx, 31, 0x3E2E84u);
    ctx->pc = 0x3E2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2E7Cu;
    // 0x3e2e80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E2E7Cu, 0x3E2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2E84u;
label_3e2e84:
    // 0x3e2e84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2e88:
    // 0x3e2e88: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e2e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e2e8c:
    // 0x3e2e8c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e2e90:
    // 0x3e2e90: 0x40f809  jalr        $v0
label_3e2e94:
    if (ctx->pc == 0x3E2E94u) {
        ctx->pc = 0x3E2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E90u;
        // 0x3e2e94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E98u;
        goto label_3e2e98;
    }
    ctx->pc = 0x3E2E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E2E98u);
        ctx->pc = 0x3E2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E90u;
        // 0x3e2e94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2E90u, 0x3E2E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E2E98u;
label_3e2e98:
    // 0x3e2e98: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3e2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3e2e9c:
    // 0x3e2e9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e2e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e2ea0:
    // 0x3e2ea0: 0x54400067  bnel        $v0, $zero, . + 4 + (0x67 << 2)
label_3e2ea4:
    if (ctx->pc == 0x3E2EA4u) {
        ctx->pc = 0x3E2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EA0u;
        // 0x3e2ea4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2EA8u;
        goto label_3e2ea8;
    }
    ctx->pc = 0x3E2EA0u;
    {
        const bool branch_taken_0x3e2ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2ea0) {
            ctx->pc = 0x3E2EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2EA0u;
            // 0x3e2ea4: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3040u;
            goto label_3e3040;
        }
    }
    ctx->pc = 0x3E2EA8u;
label_3e2ea8:
    // 0x3e2ea8: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x3e2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_3e2eac:
    // 0x3e2eac: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3e2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e2eb0:
    // 0x3e2eb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e2eb4:
    // 0x3e2eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e2eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e2eb8:
    // 0x3e2eb8: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x3e2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_3e2ebc:
    // 0x3e2ebc: 0xafb20044  sw          $s2, 0x44($sp)
    ctx->pc = 0x3e2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 18));
label_3e2ec0:
    // 0x3e2ec0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e2ec4:
    // 0x3e2ec4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3e2ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3e2ec8:
    // 0x3e2ec8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3e2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3e2ecc:
    // 0x3e2ecc: 0x40f809  jalr        $v0
label_3e2ed0:
    if (ctx->pc == 0x3E2ED0u) {
        ctx->pc = 0x3E2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2ECCu;
        // 0x3e2ed0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2ED4u;
        goto label_3e2ed4;
    }
    ctx->pc = 0x3E2ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E2ED4u);
        ctx->pc = 0x3E2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2ECCu;
        // 0x3e2ed0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2ECCu, 0x3E2ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E2ED4u;
label_3e2ed4:
    // 0x3e2ed4: 0xc0e933a  jal         func_3A4CE8
label_3e2ed8:
    if (ctx->pc == 0x3E2ED8u) {
        ctx->pc = 0x3E2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2ED4u;
        // 0x3e2ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2EDCu;
        goto label_3e2edc;
    }
    ctx->pc = 0x3E2ED4u;
    SET_GPR_U32(ctx, 31, 0x3E2EDCu);
    ctx->pc = 0x3E2ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2ED4u;
    // 0x3e2ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CE8u, 0x3E2ED4u, 0x3E2EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2EDCu;
label_3e2edc:
    // 0x3e2edc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e2edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e2ee0:
    // 0x3e2ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e2ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2ee4:
    // 0x3e2ee4: 0xc0e9352  jal         func_3A4D48
label_3e2ee8:
    if (ctx->pc == 0x3E2EE8u) {
        ctx->pc = 0x3E2EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EE4u;
        // 0x3e2ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2EECu;
        goto label_3e2eec;
    }
    ctx->pc = 0x3E2EE4u;
    SET_GPR_U32(ctx, 31, 0x3E2EECu);
    ctx->pc = 0x3E2EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2EE4u;
    // 0x3e2ee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D48u, 0x3E2EE4u, 0x3E2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2EECu;
label_3e2eec:
    // 0x3e2eec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3e2ef0:
    if (ctx->pc == 0x3E2EF0u) {
        ctx->pc = 0x3E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EECu;
        // 0x3e2ef0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2EF4u;
        goto label_3e2ef4;
    }
    ctx->pc = 0x3E2EECu;
    {
        const bool branch_taken_0x3e2eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EECu;
        // 0x3e2ef0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2eec) {
            ctx->pc = 0x3E2F08u;
            goto label_3e2f08;
        }
    }
    ctx->pc = 0x3E2EF4u;
label_3e2ef4:
    // 0x3e2ef4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3e2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e2ef8:
    // 0x3e2ef8: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x3e2ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_3e2efc:
    // 0x3e2efc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3e2efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3e2f00:
    // 0x3e2f00: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e2f04:
    if (ctx->pc == 0x3E2F04u) {
        ctx->pc = 0x3E2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F00u;
        // 0x3e2f04: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2F08u;
        goto label_3e2f08;
    }
    ctx->pc = 0x3E2F00u;
    {
        const bool branch_taken_0x3e2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F00u;
        // 0x3e2f04: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f00) {
            ctx->pc = 0x3E2F1Cu;
            goto label_3e2f1c;
        }
    }
    ctx->pc = 0x3E2F08u;
label_3e2f08:
    // 0x3e2f08: 0xc0e9404  jal         func_3A5010
label_3e2f0c:
    if (ctx->pc == 0x3E2F0Cu) {
        ctx->pc = 0x3E2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F08u;
        // 0x3e2f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2F10u;
        goto label_3e2f10;
    }
    ctx->pc = 0x3E2F08u;
    SET_GPR_U32(ctx, 31, 0x3E2F10u);
    ctx->pc = 0x3E2F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F08u;
    // 0x3e2f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3E2F08u, 0x3E2F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F10u;
label_3e2f10:
    // 0x3e2f10: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e2f14:
    // 0x3e2f14: 0x3463ff70  ori         $v1, $v1, 0xFF70
    ctx->pc = 0x3e2f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65392);
label_3e2f18:
    // 0x3e2f18: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3e2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3e2f1c:
    // 0x3e2f1c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3e2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e2f20:
    // 0x3e2f20: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
label_3e2f24:
    if (ctx->pc == 0x3E2F24u) {
        ctx->pc = 0x3E2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F20u;
        // 0x3e2f24: 0x8e4800c8  lw          $t0, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2F28u;
        goto label_3e2f28;
    }
    ctx->pc = 0x3E2F20u;
    {
        const bool branch_taken_0x3e2f20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F20u;
        // 0x3e2f24: 0x8e4800c8  lw          $t0, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f20) {
            ctx->pc = 0x3E2F84u;
            goto label_3e2f84;
        }
    }
    ctx->pc = 0x3E2F28u;
label_3e2f28:
    // 0x3e2f28: 0x27b10450  addiu       $s1, $sp, 0x450
    ctx->pc = 0x3e2f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e2f2c:
    // 0x3e2f2c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3e2f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3e2f30:
    // 0x3e2f30: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e2f30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e2f34:
    // 0x3e2f34: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x3e2f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_3e2f38:
    // 0x3e2f38: 0x261053d8  addiu       $s0, $s0, 0x53D8
    ctx->pc = 0x3e2f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21464));
label_3e2f3c:
    // 0x3e2f3c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3e2f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3e2f40:
    // 0x3e2f40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e2f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e2f44:
    // 0x3e2f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e2f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2f48:
    // 0x3e2f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e2f4c:
    // 0x3e2f4c: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x3e2f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
label_3e2f50:
    // 0x3e2f50: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3e2f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e2f54:
    // 0x3e2f54: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3e2f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3e2f58:
    // 0x3e2f58: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3e2f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3e2f5c:
    // 0x3e2f5c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3e2f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3e2f60:
    // 0x3e2f60: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x3e2f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3e2f64:
    // 0x3e2f64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3e2f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3e2f68:
    // 0x3e2f68: 0xc0e9fd0  jal         func_3A7F40
label_3e2f6c:
    if (ctx->pc == 0x3E2F6Cu) {
        ctx->pc = 0x3E2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F68u;
        // 0x3e2f6c: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2F70u;
        goto label_3e2f70;
    }
    ctx->pc = 0x3E2F68u;
    SET_GPR_U32(ctx, 31, 0x3E2F70u);
    ctx->pc = 0x3E2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F68u;
    // 0x3e2f6c: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3E2F68u, 0x3E2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F70u;
label_3e2f70:
    // 0x3e2f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2f74:
    // 0x3e2f74: 0xc0f15bc  jal         func_3C56F0
label_3e2f78:
    if (ctx->pc == 0x3E2F78u) {
        ctx->pc = 0x3E2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F74u;
        // 0x3e2f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2F7Cu;
        goto label_3e2f7c;
    }
    ctx->pc = 0x3E2F74u;
    SET_GPR_U32(ctx, 31, 0x3E2F7Cu);
    ctx->pc = 0x3E2F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F74u;
    // 0x3e2f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E2F74u, 0x3E2F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2F7Cu;
label_3e2f7c:
    // 0x3e2f7c: 0x10000016  b           . + 4 + (0x16 << 2)
label_3e2f80:
    if (ctx->pc == 0x3E2F80u) {
        ctx->pc = 0x3E2F84u;
        goto label_3e2f84;
    }
    ctx->pc = 0x3E2F7Cu;
    {
        const bool branch_taken_0x3e2f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2f7c) {
            ctx->pc = 0x3E2FD8u;
            goto label_3e2fd8;
        }
    }
    ctx->pc = 0x3E2F84u;
label_3e2f84:
    // 0x3e2f84: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3e2f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3e2f88:
    // 0x3e2f88: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3e2f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3e2f8c:
    // 0x3e2f8c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e2f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e2f90:
    // 0x3e2f90: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x3e2f90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
label_3e2f94:
    // 0x3e2f94: 0x261053c8  addiu       $s0, $s0, 0x53C8
    ctx->pc = 0x3e2f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21448));
label_3e2f98:
    // 0x3e2f98: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3e2f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3e2f9c:
    // 0x3e2f9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e2f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e2fa0:
    // 0x3e2fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e2fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e2fa4:
    // 0x3e2fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e2fa8:
    // 0x3e2fa8: 0xafa80490  sw          $t0, 0x490($sp)
    ctx->pc = 0x3e2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 8));
label_3e2fac:
    // 0x3e2fac: 0x27a50460  addiu       $a1, $sp, 0x460
    ctx->pc = 0x3e2facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3e2fb0:
    // 0x3e2fb0: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3e2fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3e2fb4:
    // 0x3e2fb4: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x3e2fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3e2fb8:
    // 0x3e2fb8: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3e2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3e2fbc:
    // 0x3e2fbc: 0x27a70480  addiu       $a3, $sp, 0x480
    ctx->pc = 0x3e2fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3e2fc0:
    // 0x3e2fc0: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x3e2fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e2fc4:
    // 0x3e2fc4: 0xc0e9fd0  jal         func_3A7F40
label_3e2fc8:
    if (ctx->pc == 0x3E2FC8u) {
        ctx->pc = 0x3E2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FC4u;
        // 0x3e2fc8: 0x27a80490  addiu       $t0, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2FCCu;
        goto label_3e2fcc;
    }
    ctx->pc = 0x3E2FC4u;
    SET_GPR_U32(ctx, 31, 0x3E2FCCu);
    ctx->pc = 0x3E2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FC4u;
    // 0x3e2fc8: 0x27a80490  addiu       $t0, $sp, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3E2FC4u, 0x3E2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FCCu;
label_3e2fcc:
    // 0x3e2fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2fd0:
    // 0x3e2fd0: 0xc0f15bc  jal         func_3C56F0
label_3e2fd4:
    if (ctx->pc == 0x3E2FD4u) {
        ctx->pc = 0x3E2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FD0u;
        // 0x3e2fd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2FD8u;
        goto label_3e2fd8;
    }
    ctx->pc = 0x3E2FD0u;
    SET_GPR_U32(ctx, 31, 0x3E2FD8u);
    ctx->pc = 0x3E2FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FD0u;
    // 0x3e2fd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E2FD0u, 0x3E2FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FD8u;
label_3e2fd8:
    // 0x3e2fd8: 0xc0e91b2  jal         func_3A46C8
label_3e2fdc:
    if (ctx->pc == 0x3E2FDCu) {
        ctx->pc = 0x3E2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FD8u;
        // 0x3e2fdc: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2FE0u;
        goto label_3e2fe0;
    }
    ctx->pc = 0x3E2FD8u;
    SET_GPR_U32(ctx, 31, 0x3E2FE0u);
    ctx->pc = 0x3E2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FD8u;
    // 0x3e2fdc: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3E2FD8u, 0x3E2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FE0u;
label_3e2fe0:
    // 0x3e2fe0: 0xc0e91b2  jal         func_3A46C8
label_3e2fe4:
    if (ctx->pc == 0x3E2FE4u) {
        ctx->pc = 0x3E2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FE0u;
        // 0x3e2fe4: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2FE8u;
        goto label_3e2fe8;
    }
    ctx->pc = 0x3E2FE0u;
    SET_GPR_U32(ctx, 31, 0x3E2FE8u);
    ctx->pc = 0x3E2FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FE0u;
    // 0x3e2fe4: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3E2FE0u, 0x3E2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FE8u;
label_3e2fe8:
    // 0x3e2fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2fec:
    // 0x3e2fec: 0x16630006  bne         $s3, $v1, . + 4 + (0x6 << 2)
label_3e2ff0:
    if (ctx->pc == 0x3E2FF0u) {
        ctx->pc = 0x3E2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FECu;
        // 0x3e2ff0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2FF4u;
        goto label_3e2ff4;
    }
    ctx->pc = 0x3E2FECu;
    {
        const bool branch_taken_0x3e2fec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FECu;
        // 0x3e2ff0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fec) {
            ctx->pc = 0x3E3008u;
            goto label_3e3008;
        }
    }
    ctx->pc = 0x3E2FF4u;
label_3e2ff4:
    // 0x3e2ff4: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x3e2ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_3e2ff8:
    // 0x3e2ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e2ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e2ffc:
    // 0x3e2ffc: 0xc0e92b6  jal         func_3A4AD8
label_3e3000:
    if (ctx->pc == 0x3E3000u) {
        ctx->pc = 0x3E3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FFCu;
        // 0x3e3000: 0x8e4500dc  lw          $a1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3004u;
        goto label_3e3004;
    }
    ctx->pc = 0x3E2FFCu;
    SET_GPR_U32(ctx, 31, 0x3E3004u);
    ctx->pc = 0x3E3000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FFCu;
    // 0x3e3000: 0x8e4500dc  lw          $a1, 0xDC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AD8u, 0x3E2FFCu, 0x3E3004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3004u;
label_3e3004:
    // 0x3e3004: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3e3004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3e3008:
    // 0x3e3008: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_3e300c:
    if (ctx->pc == 0x3E300Cu) {
        ctx->pc = 0x3E300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3008u;
        // 0x3e300c: 0x3c052fd6  lui         $a1, 0x2FD6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12246 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3010u;
        goto label_3e3010;
    }
    ctx->pc = 0x3E3008u;
    {
        const bool branch_taken_0x3e3008 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3008u;
        // 0x3e300c: 0x3c052fd6  lui         $a1, 0x2FD6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12246 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3008) {
            ctx->pc = 0x3E3024u;
            goto label_3e3024;
        }
    }
    ctx->pc = 0x3E3010u;
label_3e3010:
    // 0x3e3010: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3e3010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3e3014:
    // 0x3e3014: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e3014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e3018:
    // 0x3e3018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e301c:
    // 0x3e301c: 0xc0e961c  jal         func_3A5870
label_3e3020:
    if (ctx->pc == 0x3E3020u) {
        ctx->pc = 0x3E3020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E301Cu;
        // 0x3e3020: 0x34a590d6  ori         $a1, $a1, 0x90D6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37078);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3024u;
        goto label_3e3024;
    }
    ctx->pc = 0x3E301Cu;
    SET_GPR_U32(ctx, 31, 0x3E3024u);
    ctx->pc = 0x3E3020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E301Cu;
    // 0x3e3020: 0x34a590d6  ori         $a1, $a1, 0x90D6 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37078);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5870u, 0x3E301Cu, 0x3E3024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3024u;
label_3e3024:
    // 0x3e3024: 0xc0e94d0  jal         func_3A5340
label_3e3028:
    if (ctx->pc == 0x3E3028u) {
        ctx->pc = 0x3E3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3024u;
        // 0x3e3028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E302Cu;
        goto label_3e302c;
    }
    ctx->pc = 0x3E3024u;
    SET_GPR_U32(ctx, 31, 0x3E302Cu);
    ctx->pc = 0x3E3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3024u;
    // 0x3e3028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3E3024u, 0x3E302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E302Cu;
label_3e302c:
    // 0x3e302c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3e302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e3030:
    // 0x3e3030: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3e3030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3e3034:
    // 0x3e3034: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e3034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3e3038:
    // 0x3e3038: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3e3038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3e303c:
    // 0x3e303c: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x3e303cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3e3040:
    // 0x3e3040: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x3e3040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3e3044:
    // 0x3e3044: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x3e3044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3e3048:
    // 0x3e3048: 0x7bb30870  lq          $s3, 0x870($sp)
    ctx->pc = 0x3e3048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3e304c:
    // 0x3e304c: 0xdfbf0860  ld          $ra, 0x860($sp)
    ctx->pc = 0x3e304cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2144)));
label_3e3050:
    // 0x3e3050: 0x3e00008  jr          $ra
label_3e3054:
    if (ctx->pc == 0x3E3054u) {
        ctx->pc = 0x3E3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3050u;
        // 0x3e3054: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3058u;
        goto label_fallthrough_0x3e3050;
    }
    ctx->pc = 0x3E3050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3050u;
        // 0x3e3054: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e3050:
    ctx->pc = 0x3E3058u;
}
