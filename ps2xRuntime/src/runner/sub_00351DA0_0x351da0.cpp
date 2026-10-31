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

// Function: sub_00351DA0
// Address: 0x351da0 - 0x352098
void sub_00351DA0_0x351da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351DA0_0x351da0");
#endif

    switch (ctx->pc) {
        case 0x351da0u: goto label_351da0;
        case 0x351da4u: goto label_351da4;
        case 0x351da8u: goto label_351da8;
        case 0x351dacu: goto label_351dac;
        case 0x351db0u: goto label_351db0;
        case 0x351db4u: goto label_351db4;
        case 0x351db8u: goto label_351db8;
        case 0x351dbcu: goto label_351dbc;
        case 0x351dc0u: goto label_351dc0;
        case 0x351dc4u: goto label_351dc4;
        case 0x351dc8u: goto label_351dc8;
        case 0x351dccu: goto label_351dcc;
        case 0x351dd0u: goto label_351dd0;
        case 0x351dd4u: goto label_351dd4;
        case 0x351dd8u: goto label_351dd8;
        case 0x351ddcu: goto label_351ddc;
        case 0x351de0u: goto label_351de0;
        case 0x351de4u: goto label_351de4;
        case 0x351de8u: goto label_351de8;
        case 0x351decu: goto label_351dec;
        case 0x351df0u: goto label_351df0;
        case 0x351df4u: goto label_351df4;
        case 0x351df8u: goto label_351df8;
        case 0x351dfcu: goto label_351dfc;
        case 0x351e00u: goto label_351e00;
        case 0x351e04u: goto label_351e04;
        case 0x351e08u: goto label_351e08;
        case 0x351e0cu: goto label_351e0c;
        case 0x351e10u: goto label_351e10;
        case 0x351e14u: goto label_351e14;
        case 0x351e18u: goto label_351e18;
        case 0x351e1cu: goto label_351e1c;
        case 0x351e20u: goto label_351e20;
        case 0x351e24u: goto label_351e24;
        case 0x351e28u: goto label_351e28;
        case 0x351e2cu: goto label_351e2c;
        case 0x351e30u: goto label_351e30;
        case 0x351e34u: goto label_351e34;
        case 0x351e38u: goto label_351e38;
        case 0x351e3cu: goto label_351e3c;
        case 0x351e40u: goto label_351e40;
        case 0x351e44u: goto label_351e44;
        case 0x351e48u: goto label_351e48;
        case 0x351e4cu: goto label_351e4c;
        case 0x351e50u: goto label_351e50;
        case 0x351e54u: goto label_351e54;
        case 0x351e58u: goto label_351e58;
        case 0x351e5cu: goto label_351e5c;
        case 0x351e60u: goto label_351e60;
        case 0x351e64u: goto label_351e64;
        case 0x351e68u: goto label_351e68;
        case 0x351e6cu: goto label_351e6c;
        case 0x351e70u: goto label_351e70;
        case 0x351e74u: goto label_351e74;
        case 0x351e78u: goto label_351e78;
        case 0x351e7cu: goto label_351e7c;
        case 0x351e80u: goto label_351e80;
        case 0x351e84u: goto label_351e84;
        case 0x351e88u: goto label_351e88;
        case 0x351e8cu: goto label_351e8c;
        case 0x351e90u: goto label_351e90;
        case 0x351e94u: goto label_351e94;
        case 0x351e98u: goto label_351e98;
        case 0x351e9cu: goto label_351e9c;
        case 0x351ea0u: goto label_351ea0;
        case 0x351ea4u: goto label_351ea4;
        case 0x351ea8u: goto label_351ea8;
        case 0x351eacu: goto label_351eac;
        case 0x351eb0u: goto label_351eb0;
        case 0x351eb4u: goto label_351eb4;
        case 0x351eb8u: goto label_351eb8;
        case 0x351ebcu: goto label_351ebc;
        case 0x351ec0u: goto label_351ec0;
        case 0x351ec4u: goto label_351ec4;
        case 0x351ec8u: goto label_351ec8;
        case 0x351eccu: goto label_351ecc;
        case 0x351ed0u: goto label_351ed0;
        case 0x351ed4u: goto label_351ed4;
        case 0x351ed8u: goto label_351ed8;
        case 0x351edcu: goto label_351edc;
        case 0x351ee0u: goto label_351ee0;
        case 0x351ee4u: goto label_351ee4;
        case 0x351ee8u: goto label_351ee8;
        case 0x351eecu: goto label_351eec;
        case 0x351ef0u: goto label_351ef0;
        case 0x351ef4u: goto label_351ef4;
        case 0x351ef8u: goto label_351ef8;
        case 0x351efcu: goto label_351efc;
        case 0x351f00u: goto label_351f00;
        case 0x351f04u: goto label_351f04;
        case 0x351f08u: goto label_351f08;
        case 0x351f0cu: goto label_351f0c;
        case 0x351f10u: goto label_351f10;
        case 0x351f14u: goto label_351f14;
        case 0x351f18u: goto label_351f18;
        case 0x351f1cu: goto label_351f1c;
        case 0x351f20u: goto label_351f20;
        case 0x351f24u: goto label_351f24;
        case 0x351f28u: goto label_351f28;
        case 0x351f2cu: goto label_351f2c;
        case 0x351f30u: goto label_351f30;
        case 0x351f34u: goto label_351f34;
        case 0x351f38u: goto label_351f38;
        case 0x351f3cu: goto label_351f3c;
        case 0x351f40u: goto label_351f40;
        case 0x351f44u: goto label_351f44;
        case 0x351f48u: goto label_351f48;
        case 0x351f4cu: goto label_351f4c;
        case 0x351f50u: goto label_351f50;
        case 0x351f54u: goto label_351f54;
        case 0x351f58u: goto label_351f58;
        case 0x351f5cu: goto label_351f5c;
        case 0x351f60u: goto label_351f60;
        case 0x351f64u: goto label_351f64;
        case 0x351f68u: goto label_351f68;
        case 0x351f6cu: goto label_351f6c;
        case 0x351f70u: goto label_351f70;
        case 0x351f74u: goto label_351f74;
        case 0x351f78u: goto label_351f78;
        case 0x351f7cu: goto label_351f7c;
        case 0x351f80u: goto label_351f80;
        case 0x351f84u: goto label_351f84;
        case 0x351f88u: goto label_351f88;
        case 0x351f8cu: goto label_351f8c;
        case 0x351f90u: goto label_351f90;
        case 0x351f94u: goto label_351f94;
        case 0x351f98u: goto label_351f98;
        case 0x351f9cu: goto label_351f9c;
        case 0x351fa0u: goto label_351fa0;
        case 0x351fa4u: goto label_351fa4;
        case 0x351fa8u: goto label_351fa8;
        case 0x351facu: goto label_351fac;
        case 0x351fb0u: goto label_351fb0;
        case 0x351fb4u: goto label_351fb4;
        case 0x351fb8u: goto label_351fb8;
        case 0x351fbcu: goto label_351fbc;
        case 0x351fc0u: goto label_351fc0;
        case 0x351fc4u: goto label_351fc4;
        case 0x351fc8u: goto label_351fc8;
        case 0x351fccu: goto label_351fcc;
        case 0x351fd0u: goto label_351fd0;
        case 0x351fd4u: goto label_351fd4;
        case 0x351fd8u: goto label_351fd8;
        case 0x351fdcu: goto label_351fdc;
        case 0x351fe0u: goto label_351fe0;
        case 0x351fe4u: goto label_351fe4;
        case 0x351fe8u: goto label_351fe8;
        case 0x351fecu: goto label_351fec;
        case 0x351ff0u: goto label_351ff0;
        case 0x351ff4u: goto label_351ff4;
        case 0x351ff8u: goto label_351ff8;
        case 0x351ffcu: goto label_351ffc;
        case 0x352000u: goto label_352000;
        case 0x352004u: goto label_352004;
        case 0x352008u: goto label_352008;
        case 0x35200cu: goto label_35200c;
        case 0x352010u: goto label_352010;
        case 0x352014u: goto label_352014;
        case 0x352018u: goto label_352018;
        case 0x35201cu: goto label_35201c;
        case 0x352020u: goto label_352020;
        case 0x352024u: goto label_352024;
        case 0x352028u: goto label_352028;
        case 0x35202cu: goto label_35202c;
        case 0x352030u: goto label_352030;
        case 0x352034u: goto label_352034;
        case 0x352038u: goto label_352038;
        case 0x35203cu: goto label_35203c;
        case 0x352040u: goto label_352040;
        case 0x352044u: goto label_352044;
        case 0x352048u: goto label_352048;
        case 0x35204cu: goto label_35204c;
        case 0x352050u: goto label_352050;
        case 0x352054u: goto label_352054;
        case 0x352058u: goto label_352058;
        case 0x35205cu: goto label_35205c;
        case 0x352060u: goto label_352060;
        case 0x352064u: goto label_352064;
        case 0x352068u: goto label_352068;
        case 0x35206cu: goto label_35206c;
        case 0x352070u: goto label_352070;
        case 0x352074u: goto label_352074;
        case 0x352078u: goto label_352078;
        case 0x35207cu: goto label_35207c;
        case 0x352080u: goto label_352080;
        case 0x352084u: goto label_352084;
        case 0x352088u: goto label_352088;
        case 0x35208cu: goto label_35208c;
        case 0x352090u: goto label_352090;
        case 0x352094u: goto label_352094;
        default: break;
    }

    ctx->pc = 0x351da0u;

