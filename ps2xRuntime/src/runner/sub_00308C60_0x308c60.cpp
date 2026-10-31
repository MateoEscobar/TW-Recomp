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

// Function: sub_00308C60
// Address: 0x308c60 - 0x309058
void sub_00308C60_0x308c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308C60_0x308c60");
#endif

    switch (ctx->pc) {
        case 0x308c60u: goto label_308c60;
        case 0x308c64u: goto label_308c64;
        case 0x308c68u: goto label_308c68;
        case 0x308c6cu: goto label_308c6c;
        case 0x308c70u: goto label_308c70;
        case 0x308c74u: goto label_308c74;
        case 0x308c78u: goto label_308c78;
        case 0x308c7cu: goto label_308c7c;
        case 0x308c80u: goto label_308c80;
        case 0x308c84u: goto label_308c84;
        case 0x308c88u: goto label_308c88;
        case 0x308c8cu: goto label_308c8c;
        case 0x308c90u: goto label_308c90;
        case 0x308c94u: goto label_308c94;
        case 0x308c98u: goto label_308c98;
        case 0x308c9cu: goto label_308c9c;
        case 0x308ca0u: goto label_308ca0;
        case 0x308ca4u: goto label_308ca4;
        case 0x308ca8u: goto label_308ca8;
        case 0x308cacu: goto label_308cac;
        case 0x308cb0u: goto label_308cb0;
        case 0x308cb4u: goto label_308cb4;
        case 0x308cb8u: goto label_308cb8;
        case 0x308cbcu: goto label_308cbc;
        case 0x308cc0u: goto label_308cc0;
        case 0x308cc4u: goto label_308cc4;
        case 0x308cc8u: goto label_308cc8;
        case 0x308cccu: goto label_308ccc;
        case 0x308cd0u: goto label_308cd0;
        case 0x308cd4u: goto label_308cd4;
        case 0x308cd8u: goto label_308cd8;
        case 0x308cdcu: goto label_308cdc;
        case 0x308ce0u: goto label_308ce0;
        case 0x308ce4u: goto label_308ce4;
        case 0x308ce8u: goto label_308ce8;
        case 0x308cecu: goto label_308cec;
        case 0x308cf0u: goto label_308cf0;
        case 0x308cf4u: goto label_308cf4;
        case 0x308cf8u: goto label_308cf8;
        case 0x308cfcu: goto label_308cfc;
        case 0x308d00u: goto label_308d00;
        case 0x308d04u: goto label_308d04;
        case 0x308d08u: goto label_308d08;
        case 0x308d0cu: goto label_308d0c;
        case 0x308d10u: goto label_308d10;
        case 0x308d14u: goto label_308d14;
        case 0x308d18u: goto label_308d18;
        case 0x308d1cu: goto label_308d1c;
        case 0x308d20u: goto label_308d20;
        case 0x308d24u: goto label_308d24;
        case 0x308d28u: goto label_308d28;
        case 0x308d2cu: goto label_308d2c;
        case 0x308d30u: goto label_308d30;
        case 0x308d34u: goto label_308d34;
        case 0x308d38u: goto label_308d38;
        case 0x308d3cu: goto label_308d3c;
        case 0x308d40u: goto label_308d40;
        case 0x308d44u: goto label_308d44;
        case 0x308d48u: goto label_308d48;
        case 0x308d4cu: goto label_308d4c;
        case 0x308d50u: goto label_308d50;
        case 0x308d54u: goto label_308d54;
        case 0x308d58u: goto label_308d58;
        case 0x308d5cu: goto label_308d5c;
        case 0x308d60u: goto label_308d60;
        case 0x308d64u: goto label_308d64;
        case 0x308d68u: goto label_308d68;
        case 0x308d6cu: goto label_308d6c;
        case 0x308d70u: goto label_308d70;
        case 0x308d74u: goto label_308d74;
        case 0x308d78u: goto label_308d78;
        case 0x308d7cu: goto label_308d7c;
        case 0x308d80u: goto label_308d80;
        case 0x308d84u: goto label_308d84;
        case 0x308d88u: goto label_308d88;
        case 0x308d8cu: goto label_308d8c;
        case 0x308d90u: goto label_308d90;
        case 0x308d94u: goto label_308d94;
        case 0x308d98u: goto label_308d98;
        case 0x308d9cu: goto label_308d9c;
        case 0x308da0u: goto label_308da0;
        case 0x308da4u: goto label_308da4;
        case 0x308da8u: goto label_308da8;
        case 0x308dacu: goto label_308dac;
        case 0x308db0u: goto label_308db0;
        case 0x308db4u: goto label_308db4;
        case 0x308db8u: goto label_308db8;
        case 0x308dbcu: goto label_308dbc;
        case 0x308dc0u: goto label_308dc0;
        case 0x308dc4u: goto label_308dc4;
        case 0x308dc8u: goto label_308dc8;
        case 0x308dccu: goto label_308dcc;
        case 0x308dd0u: goto label_308dd0;
        case 0x308dd4u: goto label_308dd4;
        case 0x308dd8u: goto label_308dd8;
        case 0x308ddcu: goto label_308ddc;
        case 0x308de0u: goto label_308de0;
        case 0x308de4u: goto label_308de4;
        case 0x308de8u: goto label_308de8;
        case 0x308decu: goto label_308dec;
        case 0x308df0u: goto label_308df0;
        case 0x308df4u: goto label_308df4;
        case 0x308df8u: goto label_308df8;
        case 0x308dfcu: goto label_308dfc;
        case 0x308e00u: goto label_308e00;
        case 0x308e04u: goto label_308e04;
        case 0x308e08u: goto label_308e08;
        case 0x308e0cu: goto label_308e0c;
        case 0x308e10u: goto label_308e10;
        case 0x308e14u: goto label_308e14;
        case 0x308e18u: goto label_308e18;
        case 0x308e1cu: goto label_308e1c;
        case 0x308e20u: goto label_308e20;
        case 0x308e24u: goto label_308e24;
        case 0x308e28u: goto label_308e28;
        case 0x308e2cu: goto label_308e2c;
        case 0x308e30u: goto label_308e30;
        case 0x308e34u: goto label_308e34;
        case 0x308e38u: goto label_308e38;
        case 0x308e3cu: goto label_308e3c;
        case 0x308e40u: goto label_308e40;
        case 0x308e44u: goto label_308e44;
        case 0x308e48u: goto label_308e48;
        case 0x308e4cu: goto label_308e4c;
        case 0x308e50u: goto label_308e50;
        case 0x308e54u: goto label_308e54;
        case 0x308e58u: goto label_308e58;
        case 0x308e5cu: goto label_308e5c;
        case 0x308e60u: goto label_308e60;
        case 0x308e64u: goto label_308e64;
        case 0x308e68u: goto label_308e68;
        case 0x308e6cu: goto label_308e6c;
        case 0x308e70u: goto label_308e70;
        case 0x308e74u: goto label_308e74;
        case 0x308e78u: goto label_308e78;
        case 0x308e7cu: goto label_308e7c;
        case 0x308e80u: goto label_308e80;
        case 0x308e84u: goto label_308e84;
        case 0x308e88u: goto label_308e88;
        case 0x308e8cu: goto label_308e8c;
        case 0x308e90u: goto label_308e90;
        case 0x308e94u: goto label_308e94;
        case 0x308e98u: goto label_308e98;
        case 0x308e9cu: goto label_308e9c;
        case 0x308ea0u: goto label_308ea0;
        case 0x308ea4u: goto label_308ea4;
        case 0x308ea8u: goto label_308ea8;
        case 0x308eacu: goto label_308eac;
        case 0x308eb0u: goto label_308eb0;
        case 0x308eb4u: goto label_308eb4;
        case 0x308eb8u: goto label_308eb8;
        case 0x308ebcu: goto label_308ebc;
        case 0x308ec0u: goto label_308ec0;
        case 0x308ec4u: goto label_308ec4;
        case 0x308ec8u: goto label_308ec8;
        case 0x308eccu: goto label_308ecc;
        case 0x308ed0u: goto label_308ed0;
        case 0x308ed4u: goto label_308ed4;
        case 0x308ed8u: goto label_308ed8;
        case 0x308edcu: goto label_308edc;
        case 0x308ee0u: goto label_308ee0;
        case 0x308ee4u: goto label_308ee4;
        case 0x308ee8u: goto label_308ee8;
        case 0x308eecu: goto label_308eec;
        case 0x308ef0u: goto label_308ef0;
        case 0x308ef4u: goto label_308ef4;
        case 0x308ef8u: goto label_308ef8;
        case 0x308efcu: goto label_308efc;
        case 0x308f00u: goto label_308f00;
        case 0x308f04u: goto label_308f04;
        case 0x308f08u: goto label_308f08;
        case 0x308f0cu: goto label_308f0c;
        case 0x308f10u: goto label_308f10;
        case 0x308f14u: goto label_308f14;
        case 0x308f18u: goto label_308f18;
        case 0x308f1cu: goto label_308f1c;
        case 0x308f20u: goto label_308f20;
        case 0x308f24u: goto label_308f24;
        case 0x308f28u: goto label_308f28;
        case 0x308f2cu: goto label_308f2c;
        case 0x308f30u: goto label_308f30;
        case 0x308f34u: goto label_308f34;
        case 0x308f38u: goto label_308f38;
        case 0x308f3cu: goto label_308f3c;
        case 0x308f40u: goto label_308f40;
        case 0x308f44u: goto label_308f44;
        case 0x308f48u: goto label_308f48;
        case 0x308f4cu: goto label_308f4c;
        case 0x308f50u: goto label_308f50;
        case 0x308f54u: goto label_308f54;
        case 0x308f58u: goto label_308f58;
        case 0x308f5cu: goto label_308f5c;
        case 0x308f60u: goto label_308f60;
        case 0x308f64u: goto label_308f64;
        case 0x308f68u: goto label_308f68;
        case 0x308f6cu: goto label_308f6c;
        case 0x308f70u: goto label_308f70;
        case 0x308f74u: goto label_308f74;
        case 0x308f78u: goto label_308f78;
        case 0x308f7cu: goto label_308f7c;
        case 0x308f80u: goto label_308f80;
        case 0x308f84u: goto label_308f84;
        case 0x308f88u: goto label_308f88;
        case 0x308f8cu: goto label_308f8c;
        case 0x308f90u: goto label_308f90;
        case 0x308f94u: goto label_308f94;
        case 0x308f98u: goto label_308f98;
        case 0x308f9cu: goto label_308f9c;
        case 0x308fa0u: goto label_308fa0;
        case 0x308fa4u: goto label_308fa4;
        case 0x308fa8u: goto label_308fa8;
        case 0x308facu: goto label_308fac;
        case 0x308fb0u: goto label_308fb0;
        case 0x308fb4u: goto label_308fb4;
        case 0x308fb8u: goto label_308fb8;
        case 0x308fbcu: goto label_308fbc;
        case 0x308fc0u: goto label_308fc0;
        case 0x308fc4u: goto label_308fc4;
        case 0x308fc8u: goto label_308fc8;
        case 0x308fccu: goto label_308fcc;
        case 0x308fd0u: goto label_308fd0;
        case 0x308fd4u: goto label_308fd4;
        case 0x308fd8u: goto label_308fd8;
        case 0x308fdcu: goto label_308fdc;
        case 0x308fe0u: goto label_308fe0;
        case 0x308fe4u: goto label_308fe4;
        case 0x308fe8u: goto label_308fe8;
        case 0x308fecu: goto label_308fec;
        case 0x308ff0u: goto label_308ff0;
        case 0x308ff4u: goto label_308ff4;
        case 0x308ff8u: goto label_308ff8;
        case 0x308ffcu: goto label_308ffc;
        case 0x309000u: goto label_309000;
        case 0x309004u: goto label_309004;
        case 0x309008u: goto label_309008;
        case 0x30900cu: goto label_30900c;
        case 0x309010u: goto label_309010;
        case 0x309014u: goto label_309014;
        case 0x309018u: goto label_309018;
        case 0x30901cu: goto label_30901c;
        case 0x309020u: goto label_309020;
        case 0x309024u: goto label_309024;
        case 0x309028u: goto label_309028;
        case 0x30902cu: goto label_30902c;
        case 0x309030u: goto label_309030;
        case 0x309034u: goto label_309034;
        case 0x309038u: goto label_309038;
        case 0x30903cu: goto label_30903c;
        case 0x309040u: goto label_309040;
        case 0x309044u: goto label_309044;
        case 0x309048u: goto label_309048;
        case 0x30904cu: goto label_30904c;
        case 0x309050u: goto label_309050;
        case 0x309054u: goto label_309054;
        default: break;
    }

    ctx->pc = 0x308c60u;

