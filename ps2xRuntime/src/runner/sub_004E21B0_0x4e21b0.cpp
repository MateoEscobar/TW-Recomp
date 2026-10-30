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

// Function: sub_004E21B0
// Address: 0x4e21b0 - 0x4e2580
void sub_004E21B0_0x4e21b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E21B0_0x4e21b0");
#endif

    switch (ctx->pc) {
        case 0x4e21b0u: goto label_4e21b0;
        case 0x4e21b4u: goto label_4e21b4;
        case 0x4e21b8u: goto label_4e21b8;
        case 0x4e21bcu: goto label_4e21bc;
        case 0x4e21c0u: goto label_4e21c0;
        case 0x4e21c4u: goto label_4e21c4;
        case 0x4e21c8u: goto label_4e21c8;
        case 0x4e21ccu: goto label_4e21cc;
        case 0x4e21d0u: goto label_4e21d0;
        case 0x4e21d4u: goto label_4e21d4;
        case 0x4e21d8u: goto label_4e21d8;
        case 0x4e21dcu: goto label_4e21dc;
        case 0x4e21e0u: goto label_4e21e0;
        case 0x4e21e4u: goto label_4e21e4;
        case 0x4e21e8u: goto label_4e21e8;
        case 0x4e21ecu: goto label_4e21ec;
        case 0x4e21f0u: goto label_4e21f0;
        case 0x4e21f4u: goto label_4e21f4;
        case 0x4e21f8u: goto label_4e21f8;
        case 0x4e21fcu: goto label_4e21fc;
        case 0x4e2200u: goto label_4e2200;
        case 0x4e2204u: goto label_4e2204;
        case 0x4e2208u: goto label_4e2208;
        case 0x4e220cu: goto label_4e220c;
        case 0x4e2210u: goto label_4e2210;
        case 0x4e2214u: goto label_4e2214;
        case 0x4e2218u: goto label_4e2218;
        case 0x4e221cu: goto label_4e221c;
        case 0x4e2220u: goto label_4e2220;
        case 0x4e2224u: goto label_4e2224;
        case 0x4e2228u: goto label_4e2228;
        case 0x4e222cu: goto label_4e222c;
        case 0x4e2230u: goto label_4e2230;
        case 0x4e2234u: goto label_4e2234;
        case 0x4e2238u: goto label_4e2238;
        case 0x4e223cu: goto label_4e223c;
        case 0x4e2240u: goto label_4e2240;
        case 0x4e2244u: goto label_4e2244;
        case 0x4e2248u: goto label_4e2248;
        case 0x4e224cu: goto label_4e224c;
        case 0x4e2250u: goto label_4e2250;
        case 0x4e2254u: goto label_4e2254;
        case 0x4e2258u: goto label_4e2258;
        case 0x4e225cu: goto label_4e225c;
        case 0x4e2260u: goto label_4e2260;
        case 0x4e2264u: goto label_4e2264;
        case 0x4e2268u: goto label_4e2268;
        case 0x4e226cu: goto label_4e226c;
        case 0x4e2270u: goto label_4e2270;
        case 0x4e2274u: goto label_4e2274;
        case 0x4e2278u: goto label_4e2278;
        case 0x4e227cu: goto label_4e227c;
        case 0x4e2280u: goto label_4e2280;
        case 0x4e2284u: goto label_4e2284;
        case 0x4e2288u: goto label_4e2288;
        case 0x4e228cu: goto label_4e228c;
        case 0x4e2290u: goto label_4e2290;
        case 0x4e2294u: goto label_4e2294;
        case 0x4e2298u: goto label_4e2298;
        case 0x4e229cu: goto label_4e229c;
        case 0x4e22a0u: goto label_4e22a0;
        case 0x4e22a4u: goto label_4e22a4;
        case 0x4e22a8u: goto label_4e22a8;
        case 0x4e22acu: goto label_4e22ac;
        case 0x4e22b0u: goto label_4e22b0;
        case 0x4e22b4u: goto label_4e22b4;
        case 0x4e22b8u: goto label_4e22b8;
        case 0x4e22bcu: goto label_4e22bc;
        case 0x4e22c0u: goto label_4e22c0;
        case 0x4e22c4u: goto label_4e22c4;
        case 0x4e22c8u: goto label_4e22c8;
        case 0x4e22ccu: goto label_4e22cc;
        case 0x4e22d0u: goto label_4e22d0;
        case 0x4e22d4u: goto label_4e22d4;
        case 0x4e22d8u: goto label_4e22d8;
        case 0x4e22dcu: goto label_4e22dc;
        case 0x4e22e0u: goto label_4e22e0;
        case 0x4e22e4u: goto label_4e22e4;
        case 0x4e22e8u: goto label_4e22e8;
        case 0x4e22ecu: goto label_4e22ec;
        case 0x4e22f0u: goto label_4e22f0;
        case 0x4e22f4u: goto label_4e22f4;
        case 0x4e22f8u: goto label_4e22f8;
        case 0x4e22fcu: goto label_4e22fc;
        case 0x4e2300u: goto label_4e2300;
        case 0x4e2304u: goto label_4e2304;
        case 0x4e2308u: goto label_4e2308;
        case 0x4e230cu: goto label_4e230c;
        case 0x4e2310u: goto label_4e2310;
        case 0x4e2314u: goto label_4e2314;
        case 0x4e2318u: goto label_4e2318;
        case 0x4e231cu: goto label_4e231c;
        case 0x4e2320u: goto label_4e2320;
        case 0x4e2324u: goto label_4e2324;
        case 0x4e2328u: goto label_4e2328;
        case 0x4e232cu: goto label_4e232c;
        case 0x4e2330u: goto label_4e2330;
        case 0x4e2334u: goto label_4e2334;
        case 0x4e2338u: goto label_4e2338;
        case 0x4e233cu: goto label_4e233c;
        case 0x4e2340u: goto label_4e2340;
        case 0x4e2344u: goto label_4e2344;
        case 0x4e2348u: goto label_4e2348;
        case 0x4e234cu: goto label_4e234c;
        case 0x4e2350u: goto label_4e2350;
        case 0x4e2354u: goto label_4e2354;
        case 0x4e2358u: goto label_4e2358;
        case 0x4e235cu: goto label_4e235c;
        case 0x4e2360u: goto label_4e2360;
        case 0x4e2364u: goto label_4e2364;
        case 0x4e2368u: goto label_4e2368;
        case 0x4e236cu: goto label_4e236c;
        case 0x4e2370u: goto label_4e2370;
        case 0x4e2374u: goto label_4e2374;
        case 0x4e2378u: goto label_4e2378;
        case 0x4e237cu: goto label_4e237c;
        case 0x4e2380u: goto label_4e2380;
        case 0x4e2384u: goto label_4e2384;
        case 0x4e2388u: goto label_4e2388;
        case 0x4e238cu: goto label_4e238c;
        case 0x4e2390u: goto label_4e2390;
        case 0x4e2394u: goto label_4e2394;
        case 0x4e2398u: goto label_4e2398;
        case 0x4e239cu: goto label_4e239c;
        case 0x4e23a0u: goto label_4e23a0;
        case 0x4e23a4u: goto label_4e23a4;
        case 0x4e23a8u: goto label_4e23a8;
        case 0x4e23acu: goto label_4e23ac;
        case 0x4e23b0u: goto label_4e23b0;
        case 0x4e23b4u: goto label_4e23b4;
        case 0x4e23b8u: goto label_4e23b8;
        case 0x4e23bcu: goto label_4e23bc;
        case 0x4e23c0u: goto label_4e23c0;
        case 0x4e23c4u: goto label_4e23c4;
        case 0x4e23c8u: goto label_4e23c8;
        case 0x4e23ccu: goto label_4e23cc;
        case 0x4e23d0u: goto label_4e23d0;
        case 0x4e23d4u: goto label_4e23d4;
        case 0x4e23d8u: goto label_4e23d8;
        case 0x4e23dcu: goto label_4e23dc;
        case 0x4e23e0u: goto label_4e23e0;
        case 0x4e23e4u: goto label_4e23e4;
        case 0x4e23e8u: goto label_4e23e8;
        case 0x4e23ecu: goto label_4e23ec;
        case 0x4e23f0u: goto label_4e23f0;
        case 0x4e23f4u: goto label_4e23f4;
        case 0x4e23f8u: goto label_4e23f8;
        case 0x4e23fcu: goto label_4e23fc;
        case 0x4e2400u: goto label_4e2400;
        case 0x4e2404u: goto label_4e2404;
        case 0x4e2408u: goto label_4e2408;
        case 0x4e240cu: goto label_4e240c;
        case 0x4e2410u: goto label_4e2410;
        case 0x4e2414u: goto label_4e2414;
        case 0x4e2418u: goto label_4e2418;
        case 0x4e241cu: goto label_4e241c;
        case 0x4e2420u: goto label_4e2420;
        case 0x4e2424u: goto label_4e2424;
        case 0x4e2428u: goto label_4e2428;
        case 0x4e242cu: goto label_4e242c;
        case 0x4e2430u: goto label_4e2430;
        case 0x4e2434u: goto label_4e2434;
        case 0x4e2438u: goto label_4e2438;
        case 0x4e243cu: goto label_4e243c;
        case 0x4e2440u: goto label_4e2440;
        case 0x4e2444u: goto label_4e2444;
        case 0x4e2448u: goto label_4e2448;
        case 0x4e244cu: goto label_4e244c;
        case 0x4e2450u: goto label_4e2450;
        case 0x4e2454u: goto label_4e2454;
        case 0x4e2458u: goto label_4e2458;
        case 0x4e245cu: goto label_4e245c;
        case 0x4e2460u: goto label_4e2460;
        case 0x4e2464u: goto label_4e2464;
        case 0x4e2468u: goto label_4e2468;
        case 0x4e246cu: goto label_4e246c;
        case 0x4e2470u: goto label_4e2470;
        case 0x4e2474u: goto label_4e2474;
        case 0x4e2478u: goto label_4e2478;
        case 0x4e247cu: goto label_4e247c;
        case 0x4e2480u: goto label_4e2480;
        case 0x4e2484u: goto label_4e2484;
        case 0x4e2488u: goto label_4e2488;
        case 0x4e248cu: goto label_4e248c;
        case 0x4e2490u: goto label_4e2490;
        case 0x4e2494u: goto label_4e2494;
        case 0x4e2498u: goto label_4e2498;
        case 0x4e249cu: goto label_4e249c;
        case 0x4e24a0u: goto label_4e24a0;
        case 0x4e24a4u: goto label_4e24a4;
        case 0x4e24a8u: goto label_4e24a8;
        case 0x4e24acu: goto label_4e24ac;
        case 0x4e24b0u: goto label_4e24b0;
        case 0x4e24b4u: goto label_4e24b4;
        case 0x4e24b8u: goto label_4e24b8;
        case 0x4e24bcu: goto label_4e24bc;
        case 0x4e24c0u: goto label_4e24c0;
        case 0x4e24c4u: goto label_4e24c4;
        case 0x4e24c8u: goto label_4e24c8;
        case 0x4e24ccu: goto label_4e24cc;
        case 0x4e24d0u: goto label_4e24d0;
        case 0x4e24d4u: goto label_4e24d4;
        case 0x4e24d8u: goto label_4e24d8;
        case 0x4e24dcu: goto label_4e24dc;
        case 0x4e24e0u: goto label_4e24e0;
        case 0x4e24e4u: goto label_4e24e4;
        case 0x4e24e8u: goto label_4e24e8;
        case 0x4e24ecu: goto label_4e24ec;
        case 0x4e24f0u: goto label_4e24f0;
        case 0x4e24f4u: goto label_4e24f4;
        case 0x4e24f8u: goto label_4e24f8;
        case 0x4e24fcu: goto label_4e24fc;
        case 0x4e2500u: goto label_4e2500;
        case 0x4e2504u: goto label_4e2504;
        case 0x4e2508u: goto label_4e2508;
        case 0x4e250cu: goto label_4e250c;
        case 0x4e2510u: goto label_4e2510;
        case 0x4e2514u: goto label_4e2514;
        case 0x4e2518u: goto label_4e2518;
        case 0x4e251cu: goto label_4e251c;
        case 0x4e2520u: goto label_4e2520;
        case 0x4e2524u: goto label_4e2524;
        case 0x4e2528u: goto label_4e2528;
        case 0x4e252cu: goto label_4e252c;
        case 0x4e2530u: goto label_4e2530;
        case 0x4e2534u: goto label_4e2534;
        case 0x4e2538u: goto label_4e2538;
        case 0x4e253cu: goto label_4e253c;
        case 0x4e2540u: goto label_4e2540;
        case 0x4e2544u: goto label_4e2544;
        case 0x4e2548u: goto label_4e2548;
        case 0x4e254cu: goto label_4e254c;
        case 0x4e2550u: goto label_4e2550;
        case 0x4e2554u: goto label_4e2554;
        case 0x4e2558u: goto label_4e2558;
        case 0x4e255cu: goto label_4e255c;
        case 0x4e2560u: goto label_4e2560;
        case 0x4e2564u: goto label_4e2564;
        case 0x4e2568u: goto label_4e2568;
        case 0x4e256cu: goto label_4e256c;
        case 0x4e2570u: goto label_4e2570;
        case 0x4e2574u: goto label_4e2574;
        case 0x4e2578u: goto label_4e2578;
        case 0x4e257cu: goto label_4e257c;
        default: break;
    }

    ctx->pc = 0x4e21b0u;

