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

// Function: sub_00431CA0
// Address: 0x431ca0 - 0x4320b0
void sub_00431CA0_0x431ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431CA0_0x431ca0");
#endif

    switch (ctx->pc) {
        case 0x431ca0u: goto label_431ca0;
        case 0x431ca4u: goto label_431ca4;
        case 0x431ca8u: goto label_431ca8;
        case 0x431cacu: goto label_431cac;
        case 0x431cb0u: goto label_431cb0;
        case 0x431cb4u: goto label_431cb4;
        case 0x431cb8u: goto label_431cb8;
        case 0x431cbcu: goto label_431cbc;
        case 0x431cc0u: goto label_431cc0;
        case 0x431cc4u: goto label_431cc4;
        case 0x431cc8u: goto label_431cc8;
        case 0x431cccu: goto label_431ccc;
        case 0x431cd0u: goto label_431cd0;
        case 0x431cd4u: goto label_431cd4;
        case 0x431cd8u: goto label_431cd8;
        case 0x431cdcu: goto label_431cdc;
        case 0x431ce0u: goto label_431ce0;
        case 0x431ce4u: goto label_431ce4;
        case 0x431ce8u: goto label_431ce8;
        case 0x431cecu: goto label_431cec;
        case 0x431cf0u: goto label_431cf0;
        case 0x431cf4u: goto label_431cf4;
        case 0x431cf8u: goto label_431cf8;
        case 0x431cfcu: goto label_431cfc;
        case 0x431d00u: goto label_431d00;
        case 0x431d04u: goto label_431d04;
        case 0x431d08u: goto label_431d08;
        case 0x431d0cu: goto label_431d0c;
        case 0x431d10u: goto label_431d10;
        case 0x431d14u: goto label_431d14;
        case 0x431d18u: goto label_431d18;
        case 0x431d1cu: goto label_431d1c;
        case 0x431d20u: goto label_431d20;
        case 0x431d24u: goto label_431d24;
        case 0x431d28u: goto label_431d28;
        case 0x431d2cu: goto label_431d2c;
        case 0x431d30u: goto label_431d30;
        case 0x431d34u: goto label_431d34;
        case 0x431d38u: goto label_431d38;
        case 0x431d3cu: goto label_431d3c;
        case 0x431d40u: goto label_431d40;
        case 0x431d44u: goto label_431d44;
        case 0x431d48u: goto label_431d48;
        case 0x431d4cu: goto label_431d4c;
        case 0x431d50u: goto label_431d50;
        case 0x431d54u: goto label_431d54;
        case 0x431d58u: goto label_431d58;
        case 0x431d5cu: goto label_431d5c;
        case 0x431d60u: goto label_431d60;
        case 0x431d64u: goto label_431d64;
        case 0x431d68u: goto label_431d68;
        case 0x431d6cu: goto label_431d6c;
        case 0x431d70u: goto label_431d70;
        case 0x431d74u: goto label_431d74;
        case 0x431d78u: goto label_431d78;
        case 0x431d7cu: goto label_431d7c;
        case 0x431d80u: goto label_431d80;
        case 0x431d84u: goto label_431d84;
        case 0x431d88u: goto label_431d88;
        case 0x431d8cu: goto label_431d8c;
        case 0x431d90u: goto label_431d90;
        case 0x431d94u: goto label_431d94;
        case 0x431d98u: goto label_431d98;
        case 0x431d9cu: goto label_431d9c;
        case 0x431da0u: goto label_431da0;
        case 0x431da4u: goto label_431da4;
        case 0x431da8u: goto label_431da8;
        case 0x431dacu: goto label_431dac;
        case 0x431db0u: goto label_431db0;
        case 0x431db4u: goto label_431db4;
        case 0x431db8u: goto label_431db8;
        case 0x431dbcu: goto label_431dbc;
        case 0x431dc0u: goto label_431dc0;
        case 0x431dc4u: goto label_431dc4;
        case 0x431dc8u: goto label_431dc8;
        case 0x431dccu: goto label_431dcc;
        case 0x431dd0u: goto label_431dd0;
        case 0x431dd4u: goto label_431dd4;
        case 0x431dd8u: goto label_431dd8;
        case 0x431ddcu: goto label_431ddc;
        case 0x431de0u: goto label_431de0;
        case 0x431de4u: goto label_431de4;
        case 0x431de8u: goto label_431de8;
        case 0x431decu: goto label_431dec;
        case 0x431df0u: goto label_431df0;
        case 0x431df4u: goto label_431df4;
        case 0x431df8u: goto label_431df8;
        case 0x431dfcu: goto label_431dfc;
        case 0x431e00u: goto label_431e00;
        case 0x431e04u: goto label_431e04;
        case 0x431e08u: goto label_431e08;
        case 0x431e0cu: goto label_431e0c;
        case 0x431e10u: goto label_431e10;
        case 0x431e14u: goto label_431e14;
        case 0x431e18u: goto label_431e18;
        case 0x431e1cu: goto label_431e1c;
        case 0x431e20u: goto label_431e20;
        case 0x431e24u: goto label_431e24;
        case 0x431e28u: goto label_431e28;
        case 0x431e2cu: goto label_431e2c;
        case 0x431e30u: goto label_431e30;
        case 0x431e34u: goto label_431e34;
        case 0x431e38u: goto label_431e38;
        case 0x431e3cu: goto label_431e3c;
        case 0x431e40u: goto label_431e40;
        case 0x431e44u: goto label_431e44;
        case 0x431e48u: goto label_431e48;
        case 0x431e4cu: goto label_431e4c;
        case 0x431e50u: goto label_431e50;
        case 0x431e54u: goto label_431e54;
        case 0x431e58u: goto label_431e58;
        case 0x431e5cu: goto label_431e5c;
        case 0x431e60u: goto label_431e60;
        case 0x431e64u: goto label_431e64;
        case 0x431e68u: goto label_431e68;
        case 0x431e6cu: goto label_431e6c;
        case 0x431e70u: goto label_431e70;
        case 0x431e74u: goto label_431e74;
        case 0x431e78u: goto label_431e78;
        case 0x431e7cu: goto label_431e7c;
        case 0x431e80u: goto label_431e80;
        case 0x431e84u: goto label_431e84;
        case 0x431e88u: goto label_431e88;
        case 0x431e8cu: goto label_431e8c;
        case 0x431e90u: goto label_431e90;
        case 0x431e94u: goto label_431e94;
        case 0x431e98u: goto label_431e98;
        case 0x431e9cu: goto label_431e9c;
        case 0x431ea0u: goto label_431ea0;
        case 0x431ea4u: goto label_431ea4;
        case 0x431ea8u: goto label_431ea8;
        case 0x431eacu: goto label_431eac;
        case 0x431eb0u: goto label_431eb0;
        case 0x431eb4u: goto label_431eb4;
        case 0x431eb8u: goto label_431eb8;
        case 0x431ebcu: goto label_431ebc;
        case 0x431ec0u: goto label_431ec0;
        case 0x431ec4u: goto label_431ec4;
        case 0x431ec8u: goto label_431ec8;
        case 0x431eccu: goto label_431ecc;
        case 0x431ed0u: goto label_431ed0;
        case 0x431ed4u: goto label_431ed4;
        case 0x431ed8u: goto label_431ed8;
        case 0x431edcu: goto label_431edc;
        case 0x431ee0u: goto label_431ee0;
        case 0x431ee4u: goto label_431ee4;
        case 0x431ee8u: goto label_431ee8;
        case 0x431eecu: goto label_431eec;
        case 0x431ef0u: goto label_431ef0;
        case 0x431ef4u: goto label_431ef4;
        case 0x431ef8u: goto label_431ef8;
        case 0x431efcu: goto label_431efc;
        case 0x431f00u: goto label_431f00;
        case 0x431f04u: goto label_431f04;
        case 0x431f08u: goto label_431f08;
        case 0x431f0cu: goto label_431f0c;
        case 0x431f10u: goto label_431f10;
        case 0x431f14u: goto label_431f14;
        case 0x431f18u: goto label_431f18;
        case 0x431f1cu: goto label_431f1c;
        case 0x431f20u: goto label_431f20;
        case 0x431f24u: goto label_431f24;
        case 0x431f28u: goto label_431f28;
        case 0x431f2cu: goto label_431f2c;
        case 0x431f30u: goto label_431f30;
        case 0x431f34u: goto label_431f34;
        case 0x431f38u: goto label_431f38;
        case 0x431f3cu: goto label_431f3c;
        case 0x431f40u: goto label_431f40;
        case 0x431f44u: goto label_431f44;
        case 0x431f48u: goto label_431f48;
        case 0x431f4cu: goto label_431f4c;
        case 0x431f50u: goto label_431f50;
        case 0x431f54u: goto label_431f54;
        case 0x431f58u: goto label_431f58;
        case 0x431f5cu: goto label_431f5c;
        case 0x431f60u: goto label_431f60;
        case 0x431f64u: goto label_431f64;
        case 0x431f68u: goto label_431f68;
        case 0x431f6cu: goto label_431f6c;
        case 0x431f70u: goto label_431f70;
        case 0x431f74u: goto label_431f74;
        case 0x431f78u: goto label_431f78;
        case 0x431f7cu: goto label_431f7c;
        case 0x431f80u: goto label_431f80;
        case 0x431f84u: goto label_431f84;
        case 0x431f88u: goto label_431f88;
        case 0x431f8cu: goto label_431f8c;
        case 0x431f90u: goto label_431f90;
        case 0x431f94u: goto label_431f94;
        case 0x431f98u: goto label_431f98;
        case 0x431f9cu: goto label_431f9c;
        case 0x431fa0u: goto label_431fa0;
        case 0x431fa4u: goto label_431fa4;
        case 0x431fa8u: goto label_431fa8;
        case 0x431facu: goto label_431fac;
        case 0x431fb0u: goto label_431fb0;
        case 0x431fb4u: goto label_431fb4;
        case 0x431fb8u: goto label_431fb8;
        case 0x431fbcu: goto label_431fbc;
        case 0x431fc0u: goto label_431fc0;
        case 0x431fc4u: goto label_431fc4;
        case 0x431fc8u: goto label_431fc8;
        case 0x431fccu: goto label_431fcc;
        case 0x431fd0u: goto label_431fd0;
        case 0x431fd4u: goto label_431fd4;
        case 0x431fd8u: goto label_431fd8;
        case 0x431fdcu: goto label_431fdc;
        case 0x431fe0u: goto label_431fe0;
        case 0x431fe4u: goto label_431fe4;
        case 0x431fe8u: goto label_431fe8;
        case 0x431fecu: goto label_431fec;
        case 0x431ff0u: goto label_431ff0;
        case 0x431ff4u: goto label_431ff4;
        case 0x431ff8u: goto label_431ff8;
        case 0x431ffcu: goto label_431ffc;
        case 0x432000u: goto label_432000;
        case 0x432004u: goto label_432004;
        case 0x432008u: goto label_432008;
        case 0x43200cu: goto label_43200c;
        case 0x432010u: goto label_432010;
        case 0x432014u: goto label_432014;
        case 0x432018u: goto label_432018;
        case 0x43201cu: goto label_43201c;
        case 0x432020u: goto label_432020;
        case 0x432024u: goto label_432024;
        case 0x432028u: goto label_432028;
        case 0x43202cu: goto label_43202c;
        case 0x432030u: goto label_432030;
        case 0x432034u: goto label_432034;
        case 0x432038u: goto label_432038;
        case 0x43203cu: goto label_43203c;
        case 0x432040u: goto label_432040;
        case 0x432044u: goto label_432044;
        case 0x432048u: goto label_432048;
        case 0x43204cu: goto label_43204c;
        case 0x432050u: goto label_432050;
        case 0x432054u: goto label_432054;
        case 0x432058u: goto label_432058;
        case 0x43205cu: goto label_43205c;
        case 0x432060u: goto label_432060;
        case 0x432064u: goto label_432064;
        case 0x432068u: goto label_432068;
        case 0x43206cu: goto label_43206c;
        case 0x432070u: goto label_432070;
        case 0x432074u: goto label_432074;
        case 0x432078u: goto label_432078;
        case 0x43207cu: goto label_43207c;
        case 0x432080u: goto label_432080;
        case 0x432084u: goto label_432084;
        case 0x432088u: goto label_432088;
        case 0x43208cu: goto label_43208c;
        case 0x432090u: goto label_432090;
        case 0x432094u: goto label_432094;
        case 0x432098u: goto label_432098;
        case 0x43209cu: goto label_43209c;
        case 0x4320a0u: goto label_4320a0;
        case 0x4320a4u: goto label_4320a4;
        case 0x4320a8u: goto label_4320a8;
        case 0x4320acu: goto label_4320ac;
        default: break;
    }

    ctx->pc = 0x431ca0u;

