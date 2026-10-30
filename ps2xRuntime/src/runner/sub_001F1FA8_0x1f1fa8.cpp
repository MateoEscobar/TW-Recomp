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

// Function: sub_001F1FA8
// Address: 0x1f1fa8 - 0x1f23c0
void sub_001F1FA8_0x1f1fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1FA8_0x1f1fa8");
#endif

    switch (ctx->pc) {
        case 0x1f1fa8u: goto label_1f1fa8;
        case 0x1f1facu: goto label_1f1fac;
        case 0x1f1fb0u: goto label_1f1fb0;
        case 0x1f1fb4u: goto label_1f1fb4;
        case 0x1f1fb8u: goto label_1f1fb8;
        case 0x1f1fbcu: goto label_1f1fbc;
        case 0x1f1fc0u: goto label_1f1fc0;
        case 0x1f1fc4u: goto label_1f1fc4;
        case 0x1f1fc8u: goto label_1f1fc8;
        case 0x1f1fccu: goto label_1f1fcc;
        case 0x1f1fd0u: goto label_1f1fd0;
        case 0x1f1fd4u: goto label_1f1fd4;
        case 0x1f1fd8u: goto label_1f1fd8;
        case 0x1f1fdcu: goto label_1f1fdc;
        case 0x1f1fe0u: goto label_1f1fe0;
        case 0x1f1fe4u: goto label_1f1fe4;
        case 0x1f1fe8u: goto label_1f1fe8;
        case 0x1f1fecu: goto label_1f1fec;
        case 0x1f1ff0u: goto label_1f1ff0;
        case 0x1f1ff4u: goto label_1f1ff4;
        case 0x1f1ff8u: goto label_1f1ff8;
        case 0x1f1ffcu: goto label_1f1ffc;
        case 0x1f2000u: goto label_1f2000;
        case 0x1f2004u: goto label_1f2004;
        case 0x1f2008u: goto label_1f2008;
        case 0x1f200cu: goto label_1f200c;
        case 0x1f2010u: goto label_1f2010;
        case 0x1f2014u: goto label_1f2014;
        case 0x1f2018u: goto label_1f2018;
        case 0x1f201cu: goto label_1f201c;
        case 0x1f2020u: goto label_1f2020;
        case 0x1f2024u: goto label_1f2024;
        case 0x1f2028u: goto label_1f2028;
        case 0x1f202cu: goto label_1f202c;
        case 0x1f2030u: goto label_1f2030;
        case 0x1f2034u: goto label_1f2034;
        case 0x1f2038u: goto label_1f2038;
        case 0x1f203cu: goto label_1f203c;
        case 0x1f2040u: goto label_1f2040;
        case 0x1f2044u: goto label_1f2044;
        case 0x1f2048u: goto label_1f2048;
        case 0x1f204cu: goto label_1f204c;
        case 0x1f2050u: goto label_1f2050;
        case 0x1f2054u: goto label_1f2054;
        case 0x1f2058u: goto label_1f2058;
        case 0x1f205cu: goto label_1f205c;
        case 0x1f2060u: goto label_1f2060;
        case 0x1f2064u: goto label_1f2064;
        case 0x1f2068u: goto label_1f2068;
        case 0x1f206cu: goto label_1f206c;
        case 0x1f2070u: goto label_1f2070;
        case 0x1f2074u: goto label_1f2074;
        case 0x1f2078u: goto label_1f2078;
        case 0x1f207cu: goto label_1f207c;
        case 0x1f2080u: goto label_1f2080;
        case 0x1f2084u: goto label_1f2084;
        case 0x1f2088u: goto label_1f2088;
        case 0x1f208cu: goto label_1f208c;
        case 0x1f2090u: goto label_1f2090;
        case 0x1f2094u: goto label_1f2094;
        case 0x1f2098u: goto label_1f2098;
        case 0x1f209cu: goto label_1f209c;
        case 0x1f20a0u: goto label_1f20a0;
        case 0x1f20a4u: goto label_1f20a4;
        case 0x1f20a8u: goto label_1f20a8;
        case 0x1f20acu: goto label_1f20ac;
        case 0x1f20b0u: goto label_1f20b0;
        case 0x1f20b4u: goto label_1f20b4;
        case 0x1f20b8u: goto label_1f20b8;
        case 0x1f20bcu: goto label_1f20bc;
        case 0x1f20c0u: goto label_1f20c0;
        case 0x1f20c4u: goto label_1f20c4;
        case 0x1f20c8u: goto label_1f20c8;
        case 0x1f20ccu: goto label_1f20cc;
        case 0x1f20d0u: goto label_1f20d0;
        case 0x1f20d4u: goto label_1f20d4;
        case 0x1f20d8u: goto label_1f20d8;
        case 0x1f20dcu: goto label_1f20dc;
        case 0x1f20e0u: goto label_1f20e0;
        case 0x1f20e4u: goto label_1f20e4;
        case 0x1f20e8u: goto label_1f20e8;
        case 0x1f20ecu: goto label_1f20ec;
        case 0x1f20f0u: goto label_1f20f0;
        case 0x1f20f4u: goto label_1f20f4;
        case 0x1f20f8u: goto label_1f20f8;
        case 0x1f20fcu: goto label_1f20fc;
        case 0x1f2100u: goto label_1f2100;
        case 0x1f2104u: goto label_1f2104;
        case 0x1f2108u: goto label_1f2108;
        case 0x1f210cu: goto label_1f210c;
        case 0x1f2110u: goto label_1f2110;
        case 0x1f2114u: goto label_1f2114;
        case 0x1f2118u: goto label_1f2118;
        case 0x1f211cu: goto label_1f211c;
        case 0x1f2120u: goto label_1f2120;
        case 0x1f2124u: goto label_1f2124;
        case 0x1f2128u: goto label_1f2128;
        case 0x1f212cu: goto label_1f212c;
        case 0x1f2130u: goto label_1f2130;
        case 0x1f2134u: goto label_1f2134;
        case 0x1f2138u: goto label_1f2138;
        case 0x1f213cu: goto label_1f213c;
        case 0x1f2140u: goto label_1f2140;
        case 0x1f2144u: goto label_1f2144;
        case 0x1f2148u: goto label_1f2148;
        case 0x1f214cu: goto label_1f214c;
        case 0x1f2150u: goto label_1f2150;
        case 0x1f2154u: goto label_1f2154;
        case 0x1f2158u: goto label_1f2158;
        case 0x1f215cu: goto label_1f215c;
        case 0x1f2160u: goto label_1f2160;
        case 0x1f2164u: goto label_1f2164;
        case 0x1f2168u: goto label_1f2168;
        case 0x1f216cu: goto label_1f216c;
        case 0x1f2170u: goto label_1f2170;
        case 0x1f2174u: goto label_1f2174;
        case 0x1f2178u: goto label_1f2178;
        case 0x1f217cu: goto label_1f217c;
        case 0x1f2180u: goto label_1f2180;
        case 0x1f2184u: goto label_1f2184;
        case 0x1f2188u: goto label_1f2188;
        case 0x1f218cu: goto label_1f218c;
        case 0x1f2190u: goto label_1f2190;
        case 0x1f2194u: goto label_1f2194;
        case 0x1f2198u: goto label_1f2198;
        case 0x1f219cu: goto label_1f219c;
        case 0x1f21a0u: goto label_1f21a0;
        case 0x1f21a4u: goto label_1f21a4;
        case 0x1f21a8u: goto label_1f21a8;
        case 0x1f21acu: goto label_1f21ac;
        case 0x1f21b0u: goto label_1f21b0;
        case 0x1f21b4u: goto label_1f21b4;
        case 0x1f21b8u: goto label_1f21b8;
        case 0x1f21bcu: goto label_1f21bc;
        case 0x1f21c0u: goto label_1f21c0;
        case 0x1f21c4u: goto label_1f21c4;
        case 0x1f21c8u: goto label_1f21c8;
        case 0x1f21ccu: goto label_1f21cc;
        case 0x1f21d0u: goto label_1f21d0;
        case 0x1f21d4u: goto label_1f21d4;
        case 0x1f21d8u: goto label_1f21d8;
        case 0x1f21dcu: goto label_1f21dc;
        case 0x1f21e0u: goto label_1f21e0;
        case 0x1f21e4u: goto label_1f21e4;
        case 0x1f21e8u: goto label_1f21e8;
        case 0x1f21ecu: goto label_1f21ec;
        case 0x1f21f0u: goto label_1f21f0;
        case 0x1f21f4u: goto label_1f21f4;
        case 0x1f21f8u: goto label_1f21f8;
        case 0x1f21fcu: goto label_1f21fc;
        case 0x1f2200u: goto label_1f2200;
        case 0x1f2204u: goto label_1f2204;
        case 0x1f2208u: goto label_1f2208;
        case 0x1f220cu: goto label_1f220c;
        case 0x1f2210u: goto label_1f2210;
        case 0x1f2214u: goto label_1f2214;
        case 0x1f2218u: goto label_1f2218;
        case 0x1f221cu: goto label_1f221c;
        case 0x1f2220u: goto label_1f2220;
        case 0x1f2224u: goto label_1f2224;
        case 0x1f2228u: goto label_1f2228;
        case 0x1f222cu: goto label_1f222c;
        case 0x1f2230u: goto label_1f2230;
        case 0x1f2234u: goto label_1f2234;
        case 0x1f2238u: goto label_1f2238;
        case 0x1f223cu: goto label_1f223c;
        case 0x1f2240u: goto label_1f2240;
        case 0x1f2244u: goto label_1f2244;
        case 0x1f2248u: goto label_1f2248;
        case 0x1f224cu: goto label_1f224c;
        case 0x1f2250u: goto label_1f2250;
        case 0x1f2254u: goto label_1f2254;
        case 0x1f2258u: goto label_1f2258;
        case 0x1f225cu: goto label_1f225c;
        case 0x1f2260u: goto label_1f2260;
        case 0x1f2264u: goto label_1f2264;
        case 0x1f2268u: goto label_1f2268;
        case 0x1f226cu: goto label_1f226c;
        case 0x1f2270u: goto label_1f2270;
        case 0x1f2274u: goto label_1f2274;
        case 0x1f2278u: goto label_1f2278;
        case 0x1f227cu: goto label_1f227c;
        case 0x1f2280u: goto label_1f2280;
        case 0x1f2284u: goto label_1f2284;
        case 0x1f2288u: goto label_1f2288;
        case 0x1f228cu: goto label_1f228c;
        case 0x1f2290u: goto label_1f2290;
        case 0x1f2294u: goto label_1f2294;
        case 0x1f2298u: goto label_1f2298;
        case 0x1f229cu: goto label_1f229c;
        case 0x1f22a0u: goto label_1f22a0;
        case 0x1f22a4u: goto label_1f22a4;
        case 0x1f22a8u: goto label_1f22a8;
        case 0x1f22acu: goto label_1f22ac;
        case 0x1f22b0u: goto label_1f22b0;
        case 0x1f22b4u: goto label_1f22b4;
        case 0x1f22b8u: goto label_1f22b8;
        case 0x1f22bcu: goto label_1f22bc;
        case 0x1f22c0u: goto label_1f22c0;
        case 0x1f22c4u: goto label_1f22c4;
        case 0x1f22c8u: goto label_1f22c8;
        case 0x1f22ccu: goto label_1f22cc;
        case 0x1f22d0u: goto label_1f22d0;
        case 0x1f22d4u: goto label_1f22d4;
        case 0x1f22d8u: goto label_1f22d8;
        case 0x1f22dcu: goto label_1f22dc;
        case 0x1f22e0u: goto label_1f22e0;
        case 0x1f22e4u: goto label_1f22e4;
        case 0x1f22e8u: goto label_1f22e8;
        case 0x1f22ecu: goto label_1f22ec;
        case 0x1f22f0u: goto label_1f22f0;
        case 0x1f22f4u: goto label_1f22f4;
        case 0x1f22f8u: goto label_1f22f8;
        case 0x1f22fcu: goto label_1f22fc;
        case 0x1f2300u: goto label_1f2300;
        case 0x1f2304u: goto label_1f2304;
        case 0x1f2308u: goto label_1f2308;
        case 0x1f230cu: goto label_1f230c;
        case 0x1f2310u: goto label_1f2310;
        case 0x1f2314u: goto label_1f2314;
        case 0x1f2318u: goto label_1f2318;
        case 0x1f231cu: goto label_1f231c;
        case 0x1f2320u: goto label_1f2320;
        case 0x1f2324u: goto label_1f2324;
        case 0x1f2328u: goto label_1f2328;
        case 0x1f232cu: goto label_1f232c;
        case 0x1f2330u: goto label_1f2330;
        case 0x1f2334u: goto label_1f2334;
        case 0x1f2338u: goto label_1f2338;
        case 0x1f233cu: goto label_1f233c;
        case 0x1f2340u: goto label_1f2340;
        case 0x1f2344u: goto label_1f2344;
        case 0x1f2348u: goto label_1f2348;
        case 0x1f234cu: goto label_1f234c;
        case 0x1f2350u: goto label_1f2350;
        case 0x1f2354u: goto label_1f2354;
        case 0x1f2358u: goto label_1f2358;
        case 0x1f235cu: goto label_1f235c;
        case 0x1f2360u: goto label_1f2360;
        case 0x1f2364u: goto label_1f2364;
        case 0x1f2368u: goto label_1f2368;
        case 0x1f236cu: goto label_1f236c;
        case 0x1f2370u: goto label_1f2370;
        case 0x1f2374u: goto label_1f2374;
        case 0x1f2378u: goto label_1f2378;
        case 0x1f237cu: goto label_1f237c;
        case 0x1f2380u: goto label_1f2380;
        case 0x1f2384u: goto label_1f2384;
        case 0x1f2388u: goto label_1f2388;
        case 0x1f238cu: goto label_1f238c;
        case 0x1f2390u: goto label_1f2390;
        case 0x1f2394u: goto label_1f2394;
        case 0x1f2398u: goto label_1f2398;
        case 0x1f239cu: goto label_1f239c;
        case 0x1f23a0u: goto label_1f23a0;
        case 0x1f23a4u: goto label_1f23a4;
        case 0x1f23a8u: goto label_1f23a8;
        case 0x1f23acu: goto label_1f23ac;
        case 0x1f23b0u: goto label_1f23b0;
        case 0x1f23b4u: goto label_1f23b4;
        case 0x1f23b8u: goto label_1f23b8;
        case 0x1f23bcu: goto label_1f23bc;
        default: break;
    }

    ctx->pc = 0x1f1fa8u;

