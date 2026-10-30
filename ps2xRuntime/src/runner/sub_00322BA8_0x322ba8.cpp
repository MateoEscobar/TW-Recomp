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

// Function: sub_00322BA8
// Address: 0x322ba8 - 0x323060
void sub_00322BA8_0x322ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322BA8_0x322ba8");
#endif

    switch (ctx->pc) {
        case 0x322ba8u: goto label_322ba8;
        case 0x322bacu: goto label_322bac;
        case 0x322bb0u: goto label_322bb0;
        case 0x322bb4u: goto label_322bb4;
        case 0x322bb8u: goto label_322bb8;
        case 0x322bbcu: goto label_322bbc;
        case 0x322bc0u: goto label_322bc0;
        case 0x322bc4u: goto label_322bc4;
        case 0x322bc8u: goto label_322bc8;
        case 0x322bccu: goto label_322bcc;
        case 0x322bd0u: goto label_322bd0;
        case 0x322bd4u: goto label_322bd4;
        case 0x322bd8u: goto label_322bd8;
        case 0x322bdcu: goto label_322bdc;
        case 0x322be0u: goto label_322be0;
        case 0x322be4u: goto label_322be4;
        case 0x322be8u: goto label_322be8;
        case 0x322becu: goto label_322bec;
        case 0x322bf0u: goto label_322bf0;
        case 0x322bf4u: goto label_322bf4;
        case 0x322bf8u: goto label_322bf8;
        case 0x322bfcu: goto label_322bfc;
        case 0x322c00u: goto label_322c00;
        case 0x322c04u: goto label_322c04;
        case 0x322c08u: goto label_322c08;
        case 0x322c0cu: goto label_322c0c;
        case 0x322c10u: goto label_322c10;
        case 0x322c14u: goto label_322c14;
        case 0x322c18u: goto label_322c18;
        case 0x322c1cu: goto label_322c1c;
        case 0x322c20u: goto label_322c20;
        case 0x322c24u: goto label_322c24;
        case 0x322c28u: goto label_322c28;
        case 0x322c2cu: goto label_322c2c;
        case 0x322c30u: goto label_322c30;
        case 0x322c34u: goto label_322c34;
        case 0x322c38u: goto label_322c38;
        case 0x322c3cu: goto label_322c3c;
        case 0x322c40u: goto label_322c40;
        case 0x322c44u: goto label_322c44;
        case 0x322c48u: goto label_322c48;
        case 0x322c4cu: goto label_322c4c;
        case 0x322c50u: goto label_322c50;
        case 0x322c54u: goto label_322c54;
        case 0x322c58u: goto label_322c58;
        case 0x322c5cu: goto label_322c5c;
        case 0x322c60u: goto label_322c60;
        case 0x322c64u: goto label_322c64;
        case 0x322c68u: goto label_322c68;
        case 0x322c6cu: goto label_322c6c;
        case 0x322c70u: goto label_322c70;
        case 0x322c74u: goto label_322c74;
        case 0x322c78u: goto label_322c78;
        case 0x322c7cu: goto label_322c7c;
        case 0x322c80u: goto label_322c80;
        case 0x322c84u: goto label_322c84;
        case 0x322c88u: goto label_322c88;
        case 0x322c8cu: goto label_322c8c;
        case 0x322c90u: goto label_322c90;
        case 0x322c94u: goto label_322c94;
        case 0x322c98u: goto label_322c98;
        case 0x322c9cu: goto label_322c9c;
        case 0x322ca0u: goto label_322ca0;
        case 0x322ca4u: goto label_322ca4;
        case 0x322ca8u: goto label_322ca8;
        case 0x322cacu: goto label_322cac;
        case 0x322cb0u: goto label_322cb0;
        case 0x322cb4u: goto label_322cb4;
        case 0x322cb8u: goto label_322cb8;
        case 0x322cbcu: goto label_322cbc;
        case 0x322cc0u: goto label_322cc0;
        case 0x322cc4u: goto label_322cc4;
        case 0x322cc8u: goto label_322cc8;
        case 0x322cccu: goto label_322ccc;
        case 0x322cd0u: goto label_322cd0;
        case 0x322cd4u: goto label_322cd4;
        case 0x322cd8u: goto label_322cd8;
        case 0x322cdcu: goto label_322cdc;
        case 0x322ce0u: goto label_322ce0;
        case 0x322ce4u: goto label_322ce4;
        case 0x322ce8u: goto label_322ce8;
        case 0x322cecu: goto label_322cec;
        case 0x322cf0u: goto label_322cf0;
        case 0x322cf4u: goto label_322cf4;
        case 0x322cf8u: goto label_322cf8;
        case 0x322cfcu: goto label_322cfc;
        case 0x322d00u: goto label_322d00;
        case 0x322d04u: goto label_322d04;
        case 0x322d08u: goto label_322d08;
        case 0x322d0cu: goto label_322d0c;
        case 0x322d10u: goto label_322d10;
        case 0x322d14u: goto label_322d14;
        case 0x322d18u: goto label_322d18;
        case 0x322d1cu: goto label_322d1c;
        case 0x322d20u: goto label_322d20;
        case 0x322d24u: goto label_322d24;
        case 0x322d28u: goto label_322d28;
        case 0x322d2cu: goto label_322d2c;
        case 0x322d30u: goto label_322d30;
        case 0x322d34u: goto label_322d34;
        case 0x322d38u: goto label_322d38;
        case 0x322d3cu: goto label_322d3c;
        case 0x322d40u: goto label_322d40;
        case 0x322d44u: goto label_322d44;
        case 0x322d48u: goto label_322d48;
        case 0x322d4cu: goto label_322d4c;
        case 0x322d50u: goto label_322d50;
        case 0x322d54u: goto label_322d54;
        case 0x322d58u: goto label_322d58;
        case 0x322d5cu: goto label_322d5c;
        case 0x322d60u: goto label_322d60;
        case 0x322d64u: goto label_322d64;
        case 0x322d68u: goto label_322d68;
        case 0x322d6cu: goto label_322d6c;
        case 0x322d70u: goto label_322d70;
        case 0x322d74u: goto label_322d74;
        case 0x322d78u: goto label_322d78;
        case 0x322d7cu: goto label_322d7c;
        case 0x322d80u: goto label_322d80;
        case 0x322d84u: goto label_322d84;
        case 0x322d88u: goto label_322d88;
        case 0x322d8cu: goto label_322d8c;
        case 0x322d90u: goto label_322d90;
        case 0x322d94u: goto label_322d94;
        case 0x322d98u: goto label_322d98;
        case 0x322d9cu: goto label_322d9c;
        case 0x322da0u: goto label_322da0;
        case 0x322da4u: goto label_322da4;
        case 0x322da8u: goto label_322da8;
        case 0x322dacu: goto label_322dac;
        case 0x322db0u: goto label_322db0;
        case 0x322db4u: goto label_322db4;
        case 0x322db8u: goto label_322db8;
        case 0x322dbcu: goto label_322dbc;
        case 0x322dc0u: goto label_322dc0;
        case 0x322dc4u: goto label_322dc4;
        case 0x322dc8u: goto label_322dc8;
        case 0x322dccu: goto label_322dcc;
        case 0x322dd0u: goto label_322dd0;
        case 0x322dd4u: goto label_322dd4;
        case 0x322dd8u: goto label_322dd8;
        case 0x322ddcu: goto label_322ddc;
        case 0x322de0u: goto label_322de0;
        case 0x322de4u: goto label_322de4;
        case 0x322de8u: goto label_322de8;
        case 0x322decu: goto label_322dec;
        case 0x322df0u: goto label_322df0;
        case 0x322df4u: goto label_322df4;
        case 0x322df8u: goto label_322df8;
        case 0x322dfcu: goto label_322dfc;
        case 0x322e00u: goto label_322e00;
        case 0x322e04u: goto label_322e04;
        case 0x322e08u: goto label_322e08;
        case 0x322e0cu: goto label_322e0c;
        case 0x322e10u: goto label_322e10;
        case 0x322e14u: goto label_322e14;
        case 0x322e18u: goto label_322e18;
        case 0x322e1cu: goto label_322e1c;
        case 0x322e20u: goto label_322e20;
        case 0x322e24u: goto label_322e24;
        case 0x322e28u: goto label_322e28;
        case 0x322e2cu: goto label_322e2c;
        case 0x322e30u: goto label_322e30;
        case 0x322e34u: goto label_322e34;
        case 0x322e38u: goto label_322e38;
        case 0x322e3cu: goto label_322e3c;
        case 0x322e40u: goto label_322e40;
        case 0x322e44u: goto label_322e44;
        case 0x322e48u: goto label_322e48;
        case 0x322e4cu: goto label_322e4c;
        case 0x322e50u: goto label_322e50;
        case 0x322e54u: goto label_322e54;
        case 0x322e58u: goto label_322e58;
        case 0x322e5cu: goto label_322e5c;
        case 0x322e60u: goto label_322e60;
        case 0x322e64u: goto label_322e64;
        case 0x322e68u: goto label_322e68;
        case 0x322e6cu: goto label_322e6c;
        case 0x322e70u: goto label_322e70;
        case 0x322e74u: goto label_322e74;
        case 0x322e78u: goto label_322e78;
        case 0x322e7cu: goto label_322e7c;
        case 0x322e80u: goto label_322e80;
        case 0x322e84u: goto label_322e84;
        case 0x322e88u: goto label_322e88;
        case 0x322e8cu: goto label_322e8c;
        case 0x322e90u: goto label_322e90;
        case 0x322e94u: goto label_322e94;
        case 0x322e98u: goto label_322e98;
        case 0x322e9cu: goto label_322e9c;
        case 0x322ea0u: goto label_322ea0;
        case 0x322ea4u: goto label_322ea4;
        case 0x322ea8u: goto label_322ea8;
        case 0x322eacu: goto label_322eac;
        case 0x322eb0u: goto label_322eb0;
        case 0x322eb4u: goto label_322eb4;
        case 0x322eb8u: goto label_322eb8;
        case 0x322ebcu: goto label_322ebc;
        case 0x322ec0u: goto label_322ec0;
        case 0x322ec4u: goto label_322ec4;
        case 0x322ec8u: goto label_322ec8;
        case 0x322eccu: goto label_322ecc;
        case 0x322ed0u: goto label_322ed0;
        case 0x322ed4u: goto label_322ed4;
        case 0x322ed8u: goto label_322ed8;
        case 0x322edcu: goto label_322edc;
        case 0x322ee0u: goto label_322ee0;
        case 0x322ee4u: goto label_322ee4;
        case 0x322ee8u: goto label_322ee8;
        case 0x322eecu: goto label_322eec;
        case 0x322ef0u: goto label_322ef0;
        case 0x322ef4u: goto label_322ef4;
        case 0x322ef8u: goto label_322ef8;
        case 0x322efcu: goto label_322efc;
        case 0x322f00u: goto label_322f00;
        case 0x322f04u: goto label_322f04;
        case 0x322f08u: goto label_322f08;
        case 0x322f0cu: goto label_322f0c;
        case 0x322f10u: goto label_322f10;
        case 0x322f14u: goto label_322f14;
        case 0x322f18u: goto label_322f18;
        case 0x322f1cu: goto label_322f1c;
        case 0x322f20u: goto label_322f20;
        case 0x322f24u: goto label_322f24;
        case 0x322f28u: goto label_322f28;
        case 0x322f2cu: goto label_322f2c;
        case 0x322f30u: goto label_322f30;
        case 0x322f34u: goto label_322f34;
        case 0x322f38u: goto label_322f38;
        case 0x322f3cu: goto label_322f3c;
        case 0x322f40u: goto label_322f40;
        case 0x322f44u: goto label_322f44;
        case 0x322f48u: goto label_322f48;
        case 0x322f4cu: goto label_322f4c;
        case 0x322f50u: goto label_322f50;
        case 0x322f54u: goto label_322f54;
        case 0x322f58u: goto label_322f58;
        case 0x322f5cu: goto label_322f5c;
        case 0x322f60u: goto label_322f60;
        case 0x322f64u: goto label_322f64;
        case 0x322f68u: goto label_322f68;
        case 0x322f6cu: goto label_322f6c;
        case 0x322f70u: goto label_322f70;
        case 0x322f74u: goto label_322f74;
        case 0x322f78u: goto label_322f78;
        case 0x322f7cu: goto label_322f7c;
        case 0x322f80u: goto label_322f80;
        case 0x322f84u: goto label_322f84;
        case 0x322f88u: goto label_322f88;
        case 0x322f8cu: goto label_322f8c;
        case 0x322f90u: goto label_322f90;
        case 0x322f94u: goto label_322f94;
        case 0x322f98u: goto label_322f98;
        case 0x322f9cu: goto label_322f9c;
        case 0x322fa0u: goto label_322fa0;
        case 0x322fa4u: goto label_322fa4;
        case 0x322fa8u: goto label_322fa8;
        case 0x322facu: goto label_322fac;
        case 0x322fb0u: goto label_322fb0;
        case 0x322fb4u: goto label_322fb4;
        case 0x322fb8u: goto label_322fb8;
        case 0x322fbcu: goto label_322fbc;
        case 0x322fc0u: goto label_322fc0;
        case 0x322fc4u: goto label_322fc4;
        case 0x322fc8u: goto label_322fc8;
        case 0x322fccu: goto label_322fcc;
        case 0x322fd0u: goto label_322fd0;
        case 0x322fd4u: goto label_322fd4;
        case 0x322fd8u: goto label_322fd8;
        case 0x322fdcu: goto label_322fdc;
        case 0x322fe0u: goto label_322fe0;
        case 0x322fe4u: goto label_322fe4;
        case 0x322fe8u: goto label_322fe8;
        case 0x322fecu: goto label_322fec;
        case 0x322ff0u: goto label_322ff0;
        case 0x322ff4u: goto label_322ff4;
        case 0x322ff8u: goto label_322ff8;
        case 0x322ffcu: goto label_322ffc;
        case 0x323000u: goto label_323000;
        case 0x323004u: goto label_323004;
        case 0x323008u: goto label_323008;
        case 0x32300cu: goto label_32300c;
        case 0x323010u: goto label_323010;
        case 0x323014u: goto label_323014;
        case 0x323018u: goto label_323018;
        case 0x32301cu: goto label_32301c;
        case 0x323020u: goto label_323020;
        case 0x323024u: goto label_323024;
        case 0x323028u: goto label_323028;
        case 0x32302cu: goto label_32302c;
        case 0x323030u: goto label_323030;
        case 0x323034u: goto label_323034;
        case 0x323038u: goto label_323038;
        case 0x32303cu: goto label_32303c;
        case 0x323040u: goto label_323040;
        case 0x323044u: goto label_323044;
        case 0x323048u: goto label_323048;
        case 0x32304cu: goto label_32304c;
        case 0x323050u: goto label_323050;
        case 0x323054u: goto label_323054;
        case 0x323058u: goto label_323058;
        case 0x32305cu: goto label_32305c;
        default: break;
    }

    ctx->pc = 0x322ba8u;

