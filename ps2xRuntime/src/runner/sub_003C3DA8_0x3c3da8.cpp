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

// Function: sub_003C3DA8
// Address: 0x3c3da8 - 0x3c40a0
void sub_003C3DA8_0x3c3da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3DA8_0x3c3da8");
#endif

    switch (ctx->pc) {
        case 0x3c3da8u: goto label_3c3da8;
        case 0x3c3dacu: goto label_3c3dac;
        case 0x3c3db0u: goto label_3c3db0;
        case 0x3c3db4u: goto label_3c3db4;
        case 0x3c3db8u: goto label_3c3db8;
        case 0x3c3dbcu: goto label_3c3dbc;
        case 0x3c3dc0u: goto label_3c3dc0;
        case 0x3c3dc4u: goto label_3c3dc4;
        case 0x3c3dc8u: goto label_3c3dc8;
        case 0x3c3dccu: goto label_3c3dcc;
        case 0x3c3dd0u: goto label_3c3dd0;
        case 0x3c3dd4u: goto label_3c3dd4;
        case 0x3c3dd8u: goto label_3c3dd8;
        case 0x3c3ddcu: goto label_3c3ddc;
        case 0x3c3de0u: goto label_3c3de0;
        case 0x3c3de4u: goto label_3c3de4;
        case 0x3c3de8u: goto label_3c3de8;
        case 0x3c3decu: goto label_3c3dec;
        case 0x3c3df0u: goto label_3c3df0;
        case 0x3c3df4u: goto label_3c3df4;
        case 0x3c3df8u: goto label_3c3df8;
        case 0x3c3dfcu: goto label_3c3dfc;
        case 0x3c3e00u: goto label_3c3e00;
        case 0x3c3e04u: goto label_3c3e04;
        case 0x3c3e08u: goto label_3c3e08;
        case 0x3c3e0cu: goto label_3c3e0c;
        case 0x3c3e10u: goto label_3c3e10;
        case 0x3c3e14u: goto label_3c3e14;
        case 0x3c3e18u: goto label_3c3e18;
        case 0x3c3e1cu: goto label_3c3e1c;
        case 0x3c3e20u: goto label_3c3e20;
        case 0x3c3e24u: goto label_3c3e24;
        case 0x3c3e28u: goto label_3c3e28;
        case 0x3c3e2cu: goto label_3c3e2c;
        case 0x3c3e30u: goto label_3c3e30;
        case 0x3c3e34u: goto label_3c3e34;
        case 0x3c3e38u: goto label_3c3e38;
        case 0x3c3e3cu: goto label_3c3e3c;
        case 0x3c3e40u: goto label_3c3e40;
        case 0x3c3e44u: goto label_3c3e44;
        case 0x3c3e48u: goto label_3c3e48;
        case 0x3c3e4cu: goto label_3c3e4c;
        case 0x3c3e50u: goto label_3c3e50;
        case 0x3c3e54u: goto label_3c3e54;
        case 0x3c3e58u: goto label_3c3e58;
        case 0x3c3e5cu: goto label_3c3e5c;
        case 0x3c3e60u: goto label_3c3e60;
        case 0x3c3e64u: goto label_3c3e64;
        case 0x3c3e68u: goto label_3c3e68;
        case 0x3c3e6cu: goto label_3c3e6c;
        case 0x3c3e70u: goto label_3c3e70;
        case 0x3c3e74u: goto label_3c3e74;
        case 0x3c3e78u: goto label_3c3e78;
        case 0x3c3e7cu: goto label_3c3e7c;
        case 0x3c3e80u: goto label_3c3e80;
        case 0x3c3e84u: goto label_3c3e84;
        case 0x3c3e88u: goto label_3c3e88;
        case 0x3c3e8cu: goto label_3c3e8c;
        case 0x3c3e90u: goto label_3c3e90;
        case 0x3c3e94u: goto label_3c3e94;
        case 0x3c3e98u: goto label_3c3e98;
        case 0x3c3e9cu: goto label_3c3e9c;
        case 0x3c3ea0u: goto label_3c3ea0;
        case 0x3c3ea4u: goto label_3c3ea4;
        case 0x3c3ea8u: goto label_3c3ea8;
        case 0x3c3eacu: goto label_3c3eac;
        case 0x3c3eb0u: goto label_3c3eb0;
        case 0x3c3eb4u: goto label_3c3eb4;
        case 0x3c3eb8u: goto label_3c3eb8;
        case 0x3c3ebcu: goto label_3c3ebc;
        case 0x3c3ec0u: goto label_3c3ec0;
        case 0x3c3ec4u: goto label_3c3ec4;
        case 0x3c3ec8u: goto label_3c3ec8;
        case 0x3c3eccu: goto label_3c3ecc;
        case 0x3c3ed0u: goto label_3c3ed0;
        case 0x3c3ed4u: goto label_3c3ed4;
        case 0x3c3ed8u: goto label_3c3ed8;
        case 0x3c3edcu: goto label_3c3edc;
        case 0x3c3ee0u: goto label_3c3ee0;
        case 0x3c3ee4u: goto label_3c3ee4;
        case 0x3c3ee8u: goto label_3c3ee8;
        case 0x3c3eecu: goto label_3c3eec;
        case 0x3c3ef0u: goto label_3c3ef0;
        case 0x3c3ef4u: goto label_3c3ef4;
        case 0x3c3ef8u: goto label_3c3ef8;
        case 0x3c3efcu: goto label_3c3efc;
        case 0x3c3f00u: goto label_3c3f00;
        case 0x3c3f04u: goto label_3c3f04;
        case 0x3c3f08u: goto label_3c3f08;
        case 0x3c3f0cu: goto label_3c3f0c;
        case 0x3c3f10u: goto label_3c3f10;
        case 0x3c3f14u: goto label_3c3f14;
        case 0x3c3f18u: goto label_3c3f18;
        case 0x3c3f1cu: goto label_3c3f1c;
        case 0x3c3f20u: goto label_3c3f20;
        case 0x3c3f24u: goto label_3c3f24;
        case 0x3c3f28u: goto label_3c3f28;
        case 0x3c3f2cu: goto label_3c3f2c;
        case 0x3c3f30u: goto label_3c3f30;
        case 0x3c3f34u: goto label_3c3f34;
        case 0x3c3f38u: goto label_3c3f38;
        case 0x3c3f3cu: goto label_3c3f3c;
        case 0x3c3f40u: goto label_3c3f40;
        case 0x3c3f44u: goto label_3c3f44;
        case 0x3c3f48u: goto label_3c3f48;
        case 0x3c3f4cu: goto label_3c3f4c;
        case 0x3c3f50u: goto label_3c3f50;
        case 0x3c3f54u: goto label_3c3f54;
        case 0x3c3f58u: goto label_3c3f58;
        case 0x3c3f5cu: goto label_3c3f5c;
        case 0x3c3f60u: goto label_3c3f60;
        case 0x3c3f64u: goto label_3c3f64;
        case 0x3c3f68u: goto label_3c3f68;
        case 0x3c3f6cu: goto label_3c3f6c;
        case 0x3c3f70u: goto label_3c3f70;
        case 0x3c3f74u: goto label_3c3f74;
        case 0x3c3f78u: goto label_3c3f78;
        case 0x3c3f7cu: goto label_3c3f7c;
        case 0x3c3f80u: goto label_3c3f80;
        case 0x3c3f84u: goto label_3c3f84;
        case 0x3c3f88u: goto label_3c3f88;
        case 0x3c3f8cu: goto label_3c3f8c;
        case 0x3c3f90u: goto label_3c3f90;
        case 0x3c3f94u: goto label_3c3f94;
        case 0x3c3f98u: goto label_3c3f98;
        case 0x3c3f9cu: goto label_3c3f9c;
        case 0x3c3fa0u: goto label_3c3fa0;
        case 0x3c3fa4u: goto label_3c3fa4;
        case 0x3c3fa8u: goto label_3c3fa8;
        case 0x3c3facu: goto label_3c3fac;
        case 0x3c3fb0u: goto label_3c3fb0;
        case 0x3c3fb4u: goto label_3c3fb4;
        case 0x3c3fb8u: goto label_3c3fb8;
        case 0x3c3fbcu: goto label_3c3fbc;
        case 0x3c3fc0u: goto label_3c3fc0;
        case 0x3c3fc4u: goto label_3c3fc4;
        case 0x3c3fc8u: goto label_3c3fc8;
        case 0x3c3fccu: goto label_3c3fcc;
        case 0x3c3fd0u: goto label_3c3fd0;
        case 0x3c3fd4u: goto label_3c3fd4;
        case 0x3c3fd8u: goto label_3c3fd8;
        case 0x3c3fdcu: goto label_3c3fdc;
        case 0x3c3fe0u: goto label_3c3fe0;
        case 0x3c3fe4u: goto label_3c3fe4;
        case 0x3c3fe8u: goto label_3c3fe8;
        case 0x3c3fecu: goto label_3c3fec;
        case 0x3c3ff0u: goto label_3c3ff0;
        case 0x3c3ff4u: goto label_3c3ff4;
        case 0x3c3ff8u: goto label_3c3ff8;
        case 0x3c3ffcu: goto label_3c3ffc;
        case 0x3c4000u: goto label_3c4000;
        case 0x3c4004u: goto label_3c4004;
        case 0x3c4008u: goto label_3c4008;
        case 0x3c400cu: goto label_3c400c;
        case 0x3c4010u: goto label_3c4010;
        case 0x3c4014u: goto label_3c4014;
        case 0x3c4018u: goto label_3c4018;
        case 0x3c401cu: goto label_3c401c;
        case 0x3c4020u: goto label_3c4020;
        case 0x3c4024u: goto label_3c4024;
        case 0x3c4028u: goto label_3c4028;
        case 0x3c402cu: goto label_3c402c;
        case 0x3c4030u: goto label_3c4030;
        case 0x3c4034u: goto label_3c4034;
        case 0x3c4038u: goto label_3c4038;
        case 0x3c403cu: goto label_3c403c;
        case 0x3c4040u: goto label_3c4040;
        case 0x3c4044u: goto label_3c4044;
        case 0x3c4048u: goto label_3c4048;
        case 0x3c404cu: goto label_3c404c;
        case 0x3c4050u: goto label_3c4050;
        case 0x3c4054u: goto label_3c4054;
        case 0x3c4058u: goto label_3c4058;
        case 0x3c405cu: goto label_3c405c;
        case 0x3c4060u: goto label_3c4060;
        case 0x3c4064u: goto label_3c4064;
        case 0x3c4068u: goto label_3c4068;
        case 0x3c406cu: goto label_3c406c;
        case 0x3c4070u: goto label_3c4070;
        case 0x3c4074u: goto label_3c4074;
        case 0x3c4078u: goto label_3c4078;
        case 0x3c407cu: goto label_3c407c;
        case 0x3c4080u: goto label_3c4080;
        case 0x3c4084u: goto label_3c4084;
        case 0x3c4088u: goto label_3c4088;
        case 0x3c408cu: goto label_3c408c;
        case 0x3c4090u: goto label_3c4090;
        case 0x3c4094u: goto label_3c4094;
        case 0x3c4098u: goto label_3c4098;
        case 0x3c409cu: goto label_3c409c;
        default: break;
    }

    ctx->pc = 0x3c3da8u;