label_1f1fa8:
    // 0x1f1fa8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1f1fac:
    // 0x1f1fac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1f1facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1f1fb0:
    // 0x1f1fb0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1f1fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1f1fb4:
    // 0x1f1fb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fb8:
    // 0x1f1fb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1f1fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1f1fbc:
    // 0x1f1fbc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1f1fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1f1fc0:
    // 0x1f1fc0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f1fc4:
    // 0x1f1fc4: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1f1fc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1f1fc8:
    // 0x1f1fc8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1f1fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1f1fcc:
    // 0x1f1fcc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1f1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1f1fd0:
    // 0x1f1fd0: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
label_1f1fd4:
    if (ctx->pc == 0x1F1FD4u) {
        ctx->pc = 0x1F1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FD0u;
        // 0x1f1fd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1FD8u;
        goto label_1f1fd8;
    }
    ctx->pc = 0x1F1FD0u;
    {
        const bool branch_taken_0x1f1fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FD0u;
        // 0x1f1fd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fd0) {
            ctx->pc = 0x1F2398u;
            goto label_1f2398;
        }
    }
    ctx->pc = 0x1F1FD8u;
label_1f1fd8:
    // 0x1f1fd8: 0xc07f896  jal         func_1FE258
label_1f1fdc:
    if (ctx->pc == 0x1F1FDCu) {
        ctx->pc = 0x1F1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FD8u;
        // 0x1f1fdc: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1FE0u;
        goto label_1f1fe0;
    }
    ctx->pc = 0x1F1FD8u;
    SET_GPR_U32(ctx, 31, 0x1F1FE0u);
    ctx->pc = 0x1F1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FD8u;
    // 0x1f1fdc: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE258u, 0x1F1FD8u, 0x1F1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FE0u;