label_351da0:
    // 0x351da0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x351da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_351da4:
    // 0x351da4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x351da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_351da8:
    // 0x351da8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x351da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_351dac:
    // 0x351dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x351dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351db0:
    // 0x351db0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x351db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_351db4:
    // 0x351db4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x351db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_351db8:
    // 0x351db8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x351db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_351dbc:
    // 0x351dbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x351dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_351dc0:
    // 0x351dc0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x351dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_351dc4:
    // 0x351dc4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x351dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_351dc8:
    // 0x351dc8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x351dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_351dcc:
    // 0x351dcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_351dd0:
    // 0x351dd0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x351dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_351dd4:
    // 0x351dd4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x351dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_351dd8:
    // 0x351dd8: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x351dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
label_351ddc:
    // 0x351ddc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_351de0:
    if (ctx->pc == 0x351DE0u) {
        ctx->pc = 0x351DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DDCu;
        // 0x351de0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DE4u;
        goto label_351de4;
    }
    ctx->pc = 0x351DDCu;
    {
        const bool branch_taken_0x351ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DDCu;
        // 0x351de0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ddc) {
            ctx->pc = 0x351E10u;
            goto label_351e10;
        }
    }
    ctx->pc = 0x351DE4u;
label_351de4:
    // 0x351de4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_351de8:
    if (ctx->pc == 0x351DE8u) {
        ctx->pc = 0x351DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DE4u;
        // 0x351de8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DECu;
        goto label_351dec;
    }
    ctx->pc = 0x351DE4u;
    {
        const bool branch_taken_0x351de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DE4u;
        // 0x351de8: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351de4) {
            ctx->pc = 0x351E00u;
            goto label_351e00;
        }
    }
    ctx->pc = 0x351DECu;