label_3c3da8:
    // 0x3c3da8: 0x27bdf6f0  addiu       $sp, $sp, -0x910
    ctx->pc = 0x3c3da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964976));
label_3c3dac:
    // 0x3c3dac: 0x7fb308d0  sq          $s3, 0x8D0($sp)
    ctx->pc = 0x3c3dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 19));
label_3c3db0:
    // 0x3c3db0: 0x7fb408c0  sq          $s4, 0x8C0($sp)
    ctx->pc = 0x3c3db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 20));
label_3c3db4:
    // 0x3c3db4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c3db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3db8:
    // 0x3c3db8: 0x7fb00900  sq          $s0, 0x900($sp)
    ctx->pc = 0x3c3db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 16));
label_3c3dbc:
    // 0x3c3dbc: 0x7fb108f0  sq          $s1, 0x8F0($sp)
    ctx->pc = 0x3c3dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 17));
label_3c3dc0:
    // 0x3c3dc0: 0x7fb208e0  sq          $s2, 0x8E0($sp)
    ctx->pc = 0x3c3dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 18));
label_3c3dc4:
    // 0x3c3dc4: 0x7fb508b0  sq          $s5, 0x8B0($sp)
    ctx->pc = 0x3c3dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 21));
label_3c3dc8:
    // 0x3c3dc8: 0x7fb608a0  sq          $s6, 0x8A0($sp)
    ctx->pc = 0x3c3dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 22));