label_1f1fe0:
    // 0x1f1fe0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1f1fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fe4:
    // 0x1f1fe4: 0x8e450078  lw          $a1, 0x78($s2)
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_1f1fe8:
    // 0x1f1fe8: 0x26107170  addiu       $s0, $s0, 0x7170
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29040));
label_1f1fec:
    // 0x1f1fec: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1f1ff0:
    // 0x1f1ff0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f1ff4:
    // 0x1f1ff4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f1ff8:
    // 0x1f1ff8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f1ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f1ffc:
    // 0x1f1ffc: 0x60f809  jalr        $v1
label_1f2000:
    if (ctx->pc == 0x1F2000u) {
        ctx->pc = 0x1F2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FFCu;
        // 0x1f2000: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2004u;
        goto label_1f2004;
    }
    ctx->pc = 0x1F1FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F2004u);
        ctx->pc = 0x1F2000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FFCu;
        // 0x1f2000: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1FFCu, 0x1F2004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2004u;
label_1f2004:
    // 0x1f2004: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_1f2008:
    // 0x1f2008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f200c:
    // 0x1f200c: 0xc138e72  jal         func_4E39C8
label_1f2010:
    if (ctx->pc == 0x1F2010u) {
        ctx->pc = 0x1F2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F200Cu;
        // 0x1f2010: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2014u;
        goto label_1f2014;
    }
    ctx->pc = 0x1F200Cu;
    SET_GPR_U32(ctx, 31, 0x1F2014u);
    ctx->pc = 0x1F2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F200Cu;
    // 0x1f2010: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1F200Cu, 0x1F2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2014u;
label_1f2014:
    // 0x1f2014: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1f2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1f2018:
    // 0x1f2018: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x1f2018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_1f201c:
    // 0x1f201c: 0xc0616ac  jal         func_185AB0
label_1f2020:
    if (ctx->pc == 0x1F2020u) {
        ctx->pc = 0x1F2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F201Cu;
        // 0x1f2020: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2024u;
        goto label_1f2024;
    }
    ctx->pc = 0x1F201Cu;
    SET_GPR_U32(ctx, 31, 0x1F2024u);
    ctx->pc = 0x1F2020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F201Cu;
    // 0x1f2020: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1F201Cu, 0x1F2024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2024u;
label_1f2024:
    // 0x1f2024: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f2028:
    if (ctx->pc == 0x1F2028u) {
        ctx->pc = 0x1F2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2024u;
        // 0x1f2028: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F202Cu;
        goto label_1f202c;
    }
    ctx->pc = 0x1F2024u;
    {
        const bool branch_taken_0x1f2024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2024u;
        // 0x1f2028: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2024) {
            ctx->pc = 0x1F2038u;
            goto label_1f2038;
        }
    }
    ctx->pc = 0x1F202Cu;
label_1f202c:
    // 0x1f202c: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1f202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1f2030:
    // 0x1f2030: 0xc062be2  jal         func_18AF88
label_1f2034:
    if (ctx->pc == 0x1F2034u) {
        ctx->pc = 0x1F2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2030u;
        // 0x1f2034: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2038u;
        goto label_1f2038;
    }
    ctx->pc = 0x1F2030u;
    SET_GPR_U32(ctx, 31, 0x1F2038u);
    ctx->pc = 0x1F2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2030u;
    // 0x1f2034: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1F2030u, 0x1F2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2038u;
label_1f2038:
    // 0x1f2038: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_1f203c:
    // 0x1f203c: 0xc0616ac  jal         func_185AB0
label_1f2040:
    if (ctx->pc == 0x1F2040u) {
        ctx->pc = 0x1F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F203Cu;
        // 0x1f2040: 0x8e450064  lw          $a1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2044u;
        goto label_1f2044;
    }
    ctx->pc = 0x1F203Cu;
    SET_GPR_U32(ctx, 31, 0x1F2044u);
    ctx->pc = 0x1F2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F203Cu;
    // 0x1f2040: 0x8e450064  lw          $a1, 0x64($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1F203Cu, 0x1F2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2044u;
