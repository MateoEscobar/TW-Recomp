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

// Function: sub_00120C50
// Address: 0x120c50 - 0x1210f8
void sub_00120C50_0x120c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120C50_0x120c50");
#endif

    switch (ctx->pc) {
        case 0x120c50u: goto label_120c50;
        case 0x120c54u: goto label_120c54;
        case 0x120c58u: goto label_120c58;
        case 0x120c5cu: goto label_120c5c;
        case 0x120c60u: goto label_120c60;
        case 0x120c64u: goto label_120c64;
        case 0x120c68u: goto label_120c68;
        case 0x120c6cu: goto label_120c6c;
        case 0x120c70u: goto label_120c70;
        case 0x120c74u: goto label_120c74;
        case 0x120c78u: goto label_120c78;
        case 0x120c7cu: goto label_120c7c;
        case 0x120c80u: goto label_120c80;
        case 0x120c84u: goto label_120c84;
        case 0x120c88u: goto label_120c88;
        case 0x120c8cu: goto label_120c8c;
        case 0x120c90u: goto label_120c90;
        case 0x120c94u: goto label_120c94;
        case 0x120c98u: goto label_120c98;
        case 0x120c9cu: goto label_120c9c;
        case 0x120ca0u: goto label_120ca0;
        case 0x120ca4u: goto label_120ca4;
        case 0x120ca8u: goto label_120ca8;
        case 0x120cacu: goto label_120cac;
        case 0x120cb0u: goto label_120cb0;
        case 0x120cb4u: goto label_120cb4;
        case 0x120cb8u: goto label_120cb8;
        case 0x120cbcu: goto label_120cbc;
        case 0x120cc0u: goto label_120cc0;
        case 0x120cc4u: goto label_120cc4;
        case 0x120cc8u: goto label_120cc8;
        case 0x120cccu: goto label_120ccc;
        case 0x120cd0u: goto label_120cd0;
        case 0x120cd4u: goto label_120cd4;
        case 0x120cd8u: goto label_120cd8;
        case 0x120cdcu: goto label_120cdc;
        case 0x120ce0u: goto label_120ce0;
        case 0x120ce4u: goto label_120ce4;
        case 0x120ce8u: goto label_120ce8;
        case 0x120cecu: goto label_120cec;
        case 0x120cf0u: goto label_120cf0;
        case 0x120cf4u: goto label_120cf4;
        case 0x120cf8u: goto label_120cf8;
        case 0x120cfcu: goto label_120cfc;
        case 0x120d00u: goto label_120d00;
        case 0x120d04u: goto label_120d04;
        case 0x120d08u: goto label_120d08;
        case 0x120d0cu: goto label_120d0c;
        case 0x120d10u: goto label_120d10;
        case 0x120d14u: goto label_120d14;
        case 0x120d18u: goto label_120d18;
        case 0x120d1cu: goto label_120d1c;
        case 0x120d20u: goto label_120d20;
        case 0x120d24u: goto label_120d24;
        case 0x120d28u: goto label_120d28;
        case 0x120d2cu: goto label_120d2c;
        case 0x120d30u: goto label_120d30;
        case 0x120d34u: goto label_120d34;
        case 0x120d38u: goto label_120d38;
        case 0x120d3cu: goto label_120d3c;
        case 0x120d40u: goto label_120d40;
        case 0x120d44u: goto label_120d44;
        case 0x120d48u: goto label_120d48;
        case 0x120d4cu: goto label_120d4c;
        case 0x120d50u: goto label_120d50;
        case 0x120d54u: goto label_120d54;
        case 0x120d58u: goto label_120d58;
        case 0x120d5cu: goto label_120d5c;
        case 0x120d60u: goto label_120d60;
        case 0x120d64u: goto label_120d64;
        case 0x120d68u: goto label_120d68;
        case 0x120d6cu: goto label_120d6c;
        case 0x120d70u: goto label_120d70;
        case 0x120d74u: goto label_120d74;
        case 0x120d78u: goto label_120d78;
        case 0x120d7cu: goto label_120d7c;
        case 0x120d80u: goto label_120d80;
        case 0x120d84u: goto label_120d84;
        case 0x120d88u: goto label_120d88;
        case 0x120d8cu: goto label_120d8c;
        case 0x120d90u: goto label_120d90;
        case 0x120d94u: goto label_120d94;
        case 0x120d98u: goto label_120d98;
        case 0x120d9cu: goto label_120d9c;
        case 0x120da0u: goto label_120da0;
        case 0x120da4u: goto label_120da4;
        case 0x120da8u: goto label_120da8;
        case 0x120dacu: goto label_120dac;
        case 0x120db0u: goto label_120db0;
        case 0x120db4u: goto label_120db4;
        case 0x120db8u: goto label_120db8;
        case 0x120dbcu: goto label_120dbc;
        case 0x120dc0u: goto label_120dc0;
        case 0x120dc4u: goto label_120dc4;
        case 0x120dc8u: goto label_120dc8;
        case 0x120dccu: goto label_120dcc;
        case 0x120dd0u: goto label_120dd0;
        case 0x120dd4u: goto label_120dd4;
        case 0x120dd8u: goto label_120dd8;
        case 0x120ddcu: goto label_120ddc;
        case 0x120de0u: goto label_120de0;
        case 0x120de4u: goto label_120de4;
        case 0x120de8u: goto label_120de8;
        case 0x120decu: goto label_120dec;
        case 0x120df0u: goto label_120df0;
        case 0x120df4u: goto label_120df4;
        case 0x120df8u: goto label_120df8;
        case 0x120dfcu: goto label_120dfc;
        case 0x120e00u: goto label_120e00;
        case 0x120e04u: goto label_120e04;
        case 0x120e08u: goto label_120e08;
        case 0x120e0cu: goto label_120e0c;
        case 0x120e10u: goto label_120e10;
        case 0x120e14u: goto label_120e14;
        case 0x120e18u: goto label_120e18;
        case 0x120e1cu: goto label_120e1c;
        case 0x120e20u: goto label_120e20;
        case 0x120e24u: goto label_120e24;
        case 0x120e28u: goto label_120e28;
        case 0x120e2cu: goto label_120e2c;
        case 0x120e30u: goto label_120e30;
        case 0x120e34u: goto label_120e34;
        case 0x120e38u: goto label_120e38;
        case 0x120e3cu: goto label_120e3c;
        case 0x120e40u: goto label_120e40;
        case 0x120e44u: goto label_120e44;
        case 0x120e48u: goto label_120e48;
        case 0x120e4cu: goto label_120e4c;
        case 0x120e50u: goto label_120e50;
        case 0x120e54u: goto label_120e54;
        case 0x120e58u: goto label_120e58;
        case 0x120e5cu: goto label_120e5c;
        case 0x120e60u: goto label_120e60;
        case 0x120e64u: goto label_120e64;
        case 0x120e68u: goto label_120e68;
        case 0x120e6cu: goto label_120e6c;
        case 0x120e70u: goto label_120e70;
        case 0x120e74u: goto label_120e74;
        case 0x120e78u: goto label_120e78;
        case 0x120e7cu: goto label_120e7c;
        case 0x120e80u: goto label_120e80;
        case 0x120e84u: goto label_120e84;
        case 0x120e88u: goto label_120e88;
        case 0x120e8cu: goto label_120e8c;
        case 0x120e90u: goto label_120e90;
        case 0x120e94u: goto label_120e94;
        case 0x120e98u: goto label_120e98;
        case 0x120e9cu: goto label_120e9c;
        case 0x120ea0u: goto label_120ea0;
        case 0x120ea4u: goto label_120ea4;
        case 0x120ea8u: goto label_120ea8;
        case 0x120eacu: goto label_120eac;
        case 0x120eb0u: goto label_120eb0;
        case 0x120eb4u: goto label_120eb4;
        case 0x120eb8u: goto label_120eb8;
        case 0x120ebcu: goto label_120ebc;
        case 0x120ec0u: goto label_120ec0;
        case 0x120ec4u: goto label_120ec4;
        case 0x120ec8u: goto label_120ec8;
        case 0x120eccu: goto label_120ecc;
        case 0x120ed0u: goto label_120ed0;
        case 0x120ed4u: goto label_120ed4;
        case 0x120ed8u: goto label_120ed8;
        case 0x120edcu: goto label_120edc;
        case 0x120ee0u: goto label_120ee0;
        case 0x120ee4u: goto label_120ee4;
        case 0x120ee8u: goto label_120ee8;
        case 0x120eecu: goto label_120eec;
        case 0x120ef0u: goto label_120ef0;
        case 0x120ef4u: goto label_120ef4;
        case 0x120ef8u: goto label_120ef8;
        case 0x120efcu: goto label_120efc;
        case 0x120f00u: goto label_120f00;
        case 0x120f04u: goto label_120f04;
        case 0x120f08u: goto label_120f08;
        case 0x120f0cu: goto label_120f0c;
        case 0x120f10u: goto label_120f10;
        case 0x120f14u: goto label_120f14;
        case 0x120f18u: goto label_120f18;
        case 0x120f1cu: goto label_120f1c;
        case 0x120f20u: goto label_120f20;
        case 0x120f24u: goto label_120f24;
        case 0x120f28u: goto label_120f28;
        case 0x120f2cu: goto label_120f2c;
        case 0x120f30u: goto label_120f30;
        case 0x120f34u: goto label_120f34;
        case 0x120f38u: goto label_120f38;
        case 0x120f3cu: goto label_120f3c;
        case 0x120f40u: goto label_120f40;
        case 0x120f44u: goto label_120f44;
        case 0x120f48u: goto label_120f48;
        case 0x120f4cu: goto label_120f4c;
        case 0x120f50u: goto label_120f50;
        case 0x120f54u: goto label_120f54;
        case 0x120f58u: goto label_120f58;
        case 0x120f5cu: goto label_120f5c;
        case 0x120f60u: goto label_120f60;
        case 0x120f64u: goto label_120f64;
        case 0x120f68u: goto label_120f68;
        case 0x120f6cu: goto label_120f6c;
        case 0x120f70u: goto label_120f70;
        case 0x120f74u: goto label_120f74;
        case 0x120f78u: goto label_120f78;
        case 0x120f7cu: goto label_120f7c;
        case 0x120f80u: goto label_120f80;
        case 0x120f84u: goto label_120f84;
        case 0x120f88u: goto label_120f88;
        case 0x120f8cu: goto label_120f8c;
        case 0x120f90u: goto label_120f90;
        case 0x120f94u: goto label_120f94;
        case 0x120f98u: goto label_120f98;
        case 0x120f9cu: goto label_120f9c;
        case 0x120fa0u: goto label_120fa0;
        case 0x120fa4u: goto label_120fa4;
        case 0x120fa8u: goto label_120fa8;
        case 0x120facu: goto label_120fac;
        case 0x120fb0u: goto label_120fb0;
        case 0x120fb4u: goto label_120fb4;
        case 0x120fb8u: goto label_120fb8;
        case 0x120fbcu: goto label_120fbc;
        case 0x120fc0u: goto label_120fc0;
        case 0x120fc4u: goto label_120fc4;
        case 0x120fc8u: goto label_120fc8;
        case 0x120fccu: goto label_120fcc;
        case 0x120fd0u: goto label_120fd0;
        case 0x120fd4u: goto label_120fd4;
        case 0x120fd8u: goto label_120fd8;
        case 0x120fdcu: goto label_120fdc;
        case 0x120fe0u: goto label_120fe0;
        case 0x120fe4u: goto label_120fe4;
        case 0x120fe8u: goto label_120fe8;
        case 0x120fecu: goto label_120fec;
        case 0x120ff0u: goto label_120ff0;
        case 0x120ff4u: goto label_120ff4;
        case 0x120ff8u: goto label_120ff8;
        case 0x120ffcu: goto label_120ffc;
        case 0x121000u: goto label_121000;
        case 0x121004u: goto label_121004;
        case 0x121008u: goto label_121008;
        case 0x12100cu: goto label_12100c;
        case 0x121010u: goto label_121010;
        case 0x121014u: goto label_121014;
        case 0x121018u: goto label_121018;
        case 0x12101cu: goto label_12101c;
        case 0x121020u: goto label_121020;
        case 0x121024u: goto label_121024;
        case 0x121028u: goto label_121028;
        case 0x12102cu: goto label_12102c;
        case 0x121030u: goto label_121030;
        case 0x121034u: goto label_121034;
        case 0x121038u: goto label_121038;
        case 0x12103cu: goto label_12103c;
        case 0x121040u: goto label_121040;
        case 0x121044u: goto label_121044;
        case 0x121048u: goto label_121048;
        case 0x12104cu: goto label_12104c;
        case 0x121050u: goto label_121050;
        case 0x121054u: goto label_121054;
        case 0x121058u: goto label_121058;
        case 0x12105cu: goto label_12105c;
        case 0x121060u: goto label_121060;
        case 0x121064u: goto label_121064;
        case 0x121068u: goto label_121068;
        case 0x12106cu: goto label_12106c;
        case 0x121070u: goto label_121070;
        case 0x121074u: goto label_121074;
        case 0x121078u: goto label_121078;
        case 0x12107cu: goto label_12107c;
        case 0x121080u: goto label_121080;
        case 0x121084u: goto label_121084;
        case 0x121088u: goto label_121088;
        case 0x12108cu: goto label_12108c;
        case 0x121090u: goto label_121090;
        case 0x121094u: goto label_121094;
        case 0x121098u: goto label_121098;
        case 0x12109cu: goto label_12109c;
        case 0x1210a0u: goto label_1210a0;
        case 0x1210a4u: goto label_1210a4;
        case 0x1210a8u: goto label_1210a8;
        case 0x1210acu: goto label_1210ac;
        case 0x1210b0u: goto label_1210b0;
        case 0x1210b4u: goto label_1210b4;
        case 0x1210b8u: goto label_1210b8;
        case 0x1210bcu: goto label_1210bc;
        case 0x1210c0u: goto label_1210c0;
        case 0x1210c4u: goto label_1210c4;
        case 0x1210c8u: goto label_1210c8;
        case 0x1210ccu: goto label_1210cc;
        case 0x1210d0u: goto label_1210d0;
        case 0x1210d4u: goto label_1210d4;
        case 0x1210d8u: goto label_1210d8;
        case 0x1210dcu: goto label_1210dc;
        case 0x1210e0u: goto label_1210e0;
        case 0x1210e4u: goto label_1210e4;
        case 0x1210e8u: goto label_1210e8;
        case 0x1210ecu: goto label_1210ec;
        case 0x1210f0u: goto label_1210f0;
        case 0x1210f4u: goto label_1210f4;
        default: break;
    }

    ctx->pc = 0x120c50u;