label_308c60:
    // 0x308c60: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x308c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_308c64:
    // 0x308c64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x308c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_308c68:
    // 0x308c68: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x308c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_308c6c:
    // 0x308c6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x308c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_308c70:
    // 0x308c70: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x308c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_308c74:
    // 0x308c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308c78:
    // 0x308c78: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x308c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_308c7c:
    // 0x308c7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x308c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308c80:
    // 0x308c80: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x308c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_308c84:
    // 0x308c84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x308c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308c88:
    // 0x308c88: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x308c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_308c8c:
    // 0x308c8c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x308c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_308c90:
    // 0x308c90: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x308c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_308c94:
    // 0x308c94: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x308c94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_308c98:
    // 0x308c98: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_308c9c:
    // 0x308c9c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x308c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_308ca0:
    // 0x308ca0: 0xc137826  jal         func_4DE098
label_308ca4:
    if (ctx->pc == 0x308CA4u) {
        ctx->pc = 0x308CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CA0u;
        // 0x308ca4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CA8u;
        goto label_308ca8;
    }
    ctx->pc = 0x308CA0u;
    SET_GPR_U32(ctx, 31, 0x308CA8u);
    ctx->pc = 0x308CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308CA0u;
    // 0x308ca4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x308CA0u, 0x308CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CA8u;