label_3c3dcc:
    // 0x3c3dcc: 0xffbf0890  sd          $ra, 0x890($sp)
    ctx->pc = 0x3c3dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2192), GPR_U64(ctx, 31));
label_3c3dd0:
    // 0x3c3dd0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c3dd4:
    // 0x3c3dd4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c3dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c3dd8:
    // 0x3c3dd8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c3ddc:
    // 0x3c3ddc: 0x40f809  jalr        $v0
label_3c3de0:
    if (ctx->pc == 0x3C3DE0u) {
        ctx->pc = 0x3C3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3DDCu;
        // 0x3c3de0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3DE4u;
        goto label_3c3de4;
    }
    ctx->pc = 0x3C3DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3DE4u);
        ctx->pc = 0x3C3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3DDCu;
        // 0x3c3de0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3DDCu, 0x3C3DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3DE4u;
label_3c3de4:
    // 0x3c3de4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c3de4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3de8:
    // 0x3c3de8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c3de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c3dec:
    // 0x3c3dec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c3df0:
    // 0x3c3df0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3c3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3c3df4:
    // 0x3c3df4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c3df8:
    // 0x3c3df8: 0x0  nop
    ctx->pc = 0x3c3df8u;
    // NOP
label_3c3dfc:
    // 0x3c3dfc: 0x0  nop
    ctx->pc = 0x3c3dfcu;
    // NOP
label_3c3e00:
    // 0x3c3e00: 0x0  nop
    ctx->pc = 0x3c3e00u;
    // NOP