label_4e21b0:
    // 0x4e21b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e21b4:
    // 0x4e21b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e21b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e21b8:
    // 0x4e21b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e21b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e21bc:
    // 0x4e21bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4e21bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e21c0:
    // 0x4e21c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e21c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e21c4:
    // 0x4e21c4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4e21c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e21c8:
    // 0x4e21c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e21c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e21cc:
    // 0x4e21cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e21ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e21d0:
    // 0x4e21d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e21d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e21d4:
    // 0x4e21d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e21d8:
    // 0x4e21d8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4e21dc:
    if (ctx->pc == 0x4E21DCu) {
        ctx->pc = 0x4E21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21D8u;
        // 0x4e21dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E21E0u;
        goto label_4e21e0;
    }
    ctx->pc = 0x4E21D8u;
    {
        const bool branch_taken_0x4e21d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21D8u;
        // 0x4e21dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e21d8) {
            ctx->pc = 0x4E21FCu;
            goto label_4e21fc;
        }
    }
    ctx->pc = 0x4E21E0u;
label_4e21e0:
    // 0x4e21e0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4e21e4:
    if (ctx->pc == 0x4E21E4u) {
        ctx->pc = 0x4E21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21E0u;
        // 0x4e21e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E21E8u;
        goto label_4e21e8;
    }
    ctx->pc = 0x4E21E0u;
    {
        const bool branch_taken_0x4e21e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21E0u;
        // 0x4e21e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e21e0) {
            ctx->pc = 0x4E2200u;
            goto label_4e2200;
        }
    }
    ctx->pc = 0x4E21E8u;