label_308ca8:
    // 0x308ca8: 0xc0e409a  jal         func_390268
label_308cac:
    if (ctx->pc == 0x308CACu) {
        ctx->pc = 0x308CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CA8u;
        // 0x308cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CB0u;
        goto label_308cb0;
    }
    ctx->pc = 0x308CA8u;
    SET_GPR_U32(ctx, 31, 0x308CB0u);
    ctx->pc = 0x308CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308CA8u;
    // 0x308cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x308CA8u, 0x308CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CB0u;
label_308cb0:
    // 0x308cb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x308cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308cb4:
    // 0x308cb4: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_308cb8:
    if (ctx->pc == 0x308CB8u) {
        ctx->pc = 0x308CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CB4u;
        // 0x308cb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CBCu;
        goto label_308cbc;
    }
    ctx->pc = 0x308CB4u;
    {
        const bool branch_taken_0x308cb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CB4u;
        // 0x308cb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308cb4) {
            ctx->pc = 0x308CE4u;
            goto label_308ce4;
        }
    }
    ctx->pc = 0x308CBCu;
label_308cbc:
    // 0x308cbc: 0xc087502  jal         func_21D408
label_308cc0:
    if (ctx->pc == 0x308CC0u) {
        ctx->pc = 0x308CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CBCu;
        // 0x308cc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CC4u;
        goto label_308cc4;
    }
    ctx->pc = 0x308CBCu;
    SET_GPR_U32(ctx, 31, 0x308CC4u);
    ctx->pc = 0x308CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308CBCu;
    // 0x308cc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x308CBCu, 0x308CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CC4u;
label_308cc4:
    // 0x308cc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x308cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_308cc8:
    // 0x308cc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x308cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308ccc:
    // 0x308ccc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308cd0:
    // 0x308cd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308cd4:
    // 0x308cd4: 0x40f809  jalr        $v0
label_308cd8:
    if (ctx->pc == 0x308CD8u) {
        ctx->pc = 0x308CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CD4u;
        // 0x308cd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CDCu;
        goto label_308cdc;
    }
    ctx->pc = 0x308CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308CDCu);
        ctx->pc = 0x308CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CD4u;
        // 0x308cd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CD4u, 0x308CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308CDCu;
label_308cdc:
    // 0x308cdc: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x308cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_308ce0:
    // 0x308ce0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x308ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_308ce4:
    // 0x308ce4: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x308ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_308ce8:
    // 0x308ce8: 0xc0e409a  jal         func_390268
label_308cec:
    if (ctx->pc == 0x308CECu) {
        ctx->pc = 0x308CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CE8u;
        // 0x308cec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CF0u;
        goto label_308cf0;
    }
    ctx->pc = 0x308CE8u;
    SET_GPR_U32(ctx, 31, 0x308CF0u);
    ctx->pc = 0x308CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308CE8u;
    // 0x308cec: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x308CE8u, 0x308CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CF0u;
label_308cf0:
    // 0x308cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308cf4:
    // 0x308cf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x308cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_308cf8:
    // 0x308cf8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308cfc:
    // 0x308cfc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308d00:
    // 0x308d00: 0x40f809  jalr        $v0
label_308d04:
    if (ctx->pc == 0x308D04u) {
        ctx->pc = 0x308D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D00u;
        // 0x308d04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D08u;
        goto label_308d08;
    }
    ctx->pc = 0x308D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308D08u);
        ctx->pc = 0x308D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D00u;
        // 0x308d04: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D00u, 0x308D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308D08u;
