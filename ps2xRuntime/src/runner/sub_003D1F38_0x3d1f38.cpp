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

// Function: sub_003D1F38
// Address: 0x3d1f38 - 0x3d2320
void sub_003D1F38_0x3d1f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1F38_0x3d1f38");
#endif

    switch (ctx->pc) {
        case 0x3d1f38u: goto label_3d1f38;
        case 0x3d1f3cu: goto label_3d1f3c;
        case 0x3d1f40u: goto label_3d1f40;
        case 0x3d1f44u: goto label_3d1f44;
        case 0x3d1f48u: goto label_3d1f48;
        case 0x3d1f4cu: goto label_3d1f4c;
        case 0x3d1f50u: goto label_3d1f50;
        case 0x3d1f54u: goto label_3d1f54;
        case 0x3d1f58u: goto label_3d1f58;
        case 0x3d1f5cu: goto label_3d1f5c;
        case 0x3d1f60u: goto label_3d1f60;
        case 0x3d1f64u: goto label_3d1f64;
        case 0x3d1f68u: goto label_3d1f68;
        case 0x3d1f6cu: goto label_3d1f6c;
        case 0x3d1f70u: goto label_3d1f70;
        case 0x3d1f74u: goto label_3d1f74;
        case 0x3d1f78u: goto label_3d1f78;
        case 0x3d1f7cu: goto label_3d1f7c;
        case 0x3d1f80u: goto label_3d1f80;
        case 0x3d1f84u: goto label_3d1f84;
        case 0x3d1f88u: goto label_3d1f88;
        case 0x3d1f8cu: goto label_3d1f8c;
        case 0x3d1f90u: goto label_3d1f90;
        case 0x3d1f94u: goto label_3d1f94;
        case 0x3d1f98u: goto label_3d1f98;
        case 0x3d1f9cu: goto label_3d1f9c;
        case 0x3d1fa0u: goto label_3d1fa0;
        case 0x3d1fa4u: goto label_3d1fa4;
        case 0x3d1fa8u: goto label_3d1fa8;
        case 0x3d1facu: goto label_3d1fac;
        case 0x3d1fb0u: goto label_3d1fb0;
        case 0x3d1fb4u: goto label_3d1fb4;
        case 0x3d1fb8u: goto label_3d1fb8;
        case 0x3d1fbcu: goto label_3d1fbc;
        case 0x3d1fc0u: goto label_3d1fc0;
        case 0x3d1fc4u: goto label_3d1fc4;
        case 0x3d1fc8u: goto label_3d1fc8;
        case 0x3d1fccu: goto label_3d1fcc;
        case 0x3d1fd0u: goto label_3d1fd0;
        case 0x3d1fd4u: goto label_3d1fd4;
        case 0x3d1fd8u: goto label_3d1fd8;
        case 0x3d1fdcu: goto label_3d1fdc;
        case 0x3d1fe0u: goto label_3d1fe0;
        case 0x3d1fe4u: goto label_3d1fe4;
        case 0x3d1fe8u: goto label_3d1fe8;
        case 0x3d1fecu: goto label_3d1fec;
        case 0x3d1ff0u: goto label_3d1ff0;
        case 0x3d1ff4u: goto label_3d1ff4;
        case 0x3d1ff8u: goto label_3d1ff8;
        case 0x3d1ffcu: goto label_3d1ffc;
        case 0x3d2000u: goto label_3d2000;
        case 0x3d2004u: goto label_3d2004;
        case 0x3d2008u: goto label_3d2008;
        case 0x3d200cu: goto label_3d200c;
        case 0x3d2010u: goto label_3d2010;
        case 0x3d2014u: goto label_3d2014;
        case 0x3d2018u: goto label_3d2018;
        case 0x3d201cu: goto label_3d201c;
        case 0x3d2020u: goto label_3d2020;
        case 0x3d2024u: goto label_3d2024;
        case 0x3d2028u: goto label_3d2028;
        case 0x3d202cu: goto label_3d202c;
        case 0x3d2030u: goto label_3d2030;
        case 0x3d2034u: goto label_3d2034;
        case 0x3d2038u: goto label_3d2038;
        case 0x3d203cu: goto label_3d203c;
        case 0x3d2040u: goto label_3d2040;
        case 0x3d2044u: goto label_3d2044;
        case 0x3d2048u: goto label_3d2048;
        case 0x3d204cu: goto label_3d204c;
        case 0x3d2050u: goto label_3d2050;
        case 0x3d2054u: goto label_3d2054;
        case 0x3d2058u: goto label_3d2058;
        case 0x3d205cu: goto label_3d205c;
        case 0x3d2060u: goto label_3d2060;
        case 0x3d2064u: goto label_3d2064;
        case 0x3d2068u: goto label_3d2068;
        case 0x3d206cu: goto label_3d206c;
        case 0x3d2070u: goto label_3d2070;
        case 0x3d2074u: goto label_3d2074;
        case 0x3d2078u: goto label_3d2078;
        case 0x3d207cu: goto label_3d207c;
        case 0x3d2080u: goto label_3d2080;
        case 0x3d2084u: goto label_3d2084;
        case 0x3d2088u: goto label_3d2088;
        case 0x3d208cu: goto label_3d208c;
        case 0x3d2090u: goto label_3d2090;
        case 0x3d2094u: goto label_3d2094;
        case 0x3d2098u: goto label_3d2098;
        case 0x3d209cu: goto label_3d209c;
        case 0x3d20a0u: goto label_3d20a0;
        case 0x3d20a4u: goto label_3d20a4;
        case 0x3d20a8u: goto label_3d20a8;
        case 0x3d20acu: goto label_3d20ac;
        case 0x3d20b0u: goto label_3d20b0;
        case 0x3d20b4u: goto label_3d20b4;
        case 0x3d20b8u: goto label_3d20b8;
        case 0x3d20bcu: goto label_3d20bc;
        case 0x3d20c0u: goto label_3d20c0;
        case 0x3d20c4u: goto label_3d20c4;
        case 0x3d20c8u: goto label_3d20c8;
        case 0x3d20ccu: goto label_3d20cc;
        case 0x3d20d0u: goto label_3d20d0;
        case 0x3d20d4u: goto label_3d20d4;
        case 0x3d20d8u: goto label_3d20d8;
        case 0x3d20dcu: goto label_3d20dc;
        case 0x3d20e0u: goto label_3d20e0;
        case 0x3d20e4u: goto label_3d20e4;
        case 0x3d20e8u: goto label_3d20e8;
        case 0x3d20ecu: goto label_3d20ec;
        case 0x3d20f0u: goto label_3d20f0;
        case 0x3d20f4u: goto label_3d20f4;
        case 0x3d20f8u: goto label_3d20f8;
        case 0x3d20fcu: goto label_3d20fc;
        case 0x3d2100u: goto label_3d2100;
        case 0x3d2104u: goto label_3d2104;
        case 0x3d2108u: goto label_3d2108;
        case 0x3d210cu: goto label_3d210c;
        case 0x3d2110u: goto label_3d2110;
        case 0x3d2114u: goto label_3d2114;
        case 0x3d2118u: goto label_3d2118;
        case 0x3d211cu: goto label_3d211c;
        case 0x3d2120u: goto label_3d2120;
        case 0x3d2124u: goto label_3d2124;
        case 0x3d2128u: goto label_3d2128;
        case 0x3d212cu: goto label_3d212c;
        case 0x3d2130u: goto label_3d2130;
        case 0x3d2134u: goto label_3d2134;
        case 0x3d2138u: goto label_3d2138;
        case 0x3d213cu: goto label_3d213c;
        case 0x3d2140u: goto label_3d2140;
        case 0x3d2144u: goto label_3d2144;
        case 0x3d2148u: goto label_3d2148;
        case 0x3d214cu: goto label_3d214c;
        case 0x3d2150u: goto label_3d2150;
        case 0x3d2154u: goto label_3d2154;
        case 0x3d2158u: goto label_3d2158;
        case 0x3d215cu: goto label_3d215c;
        case 0x3d2160u: goto label_3d2160;
        case 0x3d2164u: goto label_3d2164;
        case 0x3d2168u: goto label_3d2168;
        case 0x3d216cu: goto label_3d216c;
        case 0x3d2170u: goto label_3d2170;
        case 0x3d2174u: goto label_3d2174;
        case 0x3d2178u: goto label_3d2178;
        case 0x3d217cu: goto label_3d217c;
        case 0x3d2180u: goto label_3d2180;
        case 0x3d2184u: goto label_3d2184;
        case 0x3d2188u: goto label_3d2188;
        case 0x3d218cu: goto label_3d218c;
        case 0x3d2190u: goto label_3d2190;
        case 0x3d2194u: goto label_3d2194;
        case 0x3d2198u: goto label_3d2198;
        case 0x3d219cu: goto label_3d219c;
        case 0x3d21a0u: goto label_3d21a0;
        case 0x3d21a4u: goto label_3d21a4;
        case 0x3d21a8u: goto label_3d21a8;
        case 0x3d21acu: goto label_3d21ac;
        case 0x3d21b0u: goto label_3d21b0;
        case 0x3d21b4u: goto label_3d21b4;
        case 0x3d21b8u: goto label_3d21b8;
        case 0x3d21bcu: goto label_3d21bc;
        case 0x3d21c0u: goto label_3d21c0;
        case 0x3d21c4u: goto label_3d21c4;
        case 0x3d21c8u: goto label_3d21c8;
        case 0x3d21ccu: goto label_3d21cc;
        case 0x3d21d0u: goto label_3d21d0;
        case 0x3d21d4u: goto label_3d21d4;
        case 0x3d21d8u: goto label_3d21d8;
        case 0x3d21dcu: goto label_3d21dc;
        case 0x3d21e0u: goto label_3d21e0;
        case 0x3d21e4u: goto label_3d21e4;
        case 0x3d21e8u: goto label_3d21e8;
        case 0x3d21ecu: goto label_3d21ec;
        case 0x3d21f0u: goto label_3d21f0;
        case 0x3d21f4u: goto label_3d21f4;
        case 0x3d21f8u: goto label_3d21f8;
        case 0x3d21fcu: goto label_3d21fc;
        case 0x3d2200u: goto label_3d2200;
        case 0x3d2204u: goto label_3d2204;
        case 0x3d2208u: goto label_3d2208;
        case 0x3d220cu: goto label_3d220c;
        case 0x3d2210u: goto label_3d2210;
        case 0x3d2214u: goto label_3d2214;
        case 0x3d2218u: goto label_3d2218;
        case 0x3d221cu: goto label_3d221c;
        case 0x3d2220u: goto label_3d2220;
        case 0x3d2224u: goto label_3d2224;
        case 0x3d2228u: goto label_3d2228;
        case 0x3d222cu: goto label_3d222c;
        case 0x3d2230u: goto label_3d2230;
        case 0x3d2234u: goto label_3d2234;
        case 0x3d2238u: goto label_3d2238;
        case 0x3d223cu: goto label_3d223c;
        case 0x3d2240u: goto label_3d2240;
        case 0x3d2244u: goto label_3d2244;
        case 0x3d2248u: goto label_3d2248;
        case 0x3d224cu: goto label_3d224c;
        case 0x3d2250u: goto label_3d2250;
        case 0x3d2254u: goto label_3d2254;
        case 0x3d2258u: goto label_3d2258;
        case 0x3d225cu: goto label_3d225c;
        case 0x3d2260u: goto label_3d2260;
        case 0x3d2264u: goto label_3d2264;
        case 0x3d2268u: goto label_3d2268;
        case 0x3d226cu: goto label_3d226c;
        case 0x3d2270u: goto label_3d2270;
        case 0x3d2274u: goto label_3d2274;
        case 0x3d2278u: goto label_3d2278;
        case 0x3d227cu: goto label_3d227c;
        case 0x3d2280u: goto label_3d2280;
        case 0x3d2284u: goto label_3d2284;
        case 0x3d2288u: goto label_3d2288;
        case 0x3d228cu: goto label_3d228c;
        case 0x3d2290u: goto label_3d2290;
        case 0x3d2294u: goto label_3d2294;
        case 0x3d2298u: goto label_3d2298;
        case 0x3d229cu: goto label_3d229c;
        case 0x3d22a0u: goto label_3d22a0;
        case 0x3d22a4u: goto label_3d22a4;
        case 0x3d22a8u: goto label_3d22a8;
        case 0x3d22acu: goto label_3d22ac;
        case 0x3d22b0u: goto label_3d22b0;
        case 0x3d22b4u: goto label_3d22b4;
        case 0x3d22b8u: goto label_3d22b8;
        case 0x3d22bcu: goto label_3d22bc;
        case 0x3d22c0u: goto label_3d22c0;
        case 0x3d22c4u: goto label_3d22c4;
        case 0x3d22c8u: goto label_3d22c8;
        case 0x3d22ccu: goto label_3d22cc;
        case 0x3d22d0u: goto label_3d22d0;
        case 0x3d22d4u: goto label_3d22d4;
        case 0x3d22d8u: goto label_3d22d8;
        case 0x3d22dcu: goto label_3d22dc;
        case 0x3d22e0u: goto label_3d22e0;
        case 0x3d22e4u: goto label_3d22e4;
        case 0x3d22e8u: goto label_3d22e8;
        case 0x3d22ecu: goto label_3d22ec;
        case 0x3d22f0u: goto label_3d22f0;
        case 0x3d22f4u: goto label_3d22f4;
        case 0x3d22f8u: goto label_3d22f8;
        case 0x3d22fcu: goto label_3d22fc;
        case 0x3d2300u: goto label_3d2300;
        case 0x3d2304u: goto label_3d2304;
        case 0x3d2308u: goto label_3d2308;
        case 0x3d230cu: goto label_3d230c;
        case 0x3d2310u: goto label_3d2310;
        case 0x3d2314u: goto label_3d2314;
        case 0x3d2318u: goto label_3d2318;
        case 0x3d231cu: goto label_3d231c;
        default: break;
    }

    ctx->pc = 0x3d1f38u;