label_322ba8:
    // 0x322ba8: 0x27bdf2f0  addiu       $sp, $sp, -0xD10
    ctx->pc = 0x322ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963952));
label_322bac:
    // 0x322bac: 0x7fb00d00  sq          $s0, 0xD00($sp)
    ctx->pc = 0x322bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3328), GPR_VEC(ctx, 16));
label_322bb0:
    // 0x322bb0: 0x7fb70c90  sq          $s7, 0xC90($sp)
    ctx->pc = 0x322bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3216), GPR_VEC(ctx, 23));
label_322bb4:
    // 0x322bb4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x322bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_322bb8:
    // 0x322bb8: 0x7fb10cf0  sq          $s1, 0xCF0($sp)
    ctx->pc = 0x322bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3312), GPR_VEC(ctx, 17));
label_322bbc:
    // 0x322bbc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x322bbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322bc0:
    // 0x322bc0: 0x7fb20ce0  sq          $s2, 0xCE0($sp)
    ctx->pc = 0x322bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3296), GPR_VEC(ctx, 18));
label_322bc4:
    // 0x322bc4: 0x7fb30cd0  sq          $s3, 0xCD0($sp)
    ctx->pc = 0x322bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3280), GPR_VEC(ctx, 19));
label_322bc8:
    // 0x322bc8: 0x7fb40cc0  sq          $s4, 0xCC0($sp)
    ctx->pc = 0x322bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3264), GPR_VEC(ctx, 20));