label_308d08:
    // 0x308d08: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x308d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_308d0c:
    // 0x308d0c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x308d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_308d10:
    // 0x308d10: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x308d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_308d14:
    // 0x308d14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x308d14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308d18:
    // 0x308d18: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x308d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_308d1c:
    // 0x308d1c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x308d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_308d20:
    // 0x308d20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x308d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_308d24:
    // 0x308d24: 0x92450024  lbu         $a1, 0x24($s2)
    ctx->pc = 0x308d24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_308d28:
    // 0x308d28: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x308d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_308d2c:
    // 0x308d2c: 0x10a000bf  beqz        $a1, . + 4 + (0xBF << 2)
label_308d30:
    if (ctx->pc == 0x308D30u) {
        ctx->pc = 0x308D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D2Cu;
        // 0x308d30: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D34u;
        goto label_308d34;
    }
    ctx->pc = 0x308D2Cu;
    {
        const bool branch_taken_0x308d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D2Cu;
        // 0x308d30: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d2c) {
            ctx->pc = 0x30902Cu;
            goto label_30902c;
        }
    }
    ctx->pc = 0x308D34u;
label_308d34:
    // 0x308d34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x308d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_308d38:
    // 0x308d38: 0x54a200bd  bnel        $a1, $v0, . + 4 + (0xBD << 2)
label_308d3c:
    if (ctx->pc == 0x308D3Cu) {
        ctx->pc = 0x308D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D38u;
        // 0x308d3c: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D40u;
        goto label_308d40;
    }
    ctx->pc = 0x308D38u;
    {
        const bool branch_taken_0x308d38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x308d38) {
            ctx->pc = 0x308D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308D38u;
            // 0x308d3c: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309030u;
            goto label_309030;
        }
    }
    ctx->pc = 0x308D40u;
label_308d40:
    // 0x308d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308d44:
    // 0x308d44: 0xc0a3658  jal         func_28D960
label_308d48:
    if (ctx->pc == 0x308D48u) {
        ctx->pc = 0x308D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D44u;
        // 0x308d48: 0x24050094  addiu       $a1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D4Cu;
        goto label_308d4c;
    }
    ctx->pc = 0x308D44u;
    SET_GPR_U32(ctx, 31, 0x308D4Cu);
    ctx->pc = 0x308D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D44u;
    // 0x308d48: 0x24050094  addiu       $a1, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x308D44u, 0x308D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D4Cu;
label_308d4c:
    // 0x308d4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x308d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_308d50:
    // 0x308d50: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x308d50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_308d54:
    // 0x308d54: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
label_308d58:
    if (ctx->pc == 0x308D58u) {
        ctx->pc = 0x308D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D54u;
        // 0x308d58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D5Cu;
        goto label_308d5c;
    }
    ctx->pc = 0x308D54u;
    {
        const bool branch_taken_0x308d54 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x308D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D54u;
        // 0x308d58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d54) {
            ctx->pc = 0x308D78u;
            goto label_308d78;
        }
    }
    ctx->pc = 0x308D5Cu;
label_308d5c:
    // 0x308d5c: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x308d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_308d60:
    // 0x308d60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x308d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_308d64:
    // 0x308d64: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_308d68:
    if (ctx->pc == 0x308D68u) {
        ctx->pc = 0x308D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D64u;
        // 0x308d68: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D6Cu;
        goto label_308d6c;
    }
    ctx->pc = 0x308D64u;
    {
        const bool branch_taken_0x308d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308d64) {
            ctx->pc = 0x308D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308D64u;
            // 0x308d68: 0x86630092  lh          $v1, 0x92($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308D7Cu;
            goto label_308d7c;
        }
    }
    ctx->pc = 0x308D6Cu;
label_308d6c:
    // 0x308d6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x308d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_308d70:
    // 0x308d70: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x308d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_308d74:
    // 0x308d74: 0x8c520040  lw          $s2, 0x40($v0)
    ctx->pc = 0x308d74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_308d78:
    // 0x308d78: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x308d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_308d7c:
    // 0x308d7c: 0x26024b00  addiu       $v0, $s0, 0x4B00
    ctx->pc = 0x308d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_308d80:
    // 0x308d80: 0x27b10150  addiu       $s1, $sp, 0x150
    ctx->pc = 0x308d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_308d84:
    // 0x308d84: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x308d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_308d88:
    // 0x308d88: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x308d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_308d8c:
    // 0x308d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308d90:
    // 0x308d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308d94:
    // 0x308d94: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x308d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308d98:
    // 0x308d98: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x308d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_308d9c:
    // 0x308d9c: 0xc0e4060  jal         func_390180
label_308da0:
    if (ctx->pc == 0x308DA0u) {
        ctx->pc = 0x308DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D9Cu;
        // 0x308da0: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DA4u;
        goto label_308da4;
    }
    ctx->pc = 0x308D9Cu;
    SET_GPR_U32(ctx, 31, 0x308DA4u);
    ctx->pc = 0x308DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D9Cu;
    // 0x308da0: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x308D9Cu, 0x308DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308DA4u;
label_308da4:
    // 0x308da4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_308da8:
    // 0x308da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308dac:
    // 0x308dac: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x308dacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_308db0:
    // 0x308db0: 0x8c6600a4  lw          $a2, 0xA4($v1)
    ctx->pc = 0x308db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_308db4:
    // 0x308db4: 0xc0f809  jalr        $a2
label_308db8:
    if (ctx->pc == 0x308DB8u) {
        ctx->pc = 0x308DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DB4u;
        // 0x308db8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DBCu;
        goto label_308dbc;
    }
    ctx->pc = 0x308DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x308DBCu);
        ctx->pc = 0x308DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DB4u;
        // 0x308db8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308DB4u, 0x308DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308DBCu;