label_4e21e8:
    // 0x4e21e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e21ec:
    // 0x4e21ec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e21f0:
    // 0x4e21f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e21f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e21f4:
    // 0x4e21f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4e21f8:
    if (ctx->pc == 0x4E21F8u) {
        ctx->pc = 0x4E21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21F4u;
        // 0x4e21f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E21FCu;
        goto label_4e21fc;
    }
    ctx->pc = 0x4E21F4u;
    {
        const bool branch_taken_0x4e21f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E21F4u;
        // 0x4e21f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e21f4) {
            ctx->pc = 0x4E2290u;
            goto label_4e2290;
        }
    }
    ctx->pc = 0x4E21FCu;
label_4e21fc:
    // 0x4e21fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e2200:
    // 0x4e2200: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e2200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e2204:
    // 0x4e2204: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e2204u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e2208:
    // 0x4e2208: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e2208u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e220c:
    // 0x4e220c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e220cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e2210:
    // 0x4e2210: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e2210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e2214:
    // 0x4e2214: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e2218:
    // 0x4e2218: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e2218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e221c:
    // 0x4e221c: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e221cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e2220:
    // 0x4e2220: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e2220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e2224:
    // 0x4e2224: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e2224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e2228:
    // 0x4e2228: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e2228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e222c:
    // 0x4e222c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e2230:
    // 0x4e2230: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e2230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e2234:
    // 0x4e2234: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e2234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e2238:
    // 0x4e2238: 0x40f809  jalr        $v0