label_3d1f38:
    // 0x3d1f38: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3d1f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3d1f3c:
    // 0x3d1f3c: 0x7fb108c0  sq          $s1, 0x8C0($sp)
    ctx->pc = 0x3d1f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 17));
label_3d1f40:
    // 0x3d1f40: 0x7fb208b0  sq          $s2, 0x8B0($sp)
    ctx->pc = 0x3d1f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 18));
label_3d1f44:
    // 0x3d1f44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d1f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d1f48:
    // 0x3d1f48: 0x7fb008d0  sq          $s0, 0x8D0($sp)
    ctx->pc = 0x3d1f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 16));
label_3d1f4c:
    // 0x3d1f4c: 0x7fb308a0  sq          $s3, 0x8A0($sp)
    ctx->pc = 0x3d1f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 19));
label_3d1f50:
    // 0x3d1f50: 0x7fb40890  sq          $s4, 0x890($sp)
    ctx->pc = 0x3d1f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 20));
label_3d1f54:
    // 0x3d1f54: 0xffbf0880  sd          $ra, 0x880($sp)
    ctx->pc = 0x3d1f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2176), GPR_U64(ctx, 31));
label_3d1f58:
    // 0x3d1f58: 0xe7b708f8  swc1        $f23, 0x8F8($sp)
    ctx->pc = 0x3d1f58u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2296), bits); }