label_120c50:
    // 0x120c50: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x120c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_120c54:
    // 0x120c54: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x120c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_120c58:
    // 0x120c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120c5c:
    // 0x120c5c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x120c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_120c60:
    // 0x120c60: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x120c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_120c64:
    // 0x120c64: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x120c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_120c68:
    // 0x120c68: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x120c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_120c6c:
    // 0x120c6c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x120c6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_120c70:
    // 0x120c70: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x120c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_120c74:
    // 0x120c74: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x120c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_120c78:
    // 0x120c78: 0xa5980b  movn        $s3, $a1, $a1
    ctx->pc = 0x120c78u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
label_120c7c:
    // 0x120c7c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x120c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_120c80:
    // 0x120c80: 0x26300100  addiu       $s0, $s1, 0x100
    ctx->pc = 0x120c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_120c84:
    // 0x120c84: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x120c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_120c88:
    // 0x120c88: 0x263500e0  addiu       $s5, $s1, 0xE0
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_120c8c:
    // 0x120c8c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x120c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_120c90:
    // 0x120c90: 0x263600f0  addiu       $s6, $s1, 0xF0
    ctx->pc = 0x120c90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_120c94:
    // 0x120c94: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x120c94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_120c98:
    // 0x120c98: 0x263400d0  addiu       $s4, $s1, 0xD0
    ctx->pc = 0x120c98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_120c9c:
    // 0x120c9c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x120c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_120ca0:
    // 0x120ca0: 0xc0482a6  jal         func_120A98