label_308dbc:
    // 0x308dbc: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x308dbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_308dc0:
    // 0x308dc0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x308dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_308dc4:
    // 0x308dc4: 0x86430010  lh          $v1, 0x10($s2)
    ctx->pc = 0x308dc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_308dc8:
    // 0x308dc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x308dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_308dcc:
    // 0x308dcc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x308dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_308dd0:
    // 0x308dd0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x308dd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_308dd4:
    // 0x308dd4: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x308dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_308dd8:
    // 0x308dd8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_308ddc:
    if (ctx->pc == 0x308DDCu) {
        ctx->pc = 0x308DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DD8u;
        // 0x308ddc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DE0u;
        goto label_308de0;
    }
    ctx->pc = 0x308DD8u;
    {
        const bool branch_taken_0x308dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DD8u;
        // 0x308ddc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308dd8) {
            ctx->pc = 0x308E90u;
            goto label_308e90;
        }
    }
    ctx->pc = 0x308DE0u;
label_308de0:
    // 0x308de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_308de4:
    // 0x308de4: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x308de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
label_308de8:
    // 0x308de8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308dec:
    // 0x308dec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_308df0:
    // 0x308df0: 0x800008  jr          $a0
label_308df4:
    if (ctx->pc == 0x308DF4u) {
        ctx->pc = 0x308DF8u;
        goto label_308df8;
    }
    ctx->pc = 0x308DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308DF8u: goto label_308df8;
            case 0x308E38u: goto label_308e38;
            case 0x308E4Cu: goto label_308e4c;
            case 0x308E90u: goto label_308e90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308DF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308DF8u;
label_308df8:
    // 0x308df8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x308df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_308dfc:
    // 0x308dfc: 0xc0cd780  jal         func_335E00
label_308e00:
    if (ctx->pc == 0x308E00u) {
        ctx->pc = 0x308E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DFCu;
        // 0x308e00: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E04u;
        goto label_308e04;
    }
    ctx->pc = 0x308DFCu;
    SET_GPR_U32(ctx, 31, 0x308E04u);
    ctx->pc = 0x308E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308DFCu;
    // 0x308e00: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x308DFCu, 0x308E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E04u;
label_308e04:
    // 0x308e04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x308e04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_308e08:
    // 0x308e08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_308e0c:
    // 0x308e0c: 0xc0cd7a8  jal         func_335EA0
label_308e10:
    if (ctx->pc == 0x308E10u) {
        ctx->pc = 0x308E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E0Cu;
        // 0x308e10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E14u;
        goto label_308e14;
    }
    ctx->pc = 0x308E0Cu;
    SET_GPR_U32(ctx, 31, 0x308E14u);
    ctx->pc = 0x308E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E0Cu;
    // 0x308e10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x308E0Cu, 0x308E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E14u;
label_308e14:
    // 0x308e14: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x308e14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_308e18:
    // 0x308e18: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x308e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_308e1c:
    // 0x308e1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x308e1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_308e20:
    // 0x308e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308e24:
    // 0x308e24: 0xc0cd7a8  jal         func_335EA0
label_308e28:
    if (ctx->pc == 0x308E28u) {
        ctx->pc = 0x308E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E24u;
        // 0x308e28: 0x7e420040  sq          $v0, 0x40($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E2Cu;
        goto label_308e2c;
    }
    ctx->pc = 0x308E24u;
    SET_GPR_U32(ctx, 31, 0x308E2Cu);
    ctx->pc = 0x308E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E24u;
    // 0x308e28: 0x7e420040  sq          $v0, 0x40($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x308E24u, 0x308E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E2Cu;
label_308e2c:
    // 0x308e2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_308e30:
    // 0x308e30: 0x10000011  b           . + 4 + (0x11 << 2)
label_308e34:
    if (ctx->pc == 0x308E34u) {
        ctx->pc = 0x308E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E30u;
        // 0x308e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E38u;
        goto label_308e38;
    }
    ctx->pc = 0x308E30u;
    {
        const bool branch_taken_0x308e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E30u;
        // 0x308e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e30) {
            ctx->pc = 0x308E78u;
            goto label_308e78;
        }
    }
    ctx->pc = 0x308E38u;
label_308e38:
    // 0x308e38: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x308e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_308e3c:
    // 0x308e3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_308e40:
    // 0x308e40: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x308e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_308e44:
    // 0x308e44: 0x1000000c  b           . + 4 + (0xC << 2)
label_308e48:
    if (ctx->pc == 0x308E48u) {
        ctx->pc = 0x308E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E44u;
        // 0x308e48: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E4Cu;
        goto label_308e4c;
    }
    ctx->pc = 0x308E44u;
    {
        const bool branch_taken_0x308e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E44u;
        // 0x308e48: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e44) {
            ctx->pc = 0x308E78u;
            goto label_308e78;
        }
    }
    ctx->pc = 0x308E4Cu;
label_308e4c:
    // 0x308e4c: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x308e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_308e50:
    // 0x308e50: 0xc0e4060  jal         func_390180
label_308e54:
    if (ctx->pc == 0x308E54u) {
        ctx->pc = 0x308E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E50u;
        // 0x308e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E58u;
        goto label_308e58;
    }
    ctx->pc = 0x308E50u;
    SET_GPR_U32(ctx, 31, 0x308E58u);
    ctx->pc = 0x308E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E50u;
    // 0x308e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x308E50u, 0x308E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E58u;
label_308e58:
    // 0x308e58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_308e5c:
    // 0x308e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308e60:
    // 0x308e60: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x308e60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_308e64:
    // 0x308e64: 0x8c6600a4  lw          $a2, 0xA4($v1)
    ctx->pc = 0x308e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_308e68:
    // 0x308e68: 0xc0f809  jalr        $a2
label_308e6c:
    if (ctx->pc == 0x308E6Cu) {
        ctx->pc = 0x308E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E68u;
        // 0x308e6c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E70u;
        goto label_308e70;
    }
    ctx->pc = 0x308E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x308E70u);
        ctx->pc = 0x308E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E68u;
        // 0x308e6c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E68u, 0x308E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308E70u;
label_308e70:
    // 0x308e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_308e74:
    // 0x308e74: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x308e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_308e78:
    // 0x308e78: 0xc0cd8ec  jal         func_3363B0