label_431ca0:
    // 0x431ca0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x431ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_431ca4:
    // 0x431ca4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x431ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_431ca8:
    // 0x431ca8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x431ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_431cac:
    // 0x431cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x431cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_431cb0:
    // 0x431cb0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x431cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_431cb4:
    // 0x431cb4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x431cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_431cb8:
    // 0x431cb8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x431cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_431cbc:
    // 0x431cbc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x431cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_431cc0:
    // 0x431cc0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x431cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_431cc4:
    // 0x431cc4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x431cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_431cc8:
    // 0x431cc8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x431cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_431ccc:
    // 0x431ccc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x431cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_431cd0:
    // 0x431cd0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x431cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_431cd4:
    // 0x431cd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_431cd8:
    if (ctx->pc == 0x431CD8u) {
        ctx->pc = 0x431CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431CD4u;
        // 0x431cd8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431CDCu;
        goto label_431cdc;
    }
    ctx->pc = 0x431CD4u;
    {
        const bool branch_taken_0x431cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431CD4u;
        // 0x431cd8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431cd4) {
            ctx->pc = 0x431CE8u;
            goto label_431ce8;
        }
    }
    ctx->pc = 0x431CDCu;
label_431cdc:
    // 0x431cdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x431cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_431ce0:
    // 0x431ce0: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x431ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27116)));