label_351dec:
    // 0x351dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351df0:
    // 0x351df0: 0xc0552b8  jal         func_154AE0
label_351df4:
    if (ctx->pc == 0x351DF4u) {
        ctx->pc = 0x351DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DF0u;
        // 0x351df4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DF8u;
        goto label_351df8;
    }
    ctx->pc = 0x351DF0u;
    SET_GPR_U32(ctx, 31, 0x351DF8u);
    ctx->pc = 0x351DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351DF0u;
    // 0x351df4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x351DF0u, 0x351DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DF8u;
label_351df8:
    // 0x351df8: 0x10000006  b           . + 4 + (0x6 << 2)
label_351dfc:
    if (ctx->pc == 0x351DFCu) {
        ctx->pc = 0x351DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DF8u;
        // 0x351dfc: 0x86220030  lh          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E00u;
        goto label_351e00;
    }
    ctx->pc = 0x351DF8u;
    {
        const bool branch_taken_0x351df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DF8u;
        // 0x351dfc: 0x86220030  lh          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351df8) {
            ctx->pc = 0x351E14u;
            goto label_351e14;
        }
    }
    ctx->pc = 0x351E00u;
label_351e00:
    // 0x351e00: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x351e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_351e04:
    // 0x351e04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351e08:
    if (ctx->pc == 0x351E08u) {
        ctx->pc = 0x351E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E04u;
        // 0x351e08: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E0Cu;
        goto label_351e0c;
    }
    ctx->pc = 0x351E04u;
    {
        const bool branch_taken_0x351e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E04u;
        // 0x351e08: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e04) {
            ctx->pc = 0x351E10u;
            goto label_351e10;
        }
    }
    ctx->pc = 0x351E0Cu;