label_3c3e04:
    // 0x3c3e04: 0x0  nop
    ctx->pc = 0x3c3e04u;
    // NOP
label_3c3e08:
    // 0x3c3e08: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3c3e0c:
    if (ctx->pc == 0x3C3E0Cu) {
        ctx->pc = 0x3C3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E08u;
        // 0x3c3e0c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3E10u;
        goto label_3c3e10;
    }
    ctx->pc = 0x3C3E08u;
    {
        const bool branch_taken_0x3c3e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E08u;
        // 0x3c3e0c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e08) {
            ctx->pc = 0x3C3DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3df8;
        }
    }
    ctx->pc = 0x3C3E10u;
label_3c3e10:
    // 0x3c3e10: 0xc138ddc  jal         func_4E3770
label_3c3e14:
    if (ctx->pc == 0x3C3E14u) {
        ctx->pc = 0x3C3E18u;
        goto label_3c3e18;
    }
    ctx->pc = 0x3C3E10u;
    SET_GPR_U32(ctx, 31, 0x3C3E18u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3C3E10u, 0x3C3E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E18u;
label_3c3e18:
    // 0x3c3e18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c3e1c:
    // 0x3c3e1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3c3e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3c3e20:
    // 0x3c3e20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3c3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3c3e24:
    // 0x3c3e24: 0x40f809  jalr        $v0
label_3c3e28:
    if (ctx->pc == 0x3C3E28u) {
        ctx->pc = 0x3C3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E24u;
        // 0x3c3e28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3E2Cu;
        goto label_3c3e2c;
    }
    ctx->pc = 0x3C3E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3E2Cu);
        ctx->pc = 0x3C3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E24u;
        // 0x3c3e28: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3E24u, 0x3C3E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3E2Cu;
label_3c3e2c:
    // 0x3c3e2c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3c3e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3c3e30:
    // 0x3c3e30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c3e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c3e34:
    // 0x3c3e34: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_3c3e38:
    if (ctx->pc == 0x3C3E38u) {
        ctx->pc = 0x3C3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E34u;
        // 0x3c3e38: 0x27b50420  addiu       $s5, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3E3Cu;
        goto label_3c3e3c;
    }
    ctx->pc = 0x3C3E34u;
    {
        const bool branch_taken_0x3c3e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E34u;
        // 0x3c3e38: 0x27b50420  addiu       $s5, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e34) {
            ctx->pc = 0x3C3FC0u;
            goto label_3c3fc0;
        }
    }
    ctx->pc = 0x3C3E3Cu;
label_3c3e3c:
    // 0x3c3e3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c3e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c3e40:
    // 0x3c3e40: 0xc0e92f4  jal         func_3A4BD0
label_3c3e44:
    if (ctx->pc == 0x3C3E44u) {
        ctx->pc = 0x3C3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E40u;
        // 0x3c3e44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3E48u;
        goto label_3c3e48;
    }
    ctx->pc = 0x3C3E40u;
    SET_GPR_U32(ctx, 31, 0x3C3E48u);
    ctx->pc = 0x3C3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E40u;
    // 0x3c3e44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3C3E40u, 0x3C3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E48u;
label_3c3e48:
    // 0x3c3e48: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x3c3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3c3e4c:
    // 0x3c3e4c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3c3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3c3e50:
    // 0x3c3e50: 0x7ba50420  lq          $a1, 0x420($sp)
    ctx->pc = 0x3c3e50u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3c3e54:
    // 0x3c3e54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c3e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c3e58:
    // 0x3c3e58: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x3c3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
label_3c3e5c:
    // 0x3c3e5c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c3e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c3e60:
    // 0x3c3e60: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3c3e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3c3e64:
    // 0x3c3e64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c3e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3c3e68:
    // 0x3c3e68: 0x7fa50410  sq          $a1, 0x410($sp)
    ctx->pc = 0x3c3e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 5));
label_3c3e6c:
    // 0x3c3e6c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3c3e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3c3e70:
    // 0x3c3e70: 0xae640054  sw          $a0, 0x54($s3)
    ctx->pc = 0x3c3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 4));
label_3c3e74:
    // 0x3c3e74: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3c3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3c3e78:
    // 0x3c3e78: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3c3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3c3e7c:
    // 0x3c3e7c: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3c3e7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3c3e80:
    // 0x3c3e80: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3c3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3c3e84:
    // 0x3c3e84: 0x40f809  jalr        $v0
label_3c3e88:
    if (ctx->pc == 0x3C3E88u) {
        ctx->pc = 0x3C3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E84u;
        // 0x3c3e88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3E8Cu;
        goto label_3c3e8c;
    }
    ctx->pc = 0x3C3E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C3E8Cu);
        ctx->pc = 0x3C3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E84u;
        // 0x3c3e88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3E84u, 0x3C3E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C3E8Cu;