label_3d1f5c:
    // 0x3d1f5c: 0xe7b608f0  swc1        $f22, 0x8F0($sp)
    ctx->pc = 0x3d1f5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2288), bits); }
label_3d1f60:
    // 0x3d1f60: 0xe7b508e8  swc1        $f21, 0x8E8($sp)
    ctx->pc = 0x3d1f60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2280), bits); }
label_3d1f64:
    // 0x3d1f64: 0xe7b408e0  swc1        $f20, 0x8E0($sp)
    ctx->pc = 0x3d1f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2272), bits); }
label_3d1f68:
    // 0x3d1f68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d1f6c:
    // 0x3d1f6c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d1f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d1f70:
    // 0x3d1f70: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d1f74:
    // 0x3d1f74: 0x40f809  jalr        $v0
label_3d1f78:
    if (ctx->pc == 0x3D1F78u) {
        ctx->pc = 0x3D1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F74u;
        // 0x3d1f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1F7Cu;
        goto label_3d1f7c;
    }
    ctx->pc = 0x3D1F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D1F7Cu);
        ctx->pc = 0x3D1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1F74u;
        // 0x3d1f78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1F74u, 0x3D1F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D1F7Cu;
label_3d1f7c:
    // 0x3d1f7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d1f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d1f80:
    // 0x3d1f80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d1f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d1f84:
    // 0x3d1f84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d1f88:
    // 0x3d1f88: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d1f8c:
    // 0x3d1f8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d1f90:
    // 0x3d1f90: 0x0  nop
    ctx->pc = 0x3d1f90u;
    // NOP
label_3d1f94:
    // 0x3d1f94: 0x0  nop
    ctx->pc = 0x3d1f94u;
    // NOP
label_3d1f98:
    // 0x3d1f98: 0x0  nop
    ctx->pc = 0x3d1f98u;
    // NOP
label_3d1f9c:
    // 0x3d1f9c: 0x0  nop
    ctx->pc = 0x3d1f9cu;
    // NOP
