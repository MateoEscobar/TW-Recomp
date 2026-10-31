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

// Function: sub_002E1E10
// Address: 0x2e1e10 - 0x2e2230
void sub_002E1E10_0x2e1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1E10_0x2e1e10");
#endif

    switch (ctx->pc) {
        case 0x2e1e10u: goto label_2e1e10;
        case 0x2e1e14u: goto label_2e1e14;
        case 0x2e1e18u: goto label_2e1e18;
        case 0x2e1e1cu: goto label_2e1e1c;
        case 0x2e1e20u: goto label_2e1e20;
        case 0x2e1e24u: goto label_2e1e24;
        case 0x2e1e28u: goto label_2e1e28;
        case 0x2e1e2cu: goto label_2e1e2c;
        case 0x2e1e30u: goto label_2e1e30;
        case 0x2e1e34u: goto label_2e1e34;
        case 0x2e1e38u: goto label_2e1e38;
        case 0x2e1e3cu: goto label_2e1e3c;
        case 0x2e1e40u: goto label_2e1e40;
        case 0x2e1e44u: goto label_2e1e44;
        case 0x2e1e48u: goto label_2e1e48;
        case 0x2e1e4cu: goto label_2e1e4c;
        case 0x2e1e50u: goto label_2e1e50;
        case 0x2e1e54u: goto label_2e1e54;
        case 0x2e1e58u: goto label_2e1e58;
        case 0x2e1e5cu: goto label_2e1e5c;
        case 0x2e1e60u: goto label_2e1e60;
        case 0x2e1e64u: goto label_2e1e64;
        case 0x2e1e68u: goto label_2e1e68;
        case 0x2e1e6cu: goto label_2e1e6c;
        case 0x2e1e70u: goto label_2e1e70;
        case 0x2e1e74u: goto label_2e1e74;
        case 0x2e1e78u: goto label_2e1e78;
        case 0x2e1e7cu: goto label_2e1e7c;
        case 0x2e1e80u: goto label_2e1e80;
        case 0x2e1e84u: goto label_2e1e84;
        case 0x2e1e88u: goto label_2e1e88;
        case 0x2e1e8cu: goto label_2e1e8c;
        case 0x2e1e90u: goto label_2e1e90;
        case 0x2e1e94u: goto label_2e1e94;
        case 0x2e1e98u: goto label_2e1e98;
        case 0x2e1e9cu: goto label_2e1e9c;
        case 0x2e1ea0u: goto label_2e1ea0;
        case 0x2e1ea4u: goto label_2e1ea4;
        case 0x2e1ea8u: goto label_2e1ea8;
        case 0x2e1eacu: goto label_2e1eac;
        case 0x2e1eb0u: goto label_2e1eb0;
        case 0x2e1eb4u: goto label_2e1eb4;
        case 0x2e1eb8u: goto label_2e1eb8;
        case 0x2e1ebcu: goto label_2e1ebc;
        case 0x2e1ec0u: goto label_2e1ec0;
        case 0x2e1ec4u: goto label_2e1ec4;
        case 0x2e1ec8u: goto label_2e1ec8;
        case 0x2e1eccu: goto label_2e1ecc;
        case 0x2e1ed0u: goto label_2e1ed0;
        case 0x2e1ed4u: goto label_2e1ed4;
        case 0x2e1ed8u: goto label_2e1ed8;
        case 0x2e1edcu: goto label_2e1edc;
        case 0x2e1ee0u: goto label_2e1ee0;
        case 0x2e1ee4u: goto label_2e1ee4;
        case 0x2e1ee8u: goto label_2e1ee8;
        case 0x2e1eecu: goto label_2e1eec;
        case 0x2e1ef0u: goto label_2e1ef0;
        case 0x2e1ef4u: goto label_2e1ef4;
        case 0x2e1ef8u: goto label_2e1ef8;
        case 0x2e1efcu: goto label_2e1efc;
        case 0x2e1f00u: goto label_2e1f00;
        case 0x2e1f04u: goto label_2e1f04;
        case 0x2e1f08u: goto label_2e1f08;
        case 0x2e1f0cu: goto label_2e1f0c;
        case 0x2e1f10u: goto label_2e1f10;
        case 0x2e1f14u: goto label_2e1f14;
        case 0x2e1f18u: goto label_2e1f18;
        case 0x2e1f1cu: goto label_2e1f1c;
        case 0x2e1f20u: goto label_2e1f20;
        case 0x2e1f24u: goto label_2e1f24;
        case 0x2e1f28u: goto label_2e1f28;
        case 0x2e1f2cu: goto label_2e1f2c;
        case 0x2e1f30u: goto label_2e1f30;
        case 0x2e1f34u: goto label_2e1f34;
        case 0x2e1f38u: goto label_2e1f38;
        case 0x2e1f3cu: goto label_2e1f3c;
        case 0x2e1f40u: goto label_2e1f40;
        case 0x2e1f44u: goto label_2e1f44;
        case 0x2e1f48u: goto label_2e1f48;
        case 0x2e1f4cu: goto label_2e1f4c;
        case 0x2e1f50u: goto label_2e1f50;
        case 0x2e1f54u: goto label_2e1f54;
        case 0x2e1f58u: goto label_2e1f58;
        case 0x2e1f5cu: goto label_2e1f5c;
        case 0x2e1f60u: goto label_2e1f60;
        case 0x2e1f64u: goto label_2e1f64;
        case 0x2e1f68u: goto label_2e1f68;
        case 0x2e1f6cu: goto label_2e1f6c;
        case 0x2e1f70u: goto label_2e1f70;
        case 0x2e1f74u: goto label_2e1f74;
        case 0x2e1f78u: goto label_2e1f78;
        case 0x2e1f7cu: goto label_2e1f7c;
        case 0x2e1f80u: goto label_2e1f80;
        case 0x2e1f84u: goto label_2e1f84;
        case 0x2e1f88u: goto label_2e1f88;
        case 0x2e1f8cu: goto label_2e1f8c;
        case 0x2e1f90u: goto label_2e1f90;
        case 0x2e1f94u: goto label_2e1f94;
        case 0x2e1f98u: goto label_2e1f98;
        case 0x2e1f9cu: goto label_2e1f9c;
        case 0x2e1fa0u: goto label_2e1fa0;
        case 0x2e1fa4u: goto label_2e1fa4;
        case 0x2e1fa8u: goto label_2e1fa8;
        case 0x2e1facu: goto label_2e1fac;
        case 0x2e1fb0u: goto label_2e1fb0;
        case 0x2e1fb4u: goto label_2e1fb4;
        case 0x2e1fb8u: goto label_2e1fb8;
        case 0x2e1fbcu: goto label_2e1fbc;
        case 0x2e1fc0u: goto label_2e1fc0;
        case 0x2e1fc4u: goto label_2e1fc4;
        case 0x2e1fc8u: goto label_2e1fc8;
        case 0x2e1fccu: goto label_2e1fcc;
        case 0x2e1fd0u: goto label_2e1fd0;
        case 0x2e1fd4u: goto label_2e1fd4;
        case 0x2e1fd8u: goto label_2e1fd8;
        case 0x2e1fdcu: goto label_2e1fdc;
        case 0x2e1fe0u: goto label_2e1fe0;
        case 0x2e1fe4u: goto label_2e1fe4;
        case 0x2e1fe8u: goto label_2e1fe8;
        case 0x2e1fecu: goto label_2e1fec;
        case 0x2e1ff0u: goto label_2e1ff0;
        case 0x2e1ff4u: goto label_2e1ff4;
        case 0x2e1ff8u: goto label_2e1ff8;
        case 0x2e1ffcu: goto label_2e1ffc;
        case 0x2e2000u: goto label_2e2000;
        case 0x2e2004u: goto label_2e2004;
        case 0x2e2008u: goto label_2e2008;
        case 0x2e200cu: goto label_2e200c;
        case 0x2e2010u: goto label_2e2010;
        case 0x2e2014u: goto label_2e2014;
        case 0x2e2018u: goto label_2e2018;
        case 0x2e201cu: goto label_2e201c;
        case 0x2e2020u: goto label_2e2020;
        case 0x2e2024u: goto label_2e2024;
        case 0x2e2028u: goto label_2e2028;
        case 0x2e202cu: goto label_2e202c;
        case 0x2e2030u: goto label_2e2030;
        case 0x2e2034u: goto label_2e2034;
        case 0x2e2038u: goto label_2e2038;
        case 0x2e203cu: goto label_2e203c;
        case 0x2e2040u: goto label_2e2040;
        case 0x2e2044u: goto label_2e2044;
        case 0x2e2048u: goto label_2e2048;
        case 0x2e204cu: goto label_2e204c;
        case 0x2e2050u: goto label_2e2050;
        case 0x2e2054u: goto label_2e2054;
        case 0x2e2058u: goto label_2e2058;
        case 0x2e205cu: goto label_2e205c;
        case 0x2e2060u: goto label_2e2060;
        case 0x2e2064u: goto label_2e2064;
        case 0x2e2068u: goto label_2e2068;
        case 0x2e206cu: goto label_2e206c;
        case 0x2e2070u: goto label_2e2070;
        case 0x2e2074u: goto label_2e2074;
        case 0x2e2078u: goto label_2e2078;
        case 0x2e207cu: goto label_2e207c;
        case 0x2e2080u: goto label_2e2080;
        case 0x2e2084u: goto label_2e2084;
        case 0x2e2088u: goto label_2e2088;
        case 0x2e208cu: goto label_2e208c;
        case 0x2e2090u: goto label_2e2090;
        case 0x2e2094u: goto label_2e2094;
        case 0x2e2098u: goto label_2e2098;
        case 0x2e209cu: goto label_2e209c;
        case 0x2e20a0u: goto label_2e20a0;
        case 0x2e20a4u: goto label_2e20a4;
        case 0x2e20a8u: goto label_2e20a8;
        case 0x2e20acu: goto label_2e20ac;
        case 0x2e20b0u: goto label_2e20b0;
        case 0x2e20b4u: goto label_2e20b4;
        case 0x2e20b8u: goto label_2e20b8;
        case 0x2e20bcu: goto label_2e20bc;
        case 0x2e20c0u: goto label_2e20c0;
        case 0x2e20c4u: goto label_2e20c4;
        case 0x2e20c8u: goto label_2e20c8;
        case 0x2e20ccu: goto label_2e20cc;
        case 0x2e20d0u: goto label_2e20d0;
        case 0x2e20d4u: goto label_2e20d4;
        case 0x2e20d8u: goto label_2e20d8;
        case 0x2e20dcu: goto label_2e20dc;
        case 0x2e20e0u: goto label_2e20e0;
        case 0x2e20e4u: goto label_2e20e4;
        case 0x2e20e8u: goto label_2e20e8;
        case 0x2e20ecu: goto label_2e20ec;
        case 0x2e20f0u: goto label_2e20f0;
        case 0x2e20f4u: goto label_2e20f4;
        case 0x2e20f8u: goto label_2e20f8;
        case 0x2e20fcu: goto label_2e20fc;
        case 0x2e2100u: goto label_2e2100;
        case 0x2e2104u: goto label_2e2104;
        case 0x2e2108u: goto label_2e2108;
        case 0x2e210cu: goto label_2e210c;
        case 0x2e2110u: goto label_2e2110;
        case 0x2e2114u: goto label_2e2114;
        case 0x2e2118u: goto label_2e2118;
        case 0x2e211cu: goto label_2e211c;
        case 0x2e2120u: goto label_2e2120;
        case 0x2e2124u: goto label_2e2124;
        case 0x2e2128u: goto label_2e2128;
        case 0x2e212cu: goto label_2e212c;
        case 0x2e2130u: goto label_2e2130;
        case 0x2e2134u: goto label_2e2134;
        case 0x2e2138u: goto label_2e2138;
        case 0x2e213cu: goto label_2e213c;
        case 0x2e2140u: goto label_2e2140;
        case 0x2e2144u: goto label_2e2144;
        case 0x2e2148u: goto label_2e2148;
        case 0x2e214cu: goto label_2e214c;
        case 0x2e2150u: goto label_2e2150;
        case 0x2e2154u: goto label_2e2154;
        case 0x2e2158u: goto label_2e2158;
        case 0x2e215cu: goto label_2e215c;
        case 0x2e2160u: goto label_2e2160;
        case 0x2e2164u: goto label_2e2164;
        case 0x2e2168u: goto label_2e2168;
        case 0x2e216cu: goto label_2e216c;
        case 0x2e2170u: goto label_2e2170;
        case 0x2e2174u: goto label_2e2174;
        case 0x2e2178u: goto label_2e2178;
        case 0x2e217cu: goto label_2e217c;
        case 0x2e2180u: goto label_2e2180;
        case 0x2e2184u: goto label_2e2184;
        case 0x2e2188u: goto label_2e2188;
        case 0x2e218cu: goto label_2e218c;
        case 0x2e2190u: goto label_2e2190;
        case 0x2e2194u: goto label_2e2194;
        case 0x2e2198u: goto label_2e2198;
        case 0x2e219cu: goto label_2e219c;
        case 0x2e21a0u: goto label_2e21a0;
        case 0x2e21a4u: goto label_2e21a4;
        case 0x2e21a8u: goto label_2e21a8;
        case 0x2e21acu: goto label_2e21ac;
        case 0x2e21b0u: goto label_2e21b0;
        case 0x2e21b4u: goto label_2e21b4;
        case 0x2e21b8u: goto label_2e21b8;
        case 0x2e21bcu: goto label_2e21bc;
        case 0x2e21c0u: goto label_2e21c0;
        case 0x2e21c4u: goto label_2e21c4;
        case 0x2e21c8u: goto label_2e21c8;
        case 0x2e21ccu: goto label_2e21cc;
        case 0x2e21d0u: goto label_2e21d0;
        case 0x2e21d4u: goto label_2e21d4;
        case 0x2e21d8u: goto label_2e21d8;
        case 0x2e21dcu: goto label_2e21dc;
        case 0x2e21e0u: goto label_2e21e0;
        case 0x2e21e4u: goto label_2e21e4;
        case 0x2e21e8u: goto label_2e21e8;
        case 0x2e21ecu: goto label_2e21ec;
        case 0x2e21f0u: goto label_2e21f0;
        case 0x2e21f4u: goto label_2e21f4;
        case 0x2e21f8u: goto label_2e21f8;
        case 0x2e21fcu: goto label_2e21fc;
        case 0x2e2200u: goto label_2e2200;
        case 0x2e2204u: goto label_2e2204;
        case 0x2e2208u: goto label_2e2208;
        case 0x2e220cu: goto label_2e220c;
        case 0x2e2210u: goto label_2e2210;
        case 0x2e2214u: goto label_2e2214;
        case 0x2e2218u: goto label_2e2218;
        case 0x2e221cu: goto label_2e221c;
        case 0x2e2220u: goto label_2e2220;
        case 0x2e2224u: goto label_2e2224;
        case 0x2e2228u: goto label_2e2228;
        case 0x2e222cu: goto label_2e222c;
        default: break;
    }

    ctx->pc = 0x2e1e10u;