label_3c3e8c:
    // 0x3c3e8c: 0xc0e9694  jal         func_3A5A50
label_3c3e90:
    if (ctx->pc == 0x3C3E90u) {
        ctx->pc = 0x3C3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E8Cu;
        // 0x3c3e90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3E94u;
        goto label_3c3e94;
    }
    ctx->pc = 0x3C3E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C3E94u);
    ctx->pc = 0x3C3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E8Cu;
    // 0x3c3e90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C3E8Cu, 0x3C3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E94u;
label_3c3e94:
    // 0x3c3e94: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_3c3e98:
    if (ctx->pc == 0x3C3E98u) {
        ctx->pc = 0x3C3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E94u;
        // 0x3c3e98: 0x3c03040c  lui         $v1, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1036 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3E9Cu;
        goto label_3c3e9c;
    }
    ctx->pc = 0x3C3E94u;
    {
        const bool branch_taken_0x3c3e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E94u;
        // 0x3c3e98: 0x3c03040c  lui         $v1, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1036 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e94) {
            ctx->pc = 0x3C3FB8u;
            goto label_3c3fb8;
        }
    }
    ctx->pc = 0x3C3E9Cu;
label_3c3e9c:
    // 0x3c3e9c: 0xde6200d8  ld          $v0, 0xD8($s3)
    ctx->pc = 0x3c3e9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 216)));
label_3c3ea0:
    // 0x3c3ea0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c3ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3c3ea4:
    // 0x3c3ea4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3c3ea8:
    if (ctx->pc == 0x3C3EA8u) {
        ctx->pc = 0x3C3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EA4u;
        // 0x3c3ea8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3EACu;
        goto label_3c3eac;
    }
    ctx->pc = 0x3C3EA4u;
    {
        const bool branch_taken_0x3c3ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EA4u;
        // 0x3c3ea8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ea4) {
            ctx->pc = 0x3C3F00u;
            goto label_3c3f00;
        }
    }
    ctx->pc = 0x3C3EACu;
label_3c3eac:
    // 0x3c3eac: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x3c3eacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3c3eb0:
    // 0x3c3eb0: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3c3eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c3eb4:
    // 0x3c3eb4: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3c3eb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3c3eb8:
    // 0x3c3eb8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c3eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c3ebc:
    // 0x3c3ebc: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3c3ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3c3ec0:
    // 0x3c3ec0: 0x26102e20  addiu       $s0, $s0, 0x2E20
    ctx->pc = 0x3c3ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11808));
label_3c3ec4:
    // 0x3c3ec4: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3c3ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3c3ec8:
    // 0x3c3ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3ecc:
    // 0x3c3ecc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3c3eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c3ed0:
    // 0x3c3ed0: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3c3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3c3ed4:
    // 0x3c3ed4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3c3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c3ed8:
    // 0x3c3ed8: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3c3ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3c3edc:
    // 0x3c3edc: 0x27a80860  addiu       $t0, $sp, 0x860
    ctx->pc = 0x3c3edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3c3ee0:
    // 0x3c3ee0: 0xe7a00850  swc1        $f0, 0x850($sp)
    ctx->pc = 0x3c3ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2128), bits); }
label_3c3ee4:
    // 0x3c3ee4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3c3ee8:
    // 0x3c3ee8: 0xc0e9fd0  jal         func_3A7F40
label_3c3eec:
    if (ctx->pc == 0x3C3EECu) {
        ctx->pc = 0x3C3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EE8u;
        // 0x3c3eec: 0xafa20860  sw          $v0, 0x860($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3EF0u;
        goto label_3c3ef0;
    }
    ctx->pc = 0x3C3EE8u;
    SET_GPR_U32(ctx, 31, 0x3C3EF0u);
    ctx->pc = 0x3C3EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3EE8u;
    // 0x3c3eec: 0xafa20860  sw          $v0, 0x860($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C3EE8u, 0x3C3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3EF0u;
label_3c3ef0:
    // 0x3c3ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3ef4:
    // 0x3c3ef4: 0xc0f15bc  jal         func_3C56F0
label_3c3ef8:
    if (ctx->pc == 0x3C3EF8u) {
        ctx->pc = 0x3C3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EF4u;
        // 0x3c3ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3EFCu;
        goto label_3c3efc;
    }
    ctx->pc = 0x3C3EF4u;
    SET_GPR_U32(ctx, 31, 0x3C3EFCu);
    ctx->pc = 0x3C3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3EF4u;
    // 0x3c3ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C3EF4u, 0x3C3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3EFCu;