label_3d1fa0:
    // 0x3d1fa0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d1fa4:
    if (ctx->pc == 0x3D1FA4u) {
        ctx->pc = 0x3D1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FA0u;
        // 0x3d1fa4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1FA8u;
        goto label_3d1fa8;
    }
    ctx->pc = 0x3D1FA0u;
    {
        const bool branch_taken_0x3d1fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FA0u;
        // 0x3d1fa4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fa0) {
            ctx->pc = 0x3D1F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1f90;
        }
    }
    ctx->pc = 0x3D1FA8u;
label_3d1fa8:
    // 0x3d1fa8: 0xc138ddc  jal         func_4E3770
label_3d1fac:
    if (ctx->pc == 0x3D1FACu) {
        ctx->pc = 0x3D1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FA8u;
        // 0x3d1fac: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1FB0u;
        goto label_3d1fb0;
    }
    ctx->pc = 0x3D1FA8u;
    SET_GPR_U32(ctx, 31, 0x3D1FB0u);
    ctx->pc = 0x3D1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1FA8u;
    // 0x3d1fac: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D1FA8u, 0x3D1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1FB0u;
label_3d1fb0:
    // 0x3d1fb0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d1fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d1fb4:
    // 0x3d1fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d1fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d1fb8:
    // 0x3d1fb8: 0x24a51720  addiu       $a1, $a1, 0x1720
    ctx->pc = 0x3d1fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
label_3d1fbc:
    // 0x3d1fbc: 0xc0f3222  jal         func_3CC888
label_3d1fc0:
    if (ctx->pc == 0x3D1FC0u) {
        ctx->pc = 0x3D1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FBCu;
        // 0x3d1fc0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1FC4u;
        goto label_3d1fc4;
    }
    ctx->pc = 0x3D1FBCu;
    SET_GPR_U32(ctx, 31, 0x3D1FC4u);
    ctx->pc = 0x3D1FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1FBCu;
    // 0x3d1fc0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D1FBCu, 0x3D1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1FC4u;
label_3d1fc4:
    // 0x3d1fc4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3d1fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3d1fc8:
    // 0x3d1fc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d1fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d1fcc:
    // 0x3d1fcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d1fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d1fd0:
    // 0x3d1fd0: 0x0  nop
    ctx->pc = 0x3d1fd0u;
    // NOP
label_3d1fd4:
    // 0x3d1fd4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3d1fd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d1fd8:
    // 0x3d1fd8: 0x0  nop
    ctx->pc = 0x3d1fd8u;
    // NOP
label_3d1fdc:
    // 0x3d1fdc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3d1fe0:
    if (ctx->pc == 0x3D1FE0u) {
        ctx->pc = 0x3D1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FDCu;
        // 0x3d1fe0: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1FE4u;
        goto label_3d1fe4;
    }
    ctx->pc = 0x3D1FDCu;
    {
        const bool branch_taken_0x3d1fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FDCu;
        // 0x3d1fe0: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1fdc) {
            ctx->pc = 0x3D1FFCu;
            goto label_3d1ffc;
        }
    }
    ctx->pc = 0x3D1FE4u;
label_3d1fe4:
    // 0x3d1fe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d1fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d1fe8:
    // 0x3d1fe8: 0xc136b24  jal         func_4DAC90
label_3d1fec:
    if (ctx->pc == 0x3D1FECu) {
        ctx->pc = 0x3D1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1FE8u;
        // 0x3d1fec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D1FF0u;
        goto label_3d1ff0;
    }
    ctx->pc = 0x3D1FE8u;
    SET_GPR_U32(ctx, 31, 0x3D1FF0u);
    ctx->pc = 0x3D1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1FE8u;
    // 0x3d1fec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D1FE8u, 0x3D1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1FF0u;
label_3d1ff0:
    // 0x3d1ff0: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d1ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d1ff4:
    // 0x3d1ff4: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3d1ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3d1ff8:
    // 0x3d1ff8: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d1ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d1ffc:
    // 0x3d1ffc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3d1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3d2000:
    // 0x3d2000: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d2004:
    // 0x3d2004: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3d2008:
    if (ctx->pc == 0x3D2008u) {
        ctx->pc = 0x3D2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2004u;
        // 0x3d2008: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D200Cu;
        goto label_3d200c;
    }
    ctx->pc = 0x3D2004u;
    {
        const bool branch_taken_0x3d2004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2004u;
        // 0x3d2008: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2004) {
            ctx->pc = 0x3D201Cu;
            goto label_3d201c;
        }
    }
    ctx->pc = 0x3D200Cu;
label_3d200c:
    // 0x3d200c: 0x9623006e  lhu         $v1, 0x6E($s1)
    ctx->pc = 0x3d200cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
label_3d2010:
    // 0x3d2010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d2014:
    // 0x3d2014: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x3d2014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_3d2018:
    // 0x3d2018: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3d2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d201c:
    // 0x3d201c: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x3d201cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_3d2020:
    // 0x3d2020: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_3d2024:
    if (ctx->pc == 0x3D2024u) {
        ctx->pc = 0x3D2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2020u;
        // 0x3d2024: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2028u;
        goto label_3d2028;
    }
    ctx->pc = 0x3D2020u;
    {
        const bool branch_taken_0x3d2020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2020) {
            ctx->pc = 0x3D2024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2020u;
            // 0x3d2024: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2088u;
            goto label_3d2088;
        }
    }
    ctx->pc = 0x3D2028u;
label_3d2028:
    // 0x3d2028: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x3d2028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3d202c:
    // 0x3d202c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2030:
    // 0x3d2030: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
label_3d2034:
    if (ctx->pc == 0x3D2034u) {
        ctx->pc = 0x3D2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2030u;
        // 0x3d2034: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2038u;
        goto label_3d2038;
    }
    ctx->pc = 0x3D2030u;
    {
        const bool branch_taken_0x3d2030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d2030) {
            ctx->pc = 0x3D2034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2030u;
            // 0x3d2034: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2088u;
            goto label_3d2088;
        }
    }
    ctx->pc = 0x3D2038u;