label_2e1e10:
    // 0x2e1e10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2e1e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2e1e14:
    // 0x2e1e14: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2e1e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_2e1e18:
    // 0x2e1e18: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2e1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_2e1e1c:
    // 0x2e1e1c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2e1e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2e1e20:
    // 0x2e1e20: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2e1e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_2e1e24:
    // 0x2e1e24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e1e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e28:
    // 0x2e1e28: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2e1e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_2e1e2c:
    // 0x2e1e2c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2e1e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2e1e30:
    // 0x2e1e30: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2e1e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_2e1e34:
    // 0x2e1e34: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e1e38:
    // 0x2e1e38: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2e1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_2e1e3c:
    // 0x2e1e3c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e1e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2e1e40:
    // 0x2e1e40: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2e1e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_2e1e44:
    // 0x2e1e44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1e48:
    // 0x2e1e48: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x2e1e48u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1e4c:
    // 0x2e1e4c: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2e1e4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2e1e50:
    // 0x2e1e50: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e1e54:
    // 0x2e1e54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2e1e58:
    // 0x2e1e58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e1e58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1e5c:
    // 0x2e1e5c: 0xc0e409a  jal         func_390268
label_2e1e60:
    if (ctx->pc == 0x2E1E60u) {
        ctx->pc = 0x2E1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E5Cu;
        // 0x2e1e60: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1E64u;
        goto label_2e1e64;
    }
    ctx->pc = 0x2E1E5Cu;
    SET_GPR_U32(ctx, 31, 0x2E1E64u);
    ctx->pc = 0x2E1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E5Cu;
    // 0x2e1e60: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E1E5Cu, 0x2E1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E64u;