label_351e0c:
    // 0x351e0c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x351e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_351e10:
    // 0x351e10: 0x86220030  lh          $v0, 0x30($s1)
    ctx->pc = 0x351e10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_351e14:
    // 0x351e14: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
label_351e18:
    if (ctx->pc == 0x351E18u) {
        ctx->pc = 0x351E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E14u;
        // 0x351e18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E1Cu;
        goto label_351e1c;
    }
    ctx->pc = 0x351E14u;
    {
        const bool branch_taken_0x351e14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x351E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E14u;
        // 0x351e18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e14) {
            ctx->pc = 0x351E84u;
            goto label_351e84;
        }
    }
    ctx->pc = 0x351E1Cu;
label_351e1c:
    // 0x351e1c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x351e1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_351e20:
    // 0x351e20: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x351e20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
label_351e24:
    // 0x351e24: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x351e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_351e28:
    // 0x351e28: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x351e28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_351e2c:
    // 0x351e2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_351e30:
    // 0x351e30: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x351e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_351e34:
    // 0x351e34: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x351e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_351e38:
    // 0x351e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x351e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_351e3c:
    // 0x351e3c: 0x751004  sllv        $v0, $s5, $v1
    ctx->pc = 0x351e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 3) & 0x1F));
label_351e40:
    // 0x351e40: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x351e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_351e44:
    // 0x351e44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_351e48:
    if (ctx->pc == 0x351E48u) {
        ctx->pc = 0x351E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E44u;
        // 0x351e48: 0x731004  sllv        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E4Cu;
        goto label_351e4c;
    }
    ctx->pc = 0x351E44u;
    {
        const bool branch_taken_0x351e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E44u;
        // 0x351e48: 0x731004  sllv        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e44) {
            ctx->pc = 0x351E60u;
            goto label_351e60;
        }
    }
    ctx->pc = 0x351E4Cu;
label_351e4c:
    // 0x351e4c: 0x8e845340  lw          $a0, 0x5340($s4)
    ctx->pc = 0x351e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21312)));
label_351e50:
    // 0x351e50: 0xc0552b8  jal         func_154AE0
label_351e54:
    if (ctx->pc == 0x351E54u) {
        ctx->pc = 0x351E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E50u;
        // 0x351e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E58u;
        goto label_351e58;
    }
    ctx->pc = 0x351E50u;
    SET_GPR_U32(ctx, 31, 0x351E58u);
    ctx->pc = 0x351E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E50u;
    // 0x351e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x351E50u, 0x351E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E58u;
label_351e58:
    // 0x351e58: 0x10000007  b           . + 4 + (0x7 << 2)
label_351e5c:
    if (ctx->pc == 0x351E5Cu) {
        ctx->pc = 0x351E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E58u;
        // 0x351e5c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E60u;
        goto label_351e60;
    }
    ctx->pc = 0x351E58u;
    {
        const bool branch_taken_0x351e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E58u;
        // 0x351e5c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e58) {
            ctx->pc = 0x351E78u;
            goto label_351e78;
        }
    }
    ctx->pc = 0x351E60u;
label_351e60:
    // 0x351e60: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x351e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_351e64:
    // 0x351e64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_351e68:
    if (ctx->pc == 0x351E68u) {
        ctx->pc = 0x351E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E64u;
        // 0x351e68: 0x721004  sllv        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E6Cu;
        goto label_351e6c;
    }
    ctx->pc = 0x351E64u;
    {
        const bool branch_taken_0x351e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E64u;
        // 0x351e68: 0x721004  sllv        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e64) {
            ctx->pc = 0x351E74u;
            goto label_351e74;
        }
    }
    ctx->pc = 0x351E6Cu;