label_3d2038:
    // 0x3d2038: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3d2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d203c:
    // 0x3d203c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3d203cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3d2040:
    // 0x3d2040: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3d2040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3d2044:
    // 0x3d2044: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d2044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d2048:
    // 0x3d2048: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x3d2048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_3d204c:
    // 0x3d204c: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3d204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d2050:
    // 0x3d2050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d2050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d2054:
    // 0x3d2054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d2054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2058:
    // 0x3d2058: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d2058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d205c:
    // 0x3d205c: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3d205cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3d2060:
    // 0x3d2060: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x3d2060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
label_3d2064:
    // 0x3d2064: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3d2064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3d2068:
    // 0x3d2068: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3d2068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3d206c:
    // 0x3d206c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3d206cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3d2070:
    // 0x3d2070: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x3d2070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
label_3d2074:
    // 0x3d2074: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d2074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d2078:
    // 0x3d2078: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x3d2078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_3d207c:
    // 0x3d207c: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3d207cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3d2080:
    // 0x3d2080: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d2080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d2084:
    // 0x3d2084: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3d2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d2088:
    // 0x3d2088: 0x284200c8  slti        $v0, $v0, 0xC8
    ctx->pc = 0x3d2088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
label_3d208c:
    // 0x3d208c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3d2090:
    if (ctx->pc == 0x3D2090u) {
        ctx->pc = 0x3D2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D208Cu;
        // 0x3d2090: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2094u;
        goto label_3d2094;
    }
    ctx->pc = 0x3D208Cu;
    {
        const bool branch_taken_0x3d208c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d208c) {
            ctx->pc = 0x3D2090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D208Cu;
            // 0x3d2090: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D20C0u;
            goto label_3d20c0;
        }
    }
    ctx->pc = 0x3D2094u;
label_3d2094:
    // 0x3d2094: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x3d2094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3d2098:
    // 0x3d2098: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3d2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3d209c:
    // 0x3d209c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_3d20a0:
    if (ctx->pc == 0x3D20A0u) {
        ctx->pc = 0x3D20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D209Cu;
        // 0x3d20a0: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D20A4u;
        goto label_3d20a4;
    }
    ctx->pc = 0x3D209Cu;
    {
        const bool branch_taken_0x3d209c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d209c) {
            ctx->pc = 0x3D20A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D209Cu;
            // 0x3d20a0: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D20C0u;
            goto label_3d20c0;
        }
    }
    ctx->pc = 0x3D20A4u;
label_3d20a4:
    // 0x3d20a4: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3d20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3d20a8:
    // 0x3d20a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d20ac:
    // 0x3d20ac: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3d20acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3d20b0:
    // 0x3d20b0: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x3d20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
label_3d20b4:
    // 0x3d20b4: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x3d20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_3d20b8:
    // 0x3d20b8: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x3d20b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_3d20bc:
    // 0x3d20bc: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3d20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d20c0:
    // 0x3d20c0: 0x2842012c  slti        $v0, $v0, 0x12C
    ctx->pc = 0x3d20c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
label_3d20c4:
    // 0x3d20c4: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_3d20c8:
    if (ctx->pc == 0x3D20C8u) {
        ctx->pc = 0x3D20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D20C4u;
        // 0x3d20c8: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D20CCu;
        goto label_3d20cc;
    }
    ctx->pc = 0x3D20C4u;
    {
        const bool branch_taken_0x3d20c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d20c4) {
            ctx->pc = 0x3D20C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D20C4u;
            // 0x3d20c8: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2150u;
            goto label_3d2150;
        }
    }
    ctx->pc = 0x3D20CCu;
label_3d20cc:
    // 0x3d20cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d20ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d20d0:
    // 0x3d20d0: 0xc0e8dee  jal         func_3A37B8
label_3d20d4:
    if (ctx->pc == 0x3D20D4u) {
        ctx->pc = 0x3D20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D20D0u;
        // 0x3d20d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D20D8u;
        goto label_3d20d8;
    }
    ctx->pc = 0x3D20D0u;
    SET_GPR_U32(ctx, 31, 0x3D20D8u);
    ctx->pc = 0x3D20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D20D0u;
    // 0x3d20d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3D20D0u, 0x3D20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D20D8u;
label_3d20d8:
    // 0x3d20d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3d20d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3d20dc:
    // 0x3d20dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d20dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d20e0:
    // 0x3d20e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d20e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d20e4:
    // 0x3d20e4: 0xc0e92d4  jal         func_3A4B50
label_3d20e8:
    if (ctx->pc == 0x3D20E8u) {
        ctx->pc = 0x3D20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D20E4u;
        // 0x3d20e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D20ECu;
        goto label_3d20ec;
    }
    ctx->pc = 0x3D20E4u;
    SET_GPR_U32(ctx, 31, 0x3D20ECu);
    ctx->pc = 0x3D20E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D20E4u;
    // 0x3d20e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B50u, 0x3D20E4u, 0x3D20ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D20ECu;
label_3d20ec:
    // 0x3d20ec: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d20ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d20f0:
    // 0x3d20f0: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3d20f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d20f4:
    // 0x3d20f4: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3d20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d20f8:
    // 0x3d20f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d20f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d20fc:
    // 0x3d20fc: 0xc0e90ca  jal         func_3A4328
label_3d2100:
    if (ctx->pc == 0x3D2100u) {
        ctx->pc = 0x3D2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D20FCu;
        // 0x3d2100: 0x26104a20  addiu       $s0, $s0, 0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2104u;
        goto label_3d2104;
    }
    ctx->pc = 0x3D20FCu;
    SET_GPR_U32(ctx, 31, 0x3D2104u);
    ctx->pc = 0x3D2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D20FCu;
    // 0x3d2100: 0x26104a20  addiu       $s0, $s0, 0x4A20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D20FCu, 0x3D2104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2104u;