label_322bcc:
    // 0x322bcc: 0x7fb50cb0  sq          $s5, 0xCB0($sp)
    ctx->pc = 0x322bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3248), GPR_VEC(ctx, 21));
label_322bd0:
    // 0x322bd0: 0x7fb60ca0  sq          $s6, 0xCA0($sp)
    ctx->pc = 0x322bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3232), GPR_VEC(ctx, 22));
label_322bd4:
    // 0x322bd4: 0x7fbe0c80  sq          $fp, 0xC80($sp)
    ctx->pc = 0x322bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3200), GPR_VEC(ctx, 30));
label_322bd8:
    // 0x322bd8: 0xffbf0c70  sd          $ra, 0xC70($sp)
    ctx->pc = 0x322bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3184), GPR_U64(ctx, 31));
label_322bdc:
    // 0x322bdc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x322bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_322be0:
    // 0x322be0: 0xafa00c5c  sw          $zero, 0xC5C($sp)
    ctx->pc = 0x322be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3164), GPR_U32(ctx, 0));
label_322be4:
    // 0x322be4: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x322be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_322be8:
    // 0x322be8: 0xafa20c50  sw          $v0, 0xC50($sp)
    ctx->pc = 0x322be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3152), GPR_U32(ctx, 2));
label_322bec:
    // 0x322bec: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x322becu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_322bf0:
    // 0x322bf0: 0xc05959e  jal         func_165678
label_322bf4:
    if (ctx->pc == 0x322BF4u) {
        ctx->pc = 0x322BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BF0u;
        // 0x322bf4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BF8u;
        goto label_322bf8;
    }
    ctx->pc = 0x322BF0u;
    SET_GPR_U32(ctx, 31, 0x322BF8u);
    ctx->pc = 0x322BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322BF0u;
    // 0x322bf4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x322BF0u, 0x322BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322BF8u;
label_322bf8:
    // 0x322bf8: 0xafa20c54  sw          $v0, 0xC54($sp)
    ctx->pc = 0x322bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3156), GPR_U32(ctx, 2));
label_322bfc:
    // 0x322bfc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x322bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_322c00:
    // 0x322c00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x322c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_322c04:
    // 0x322c04: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x322c04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_322c08:
    // 0x322c08: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x322c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_322c0c:
    // 0x322c0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x322c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_322c10:
    // 0x322c10: 0x8e02b734  lw          $v0, -0x48CC($s0)
    ctx->pc = 0x322c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_322c14:
    // 0x322c14: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x322c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_322c18:
    // 0x322c18: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_322c1c:
    // 0x322c1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x322c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322c20:
    // 0x322c20: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x322c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_322c24:
    // 0x322c24: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x322c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_322c28:
    // 0x322c28: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x322c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_322c2c:
    // 0x322c2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x322c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_322c30:
    // 0x322c30: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x322c30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_322c34:
    // 0x322c34: 0xafa20c58  sw          $v0, 0xC58($sp)
    ctx->pc = 0x322c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3160), GPR_U32(ctx, 2));
label_322c38:
    // 0x322c38: 0xc0e6a14  jal         func_39A850
label_322c3c:
    if (ctx->pc == 0x322C3Cu) {
        ctx->pc = 0x322C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C38u;
        // 0x322c3c: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C40u;
        goto label_322c40;
    }
    ctx->pc = 0x322C38u;
    SET_GPR_U32(ctx, 31, 0x322C40u);
    ctx->pc = 0x322C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C38u;
    // 0x322c3c: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A850u, 0x322C38u, 0x322C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C40u;
label_322c40:
    // 0x322c40: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
label_322c44:
    if (ctx->pc == 0x322C44u) {
        ctx->pc = 0x322C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C40u;
        // 0x322c44: 0xafa20c60  sw          $v0, 0xC60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C48u;
        goto label_322c48;
    }
    ctx->pc = 0x322C40u;
    {
        const bool branch_taken_0x322c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C40u;
        // 0x322c44: 0xafa20c60  sw          $v0, 0xC60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c40) {
            ctx->pc = 0x323030u;
            goto label_323030;
        }
    }
    ctx->pc = 0x322C48u;
label_322c48:
    // 0x322c48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x322c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_322c4c:
    // 0x322c4c: 0xc0e1a34  jal         func_3868D0
label_322c50:
    if (ctx->pc == 0x322C50u) {
        ctx->pc = 0x322C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C4Cu;
        // 0x322c50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C54u;
        goto label_322c54;
    }
    ctx->pc = 0x322C4Cu;
    SET_GPR_U32(ctx, 31, 0x322C54u);
    ctx->pc = 0x322C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C4Cu;
    // 0x322c50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x322C4Cu, 0x322C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C54u;
label_322c54:
    // 0x322c54: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x322c54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322c58:
    // 0x322c58: 0x8fa30c60  lw          $v1, 0xC60($sp)
    ctx->pc = 0x322c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
label_322c5c:
    // 0x322c5c: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
label_322c60:
    if (ctx->pc == 0x322C60u) {
        ctx->pc = 0x322C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C5Cu;
        // 0x322c60: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C64u;
        goto label_322c64;
    }
    ctx->pc = 0x322C5Cu;
    {
        const bool branch_taken_0x322c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C5Cu;
        // 0x322c60: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c5c) {
            ctx->pc = 0x323030u;
            goto label_323030;
        }
    }
    ctx->pc = 0x322C64u;
label_322c64:
    // 0x322c64: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x322c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_322c68:
    // 0x322c68: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
label_322c6c:
    if (ctx->pc == 0x322C6Cu) {
        ctx->pc = 0x322C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C68u;
        // 0x322c6c: 0x7bb00d00  lq          $s0, 0xD00($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C70u;
        goto label_322c70;
    }
    ctx->pc = 0x322C68u;
    {
        const bool branch_taken_0x322c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C68u;
        // 0x322c6c: 0x7bb00d00  lq          $s0, 0xD00($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c68) {
            ctx->pc = 0x323034u;
            goto label_323034;
        }
    }
    ctx->pc = 0x322C70u;
label_322c70:
    // 0x322c70: 0x16a0003c  bnez        $s5, . + 4 + (0x3C << 2)
label_322c74:
    if (ctx->pc == 0x322C74u) {
        ctx->pc = 0x322C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C70u;
        // 0x322c74: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C78u;
        goto label_322c78;
    }
    ctx->pc = 0x322C70u;
    {
        const bool branch_taken_0x322c70 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x322C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C70u;
        // 0x322c74: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c70) {
            ctx->pc = 0x322D64u;
            goto label_322d64;
        }
    }
    ctx->pc = 0x322C78u;
label_322c78:
    // 0x322c78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x322c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322c7c:
    // 0x322c7c: 0x241e0060  addiu       $fp, $zero, 0x60
    ctx->pc = 0x322c7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_322c80:
    // 0x322c80: 0x2414002c  addiu       $s4, $zero, 0x2C
    ctx->pc = 0x322c80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_322c84:
    // 0x322c84: 0x8fa40c50  lw          $a0, 0xC50($sp)
    ctx->pc = 0x322c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3152)));
label_322c88:
    // 0x322c88: 0xc137826  jal         func_4DE098
label_322c8c:
    if (ctx->pc == 0x322C8Cu) {
        ctx->pc = 0x322C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C88u;
        // 0x322c8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C90u;
        goto label_322c90;
    }
    ctx->pc = 0x322C88u;
    SET_GPR_U32(ctx, 31, 0x322C90u);
    ctx->pc = 0x322C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C88u;
    // 0x322c8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x322C88u, 0x322C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C90u;