label_1f2044:
    // 0x1f2044: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f2048:
    if (ctx->pc == 0x1F2048u) {
        ctx->pc = 0x1F2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2044u;
        // 0x1f2048: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F204Cu;
        goto label_1f204c;
    }
    ctx->pc = 0x1F2044u;
    {
        const bool branch_taken_0x1f2044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2044u;
        // 0x1f2048: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2044) {
            ctx->pc = 0x1F2054u;
            goto label_1f2054;
        }
    }
    ctx->pc = 0x1F204Cu;
label_1f204c:
    // 0x1f204c: 0xc062be2  jal         func_18AF88
label_1f2050:
    if (ctx->pc == 0x1F2050u) {
        ctx->pc = 0x1F2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F204Cu;
        // 0x1f2050: 0x96450064  lhu         $a1, 0x64($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2054u;
        goto label_1f2054;
    }
    ctx->pc = 0x1F204Cu;
    SET_GPR_U32(ctx, 31, 0x1F2054u);
    ctx->pc = 0x1F2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F204Cu;
    // 0x1f2050: 0x96450064  lhu         $a1, 0x64($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1F204Cu, 0x1F2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2054u;
label_1f2054:
    // 0x1f2054: 0xc07f86a  jal         func_1FE1A8
label_1f2058:
    if (ctx->pc == 0x1F2058u) {
        ctx->pc = 0x1F205Cu;
        goto label_1f205c;
    }
    ctx->pc = 0x1F2054u;
    SET_GPR_U32(ctx, 31, 0x1F205Cu);
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1F2054u, 0x1F205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F205Cu;
label_1f205c:
    // 0x1f205c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1f2060:
    if (ctx->pc == 0x1F2060u) {
        ctx->pc = 0x1F2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F205Cu;
        // 0x1f2060: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2064u;
        goto label_1f2064;
    }
    ctx->pc = 0x1F205Cu;
    {
        const bool branch_taken_0x1f205c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f205c) {
            ctx->pc = 0x1F2060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F205Cu;
            // 0x1f2060: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2078u;
            goto label_1f2078;
        }
    }
    ctx->pc = 0x1F2064u;
label_1f2064:
    // 0x1f2064: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x1f2064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_1f2068:
    // 0x1f2068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f206c:
    // 0x1f206c: 0xc13a984  jal         func_4EA610
label_1f2070:
    if (ctx->pc == 0x1F2070u) {
        ctx->pc = 0x1F2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F206Cu;
        // 0x1f2070: 0x2406010a  addiu       $a2, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2074u;
        goto label_1f2074;
    }
    ctx->pc = 0x1F206Cu;
    SET_GPR_U32(ctx, 31, 0x1F2074u);
    ctx->pc = 0x1F2070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F206Cu;
    // 0x1f2070: 0x2406010a  addiu       $a2, $zero, 0x10A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA610u, 0x1F206Cu, 0x1F2074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2074u;
label_1f2074:
    // 0x1f2074: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x1f2074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_1f2078:
    // 0x1f2078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f207c:
    // 0x1f207c: 0xc13a9a4  jal         func_4EA690
label_1f2080:
    if (ctx->pc == 0x1F2080u) {
        ctx->pc = 0x1F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F207Cu;
        // 0x1f2080: 0x2406010c  addiu       $a2, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2084u;
        goto label_1f2084;
    }
    ctx->pc = 0x1F207Cu;
    SET_GPR_U32(ctx, 31, 0x1F2084u);
    ctx->pc = 0x1F2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F207Cu;
    // 0x1f2080: 0x2406010c  addiu       $a2, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA690u, 0x1F207Cu, 0x1F2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2084u;
label_1f2084:
    // 0x1f2084: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x1f2084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_1f2088:
    // 0x1f2088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f208c:
    // 0x1f208c: 0xc13a9c4  jal         func_4EA710
label_1f2090:
    if (ctx->pc == 0x1F2090u) {
        ctx->pc = 0x1F2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F208Cu;
        // 0x1f2090: 0x2406010d  addiu       $a2, $zero, 0x10D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2094u;
        goto label_1f2094;
    }
    ctx->pc = 0x1F208Cu;
    SET_GPR_U32(ctx, 31, 0x1F2094u);
    ctx->pc = 0x1F2090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F208Cu;
    // 0x1f2090: 0x2406010d  addiu       $a2, $zero, 0x10D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA710u, 0x1F208Cu, 0x1F2094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2094u;
label_1f2094:
    // 0x1f2094: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x1f2094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_1f2098:
    // 0x1f2098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f209c:
    // 0x1f209c: 0xc13a9e4  jal         func_4EA790
label_1f20a0:
    if (ctx->pc == 0x1F20A0u) {
        ctx->pc = 0x1F20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F209Cu;
        // 0x1f20a0: 0x2406010e  addiu       $a2, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20A4u;
        goto label_1f20a4;
    }
    ctx->pc = 0x1F209Cu;
    SET_GPR_U32(ctx, 31, 0x1F20A4u);
    ctx->pc = 0x1F20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F209Cu;
    // 0x1f20a0: 0x2406010e  addiu       $a2, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA790u, 0x1F209Cu, 0x1F20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20A4u;
label_1f20a4:
    // 0x1f20a4: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x1f20a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1f20a8:
    // 0x1f20a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f20a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f20ac:
    // 0x1f20ac: 0xc13aa04  jal         func_4EA810
label_1f20b0:
    if (ctx->pc == 0x1F20B0u) {
        ctx->pc = 0x1F20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20ACu;
        // 0x1f20b0: 0x2406010f  addiu       $a2, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20B4u;
        goto label_1f20b4;
    }
    ctx->pc = 0x1F20ACu;
    SET_GPR_U32(ctx, 31, 0x1F20B4u);
    ctx->pc = 0x1F20B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20ACu;
    // 0x1f20b0: 0x2406010f  addiu       $a2, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA810u, 0x1F20ACu, 0x1F20B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20B4u;
label_1f20b4:
    // 0x1f20b4: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x1f20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1f20b8:
    // 0x1f20b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f20b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f20bc:
    // 0x1f20bc: 0xc13aa24  jal         func_4EA890
label_1f20c0:
    if (ctx->pc == 0x1F20C0u) {
        ctx->pc = 0x1F20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20BCu;
        // 0x1f20c0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20C4u;
        goto label_1f20c4;
    }
    ctx->pc = 0x1F20BCu;
    SET_GPR_U32(ctx, 31, 0x1F20C4u);
    ctx->pc = 0x1F20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20BCu;
    // 0x1f20c0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA890u, 0x1F20BCu, 0x1F20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20C4u;
label_1f20c4:
    // 0x1f20c4: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x1f20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1f20c8:
    // 0x1f20c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f20c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f20cc:
    // 0x1f20cc: 0xc13aa44  jal         func_4EA910