label_4e223c:
    if (ctx->pc == 0x4E223Cu) {
        ctx->pc = 0x4E223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2238u;
        // 0x4e223c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2240u;
        goto label_4e2240;
    }
    ctx->pc = 0x4E2238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E2240u);
        ctx->pc = 0x4E223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2238u;
        // 0x4e223c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2238u, 0x4E2240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E2240u;
label_4e2240:
    // 0x4e2240: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e2240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e2244:
    // 0x4e2244: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e2244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e2248:
    // 0x4e2248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e224c:
    if (ctx->pc == 0x4E224Cu) {
        ctx->pc = 0x4E224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2248u;
        // 0x4e224c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2250u;
        goto label_4e2250;
    }
    ctx->pc = 0x4E2248u;
    {
        const bool branch_taken_0x4e2248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2248u;
        // 0x4e224c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2248) {
            ctx->pc = 0x4E2260u;
            goto label_4e2260;
        }
    }
    ctx->pc = 0x4E2250u;
label_4e2250:
    // 0x4e2250: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e2250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e2254:
    // 0x4e2254: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e2254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e2258:
    // 0x4e2258: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e2258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e225c:
    // 0x4e225c: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e225cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e2260:
    // 0x4e2260: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4e2260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4e2264:
    // 0x4e2264: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e2268:
    // 0x4e2268: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4e226c:
    if (ctx->pc == 0x4E226Cu) {
        ctx->pc = 0x4E226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2268u;
        // 0x4e226c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2270u;
        goto label_4e2270;
    }
    ctx->pc = 0x4E2268u;
    {
        const bool branch_taken_0x4e2268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2268) {
            ctx->pc = 0x4E226Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2268u;
            // 0x4e226c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2280u;
            goto label_4e2280;
        }
    }
    ctx->pc = 0x4E2270u;
label_4e2270:
    // 0x4e2270: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4e2270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4e2274:
    // 0x4e2274: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4e2274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e2278:
    // 0x4e2278: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e227c:
    if (ctx->pc == 0x4E227Cu) {
        ctx->pc = 0x4E227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2278u;
        // 0x4e227c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2280u;
        goto label_4e2280;
    }
    ctx->pc = 0x4E2278u;
    {
        const bool branch_taken_0x4e2278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2278u;
        // 0x4e227c: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2278) {
            ctx->pc = 0x4E2304u;
            goto label_4e2304;
        }
    }
    ctx->pc = 0x4E2280u;
label_4e2280:
    // 0x4e2280: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4e2284:
    if (ctx->pc == 0x4E2284u) {
        ctx->pc = 0x4E2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2280u;
        // 0x4e2284: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2288u;
        goto label_4e2288;
    }
    ctx->pc = 0x4E2280u;
    {
        const bool branch_taken_0x4e2280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e2280) {
            ctx->pc = 0x4E2284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2280u;
            // 0x4e2284: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2304u;
            goto label_4e2304;
        }
    }
    ctx->pc = 0x4E2288u;
label_4e2288:
    // 0x4e2288: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4e228c:
    if (ctx->pc == 0x4E228Cu) {
        ctx->pc = 0x4E228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2288u;
        // 0x4e228c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2290u;
        goto label_4e2290;
    }
    ctx->pc = 0x4E2288u;
    {
        const bool branch_taken_0x4e2288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2288u;
        // 0x4e228c: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2288) {
            ctx->pc = 0x4E2308u;
            goto label_4e2308;
        }
    }
    ctx->pc = 0x4E2290u;
label_4e2290:
    // 0x4e2290: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e2290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e2294:
    // 0x4e2294: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4e2294u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e2298:
    // 0x4e2298: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4e2298u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4e229c:
    // 0x4e229c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e229cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e22a0:
    // 0x4e22a0: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e22a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e22a4:
    // 0x4e22a4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4e22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e22a8:
    // 0x4e22a8: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4e22a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4e22ac:
    // 0x4e22ac: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e22acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e22b0:
    // 0x4e22b0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4e22b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4e22b4:
    // 0x4e22b4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4e22b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4e22b8:
    // 0x4e22b8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e22b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e22bc:
    // 0x4e22bc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4e22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4e22c0:
    // 0x4e22c0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e22c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e22c4:
    // 0x4e22c4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4e22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4e22c8:
    // 0x4e22c8: 0x40f809  jalr        $v0
label_4e22cc:
    if (ctx->pc == 0x4E22CCu) {
        ctx->pc = 0x4E22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22C8u;
        // 0x4e22cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22D0u;
        goto label_4e22d0;
    }
    ctx->pc = 0x4E22C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E22D0u);
        ctx->pc = 0x4E22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22C8u;
        // 0x4e22cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E22C8u, 0x4E22D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E22D0u;
label_4e22d0:
    // 0x4e22d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e22d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e22d4:
    // 0x4e22d4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4e22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4e22d8:
    // 0x4e22d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4e22dc:
    if (ctx->pc == 0x4E22DCu) {
        ctx->pc = 0x4E22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22D8u;
        // 0x4e22dc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E22E0u;
        goto label_4e22e0;
    }
    ctx->pc = 0x4E22D8u;
    {
        const bool branch_taken_0x4e22d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22D8u;
        // 0x4e22dc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e22d8) {
            ctx->pc = 0x4E22F0u;
            goto label_4e22f0;
        }
    }
    ctx->pc = 0x4E22E0u;