label_322c90:
    // 0x322c90: 0xc0e409a  jal         func_390268
label_322c94:
    if (ctx->pc == 0x322C94u) {
        ctx->pc = 0x322C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C90u;
        // 0x322c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C98u;
        goto label_322c98;
    }
    ctx->pc = 0x322C90u;
    SET_GPR_U32(ctx, 31, 0x322C98u);
    ctx->pc = 0x322C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C90u;
    // 0x322c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x322C90u, 0x322C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C98u;
label_322c98:
    // 0x322c98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322c9c:
    // 0x322c9c: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_322ca0:
    if (ctx->pc == 0x322CA0u) {
        ctx->pc = 0x322CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C9Cu;
        // 0x322ca0: 0x8fa20c54  lw          $v0, 0xC54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CA4u;
        goto label_322ca4;
    }
    ctx->pc = 0x322C9Cu;
    {
        const bool branch_taken_0x322c9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C9Cu;
        // 0x322ca0: 0x8fa20c54  lw          $v0, 0xC54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c9c) {
            ctx->pc = 0x322D4Cu;
            goto label_322d4c;
        }
    }
    ctx->pc = 0x322CA4u;
label_322ca4:
    // 0x322ca4: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
label_322ca8:
    if (ctx->pc == 0x322CA8u) {
        ctx->pc = 0x322CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CA4u;
        // 0x322ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CACu;
        goto label_322cac;
    }
    ctx->pc = 0x322CA4u;
    {
        const bool branch_taken_0x322ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x322CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CA4u;
        // 0x322ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ca4) {
            ctx->pc = 0x322D4Cu;
            goto label_322d4c;
        }
    }
    ctx->pc = 0x322CACu;
label_322cac:
    // 0x322cac: 0xc089f98  jal         func_227E60
label_322cb0:
    if (ctx->pc == 0x322CB0u) {
        ctx->pc = 0x322CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CACu;
        // 0x322cb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CB4u;
        goto label_322cb4;
    }
    ctx->pc = 0x322CACu;
    SET_GPR_U32(ctx, 31, 0x322CB4u);
    ctx->pc = 0x322CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322CACu;
    // 0x322cb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x322CACu, 0x322CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CB4u;
label_322cb4:
    // 0x322cb4: 0x50520026  beql        $v0, $s2, . + 4 + (0x26 << 2)
label_322cb8:
    if (ctx->pc == 0x322CB8u) {
        ctx->pc = 0x322CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CB4u;
        // 0x322cb8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CBCu;
        goto label_322cbc;
    }
    ctx->pc = 0x322CB4u;
    {
        const bool branch_taken_0x322cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x322cb4) {
            ctx->pc = 0x322CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322CB4u;
            // 0x322cb8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D50u;
            goto label_322d50;
        }
    }
    ctx->pc = 0x322CBCu;
label_322cbc:
    // 0x322cbc: 0xc087502  jal         func_21D408
label_322cc0:
    if (ctx->pc == 0x322CC0u) {
        ctx->pc = 0x322CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CBCu;
        // 0x322cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CC4u;
        goto label_322cc4;
    }
    ctx->pc = 0x322CBCu;
    SET_GPR_U32(ctx, 31, 0x322CC4u);
    ctx->pc = 0x322CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322CBCu;
    // 0x322cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x322CBCu, 0x322CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CC4u;
label_322cc4:
    // 0x322cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322cc8:
    // 0x322cc8: 0xc0c0f9a  jal         func_303E68
label_322ccc:
    if (ctx->pc == 0x322CCCu) {
        ctx->pc = 0x322CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CC8u;
        // 0x322ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CD0u;
        goto label_322cd0;
    }
    ctx->pc = 0x322CC8u;
    SET_GPR_U32(ctx, 31, 0x322CD0u);
    ctx->pc = 0x322CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322CC8u;
    // 0x322ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303E68u, 0x322CC8u, 0x322CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CD0u;
label_322cd0:
    // 0x322cd0: 0x1052001e  beq         $v0, $s2, . + 4 + (0x1E << 2)
label_322cd4:
    if (ctx->pc == 0x322CD4u) {
        ctx->pc = 0x322CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CD0u;
        // 0x322cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CD8u;
        goto label_322cd8;
    }
    ctx->pc = 0x322CD0u;
    {
        const bool branch_taken_0x322cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x322CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CD0u;
        // 0x322cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cd0) {
            ctx->pc = 0x322D4Cu;
            goto label_322d4c;
        }
    }
    ctx->pc = 0x322CD8u;
label_322cd8:
    // 0x322cd8: 0xc0a3658  jal         func_28D960
label_322cdc:
    if (ctx->pc == 0x322CDCu) {
        ctx->pc = 0x322CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CD8u;
        // 0x322cdc: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CE0u;
        goto label_322ce0;
    }
    ctx->pc = 0x322CD8u;
    SET_GPR_U32(ctx, 31, 0x322CE0u);
    ctx->pc = 0x322CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322CD8u;
    // 0x322cdc: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x322CD8u, 0x322CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322CE0u;
label_322ce0:
    // 0x322ce0: 0x443001b  bgezl       $v0, . + 4 + (0x1B << 2)
label_322ce4:
    if (ctx->pc == 0x322CE4u) {
        ctx->pc = 0x322CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CE0u;
        // 0x322ce4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CE8u;
        goto label_322ce8;
    }
    ctx->pc = 0x322CE0u;
    {
        const bool branch_taken_0x322ce0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x322ce0) {
            ctx->pc = 0x322CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322CE0u;
            // 0x322ce4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D50u;
            goto label_322d50;
        }
    }
    ctx->pc = 0x322CE8u;
label_322ce8:
    // 0x322ce8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x322ce8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_322cec:
    // 0x322cec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_322cf0:
    if (ctx->pc == 0x322CF0u) {
        ctx->pc = 0x322CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CECu;
        // 0x322cf0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CF4u;
        goto label_322cf4;
    }
    ctx->pc = 0x322CECu;
    {
        const bool branch_taken_0x322cec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x322CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CECu;
        // 0x322cf0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cec) {
            ctx->pc = 0x322D00u;
            goto label_322d00;
        }
    }
    ctx->pc = 0x322CF4u;
label_322cf4:
    // 0x322cf4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x322cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_322cf8:
    // 0x322cf8: 0x10000002  b           . + 4 + (0x2 << 2)
label_322cfc:
    if (ctx->pc == 0x322CFCu) {
        ctx->pc = 0x322CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CF8u;
        // 0x322cfc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D00u;
        goto label_322d00;
    }
    ctx->pc = 0x322CF8u;
    {
        const bool branch_taken_0x322cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CF8u;
        // 0x322cfc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cf8) {
            ctx->pc = 0x322D04u;
            goto label_322d04;
        }
    }
    ctx->pc = 0x322D00u;
label_322d00:
    // 0x322d00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322d04:
    // 0x322d04: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_322d08:
    if (ctx->pc == 0x322D08u) {
        ctx->pc = 0x322D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D04u;
        // 0x322d08: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D0Cu;
        goto label_322d0c;
    }
    ctx->pc = 0x322D04u;
    {
        const bool branch_taken_0x322d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x322d04) {
            ctx->pc = 0x322D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D04u;
            // 0x322d08: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D5Cu;
            goto label_322d5c;
        }
    }
    ctx->pc = 0x322D0Cu;
label_322d0c:
    // 0x322d0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x322d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_322d10:
    // 0x322d10: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x322d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_322d14:
    // 0x322d14: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x322d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_322d18:
    // 0x322d18: 0x40f809  jalr        $v0
label_322d1c:
    if (ctx->pc == 0x322D1Cu) {
        ctx->pc = 0x322D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D18u;
        // 0x322d1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D20u;
        goto label_322d20;
    }
    ctx->pc = 0x322D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322D20u);
        ctx->pc = 0x322D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D18u;
        // 0x322d1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D18u, 0x322D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322D20u;