label_351e6c:
    // 0x351e6c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x351e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_351e70:
    // 0x351e70: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x351e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_351e74:
    // 0x351e74: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x351e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351e78:
    // 0x351e78: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x351e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_351e7c:
    // 0x351e7c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_351e80:
    if (ctx->pc == 0x351E80u) {
        ctx->pc = 0x351E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E7Cu;
        // 0x351e80: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E84u;
        goto label_351e84;
    }
    ctx->pc = 0x351E7Cu;
    {
        const bool branch_taken_0x351e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E7Cu;
        // 0x351e80: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e7c) {
            ctx->pc = 0x351E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351e30;
        }
    }
    ctx->pc = 0x351E84u;
label_351e84:
    // 0x351e84: 0xc0d4c6a  jal         func_3531A8
label_351e88:
    if (ctx->pc == 0x351E88u) {
        ctx->pc = 0x351E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E84u;
        // 0x351e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E8Cu;
        goto label_351e8c;
    }
    ctx->pc = 0x351E84u;
    SET_GPR_U32(ctx, 31, 0x351E8Cu);
    ctx->pc = 0x351E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E84u;
    // 0x351e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3531A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3531A8u, 0x351E84u, 0x351E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E8Cu;
label_351e8c:
    // 0x351e8c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x351e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_351e90:
    // 0x351e90: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
label_351e94:
    if (ctx->pc == 0x351E94u) {
        ctx->pc = 0x351E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E90u;
        // 0x351e94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E98u;
        goto label_351e98;
    }
    ctx->pc = 0x351E90u;
    {
        const bool branch_taken_0x351e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351e90) {
            ctx->pc = 0x351E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351E90u;
            // 0x351e94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35204Cu;
            goto label_35204c;
        }
    }
    ctx->pc = 0x351E98u;
label_351e98:
    // 0x351e98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x351e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_351e9c:
    // 0x351e9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_351ea0:
    if (ctx->pc == 0x351EA0u) {
        ctx->pc = 0x351EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E9Cu;
        // 0x351ea0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EA4u;
        goto label_351ea4;
    }
    ctx->pc = 0x351E9Cu;
    {
        const bool branch_taken_0x351e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E9Cu;
        // 0x351ea0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e9c) {
            ctx->pc = 0x351F04u;
            goto label_351f04;
        }
    }
    ctx->pc = 0x351EA4u;
label_351ea4:
    // 0x351ea4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x351ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_351ea8:
    // 0x351ea8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x351ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_351eac:
    // 0x351eac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x351eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_351eb0:
    // 0x351eb0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x351eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_351eb4:
    // 0x351eb4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x351eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_351eb8:
    // 0x351eb8: 0x60f809  jalr        $v1
label_351ebc:
    if (ctx->pc == 0x351EBCu) {
        ctx->pc = 0x351EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EB8u;
        // 0x351ebc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EC0u;
        goto label_351ec0;
    }
    ctx->pc = 0x351EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351EC0u);
        ctx->pc = 0x351EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EB8u;
        // 0x351ebc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351EB8u, 0x351EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351EC0u;
label_351ec0:
    // 0x351ec0: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x351ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_351ec4:
    // 0x351ec4: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x351ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_351ec8:
    // 0x351ec8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x351ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_351ecc:
    // 0x351ecc: 0x24c689d0  addiu       $a2, $a2, -0x7630
    ctx->pc = 0x351eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937040));
label_351ed0:
    // 0x351ed0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x351ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_351ed4:
    // 0x351ed4: 0x24070066  addiu       $a3, $zero, 0x66
    ctx->pc = 0x351ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_351ed8:
    // 0x351ed8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x351ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_351edc:
    // 0x351edc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x351edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_351ee0:
    // 0x351ee0: 0x60f809  jalr        $v1
label_351ee4:
    if (ctx->pc == 0x351EE4u) {
        ctx->pc = 0x351EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EE0u;
        // 0x351ee4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EE8u;
        goto label_351ee8;
    }
    ctx->pc = 0x351EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351EE8u);
        ctx->pc = 0x351EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EE0u;
        // 0x351ee4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351EE0u, 0x351EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351EE8u;