label_120ca4:
    if (ctx->pc == 0x120CA4u) {
        ctx->pc = 0x120CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CA0u;
        // 0x120ca4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CA8u;
        goto label_120ca8;
    }
    ctx->pc = 0x120CA0u;
    SET_GPR_U32(ctx, 31, 0x120CA8u);
    ctx->pc = 0x120CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120CA0u;
    // 0x120ca4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x120CA0u, 0x120CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120CA8u;
label_120ca8:
    // 0x120ca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x120ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_120cac:
    // 0x120cac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x120cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_120cb0:
    // 0x120cb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x120cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_120cb4:
    // 0x120cb4: 0x84640200  lh          $a0, 0x200($v1)
    ctx->pc = 0x120cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 512)));
label_120cb8:
    // 0x120cb8: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x120cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
label_120cbc:
    // 0x120cbc: 0x40f809  jalr        $v0
label_120cc0:
    if (ctx->pc == 0x120CC0u) {
        ctx->pc = 0x120CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CBCu;
        // 0x120cc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CC4u;
        goto label_120cc4;
    }
    ctx->pc = 0x120CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x120CC4u);
        ctx->pc = 0x120CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CBCu;
        // 0x120cc0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120CBCu, 0x120CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120CC4u;
label_120cc4:
    // 0x120cc4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x120cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_120cc8:
    // 0x120cc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x120cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_120ccc:
    // 0x120ccc: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x120cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_120cd0:
    // 0x120cd0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x120cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_120cd4:
    // 0x120cd4: 0x60f809  jalr        $v1