label_1f20d0:
    if (ctx->pc == 0x1F20D0u) {
        ctx->pc = 0x1F20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20CCu;
        // 0x1f20d0: 0x24060111  addiu       $a2, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20D4u;
        goto label_1f20d4;
    }
    ctx->pc = 0x1F20CCu;
    SET_GPR_U32(ctx, 31, 0x1F20D4u);
    ctx->pc = 0x1F20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20CCu;
    // 0x1f20d0: 0x24060111  addiu       $a2, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA910u, 0x1F20CCu, 0x1F20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20D4u;
label_1f20d4:
    // 0x1f20d4: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x1f20d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f20d8:
    // 0x1f20d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f20d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f20dc:
    // 0x1f20dc: 0xc13aa64  jal         func_4EA990
label_1f20e0:
    if (ctx->pc == 0x1F20E0u) {
        ctx->pc = 0x1F20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20DCu;
        // 0x1f20e0: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20E4u;
        goto label_1f20e4;
    }
    ctx->pc = 0x1F20DCu;
    SET_GPR_U32(ctx, 31, 0x1F20E4u);
    ctx->pc = 0x1F20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20DCu;
    // 0x1f20e0: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA990u, 0x1F20DCu, 0x1F20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20E4u;
label_1f20e4:
    // 0x1f20e4: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1f20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1f20e8:
    // 0x1f20e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f20e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f20ec:
    // 0x1f20ec: 0xc13aa84  jal         func_4EAA10
label_1f20f0:
    if (ctx->pc == 0x1F20F0u) {
        ctx->pc = 0x1F20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20ECu;
        // 0x1f20f0: 0x24060113  addiu       $a2, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20F4u;
        goto label_1f20f4;
    }
    ctx->pc = 0x1F20ECu;
    SET_GPR_U32(ctx, 31, 0x1F20F4u);
    ctx->pc = 0x1F20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20ECu;
    // 0x1f20f0: 0x24060113  addiu       $a2, $zero, 0x113 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAA10u, 0x1F20ECu, 0x1F20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20F4u;
label_1f20f4:
    // 0x1f20f4: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1f20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f20f8:
    // 0x1f20f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f20f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f20fc:
    // 0x1f20fc: 0xc13aaa4  jal         func_4EAA90
label_1f2100:
    if (ctx->pc == 0x1F2100u) {
        ctx->pc = 0x1F2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20FCu;
        // 0x1f2100: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2104u;
        goto label_1f2104;
    }
    ctx->pc = 0x1F20FCu;
    SET_GPR_U32(ctx, 31, 0x1F2104u);
    ctx->pc = 0x1F2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20FCu;
    // 0x1f2100: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAA90u, 0x1F20FCu, 0x1F2104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2104u;
label_1f2104:
    // 0x1f2104: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f2104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f2108:
    // 0x1f2108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f210c:
    // 0x1f210c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f210cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f2110:
    // 0x1f2110: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f2114:
    // 0x1f2114: 0x40f809  jalr        $v0
label_1f2118:
    if (ctx->pc == 0x1F2118u) {
        ctx->pc = 0x1F2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2114u;
        // 0x1f2118: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F211Cu;
        goto label_1f211c;
    }
    ctx->pc = 0x1F2114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F211Cu);
        ctx->pc = 0x1F2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2114u;
        // 0x1f2118: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2114u, 0x1F211Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F211Cu;
label_1f211c:
    // 0x1f211c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f2120:
    if (ctx->pc == 0x1F2120u) {
        ctx->pc = 0x1F2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F211Cu;
        // 0x1f2120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2124u;
        goto label_1f2124;
    }
    ctx->pc = 0x1F211Cu;
    {
        const bool branch_taken_0x1f211c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F211Cu;
        // 0x1f2120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f211c) {
            ctx->pc = 0x1F2130u;
            goto label_1f2130;
        }
    }
    ctx->pc = 0x1F2124u;
label_1f2124:
    // 0x1f2124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2128:
    // 0x1f2128: 0xc1378c4  jal         func_4DE310
label_1f212c:
    if (ctx->pc == 0x1F212Cu) {
        ctx->pc = 0x1F212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2128u;
        // 0x1f212c: 0x2406011a  addiu       $a2, $zero, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2130u;
        goto label_1f2130;
    }
    ctx->pc = 0x1F2128u;
    SET_GPR_U32(ctx, 31, 0x1F2130u);
    ctx->pc = 0x1F212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2128u;
    // 0x1f212c: 0x2406011a  addiu       $a2, $zero, 0x11A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE310u, 0x1F2128u, 0x1F2130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2130u;
label_1f2130:
    // 0x1f2130: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f2130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f2134:
    // 0x1f2134: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2138:
    // 0x1f2138: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x1f2138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_1f213c:
    // 0x1f213c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f213cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f2140:
    // 0x1f2140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f2144:
    // 0x1f2144: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f2144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f2148:
    // 0x1f2148: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1f214c:
    // 0x1f214c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1f2150:
    // 0x1f2150: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f2150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2154:
    // 0x1f2154: 0x244e72e8  addiu       $t6, $v0, 0x72E8
    ctx->pc = 0x1f2154u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 29416));
label_1f2158:
    // 0x1f2158: 0x69c30007  ldl         $v1, 0x7($t6)
    ctx->pc = 0x1f2158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1f215c:
    // 0x1f215c: 0x6dc30000  ldr         $v1, 0x0($t6)
    ctx->pc = 0x1f215cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1f2160:
    // 0x1f2160: 0x8dcc0008  lw          $t4, 0x8($t6)
    ctx->pc = 0x1f2160u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_1f2164:
    // 0x1f2164: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1f2164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f2168:
    // 0x1f2168: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1f2168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f216c:
    // 0x1f216c: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x1f216cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
label_1f2170:
    // 0x1f2170: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f2170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2174:
    // 0x1f2174: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f2174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2178:
    // 0x1f2178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f2178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f217c:
    // 0x1f217c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f217cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1f2180:
    // 0x1f2180: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1f2180u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1f2184:
    // 0x1f2184: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1f2184u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_1f2188:
    // 0x1f2188: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1f2188u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
label_1f218c:
    // 0x1f218c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f218cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2190:
    // 0x1f2190: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f2190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2194:
    // 0x1f2194: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2194u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2198:
    // 0x1f2198: 0xc05fbc8  jal         func_17EF20
label_1f219c:
    if (ctx->pc == 0x1F219Cu) {
        ctx->pc = 0x1F219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2198u;
        // 0x1f219c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21A0u;
        goto label_1f21a0;
    }
    ctx->pc = 0x1F2198u;
    SET_GPR_U32(ctx, 31, 0x1F21A0u);
    ctx->pc = 0x1F219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2198u;
    // 0x1f219c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF20u, 0x1F2198u, 0x1F21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21A0u;