label_431ce4:
    // 0x431ce4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x431ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_431ce8:
    // 0x431ce8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x431ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_431cec:
    // 0x431cec: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x431cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_431cf0:
    // 0x431cf0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_431cf4:
    if (ctx->pc == 0x431CF4u) {
        ctx->pc = 0x431CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431CF0u;
        // 0x431cf4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431CF8u;
        goto label_431cf8;
    }
    ctx->pc = 0x431CF0u;
    {
        const bool branch_taken_0x431cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431cf0) {
            ctx->pc = 0x431CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431CF0u;
            // 0x431cf4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431D04u;
            goto label_431d04;
        }
    }
    ctx->pc = 0x431CF8u;
label_431cf8:
    // 0x431cf8: 0xc10c63e  jal         func_4318F8
label_431cfc:
    if (ctx->pc == 0x431CFCu) {
        ctx->pc = 0x431D00u;
        goto label_431d00;
    }
    ctx->pc = 0x431CF8u;
    SET_GPR_U32(ctx, 31, 0x431D00u);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x431CF8u, 0x431D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D00u;
label_431d00:
    // 0x431d00: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x431d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_431d04:
    // 0x431d04: 0x24030108  addiu       $v1, $zero, 0x108
    ctx->pc = 0x431d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_431d08:
    // 0x431d08: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x431d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
label_431d0c:
    // 0x431d0c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_431d10:
    if (ctx->pc == 0x431D10u) {
        ctx->pc = 0x431D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D0Cu;
        // 0x431d10: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D14u;
        goto label_431d14;
    }
    ctx->pc = 0x431D0Cu;
    {
        const bool branch_taken_0x431d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x431D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D0Cu;
        // 0x431d10: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d0c) {
            ctx->pc = 0x431D1Cu;
            goto label_431d1c;
        }
    }
    ctx->pc = 0x431D14u;
label_431d14:
    // 0x431d14: 0xc10c57e  jal         func_4315F8
label_431d18:
    if (ctx->pc == 0x431D18u) {
        ctx->pc = 0x431D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D14u;
        // 0x431d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D1Cu;
        goto label_431d1c;
    }
    ctx->pc = 0x431D14u;
    SET_GPR_U32(ctx, 31, 0x431D1Cu);
    ctx->pc = 0x431D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D14u;
    // 0x431d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x431D14u, 0x431D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D1Cu;
label_431d1c:
    // 0x431d1c: 0x8e150028  lw          $s5, 0x28($s0)
    ctx->pc = 0x431d1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_431d20:
    // 0x431d20: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_431d24:
    if (ctx->pc == 0x431D24u) {
        ctx->pc = 0x431D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D20u;
        // 0x431d24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D28u;
        goto label_431d28;
    }
    ctx->pc = 0x431D20u;
    {
        const bool branch_taken_0x431d20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x431D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D20u;
        // 0x431d24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d20) {
            ctx->pc = 0x431D30u;
            goto label_431d30;
        }
    }
    ctx->pc = 0x431D28u;
label_431d28:
    // 0x431d28: 0x10000036  b           . + 4 + (0x36 << 2)
label_431d2c:
    if (ctx->pc == 0x431D2Cu) {
        ctx->pc = 0x431D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D28u;
        // 0x431d2c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D30u;
        goto label_431d30;
    }
    ctx->pc = 0x431D28u;
    {
        const bool branch_taken_0x431d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D28u;
        // 0x431d2c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d28) {
            ctx->pc = 0x431E04u;
            goto label_431e04;
        }
    }
    ctx->pc = 0x431D30u;
label_431d30:
    // 0x431d30: 0x1282000b  beq         $s4, $v0, . + 4 + (0xB << 2)
label_431d34:
    if (ctx->pc == 0x431D34u) {
        ctx->pc = 0x431D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D30u;
        // 0x431d34: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D38u;
        goto label_431d38;
    }
    ctx->pc = 0x431D30u;
    {
        const bool branch_taken_0x431d30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x431D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D30u;
        // 0x431d34: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d30) {
            ctx->pc = 0x431D60u;
            goto label_431d60;
        }
    }
    ctx->pc = 0x431D38u;
label_431d38:
    // 0x431d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_431d3c:
    if (ctx->pc == 0x431D3Cu) {
        ctx->pc = 0x431D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D38u;
        // 0x431d3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D40u;
        goto label_431d40;
    }
    ctx->pc = 0x431D38u;
    {
        const bool branch_taken_0x431d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D38u;
        // 0x431d3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d38) {
            ctx->pc = 0x431D50u;
            goto label_431d50;
        }
    }
    ctx->pc = 0x431D40u;
label_431d40:
    // 0x431d40: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
label_431d44:
    if (ctx->pc == 0x431D44u) {
        ctx->pc = 0x431D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D40u;
        // 0x431d44: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D48u;
        goto label_431d48;
    }
    ctx->pc = 0x431D40u;
    {
        const bool branch_taken_0x431d40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D40u;
        // 0x431d44: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d40) {
            ctx->pc = 0x431DF8u;
            goto label_431df8;
        }
    }
    ctx->pc = 0x431D48u;
label_431d48:
    // 0x431d48: 0x1000002f  b           . + 4 + (0x2F << 2)
label_431d4c:
    if (ctx->pc == 0x431D4Cu) {
        ctx->pc = 0x431D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D48u;
        // 0x431d4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D50u;
        goto label_431d50;
    }
    ctx->pc = 0x431D48u;
    {
        const bool branch_taken_0x431d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D48u;
        // 0x431d4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d48) {
            ctx->pc = 0x431E08u;
            goto label_431e08;
        }
    }
    ctx->pc = 0x431D50u;
label_431d50:
    // 0x431d50: 0x12820029  beq         $s4, $v0, . + 4 + (0x29 << 2)