label_120cd8:
    if (ctx->pc == 0x120CD8u) {
        ctx->pc = 0x120CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CD4u;
        // 0x120cd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120CDCu;
        goto label_120cdc;
    }
    ctx->pc = 0x120CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x120CDCu);
        ctx->pc = 0x120CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CD4u;
        // 0x120cd8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120CD4u, 0x120CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120CDCu;
label_120cdc:
    // 0x120cdc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x120cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_120ce0:
    // 0x120ce0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x120ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_120ce4:
    // 0x120ce4: 0x0  nop
    ctx->pc = 0x120ce4u;
    // NOP
label_120ce8:
    // 0x120ce8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x120ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_120cec:
    // 0x120cec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x120cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_120cf0:
    // 0x120cf0: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x120cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120cf4:
    // 0x120cf4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x120cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_120cf8:
    // 0x120cf8: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x120cf8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_120cfc:
    // 0x120cfc: 0xe602ffd4  swc1        $f2, -0x2C($s0)
    ctx->pc = 0x120cfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967252), bits); }
label_120d00:
    // 0x120d00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_120d04:
    // 0x120d04: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x120d04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_120d08:
    // 0x120d08: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x120d08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_120d0c:
    // 0x120d0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_120d10:
    // 0x120d10: 0xe600ffd0  swc1        $f0, -0x30($s0)
    ctx->pc = 0x120d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967248), bits); }
label_120d14:
    // 0x120d14: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x120d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120d18:
    // 0x120d18: 0xe614ffdc  swc1        $f20, -0x24($s0)
    ctx->pc = 0x120d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967260), bits); }
label_120d1c:
    // 0x120d1c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x120d1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_120d20:
    // 0x120d20: 0xc0cd69e  jal         func_335A78
label_120d24:
    if (ctx->pc == 0x120D24u) {
        ctx->pc = 0x120D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D20u;
        // 0x120d24: 0xe602ffd8  swc1        $f2, -0x28($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D28u;
        goto label_120d28;
    }
    ctx->pc = 0x120D20u;
    SET_GPR_U32(ctx, 31, 0x120D28u);
    ctx->pc = 0x120D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D20u;
    // 0x120d24: 0xe602ffd8  swc1        $f2, -0x28($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A78u, 0x120D20u, 0x120D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D28u;
label_120d28:
    // 0x120d28: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x120d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120d2c:
    // 0x120d2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x120d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_120d30:
    // 0x120d30: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x120d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_120d34:
    // 0x120d34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x120d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_120d38:
    // 0x120d38: 0xe601ffe4  swc1        $f1, -0x1C($s0)
    ctx->pc = 0x120d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967268), bits); }
label_120d3c:
    // 0x120d3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_120d40:
    // 0x120d40: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x120d40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_120d44:
    // 0x120d44: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x120d44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_120d48:
    // 0x120d48: 0xe602ffe0  swc1        $f2, -0x20($s0)
    ctx->pc = 0x120d48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967264), bits); }
label_120d4c:
    // 0x120d4c: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x120d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120d50:
    // 0x120d50: 0xe614ffec  swc1        $f20, -0x14($s0)
    ctx->pc = 0x120d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), bits); }
label_120d54:
    // 0x120d54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x120d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_120d58:
    // 0x120d58: 0xc0cd69e  jal         func_335A78