label_308e7c:
    if (ctx->pc == 0x308E7Cu) {
        ctx->pc = 0x308E80u;
        goto label_308e80;
    }
    ctx->pc = 0x308E78u;
    SET_GPR_U32(ctx, 31, 0x308E80u);
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x308E78u, 0x308E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E80u;
label_308e80:
    // 0x308e80: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x308e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_308e84:
    // 0x308e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308e88:
    // 0x308e88: 0x10000002  b           . + 4 + (0x2 << 2)
label_308e8c:
    if (ctx->pc == 0x308E8Cu) {
        ctx->pc = 0x308E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E88u;
        // 0x308e8c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308E90u;
        goto label_308e90;
    }
    ctx->pc = 0x308E88u;
    {
        const bool branch_taken_0x308e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E88u;
        // 0x308e8c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e88) {
            ctx->pc = 0x308E94u;
            goto label_308e94;
        }
    }
    ctx->pc = 0x308E90u;
label_308e90:
    // 0x308e90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x308e90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308e94:
    // 0x308e94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x308e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_308e98:
    // 0x308e98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308e9c:
    // 0x308e9c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_308ea0:
    if (ctx->pc == 0x308EA0u) {
        ctx->pc = 0x308EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E9Cu;
        // 0x308ea0: 0xac400bbc  sw          $zero, 0xBBC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308EA4u;
        goto label_308ea4;
    }
    ctx->pc = 0x308E9Cu;
    {
        const bool branch_taken_0x308e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E9Cu;
        // 0x308ea0: 0xac400bbc  sw          $zero, 0xBBC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e9c) {
            ctx->pc = 0x308F10u;
            goto label_308f10;
        }
    }
    ctx->pc = 0x308EA4u;
label_308ea4:
    // 0x308ea4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x308ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_308ea8:
    // 0x308ea8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x308ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_308eac:
    // 0x308eac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x308eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_308eb0:
    // 0x308eb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x308eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_308eb4:
    // 0x308eb4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x308eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_308eb8:
    // 0x308eb8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x308eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_308ebc:
    // 0x308ebc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x308ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_308ec0:
    // 0x308ec0: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x308ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_308ec4:
    // 0x308ec4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x308ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_308ec8:
    // 0x308ec8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x308ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_308ecc:
    // 0x308ecc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x308eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_308ed0:
    // 0x308ed0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x308ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_308ed4:
    // 0x308ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x308ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_308ed8:
    // 0x308ed8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x308ed8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_308edc:
    // 0x308edc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x308edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_308ee0:
    // 0x308ee0: 0xc0cfbb8  jal         func_33EEE0
label_308ee4:
    if (ctx->pc == 0x308EE4u) {
        ctx->pc = 0x308EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EE0u;
        // 0x308ee4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x308EE8u;
        goto label_308ee8;
    }
    ctx->pc = 0x308EE0u;
    SET_GPR_U32(ctx, 31, 0x308EE8u);
    ctx->pc = 0x308EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308EE0u;
    // 0x308ee4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EEE0u, 0x308EE0u, 0x308EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308EE8u;
label_308ee8:
    // 0x308ee8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_308eec:
    if (ctx->pc == 0x308EECu) {
        ctx->pc = 0x308EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EE8u;
        // 0x308eec: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308EF0u;
        goto label_308ef0;
    }
    ctx->pc = 0x308EE8u;
    {
        const bool branch_taken_0x308ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EE8u;
        // 0x308eec: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ee8) {
            ctx->pc = 0x308F10u;
            goto label_308f10;
        }
    }
    ctx->pc = 0x308EF0u;
label_308ef0:
    // 0x308ef0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_308ef4:
    if (ctx->pc == 0x308EF4u) {
        ctx->pc = 0x308EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EF0u;
        // 0x308ef4: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308EF8u;
        goto label_308ef8;
    }
    ctx->pc = 0x308EF0u;
    {
        const bool branch_taken_0x308ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ef0) {
            ctx->pc = 0x308EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308EF0u;
            // 0x308ef4: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308F14u;
            goto label_308f14;
        }
    }
    ctx->pc = 0x308EF8u;
label_308ef8:
    // 0x308ef8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308efc:
    // 0x308efc: 0xae050bbc  sw          $a1, 0xBBC($s0)
    ctx->pc = 0x308efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3004), GPR_U32(ctx, 5));
label_308f00:
    // 0x308f00: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x308f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_308f04:
    // 0x308f04: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x308f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_308f08:
    // 0x308f08: 0x40f809  jalr        $v0
label_308f0c:
    if (ctx->pc == 0x308F0Cu) {
        ctx->pc = 0x308F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F08u;
        // 0x308f0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F10u;
        goto label_308f10;
    }
    ctx->pc = 0x308F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308F10u);
        ctx->pc = 0x308F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F08u;
        // 0x308f0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308F08u, 0x308F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308F10u;
label_308f10:
    // 0x308f10: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x308f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_308f14:
    // 0x308f14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x308f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_308f18:
    // 0x308f18: 0xc104c66  jal         func_413198
label_308f1c:
    if (ctx->pc == 0x308F1Cu) {
        ctx->pc = 0x308F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F18u;
        // 0x308f1c: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F20u;
        goto label_308f20;
    }
    ctx->pc = 0x308F18u;
    SET_GPR_U32(ctx, 31, 0x308F20u);
    ctx->pc = 0x308F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F18u;
    // 0x308f1c: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413198u, 0x308F18u, 0x308F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F20u;
label_308f20:
    // 0x308f20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x308f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_308f24:
    // 0x308f24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_308f28:
    if (ctx->pc == 0x308F28u) {
        ctx->pc = 0x308F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F24u;
        // 0x308f28: 0x8e2493f8  lw          $a0, -0x6C08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F2Cu;
        goto label_308f2c;
    }
    ctx->pc = 0x308F24u;
    {
        const bool branch_taken_0x308f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F24u;
        // 0x308f28: 0x8e2493f8  lw          $a0, -0x6C08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f24) {
            ctx->pc = 0x308F48u;
            goto label_308f48;
        }
    }
    ctx->pc = 0x308F2Cu;
label_308f2c:
    // 0x308f2c: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