label_431d54:
    if (ctx->pc == 0x431D54u) {
        ctx->pc = 0x431D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D50u;
        // 0x431d54: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D58u;
        goto label_431d58;
    }
    ctx->pc = 0x431D50u;
    {
        const bool branch_taken_0x431d50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x431D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D50u;
        // 0x431d54: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d50) {
            ctx->pc = 0x431DF8u;
            goto label_431df8;
        }
    }
    ctx->pc = 0x431D58u;
label_431d58:
    // 0x431d58: 0x1000002b  b           . + 4 + (0x2B << 2)
label_431d5c:
    if (ctx->pc == 0x431D5Cu) {
        ctx->pc = 0x431D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D58u;
        // 0x431d5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D60u;
        goto label_431d60;
    }
    ctx->pc = 0x431D58u;
    {
        const bool branch_taken_0x431d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D58u;
        // 0x431d5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d58) {
            ctx->pc = 0x431E08u;
            goto label_431e08;
        }
    }
    ctx->pc = 0x431D60u;
label_431d60:
    // 0x431d60: 0xc10c57e  jal         func_4315F8
label_431d64:
    if (ctx->pc == 0x431D64u) {
        ctx->pc = 0x431D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D60u;
        // 0x431d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D68u;
        goto label_431d68;
    }
    ctx->pc = 0x431D60u;
    SET_GPR_U32(ctx, 31, 0x431D68u);
    ctx->pc = 0x431D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431D60u;
    // 0x431d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x431D60u, 0x431D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431D68u;
label_431d68:
    // 0x431d68: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x431d68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431d6c:
    // 0x431d6c: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x431d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_431d70:
    // 0x431d70: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_431d74:
    if (ctx->pc == 0x431D74u) {
        ctx->pc = 0x431D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D70u;
        // 0x431d74: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D78u;
        goto label_431d78;
    }
    ctx->pc = 0x431D70u;
    {
        const bool branch_taken_0x431d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x431d70) {
            ctx->pc = 0x431D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431D70u;
            // 0x431d74: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431DA0u;
            goto label_431da0;
        }
    }
    ctx->pc = 0x431D78u;
label_431d78:
    // 0x431d78: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x431d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_431d7c:
    // 0x431d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x431d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431d80:
    // 0x431d80: 0x2a0f809  jalr        $s5
label_431d84:
    if (ctx->pc == 0x431D84u) {
        ctx->pc = 0x431D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D80u;
        // 0x431d84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D88u;
        goto label_431d88;
    }
    ctx->pc = 0x431D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x431D88u);
        ctx->pc = 0x431D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D80u;
        // 0x431d84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431D80u, 0x431D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x431D88u;
label_431d88:
    // 0x431d88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x431d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431d8c:
    // 0x431d8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x431d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_431d90:
    // 0x431d90: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
label_431d94:
    if (ctx->pc == 0x431D94u) {
        ctx->pc = 0x431D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D90u;
        // 0x431d94: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431D98u;
        goto label_431d98;
    }
    ctx->pc = 0x431D90u;
    {
        const bool branch_taken_0x431d90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x431d90) {
            ctx->pc = 0x431D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431D90u;
            // 0x431d94: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431DA4u;
            goto label_431da4;
        }
    }
    ctx->pc = 0x431D98u;
label_431d98:
    // 0x431d98: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_431d9c:
    if (ctx->pc == 0x431D9Cu) {
        ctx->pc = 0x431D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D98u;
        // 0x431d9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431DA0u;
        goto label_431da0;
    }
    ctx->pc = 0x431D98u;
    {
        const bool branch_taken_0x431d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431D98u;
        // 0x431d9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431d98) {
            ctx->pc = 0x432080u;
            goto label_432080;
        }
    }
    ctx->pc = 0x431DA0u;
label_431da0:
    // 0x431da0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x431da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431da4:
    // 0x431da4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x431da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_431da8:
    // 0x431da8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_431dac:
    if (ctx->pc == 0x431DACu) {
        ctx->pc = 0x431DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DA8u;
        // 0x431dac: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x431DB0u;
        goto label_431db0;
    }
    ctx->pc = 0x431DA8u;
    {
        const bool branch_taken_0x431da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DA8u;
        // 0x431dac: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431da8) {
            ctx->pc = 0x431DD0u;
            goto label_431dd0;
        }
    }
    ctx->pc = 0x431DB0u;
label_431db0:
    // 0x431db0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x431db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_431db4:
    // 0x431db4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x431db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_431db8:
    // 0x431db8: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x431db8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_431dbc:
    // 0x431dbc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_431dc0:
    if (ctx->pc == 0x431DC0u) {
        ctx->pc = 0x431DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DBCu;
        // 0x431dc0: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431DC4u;
        goto label_431dc4;
    }
    ctx->pc = 0x431DBCu;
    {
        const bool branch_taken_0x431dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x431DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DBCu;
        // 0x431dc0: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431dbc) {
            ctx->pc = 0x431DE8u;
            goto label_431de8;
        }
    }
    ctx->pc = 0x431DC4u;
label_431dc4:
    // 0x431dc4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x431dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_431dc8:
    // 0x431dc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_431dcc:
    if (ctx->pc == 0x431DCCu) {
        ctx->pc = 0x431DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DC8u;
        // 0x431dcc: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431DD0u;
        goto label_431dd0;
    }
    ctx->pc = 0x431DC8u;
    {
        const bool branch_taken_0x431dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DC8u;
        // 0x431dcc: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431dc8) {
            ctx->pc = 0x431DE8u;
            goto label_431de8;
        }
    }
    ctx->pc = 0x431DD0u;
label_431dd0:
    // 0x431dd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_431dd4:
    if (ctx->pc == 0x431DD4u) {
        ctx->pc = 0x431DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DD0u;
        // 0x431dd4: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431DD8u;
        goto label_431dd8;
    }
    ctx->pc = 0x431DD0u;
    {
        const bool branch_taken_0x431dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DD0u;
        // 0x431dd4: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431dd0) {
            ctx->pc = 0x431DE8u;
            goto label_431de8;
        }
    }
    ctx->pc = 0x431DD8u;
label_431dd8:
    // 0x431dd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x431dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_431ddc:
    // 0x431ddc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_431de0:
    if (ctx->pc == 0x431DE0u) {
        ctx->pc = 0x431DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DDCu;
        // 0x431de0: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431DE4u;
        goto label_431de4;
    }
    ctx->pc = 0x431DDCu;
    {
        const bool branch_taken_0x431ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DDCu;
        // 0x431de0: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ddc) {
            ctx->pc = 0x431DE8u;
            goto label_431de8;
        }
    }
    ctx->pc = 0x431DE4u;