label_120d5c:
    if (ctx->pc == 0x120D5Cu) {
        ctx->pc = 0x120D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D58u;
        // 0x120d5c: 0xe601ffe8  swc1        $f1, -0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D60u;
        goto label_120d60;
    }
    ctx->pc = 0x120D58u;
    SET_GPR_U32(ctx, 31, 0x120D60u);
    ctx->pc = 0x120D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D58u;
    // 0x120d5c: 0xe601ffe8  swc1        $f1, -0x18($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A78u, 0x120D58u, 0x120D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D60u;
label_120d60:
    // 0x120d60: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x120d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120d64:
    // 0x120d64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x120d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_120d68:
    // 0x120d68: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x120d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120d6c:
    // 0x120d6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x120d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_120d70:
    // 0x120d70: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x120d70u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_120d74:
    // 0x120d74: 0xe600fff4  swc1        $f0, -0xC($s0)
    ctx->pc = 0x120d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), bits); }
label_120d78:
    // 0x120d78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_120d7c:
    // 0x120d7c: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x120d7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_120d80:
    // 0x120d80: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x120d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_120d84:
    // 0x120d84: 0xe601fff0  swc1        $f1, -0x10($s0)
    ctx->pc = 0x120d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), bits); }
label_120d88:
    // 0x120d88: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x120d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120d8c:
    // 0x120d8c: 0xe614fffc  swc1        $f20, -0x4($s0)
    ctx->pc = 0x120d8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), bits); }
label_120d90:
    // 0x120d90: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x120d90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_120d94:
    // 0x120d94: 0xc0cd69e  jal         func_335A78
label_120d98:
    if (ctx->pc == 0x120D98u) {
        ctx->pc = 0x120D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D94u;
        // 0x120d98: 0xe602fff8  swc1        $f2, -0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120D9Cu;
        goto label_120d9c;
    }
    ctx->pc = 0x120D94u;
    SET_GPR_U32(ctx, 31, 0x120D9Cu);
    ctx->pc = 0x120D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D94u;
    // 0x120d98: 0xe602fff8  swc1        $f2, -0x8($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A78u, 0x120D94u, 0x120D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D9Cu;
label_120d9c:
    // 0x120d9c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x120d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_120da0:
    // 0x120da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120da4:
    // 0x120da4: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x120da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_120da8:
    // 0x120da8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x120da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120dac:
    // 0x120dac: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x120dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_120db0:
    // 0x120db0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_120db4:
    // 0x120db4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x120db4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_120db8:
    // 0x120db8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x120db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_120dbc:
    // 0x120dbc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x120dbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_120dc0:
    // 0x120dc0: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x120dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_120dc4:
    // 0x120dc4: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x120dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_120dc8:
    // 0x120dc8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x120dc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_120dcc:
    // 0x120dcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_120dd0:
    // 0x120dd0: 0xc0cd69e  jal         func_335A78
label_120dd4:
    if (ctx->pc == 0x120DD4u) {
        ctx->pc = 0x120DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD0u;
        // 0x120dd4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DD8u;
        goto label_120dd8;
    }
    ctx->pc = 0x120DD0u;
    SET_GPR_U32(ctx, 31, 0x120DD8u);
    ctx->pc = 0x120DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DD0u;
    // 0x120dd4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335A78u, 0x120DD0u, 0x120DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DD8u;
label_120dd8:
    // 0x120dd8: 0x6e1ffc3  bgez        $s7, . + 4 + (-0x3D << 2)
label_120ddc:
    if (ctx->pc == 0x120DDCu) {
        ctx->pc = 0x120DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD8u;
        // 0x120ddc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120DE0u;
        goto label_120de0;
    }
    ctx->pc = 0x120DD8u;
    {
        const bool branch_taken_0x120dd8 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x120DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DD8u;
        // 0x120ddc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dd8) {
            ctx->pc = 0x120CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120ce8;
        }
    }
    ctx->pc = 0x120DE0u;
label_120de0:
    // 0x120de0: 0x7a2700d0  lq          $a3, 0xD0($s1)
    ctx->pc = 0x120de0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 208)));
label_120de4:
    // 0x120de4: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x120de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_120de8:
    // 0x120de8: 0x7a2600f0  lq          $a2, 0xF0($s1)
    ctx->pc = 0x120de8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 240)));
label_120dec:
    // 0x120dec: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x120decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_120df0:
    // 0x120df0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120df0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_120df4:
    // 0x120df4: 0x48a61800  qmtc2.ni    $a2, $vf3
    ctx->pc = 0x120df4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_120df8:
    // 0x120df8: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x120df8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120dfc:
    // 0x120dfc: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x120dfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_120e00:
    // 0x120e00: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x120e00u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_120e04:
    // 0x120e04: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x120e04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e08:
    // 0x120e08: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x120e08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120e0c:
    // 0x120e0c: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x120e0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e10:
    // 0x120e10: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x120e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120e14:
    // 0x120e14: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x120e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120e18:
    // 0x120e18: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x120e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120e1c:
    // 0x120e1c: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x120e1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_120e20:
    // 0x120e20: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x120e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e24:
    // 0x120e24: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x120e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e28:
    // 0x120e28: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x120e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e2c:
    // 0x120e2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x120e2cu;
    // VWAITQ (Q already resolved in this runtime)
label_120e30:
    // 0x120e30: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x120e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e34:
    // 0x120e34: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x120e34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
label_120e38:
    // 0x120e38: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x120e38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