label_322d20:
    // 0x322d20: 0x505e000b  beql        $v0, $fp, . + 4 + (0xB << 2)
label_322d24:
    if (ctx->pc == 0x322D24u) {
        ctx->pc = 0x322D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D20u;
        // 0x322d24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D28u;
        goto label_322d28;
    }
    ctx->pc = 0x322D20u;
    {
        const bool branch_taken_0x322d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x322d20) {
            ctx->pc = 0x322D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D20u;
            // 0x322d24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D50u;
            goto label_322d50;
        }
    }
    ctx->pc = 0x322D28u;
label_322d28:
    // 0x322d28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x322d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_322d2c:
    // 0x322d2c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x322d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_322d30:
    // 0x322d30: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x322d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_322d34:
    // 0x322d34: 0x40f809  jalr        $v0
label_322d38:
    if (ctx->pc == 0x322D38u) {
        ctx->pc = 0x322D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D34u;
        // 0x322d38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D3Cu;
        goto label_322d3c;
    }
    ctx->pc = 0x322D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322D3Cu);
        ctx->pc = 0x322D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D34u;
        // 0x322d38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D34u, 0x322D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322D3Cu;
label_322d3c:
    // 0x322d3c: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
label_322d40:
    if (ctx->pc == 0x322D40u) {
        ctx->pc = 0x322D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D3Cu;
        // 0x322d40: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D44u;
        goto label_322d44;
    }
    ctx->pc = 0x322D3Cu;
    {
        const bool branch_taken_0x322d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x322d3c) {
            ctx->pc = 0x322D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D3Cu;
            // 0x322d40: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D50u;
            goto label_322d50;
        }
    }
    ctx->pc = 0x322D44u;
label_322d44:
    // 0x322d44: 0x10000005  b           . + 4 + (0x5 << 2)
label_322d48:
    if (ctx->pc == 0x322D48u) {
        ctx->pc = 0x322D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D44u;
        // 0x322d48: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D4Cu;
        goto label_322d4c;
    }
    ctx->pc = 0x322D44u;
    {
        const bool branch_taken_0x322d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D44u;
        // 0x322d48: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d44) {
            ctx->pc = 0x322D5Cu;
            goto label_322d5c;
        }
    }
    ctx->pc = 0x322D4Cu;
label_322d4c:
    // 0x322d4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x322d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_322d50:
    // 0x322d50: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x322d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_322d54:
    // 0x322d54: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_322d58:
    if (ctx->pc == 0x322D58u) {
        ctx->pc = 0x322D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D54u;
        // 0x322d58: 0x8fa40c50  lw          $a0, 0xC50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D5Cu;
        goto label_322d5c;
    }
    ctx->pc = 0x322D54u;
    {
        const bool branch_taken_0x322d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D54u;
        // 0x322d58: 0x8fa40c50  lw          $a0, 0xC50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d54) {
            ctx->pc = 0x322C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322c88;
        }
    }
    ctx->pc = 0x322D5Cu;
label_322d5c:
    // 0x322d5c: 0x12a000b4  beqz        $s5, . + 4 + (0xB4 << 2)
label_322d60:
    if (ctx->pc == 0x322D60u) {
        ctx->pc = 0x322D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D5Cu;
        // 0x322d60: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D64u;
        goto label_322d64;
    }
    ctx->pc = 0x322D5Cu;
    {
        const bool branch_taken_0x322d5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D5Cu;
        // 0x322d60: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d5c) {
            ctx->pc = 0x323030u;
            goto label_323030;
        }
    }
    ctx->pc = 0x322D64u;
label_322d64:
    // 0x322d64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x322d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322d68:
    // 0x322d68: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x322d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_322d6c:
    // 0x322d6c: 0x26d40001  addiu       $s4, $s6, 0x1
    ctx->pc = 0x322d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322d70:
    // 0x322d70: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x322d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_322d74:
    // 0x322d74: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x322d74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_322d78:
    // 0x322d78: 0xc0e53c8  jal         func_394F20
label_322d7c:
    if (ctx->pc == 0x322D7Cu) {
        ctx->pc = 0x322D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D78u;
        // 0x322d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D80u;
        goto label_322d80;
    }
    ctx->pc = 0x322D78u;
    SET_GPR_U32(ctx, 31, 0x322D80u);
    ctx->pc = 0x322D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322D78u;
    // 0x322d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F20u, 0x322D78u, 0x322D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D80u;
label_322d80:
    // 0x322d80: 0x105100a3  beq         $v0, $s1, . + 4 + (0xA3 << 2)
label_322d84:
    if (ctx->pc == 0x322D84u) {
        ctx->pc = 0x322D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D80u;
        // 0x322d84: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D88u;
        goto label_322d88;
    }
    ctx->pc = 0x322D80u;
    {
        const bool branch_taken_0x322d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x322D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D80u;
        // 0x322d84: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d80) {
            ctx->pc = 0x323010u;
            goto label_323010;
        }
    }
    ctx->pc = 0x322D88u;
label_322d88:
    // 0x322d88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x322d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_322d8c:
    // 0x322d8c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x322d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_322d90:
    // 0x322d90: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x322d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_322d94:
    // 0x322d94: 0x40f809  jalr        $v0
label_322d98:
    if (ctx->pc == 0x322D98u) {
        ctx->pc = 0x322D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D94u;
        // 0x322d98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D9Cu;
        goto label_322d9c;
    }
    ctx->pc = 0x322D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322D9Cu);
        ctx->pc = 0x322D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D94u;
        // 0x322d98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D94u, 0x322D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322D9Cu;
label_322d9c:
    // 0x322d9c: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x322d9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_322da0:
    // 0x322da0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x322da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_322da4:
    // 0x322da4: 0x1051009a  beq         $v0, $s1, . + 4 + (0x9A << 2)
label_322da8:
    if (ctx->pc == 0x322DA8u) {
        ctx->pc = 0x322DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DA4u;
        // 0x322da8: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DACu;
        goto label_322dac;
    }
    ctx->pc = 0x322DA4u;
    {
        const bool branch_taken_0x322da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x322DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DA4u;
        // 0x322da8: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322da4) {
            ctx->pc = 0x323010u;
            goto label_323010;
        }
    }
    ctx->pc = 0x322DACu;
label_322dac:
    // 0x322dac: 0x8e4300ec  lw          $v1, 0xEC($s2)
    ctx->pc = 0x322dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_322db0:
    // 0x322db0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x322db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_322db4:
    // 0x322db4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_322db8:
    if (ctx->pc == 0x322DB8u) {
        ctx->pc = 0x322DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DB4u;
        // 0x322db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DBCu;
        goto label_322dbc;
    }
    ctx->pc = 0x322DB4u;
    {
        const bool branch_taken_0x322db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x322DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DB4u;
        // 0x322db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322db4) {
            ctx->pc = 0x322DDCu;
            goto label_322ddc;
        }
    }
    ctx->pc = 0x322DBCu;
label_322dbc:
    // 0x322dbc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x322dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_322dc0:
    // 0x322dc0: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x322dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_322dc4:
    // 0x322dc4: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x322dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_322dc8:
    // 0x322dc8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x322dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_322dcc:
    // 0x322dcc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x322dccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_322dd0:
    // 0x322dd0: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
label_322dd4:
    if (ctx->pc == 0x322DD4u) {
        ctx->pc = 0x322DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DD0u;
        // 0x322dd4: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DD8u;
        goto label_322dd8;
    }
    ctx->pc = 0x322DD0u;
    {
        const bool branch_taken_0x322dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DD0u;
        // 0x322dd4: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dd0) {
            ctx->pc = 0x323010u;
            goto label_323010;
        }
    }
    ctx->pc = 0x322DD8u;
label_322dd8:
    // 0x322dd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x322dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_322ddc:
    // 0x322ddc: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x322ddcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_322de0:
    // 0x322de0: 0xc0e44cc  jal         func_391330