label_2e1e64:
    // 0x2e1e64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e1e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e68:
    // 0x2e1e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e6c:
    // 0x2e1e6c: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2e1e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2e1e70:
    // 0x2e1e70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e1e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e74:
    // 0x2e1e74: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2e1e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2e1e78:
    // 0x2e1e78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2e1e7c:
    // 0x2e1e7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2e1e80:
    // 0x2e1e80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2e1e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1e84:
    // 0x2e1e84: 0xc0b866c  jal         func_2E19B0
label_2e1e88:
    if (ctx->pc == 0x2E1E88u) {
        ctx->pc = 0x2E1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E84u;
        // 0x2e1e88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1E8Cu;
        goto label_2e1e8c;
    }
    ctx->pc = 0x2E1E84u;
    SET_GPR_U32(ctx, 31, 0x2E1E8Cu);
    ctx->pc = 0x2E1E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E84u;
    // 0x2e1e88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E19B0u, 0x2E1E84u, 0x2E1E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E8Cu;
label_2e1e8c:
    // 0x2e1e8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e1e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1e90:
    // 0x2e1e90: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2e1e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_2e1e94:
    // 0x2e1e94: 0x5462004f  bnel        $v1, $v0, . + 4 + (0x4F << 2)
label_2e1e98:
    if (ctx->pc == 0x2E1E98u) {
        ctx->pc = 0x2E1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E94u;
        // 0x2e1e98: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1E9Cu;
        goto label_2e1e9c;
    }
    ctx->pc = 0x2E1E94u;
    {
        const bool branch_taken_0x2e1e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1e94) {
            ctx->pc = 0x2E1E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E94u;
            // 0x2e1e98: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1FD4u;
            goto label_2e1fd4;
        }
    }
    ctx->pc = 0x2E1E9Cu;