label_4e22e0:
    // 0x4e22e0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4e22e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4e22e4:
    // 0x4e22e4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4e22e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4e22e8:
    // 0x4e22e8: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4e22e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e22ec:
    // 0x4e22ec: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4e22ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4e22f0:
    // 0x4e22f0: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4e22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4e22f4:
    // 0x4e22f4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e22f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e22f8:
    // 0x4e22f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e22fc:
    // 0x4e22fc: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4e2300:
    if (ctx->pc == 0x4E2300u) {
        ctx->pc = 0x4E2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E22FCu;
        // 0x4e2300: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2304u;
        goto label_4e2304;
    }
    ctx->pc = 0x4E22FCu;
    {
        const bool branch_taken_0x4e22fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e22fc) {
            ctx->pc = 0x4E2300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E22FCu;
            // 0x4e2300: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2304u;
            goto label_4e2304;
        }
    }
    ctx->pc = 0x4E2304u;
label_4e2304:
    // 0x4e2304: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4e2304u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4e2308:
    // 0x4e2308: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4e2308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e230c:
    // 0x4e230c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4e230cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4e2310:
    // 0x4e2310: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4e2310u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4e2314:
    // 0x4e2314: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e2314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e2318:
    // 0x4e2318: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4e2318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4e231c:
    // 0x4e231c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2320:
    // 0x4e2320: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4e2324:
    if (ctx->pc == 0x4E2324u) {
        ctx->pc = 0x4E2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2320u;
        // 0x4e2324: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2328u;
        goto label_4e2328;
    }
    ctx->pc = 0x4E2320u;
    {
        const bool branch_taken_0x4e2320 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2320u;
        // 0x4e2324: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2320) {
            ctx->pc = 0x4E2544u;
            goto label_4e2544;
        }
    }
    ctx->pc = 0x4E2328u;
label_4e2328:
    // 0x4e2328: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e2328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e232c:
    // 0x4e232c: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4e2330:
    if (ctx->pc == 0x4E2330u) {
        ctx->pc = 0x4E2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E232Cu;
        // 0x4e2330: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2334u;
        goto label_4e2334;
    }
    ctx->pc = 0x4E232Cu;
    {
        const bool branch_taken_0x4e232c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e232c) {
            ctx->pc = 0x4E2330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E232Cu;
            // 0x4e2330: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2548u;
            goto label_4e2548;
        }
    }
    ctx->pc = 0x4E2334u;
label_4e2334:
    // 0x4e2334: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e2334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e2338:
    // 0x4e2338: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e2338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e233c:
    // 0x4e233c: 0x0  nop
    ctx->pc = 0x4e233cu;
    // NOP
label_4e2340:
    // 0x4e2340: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e2340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e2344:
    // 0x4e2344: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4e2344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e2348:
    // 0x4e2348: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4e234c:
    if (ctx->pc == 0x4E234Cu) {
        ctx->pc = 0x4E2350u;
        goto label_4e2350;
    }
    ctx->pc = 0x4E2348u;
    {
        const bool branch_taken_0x4e2348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e2348) {
            ctx->pc = 0x4E2434u;
            goto label_4e2434;
        }
    }
    ctx->pc = 0x4E2350u;
label_4e2350:
    // 0x4e2350: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e2354:
    // 0x4e2354: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4e2358:
    if (ctx->pc == 0x4E2358u) {
        ctx->pc = 0x4E2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2354u;
        // 0x4e2358: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E235Cu;
        goto label_4e235c;
    }
    ctx->pc = 0x4E2354u;
    {
        const bool branch_taken_0x4e2354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2354) {
            ctx->pc = 0x4E2358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2354u;
            // 0x4e2358: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2374u;
            goto label_4e2374;
        }
    }
    ctx->pc = 0x4E235Cu;
label_4e235c:
    // 0x4e235c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e2360:
    // 0x4e2360: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4e2364:
    if (ctx->pc == 0x4E2364u) {
        ctx->pc = 0x4E2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2360u;
        // 0x4e2364: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2368u;
        goto label_4e2368;
    }
    ctx->pc = 0x4E2360u;
    {
        const bool branch_taken_0x4e2360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2360) {
            ctx->pc = 0x4E2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2360u;
            // 0x4e2364: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2374u;
            goto label_4e2374;
        }
    }
    ctx->pc = 0x4E2368u;
label_4e2368:
    // 0x4e2368: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e2368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e236c:
    // 0x4e236c: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e2370:
    if (ctx->pc == 0x4E2370u) {
        ctx->pc = 0x4E2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E236Cu;
        // 0x4e2370: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2374u;
        goto label_4e2374;
    }
    ctx->pc = 0x4E236Cu;
    {
        const bool branch_taken_0x4e236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E236Cu;
        // 0x4e2370: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e236c) {
            ctx->pc = 0x4E2450u;
            goto label_4e2450;
        }
    }
    ctx->pc = 0x4E2374u;
label_4e2374:
    // 0x4e2374: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4e2374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e2378:
    // 0x4e2378: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e237c:
    if (ctx->pc == 0x4E237Cu) {
        ctx->pc = 0x4E237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2378u;
        // 0x4e237c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2380u;
        goto label_4e2380;
    }
    ctx->pc = 0x4E2378u;
    {
        const bool branch_taken_0x4e2378 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e2378) {
            ctx->pc = 0x4E237Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2378u;
            // 0x4e237c: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E23D0u;
            goto label_4e23d0;
        }
    }
    ctx->pc = 0x4E2380u;