label_3c3efc:
    // 0x3c3efc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c3efcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3f00:
    // 0x3c3f00: 0xc7a00418  lwc1        $f0, 0x418($sp)
    ctx->pc = 0x3c3f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c3f04:
    // 0x3c3f04: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3c3f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3c3f08:
    // 0x3c3f08: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c3f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c3f0c:
    // 0x3c3f0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c3f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c3f10:
    // 0x3c3f10: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3c3f10u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_3c3f14:
    // 0x3c3f14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c3f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c3f18:
    // 0x3c3f18: 0x0  nop
    ctx->pc = 0x3c3f18u;
    // NOP
label_3c3f1c:
    // 0x3c3f1c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_3c3f20:
    if (ctx->pc == 0x3C3F20u) {
        ctx->pc = 0x3C3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F1Cu;
        // 0x3c3f20: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3F24u;
        goto label_3c3f24;
    }
    ctx->pc = 0x3C3F1Cu;
    {
        const bool branch_taken_0x3c3f1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F1Cu;
        // 0x3c3f20: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f1c) {
            ctx->pc = 0x3C3FA8u;
            goto label_3c3fa8;
        }
    }
    ctx->pc = 0x3C3F24u;
label_3c3f24:
    // 0x3c3f24: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3c3f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3c3f28:
    // 0x3c3f28: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3c3f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3c3f2c:
    // 0x3c3f2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c3f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c3f30:
    // 0x3c3f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c3f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c3f34:
    // 0x3c3f34: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c3f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c3f38:
    // 0x3c3f38: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3c3f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3c3f3c:
    // 0x3c3f3c: 0x27b10830  addiu       $s1, $sp, 0x830
    ctx->pc = 0x3c3f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3c3f40:
    // 0x3c3f40: 0x27b20840  addiu       $s2, $sp, 0x840
    ctx->pc = 0x3c3f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3c3f44:
    // 0x3c3f44: 0x26102e30  addiu       $s0, $s0, 0x2E30
    ctx->pc = 0x3c3f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11824));
label_3c3f48:
    // 0x3c3f48: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3c3f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c3f4c:
    // 0x3c3f4c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c3f50:
    // 0x3c3f50: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3c3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3c3f54:
    // 0x3c3f54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c3f54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c3f58:
    // 0x3c3f58: 0xc0cd4ee  jal         func_3353B8
label_3c3f5c:
    if (ctx->pc == 0x3C3F5Cu) {
        ctx->pc = 0x3C3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F58u;
        // 0x3c3f5c: 0xe7a00840  swc1        $f0, 0x840($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3F60u;
        goto label_3c3f60;
    }
    ctx->pc = 0x3C3F58u;
    SET_GPR_U32(ctx, 31, 0x3C3F60u);
    ctx->pc = 0x3C3F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3F58u;
    // 0x3c3f5c: 0xe7a00840  swc1        $f0, 0x840($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C3F58u, 0x3C3F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3F60u;
label_3c3f60:
    // 0x3c3f60: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3c3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_3c3f64:
    // 0x3c3f64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c3f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3f68:
    // 0x3c3f68: 0xafa20850  sw          $v0, 0x850($sp)
    ctx->pc = 0x3c3f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 2));
label_3c3f6c:
    // 0x3c3f6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c3f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c3f70:
    // 0x3c3f70: 0x27a90870  addiu       $t1, $sp, 0x870
    ctx->pc = 0x3c3f70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3c3f74:
    // 0x3c3f74: 0x27aa0880  addiu       $t2, $sp, 0x880
    ctx->pc = 0x3c3f74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3c3f78:
    // 0x3c3f78: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3c3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3c3f7c:
    // 0x3c3f7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c3f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c3f80:
    // 0x3c3f80: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3c3f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3c3f84:
    // 0x3c3f84: 0x27a80860  addiu       $t0, $sp, 0x860
    ctx->pc = 0x3c3f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3c3f88:
    // 0x3c3f88: 0xafa20860  sw          $v0, 0x860($sp)
    ctx->pc = 0x3c3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 2));
label_3c3f8c:
    // 0x3c3f8c: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3c3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3c3f90:
    // 0x3c3f90: 0xafb60880  sw          $s6, 0x880($sp)
    ctx->pc = 0x3c3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 22));
label_3c3f94:
    // 0x3c3f94: 0xc0ea040  jal         func_3A8100
label_3c3f98:
    if (ctx->pc == 0x3C3F98u) {
        ctx->pc = 0x3C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F94u;
        // 0x3c3f98: 0xafa30870  sw          $v1, 0x870($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3F9Cu;
        goto label_3c3f9c;
    }
    ctx->pc = 0x3C3F94u;
    SET_GPR_U32(ctx, 31, 0x3C3F9Cu);
    ctx->pc = 0x3C3F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3F94u;
    // 0x3c3f98: 0xafa30870  sw          $v1, 0x870($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3C3F94u, 0x3C3F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3F9Cu;
label_3c3f9c:
    // 0x3c3f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3fa0:
    // 0x3c3fa0: 0xc0f15bc  jal         func_3C56F0