label_3d2104:
    // 0x3d2104: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d2104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d2108:
    // 0x3d2108: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d2108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d210c:
    // 0x3d210c: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d210cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d2110:
    // 0x3d2110: 0x27a40860  addiu       $a0, $sp, 0x860
    ctx->pc = 0x3d2110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3d2114:
    // 0x3d2114: 0xc0e911e  jal         func_3A4478
label_3d2118:
    if (ctx->pc == 0x3D2118u) {
        ctx->pc = 0x3D2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2114u;
        // 0x3d2118: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D211Cu;
        goto label_3d211c;
    }
    ctx->pc = 0x3D2114u;
    SET_GPR_U32(ctx, 31, 0x3D211Cu);
    ctx->pc = 0x3D2118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2114u;
    // 0x3d2118: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D2114u, 0x3D211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D211Cu;
label_3d211c:
    // 0x3d211c: 0x7ba20860  lq          $v0, 0x860($sp)
    ctx->pc = 0x3d211cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_3d2120:
    // 0x3d2120: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3d2120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d2124:
    // 0x3d2124: 0x27a70870  addiu       $a3, $sp, 0x870
    ctx->pc = 0x3d2124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3d2128:
    // 0x3d2128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d2128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d212c:
    // 0x3d212c: 0xafa00870  sw          $zero, 0x870($sp)
    ctx->pc = 0x3d212cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 0));
label_3d2130:
    // 0x3d2130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d2134:
    // 0x3d2134: 0xc0e9fa6  jal         func_3A7E98
label_3d2138:
    if (ctx->pc == 0x3D2138u) {
        ctx->pc = 0x3D2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2134u;
        // 0x3d2138: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D213Cu;
        goto label_3d213c;
    }
    ctx->pc = 0x3D2134u;
    SET_GPR_U32(ctx, 31, 0x3D213Cu);
    ctx->pc = 0x3D2138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2134u;
    // 0x3d2138: 0x7fa20850  sq          $v0, 0x850($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D2134u, 0x3D213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D213Cu;
label_3d213c:
    // 0x3d213c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2140:
    // 0x3d2140: 0xc0f15bc  jal         func_3C56F0
label_3d2144:
    if (ctx->pc == 0x3D2144u) {
        ctx->pc = 0x3D2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2140u;
        // 0x3d2144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2148u;
        goto label_3d2148;
    }
    ctx->pc = 0x3D2140u;
    SET_GPR_U32(ctx, 31, 0x3D2148u);
    ctx->pc = 0x3D2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2140u;
    // 0x3d2144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D2140u, 0x3D2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2148u;
label_3d2148:
    // 0x3d2148: 0x10000069  b           . + 4 + (0x69 << 2)
label_3d214c:
    if (ctx->pc == 0x3D214Cu) {
        ctx->pc = 0x3D214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2148u;
        // 0x3d214c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2150u;
        goto label_3d2150;
    }
    ctx->pc = 0x3D2148u;
    {
        const bool branch_taken_0x3d2148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2148u;
        // 0x3d214c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2148) {
            ctx->pc = 0x3D22F0u;
            goto label_3d22f0;
        }
    }
    ctx->pc = 0x3D2150u;
label_3d2150:
    // 0x3d2150: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x3d2150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d2154:
    // 0x3d2154: 0x54540011  bnel        $v0, $s4, . + 4 + (0x11 << 2)
label_3d2158:
    if (ctx->pc == 0x3D2158u) {
        ctx->pc = 0x3D2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2154u;
        // 0x3d2158: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D215Cu;
        goto label_3d215c;
    }
    ctx->pc = 0x3D2154u;
    {
        const bool branch_taken_0x3d2154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3d2154) {
            ctx->pc = 0x3D2158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2154u;
            // 0x3d2158: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D219Cu;
            goto label_3d219c;
        }
    }
    ctx->pc = 0x3D215Cu;
label_3d215c:
    // 0x3d215c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x3d215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d2160:
    // 0x3d2160: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3d2160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2164:
    // 0x3d2164: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x3d2164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d2168:
    // 0x3d2168: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3d2168u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3d216c:
    // 0x3d216c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3d216cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3d2170:
    // 0x3d2170: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x3d2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d2174:
    // 0x3d2174: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3d2174u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_3d2178:
    // 0x3d2178: 0xe7a00430  swc1        $f0, 0x430($sp)
    ctx->pc = 0x3d2178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3d217c:
    // 0x3d217c: 0xe7a10434  swc1        $f1, 0x434($sp)
    ctx->pc = 0x3d217cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3d2180:
    // 0x3d2180: 0xe7a20438  swc1        $f2, 0x438($sp)
    ctx->pc = 0x3d2180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3d2184:
    // 0x3d2184: 0xe7a3043c  swc1        $f3, 0x43C($sp)
    ctx->pc = 0x3d2184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3d2188:
    // 0x3d2188: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d2188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d218c:
    // 0x3d218c: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3d218cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3d2190:
    // 0x3d2190: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d2190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d2194:
    // 0x3d2194: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x3d2194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_3d2198:
    // 0x3d2198: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3d2198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3d219c:
    // 0x3d219c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3d219cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d21a0:
    // 0x3d21a0: 0x54530029  bnel        $v0, $s3, . + 4 + (0x29 << 2)
label_3d21a4:
    if (ctx->pc == 0x3D21A4u) {
        ctx->pc = 0x3D21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D21A0u;
        // 0x3d21a4: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D21A8u;
        goto label_3d21a8;
    }
    ctx->pc = 0x3D21A0u;
    {
        const bool branch_taken_0x3d21a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3d21a0) {
            ctx->pc = 0x3D21A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D21A0u;
            // 0x3d21a4: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2248u;
            goto label_3d2248;
        }
    }
    ctx->pc = 0x3D21A8u;