label_4e2380:
    // 0x4e2380: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e2380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e2384:
    // 0x4e2384: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e2384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e2388:
    // 0x4e2388: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e2388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e238c:
    // 0x4e238c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e2390:
    // 0x4e2390: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e2394:
    if (ctx->pc == 0x4E2394u) {
        ctx->pc = 0x4E2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2390u;
        // 0x4e2394: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2398u;
        goto label_4e2398;
    }
    ctx->pc = 0x4E2390u;
    {
        const bool branch_taken_0x4e2390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2390) {
            ctx->pc = 0x4E2394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2390u;
            // 0x4e2394: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2398u;
            goto label_4e2398;
        }
    }
    ctx->pc = 0x4E2398u;
label_4e2398:
    // 0x4e2398: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e239c:
    // 0x4e239c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e239cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e23a0:
    // 0x4e23a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e23a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e23a4:
    // 0x4e23a4: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e23a8:
    if (ctx->pc == 0x4E23A8u) {
        ctx->pc = 0x4E23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23A4u;
        // 0x4e23a8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E23ACu;
        goto label_4e23ac;
    }
    ctx->pc = 0x4E23A4u;
    {
        const bool branch_taken_0x4e23a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e23a4) {
            ctx->pc = 0x4E23A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E23A4u;
            // 0x4e23a8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E23B4u;
            goto label_4e23b4;
        }
    }
    ctx->pc = 0x4E23ACu;
label_4e23ac:
    // 0x4e23ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e23b0:
    if (ctx->pc == 0x4E23B0u) {
        ctx->pc = 0x4E23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23ACu;
        // 0x4e23b0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E23B4u;
        goto label_4e23b4;
    }
    ctx->pc = 0x4E23ACu;
    {
        const bool branch_taken_0x4e23ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23ACu;
        // 0x4e23b0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e23ac) {
            ctx->pc = 0x4E23C4u;
            goto label_4e23c4;
        }
    }
    ctx->pc = 0x4E23B4u;
label_4e23b4:
    // 0x4e23b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e23b8:
    // 0x4e23b8: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e23bc:
    if (ctx->pc == 0x4E23BCu) {
        ctx->pc = 0x4E23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23B8u;
        // 0x4e23bc: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E23C0u;
        goto label_4e23c0;
    }
    ctx->pc = 0x4E23B8u;
    {
        const bool branch_taken_0x4e23b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e23b8) {
            ctx->pc = 0x4E23BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E23B8u;
            // 0x4e23bc: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E23C4u;
            goto label_4e23c4;
        }
    }
    ctx->pc = 0x4E23C0u;
label_4e23c0:
    // 0x4e23c0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e23c4:
    // 0x4e23c4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e23c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e23c8:
    // 0x4e23c8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e23c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e23cc:
    // 0x4e23cc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e23d0:
    // 0x4e23d0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e23d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e23d4:
    // 0x4e23d4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e23d8:
    // 0x4e23d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e23dc:
    // 0x4e23dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e23e0:
    // 0x4e23e0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e23e4:
    // 0x4e23e4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e23e8:
    // 0x4e23e8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e23e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e23ec:
    // 0x4e23ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e23f0:
    // 0x4e23f0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e23f4:
    // 0x4e23f4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e23f8:
    // 0x4e23f8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e23fc:
    if (ctx->pc == 0x4E23FCu) {
        ctx->pc = 0x4E23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E23F8u;
        // 0x4e23fc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2400u;
        goto label_4e2400;
    }
    ctx->pc = 0x4E23F8u;
    {
        const bool branch_taken_0x4e23f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e23f8) {
            ctx->pc = 0x4E23FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E23F8u;
            // 0x4e23fc: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2400u;
            goto label_4e2400;
        }
    }
    ctx->pc = 0x4E2400u;
label_4e2400:
    // 0x4e2400: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e2404:
    // 0x4e2404: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e2404u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e2408:
    // 0x4e2408: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e240c:
    // 0x4e240c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e2410:
    if (ctx->pc == 0x4E2410u) {
        ctx->pc = 0x4E2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E240Cu;
        // 0x4e2410: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2414u;
        goto label_4e2414;
    }
    ctx->pc = 0x4E240Cu;
    {
        const bool branch_taken_0x4e240c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e240c) {
            ctx->pc = 0x4E2410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E240Cu;
            // 0x4e2410: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E241Cu;
            goto label_4e241c;
        }
    }
    ctx->pc = 0x4E2414u;
label_4e2414:
    // 0x4e2414: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e2418:
    if (ctx->pc == 0x4E2418u) {
        ctx->pc = 0x4E2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2414u;
        // 0x4e2418: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E241Cu;
        goto label_4e241c;
    }
    ctx->pc = 0x4E2414u;
    {
        const bool branch_taken_0x4e2414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2414u;
        // 0x4e2418: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2414) {
            ctx->pc = 0x4E242Cu;
            goto label_4e242c;
        }
    }
    ctx->pc = 0x4E241Cu;
label_4e241c:
    // 0x4e241c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e2420:
    // 0x4e2420: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e2424:
    if (ctx->pc == 0x4E2424u) {
        ctx->pc = 0x4E2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2420u;
        // 0x4e2424: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2428u;
        goto label_4e2428;
    }
    ctx->pc = 0x4E2420u;
    {
        const bool branch_taken_0x4e2420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e2420) {
            ctx->pc = 0x4E2424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2420u;
            // 0x4e2424: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E242Cu;
            goto label_4e242c;
        }
    }
    ctx->pc = 0x4E2428u;