label_351ee8:
    // 0x351ee8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x351ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_351eec:
    // 0x351eec: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x351eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_351ef0:
    // 0x351ef0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x351ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_351ef4:
    // 0x351ef4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x351ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_351ef8:
    // 0x351ef8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x351ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_351efc:
    // 0x351efc: 0x60f809  jalr        $v1
label_351f00:
    if (ctx->pc == 0x351F00u) {
        ctx->pc = 0x351F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EFCu;
        // 0x351f00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F04u;
        goto label_351f04;
    }
    ctx->pc = 0x351EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351F04u);
        ctx->pc = 0x351F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EFCu;
        // 0x351f00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351EFCu, 0x351F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351F04u;
label_351f04:
    // 0x351f04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x351f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351f08:
    // 0x351f08: 0x263e000c  addiu       $fp, $s1, 0xC
    ctx->pc = 0x351f08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_351f0c:
    // 0x351f0c: 0x2635001c  addiu       $s5, $s1, 0x1C
    ctx->pc = 0x351f0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_351f10:
    // 0x351f10: 0x26370014  addiu       $s7, $s1, 0x14
    ctx->pc = 0x351f10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_351f14:
    // 0x351f14: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x351f14u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_351f18:
    // 0x351f18: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x351f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_351f1c:
    // 0x351f1c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x351f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_351f20:
    // 0x351f20: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x351f20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_351f24:
    // 0x351f24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_351f28:
    // 0x351f28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x351f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_351f2c:
    // 0x351f2c: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x351f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_351f30:
    // 0x351f30: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x351f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_351f34:
    // 0x351f34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_351f38:
    if (ctx->pc == 0x351F38u) {
        ctx->pc = 0x351F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F34u;
        // 0x351f38: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F3Cu;
        goto label_351f3c;
    }
    ctx->pc = 0x351F34u;
    {
        const bool branch_taken_0x351f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F34u;
        // 0x351f38: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f34) {
            ctx->pc = 0x351F50u;
            goto label_351f50;
        }
    }
    ctx->pc = 0x351F3Cu;
label_351f3c:
    // 0x351f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x351f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351f40:
    // 0x351f40: 0xc0552b8  jal         func_154AE0
label_351f44:
    if (ctx->pc == 0x351F44u) {
        ctx->pc = 0x351F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F40u;
        // 0x351f44: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F48u;
        goto label_351f48;
    }
    ctx->pc = 0x351F40u;
    SET_GPR_U32(ctx, 31, 0x351F48u);
    ctx->pc = 0x351F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F40u;
    // 0x351f44: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x351F40u, 0x351F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F48u;
label_351f48:
    // 0x351f48: 0x1000000a  b           . + 4 + (0xA << 2)
label_351f4c:
    if (ctx->pc == 0x351F4Cu) {
        ctx->pc = 0x351F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F48u;
        // 0x351f4c: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F50u;
        goto label_351f50;
    }
    ctx->pc = 0x351F48u;
    {
        const bool branch_taken_0x351f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F48u;
        // 0x351f4c: 0x109080  sll         $s2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f48) {
            ctx->pc = 0x351F74u;
            goto label_351f74;
        }
    }
    ctx->pc = 0x351F50u;
label_351f50:
    // 0x351f50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x351f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_351f54:
    // 0x351f54: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x351f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_351f58:
    // 0x351f58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x351f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_351f5c:
    // 0x351f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_351f60:
    if (ctx->pc == 0x351F60u) {
        ctx->pc = 0x351F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F5Cu;
        // 0x351f60: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F64u;
        goto label_351f64;
    }
    ctx->pc = 0x351F5Cu;
    {
        const bool branch_taken_0x351f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F5Cu;
        // 0x351f60: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f5c) {
            ctx->pc = 0x351F70u;
            goto label_351f70;
        }
    }
    ctx->pc = 0x351F64u;