label_308f30:
    if (ctx->pc == 0x308F30u) {
        ctx->pc = 0x308F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F2Cu;
        // 0x308f30: 0xae000bbc  sw          $zero, 0xBBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F34u;
        goto label_308f34;
    }
    ctx->pc = 0x308F2Cu;
    {
        const bool branch_taken_0x308f2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x308F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F2Cu;
        // 0x308f30: 0xae000bbc  sw          $zero, 0xBBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f2c) {
            ctx->pc = 0x308F48u;
            goto label_308f48;
        }
    }
    ctx->pc = 0x308F34u;
label_308f34:
    // 0x308f34: 0xc08e2b8  jal         func_238AE0
label_308f38:
    if (ctx->pc == 0x308F38u) {
        ctx->pc = 0x308F3Cu;
        goto label_308f3c;
    }
    ctx->pc = 0x308F34u;
    SET_GPR_U32(ctx, 31, 0x308F3Cu);
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x308F34u, 0x308F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F3Cu;
label_308f3c:
    // 0x308f3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x308f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_308f40:
    // 0x308f40: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x308f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_308f44:
    // 0x308f44: 0xae2393f8  sw          $v1, -0x6C08($s1)
    ctx->pc = 0x308f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939640), GPR_U32(ctx, 3));
label_308f48:
    // 0x308f48: 0x86440010  lh          $a0, 0x10($s2)
    ctx->pc = 0x308f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_308f4c:
    // 0x308f4c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x308f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_308f50:
    // 0x308f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_308f54:
    if (ctx->pc == 0x308F54u) {
        ctx->pc = 0x308F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F50u;
        // 0x308f54: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F58u;
        goto label_308f58;
    }
    ctx->pc = 0x308F50u;
    {
        const bool branch_taken_0x308f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F50u;
        // 0x308f54: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f50) {
            ctx->pc = 0x308F60u;
            goto label_308f60;
        }
    }
    ctx->pc = 0x308F58u;
label_308f58:
    // 0x308f58: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_308f5c:
    if (ctx->pc == 0x308F5Cu) {
        ctx->pc = 0x308F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F58u;
        // 0x308f5c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F60u;
        goto label_308f60;
    }
    ctx->pc = 0x308F58u;
    {
        const bool branch_taken_0x308f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f58) {
            ctx->pc = 0x308F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308F58u;
            // 0x308f5c: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30900Cu;
            goto label_30900c;
        }
    }
    ctx->pc = 0x308F60u;
label_308f60:
    // 0x308f60: 0x8e050bbc  lw          $a1, 0xBBC($s0)
    ctx->pc = 0x308f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3004)));
label_308f64:
    // 0x308f64: 0x50a00029  beql        $a1, $zero, . + 4 + (0x29 << 2)
label_308f68:
    if (ctx->pc == 0x308F68u) {
        ctx->pc = 0x308F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F64u;
        // 0x308f68: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F6Cu;
        goto label_308f6c;
    }
    ctx->pc = 0x308F64u;
    {
        const bool branch_taken_0x308f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f64) {
            ctx->pc = 0x308F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308F64u;
            // 0x308f68: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30900Cu;
            goto label_30900c;
        }
    }
    ctx->pc = 0x308F6Cu;
label_308f6c:
    // 0x308f6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308f70:
    // 0x308f70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308f74:
    // 0x308f74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308f78:
    // 0x308f78: 0x40f809  jalr        $v0
label_308f7c:
    if (ctx->pc == 0x308F7Cu) {
        ctx->pc = 0x308F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F78u;
        // 0x308f7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F80u;
        goto label_308f80;
    }
    ctx->pc = 0x308F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308F80u);
        ctx->pc = 0x308F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F78u;
        // 0x308f7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308F78u, 0x308F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308F80u;
label_308f80:
    // 0x308f80: 0x8e2493f8  lw          $a0, -0x6C08($s1)
    ctx->pc = 0x308f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939640)));
label_308f84:
    // 0x308f84: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
label_308f88:
    if (ctx->pc == 0x308F88u) {
        ctx->pc = 0x308F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F84u;
        // 0x308f88: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F8Cu;
        goto label_308f8c;
    }
    ctx->pc = 0x308F84u;
    {
        const bool branch_taken_0x308f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x308F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F84u;
        // 0x308f88: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f84) {
            ctx->pc = 0x30902Cu;
            goto label_30902c;
        }
    }
    ctx->pc = 0x308F8Cu;
label_308f8c:
    // 0x308f8c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x308f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_308f90:
    // 0x308f90: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_308f94:
    if (ctx->pc == 0x308F94u) {
        ctx->pc = 0x308F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F90u;
        // 0x308f94: 0x8e050bbc  lw          $a1, 0xBBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308F98u;
        goto label_308f98;
    }
    ctx->pc = 0x308F90u;
    {
        const bool branch_taken_0x308f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x308F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F90u;
        // 0x308f94: 0x8e050bbc  lw          $a1, 0xBBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f90) {
            ctx->pc = 0x308FA4u;
            goto label_308fa4;
        }
    }
    ctx->pc = 0x308F98u;
label_308f98:
    // 0x308f98: 0xc08e2b8  jal         func_238AE0
label_308f9c:
    if (ctx->pc == 0x308F9Cu) {
        ctx->pc = 0x308FA0u;
        goto label_308fa0;
    }
    ctx->pc = 0x308F98u;
    SET_GPR_U32(ctx, 31, 0x308FA0u);
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x308F98u, 0x308FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FA0u;
label_308fa0:
    // 0x308fa0: 0x8e050bbc  lw          $a1, 0xBBC($s0)
    ctx->pc = 0x308fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3004)));
label_308fa4:
    // 0x308fa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308fa8:
    // 0x308fa8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x308fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_308fac:
    // 0x308fac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x308facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_308fb0:
    // 0x308fb0: 0x40f809  jalr        $v0