label_2e1e9c:
    // 0x2e1e9c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2e1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e1ea0:
    // 0x2e1ea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e1ea4:
    // 0x2e1ea4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2e1ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e1ea8:
    // 0x2e1ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e1eac:
    // 0x2e1eac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e1eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e1eb0:
    // 0x2e1eb0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2e1eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e1eb4:
    // 0x2e1eb4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e1eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1eb8:
    // 0x2e1eb8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2e1eb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2e1ebc:
    // 0x2e1ebc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2e1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2e1ec0:
    // 0x2e1ec0: 0x40f809  jalr        $v0
label_2e1ec4:
    if (ctx->pc == 0x2E1EC4u) {
        ctx->pc = 0x2E1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EC0u;
        // 0x2e1ec4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1EC8u;
        goto label_2e1ec8;
    }
    ctx->pc = 0x2E1EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1EC8u);
        ctx->pc = 0x2E1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EC0u;
        // 0x2e1ec4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1EC0u, 0x2E1EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1EC8u;
label_2e1ec8:
    // 0x2e1ec8: 0x92230038  lbu         $v1, 0x38($s1)
    ctx->pc = 0x2e1ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_2e1ecc:
    // 0x2e1ecc: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2e1eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e1ed0:
    // 0x2e1ed0: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x2e1ed0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1ed4:
    // 0x2e1ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ed8:
    // 0x2e1ed8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2e1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e1edc:
    // 0x2e1edc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e1ee0:
    // 0x2e1ee0: 0x7fa50020  sq          $a1, 0x20($sp)
    ctx->pc = 0x2e1ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 5));
label_2e1ee4:
    // 0x2e1ee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e1ee8:
    // 0x2e1ee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e1eec:
    // 0x2e1eec: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2e1eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e1ef0:
    // 0x2e1ef0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1ef4:
    // 0x2e1ef4: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2e1ef4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2e1ef8:
    // 0x2e1ef8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2e1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2e1efc:
    // 0x2e1efc: 0x40f809  jalr        $v0
label_2e1f00:
    if (ctx->pc == 0x2E1F00u) {
        ctx->pc = 0x2E1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EFCu;
        // 0x2e1f00: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F04u;
        goto label_2e1f04;
    }
    ctx->pc = 0x2E1EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1F04u);
        ctx->pc = 0x2E1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EFCu;
        // 0x2e1f00: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1EFCu, 0x2E1F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1F04u;
label_2e1f04:
    // 0x2e1f04: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x2e1f04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e1f08:
    // 0x2e1f08: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e1f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e1f0c:
    // 0x2e1f0c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2e1f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1f10:
    // 0x2e1f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f14:
    // 0x2e1f14: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e1f14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e1f18:
    // 0x2e1f18: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e1f18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1f1c:
    // 0x2e1f1c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e1f1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e1f20:
    // 0x2e1f20: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e1f20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e1f24:
    // 0x2e1f24: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e1f24u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e1f28:
    // 0x2e1f28: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2e1f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2e1f2c:
    // 0x2e1f2c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2e1f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2e1f30:
    // 0x2e1f30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e1f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f34:
    // 0x2e1f34: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2e1f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2e1f38:
    // 0x2e1f38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e1f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f3c:
    // 0x2e1f3c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2e1f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2e1f40:
    // 0x2e1f40: 0xc0b86b4  jal         func_2E1AD0
label_2e1f44:
    if (ctx->pc == 0x2E1F44u) {
        ctx->pc = 0x2E1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F40u;
        // 0x2e1f44: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F48u;
        goto label_2e1f48;
    }
    ctx->pc = 0x2E1F40u;
    SET_GPR_U32(ctx, 31, 0x2E1F48u);
    ctx->pc = 0x2E1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F40u;
    // 0x2e1f44: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1AD0u, 0x2E1F40u, 0x2E1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F48u;
label_2e1f48:
    // 0x2e1f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1f4c:
    // 0x2e1f4c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2e1f50:
    if (ctx->pc == 0x2E1F50u) {
        ctx->pc = 0x2E1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F4Cu;
        // 0x2e1f50: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F54u;
        goto label_2e1f54;
    }
    ctx->pc = 0x2E1F4Cu;
    {
        const bool branch_taken_0x2e1f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F4Cu;
        // 0x2e1f50: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f4c) {
            ctx->pc = 0x2E1F60u;
            goto label_2e1f60;
        }
    }
    ctx->pc = 0x2E1F54u;
label_2e1f54:
    // 0x2e1f54: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e1f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e1f58:
    // 0x2e1f58: 0x10000031  b           . + 4 + (0x31 << 2)
label_2e1f5c:
    if (ctx->pc == 0x2E1F5Cu) {
        ctx->pc = 0x2E1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F58u;
        // 0x2e1f5c: 0x9223003c  lbu         $v1, 0x3C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F60u;
        goto label_2e1f60;
    }
    ctx->pc = 0x2E1F58u;
    {
        const bool branch_taken_0x2e1f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F58u;
        // 0x2e1f5c: 0x9223003c  lbu         $v1, 0x3C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f58) {
            ctx->pc = 0x2E2020u;
            goto label_2e2020;
        }
    }
    ctx->pc = 0x2E1F60u;
label_2e1f60:
    // 0x2e1f60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e1f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f64:
    // 0x2e1f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e1f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f68:
    // 0x2e1f68: 0xc0cdbb8  jal         func_336EE0