label_351f64:
    // 0x351f64: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x351f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_351f68:
    // 0x351f68: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x351f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_351f6c:
    // 0x351f6c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x351f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_351f70:
    // 0x351f70: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x351f70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_351f74:
    // 0x351f74: 0x3d29821  addu        $s3, $fp, $s2
    ctx->pc = 0x351f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_351f78:
    // 0x351f78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x351f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_351f7c:
    // 0x351f7c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_351f80:
    if (ctx->pc == 0x351F80u) {
        ctx->pc = 0x351F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F7Cu;
        // 0x351f80: 0x8ec627e4  lw          $a2, 0x27E4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F84u;
        goto label_351f84;
    }
    ctx->pc = 0x351F7Cu;
    {
        const bool branch_taken_0x351f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F7Cu;
        // 0x351f80: 0x8ec627e4  lw          $a2, 0x27E4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f7c) {
            ctx->pc = 0x351FE4u;
            goto label_351fe4;
        }
    }
    ctx->pc = 0x351F84u;
label_351f84:
    // 0x351f84: 0x2b28021  addu        $s0, $s5, $s2
    ctx->pc = 0x351f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_351f88:
    // 0x351f88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x351f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_351f8c:
    // 0x351f8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x351f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_351f90:
    // 0x351f90: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x351f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_351f94:
    // 0x351f94: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x351f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_351f98:
    // 0x351f98: 0x60f809  jalr        $v1
label_351f9c:
    if (ctx->pc == 0x351F9Cu) {
        ctx->pc = 0x351F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F98u;
        // 0x351f9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FA0u;
        goto label_351fa0;
    }
    ctx->pc = 0x351F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351FA0u);
        ctx->pc = 0x351F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F98u;
        // 0x351f9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351F98u, 0x351FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351FA0u;
label_351fa0:
    // 0x351fa0: 0x8ec827e4  lw          $t0, 0x27E4($s6)
    ctx->pc = 0x351fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_351fa4:
    // 0x351fa4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x351fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_351fa8:
    // 0x351fa8: 0x244689d0  addiu       $a2, $v0, -0x7630
    ctx->pc = 0x351fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937040));
label_351fac:
    // 0x351fac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x351facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_351fb0:
    // 0x351fb0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x351fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_351fb4:
    // 0x351fb4: 0x2407007b  addiu       $a3, $zero, 0x7B
    ctx->pc = 0x351fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_351fb8:
    // 0x351fb8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x351fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_351fbc:
    // 0x351fbc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x351fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_351fc0:
    // 0x351fc0: 0x60f809  jalr        $v1
label_351fc4:
    if (ctx->pc == 0x351FC4u) {
        ctx->pc = 0x351FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FC0u;
        // 0x351fc4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FC8u;
        goto label_351fc8;
    }
    ctx->pc = 0x351FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351FC8u);
        ctx->pc = 0x351FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FC0u;
        // 0x351fc4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351FC0u, 0x351FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351FC8u;
label_351fc8:
    // 0x351fc8: 0x8ec627e4  lw          $a2, 0x27E4($s6)
    ctx->pc = 0x351fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_351fcc:
    // 0x351fcc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x351fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_351fd0:
    // 0x351fd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x351fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_351fd4:
    // 0x351fd4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x351fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_351fd8:
    // 0x351fd8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x351fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_351fdc:
    // 0x351fdc: 0x60f809  jalr        $v1
label_351fe0:
    if (ctx->pc == 0x351FE0u) {
        ctx->pc = 0x351FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FDCu;
        // 0x351fe0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FE4u;
        goto label_351fe4;
    }
    ctx->pc = 0x351FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351FE4u);
        ctx->pc = 0x351FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FDCu;
        // 0x351fe0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351FDCu, 0x351FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351FE4u;
label_351fe4:
    // 0x351fe4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x351fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_351fe8:
    // 0x351fe8: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x351fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_351fec:
    // 0x351fec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x351fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_351ff0:
    // 0x351ff0: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x351ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_351ff4:
    // 0x351ff4: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x351ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351ff8:
    // 0x351ff8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x351ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_351ffc:
    // 0x351ffc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_352000:
    if (ctx->pc == 0x352000u) {
        ctx->pc = 0x352000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FFCu;
        // 0x352000: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352004u;
        goto label_352004;
    }
    ctx->pc = 0x351FFCu;
    {
        const bool branch_taken_0x351ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FFCu;
        // 0x352000: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ffc) {
            ctx->pc = 0x351F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351f18;
        }
    }
    ctx->pc = 0x352004u;