label_1f21a0:
    // 0x1f21a0: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x1f21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_1f21a4:
    // 0x1f21a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f21a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f21a8:
    // 0x1f21a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f21a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f21ac:
    // 0x1f21ac: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f21acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1f21b0:
    // 0x1f21b0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1f21b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1f21b4:
    // 0x1f21b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f21b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f21b8:
    // 0x1f21b8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f21b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f21bc:
    // 0x1f21bc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1f21bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f21c0:
    // 0x1f21c0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1f21c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1f21c4:
    // 0x1f21c4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1f21c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_1f21c8:
    // 0x1f21c8: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x1f21c8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_1f21cc:
    // 0x1f21cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f21ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f21d0:
    // 0x1f21d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f21d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21d4:
    // 0x1f21d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f21d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21d8:
    // 0x1f21d8: 0xc05fbc8  jal         func_17EF20
label_1f21dc:
    if (ctx->pc == 0x1F21DCu) {
        ctx->pc = 0x1F21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21D8u;
        // 0x1f21dc: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21E0u;
        goto label_1f21e0;
    }
    ctx->pc = 0x1F21D8u;
    SET_GPR_U32(ctx, 31, 0x1F21E0u);
    ctx->pc = 0x1F21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21D8u;
    // 0x1f21dc: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF20u, 0x1F21D8u, 0x1F21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21E0u;
label_1f21e0:
    // 0x1f21e0: 0xc07f80e  jal         func_1FE038
label_1f21e4:
    if (ctx->pc == 0x1F21E4u) {
        ctx->pc = 0x1F21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21E0u;
        // 0x1f21e4: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21E8u;
        goto label_1f21e8;
    }
    ctx->pc = 0x1F21E0u;
    SET_GPR_U32(ctx, 31, 0x1F21E8u);
    ctx->pc = 0x1F21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21E0u;
    // 0x1f21e4: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x1F21E0u, 0x1F21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21E8u;
label_1f21e8:
    // 0x1f21e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f21ec:
    // 0x1f21ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f21f0:
    // 0x1f21f0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1f21f4:
    // 0x1f21f4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1f21f8:
    if (ctx->pc == 0x1F21F8u) {
        ctx->pc = 0x1F21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21F4u;
        // 0x1f21f8: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21FCu;
        goto label_1f21fc;
    }
    ctx->pc = 0x1F21F4u;
    {
        const bool branch_taken_0x1f21f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21F4u;
        // 0x1f21f8: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21f4) {
            ctx->pc = 0x1F2298u;
            goto label_1f2298;
        }
    }
    ctx->pc = 0x1F21FCu;
label_1f21fc:
    // 0x1f21fc: 0x0  nop
    ctx->pc = 0x1f21fcu;
    // NOP
label_1f2200:
    // 0x1f2200: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x1f2200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1f2204:
    // 0x1f2204: 0x26657170  addiu       $a1, $s3, 0x7170
    ctx->pc = 0x1f2204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 29040));
label_1f2208:
    // 0x1f2208: 0xc13aac4  jal         func_4EAB10
label_1f220c:
    if (ctx->pc == 0x1F220Cu) {
        ctx->pc = 0x1F220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2208u;
        // 0x1f220c: 0x24060123  addiu       $a2, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2210u;
        goto label_1f2210;
    }
    ctx->pc = 0x1F2208u;
    SET_GPR_U32(ctx, 31, 0x1F2210u);
    ctx->pc = 0x1F220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2208u;
    // 0x1f220c: 0x24060123  addiu       $a2, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAB10u, 0x1F2208u, 0x1F2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2210u;
label_1f2210:
    // 0x1f2210: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2214:
    // 0x1f2214: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1f2214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1f2218:
    // 0x1f2218: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f2218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f221c:
    // 0x1f221c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1f2220:
    if (ctx->pc == 0x1F2220u) {
        ctx->pc = 0x1F2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F221Cu;
        // 0x1f2220: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2224u;
        goto label_1f2224;
    }
    ctx->pc = 0x1F221Cu;
    {
        const bool branch_taken_0x1f221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f221c) {
            ctx->pc = 0x1F2220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F221Cu;
            // 0x1f2220: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2258u;
            goto label_1f2258;
        }
    }
    ctx->pc = 0x1F2224u;
label_1f2224:
    // 0x1f2224: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f2224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1f2228:
    // 0x1f2228: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1f2228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f222c:
    // 0x1f222c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1f2230:
    if (ctx->pc == 0x1F2230u) {
        ctx->pc = 0x1F2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F222Cu;
        // 0x1f2230: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2234u;
        goto label_1f2234;
    }
    ctx->pc = 0x1F222Cu;
    {
        const bool branch_taken_0x1f222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F222Cu;
        // 0x1f2230: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f222c) {
            ctx->pc = 0x1F2294u;
            goto label_1f2294;
        }
    }
    ctx->pc = 0x1F2234u;
label_1f2234:
    // 0x1f2234: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2238:
    // 0x1f2238: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1f2238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f223c:
    // 0x1f223c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1f223cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1f2240:
    // 0x1f2240: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f2244:
    // 0x1f2244: 0x0  nop
    ctx->pc = 0x1f2244u;
    // NOP
label_1f2248:
    // 0x1f2248: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1f224c:
    if (ctx->pc == 0x1F224Cu) {
        ctx->pc = 0x1F224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2248u;
        // 0x1f224c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2250u;
        goto label_1f2250;
    }
    ctx->pc = 0x1F2248u;
    {
        const bool branch_taken_0x1f2248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2248u;
        // 0x1f224c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2248) {
            ctx->pc = 0x1F2238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2238;
        }
    }
    ctx->pc = 0x1F2250u;
label_1f2250:
    // 0x1f2250: 0x10000010  b           . + 4 + (0x10 << 2)
label_1f2254:
    if (ctx->pc == 0x1F2254u) {
        ctx->pc = 0x1F2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2250u;
        // 0x1f2254: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2258u;
        goto label_1f2258;
    }
    ctx->pc = 0x1F2250u;
    {
        const bool branch_taken_0x1f2250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2250u;
        // 0x1f2254: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2250) {
            ctx->pc = 0x1F2294u;
            goto label_1f2294;
        }
    }
    ctx->pc = 0x1F2258u;
label_1f2258:
    // 0x1f2258: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f2258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f225c:
    // 0x1f225c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1f2260:
    if (ctx->pc == 0x1F2260u) {
        ctx->pc = 0x1F2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F225Cu;
        // 0x1f2260: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2264u;
        goto label_1f2264;
    }
    ctx->pc = 0x1F225Cu;
    {
        const bool branch_taken_0x1f225c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F225Cu;
        // 0x1f2260: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f225c) {
            ctx->pc = 0x1F2284u;
            goto label_1f2284;
        }
    }
    ctx->pc = 0x1F2264u;