label_4e2428:
    // 0x4e2428: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e2428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e242c:
    // 0x4e242c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e2430:
    if (ctx->pc == 0x4E2430u) {
        ctx->pc = 0x4E2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E242Cu;
        // 0x4e2430: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2434u;
        goto label_4e2434;
    }
    ctx->pc = 0x4E242Cu;
    {
        const bool branch_taken_0x4e242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E242Cu;
        // 0x4e2430: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e242c) {
            ctx->pc = 0x4E2524u;
            goto label_4e2524;
        }
    }
    ctx->pc = 0x4E2434u;
label_4e2434:
    // 0x4e2434: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e2438:
    if (ctx->pc == 0x4E2438u) {
        ctx->pc = 0x4E2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2434u;
        // 0x4e2438: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E243Cu;
        goto label_4e243c;
    }
    ctx->pc = 0x4E2434u;
    {
        const bool branch_taken_0x4e2434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e2434) {
            ctx->pc = 0x4E2438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2434u;
            // 0x4e2438: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2468u;
            goto label_4e2468;
        }
    }
    ctx->pc = 0x4E243Cu;
label_4e243c:
    // 0x4e243c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e2440:
    // 0x4e2440: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e2444:
    if (ctx->pc == 0x4E2444u) {
        ctx->pc = 0x4E2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2440u;
        // 0x4e2444: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2448u;
        goto label_4e2448;
    }
    ctx->pc = 0x4E2440u;
    {
        const bool branch_taken_0x4e2440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2440) {
            ctx->pc = 0x4E2444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2440u;
            // 0x4e2444: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2468u;
            goto label_4e2468;
        }
    }
    ctx->pc = 0x4E2448u;
label_4e2448:
    // 0x4e2448: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e2448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e244c:
    // 0x4e244c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e244cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e2450:
    // 0x4e2450: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2454:
    // 0x4e2454: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e2454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e2458:
    // 0x4e2458: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e2458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e245c:
    // 0x4e245c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2460:
    // 0x4e2460: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e2464:
    if (ctx->pc == 0x4E2464u) {
        ctx->pc = 0x4E2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2460u;
        // 0x4e2464: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2468u;
        goto label_4e2468;
    }
    ctx->pc = 0x4E2460u;
    {
        const bool branch_taken_0x4e2460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2460u;
        // 0x4e2464: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2460) {
            ctx->pc = 0x4E2528u;
            goto label_4e2528;
        }
    }
    ctx->pc = 0x4E2468u;
label_4e2468:
    // 0x4e2468: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e2468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e246c:
    // 0x4e246c: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e2470:
    if (ctx->pc == 0x4E2470u) {
        ctx->pc = 0x4E2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E246Cu;
        // 0x4e2470: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2474u;
        goto label_4e2474;
    }
    ctx->pc = 0x4E246Cu;
    {
        const bool branch_taken_0x4e246c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e246c) {
            ctx->pc = 0x4E2470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E246Cu;
            // 0x4e2470: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E24C4u;
            goto label_4e24c4;
        }
    }
    ctx->pc = 0x4E2474u;
label_4e2474:
    // 0x4e2474: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e2478:
    // 0x4e2478: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e2478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e247c:
    // 0x4e247c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e247cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e2480:
    // 0x4e2480: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e2484:
    // 0x4e2484: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e2488:
    if (ctx->pc == 0x4E2488u) {
        ctx->pc = 0x4E2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2484u;
        // 0x4e2488: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E248Cu;
        goto label_4e248c;
    }
    ctx->pc = 0x4E2484u;
    {
        const bool branch_taken_0x4e2484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e2484) {
            ctx->pc = 0x4E2488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2484u;
            // 0x4e2488: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E248Cu;
            goto label_4e248c;
        }
    }
    ctx->pc = 0x4E248Cu;
label_4e248c:
    // 0x4e248c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2490:
    // 0x4e2490: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e2490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e2494:
    // 0x4e2494: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e2494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2498:
    // 0x4e2498: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e249c:
    if (ctx->pc == 0x4E249Cu) {
        ctx->pc = 0x4E249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2498u;
        // 0x4e249c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E24A0u;
        goto label_4e24a0;
    }
    ctx->pc = 0x4E2498u;
    {
        const bool branch_taken_0x4e2498 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2498) {
            ctx->pc = 0x4E249Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2498u;
            // 0x4e249c: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E24A8u;
            goto label_4e24a8;
        }
    }
    ctx->pc = 0x4E24A0u;
label_4e24a0:
    // 0x4e24a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e24a4:
    if (ctx->pc == 0x4E24A4u) {
        ctx->pc = 0x4E24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E24A0u;
        // 0x4e24a4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E24A8u;
        goto label_4e24a8;
    }
    ctx->pc = 0x4E24A0u;
    {
        const bool branch_taken_0x4e24a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E24A0u;
        // 0x4e24a4: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e24a0) {
            ctx->pc = 0x4E24B8u;
            goto label_4e24b8;
        }
    }
    ctx->pc = 0x4E24A8u;
label_4e24a8:
    // 0x4e24a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e24a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e24ac:
    // 0x4e24ac: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e24b0:
    if (ctx->pc == 0x4E24B0u) {
        ctx->pc = 0x4E24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E24ACu;
        // 0x4e24b0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E24B4u;
        goto label_4e24b4;
    }
    ctx->pc = 0x4E24ACu;
    {
        const bool branch_taken_0x4e24ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e24ac) {
            ctx->pc = 0x4E24B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E24ACu;
            // 0x4e24b0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E24B8u;
            goto label_4e24b8;
        }
    }
    ctx->pc = 0x4E24B4u;