label_431de4:
    // 0x431de4: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x431de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_431de8:
    // 0x431de8: 0x2d2b02d  daddu       $s6, $s6, $s2
    ctx->pc = 0x431de8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
label_431dec:
    // 0x431dec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x431decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431df0:
    // 0x431df0: 0x10000007  b           . + 4 + (0x7 << 2)
label_431df4:
    if (ctx->pc == 0x431DF4u) {
        ctx->pc = 0x431DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DF0u;
        // 0x431df4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431DF8u;
        goto label_431df8;
    }
    ctx->pc = 0x431DF0u;
    {
        const bool branch_taken_0x431df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DF0u;
        // 0x431df4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431df0) {
            ctx->pc = 0x431E10u;
            goto label_431e10;
        }
    }
    ctx->pc = 0x431DF8u;
label_431df8:
    // 0x431df8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x431df8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431dfc:
    // 0x431dfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_431e00:
    if (ctx->pc == 0x431E00u) {
        ctx->pc = 0x431E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DFCu;
        // 0x431e00: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E04u;
        goto label_431e04;
    }
    ctx->pc = 0x431DFCu;
    {
        const bool branch_taken_0x431dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431DFCu;
        // 0x431e00: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431dfc) {
            ctx->pc = 0x431E10u;
            goto label_431e10;
        }
    }
    ctx->pc = 0x431E04u;
label_431e04:
    // 0x431e04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x431e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_431e08:
    // 0x431e08: 0x1000009d  b           . + 4 + (0x9D << 2)
label_431e0c:
    if (ctx->pc == 0x431E0Cu) {
        ctx->pc = 0x431E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E08u;
        // 0x431e0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E10u;
        goto label_431e10;
    }
    ctx->pc = 0x431E08u;
    {
        const bool branch_taken_0x431e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E08u;
        // 0x431e0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e08) {
            ctx->pc = 0x432080u;
            goto label_432080;
        }
    }
    ctx->pc = 0x431E10u;
label_431e10:
    // 0x431e10: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
label_431e14:
    if (ctx->pc == 0x431E14u) {
        ctx->pc = 0x431E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E10u;
        // 0x431e14: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E18u;
        goto label_431e18;
    }
    ctx->pc = 0x431E10u;
    {
        const bool branch_taken_0x431e10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x431e10) {
            ctx->pc = 0x431E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431E10u;
            // 0x431e14: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431E24u;
            goto label_431e24;
        }
    }
    ctx->pc = 0x431E18u;
label_431e18:
    // 0x431e18: 0xc10c944  jal         func_432510
label_431e1c:
    if (ctx->pc == 0x431E1Cu) {
        ctx->pc = 0x431E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E18u;
        // 0x431e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E20u;
        goto label_431e20;
    }
    ctx->pc = 0x431E18u;
    SET_GPR_U32(ctx, 31, 0x431E20u);
    ctx->pc = 0x431E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431E18u;
    // 0x431e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432510u, 0x431E18u, 0x431E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431E20u;
label_431e20:
    // 0x431e20: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x431e20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431e24:
    // 0x431e24: 0x3062081a  andi        $v0, $v1, 0x81A
    ctx->pc = 0x431e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2074);
label_431e28:
    // 0x431e28: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
label_431e2c:
    if (ctx->pc == 0x431E2Cu) {
        ctx->pc = 0x431E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E28u;
        // 0x431e2c: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E30u;
        goto label_431e30;
    }
    ctx->pc = 0x431E28u;
    {
        const bool branch_taken_0x431e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E28u;
        // 0x431e2c: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e28) {
            ctx->pc = 0x43203Cu;
            goto label_43203c;
        }
    }
    ctx->pc = 0x431E30u;
label_431e30:
    // 0x431e30: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_431e34:
    if (ctx->pc == 0x431E34u) {
        ctx->pc = 0x431E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E30u;
        // 0x431e34: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E38u;
        goto label_431e38;
    }
    ctx->pc = 0x431E30u;
    {
        const bool branch_taken_0x431e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E30u;
        // 0x431e34: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e30) {
            ctx->pc = 0x431E94u;
            goto label_431e94;
        }
    }
    ctx->pc = 0x431E38u;
label_431e38:
    // 0x431e38: 0x24422aa8  addiu       $v0, $v0, 0x2AA8
    ctx->pc = 0x431e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10920));
label_431e3c:
    // 0x431e3c: 0x56a2000e  bnel        $s5, $v0, . + 4 + (0xE << 2)
label_431e40:
    if (ctx->pc == 0x431E40u) {
        ctx->pc = 0x431E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E3Cu;
        // 0x431e40: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E44u;
        goto label_431e44;
    }
    ctx->pc = 0x431E3Cu;
    {
        const bool branch_taken_0x431e3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x431e3c) {
            ctx->pc = 0x431E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431E3Cu;
            // 0x431e40: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431E78u;
            goto label_431e78;
        }
    }
    ctx->pc = 0x431E44u;
label_431e44:
    // 0x431e44: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x431e44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_431e48:
    // 0x431e48: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_431e4c:
    if (ctx->pc == 0x431E4Cu) {
        ctx->pc = 0x431E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E48u;
        // 0x431e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E50u;
        goto label_431e50;
    }
    ctx->pc = 0x431E48u;
    {
        const bool branch_taken_0x431e48 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x431E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E48u;
        // 0x431e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e48) {
            ctx->pc = 0x431E74u;
            goto label_431e74;
        }
    }
    ctx->pc = 0x431E50u;
label_431e50:
    // 0x431e50: 0xc10ea54  jal         func_43A950
label_431e54:
    if (ctx->pc == 0x431E54u) {
        ctx->pc = 0x431E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E50u;
        // 0x431e54: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E58u;
        goto label_431e58;
    }
    ctx->pc = 0x431E50u;
    SET_GPR_U32(ctx, 31, 0x431E58u);
    ctx->pc = 0x431E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431E50u;
    // 0x431e54: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A950u, 0x431E50u, 0x431E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431E58u;
label_431e58:
    // 0x431e58: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_431e5c:
    if (ctx->pc == 0x431E5Cu) {
        ctx->pc = 0x431E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E58u;
        // 0x431e5c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E60u;
        goto label_431e60;
    }
    ctx->pc = 0x431E58u;
    {
        const bool branch_taken_0x431e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431e58) {
            ctx->pc = 0x431E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431E58u;
            // 0x431e5c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431E78u;
            goto label_431e78;
        }
    }
    ctx->pc = 0x431E60u;