label_1f2264:
    // 0x1f2264: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f2264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1f2268:
    // 0x1f2268: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1f2268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f226c:
    // 0x1f226c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2270:
    // 0x1f2270: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f2270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1f2274:
    // 0x1f2274: 0x0  nop
    ctx->pc = 0x1f2274u;
    // NOP
label_1f2278:
    // 0x1f2278: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
label_1f227c:
    if (ctx->pc == 0x1F227Cu) {
        ctx->pc = 0x1F227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2278u;
        // 0x1f227c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2280u;
        goto label_1f2280;
    }
    ctx->pc = 0x1F2278u;
    {
        const bool branch_taken_0x1f2278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2278) {
            ctx->pc = 0x1F227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2278u;
            // 0x1f227c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2268;
        }
    }
    ctx->pc = 0x1F2280u;
label_1f2280:
    // 0x1f2280: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2284:
    // 0x1f2284: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f2288:
    // 0x1f2288: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
label_1f228c:
    if (ctx->pc == 0x1F228Cu) {
        ctx->pc = 0x1F228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2288u;
        // 0x1f228c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2290u;
        goto label_1f2290;
    }
    ctx->pc = 0x1F2288u;
    {
        const bool branch_taken_0x1f2288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f2288) {
            ctx->pc = 0x1F228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2288u;
            // 0x1f228c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2290u;
            goto label_1f2290;
        }
    }
    ctx->pc = 0x1F2290u;
label_1f2290:
    // 0x1f2290: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1f2294:
    // 0x1f2294: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f2294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1f2298:
    // 0x1f2298: 0xc07f80e  jal         func_1FE038
label_1f229c:
    if (ctx->pc == 0x1F229Cu) {
        ctx->pc = 0x1F22A0u;
        goto label_1f22a0;
    }
    ctx->pc = 0x1F2298u;
    SET_GPR_U32(ctx, 31, 0x1F22A0u);
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x1F2298u, 0x1F22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22A0u;
label_1f22a0:
    // 0x1f22a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f22a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f22a4:
    // 0x1f22a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f22a8:
    // 0x1f22a8: 0x1483ffd5  bne         $a0, $v1, . + 4 + (-0x2B << 2)
label_1f22ac:
    if (ctx->pc == 0x1F22ACu) {
        ctx->pc = 0x1F22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22A8u;
        // 0x1f22ac: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22B0u;
        goto label_1f22b0;
    }
    ctx->pc = 0x1F22A8u;
    {
        const bool branch_taken_0x1f22a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22A8u;
        // 0x1f22ac: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22a8) {
            ctx->pc = 0x1F2200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2200;
        }
    }
    ctx->pc = 0x1F22B0u;
label_1f22b0:
    // 0x1f22b0: 0xc07f80e  jal         func_1FE038
label_1f22b4:
    if (ctx->pc == 0x1F22B4u) {
        ctx->pc = 0x1F22B8u;
        goto label_1f22b8;
    }
    ctx->pc = 0x1F22B0u;
    SET_GPR_U32(ctx, 31, 0x1F22B8u);
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x1F22B0u, 0x1F22B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22B8u;
label_1f22b8:
    // 0x1f22b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f22b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f22bc:
    // 0x1f22bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f22c0:
    // 0x1f22c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f22c4:
    if (ctx->pc == 0x1F22C4u) {
        ctx->pc = 0x1F22C8u;
        goto label_1f22c8;
    }
    ctx->pc = 0x1F22C0u;
    {
        const bool branch_taken_0x1f22c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f22c0) {
            ctx->pc = 0x1F22F4u;
            goto label_1f22f4;
        }
    }
    ctx->pc = 0x1F22C8u;
label_1f22c8:
    // 0x1f22c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f22cc:
    // 0x1f22cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f22ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f22d0:
    // 0x1f22d0: 0xc13a95e  jal         func_4EA578
label_1f22d4:
    if (ctx->pc == 0x1F22D4u) {
        ctx->pc = 0x1F22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22D0u;
        // 0x1f22d4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22D8u;
        goto label_1f22d8;
    }
    ctx->pc = 0x1F22D0u;
    SET_GPR_U32(ctx, 31, 0x1F22D8u);
    ctx->pc = 0x1F22D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22D0u;
    // 0x1f22d4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA578u, 0x1F22D0u, 0x1F22D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22D8u;
label_1f22d8:
    // 0x1f22d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f22dc:
    // 0x1f22dc: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1f22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1f22e0:
    // 0x1f22e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f22e4:
    // 0x1f22e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f22e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f22e8:
    // 0x1f22e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f22ec:
    // 0x1f22ec: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1f22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1f22f0:
    // 0x1f22f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f22f4:
    // 0x1f22f4: 0xc07f80e  jal         func_1FE038
label_1f22f8:
    if (ctx->pc == 0x1F22F8u) {
        ctx->pc = 0x1F22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22F4u;
        // 0x1f22f8: 0x26707170  addiu       $s0, $s3, 0x7170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22FCu;
        goto label_1f22fc;
    }
    ctx->pc = 0x1F22F4u;
    SET_GPR_U32(ctx, 31, 0x1F22FCu);
    ctx->pc = 0x1F22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22F4u;
    // 0x1f22f8: 0x26707170  addiu       $s0, $s3, 0x7170 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x1F22F4u, 0x1F22FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22FCu;
label_1f22fc:
    // 0x1f22fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2300:
    // 0x1f2300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2304:
    // 0x1f2304: 0xc13aad6  jal         func_4EAB58
label_1f2308:
    if (ctx->pc == 0x1F2308u) {
        ctx->pc = 0x1F2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2304u;
        // 0x1f2308: 0x24060127  addiu       $a2, $zero, 0x127 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F230Cu;
        goto label_1f230c;
    }
    ctx->pc = 0x1F2304u;
    SET_GPR_U32(ctx, 31, 0x1F230Cu);
    ctx->pc = 0x1F2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2304u;
    // 0x1f2308: 0x24060127  addiu       $a2, $zero, 0x127 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAB58u, 0x1F2304u, 0x1F230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F230Cu;
label_1f230c:
    // 0x1f230c: 0xc07f8a8  jal         func_1FE2A0
label_1f2310:
    if (ctx->pc == 0x1F2310u) {
        ctx->pc = 0x1F2314u;
        goto label_1f2314;
    }
    ctx->pc = 0x1F230Cu;
    SET_GPR_U32(ctx, 31, 0x1F2314u);
    ctx->pc = 0x1FE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2A0u, 0x1F230Cu, 0x1F2314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2314u;
label_1f2314:
    // 0x1f2314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f2314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2318:
    // 0x1f2318: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1f2318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1f231c:
    // 0x1f231c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1f231cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1f2320:
    // 0x1f2320: 0xa0f809  jalr        $a1