label_308fb4:
    if (ctx->pc == 0x308FB4u) {
        ctx->pc = 0x308FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FB0u;
        // 0x308fb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308FB8u;
        goto label_308fb8;
    }
    ctx->pc = 0x308FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308FB8u);
        ctx->pc = 0x308FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FB0u;
        // 0x308fb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308FB0u, 0x308FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308FB8u;
label_308fb8:
    // 0x308fb8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x308fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_308fbc:
    // 0x308fbc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_308fc0:
    if (ctx->pc == 0x308FC0u) {
        ctx->pc = 0x308FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FBCu;
        // 0x308fc0: 0x8e050bbc  lw          $a1, 0xBBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3004)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308FC4u;
        goto label_308fc4;
    }
    ctx->pc = 0x308FBCu;
    {
        const bool branch_taken_0x308fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FBCu;
        // 0x308fc0: 0x8e050bbc  lw          $a1, 0xBBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fbc) {
            ctx->pc = 0x30902Cu;
            goto label_30902c;
        }
    }
    ctx->pc = 0x308FC4u;
label_308fc4:
    // 0x308fc4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308fc8:
    // 0x308fc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308fcc:
    // 0x308fcc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308fd0:
    // 0x308fd0: 0x40f809  jalr        $v0
label_308fd4:
    if (ctx->pc == 0x308FD4u) {
        ctx->pc = 0x308FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FD0u;
        // 0x308fd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308FD8u;
        goto label_308fd8;
    }
    ctx->pc = 0x308FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308FD8u);
        ctx->pc = 0x308FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FD0u;
        // 0x308fd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308FD0u, 0x308FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308FD8u;
label_308fd8:
    // 0x308fd8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x308fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_308fdc:
    // 0x308fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308fe0:
    // 0x308fe0: 0x24a5b4d8  addiu       $a1, $a1, -0x4B28
    ctx->pc = 0x308fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948056));
label_308fe4:
    // 0x308fe4: 0xc08e2a2  jal         func_238A88
label_308fe8:
    if (ctx->pc == 0x308FE8u) {
        ctx->pc = 0x308FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FE4u;
        // 0x308fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308FECu;
        goto label_308fec;
    }
    ctx->pc = 0x308FE4u;
    SET_GPR_U32(ctx, 31, 0x308FECu);
    ctx->pc = 0x308FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FE4u;
    // 0x308fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x308FE4u, 0x308FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FECu;
label_308fec:
    // 0x308fec: 0x8e050bbc  lw          $a1, 0xBBC($s0)
    ctx->pc = 0x308fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3004)));
label_308ff0:
    // 0x308ff0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308ff4:
    // 0x308ff4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308ff8:
    // 0x308ff8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308ffc:
    // 0x308ffc: 0x40f809  jalr        $v0
label_309000:
    if (ctx->pc == 0x309000u) {
        ctx->pc = 0x309000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FFCu;
        // 0x309000: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309004u;
        goto label_309004;
    }
    ctx->pc = 0x308FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x309004u);
        ctx->pc = 0x309000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FFCu;
        // 0x309000: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308FFCu, 0x309004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309004u;
label_309004:
    // 0x309004: 0x10000009  b           . + 4 + (0x9 << 2)
label_309008:
    if (ctx->pc == 0x309008u) {
        ctx->pc = 0x309008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309004u;
        // 0x309008: 0xae2293f8  sw          $v0, -0x6C08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294939640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30900Cu;
        goto label_30900c;
    }
    ctx->pc = 0x309004u;
    {
        const bool branch_taken_0x309004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309004u;
        // 0x309008: 0xae2293f8  sw          $v0, -0x6C08($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294939640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309004) {
            ctx->pc = 0x30902Cu;
            goto label_30902c;
        }
    }
    ctx->pc = 0x30900Cu;
label_30900c:
    // 0x30900c: 0x8e2493f8  lw          $a0, -0x6C08($s1)
    ctx->pc = 0x30900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939640)));
label_309010:
    // 0x309010: 0x8e02bd30  lw          $v0, -0x42D0($s0)
    ctx->pc = 0x309010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_309014:
    // 0x309014: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_309018:
    if (ctx->pc == 0x309018u) {
        ctx->pc = 0x309018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309014u;
        // 0x309018: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30901Cu;
        goto label_30901c;
    }
    ctx->pc = 0x309014u;
    {
        const bool branch_taken_0x309014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x309014) {
            ctx->pc = 0x309018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309014u;
            // 0x309018: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309030u;
            goto label_309030;
        }
    }
    ctx->pc = 0x30901Cu;
label_30901c:
    // 0x30901c: 0xc08e2b8  jal         func_238AE0
label_309020:
    if (ctx->pc == 0x309020u) {
        ctx->pc = 0x309024u;
        goto label_309024;
    }
    ctx->pc = 0x30901Cu;
    SET_GPR_U32(ctx, 31, 0x309024u);
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x30901Cu, 0x309024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309024u;
label_309024:
    // 0x309024: 0x8e02bd30  lw          $v0, -0x42D0($s0)
    ctx->pc = 0x309024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_309028:
    // 0x309028: 0xae2293f8  sw          $v0, -0x6C08($s1)
    ctx->pc = 0x309028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939640), GPR_U32(ctx, 2));
label_30902c:
    // 0x30902c: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x30902cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_309030:
    // 0x309030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309034:
    // 0x309034: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x309034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_309038:
    // 0x309038: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x309038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_30903c:
    // 0x30903c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x30903cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_309040:
    // 0x309040: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x309040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_309044:
    // 0x309044: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x309044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_309048:
    // 0x309048: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x309048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_30904c:
    // 0x30904c: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x30904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_309050:
    // 0x309050: 0x3e00008  jr          $ra
label_309054:
    if (ctx->pc == 0x309054u) {
        ctx->pc = 0x309054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309050u;
        // 0x309054: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309058u;
        goto label_fallthrough_0x309050;
    }
    ctx->pc = 0x309050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309050u;
        // 0x309054: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x309050:
    ctx->pc = 0x309058u;
}