label_322de4:
    if (ctx->pc == 0x322DE4u) {
        ctx->pc = 0x322DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DE0u;
        // 0x322de4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DE8u;
        goto label_322de8;
    }
    ctx->pc = 0x322DE0u;
    SET_GPR_U32(ctx, 31, 0x322DE8u);
    ctx->pc = 0x322DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322DE0u;
    // 0x322de4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x322DE0u, 0x322DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322DE8u;
label_322de8:
    // 0x322de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322dec:
    // 0x322dec: 0x92e20016  lbu         $v0, 0x16($s7)
    ctx->pc = 0x322decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 22)));
label_322df0:
    // 0x322df0: 0x5451000a  bnel        $v0, $s1, . + 4 + (0xA << 2)
label_322df4:
    if (ctx->pc == 0x322DF4u) {
        ctx->pc = 0x322DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DF0u;
        // 0x322df4: 0x82020087  lb          $v0, 0x87($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DF8u;
        goto label_322df8;
    }
    ctx->pc = 0x322DF0u;
    {
        const bool branch_taken_0x322df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x322df0) {
            ctx->pc = 0x322DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322DF0u;
            // 0x322df4: 0x82020087  lb          $v0, 0x87($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 135)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322E1Cu;
            goto label_322e1c;
        }
    }
    ctx->pc = 0x322DF8u;
label_322df8:
    // 0x322df8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x322df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_322dfc:
    // 0x322dfc: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x322dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
label_322e00:
    // 0x322e00: 0x246547a0  addiu       $a1, $v1, 0x47A0
    ctx->pc = 0x322e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 18336));
label_322e04:
    // 0x322e04: 0xc10c313  jal         func_430C4C
label_322e08:
    if (ctx->pc == 0x322E08u) {
        ctx->pc = 0x322E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E04u;
        // 0x322e08: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E0Cu;
        goto label_322e0c;
    }
    ctx->pc = 0x322E04u;
    SET_GPR_U32(ctx, 31, 0x322E0Cu);
    ctx->pc = 0x322E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E04u;
    // 0x322e08: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x322E04u, 0x322E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E0Cu;
label_322e0c:
    // 0x322e0c: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_322e10:
    if (ctx->pc == 0x322E10u) {
        ctx->pc = 0x322E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E0Cu;
        // 0x322e10: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E14u;
        goto label_322e14;
    }
    ctx->pc = 0x322E0Cu;
    {
        const bool branch_taken_0x322e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E0Cu;
        // 0x322e10: 0x8fa30c60  lw          $v1, 0xC60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e0c) {
            ctx->pc = 0x323010u;
            goto label_323010;
        }
    }
    ctx->pc = 0x322E14u;
label_322e14:
    // 0x322e14: 0x10000006  b           . + 4 + (0x6 << 2)
label_322e18:
    if (ctx->pc == 0x322E18u) {
        ctx->pc = 0x322E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E14u;
        // 0x322e18: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E1Cu;
        goto label_322e1c;
    }
    ctx->pc = 0x322E14u;
    {
        const bool branch_taken_0x322e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E14u;
        // 0x322e18: 0x7a420010  lq          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e14) {
            ctx->pc = 0x322E30u;
            goto label_322e30;
        }
    }
    ctx->pc = 0x322E1Cu;
label_322e1c:
    // 0x322e1c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x322e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_322e20:
    // 0x322e20: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x322e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_322e24:
    // 0x322e24: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_322e28:
    if (ctx->pc == 0x322E28u) {
        ctx->pc = 0x322E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E24u;
        // 0x322e28: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E2Cu;
        goto label_322e2c;
    }
    ctx->pc = 0x322E24u;
    {
        const bool branch_taken_0x322e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E24u;
        // 0x322e28: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e24) {
            ctx->pc = 0x32300Cu;
            goto label_32300c;
        }
    }
    ctx->pc = 0x322E2Cu;
label_322e2c:
    // 0x322e2c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x322e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_322e30:
    // 0x322e30: 0x26b30090  addiu       $s3, $s5, 0x90
    ctx->pc = 0x322e30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_322e34:
    // 0x322e34: 0x27a40c40  addiu       $a0, $sp, 0xC40
    ctx->pc = 0x322e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3136));
label_322e38:
    // 0x322e38: 0x27a60c10  addiu       $a2, $sp, 0xC10
    ctx->pc = 0x322e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
label_322e3c:
    // 0x322e3c: 0x7fa20c10  sq          $v0, 0xC10($sp)
    ctx->pc = 0x322e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3088), GPR_VEC(ctx, 2));
label_322e40:
    // 0x322e40: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x322e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_322e44:
    // 0x322e44: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x322e44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_322e48:
    // 0x322e48: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x322e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_322e4c:
    // 0x322e4c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x322e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_322e50:
    // 0x322e50: 0xc136afa  jal         func_4DABE8
label_322e54:
    if (ctx->pc == 0x322E54u) {
        ctx->pc = 0x322E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E50u;
        // 0x322e54: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E58u;
        goto label_322e58;
    }
    ctx->pc = 0x322E50u;
    SET_GPR_U32(ctx, 31, 0x322E58u);
    ctx->pc = 0x322E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322E50u;
    // 0x322e54: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x322E50u, 0x322E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E58u;
label_322e58:
    // 0x322e58: 0x7ba20c40  lq          $v0, 0xC40($sp)
    ctx->pc = 0x322e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 3136)));
label_322e5c:
    // 0x322e5c: 0x27a40c10  addiu       $a0, $sp, 0xC10
    ctx->pc = 0x322e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
label_322e60:
    // 0x322e60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x322e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_322e64:
    // 0x322e64: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x322e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_322e68:
    // 0x322e68: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x322e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_322e6c:
    // 0x322e6c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x322e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_322e70:
    // 0x322e70: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x322e70u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_322e74:
    // 0x322e74: 0x4a0003bf  vwaitq
    ctx->pc = 0x322e74u;
    // VWAITQ (Q already resolved in this runtime)
label_322e78:
    // 0x322e78: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x322e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_322e7c:
    // 0x322e7c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x322e7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_322e80:
    // 0x322e80: 0x27a50c30  addiu       $a1, $sp, 0xC30
    ctx->pc = 0x322e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 3120));
label_322e84:
    // 0x322e84: 0x7fa20c30  sq          $v0, 0xC30($sp)
    ctx->pc = 0x322e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3120), GPR_VEC(ctx, 2));
label_322e88:
    // 0x322e88: 0x7fa30c30  sq          $v1, 0xC30($sp)
    ctx->pc = 0x322e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3120), GPR_VEC(ctx, 3));
label_322e8c:
    // 0x322e8c: 0x7fa30c40  sq          $v1, 0xC40($sp)
    ctx->pc = 0x322e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3136), GPR_VEC(ctx, 3));
label_322e90:
    // 0x322e90: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x322e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_322e94:
    // 0x322e94: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x322e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_322e98:
    // 0x322e98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x322e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_322e9c:
    // 0x322e9c: 0x0  nop
    ctx->pc = 0x322e9cu;
    // NOP
label_322ea0:
    // 0x322ea0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_322ea4:
    if (ctx->pc == 0x322EA4u) {
        ctx->pc = 0x322EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EA0u;
        // 0x322ea4: 0x27b10c20  addiu       $s1, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EA8u;
        goto label_322ea8;
    }
    ctx->pc = 0x322EA0u;
    {
        const bool branch_taken_0x322ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x322EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EA0u;
        // 0x322ea4: 0x27b10c20  addiu       $s1, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ea0) {
            ctx->pc = 0x322EACu;
            goto label_322eac;
        }
    }
    ctx->pc = 0x322EA8u;
label_322ea8:
    // 0x322ea8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x322ea8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_322eac:
    // 0x322eac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x322eacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_322eb0:
    // 0x322eb0: 0xc094904  jal         func_252410
label_322eb4:
    if (ctx->pc == 0x322EB4u) {
        ctx->pc = 0x322EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EB0u;
        // 0x322eb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EB8u;
        goto label_322eb8;
    }
    ctx->pc = 0x322EB0u;
    SET_GPR_U32(ctx, 31, 0x322EB8u);
    ctx->pc = 0x322EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322EB0u;
    // 0x322eb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x322EB0u, 0x322EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322EB8u;