label_4e24b4:
    // 0x4e24b4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e24b8:
    // 0x4e24b8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e24bc:
    // 0x4e24bc: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e24bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e24c0:
    // 0x4e24c0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e24c4:
    // 0x4e24c4: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e24c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e24c8:
    // 0x4e24c8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e24cc:
    // 0x4e24cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e24d0:
    // 0x4e24d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e24d4:
    // 0x4e24d4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e24d8:
    // 0x4e24d8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e24dc:
    // 0x4e24dc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e24dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e24e0:
    // 0x4e24e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e24e4:
    // 0x4e24e4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e24e8:
    // 0x4e24e8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e24ec:
    // 0x4e24ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e24f0:
    if (ctx->pc == 0x4E24F0u) {
        ctx->pc = 0x4E24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E24ECu;
        // 0x4e24f0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E24F4u;
        goto label_4e24f4;
    }
    ctx->pc = 0x4E24ECu;
    {
        const bool branch_taken_0x4e24ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e24ec) {
            ctx->pc = 0x4E24F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E24ECu;
            // 0x4e24f0: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E24F4u;
            goto label_4e24f4;
        }
    }
    ctx->pc = 0x4E24F4u;
label_4e24f4:
    // 0x4e24f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e24f8:
    // 0x4e24f8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e24fc:
    // 0x4e24fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2500:
    // 0x4e2500: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e2504:
    if (ctx->pc == 0x4E2504u) {
        ctx->pc = 0x4E2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2500u;
        // 0x4e2504: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2508u;
        goto label_4e2508;
    }
    ctx->pc = 0x4E2500u;
    {
        const bool branch_taken_0x4e2500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e2500) {
            ctx->pc = 0x4E2504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2500u;
            // 0x4e2504: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2510u;
            goto label_4e2510;
        }
    }
    ctx->pc = 0x4E2508u;
label_4e2508:
    // 0x4e2508: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e250c:
    if (ctx->pc == 0x4E250Cu) {
        ctx->pc = 0x4E250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2508u;
        // 0x4e250c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2510u;
        goto label_4e2510;
    }
    ctx->pc = 0x4E2508u;
    {
        const bool branch_taken_0x4e2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2508u;
        // 0x4e250c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2508) {
            ctx->pc = 0x4E2520u;
            goto label_4e2520;
        }
    }
    ctx->pc = 0x4E2510u;
label_4e2510:
    // 0x4e2510: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e2514:
    // 0x4e2514: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e2518:
    if (ctx->pc == 0x4E2518u) {
        ctx->pc = 0x4E2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2514u;
        // 0x4e2518: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E251Cu;
        goto label_4e251c;
    }
    ctx->pc = 0x4E2514u;
    {
        const bool branch_taken_0x4e2514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e2514) {
            ctx->pc = 0x4E2518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2514u;
            // 0x4e2518: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2520u;
            goto label_4e2520;
        }
    }
    ctx->pc = 0x4E251Cu;
label_4e251c:
    // 0x4e251c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e251cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e2520:
    // 0x4e2520: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e2520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e2524:
    // 0x4e2524: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e2524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e2528:
    // 0x4e2528: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e2528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e252c:
    // 0x4e252c: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e2530:
    if (ctx->pc == 0x4E2530u) {
        ctx->pc = 0x4E2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E252Cu;
        // 0x4e2530: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2534u;
        goto label_4e2534;
    }
    ctx->pc = 0x4E252Cu;
    {
        const bool branch_taken_0x4e252c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e252c) {
            ctx->pc = 0x4E2530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E252Cu;
            // 0x4e2530: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2548u;
            goto label_4e2548;
        }
    }
    ctx->pc = 0x4E2534u;
label_4e2534:
    // 0x4e2534: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e2538:
    // 0x4e2538: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e2538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e253c:
    // 0x4e253c: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e2540:
    if (ctx->pc == 0x4E2540u) {
        ctx->pc = 0x4E2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E253Cu;
        // 0x4e2540: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2544u;
        goto label_4e2544;
    }
    ctx->pc = 0x4E253Cu;
    {
        const bool branch_taken_0x4e253c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e253c) {
            ctx->pc = 0x4E2540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E253Cu;
            // 0x4e2540: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e2340;
        }
    }
    ctx->pc = 0x4E2544u;
label_4e2544:
    // 0x4e2544: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e2544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e2548:
    // 0x4e2548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e2548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e254c:
    // 0x4e254c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e254cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e2550:
    // 0x4e2550: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e2550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e2554:
    // 0x4e2554: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e2554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e2558:
    // 0x4e2558: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e2558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e255c:
    // 0x4e255c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e2560:
    // 0x4e2560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e2560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e2564:
    // 0x4e2564: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e2564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e2568:
    // 0x4e2568: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e2568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e256c:
    // 0x4e256c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e256cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e2570:
    // 0x4e2570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e2570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e2574:
    // 0x4e2574: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e2574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e2578:
    // 0x4e2578: 0x3e00008  jr          $ra
label_4e257c:
    if (ctx->pc == 0x4E257Cu) {
        ctx->pc = 0x4E257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2578u;
        // 0x4e257c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2580u;
        goto label_fallthrough_0x4e2578;
    }
    ctx->pc = 0x4E2578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2578u;
        // 0x4e257c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e2578:
    ctx->pc = 0x4E2580u;
}