label_3d21a8:
    // 0x3d21a8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3d21a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3d21ac:
    // 0x3d21ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3d21acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3d21b0:
    // 0x3d21b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3d21b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d21b4:
    // 0x3d21b4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3d21b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3d21b8:
    // 0x3d21b8: 0x3c01c0c9  lui         $at, 0xC0C9
    ctx->pc = 0x3d21b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49353 << 16));
label_3d21bc:
    // 0x3d21bc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3d21bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3d21c0:
    // 0x3d21c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d21c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d21c4:
    // 0x3d21c4: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3d21c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3d21c8:
    // 0x3d21c8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d21c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d21cc:
    // 0x3d21cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d21ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d21d0:
    // 0x3d21d0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3d21d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3d21d4:
    // 0x3d21d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d21d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d21d8:
    // 0x3d21d8: 0xc0cd518  jal         func_335460
label_3d21dc:
    if (ctx->pc == 0x3D21DCu) {
        ctx->pc = 0x3D21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D21D8u;
        // 0x3d21dc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D21E0u;
        goto label_3d21e0;
    }
    ctx->pc = 0x3D21D8u;
    SET_GPR_U32(ctx, 31, 0x3D21E0u);
    ctx->pc = 0x3D21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D21D8u;
    // 0x3d21dc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D21D8u, 0x3D21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D21E0u;
label_3d21e0:
    // 0x3d21e0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3d21e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3d21e4:
    // 0x3d21e4: 0x461405c2  mul.s       $f23, $f0, $f20
    ctx->pc = 0x3d21e4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3d21e8:
    // 0x3d21e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3d21e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3d21ec:
    // 0x3d21ec: 0xc0cd518  jal         func_335460
label_3d21f0:
    if (ctx->pc == 0x3D21F0u) {
        ctx->pc = 0x3D21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D21ECu;
        // 0x3d21f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D21F4u;
        goto label_3d21f4;
    }
    ctx->pc = 0x3D21ECu;
    SET_GPR_U32(ctx, 31, 0x3D21F4u);
    ctx->pc = 0x3D21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D21ECu;
    // 0x3d21f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D21ECu, 0x3D21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D21F4u;
label_3d21f4:
    // 0x3d21f4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3d21f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3d21f8:
    // 0x3d21f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3d21f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3d21fc:
    // 0x3d21fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d21fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d2200:
    // 0x3d2200: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x3d2200u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3d2204:
    // 0x3d2204: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3d2204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3d2208:
    // 0x3d2208: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3d2208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3d220c:
    // 0x3d220c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3d220cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3d2210:
    // 0x3d2210: 0xc0cd518  jal         func_335460
label_3d2214:
    if (ctx->pc == 0x3D2214u) {
        ctx->pc = 0x3D2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2210u;
        // 0x3d2214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2218u;
        goto label_3d2218;
    }
    ctx->pc = 0x3D2210u;
    SET_GPR_U32(ctx, 31, 0x3D2218u);
    ctx->pc = 0x3D2214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2210u;
    // 0x3d2214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3D2210u, 0x3D2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2218u;
label_3d2218:
    // 0x3d2218: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3d2218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3d221c:
    // 0x3d221c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d221cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d2220:
    // 0x3d2220: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d2220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d2224:
    // 0x3d2224: 0xe7b70430  swc1        $f23, 0x430($sp)
    ctx->pc = 0x3d2224u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3d2228:
    // 0x3d2228: 0xe7b50434  swc1        $f21, 0x434($sp)
    ctx->pc = 0x3d2228u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3d222c:
    // 0x3d222c: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x3d222cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3d2230:
    // 0x3d2230: 0xe7a1043c  swc1        $f1, 0x43C($sp)
    ctx->pc = 0x3d2230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_3d2234:
    // 0x3d2234: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d2234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d2238:
    // 0x3d2238: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3d2238u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3d223c:
    // 0x3d223c: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d2240:
    // 0x3d2240: 0xae54002c  sw          $s4, 0x2C($s2)
    ctx->pc = 0x3d2240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 20));
label_3d2244:
    // 0x3d2244: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3d2244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3d2248:
    // 0x3d2248: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3d224c:
    if (ctx->pc == 0x3D224Cu) {
        ctx->pc = 0x3D224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2248u;
        // 0x3d224c: 0xae53002c  sw          $s3, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2250u;
        goto label_3d2250;
    }
    ctx->pc = 0x3D2248u;
    {
        const bool branch_taken_0x3d2248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2248) {
            ctx->pc = 0x3D224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2248u;
            // 0x3d224c: 0xae53002c  sw          $s3, 0x2C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2250u;
            goto label_3d2250;
        }
    }
    ctx->pc = 0x3D2250u;
label_3d2250:
    // 0x3d2250: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d2254:
    // 0x3d2254: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3d2254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3d2258:
    // 0x3d2258: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d2258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d225c:
    // 0x3d225c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d2260:
    if (ctx->pc == 0x3D2260u) {
        ctx->pc = 0x3D2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D225Cu;
        // 0x3d2260: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2264u;
        goto label_3d2264;
    }
    ctx->pc = 0x3D225Cu;
    {
        const bool branch_taken_0x3d225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D225Cu;
        // 0x3d2260: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d225c) {
            ctx->pc = 0x3D2298u;
            goto label_3d2298;
        }
    }
    ctx->pc = 0x3D2264u;
label_3d2264:
    // 0x3d2264: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3d2264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3d2268:
    // 0x3d2268: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x3d2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_3d226c:
    // 0x3d226c: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d2270:
    // 0x3d2270: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3d2270u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d2274:
    // 0x3d2274: 0xc0f3222  jal         func_3CC888