label_2e1f6c:
    if (ctx->pc == 0x2E1F6Cu) {
        ctx->pc = 0x2E1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F68u;
        // 0x2e1f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F70u;
        goto label_2e1f70;
    }
    ctx->pc = 0x2E1F68u;
    SET_GPR_U32(ctx, 31, 0x2E1F70u);
    ctx->pc = 0x2E1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F68u;
    // 0x2e1f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE0u, 0x2E1F68u, 0x2E1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F70u;
label_2e1f70:
    // 0x2e1f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e1f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f74:
    // 0x2e1f74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e1f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f78:
    // 0x2e1f78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e1f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e1f7c:
    // 0x2e1f7c: 0xc0cdb82  jal         func_336E08
label_2e1f80:
    if (ctx->pc == 0x2E1F80u) {
        ctx->pc = 0x2E1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F7Cu;
        // 0x2e1f80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F84u;
        goto label_2e1f84;
    }
    ctx->pc = 0x2E1F7Cu;
    SET_GPR_U32(ctx, 31, 0x2E1F84u);
    ctx->pc = 0x2E1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F7Cu;
    // 0x2e1f80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E08u, 0x2E1F7Cu, 0x2E1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F84u;
label_2e1f84:
    // 0x2e1f84: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x2e1f84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e1f88:
    // 0x2e1f88: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e1f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1f8c:
    // 0x2e1f8c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e1f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1f90:
    // 0x2e1f90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e1f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e1f94:
    // 0x2e1f94: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e1f94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e1f98:
    // 0x2e1f98: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e1f98u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e1f9c:
    // 0x2e1f9c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e1f9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e1fa0:
    // 0x2e1fa0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e1fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1fa4:
    // 0x2e1fa4: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2e1fa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1fa8:
    // 0x2e1fa8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e1fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1fac:
    // 0x2e1fac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e1facu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1fb0:
    // 0x2e1fb0: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2e1fb0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2e1fb4:
    // 0x2e1fb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e1fb4u;
    // VWAITQ (Q already resolved in this runtime)
label_2e1fb8:
    // 0x2e1fb8: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2e1fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1fbc:
    // 0x2e1fbc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2e1fbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2e1fc0:
    // 0x2e1fc0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x2e1fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_2e1fc4:
    // 0x2e1fc4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e1fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e1fc8:
    // 0x2e1fc8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x2e1fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_2e1fcc:
    // 0x2e1fcc: 0x10000013  b           . + 4 + (0x13 << 2)
label_2e1fd0:
    if (ctx->pc == 0x2E1FD0u) {
        ctx->pc = 0x2E1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FCCu;
        // 0x2e1fd0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1FD4u;
        goto label_2e1fd4;
    }
    ctx->pc = 0x2E1FCCu;
    {
        const bool branch_taken_0x2e1fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1FCCu;
        // 0x2e1fd0: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1fcc) {
            ctx->pc = 0x2E201Cu;
            goto label_2e201c;
        }
    }
    ctx->pc = 0x2E1FD4u;
label_2e1fd4:
    // 0x2e1fd4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e1fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1fd8:
    // 0x2e1fd8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e1fd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1fdc:
    // 0x2e1fdc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2e1fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e1fe0:
    // 0x2e1fe0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e1fe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e1fe4:
    // 0x2e1fe4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e1fe4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e1fe8:
    // 0x2e1fe8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2e1fe8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e1fec:
    // 0x2e1fec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2e1fecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1ff0:
    // 0x2e1ff0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2e1ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1ff4:
    // 0x2e1ff4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e1ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1ff8:
    // 0x2e1ff8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e1ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1ffc:
    // 0x2e1ffc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2e1ffcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2e2000:
    // 0x2e2000: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e2000u;
    // VWAITQ (Q already resolved in this runtime)
label_2e2004:
    // 0x2e2004: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2e2004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e2008:
    // 0x2e2008: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2e2008u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2e200c:
    // 0x2e200c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2e200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2e2010:
    // 0x2e2010: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e2010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e2014:
    // 0x2e2014: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e2014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2e2018:
    // 0x2e2018: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2e2018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2e201c:
    // 0x2e201c: 0x9223003c  lbu         $v1, 0x3C($s1)
    ctx->pc = 0x2e201cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
label_2e2020:
    // 0x2e2020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2024:
    // 0x2e2024: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e2024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2e2028:
    // 0x2e2028: 0x5462005a  bnel        $v1, $v0, . + 4 + (0x5A << 2)
label_2e202c:
    if (ctx->pc == 0x2E202Cu) {
        ctx->pc = 0x2E202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2028u;
        // 0x2e202c: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2030u;
        goto label_2e2030;
    }
    ctx->pc = 0x2E2028u;
    {
        const bool branch_taken_0x2e2028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2028) {
            ctx->pc = 0x2E202Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2028u;
            // 0x2e202c: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2194u;
            goto label_2e2194;
        }
    }
    ctx->pc = 0x2E2030u;
label_2e2030:
    // 0x2e2030: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e2030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2034:
    // 0x2e2034: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e2034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2038:
    // 0x2e2038: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2e2038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_2e203c:
    // 0x2e203c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e203cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e2040:
    // 0x2e2040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e2044:
    // 0x2e2044: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2e2044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2048:
    // 0x2e2048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e204c:
    // 0x2e204c: 0x8e8301a8  lw          $v1, 0x1A8($s4)
    ctx->pc = 0x2e204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_2e2050:
    // 0x2e2050: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e2054:
    // 0x2e2054: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2e2054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e2058:
    // 0x2e2058: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e2058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2e205c:
    // 0x2e205c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2e2060:
    if (ctx->pc == 0x2E2060u) {
        ctx->pc = 0x2E2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E205Cu;
        // 0x2e2060: 0x46000042  mul.s       $f1, $f0, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2064u;
        goto label_2e2064;
    }
    ctx->pc = 0x2E205Cu;
    {
        const bool branch_taken_0x2e205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E205Cu;
        // 0x2e2060: 0x46000042  mul.s       $f1, $f0, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e205c) {
            ctx->pc = 0x2E2078u;
            goto label_2e2078;
        }
    }
    ctx->pc = 0x2E2064u;