label_120e3c:
    // 0x120e3c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x120e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_120e40:
    // 0x120e40: 0x7a240100  lq          $a0, 0x100($s1)
    ctx->pc = 0x120e40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 256)));
label_120e44:
    // 0x120e44: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x120e44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_120e48:
    // 0x120e48: 0x7a2500e0  lq          $a1, 0xE0($s1)
    ctx->pc = 0x120e48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 224)));
label_120e4c:
    // 0x120e4c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x120e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_120e50:
    // 0x120e50: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_120e54:
    // 0x120e54: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x120e54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_120e58:
    // 0x120e58: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x120e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120e5c:
    // 0x120e5c: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x120e5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_120e60:
    // 0x120e60: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x120e60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_120e64:
    // 0x120e64: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x120e64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e68:
    // 0x120e68: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x120e68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120e6c:
    // 0x120e6c: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x120e6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e70:
    // 0x120e70: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x120e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120e74:
    // 0x120e74: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x120e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120e78:
    // 0x120e78: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x120e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120e7c:
    // 0x120e7c: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x120e7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_120e80:
    // 0x120e80: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x120e80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e84:
    // 0x120e84: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x120e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e88:
    // 0x120e88: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x120e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e8c:
    // 0x120e8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x120e8cu;
    // VWAITQ (Q already resolved in this runtime)
label_120e90:
    // 0x120e90: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x120e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120e94:
    // 0x120e94: 0x48236000  qmfc2.ni    $v1, $vf12
    ctx->pc = 0x120e94u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[12]));
label_120e98:
    // 0x120e98: 0x7e230080  sq          $v1, 0x80($s1)
    ctx->pc = 0x120e98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 3));
label_120e9c:
    // 0x120e9c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x120e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_120ea0:
    // 0x120ea0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x120ea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_120ea4:
    // 0x120ea4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x120ea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_120ea8:
    // 0x120ea8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120ea8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_120eac:
    // 0x120eac: 0x48a71800  qmtc2.ni    $a3, $vf3
    ctx->pc = 0x120eacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_120eb0:
    // 0x120eb0: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x120eb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120eb4:
    // 0x120eb4: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x120eb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_120eb8:
    // 0x120eb8: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x120eb8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_120ebc:
    // 0x120ebc: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x120ebcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120ec0:
    // 0x120ec0: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x120ec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120ec4:
    // 0x120ec4: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x120ec4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120ec8:
    // 0x120ec8: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x120ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120ecc:
    // 0x120ecc: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x120eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120ed0:
    // 0x120ed0: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x120ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120ed4:
    // 0x120ed4: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x120ed4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_120ed8:
    // 0x120ed8: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x120ed8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120edc:
    // 0x120edc: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x120edcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120ee0:
    // 0x120ee0: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x120ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120ee4:
    // 0x120ee4: 0x4a0003bf  vwaitq
    ctx->pc = 0x120ee4u;
    // VWAITQ (Q already resolved in this runtime)
label_120ee8:
    // 0x120ee8: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x120ee8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120eec:
    // 0x120eec: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x120eecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
label_120ef0:
    // 0x120ef0: 0x7e2200b0  sq          $v0, 0xB0($s1)
    ctx->pc = 0x120ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 2));
label_120ef4:
    // 0x120ef4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x120ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_120ef8:
    // 0x120ef8: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x120ef8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_120efc:
    // 0x120efc: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x120efcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_120f00:
    // 0x120f00: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x120f00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_120f04:
    // 0x120f04: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x120f04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_120f08:
    // 0x120f08: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x120f08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120f0c:
    // 0x120f0c: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x120f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_120f10:
    // 0x120f10: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x120f10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_120f14:
    // 0x120f14: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x120f14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f18:
    // 0x120f18: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x120f18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120f1c:
    // 0x120f1c: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x120f1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f20:
    // 0x120f20: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x120f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120f24:
    // 0x120f24: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x120f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120f28:
    // 0x120f28: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x120f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120f2c:
    // 0x120f2c: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x120f2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_120f30:
    // 0x120f30: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x120f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f34:
    // 0x120f34: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x120f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f38:
    // 0x120f38: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x120f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f3c:
    // 0x120f3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x120f3cu;
    // VWAITQ (Q already resolved in this runtime)
label_120f40:
    // 0x120f40: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x120f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f44:
    // 0x120f44: 0x48236000  qmfc2.ni    $v1, $vf12
    ctx->pc = 0x120f44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[12]));
label_120f48:
    // 0x120f48: 0x7e2300a0  sq          $v1, 0xA0($s1)
    ctx->pc = 0x120f48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 3));
label_120f4c:
    // 0x120f4c: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x120f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_120f50:
    // 0x120f50: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x120f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_120f54:
    // 0x120f54: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x120f54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_120f58:
    // 0x120f58: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x120f58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_120f5c:
    // 0x120f5c: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x120f5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120f60:
    // 0x120f60: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x120f60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_120f64:
    // 0x120f64: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x120f64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_120f68:
    // 0x120f68: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x120f68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f6c:
    // 0x120f6c: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x120f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120f70:
    // 0x120f70: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x120f70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f74:
    // 0x120f74: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x120f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120f78:
    // 0x120f78: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x120f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120f7c:
    // 0x120f7c: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x120f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120f80:
    // 0x120f80: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x120f80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_120f84:
    // 0x120f84: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x120f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f88:
    // 0x120f88: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x120f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f8c:
    // 0x120f8c: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x120f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f90:
    // 0x120f90: 0x4a0003bf  vwaitq
    ctx->pc = 0x120f90u;
    // VWAITQ (Q already resolved in this runtime)