label_3d2278:
    if (ctx->pc == 0x3D2278u) {
        ctx->pc = 0x3D2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2274u;
        // 0x3d2278: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D227Cu;
        goto label_3d227c;
    }
    ctx->pc = 0x3D2274u;
    SET_GPR_U32(ctx, 31, 0x3D227Cu);
    ctx->pc = 0x3D2278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2274u;
    // 0x3d2278: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D2274u, 0x3D227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D227Cu;
label_3d227c:
    // 0x3d227c: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x3d227cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_3d2280:
    // 0x3d2280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d2280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d2284:
    // 0x3d2284: 0x0  nop
    ctx->pc = 0x3d2284u;
    // NOP
label_3d2288:
    // 0x3d2288: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d2288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d228c:
    // 0x3d228c: 0x0  nop
    ctx->pc = 0x3d228cu;
    // NOP
label_3d2290:
    // 0x3d2290: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_3d2294:
    if (ctx->pc == 0x3D2294u) {
        ctx->pc = 0x3D2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2290u;
        // 0x3d2294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2298u;
        goto label_3d2298;
    }
    ctx->pc = 0x3D2290u;
    {
        const bool branch_taken_0x3d2290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2290u;
        // 0x3d2294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2290) {
            ctx->pc = 0x3D22F0u;
            goto label_3d22f0;
        }
    }
    ctx->pc = 0x3D2298u;
label_3d2298:
    // 0x3d2298: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d2298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d229c:
    // 0x3d229c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x3d229cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_3d22a0:
    // 0x3d22a0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3d22a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_3d22a4:
    // 0x3d22a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3d22a8:
    if (ctx->pc == 0x3D22A8u) {
        ctx->pc = 0x3D22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22A4u;
        // 0x3d22a8: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D22ACu;
        goto label_3d22ac;
    }
    ctx->pc = 0x3D22A4u;
    {
        const bool branch_taken_0x3d22a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22A4u;
        // 0x3d22a8: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d22a4) {
            ctx->pc = 0x3D22ECu;
            goto label_3d22ec;
        }
    }
    ctx->pc = 0x3D22ACu;
label_3d22ac:
    // 0x3d22ac: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3d22b0:
    // 0x3d22b0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3d22b4:
    if (ctx->pc == 0x3D22B4u) {
        ctx->pc = 0x3D22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22B0u;
        // 0x3d22b4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D22B8u;
        goto label_3d22b8;
    }
    ctx->pc = 0x3D22B0u;
    {
        const bool branch_taken_0x3d22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22B0u;
        // 0x3d22b4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d22b0) {
            ctx->pc = 0x3D22C8u;
            goto label_3d22c8;
        }
    }
    ctx->pc = 0x3D22B8u;
label_3d22b8:
    // 0x3d22b8: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3d22b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3d22bc:
    // 0x3d22bc: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x3d22bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
label_3d22c0:
    // 0x3d22c0: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x3d22c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_3d22c4:
    // 0x3d22c4: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x3d22c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_3d22c8:
    // 0x3d22c8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d22cc:
    // 0x3d22cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d22ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d22d0:
    // 0x3d22d0: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x3d22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d22d4:
    // 0x3d22d4: 0x38420080  xori        $v0, $v0, 0x80
    ctx->pc = 0x3d22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)128);
label_3d22d8:
    // 0x3d22d8: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x3d22d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_3d22dc:
    // 0x3d22dc: 0xc0e92f4  jal         func_3A4BD0
label_3d22e0:
    if (ctx->pc == 0x3D22E0u) {
        ctx->pc = 0x3D22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D22DCu;
        // 0x3d22e0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D22E4u;
        goto label_3d22e4;
    }
    ctx->pc = 0x3D22DCu;
    SET_GPR_U32(ctx, 31, 0x3D22E4u);
    ctx->pc = 0x3D22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D22DCu;
    // 0x3d22e0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3D22DCu, 0x3D22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D22E4u;
label_3d22e4:
    // 0x3d22e4: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3d22e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d22e8:
    // 0x3d22e8: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3d22e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3d22ec:
    // 0x3d22ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d22ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d22f0:
    // 0x3d22f0: 0x7bb008d0  lq          $s0, 0x8D0($sp)
    ctx->pc = 0x3d22f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3d22f4:
    // 0x3d22f4: 0x7bb108c0  lq          $s1, 0x8C0($sp)
    ctx->pc = 0x3d22f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3d22f8:
    // 0x3d22f8: 0x7bb208b0  lq          $s2, 0x8B0($sp)
    ctx->pc = 0x3d22f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3d22fc:
    // 0x3d22fc: 0x7bb308a0  lq          $s3, 0x8A0($sp)
    ctx->pc = 0x3d22fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3d2300:
    // 0x3d2300: 0x7bb40890  lq          $s4, 0x890($sp)
    ctx->pc = 0x3d2300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3d2304:
    // 0x3d2304: 0xdfbf0880  ld          $ra, 0x880($sp)
    ctx->pc = 0x3d2304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2176)));
label_3d2308:
    // 0x3d2308: 0xc7b708f8  lwc1        $f23, 0x8F8($sp)
    ctx->pc = 0x3d2308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d230c:
    // 0x3d230c: 0xc7b608f0  lwc1        $f22, 0x8F0($sp)
    ctx->pc = 0x3d230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d2310:
    // 0x3d2310: 0xc7b508e8  lwc1        $f21, 0x8E8($sp)
    ctx->pc = 0x3d2310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d2314:
    // 0x3d2314: 0xc7b408e0  lwc1        $f20, 0x8E0($sp)
    ctx->pc = 0x3d2314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d2318:
    // 0x3d2318: 0x3e00008  jr          $ra
label_3d231c:
    if (ctx->pc == 0x3D231Cu) {
        ctx->pc = 0x3D231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2318u;
        // 0x3d231c: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2320u;
        goto label_fallthrough_0x3d2318;
    }
    ctx->pc = 0x3D2318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2318u;
        // 0x3d231c: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d2318:
    ctx->pc = 0x3D2320u;
}