label_2e2064:
    // 0x2e2064: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2e2064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e2068:
    // 0x2e2068: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2e2068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e206c:
    // 0x2e206c: 0x0  nop
    ctx->pc = 0x2e206cu;
    // NOP
label_2e2070:
    // 0x2e2070: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e2074:
    if (ctx->pc == 0x2E2074u) {
        ctx->pc = 0x2E2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2070u;
        // 0x2e2074: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2078u;
        goto label_2e2078;
    }
    ctx->pc = 0x2E2070u;
    {
        const bool branch_taken_0x2e2070 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2070) {
            ctx->pc = 0x2E2074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2070u;
            // 0x2e2074: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2078u;
            goto label_2e2078;
        }
    }
    ctx->pc = 0x2E2078u;
label_2e2078:
    // 0x2e2078: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2e2078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e207c:
    // 0x2e207c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e2080:
    if (ctx->pc == 0x2E2080u) {
        ctx->pc = 0x2E2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E207Cu;
        // 0x2e2080: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2084u;
        goto label_2e2084;
    }
    ctx->pc = 0x2E207Cu;
    {
        const bool branch_taken_0x2e207c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E207Cu;
        // 0x2e2080: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e207c) {
            ctx->pc = 0x2E2094u;
            goto label_2e2094;
        }
    }
    ctx->pc = 0x2E2084u;
label_2e2084:
    // 0x2e2084: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2e2084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e2088:
    // 0x2e2088: 0x0  nop
    ctx->pc = 0x2e2088u;
    // NOP
label_2e208c:
    // 0x2e208c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e2090:
    if (ctx->pc == 0x2E2090u) {
        ctx->pc = 0x2E2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E208Cu;
        // 0x2e2090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2094u;
        goto label_2e2094;
    }
    ctx->pc = 0x2E208Cu;
    {
        const bool branch_taken_0x2e208c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e208c) {
            ctx->pc = 0x2E2090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E208Cu;
            // 0x2e2090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2094u;
            goto label_2e2094;
        }
    }
    ctx->pc = 0x2E2094u;
label_2e2094:
    // 0x2e2094: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2098:
    // 0x2e2098: 0x12720004  beq         $s3, $s2, . + 4 + (0x4 << 2)
label_2e209c:
    if (ctx->pc == 0x2E209Cu) {
        ctx->pc = 0x2E209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2098u;
        // 0x2e209c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E20A0u;
        goto label_2e20a0;
    }
    ctx->pc = 0x2E2098u;
    {
        const bool branch_taken_0x2e2098 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2098u;
        // 0x2e209c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2098) {
            ctx->pc = 0x2E20ACu;
            goto label_2e20ac;
        }
    }
    ctx->pc = 0x2E20A0u;
label_2e20a0:
    // 0x2e20a0: 0x54720034  bnel        $v1, $s2, . + 4 + (0x34 << 2)
label_2e20a4:
    if (ctx->pc == 0x2E20A4u) {
        ctx->pc = 0x2E20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20A0u;
        // 0x2e20a4: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E20A8u;
        goto label_2e20a8;
    }
    ctx->pc = 0x2E20A0u;
    {
        const bool branch_taken_0x2e20a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e20a0) {
            ctx->pc = 0x2E20A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E20A0u;
            // 0x2e20a4: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2174u;
            goto label_2e2174;
        }
    }
    ctx->pc = 0x2E20A8u;
label_2e20a8:
    // 0x2e20a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e20ac:
    // 0x2e20ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e20acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e20b0:
    // 0x2e20b0: 0xac82021c  sw          $v0, 0x21C($a0)
    ctx->pc = 0x2e20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 540), GPR_U32(ctx, 2));
label_2e20b4:
    // 0x2e20b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e20b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e20b8:
    // 0x2e20b8: 0xc0a33f8  jal         func_28CFE0
label_2e20bc:
    if (ctx->pc == 0x2E20BCu) {
        ctx->pc = 0x2E20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20B8u;
        // 0x2e20bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E20C0u;
        goto label_2e20c0;
    }
    ctx->pc = 0x2E20B8u;
    SET_GPR_U32(ctx, 31, 0x2E20C0u);
    ctx->pc = 0x2E20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20B8u;
    // 0x2e20bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2E20B8u, 0x2E20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20C0u;
label_2e20c0:
    // 0x2e20c0: 0xc0a4e54  jal         func_293950
label_2e20c4:
    if (ctx->pc == 0x2E20C4u) {
        ctx->pc = 0x2E20C8u;
        goto label_2e20c8;
    }
    ctx->pc = 0x2E20C0u;
    SET_GPR_U32(ctx, 31, 0x2E20C8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E20C0u, 0x2E20C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20C8u;
label_2e20c8:
    // 0x2e20c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e20c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e20cc:
    // 0x2e20cc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2e20d0:
    if (ctx->pc == 0x2E20D0u) {
        ctx->pc = 0x2E20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20CCu;
        // 0x2e20d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E20D4u;
        goto label_2e20d4;
    }
    ctx->pc = 0x2E20CCu;
    {
        const bool branch_taken_0x2e20cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20CCu;
        // 0x2e20d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20cc) {
            ctx->pc = 0x2E20E4u;
            goto label_2e20e4;
        }
    }
    ctx->pc = 0x2E20D4u;
label_2e20d4:
    // 0x2e20d4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e20d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e20d8:
    // 0x2e20d8: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2e20d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2e20dc:
    // 0x2e20dc: 0xc0ab784  jal         func_2ADE10