label_431e60:
    // 0x431e60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x431e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_431e64:
    // 0x431e64: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x431e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_431e68:
    // 0x431e68: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x431e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_431e6c:
    // 0x431e6c: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_431e70:
    if (ctx->pc == 0x431E70u) {
        ctx->pc = 0x431E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E6Cu;
        // 0x431e70: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E74u;
        goto label_431e74;
    }
    ctx->pc = 0x431E6Cu;
    {
        const bool branch_taken_0x431e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x431e6c) {
            ctx->pc = 0x431E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431E6Cu;
            // 0x431e70: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431E84u;
            goto label_431e84;
        }
    }
    ctx->pc = 0x431E74u;
label_431e74:
    // 0x431e74: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x431e74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431e78:
    // 0x431e78: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x431e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_431e7c:
    // 0x431e7c: 0x1000006f  b           . + 4 + (0x6F << 2)
label_431e80:
    if (ctx->pc == 0x431E80u) {
        ctx->pc = 0x431E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E7Cu;
        // 0x431e80: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E84u;
        goto label_431e84;
    }
    ctx->pc = 0x431E7Cu;
    {
        const bool branch_taken_0x431e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E7Cu;
        // 0x431e80: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e7c) {
            ctx->pc = 0x43203Cu;
            goto label_43203c;
        }
    }
    ctx->pc = 0x431E84u;
label_431e84:
    // 0x431e84: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x431e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_431e88:
    // 0x431e88: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x431e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_431e8c:
    // 0x431e8c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x431e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_431e90:
    // 0x431e90: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x431e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_431e94:
    // 0x431e94: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_431e98:
    if (ctx->pc == 0x431E98u) {
        ctx->pc = 0x431E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E94u;
        // 0x431e98: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431E9Cu;
        goto label_431e9c;
    }
    ctx->pc = 0x431E94u;
    {
        const bool branch_taken_0x431e94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x431e94) {
            ctx->pc = 0x431E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431E94u;
            // 0x431e98: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431EA4u;
            goto label_431ea4;
        }
    }
    ctx->pc = 0x431E9Cu;
label_431e9c:
    // 0x431e9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_431ea0:
    if (ctx->pc == 0x431EA0u) {
        ctx->pc = 0x431EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E9Cu;
        // 0x431ea0: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431EA4u;
        goto label_431ea4;
    }
    ctx->pc = 0x431E9Cu;
    {
        const bool branch_taken_0x431e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431E9Cu;
        // 0x431ea0: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431e9c) {
            ctx->pc = 0x431EBCu;
            goto label_431ebc;
        }
    }
    ctx->pc = 0x431EA4u;
label_431ea4:
    // 0x431ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x431ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_431ea8:
    // 0x431ea8: 0xc10ea54  jal         func_43A950
label_431eac:
    if (ctx->pc == 0x431EACu) {
        ctx->pc = 0x431EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EA8u;
        // 0x431eac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431EB0u;
        goto label_431eb0;
    }
    ctx->pc = 0x431EA8u;
    SET_GPR_U32(ctx, 31, 0x431EB0u);
    ctx->pc = 0x431EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431EA8u;
    // 0x431eac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A950u, 0x431EA8u, 0x431EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431EB0u;
label_431eb0:
    // 0x431eb0: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_431eb4:
    if (ctx->pc == 0x431EB4u) {
        ctx->pc = 0x431EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EB0u;
        // 0x431eb4: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431EB8u;
        goto label_431eb8;
    }
    ctx->pc = 0x431EB0u;
    {
        const bool branch_taken_0x431eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EB0u;
        // 0x431eb4: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431eb0) {
            ctx->pc = 0x43203Cu;
            goto label_43203c;
        }
    }
    ctx->pc = 0x431EB8u;
label_431eb8:
    // 0x431eb8: 0x56982d  daddu       $s3, $v0, $s6
    ctx->pc = 0x431eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 22));
label_431ebc:
    // 0x431ebc: 0x56e00015  bnel        $s7, $zero, . + 4 + (0x15 << 2)
label_431ec0:
    if (ctx->pc == 0x431EC0u) {
        ctx->pc = 0x431EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EBCu;
        // 0x431ec0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431EC4u;
        goto label_431ec4;
    }
    ctx->pc = 0x431EBCu;
    {
        const bool branch_taken_0x431ebc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x431ebc) {
            ctx->pc = 0x431EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431EBCu;
            // 0x431ec0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431F14u;
            goto label_431f14;
        }
    }
    ctx->pc = 0x431EC4u;
label_431ec4:
    // 0x431ec4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x431ec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431ec8:
    // 0x431ec8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x431ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_431ecc:
    // 0x431ecc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_431ed0:
    if (ctx->pc == 0x431ED0u) {
        ctx->pc = 0x431ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431ECCu;
        // 0x431ed0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431ED4u;
        goto label_431ed4;
    }
    ctx->pc = 0x431ECCu;
    {
        const bool branch_taken_0x431ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431ecc) {
            ctx->pc = 0x431ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431ECCu;
            // 0x431ed0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431EDCu;
            goto label_431edc;
        }
    }
    ctx->pc = 0x431ED4u;
label_431ed4:
    // 0x431ed4: 0x10000008  b           . + 4 + (0x8 << 2)
label_431ed8:
    if (ctx->pc == 0x431ED8u) {
        ctx->pc = 0x431ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431ED4u;
        // 0x431ed8: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431EDCu;
        goto label_431edc;
    }
    ctx->pc = 0x431ED4u;
    {
        const bool branch_taken_0x431ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431ED4u;
        // 0x431ed8: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ed4) {
            ctx->pc = 0x431EF8u;
            goto label_431ef8;
        }
    }
    ctx->pc = 0x431EDCu;
label_431edc:
    // 0x431edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x431edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431ee0:
    // 0x431ee0: 0x2a0f809  jalr        $s5
label_431ee4:
    if (ctx->pc == 0x431EE4u) {
        ctx->pc = 0x431EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EE0u;
        // 0x431ee4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431EE8u;
        goto label_431ee8;
    }
    ctx->pc = 0x431EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x431EE8u);
        ctx->pc = 0x431EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431EE0u;
        // 0x431ee4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431EE0u, 0x431EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x431EE8u;
label_431ee8:
    // 0x431ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x431ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431eec:
    // 0x431eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x431eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_431ef0:
    // 0x431ef0: 0x12420052  beq         $s2, $v0, . + 4 + (0x52 << 2)
label_431ef4:
    if (ctx->pc == 0x431EF4u) {
        ctx->pc = 0x431EF8u;
        goto label_431ef8;
    }
    ctx->pc = 0x431EF0u;
    {
        const bool branch_taken_0x431ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x431ef0) {
            ctx->pc = 0x43203Cu;
            goto label_43203c;
        }
    }
    ctx->pc = 0x431EF8u;