label_352004:
    // 0x352004: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x352004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_352008:
    // 0x352008: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x352008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35200c:
    // 0x35200c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x35200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_352010:
    // 0x352010: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x352010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_352014:
    // 0x352014: 0xa2240032  sb          $a0, 0x32($s1)
    ctx->pc = 0x352014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 4));
label_352018:
    // 0x352018: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x352018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35201c:
    // 0x35201c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x35201cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_352020:
    // 0x352020: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x352020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_352024:
    // 0x352024: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x352024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_352028:
    // 0x352028: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x352028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_35202c:
    // 0x35202c: 0xa2200033  sb          $zero, 0x33($s1)
    ctx->pc = 0x35202cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 0));
label_352030:
    // 0x352030: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_352034:
    if (ctx->pc == 0x352034u) {
        ctx->pc = 0x352034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352030u;
        // 0x352034: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352038u;
        goto label_352038;
    }
    ctx->pc = 0x352030u;
    {
        const bool branch_taken_0x352030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352030u;
        // 0x352034: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352030) {
            ctx->pc = 0x352044u;
            goto label_352044;
        }
    }
    ctx->pc = 0x352038u;
label_352038:
    // 0x352038: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x352038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35203c:
    // 0x35203c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_352040:
    if (ctx->pc == 0x352040u) {
        ctx->pc = 0x352040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35203Cu;
        // 0x352040: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352044u;
        goto label_352044;
    }
    ctx->pc = 0x35203Cu;
    {
        const bool branch_taken_0x35203c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35203c) {
            ctx->pc = 0x352040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35203Cu;
            // 0x352040: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352064u;
            goto label_352064;
        }
    }
    ctx->pc = 0x352044u;
label_352044:
    // 0x352044: 0x10000006  b           . + 4 + (0x6 << 2)
label_352048:
    if (ctx->pc == 0x352048u) {
        ctx->pc = 0x352048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352044u;
        // 0x352048: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35204Cu;
        goto label_35204c;
    }
    ctx->pc = 0x352044u;
    {
        const bool branch_taken_0x352044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352044u;
        // 0x352048: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352044) {
            ctx->pc = 0x352060u;
            goto label_352060;
        }
    }
    ctx->pc = 0x35204Cu;
label_35204c:
    // 0x35204c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_352050:
    if (ctx->pc == 0x352050u) {
        ctx->pc = 0x352050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35204Cu;
        // 0x352050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352054u;
        goto label_352054;
    }
    ctx->pc = 0x35204Cu;
    {
        const bool branch_taken_0x35204c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x352050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35204Cu;
        // 0x352050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35204c) {
            ctx->pc = 0x352060u;
            goto label_352060;
        }
    }
    ctx->pc = 0x352054u;
label_352054:
    // 0x352054: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x352054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352058:
    // 0x352058: 0xa482001c  sh          $v0, 0x1C($a0)
    ctx->pc = 0x352058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
label_35205c:
    // 0x35205c: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x35205cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_352060:
    // 0x352060: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x352060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_352064:
    // 0x352064: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x352064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_352068:
    // 0x352068: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x352068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_35206c:
    // 0x35206c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x35206cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_352070:
    // 0x352070: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x352070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_352074:
    // 0x352074: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x352074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_352078:
    // 0x352078: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x352078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35207c:
    // 0x35207c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x35207cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_352080:
    // 0x352080: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x352080u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352084:
    // 0x352084: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x352084u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352088:
    // 0x352088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x352088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35208c:
    // 0x35208c: 0x3e00008  jr          $ra
label_352090:
    if (ctx->pc == 0x352090u) {
        ctx->pc = 0x352090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35208Cu;
        // 0x352090: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352094u;
        goto label_352094;
    }
    ctx->pc = 0x35208Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35208Cu;
        // 0x352090: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35208Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352094u;
label_352094:
    // 0x352094: 0x0  nop
    ctx->pc = 0x352094u;
    // NOP
    ctx->pc = 0x352098u;
}