label_322eb8:
    // 0x322eb8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_322ebc:
    if (ctx->pc == 0x322EBCu) {
        ctx->pc = 0x322EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EB8u;
        // 0x322ebc: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EC0u;
        goto label_322ec0;
    }
    ctx->pc = 0x322EB8u;
    {
        const bool branch_taken_0x322eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EB8u;
        // 0x322ebc: 0x26d40001  addiu       $s4, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322eb8) {
            ctx->pc = 0x32300Cu;
            goto label_32300c;
        }
    }
    ctx->pc = 0x322EC0u;
label_322ec0:
    // 0x322ec0: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x322ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_322ec4:
    // 0x322ec4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x322ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_322ec8:
    // 0x322ec8: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x322ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_322ecc:
    // 0x322ecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322ed0:
    // 0x322ed0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x322ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_322ed4:
    // 0x322ed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x322ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322ed8:
    // 0x322ed8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x322ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322edc:
    // 0x322edc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x322edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322ee0:
    // 0x322ee0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x322ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_322ee4:
    // 0x322ee4: 0xc09381e  jal         func_24E078
label_322ee8:
    if (ctx->pc == 0x322EE8u) {
        ctx->pc = 0x322EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EE4u;
        // 0x322ee8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EECu;
        goto label_322eec;
    }
    ctx->pc = 0x322EE4u;
    SET_GPR_U32(ctx, 31, 0x322EECu);
    ctx->pc = 0x322EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322EE4u;
    // 0x322ee8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x322EE4u, 0x322EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322EECu;
label_322eec:
    // 0x322eec: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_322ef0:
    if (ctx->pc == 0x322EF0u) {
        ctx->pc = 0x322EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EECu;
        // 0x322ef0: 0x8fa20c5c  lw          $v0, 0xC5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EF4u;
        goto label_322ef4;
    }
    ctx->pc = 0x322EECu;
    {
        const bool branch_taken_0x322eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EECu;
        // 0x322ef0: 0x8fa20c5c  lw          $v0, 0xC5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322eec) {
            ctx->pc = 0x32300Cu;
            goto label_32300c;
        }
    }
    ctx->pc = 0x322EF4u;
label_322ef4:
    // 0x322ef4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x322ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_322ef8:
    // 0x322ef8: 0xc087502  jal         func_21D408
label_322efc:
    if (ctx->pc == 0x322EFCu) {
        ctx->pc = 0x322EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EF8u;
        // 0x322efc: 0x24560001  addiu       $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F00u;
        goto label_322f00;
    }
    ctx->pc = 0x322EF8u;
    SET_GPR_U32(ctx, 31, 0x322F00u);
    ctx->pc = 0x322EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322EF8u;
    // 0x322efc: 0x24560001  addiu       $s6, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x322EF8u, 0x322F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F00u;
label_322f00:
    // 0x322f00: 0x8fa30c58  lw          $v1, 0xC58($sp)
    ctx->pc = 0x322f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3160)));
label_322f04:
    // 0x322f04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x322f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322f08:
    // 0x322f08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x322f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_322f0c:
    // 0x322f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322f10:
    // 0x322f10: 0xc0a3658  jal         func_28D960
label_322f14:
    if (ctx->pc == 0x322F14u) {
        ctx->pc = 0x322F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F10u;
        // 0x322f14: 0x24731388  addiu       $s3, $v1, 0x1388 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F18u;
        goto label_322f18;
    }
    ctx->pc = 0x322F10u;
    SET_GPR_U32(ctx, 31, 0x322F18u);
    ctx->pc = 0x322F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F10u;
    // 0x322f14: 0x24731388  addiu       $s3, $v1, 0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x322F10u, 0x322F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F18u;
label_322f18:
    // 0x322f18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322f1c:
    // 0x322f1c: 0x602000d  bltzl       $s0, . + 4 + (0xD << 2)
label_322f20:
    if (ctx->pc == 0x322F20u) {
        ctx->pc = 0x322F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F1Cu;
        // 0x322f20: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F24u;
        goto label_322f24;
    }
    ctx->pc = 0x322F1Cu;
    {
        const bool branch_taken_0x322f1c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x322f1c) {
            ctx->pc = 0x322F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322F1Cu;
            // 0x322f20: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322F54u;
            goto label_322f54;
        }
    }
    ctx->pc = 0x322F24u;
label_322f24:
    // 0x322f24: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x322f24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_322f28:
    // 0x322f28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x322f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_322f2c:
    // 0x322f2c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_322f30:
    if (ctx->pc == 0x322F30u) {
        ctx->pc = 0x322F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F2Cu;
        // 0x322f30: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F34u;
        goto label_322f34;
    }
    ctx->pc = 0x322F2Cu;
    {
        const bool branch_taken_0x322f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f2c) {
            ctx->pc = 0x322F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322F2Cu;
            // 0x322f30: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322F54u;
            goto label_322f54;
        }
    }
    ctx->pc = 0x322F34u;
label_322f34:
    // 0x322f34: 0x0  nop
    ctx->pc = 0x322f34u;
    // NOP
label_322f38:
    // 0x322f38: 0xc0a35f6  jal         func_28D7D8
label_322f3c:
    if (ctx->pc == 0x322F3Cu) {
        ctx->pc = 0x322F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F38u;
        // 0x322f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F40u;
        goto label_322f40;
    }
    ctx->pc = 0x322F38u;
    SET_GPR_U32(ctx, 31, 0x322F40u);
    ctx->pc = 0x322F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F38u;
    // 0x322f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x322F38u, 0x322F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F40u;
label_322f40:
    // 0x322f40: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x322f40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_322f44:
    // 0x322f44: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x322f44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_322f48:
    // 0x322f48: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_322f4c:
    if (ctx->pc == 0x322F4Cu) {
        ctx->pc = 0x322F50u;
        goto label_322f50;
    }
    ctx->pc = 0x322F48u;
    {
        const bool branch_taken_0x322f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322f48) {
            ctx->pc = 0x322F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322f38;
        }
    }
    ctx->pc = 0x322F50u;
label_322f50:
    // 0x322f50: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x322f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_322f54:
    // 0x322f54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x322f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_322f58:
    // 0x322f58: 0xae5300f0  sw          $s3, 0xF0($s2)
    ctx->pc = 0x322f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 19));
label_322f5c:
    // 0x322f5c: 0xae4200ec  sw          $v0, 0xEC($s2)
    ctx->pc = 0x322f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 2));
label_322f60:
    // 0x322f60: 0x92e30016  lbu         $v1, 0x16($s7)
    ctx->pc = 0x322f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 22)));
label_322f64:
    // 0x322f64: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
label_322f68:
    if (ctx->pc == 0x322F68u) {
        ctx->pc = 0x322F6Cu;
        goto label_322f6c;
    }
    ctx->pc = 0x322F64u;
    {
        const bool branch_taken_0x322f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x322f64) {
            ctx->pc = 0x322FB4u;
            goto label_322fb4;
        }
    }
    ctx->pc = 0x322F6Cu;
label_322f6c:
    // 0x322f6c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x322f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_322f70:
    // 0x322f70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x322f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_322f74:
    // 0x322f74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x322f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_322f78:
    // 0x322f78: 0x40f809  jalr        $v0
label_322f7c:
    if (ctx->pc == 0x322F7Cu) {
        ctx->pc = 0x322F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F78u;
        // 0x322f7c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F80u;
        goto label_322f80;
    }
    ctx->pc = 0x322F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322F80u);
        ctx->pc = 0x322F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F78u;
        // 0x322f7c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F78u, 0x322F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322F80u;
label_322f80:
    // 0x322f80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x322f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_322f84:
    // 0x322f84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322f88:
    // 0x322f88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x322f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_322f8c:
    // 0x322f8c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x322f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_322f90:
    // 0x322f90: 0x40f809  jalr        $v0
label_322f94:
    if (ctx->pc == 0x322F94u) {
        ctx->pc = 0x322F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F90u;
        // 0x322f94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F98u;
        goto label_322f98;
    }
    ctx->pc = 0x322F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322F98u);
        ctx->pc = 0x322F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F90u;
        // 0x322f94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F90u, 0x322F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322F98u;