label_431ef8:
    // 0x431ef8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x431ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_431efc:
    // 0x431efc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x431efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_431f00:
    // 0x431f00: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_431f04:
    if (ctx->pc == 0x431F04u) {
        ctx->pc = 0x431F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F00u;
        // 0x431f04: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431F08u;
        goto label_431f08;
    }
    ctx->pc = 0x431F00u;
    {
        const bool branch_taken_0x431f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x431F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F00u;
        // 0x431f04: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431f00) {
            ctx->pc = 0x431F48u;
            goto label_431f48;
        }
    }
    ctx->pc = 0x431F08u;
label_431f08:
    // 0x431f08: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x431f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_431f0c:
    // 0x431f0c: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x431f0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_431f10:
    // 0x431f10: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x431f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_431f14:
    // 0x431f14: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_431f18:
    if (ctx->pc == 0x431F18u) {
        ctx->pc = 0x431F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F14u;
        // 0x431f18: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431F1Cu;
        goto label_431f1c;
    }
    ctx->pc = 0x431F14u;
    {
        const bool branch_taken_0x431f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431f14) {
            ctx->pc = 0x431F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431F14u;
            // 0x431f18: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431F4Cu;
            goto label_431f4c;
        }
    }
    ctx->pc = 0x431F1Cu;
label_431f1c:
    // 0x431f1c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x431f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_431f20:
    // 0x431f20: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x431f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_431f24:
    // 0x431f24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x431f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_431f28:
    // 0x431f28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x431f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431f2c:
    // 0x431f2c: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x431f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_431f30:
    // 0x431f30: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x431f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_431f34:
    // 0x431f34: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x431f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_431f38:
    // 0x431f38: 0x245902d  daddu       $s2, $s2, $a1
    ctx->pc = 0x431f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 5));
label_431f3c:
    // 0x431f3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x431f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_431f40:
    // 0x431f40: 0x10000009  b           . + 4 + (0x9 << 2)
label_431f44:
    if (ctx->pc == 0x431F44u) {
        ctx->pc = 0x431F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F40u;
        // 0x431f44: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431F48u;
        goto label_431f48;
    }
    ctx->pc = 0x431F40u;
    {
        const bool branch_taken_0x431f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F40u;
        // 0x431f44: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431f40) {
            ctx->pc = 0x431F68u;
            goto label_431f68;
        }
    }
    ctx->pc = 0x431F48u;
label_431f48:
    // 0x431f48: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x431f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_431f4c:
    // 0x431f4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x431f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_431f50:
    // 0x431f50: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x431f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_431f54:
    // 0x431f54: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x431f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_431f58:
    // 0x431f58: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x431f58u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_431f5c:
    // 0x431f5c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x431f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_431f60:
    // 0x431f60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x431f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_431f64:
    // 0x431f64: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x431f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_431f68:
    // 0x431f68: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x431f68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_431f6c:
    // 0x431f6c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x431f6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431f70:
    // 0x431f70: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x431f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_431f74:
    // 0x431f74: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_431f78:
    if (ctx->pc == 0x431F78u) {
        ctx->pc = 0x431F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F74u;
        // 0x431f78: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431F7Cu;
        goto label_431f7c;
    }
    ctx->pc = 0x431F74u;
    {
        const bool branch_taken_0x431f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431f74) {
            ctx->pc = 0x431F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431F74u;
            // 0x431f78: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431FC4u;
            goto label_431fc4;
        }
    }
    ctx->pc = 0x431F7Cu;
label_431f7c:
    // 0x431f7c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x431f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_431f80:
    // 0x431f80: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_431f84:
    if (ctx->pc == 0x431F84u) {
        ctx->pc = 0x431F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F80u;
        // 0x431f84: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431F88u;
        goto label_431f88;
    }
    ctx->pc = 0x431F80u;
    {
        const bool branch_taken_0x431f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x431f80) {
            ctx->pc = 0x431F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431F80u;
            // 0x431f84: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431FC4u;
            goto label_431fc4;
        }
    }
    ctx->pc = 0x431F88u;
label_431f88:
    // 0x431f88: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x431f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_431f8c:
    // 0x431f8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x431f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_431f90:
    // 0x431f90: 0x242102d  daddu       $v0, $s2, $v0
    ctx->pc = 0x431f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_431f94:
    // 0x431f94: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x431f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_431f98:
    // 0x431f98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_431f9c:
    if (ctx->pc == 0x431F9Cu) {
        ctx->pc = 0x431F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F98u;
        // 0x431f9c: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431FA0u;
        goto label_431fa0;
    }
    ctx->pc = 0x431F98u;
    {
        const bool branch_taken_0x431f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431F98u;
        // 0x431f9c: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431f98) {
            ctx->pc = 0x431FC0u;
            goto label_431fc0;
        }
    }
    ctx->pc = 0x431FA0u;
label_431fa0:
    // 0x431fa0: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x431fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_431fa4:
    // 0x431fa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x431fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_431fa8:
    // 0x431fa8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x431fa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_431fac:
    // 0x431fac: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x431facu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_431fb0:
    // 0x431fb0: 0x2222023  subu        $a0, $s1, $v0
    ctx->pc = 0x431fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_431fb4:
    // 0x431fb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x431fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_431fb8:
    // 0x431fb8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_431fbc:
    if (ctx->pc == 0x431FBCu) {
        ctx->pc = 0x431FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FB8u;
        // 0x431fbc: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431FC0u;
        goto label_431fc0;
    }
    ctx->pc = 0x431FB8u;
    {
        const bool branch_taken_0x431fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FB8u;
        // 0x431fbc: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431fb8) {
            ctx->pc = 0x432030u;
            goto label_432030;
        }
    }
    ctx->pc = 0x431FC0u;
label_431fc0:
    // 0x431fc0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x431fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_431fc4:
    // 0x431fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x431fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431fc8:
    // 0x431fc8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x431fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_431fcc:
    // 0x431fcc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x431fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_431fd0:
    // 0x431fd0: 0x539024  and         $s2, $v0, $s3
    ctx->pc = 0x431fd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_431fd4:
    // 0x431fd4: 0x2a0f809  jalr        $s5
label_431fd8:
    if (ctx->pc == 0x431FD8u) {
        ctx->pc = 0x431FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FD4u;
        // 0x431fd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431FDCu;
        goto label_431fdc;
    }
    ctx->pc = 0x431FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x431FDCu);
        ctx->pc = 0x431FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FD4u;
        // 0x431fd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431FD4u, 0x431FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x431FDCu;
label_431fdc:
    // 0x431fdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x431fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_431fe0:
    // 0x431fe0: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