label_2e20e0:
    if (ctx->pc == 0x2E20E0u) {
        ctx->pc = 0x2E20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20DCu;
        // 0x2e20e0: 0x240707d0  addiu       $a3, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E20E4u;
        goto label_2e20e4;
    }
    ctx->pc = 0x2E20DCu;
    SET_GPR_U32(ctx, 31, 0x2E20E4u);
    ctx->pc = 0x2E20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20DCu;
    // 0x2e20e0: 0x240707d0  addiu       $a3, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADE10u, 0x2E20DCu, 0x2E20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20E4u;
label_2e20e4:
    // 0x2e20e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e20e8:
    // 0x2e20e8: 0xc0a35d6  jal         func_28D758
label_2e20ec:
    if (ctx->pc == 0x2E20ECu) {
        ctx->pc = 0x2E20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20E8u;
        // 0x2e20ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E20F0u;
        goto label_2e20f0;
    }
    ctx->pc = 0x2E20E8u;
    SET_GPR_U32(ctx, 31, 0x2E20F0u);
    ctx->pc = 0x2E20ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20E8u;
    // 0x2e20ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E20E8u, 0x2E20F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20F0u;
label_2e20f0:
    // 0x2e20f0: 0x16720044  bne         $s3, $s2, . + 4 + (0x44 << 2)
label_2e20f4:
    if (ctx->pc == 0x2E20F4u) {
        ctx->pc = 0x2E20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20F0u;
        // 0x2e20f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E20F8u;
        goto label_2e20f8;
    }
    ctx->pc = 0x2E20F0u;
    {
        const bool branch_taken_0x2e20f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20F0u;
        // 0x2e20f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20f0) {
            ctx->pc = 0x2E2204u;
            goto label_2e2204;
        }
    }
    ctx->pc = 0x2E20F8u;
label_2e20f8:
    // 0x2e20f8: 0xc0a4e54  jal         func_293950
label_2e20fc:
    if (ctx->pc == 0x2E20FCu) {
        ctx->pc = 0x2E2100u;
        goto label_2e2100;
    }
    ctx->pc = 0x2E20F8u;
    SET_GPR_U32(ctx, 31, 0x2E2100u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E20F8u, 0x2E2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2100u;
label_2e2100:
    // 0x2e2100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2104:
    // 0x2e2104: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2e2108:
    if (ctx->pc == 0x2E2108u) {
        ctx->pc = 0x2E2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2104u;
        // 0x2e2108: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E210Cu;
        goto label_2e210c;
    }
    ctx->pc = 0x2E2104u;
    {
        const bool branch_taken_0x2e2104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2104) {
            ctx->pc = 0x2E2108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2104u;
            // 0x2e2108: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2138u;
            goto label_2e2138;
        }
    }
    ctx->pc = 0x2E210Cu;
label_2e210c:
    // 0x2e210c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2e210cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e2110:
    // 0x2e2110: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e2110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e2114:
    // 0x2e2114: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e2114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e2118:
    // 0x2e2118: 0x40f809  jalr        $v0
label_2e211c:
    if (ctx->pc == 0x2E211Cu) {
        ctx->pc = 0x2E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2118u;
        // 0x2e211c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2120u;
        goto label_2e2120;
    }
    ctx->pc = 0x2E2118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E2120u);
        ctx->pc = 0x2E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2118u;
        // 0x2e211c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2118u, 0x2E2120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E2120u;
label_2e2120:
    // 0x2e2120: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e2120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2124:
    // 0x2e2124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e2124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e2128:
    // 0x2e2128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e212c:
    // 0x2e212c: 0xc0abd6c  jal         func_2AF5B0
label_2e2130:
    if (ctx->pc == 0x2E2130u) {
        ctx->pc = 0x2E2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E212Cu;
        // 0x2e2130: 0x24070047  addiu       $a3, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2134u;
        goto label_2e2134;
    }
    ctx->pc = 0x2E212Cu;
    SET_GPR_U32(ctx, 31, 0x2E2134u);
    ctx->pc = 0x2E2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E212Cu;
    // 0x2e2130: 0x24070047  addiu       $a3, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x2E212Cu, 0x2E2134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2134u;
label_2e2134:
    // 0x2e2134: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e2134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2138:
    // 0x2e2138: 0xc0a35d6  jal         func_28D758
label_2e213c:
    if (ctx->pc == 0x2E213Cu) {
        ctx->pc = 0x2E213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2138u;
        // 0x2e213c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2140u;
        goto label_2e2140;
    }
    ctx->pc = 0x2E2138u;
    SET_GPR_U32(ctx, 31, 0x2E2140u);
    ctx->pc = 0x2E213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2138u;
    // 0x2e213c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E2138u, 0x2E2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2140u;
label_2e2140:
    // 0x2e2140: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e2140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e2144:
    // 0x2e2144: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2e2144u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2e2148:
    // 0x2e2148: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2e214c:
    if (ctx->pc == 0x2E214Cu) {
        ctx->pc = 0x2E214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2148u;
        // 0x2e214c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2150u;
        goto label_2e2150;
    }
    ctx->pc = 0x2E2148u;
    {
        const bool branch_taken_0x2e2148 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e2148) {
            ctx->pc = 0x2E214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2148u;
            // 0x2e214c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E215Cu;
            goto label_2e215c;
        }
    }
    ctx->pc = 0x2E2150u;
label_2e2150:
    // 0x2e2150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e2150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e2154:
    // 0x2e2154: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e2154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e2158:
    // 0x2e2158: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2e2158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2e215c:
    // 0x2e215c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2e215cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2e2160:
    // 0x2e2160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e2164:
    // 0x2e2164: 0x0  nop
    ctx->pc = 0x2e2164u;
    // NOP
label_2e2168:
    // 0x2e2168: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2e2168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_2e216c:
    // 0x2e216c: 0x10000025  b           . + 4 + (0x25 << 2)
label_2e2170:
    if (ctx->pc == 0x2E2170u) {
        ctx->pc = 0x2E2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E216Cu;
        // 0x2e2170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2174u;
        goto label_2e2174;
    }
    ctx->pc = 0x2E216Cu;
    {
        const bool branch_taken_0x2e216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E216Cu;
        // 0x2e2170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e216c) {
            ctx->pc = 0x2E2204u;
            goto label_2e2204;
        }
    }
    ctx->pc = 0x2E2174u;