label_322f98:
    // 0x322f98: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x322f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_322f9c:
    // 0x322f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322fa0:
    // 0x322fa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x322fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322fa4:
    // 0x322fa4: 0xc0aeb6a  jal         func_2BADA8
label_322fa8:
    if (ctx->pc == 0x322FA8u) {
        ctx->pc = 0x322FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FA4u;
        // 0x322fa8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FACu;
        goto label_322fac;
    }
    ctx->pc = 0x322FA4u;
    SET_GPR_U32(ctx, 31, 0x322FACu);
    ctx->pc = 0x322FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FA4u;
    // 0x322fa8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BADA8u, 0x322FA4u, 0x322FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FACu;
label_322fac:
    // 0x322fac: 0x10000016  b           . + 4 + (0x16 << 2)
label_322fb0:
    if (ctx->pc == 0x322FB0u) {
        ctx->pc = 0x322FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FACu;
        // 0x322fb0: 0xafb60c5c  sw          $s6, 0xC5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3164), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FB4u;
        goto label_322fb4;
    }
    ctx->pc = 0x322FACu;
    {
        const bool branch_taken_0x322fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FACu;
        // 0x322fb0: 0xafb60c5c  sw          $s6, 0xC5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3164), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fac) {
            ctx->pc = 0x323008u;
            goto label_323008;
        }
    }
    ctx->pc = 0x322FB4u;
label_322fb4:
    // 0x322fb4: 0xc0a4e54  jal         func_293950
label_322fb8:
    if (ctx->pc == 0x322FB8u) {
        ctx->pc = 0x322FBCu;
        goto label_322fbc;
    }
    ctx->pc = 0x322FB4u;
    SET_GPR_U32(ctx, 31, 0x322FBCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x322FB4u, 0x322FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FBCu;
label_322fbc:
    // 0x322fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322fc0:
    // 0x322fc0: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_322fc4:
    if (ctx->pc == 0x322FC4u) {
        ctx->pc = 0x322FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FC0u;
        // 0x322fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FC8u;
        goto label_322fc8;
    }
    ctx->pc = 0x322FC0u;
    {
        const bool branch_taken_0x322fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x322fc0) {
            ctx->pc = 0x322FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322FC0u;
            // 0x322fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322FFCu;
            goto label_322ffc;
        }
    }
    ctx->pc = 0x322FC8u;
label_322fc8:
    // 0x322fc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x322fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_322fcc:
    // 0x322fcc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x322fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_322fd0:
    // 0x322fd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x322fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_322fd4:
    // 0x322fd4: 0x40f809  jalr        $v0
label_322fd8:
    if (ctx->pc == 0x322FD8u) {
        ctx->pc = 0x322FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FD4u;
        // 0x322fd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FDCu;
        goto label_322fdc;
    }
    ctx->pc = 0x322FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322FDCu);
        ctx->pc = 0x322FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FD4u;
        // 0x322fd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322FD4u, 0x322FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322FDCu;
label_322fdc:
    // 0x322fdc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x322fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_322fe0:
    // 0x322fe0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x322fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322fe4:
    // 0x322fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322fe8:
    // 0x322fe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x322fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322fec:
    // 0x322fec: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x322fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_322ff0:
    // 0x322ff0: 0xc0b71e8  jal         func_2DC7A0
label_322ff4:
    if (ctx->pc == 0x322FF4u) {
        ctx->pc = 0x322FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FF0u;
        // 0x322ff4: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FF8u;
        goto label_322ff8;
    }
    ctx->pc = 0x322FF0u;
    SET_GPR_U32(ctx, 31, 0x322FF8u);
    ctx->pc = 0x322FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FF0u;
    // 0x322ff4: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC7A0u, 0x322FF0u, 0x322FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FF8u;
label_322ff8:
    // 0x322ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322ffc:
    // 0x322ffc: 0xc0a35d6  jal         func_28D758
label_323000:
    if (ctx->pc == 0x323000u) {
        ctx->pc = 0x323000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FFCu;
        // 0x323000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323004u;
        goto label_323004;
    }
    ctx->pc = 0x322FFCu;
    SET_GPR_U32(ctx, 31, 0x323004u);
    ctx->pc = 0x323000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322FFCu;
    // 0x323000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x322FFCu, 0x323004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323004u;
label_323004:
    // 0x323004: 0xafb60c5c  sw          $s6, 0xC5C($sp)
    ctx->pc = 0x323004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3164), GPR_U32(ctx, 22));
label_323008:
    // 0x323008: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x323008u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32300c:
    // 0x32300c: 0x8fa30c60  lw          $v1, 0xC60($sp)
    ctx->pc = 0x32300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3168)));
label_323010:
    // 0x323010: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x323010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_323014:
    // 0x323014: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x323014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_323018:
    // 0x323018: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32301c:
    if (ctx->pc == 0x32301Cu) {
        ctx->pc = 0x32301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323018u;
        // 0x32301c: 0x8fa30c5c  lw          $v1, 0xC5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323020u;
        goto label_323020;
    }
    ctx->pc = 0x323018u;
    {
        const bool branch_taken_0x323018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323018u;
        // 0x32301c: 0x8fa30c5c  lw          $v1, 0xC5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323018) {
            ctx->pc = 0x323030u;
            goto label_323030;
        }
    }
    ctx->pc = 0x323020u;
label_323020:
    // 0x323020: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x323020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_323024:
    // 0x323024: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x323024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_323028:
    // 0x323028: 0x1440ff11  bnez        $v0, . + 4 + (-0xEF << 2)
label_32302c:
    if (ctx->pc == 0x32302Cu) {
        ctx->pc = 0x323030u;
        goto label_323030;
    }
    ctx->pc = 0x323028u;
    {
        const bool branch_taken_0x323028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323028) {
            ctx->pc = 0x322C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322c70;
        }
    }
    ctx->pc = 0x323030u;
label_323030:
    // 0x323030: 0x7bb00d00  lq          $s0, 0xD00($sp)
    ctx->pc = 0x323030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3328)));
label_323034:
    // 0x323034: 0x7bb10cf0  lq          $s1, 0xCF0($sp)
    ctx->pc = 0x323034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3312)));
label_323038:
    // 0x323038: 0x7bb20ce0  lq          $s2, 0xCE0($sp)
    ctx->pc = 0x323038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3296)));
label_32303c:
    // 0x32303c: 0x7bb30cd0  lq          $s3, 0xCD0($sp)
    ctx->pc = 0x32303cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3280)));
label_323040:
    // 0x323040: 0x7bb40cc0  lq          $s4, 0xCC0($sp)
    ctx->pc = 0x323040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3264)));
label_323044:
    // 0x323044: 0x7bb50cb0  lq          $s5, 0xCB0($sp)
    ctx->pc = 0x323044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3248)));
label_323048:
    // 0x323048: 0x7bb60ca0  lq          $s6, 0xCA0($sp)
    ctx->pc = 0x323048u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3232)));
label_32304c:
    // 0x32304c: 0x7bb70c90  lq          $s7, 0xC90($sp)
    ctx->pc = 0x32304cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 3216)));
label_323050:
    // 0x323050: 0x7bbe0c80  lq          $fp, 0xC80($sp)
    ctx->pc = 0x323050u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 3200)));
label_323054:
    // 0x323054: 0xdfbf0c70  ld          $ra, 0xC70($sp)
    ctx->pc = 0x323054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3184)));
label_323058:
    // 0x323058: 0x3e00008  jr          $ra
label_32305c:
    if (ctx->pc == 0x32305Cu) {
        ctx->pc = 0x32305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323058u;
        // 0x32305c: 0x27bd0d10  addiu       $sp, $sp, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323060u;
        goto label_fallthrough_0x323058;
    }
    ctx->pc = 0x323058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323058u;
        // 0x32305c: 0x27bd0d10  addiu       $sp, $sp, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323058:
    ctx->pc = 0x323060u;
}