label_431fe4:
    if (ctx->pc == 0x431FE4u) {
        ctx->pc = 0x431FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FE0u;
        // 0x431fe4: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431FE8u;
        goto label_431fe8;
    }
    ctx->pc = 0x431FE0u;
    {
        const bool branch_taken_0x431fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x431FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FE0u;
        // 0x431fe4: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431fe0) {
            ctx->pc = 0x43203Cu;
            goto label_43203c;
        }
    }
    ctx->pc = 0x431FE8u;
label_431fe8:
    // 0x431fe8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x431fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_431fec:
    // 0x431fec: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x431fecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_431ff0:
    // 0x431ff0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x431ff0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_431ff4:
    // 0x431ff4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x431ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_431ff8:
    // 0x431ff8: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x431ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_431ffc:
    // 0x431ffc: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_432000:
    if (ctx->pc == 0x432000u) {
        ctx->pc = 0x432000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FFCu;
        // 0x432000: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432004u;
        goto label_432004;
    }
    ctx->pc = 0x431FFCu;
    {
        const bool branch_taken_0x431ffc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x432000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431FFCu;
        // 0x432000: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431ffc) {
            ctx->pc = 0x432034u;
            goto label_432034;
        }
    }
    ctx->pc = 0x432004u;
label_432004:
    // 0x432004: 0xc10c998  jal         func_432660
label_432008:
    if (ctx->pc == 0x432008u) {
        ctx->pc = 0x432008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432004u;
        // 0x432008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43200Cu;
        goto label_43200c;
    }
    ctx->pc = 0x432004u;
    SET_GPR_U32(ctx, 31, 0x43200Cu);
    ctx->pc = 0x432008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432004u;
    // 0x432008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x432004u, 0x43200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43200Cu;
label_43200c:
    // 0x43200c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_432010:
    if (ctx->pc == 0x432010u) {
        ctx->pc = 0x432014u;
        goto label_432014;
    }
    ctx->pc = 0x43200Cu;
    {
        const bool branch_taken_0x43200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43200c) {
            ctx->pc = 0x43203Cu;
            goto label_43203c;
        }
    }
    ctx->pc = 0x432014u;
label_432014:
    // 0x432014: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x432014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_432018:
    // 0x432018: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x432018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43201c:
    // 0x43201c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_432020:
    if (ctx->pc == 0x432020u) {
        ctx->pc = 0x432020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43201Cu;
        // 0x432020: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432024u;
        goto label_432024;
    }
    ctx->pc = 0x43201Cu;
    {
        const bool branch_taken_0x43201c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43201Cu;
        // 0x432020: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43201c) {
            ctx->pc = 0x43203Cu;
            goto label_43203c;
        }
    }
    ctx->pc = 0x432024u;
label_432024:
    // 0x432024: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x432024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_432028:
    // 0x432028: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x432028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_43202c:
    // 0x43202c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x43202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_432030:
    // 0x432030: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x432030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_432034:
    // 0x432034: 0x10000012  b           . + 4 + (0x12 << 2)
label_432038:
    if (ctx->pc == 0x432038u) {
        ctx->pc = 0x432038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432034u;
        // 0x432038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43203Cu;
        goto label_43203c;
    }
    ctx->pc = 0x432034u;
    {
        const bool branch_taken_0x432034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432034u;
        // 0x432038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432034) {
            ctx->pc = 0x432080u;
            goto label_432080;
        }
    }
    ctx->pc = 0x43203Cu;
label_43203c:
    // 0x43203c: 0xc10c57e  jal         func_4315F8
label_432040:
    if (ctx->pc == 0x432040u) {
        ctx->pc = 0x432040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43203Cu;
        // 0x432040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432044u;
        goto label_432044;
    }
    ctx->pc = 0x43203Cu;
    SET_GPR_U32(ctx, 31, 0x432044u);
    ctx->pc = 0x432040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43203Cu;
    // 0x432040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x43203Cu, 0x432044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432044u;
label_432044:
    // 0x432044: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_432048:
    if (ctx->pc == 0x432048u) {
        ctx->pc = 0x432048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432044u;
        // 0x432048: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43204Cu;
        goto label_43204c;
    }
    ctx->pc = 0x432044u;
    {
        const bool branch_taken_0x432044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x432048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432044u;
        // 0x432048: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432044) {
            ctx->pc = 0x432080u;
            goto label_432080;
        }
    }
    ctx->pc = 0x43204Cu;
label_43204c:
    // 0x43204c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x43204cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_432050:
    // 0x432050: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x432050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_432054:
    // 0x432054: 0x2a0f809  jalr        $s5
label_432058:
    if (ctx->pc == 0x432058u) {
        ctx->pc = 0x432058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432054u;
        // 0x432058: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43205Cu;
        goto label_43205c;
    }
    ctx->pc = 0x432054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x43205Cu);
        ctx->pc = 0x432058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432054u;
        // 0x432058: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432054u, 0x43205Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43205Cu;
label_43205c:
    // 0x43205c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_432060:
    // 0x432060: 0x1043ff4d  beq         $v0, $v1, . + 4 + (-0xB3 << 2)
label_432064:
    if (ctx->pc == 0x432064u) {
        ctx->pc = 0x432064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432060u;
        // 0x432064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x432068u;
        goto label_432068;
    }
    ctx->pc = 0x432060u;
    {
        const bool branch_taken_0x432060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x432064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432060u;
        // 0x432064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432060) {
            ctx->pc = 0x431D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431d98;
        }
    }
    ctx->pc = 0x432068u;
label_432068:
    // 0x432068: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x432068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_43206c:
    // 0x43206c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x43206cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_432070:
    // 0x432070: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x432070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_432074:
    // 0x432074: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x432074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_432078:
    // 0x432078: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x432078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_43207c:
    // 0x43207c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x43207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_432080:
    // 0x432080: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x432080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_432084:
    // 0x432084: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x432084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_432088:
    // 0x432088: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x432088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_43208c:
    // 0x43208c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x43208cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_432090:
    // 0x432090: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x432090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_432094:
    // 0x432094: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x432094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_432098:
    // 0x432098: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x432098u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_43209c:
    // 0x43209c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x43209cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4320a0:
    // 0x4320a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4320a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4320a4:
    // 0x4320a4: 0x3e00008  jr          $ra
label_4320a8:
    if (ctx->pc == 0x4320A8u) {
        ctx->pc = 0x4320A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4320A4u;
        // 0x4320a8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4320ACu;
        goto label_4320ac;
    }
    ctx->pc = 0x4320A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4320A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4320A4u;
        // 0x4320a8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4320A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4320ACu;
label_4320ac:
    // 0x4320ac: 0x0  nop
    ctx->pc = 0x4320acu;
    // NOP
    ctx->pc = 0x4320b0u;
}