label_2e2174:
    // 0x2e2174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e2178:
    // 0x2e2178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e217c:
    // 0x2e217c: 0x0  nop
    ctx->pc = 0x2e217cu;
    // NOP
label_2e2180:
    // 0x2e2180: 0x0  nop
    ctx->pc = 0x2e2180u;
    // NOP
label_2e2184:
    // 0x2e2184: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e2184u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2e2188:
    // 0x2e2188: 0x46000d29  min.s       $f20, $f1, $f0
    ctx->pc = 0x2e2188u;
    ctx->f[20] = std::min(ctx->f[1], ctx->f[0]);
label_2e218c:
    // 0x2e218c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e2190:
    if (ctx->pc == 0x2E2190u) {
        ctx->pc = 0x2E2194u;
        goto label_2e2194;
    }
    ctx->pc = 0x2E218Cu;
    {
        const bool branch_taken_0x2e218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e218c) {
            ctx->pc = 0x2E21A8u;
            goto label_2e21a8;
        }
    }
    ctx->pc = 0x2E2194u;
label_2e2194:
    // 0x2e2194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e2198:
    // 0x2e2198: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e219c:
    // 0x2e219c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e219cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2e21a0:
    // 0x2e21a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e21a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e21a4:
    // 0x2e21a4: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x2e21a4u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
label_2e21a8:
    // 0x2e21a8: 0xc08bfbc  jal         func_22FEF0
label_2e21ac:
    if (ctx->pc == 0x2E21ACu) {
        ctx->pc = 0x2E21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21A8u;
        // 0x2e21ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E21B0u;
        goto label_2e21b0;
    }
    ctx->pc = 0x2E21A8u;
    SET_GPR_U32(ctx, 31, 0x2E21B0u);
    ctx->pc = 0x2E21ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21A8u;
    // 0x2e21ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2E21A8u, 0x2E21B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21B0u;
label_2e21b0:
    // 0x2e21b0: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2e21b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2e21b4:
    // 0x2e21b4: 0xc08ab90  jal         func_22AE40
label_2e21b8:
    if (ctx->pc == 0x2E21B8u) {
        ctx->pc = 0x2E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21B4u;
        // 0x2e21b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E21BCu;
        goto label_2e21bc;
    }
    ctx->pc = 0x2E21B4u;
    SET_GPR_U32(ctx, 31, 0x2E21BCu);
    ctx->pc = 0x2E21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21B4u;
    // 0x2e21b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2E21B4u, 0x2E21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21BCu;
label_2e21bc:
    // 0x2e21bc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2e21bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e21c0:
    // 0x2e21c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e21c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e21c4:
    // 0x2e21c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e21c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e21c8:
    // 0x2e21c8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2e21c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2e21cc:
    // 0x2e21cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e21ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e21d0:
    // 0x2e21d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e21d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e21d4:
    // 0x2e21d4: 0xc0a7dc4  jal         func_29F710
label_2e21d8:
    if (ctx->pc == 0x2E21D8u) {
        ctx->pc = 0x2E21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21D4u;
        // 0x2e21d8: 0xe6200034  swc1        $f0, 0x34($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E21DCu;
        goto label_2e21dc;
    }
    ctx->pc = 0x2E21D4u;
    SET_GPR_U32(ctx, 31, 0x2E21DCu);
    ctx->pc = 0x2E21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21D4u;
    // 0x2e21d8: 0xe6200034  swc1        $f0, 0x34($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F710u, 0x2E21D4u, 0x2E21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21DCu;
label_2e21dc:
    // 0x2e21dc: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x2e21dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e21e0:
    // 0x2e21e0: 0xc10b1c6  jal         func_42C718
label_2e21e4:
    if (ctx->pc == 0x2E21E4u) {
        ctx->pc = 0x2E21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21E0u;
        // 0x2e21e4: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E21E8u;
        goto label_2e21e8;
    }
    ctx->pc = 0x2E21E0u;
    SET_GPR_U32(ctx, 31, 0x2E21E8u);
    ctx->pc = 0x2E21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21E0u;
    // 0x2e21e4: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2E21E0u, 0x2E21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21E8u;
label_2e21e8:
    // 0x2e21e8: 0x92250039  lbu         $a1, 0x39($s1)
    ctx->pc = 0x2e21e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2e21ec:
    // 0x2e21ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e21ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e21f0:
    // 0x2e21f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2e21f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2e21f4:
    // 0x2e21f4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2e21f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2e21f8:
    // 0x2e21f8: 0xc0a337e  jal         func_28CDF8
label_2e21fc:
    if (ctx->pc == 0x2E21FCu) {
        ctx->pc = 0x2E21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21F8u;
        // 0x2e21fc: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2200u;
        goto label_2e2200;
    }
    ctx->pc = 0x2E21F8u;
    SET_GPR_U32(ctx, 31, 0x2E2200u);
    ctx->pc = 0x2E21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21F8u;
    // 0x2e21fc: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E21F8u, 0x2E2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2200u;
label_2e2200:
    // 0x2e2200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2204:
    // 0x2e2204: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2e2204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2e2208:
    // 0x2e2208: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2e2208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e220c:
    // 0x2e220c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2e220cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e2210:
    // 0x2e2210: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2e2210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e2214:
    // 0x2e2214: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2e2214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e2218:
    // 0x2e2218: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2e2218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e221c:
    // 0x2e221c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e221cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e2220:
    // 0x2e2220: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2e2220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e2224:
    // 0x2e2224: 0x3e00008  jr          $ra
label_2e2228:
    if (ctx->pc == 0x2E2228u) {
        ctx->pc = 0x2E2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2224u;
        // 0x2e2228: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E222Cu;
        goto label_2e222c;
    }
    ctx->pc = 0x2E2224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2224u;
        // 0x2e2228: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E222Cu;
label_2e222c:
    // 0x2e222c: 0x0  nop
    ctx->pc = 0x2e222cu;
    // NOP
    ctx->pc = 0x2e2230u;
}