label_1f2324:
    if (ctx->pc == 0x1F2324u) {
        ctx->pc = 0x1F2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2320u;
        // 0x1f2324: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2328u;
        goto label_1f2328;
    }
    ctx->pc = 0x1F2320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F2328u);
        ctx->pc = 0x1F2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2320u;
        // 0x1f2324: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2320u, 0x1F2328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2328u;
label_1f2328:
    // 0x1f2328: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1f2328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1f232c:
    // 0x1f232c: 0xc0e4060  jal         func_390180
label_1f2330:
    if (ctx->pc == 0x1F2330u) {
        ctx->pc = 0x1F2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F232Cu;
        // 0x1f2330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2334u;
        goto label_1f2334;
    }
    ctx->pc = 0x1F232Cu;
    SET_GPR_U32(ctx, 31, 0x1F2334u);
    ctx->pc = 0x1F2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F232Cu;
    // 0x1f2330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1F232Cu, 0x1F2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2334u;
label_1f2334:
    // 0x1f2334: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f2338:
    if (ctx->pc == 0x1F2338u) {
        ctx->pc = 0x1F233Cu;
        goto label_1f233c;
    }
    ctx->pc = 0x1F2334u;
    {
        const bool branch_taken_0x1f2334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2334) {
            ctx->pc = 0x1F2360u;
            goto label_1f2360;
        }
    }
    ctx->pc = 0x1F233Cu;
label_1f233c:
    // 0x1f233c: 0xc07f8a8  jal         func_1FE2A0
label_1f2340:
    if (ctx->pc == 0x1F2340u) {
        ctx->pc = 0x1F2344u;
        goto label_1f2344;
    }
    ctx->pc = 0x1F233Cu;
    SET_GPR_U32(ctx, 31, 0x1F2344u);
    ctx->pc = 0x1FE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2A0u, 0x1F233Cu, 0x1F2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2344u;
label_1f2344:
    // 0x1f2344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f2344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2348:
    // 0x1f2348: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1f2348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1f234c:
    // 0x1f234c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1f234cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1f2350:
    // 0x1f2350: 0xa0f809  jalr        $a1
label_1f2354:
    if (ctx->pc == 0x1F2354u) {
        ctx->pc = 0x1F2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2350u;
        // 0x1f2354: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2358u;
        goto label_1f2358;
    }
    ctx->pc = 0x1F2350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F2358u);
        ctx->pc = 0x1F2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2350u;
        // 0x1f2354: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2350u, 0x1F2358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2358u;
label_1f2358:
    // 0x1f2358: 0xc08cfbc  jal         func_233EF0
label_1f235c:
    if (ctx->pc == 0x1F235Cu) {
        ctx->pc = 0x1F235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2358u;
        // 0x1f235c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2360u;
        goto label_1f2360;
    }
    ctx->pc = 0x1F2358u;
    SET_GPR_U32(ctx, 31, 0x1F2360u);
    ctx->pc = 0x1F235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2358u;
    // 0x1f235c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233EF0u, 0x1F2358u, 0x1F2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2360u;
label_1f2360:
    // 0x1f2360: 0xc05a87a  jal         func_16A1E8
label_1f2364:
    if (ctx->pc == 0x1F2364u) {
        ctx->pc = 0x1F2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2360u;
        // 0x1f2364: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2368u;
        goto label_1f2368;
    }
    ctx->pc = 0x1F2360u;
    SET_GPR_U32(ctx, 31, 0x1F2368u);
    ctx->pc = 0x1F2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2360u;
    // 0x1f2364: 0x8644006c  lh          $a0, 0x6C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x1F2360u, 0x1F2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2368u;
label_1f2368:
    // 0x1f2368: 0xc07f9c8  jal         func_1FE720
label_1f236c:
    if (ctx->pc == 0x1F236Cu) {
        ctx->pc = 0x1F2370u;
        goto label_1f2370;
    }
    ctx->pc = 0x1F2368u;
    SET_GPR_U32(ctx, 31, 0x1F2370u);
    ctx->pc = 0x1FE720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE720u, 0x1F2368u, 0x1F2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2370u;
label_1f2370:
    // 0x1f2370: 0xc072164  jal         func_1C8590
label_1f2374:
    if (ctx->pc == 0x1F2374u) {
        ctx->pc = 0x1F2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2370u;
        // 0x1f2374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2378u;
        goto label_1f2378;
    }
    ctx->pc = 0x1F2370u;
    SET_GPR_U32(ctx, 31, 0x1F2378u);
    ctx->pc = 0x1F2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2370u;
    // 0x1f2374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8590u, 0x1F2370u, 0x1F2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2378u;
label_1f2378:
    // 0x1f2378: 0xc07f7c8  jal         func_1FDF20
label_1f237c:
    if (ctx->pc == 0x1F237Cu) {
        ctx->pc = 0x1F2380u;
        goto label_1f2380;
    }
    ctx->pc = 0x1F2378u;
    SET_GPR_U32(ctx, 31, 0x1F2380u);
    ctx->pc = 0x1FDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDF20u, 0x1F2378u, 0x1F2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2380u;
label_1f2380:
    // 0x1f2380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2384:
    // 0x1f2384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2388:
    // 0x1f2388: 0xc139190  jal         func_4E4640
label_1f238c:
    if (ctx->pc == 0x1F238Cu) {
        ctx->pc = 0x1F238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2388u;
        // 0x1f238c: 0x24060132  addiu       $a2, $zero, 0x132 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2390u;
        goto label_1f2390;
    }
    ctx->pc = 0x1F2388u;
    SET_GPR_U32(ctx, 31, 0x1F2390u);
    ctx->pc = 0x1F238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2388u;
    // 0x1f238c: 0x24060132  addiu       $a2, $zero, 0x132 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4640u, 0x1F2388u, 0x1F2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2390u;
label_1f2390:
    // 0x1f2390: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1f2390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_1f2394:
    // 0x1f2394: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1f2394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_1f2398:
    // 0x1f2398: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1f2398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f239c:
    // 0x1f239c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1f239cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f23a0:
    // 0x1f23a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1f23a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f23a4:
    // 0x1f23a4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1f23a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f23a8:
    // 0x1f23a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f23a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f23ac:
    // 0x1f23ac: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1f23acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f23b0:
    // 0x1f23b0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1f23b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f23b4:
    // 0x1f23b4: 0x3e00008  jr          $ra
label_1f23b8:
    if (ctx->pc == 0x1F23B8u) {
        ctx->pc = 0x1F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23B4u;
        // 0x1f23b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F23BCu;
        goto label_1f23bc;
    }
    ctx->pc = 0x1F23B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23B4u;
        // 0x1f23b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F23B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F23BCu;
label_1f23bc:
    // 0x1f23bc: 0x0  nop
    ctx->pc = 0x1f23bcu;
    // NOP
    ctx->pc = 0x1f23c0u;
}