label_3c3fa4:
    if (ctx->pc == 0x3C3FA4u) {
        ctx->pc = 0x3C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FA0u;
        // 0x3c3fa4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3FA8u;
        goto label_3c3fa8;
    }
    ctx->pc = 0x3C3FA0u;
    SET_GPR_U32(ctx, 31, 0x3C3FA8u);
    ctx->pc = 0x3C3FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3FA0u;
    // 0x3c3fa4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C3FA0u, 0x3C3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3FA8u;
label_3c3fa8:
    // 0x3c3fa8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3c3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3c3fac:
    // 0x3c3fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3fb0:
    // 0x3c3fb0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3c3fb4:
    if (ctx->pc == 0x3C3FB4u) {
        ctx->pc = 0x3C3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FB0u;
        // 0x3c3fb4: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3FB8u;
        goto label_3c3fb8;
    }
    ctx->pc = 0x3C3FB0u;
    {
        const bool branch_taken_0x3c3fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c3fb0) {
            ctx->pc = 0x3C3FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3FB0u;
            // 0x3c3fb4: 0xae800014  sw          $zero, 0x14($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3FB8u;
            goto label_3c3fb8;
        }
    }
    ctx->pc = 0x3C3FB8u;
label_3c3fb8:
    // 0x3c3fb8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3c3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3c3fbc:
    // 0x3c3fbc: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3c3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_3c3fc0:
    // 0x3c3fc0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3c3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3c3fc4:
    // 0x3c3fc4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3c3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3c3fc8:
    // 0x3c3fc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c3fcc:
    // 0x3c3fcc: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3c3fccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c3fd0:
    // 0x3c3fd0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_3c3fd4:
    if (ctx->pc == 0x3C3FD4u) {
        ctx->pc = 0x3C3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FD0u;
        // 0x3c3fd4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3FD8u;
        goto label_3c3fd8;
    }
    ctx->pc = 0x3C3FD0u;
    {
        const bool branch_taken_0x3c3fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FD0u;
        // 0x3c3fd4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3fd0) {
            ctx->pc = 0x3C4070u;
            goto label_3c4070;
        }
    }
    ctx->pc = 0x3C3FD8u;
label_3c3fd8:
    // 0x3c3fd8: 0xc0e87c0  jal         func_3A1F00
label_3c3fdc:
    if (ctx->pc == 0x3C3FDCu) {
        ctx->pc = 0x3C3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FD8u;
        // 0x3c3fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3FE0u;
        goto label_3c3fe0;
    }
    ctx->pc = 0x3C3FD8u;
    SET_GPR_U32(ctx, 31, 0x3C3FE0u);
    ctx->pc = 0x3C3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3FD8u;
    // 0x3c3fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3C3FD8u, 0x3C3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3FE0u;
label_3c3fe0:
    // 0x3c3fe0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3c3fe0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3c3fe4:
    // 0x3c3fe4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3c3fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c3fe8:
    // 0x3c3fe8: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x3c3fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_3c3fec:
    // 0x3c3fec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c3fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c3ff0:
    // 0x3c3ff0: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3c3ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3c3ff4:
    // 0x3c3ff4: 0xc7a00428  lwc1        $f0, 0x428($sp)
    ctx->pc = 0x3c3ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c3ff8:
    // 0x3c3ff8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c3ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c3ffc:
    // 0x3c3ffc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c3ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3c4000:
    // 0x3c4000: 0xe7a00428  swc1        $f0, 0x428($sp)
    ctx->pc = 0x3c4000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
label_3c4004:
    // 0x3c4004: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3c4004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3c4008:
    // 0x3c4008: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3c4008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3c400c:
    // 0x3c400c: 0x40f809  jalr        $v0
label_3c4010:
    if (ctx->pc == 0x3C4010u) {
        ctx->pc = 0x3C4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C400Cu;
        // 0x3c4010: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4014u;
        goto label_3c4014;
    }
    ctx->pc = 0x3C400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4014u);
        ctx->pc = 0x3C4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C400Cu;
        // 0x3c4010: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C400Cu, 0x3C4014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4014u;
label_3c4014:
    // 0x3c4014: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c4014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c4018:
    // 0x3c4018: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c4018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c401c:
    // 0x3c401c: 0xc0cd4ee  jal         func_3353B8
label_3c4020:
    if (ctx->pc == 0x3C4020u) {
        ctx->pc = 0x3C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C401Cu;
        // 0x3c4020: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4024u;
        goto label_3c4024;
    }
    ctx->pc = 0x3C401Cu;
    SET_GPR_U32(ctx, 31, 0x3C4024u);
    ctx->pc = 0x3C4020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C401Cu;
    // 0x3c4020: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C401Cu, 0x3C4024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4024u;
label_3c4024:
    // 0x3c4024: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x3c4024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c4028:
    // 0x3c4028: 0xc0e858c  jal         func_3A1630