label_120f94:
    // 0x120f94: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x120f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120f98:
    // 0x120f98: 0x48246000  qmfc2.ni    $a0, $vf12
    ctx->pc = 0x120f98u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[12]));
label_120f9c:
    // 0x120f9c: 0x7e240090  sq          $a0, 0x90($s1)
    ctx->pc = 0x120f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 4));
label_120fa0:
    // 0x120fa0: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x120fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_120fa4:
    // 0x120fa4: 0x7a240140  lq          $a0, 0x140($s1)
    ctx->pc = 0x120fa4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 320)));
label_120fa8:
    // 0x120fa8: 0x7a230130  lq          $v1, 0x130($s1)
    ctx->pc = 0x120fa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 304)));
label_120fac:
    // 0x120fac: 0x7a220110  lq          $v0, 0x110($s1)
    ctx->pc = 0x120facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 272)));
label_120fb0:
    // 0x120fb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x120fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_120fb4:
    // 0x120fb4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x120fb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_120fb8:
    // 0x120fb8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x120fb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_120fbc:
    // 0x120fbc: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x120fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120fc0:
    // 0x120fc0: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x120fc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_120fc4:
    // 0x120fc4: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x120fc4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_120fc8:
    // 0x120fc8: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x120fc8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120fcc:
    // 0x120fcc: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x120fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120fd0:
    // 0x120fd0: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x120fd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120fd4:
    // 0x120fd4: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x120fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120fd8:
    // 0x120fd8: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x120fd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_120fdc:
    // 0x120fdc: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x120fdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_120fe0:
    // 0x120fe0: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x120fe0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_120fe4:
    // 0x120fe4: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x120fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120fe8:
    // 0x120fe8: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x120fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120fec:
    // 0x120fec: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x120fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120ff0:
    // 0x120ff0: 0x4a0003bf  vwaitq
    ctx->pc = 0x120ff0u;
    // VWAITQ (Q already resolved in this runtime)
label_120ff4:
    // 0x120ff4: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x120ff4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_120ff8:
    // 0x120ff8: 0x48236000  qmfc2.ni    $v1, $vf12
    ctx->pc = 0x120ff8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[12]));
label_120ffc:
    // 0x120ffc: 0x7e2300c0  sq          $v1, 0xC0($s1)
    ctx->pc = 0x120ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), GPR_VEC(ctx, 3));
label_121000:
    // 0x121000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121004:
    // 0x121004: 0x13c2002f  beq         $fp, $v0, . + 4 + (0x2F << 2)
label_121008:
    if (ctx->pc == 0x121008u) {
        ctx->pc = 0x121008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121004u;
        // 0x121008: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12100Cu;
        goto label_12100c;
    }
    ctx->pc = 0x121004u;
    {
        const bool branch_taken_0x121004 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x121008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121004u;
        // 0x121008: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121004) {
            ctx->pc = 0x1210C4u;
            goto label_1210c4;
        }
    }
    ctx->pc = 0x12100Cu;
label_12100c:
    // 0x12100c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12100cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_121010:
    // 0x121010: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x121010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121014:
    // 0x121014: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x121014u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121018:
    // 0x121018: 0xc0cdfb6  jal         func_337ED8
label_12101c:
    if (ctx->pc == 0x12101Cu) {
        ctx->pc = 0x12101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121018u;
        // 0x12101c: 0x26350150  addiu       $s5, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121020u;
        goto label_121020;
    }
    ctx->pc = 0x121018u;
    SET_GPR_U32(ctx, 31, 0x121020u);
    ctx->pc = 0x12101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121018u;
    // 0x12101c: 0x26350150  addiu       $s5, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337ED8u, 0x121018u, 0x121020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121020u;
label_121020:
    // 0x121020: 0x26370160  addiu       $s7, $s1, 0x160
    ctx->pc = 0x121020u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_121024:
    // 0x121024: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x121024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_121028:
    // 0x121028: 0x263e0170  addiu       $fp, $s1, 0x170
    ctx->pc = 0x121028u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_12102c:
    // 0x12102c: 0x26330110  addiu       $s3, $s1, 0x110
    ctx->pc = 0x12102cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_121030:
    // 0x121030: 0x263200d0  addiu       $s2, $s1, 0xD0
    ctx->pc = 0x121030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_121034:
    // 0x121034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x121034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_121038:
    // 0x121038: 0xc0cdfc2  jal         func_337F08
label_12103c:
    if (ctx->pc == 0x12103Cu) {
        ctx->pc = 0x12103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121038u;
        // 0x12103c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121040u;
        goto label_121040;
    }
    ctx->pc = 0x121038u;
    SET_GPR_U32(ctx, 31, 0x121040u);
    ctx->pc = 0x12103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121038u;
    // 0x12103c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F08u, 0x121038u, 0x121040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121040u;
label_121040:
    // 0x121040: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x121040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_121044:
    // 0x121044: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x121044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_121048:
    // 0x121048: 0xc0cdfca  jal         func_337F28
label_12104c:
    if (ctx->pc == 0x12104Cu) {
        ctx->pc = 0x12104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121048u;
        // 0x12104c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121050u;
        goto label_121050;
    }
    ctx->pc = 0x121048u;
    SET_GPR_U32(ctx, 31, 0x121050u);
    ctx->pc = 0x12104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121048u;
    // 0x12104c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F28u, 0x121048u, 0x121050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121050u;