label_3c402c:
    if (ctx->pc == 0x3C402Cu) {
        ctx->pc = 0x3C402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4028u;
        // 0x3c402c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4030u;
        goto label_3c4030;
    }
    ctx->pc = 0x3C4028u;
    SET_GPR_U32(ctx, 31, 0x3C4030u);
    ctx->pc = 0x3C402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4028u;
    // 0x3c402c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C4028u, 0x3C4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4030u;
label_3c4030:
    // 0x3c4030: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3c4030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3c4034:
    // 0x3c4034: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3c4034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c4038:
    // 0x3c4038: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c4038u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c403c:
    // 0x3c403c: 0x27a50840  addiu       $a1, $sp, 0x840
    ctx->pc = 0x3c403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3c4040:
    // 0x3c4040: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3c4040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3c4044:
    // 0x3c4044: 0x26102e40  addiu       $s0, $s0, 0x2E40
    ctx->pc = 0x3c4044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11840));
label_3c4048:
    // 0x3c4048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c404c:
    // 0x3c404c: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3c404cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3c4050:
    // 0x3c4050: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3c4050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c4054:
    // 0x3c4054: 0xc0e9f84  jal         func_3A7E10
label_3c4058:
    if (ctx->pc == 0x3C4058u) {
        ctx->pc = 0x3C4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4054u;
        // 0x3c4058: 0xe7a00850  swc1        $f0, 0x850($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C405Cu;
        goto label_3c405c;
    }
    ctx->pc = 0x3C4054u;
    SET_GPR_U32(ctx, 31, 0x3C405Cu);
    ctx->pc = 0x3C4058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4054u;
    // 0x3c4058: 0xe7a00850  swc1        $f0, 0x850($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3C4054u, 0x3C405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C405Cu;
label_3c405c:
    // 0x3c405c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4060:
    // 0x3c4060: 0xc0f15bc  jal         func_3C56F0
label_3c4064:
    if (ctx->pc == 0x3C4064u) {
        ctx->pc = 0x3C4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4060u;
        // 0x3c4064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4068u;
        goto label_3c4068;
    }
    ctx->pc = 0x3C4060u;
    SET_GPR_U32(ctx, 31, 0x3C4068u);
    ctx->pc = 0x3C4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4060u;
    // 0x3c4064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C4060u, 0x3C4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4068u;
label_3c4068:
    // 0x3c4068: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c406c:
    if (ctx->pc == 0x3C406Cu) {
        ctx->pc = 0x3C406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4068u;
        // 0x3c406c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4070u;
        goto label_3c4070;
    }
    ctx->pc = 0x3C4068u;
    {
        const bool branch_taken_0x3c4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4068u;
        // 0x3c406c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4068) {
            ctx->pc = 0x3C4074u;
            goto label_3c4074;
        }
    }
    ctx->pc = 0x3C4070u;
label_3c4070:
    // 0x3c4070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4074:
    // 0x3c4074: 0x7bb00900  lq          $s0, 0x900($sp)
    ctx->pc = 0x3c4074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3c4078:
    // 0x3c4078: 0x7bb108f0  lq          $s1, 0x8F0($sp)
    ctx->pc = 0x3c4078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3c407c:
    // 0x3c407c: 0x7bb208e0  lq          $s2, 0x8E0($sp)
    ctx->pc = 0x3c407cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3c4080:
    // 0x3c4080: 0x7bb308d0  lq          $s3, 0x8D0($sp)
    ctx->pc = 0x3c4080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3c4084:
    // 0x3c4084: 0x7bb408c0  lq          $s4, 0x8C0($sp)
    ctx->pc = 0x3c4084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3c4088:
    // 0x3c4088: 0x7bb508b0  lq          $s5, 0x8B0($sp)
    ctx->pc = 0x3c4088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3c408c:
    // 0x3c408c: 0x7bb608a0  lq          $s6, 0x8A0($sp)
    ctx->pc = 0x3c408cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3c4090:
    // 0x3c4090: 0xdfbf0890  ld          $ra, 0x890($sp)
    ctx->pc = 0x3c4090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2192)));
label_3c4094:
    // 0x3c4094: 0x3e00008  jr          $ra
label_3c4098:
    if (ctx->pc == 0x3C4098u) {
        ctx->pc = 0x3C4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4094u;
        // 0x3c4098: 0x27bd0910  addiu       $sp, $sp, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C409Cu;
        goto label_3c409c;
    }
    ctx->pc = 0x3C4094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4094u;
        // 0x3c4098: 0x27bd0910  addiu       $sp, $sp, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C409Cu;
label_3c409c:
    // 0x3c409c: 0x0  nop
    ctx->pc = 0x3c409cu;
    // NOP
    ctx->pc = 0x3c40a0u;
}