label_121050:
    // 0x121050: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x121050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_121054:
    // 0x121054: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x121054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_121058:
    // 0x121058: 0xc0cdfc2  jal         func_337F08
label_12105c:
    if (ctx->pc == 0x12105Cu) {
        ctx->pc = 0x12105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121058u;
        // 0x12105c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121060u;
        goto label_121060;
    }
    ctx->pc = 0x121058u;
    SET_GPR_U32(ctx, 31, 0x121060u);
    ctx->pc = 0x12105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121058u;
    // 0x12105c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F08u, 0x121058u, 0x121060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121060u;
label_121060:
    // 0x121060: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x121060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_121064:
    // 0x121064: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x121064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_121068:
    // 0x121068: 0xc0cdfca  jal         func_337F28
label_12106c:
    if (ctx->pc == 0x12106Cu) {
        ctx->pc = 0x12106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121068u;
        // 0x12106c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121070u;
        goto label_121070;
    }
    ctx->pc = 0x121068u;
    SET_GPR_U32(ctx, 31, 0x121070u);
    ctx->pc = 0x12106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121068u;
    // 0x12106c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F28u, 0x121068u, 0x121070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121070u;
label_121070:
    // 0x121070: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x121070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_121074:
    // 0x121074: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_121078:
    if (ctx->pc == 0x121078u) {
        ctx->pc = 0x121078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121074u;
        // 0x121078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12107Cu;
        goto label_12107c;
    }
    ctx->pc = 0x121074u;
    {
        const bool branch_taken_0x121074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121074u;
        // 0x121078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121074) {
            ctx->pc = 0x121038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121038;
        }
    }
    ctx->pc = 0x12107Cu;
label_12107c:
    // 0x12107c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x12107cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121080:
    // 0x121080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121084:
    // 0x121084: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x121084u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_121088:
    // 0x121088: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x121088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12108c:
    // 0x12108c: 0x7e220160  sq          $v0, 0x160($s1)
    ctx->pc = 0x12108cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 352), GPR_VEC(ctx, 2));
label_121090:
    // 0x121090: 0xc0cdff2  jal         func_337FC8
label_121094:
    if (ctx->pc == 0x121094u) {
        ctx->pc = 0x121094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121090u;
        // 0x121094: 0x7e230150  sq          $v1, 0x150($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 336), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121098u;
        goto label_121098;
    }
    ctx->pc = 0x121090u;
    SET_GPR_U32(ctx, 31, 0x121098u);
    ctx->pc = 0x121094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121090u;
    // 0x121094: 0x7e230150  sq          $v1, 0x150($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 336), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337FC8u, 0x121090u, 0x121098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121098u;
label_121098:
    // 0x121098: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x121098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12109c:
    // 0x12109c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1210a0:
    // 0x1210a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1210a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1210a4:
    // 0x1210a4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1210a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1210a8:
    // 0x1210a8: 0xc136afa  jal         func_4DABE8
label_1210ac:
    if (ctx->pc == 0x1210ACu) {
        ctx->pc = 0x1210ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210A8u;
        // 0x1210ac: 0x7ea20020  sq          $v0, 0x20($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210B0u;
        goto label_1210b0;
    }
    ctx->pc = 0x1210A8u;
    SET_GPR_U32(ctx, 31, 0x1210B0u);
    ctx->pc = 0x1210ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210A8u;
    // 0x1210ac: 0x7ea20020  sq          $v0, 0x20($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1210A8u, 0x1210B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210B0u;
label_1210b0:
    // 0x1210b0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1210b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1210b4:
    // 0x1210b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1210b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1210b8:
    // 0x1210b8: 0xc136d34  jal         func_4DB4D0
label_1210bc:
    if (ctx->pc == 0x1210BCu) {
        ctx->pc = 0x1210BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210B8u;
        // 0x1210bc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210C0u;
        goto label_1210c0;
    }
    ctx->pc = 0x1210B8u;
    SET_GPR_U32(ctx, 31, 0x1210C0u);
    ctx->pc = 0x1210BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210B8u;
    // 0x1210bc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB4D0u, 0x1210B8u, 0x1210C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210C0u;
label_1210c0:
    // 0x1210c0: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x1210c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
label_1210c4:
    // 0x1210c4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1210c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1210c8:
    // 0x1210c8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1210c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1210cc:
    // 0x1210cc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1210ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1210d0:
    // 0x1210d0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1210d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1210d4:
    // 0x1210d4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1210d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1210d8:
    // 0x1210d8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1210d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1210dc:
    // 0x1210dc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1210dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1210e0:
    // 0x1210e0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1210e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1210e4:
    // 0x1210e4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1210e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1210e8:
    // 0x1210e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1210e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1210ec:
    // 0x1210ec: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1210ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1210f0:
    // 0x1210f0: 0x3e00008  jr          $ra
label_1210f4:
    if (ctx->pc == 0x1210F4u) {
        ctx->pc = 0x1210F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210F0u;
        // 0x1210f4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1210F8u;
        goto label_fallthrough_0x1210f0;
    }
    ctx->pc = 0x1210F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1210F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1210F0u;
        // 0x1210f4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1210F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1210f0:
    ctx->pc = 0x1210F8u;
}
