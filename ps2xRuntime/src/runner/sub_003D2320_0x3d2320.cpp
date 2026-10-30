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

// Function: sub_003D2320
// Address: 0x3d2320 - 0x3d2768
void sub_003D2320_0x3d2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2320_0x3d2320");
#endif

    switch (ctx->pc) {
        case 0x3d2320u: goto label_3d2320;
        case 0x3d2324u: goto label_3d2324;
        case 0x3d2328u: goto label_3d2328;
        case 0x3d232cu: goto label_3d232c;
        case 0x3d2330u: goto label_3d2330;
        case 0x3d2334u: goto label_3d2334;
        case 0x3d2338u: goto label_3d2338;
        case 0x3d233cu: goto label_3d233c;
        case 0x3d2340u: goto label_3d2340;
        case 0x3d2344u: goto label_3d2344;
        case 0x3d2348u: goto label_3d2348;
        case 0x3d234cu: goto label_3d234c;
        case 0x3d2350u: goto label_3d2350;
        case 0x3d2354u: goto label_3d2354;
        case 0x3d2358u: goto label_3d2358;
        case 0x3d235cu: goto label_3d235c;
        case 0x3d2360u: goto label_3d2360;
        case 0x3d2364u: goto label_3d2364;
        case 0x3d2368u: goto label_3d2368;
        case 0x3d236cu: goto label_3d236c;
        case 0x3d2370u: goto label_3d2370;
        case 0x3d2374u: goto label_3d2374;
        case 0x3d2378u: goto label_3d2378;
        case 0x3d237cu: goto label_3d237c;
        case 0x3d2380u: goto label_3d2380;
        case 0x3d2384u: goto label_3d2384;
        case 0x3d2388u: goto label_3d2388;
        case 0x3d238cu: goto label_3d238c;
        case 0x3d2390u: goto label_3d2390;
        case 0x3d2394u: goto label_3d2394;
        case 0x3d2398u: goto label_3d2398;
        case 0x3d239cu: goto label_3d239c;
        case 0x3d23a0u: goto label_3d23a0;
        case 0x3d23a4u: goto label_3d23a4;
        case 0x3d23a8u: goto label_3d23a8;
        case 0x3d23acu: goto label_3d23ac;
        case 0x3d23b0u: goto label_3d23b0;
        case 0x3d23b4u: goto label_3d23b4;
        case 0x3d23b8u: goto label_3d23b8;
        case 0x3d23bcu: goto label_3d23bc;
        case 0x3d23c0u: goto label_3d23c0;
        case 0x3d23c4u: goto label_3d23c4;
        case 0x3d23c8u: goto label_3d23c8;
        case 0x3d23ccu: goto label_3d23cc;
        case 0x3d23d0u: goto label_3d23d0;
        case 0x3d23d4u: goto label_3d23d4;
        case 0x3d23d8u: goto label_3d23d8;
        case 0x3d23dcu: goto label_3d23dc;
        case 0x3d23e0u: goto label_3d23e0;
        case 0x3d23e4u: goto label_3d23e4;
        case 0x3d23e8u: goto label_3d23e8;
        case 0x3d23ecu: goto label_3d23ec;
        case 0x3d23f0u: goto label_3d23f0;
        case 0x3d23f4u: goto label_3d23f4;
        case 0x3d23f8u: goto label_3d23f8;
        case 0x3d23fcu: goto label_3d23fc;
        case 0x3d2400u: goto label_3d2400;
        case 0x3d2404u: goto label_3d2404;
        case 0x3d2408u: goto label_3d2408;
        case 0x3d240cu: goto label_3d240c;
        case 0x3d2410u: goto label_3d2410;
        case 0x3d2414u: goto label_3d2414;
        case 0x3d2418u: goto label_3d2418;
        case 0x3d241cu: goto label_3d241c;
        case 0x3d2420u: goto label_3d2420;
        case 0x3d2424u: goto label_3d2424;
        case 0x3d2428u: goto label_3d2428;
        case 0x3d242cu: goto label_3d242c;
        case 0x3d2430u: goto label_3d2430;
        case 0x3d2434u: goto label_3d2434;
        case 0x3d2438u: goto label_3d2438;
        case 0x3d243cu: goto label_3d243c;
        case 0x3d2440u: goto label_3d2440;
        case 0x3d2444u: goto label_3d2444;
        case 0x3d2448u: goto label_3d2448;
        case 0x3d244cu: goto label_3d244c;
        case 0x3d2450u: goto label_3d2450;
        case 0x3d2454u: goto label_3d2454;
        case 0x3d2458u: goto label_3d2458;
        case 0x3d245cu: goto label_3d245c;
        case 0x3d2460u: goto label_3d2460;
        case 0x3d2464u: goto label_3d2464;
        case 0x3d2468u: goto label_3d2468;
        case 0x3d246cu: goto label_3d246c;
        case 0x3d2470u: goto label_3d2470;
        case 0x3d2474u: goto label_3d2474;
        case 0x3d2478u: goto label_3d2478;
        case 0x3d247cu: goto label_3d247c;
        case 0x3d2480u: goto label_3d2480;
        case 0x3d2484u: goto label_3d2484;
        case 0x3d2488u: goto label_3d2488;
        case 0x3d248cu: goto label_3d248c;
        case 0x3d2490u: goto label_3d2490;
        case 0x3d2494u: goto label_3d2494;
        case 0x3d2498u: goto label_3d2498;
        case 0x3d249cu: goto label_3d249c;
        case 0x3d24a0u: goto label_3d24a0;
        case 0x3d24a4u: goto label_3d24a4;
        case 0x3d24a8u: goto label_3d24a8;
        case 0x3d24acu: goto label_3d24ac;
        case 0x3d24b0u: goto label_3d24b0;
        case 0x3d24b4u: goto label_3d24b4;
        case 0x3d24b8u: goto label_3d24b8;
        case 0x3d24bcu: goto label_3d24bc;
        case 0x3d24c0u: goto label_3d24c0;
        case 0x3d24c4u: goto label_3d24c4;
        case 0x3d24c8u: goto label_3d24c8;
        case 0x3d24ccu: goto label_3d24cc;
        case 0x3d24d0u: goto label_3d24d0;
        case 0x3d24d4u: goto label_3d24d4;
        case 0x3d24d8u: goto label_3d24d8;
        case 0x3d24dcu: goto label_3d24dc;
        case 0x3d24e0u: goto label_3d24e0;
        case 0x3d24e4u: goto label_3d24e4;
        case 0x3d24e8u: goto label_3d24e8;
        case 0x3d24ecu: goto label_3d24ec;
        case 0x3d24f0u: goto label_3d24f0;
        case 0x3d24f4u: goto label_3d24f4;
        case 0x3d24f8u: goto label_3d24f8;
        case 0x3d24fcu: goto label_3d24fc;
        case 0x3d2500u: goto label_3d2500;
        case 0x3d2504u: goto label_3d2504;
        case 0x3d2508u: goto label_3d2508;
        case 0x3d250cu: goto label_3d250c;
        case 0x3d2510u: goto label_3d2510;
        case 0x3d2514u: goto label_3d2514;
        case 0x3d2518u: goto label_3d2518;
        case 0x3d251cu: goto label_3d251c;
        case 0x3d2520u: goto label_3d2520;
        case 0x3d2524u: goto label_3d2524;
        case 0x3d2528u: goto label_3d2528;
        case 0x3d252cu: goto label_3d252c;
        case 0x3d2530u: goto label_3d2530;
        case 0x3d2534u: goto label_3d2534;
        case 0x3d2538u: goto label_3d2538;
        case 0x3d253cu: goto label_3d253c;
        case 0x3d2540u: goto label_3d2540;
        case 0x3d2544u: goto label_3d2544;
        case 0x3d2548u: goto label_3d2548;
        case 0x3d254cu: goto label_3d254c;
        case 0x3d2550u: goto label_3d2550;
        case 0x3d2554u: goto label_3d2554;
        case 0x3d2558u: goto label_3d2558;
        case 0x3d255cu: goto label_3d255c;
        case 0x3d2560u: goto label_3d2560;
        case 0x3d2564u: goto label_3d2564;
        case 0x3d2568u: goto label_3d2568;
        case 0x3d256cu: goto label_3d256c;
        case 0x3d2570u: goto label_3d2570;
        case 0x3d2574u: goto label_3d2574;
        case 0x3d2578u: goto label_3d2578;
        case 0x3d257cu: goto label_3d257c;
        case 0x3d2580u: goto label_3d2580;
        case 0x3d2584u: goto label_3d2584;
        case 0x3d2588u: goto label_3d2588;
        case 0x3d258cu: goto label_3d258c;
        case 0x3d2590u: goto label_3d2590;
        case 0x3d2594u: goto label_3d2594;
        case 0x3d2598u: goto label_3d2598;
        case 0x3d259cu: goto label_3d259c;
        case 0x3d25a0u: goto label_3d25a0;
        case 0x3d25a4u: goto label_3d25a4;
        case 0x3d25a8u: goto label_3d25a8;
        case 0x3d25acu: goto label_3d25ac;
        case 0x3d25b0u: goto label_3d25b0;
        case 0x3d25b4u: goto label_3d25b4;
        case 0x3d25b8u: goto label_3d25b8;
        case 0x3d25bcu: goto label_3d25bc;
        case 0x3d25c0u: goto label_3d25c0;
        case 0x3d25c4u: goto label_3d25c4;
        case 0x3d25c8u: goto label_3d25c8;
        case 0x3d25ccu: goto label_3d25cc;
        case 0x3d25d0u: goto label_3d25d0;
        case 0x3d25d4u: goto label_3d25d4;
        case 0x3d25d8u: goto label_3d25d8;
        case 0x3d25dcu: goto label_3d25dc;
        case 0x3d25e0u: goto label_3d25e0;
        case 0x3d25e4u: goto label_3d25e4;
        case 0x3d25e8u: goto label_3d25e8;
        case 0x3d25ecu: goto label_3d25ec;
        case 0x3d25f0u: goto label_3d25f0;
        case 0x3d25f4u: goto label_3d25f4;
        case 0x3d25f8u: goto label_3d25f8;
        case 0x3d25fcu: goto label_3d25fc;
        case 0x3d2600u: goto label_3d2600;
        case 0x3d2604u: goto label_3d2604;
        case 0x3d2608u: goto label_3d2608;
        case 0x3d260cu: goto label_3d260c;
        case 0x3d2610u: goto label_3d2610;
        case 0x3d2614u: goto label_3d2614;
        case 0x3d2618u: goto label_3d2618;
        case 0x3d261cu: goto label_3d261c;
        case 0x3d2620u: goto label_3d2620;
        case 0x3d2624u: goto label_3d2624;
        case 0x3d2628u: goto label_3d2628;
        case 0x3d262cu: goto label_3d262c;
        case 0x3d2630u: goto label_3d2630;
        case 0x3d2634u: goto label_3d2634;
        case 0x3d2638u: goto label_3d2638;
        case 0x3d263cu: goto label_3d263c;
        case 0x3d2640u: goto label_3d2640;
        case 0x3d2644u: goto label_3d2644;
        case 0x3d2648u: goto label_3d2648;
        case 0x3d264cu: goto label_3d264c;
        case 0x3d2650u: goto label_3d2650;
        case 0x3d2654u: goto label_3d2654;
        case 0x3d2658u: goto label_3d2658;
        case 0x3d265cu: goto label_3d265c;
        case 0x3d2660u: goto label_3d2660;
        case 0x3d2664u: goto label_3d2664;
        case 0x3d2668u: goto label_3d2668;
        case 0x3d266cu: goto label_3d266c;
        case 0x3d2670u: goto label_3d2670;
        case 0x3d2674u: goto label_3d2674;
        case 0x3d2678u: goto label_3d2678;
        case 0x3d267cu: goto label_3d267c;
        case 0x3d2680u: goto label_3d2680;
        case 0x3d2684u: goto label_3d2684;
        case 0x3d2688u: goto label_3d2688;
        case 0x3d268cu: goto label_3d268c;
        case 0x3d2690u: goto label_3d2690;
        case 0x3d2694u: goto label_3d2694;
        case 0x3d2698u: goto label_3d2698;
        case 0x3d269cu: goto label_3d269c;
        case 0x3d26a0u: goto label_3d26a0;
        case 0x3d26a4u: goto label_3d26a4;
        case 0x3d26a8u: goto label_3d26a8;
        case 0x3d26acu: goto label_3d26ac;
        case 0x3d26b0u: goto label_3d26b0;
        case 0x3d26b4u: goto label_3d26b4;
        case 0x3d26b8u: goto label_3d26b8;
        case 0x3d26bcu: goto label_3d26bc;
        case 0x3d26c0u: goto label_3d26c0;
        case 0x3d26c4u: goto label_3d26c4;
        case 0x3d26c8u: goto label_3d26c8;
        case 0x3d26ccu: goto label_3d26cc;
        case 0x3d26d0u: goto label_3d26d0;
        case 0x3d26d4u: goto label_3d26d4;
        case 0x3d26d8u: goto label_3d26d8;
        case 0x3d26dcu: goto label_3d26dc;
        case 0x3d26e0u: goto label_3d26e0;
        case 0x3d26e4u: goto label_3d26e4;
        case 0x3d26e8u: goto label_3d26e8;
        case 0x3d26ecu: goto label_3d26ec;
        case 0x3d26f0u: goto label_3d26f0;
        case 0x3d26f4u: goto label_3d26f4;
        case 0x3d26f8u: goto label_3d26f8;
        case 0x3d26fcu: goto label_3d26fc;
        case 0x3d2700u: goto label_3d2700;
        case 0x3d2704u: goto label_3d2704;
        case 0x3d2708u: goto label_3d2708;
        case 0x3d270cu: goto label_3d270c;
        case 0x3d2710u: goto label_3d2710;
        case 0x3d2714u: goto label_3d2714;
        case 0x3d2718u: goto label_3d2718;
        case 0x3d271cu: goto label_3d271c;
        case 0x3d2720u: goto label_3d2720;
        case 0x3d2724u: goto label_3d2724;
        case 0x3d2728u: goto label_3d2728;
        case 0x3d272cu: goto label_3d272c;
        case 0x3d2730u: goto label_3d2730;
        case 0x3d2734u: goto label_3d2734;
        case 0x3d2738u: goto label_3d2738;
        case 0x3d273cu: goto label_3d273c;
        case 0x3d2740u: goto label_3d2740;
        case 0x3d2744u: goto label_3d2744;
        case 0x3d2748u: goto label_3d2748;
        case 0x3d274cu: goto label_3d274c;
        case 0x3d2750u: goto label_3d2750;
        case 0x3d2754u: goto label_3d2754;
        case 0x3d2758u: goto label_3d2758;
        case 0x3d275cu: goto label_3d275c;
        case 0x3d2760u: goto label_3d2760;
        case 0x3d2764u: goto label_3d2764;
        default: break;
    }

    ctx->pc = 0x3d2320u;

label_3d2320:
    // 0x3d2320: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x3d2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
label_3d2324:
    // 0x3d2324: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x3d2324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_3d2328:
    // 0x3d2328: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x3d2328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_3d232c:
    // 0x3d232c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d232cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d2330:
    // 0x3d2330: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d2330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_3d2334:
    // 0x3d2334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d2334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2338:
    // 0x3d2338: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d2338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_3d233c:
    // 0x3d233c: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
label_3d2340:
    // 0x3d2340: 0xe7b80540  swc1        $f24, 0x540($sp)
    ctx->pc = 0x3d2340u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1344), bits); }
label_3d2344:
    // 0x3d2344: 0xe7b60530  swc1        $f22, 0x530($sp)
    ctx->pc = 0x3d2344u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_3d2348:
    // 0x3d2348: 0xe7b50528  swc1        $f21, 0x528($sp)
    ctx->pc = 0x3d2348u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_3d234c:
    // 0x3d234c: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_3d2350:
    // 0x3d2350: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d2350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
label_3d2354:
    // 0x3d2354: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3d2354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3d2358:
    // 0x3d2358: 0xe7b70538  swc1        $f23, 0x538($sp)
    ctx->pc = 0x3d2358u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1336), bits); }
label_3d235c:
    // 0x3d235c: 0xe7b40520  swc1        $f20, 0x520($sp)
    ctx->pc = 0x3d235cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_3d2360:
    // 0x3d2360: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3d2360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
label_3d2364:
    // 0x3d2364: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3d2364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3d2368:
    // 0x3d2368: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d236c:
    // 0x3d236c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3d236cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3d2370:
    // 0x3d2370: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d2370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d2374:
    // 0x3d2374: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d2374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d2378:
    // 0x3d2378: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d237c:
    // 0x3d237c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d237cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d2380:
    // 0x3d2380: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3d2380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3d2384:
    // 0x3d2384: 0x40f809  jalr        $v0
label_3d2388:
    if (ctx->pc == 0x3D2388u) {
        ctx->pc = 0x3D2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2384u;
        // 0x3d2388: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D238Cu;
        goto label_3d238c;
    }
    ctx->pc = 0x3D2384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D238Cu);
        ctx->pc = 0x3D2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2384u;
        // 0x3d2388: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2384u, 0x3D238Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D238Cu;
label_3d238c:
    // 0x3d238c: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3d238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3d2390:
    // 0x3d2390: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d2390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2394:
    // 0x3d2394: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d2394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d2398:
    // 0x3d2398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d239c:
    // 0x3d239c: 0xc0e858c  jal         func_3A1630
label_3d23a0:
    if (ctx->pc == 0x3D23A0u) {
        ctx->pc = 0x3D23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D239Cu;
        // 0x3d23a0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23A4u;
        goto label_3d23a4;
    }
    ctx->pc = 0x3D239Cu;
    SET_GPR_U32(ctx, 31, 0x3D23A4u);
    ctx->pc = 0x3D23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D239Cu;
    // 0x3d23a0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D239Cu, 0x3D23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23A4u;
label_3d23a4:
    // 0x3d23a4: 0xc0ea14c  jal         func_3A8530
label_3d23a8:
    if (ctx->pc == 0x3D23A8u) {
        ctx->pc = 0x3D23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23A4u;
        // 0x3d23a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23ACu;
        goto label_3d23ac;
    }
    ctx->pc = 0x3D23A4u;
    SET_GPR_U32(ctx, 31, 0x3D23ACu);
    ctx->pc = 0x3D23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23A4u;
    // 0x3d23a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D23A4u, 0x3D23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23ACu;
label_3d23ac:
    // 0x3d23ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d23acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d23b0:
    // 0x3d23b0: 0xc0ea12a  jal         func_3A84A8
label_3d23b4:
    if (ctx->pc == 0x3D23B4u) {
        ctx->pc = 0x3D23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23B0u;
        // 0x3d23b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23B8u;
        goto label_3d23b8;
    }
    ctx->pc = 0x3D23B0u;
    SET_GPR_U32(ctx, 31, 0x3D23B8u);
    ctx->pc = 0x3D23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23B0u;
    // 0x3d23b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D23B0u, 0x3D23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23B8u;
label_3d23b8:
    // 0x3d23b8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d23b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d23bc:
    // 0x3d23bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d23bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d23c0:
    // 0x3d23c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d23c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d23c4:
    // 0x3d23c4: 0xc0ea12a  jal         func_3A84A8
label_3d23c8:
    if (ctx->pc == 0x3D23C8u) {
        ctx->pc = 0x3D23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23C4u;
        // 0x3d23c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23CCu;
        goto label_3d23cc;
    }
    ctx->pc = 0x3D23C4u;
    SET_GPR_U32(ctx, 31, 0x3D23CCu);
    ctx->pc = 0x3D23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23C4u;
    // 0x3d23c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D23C4u, 0x3D23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23CCu;
label_3d23cc:
    // 0x3d23cc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d23ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d23d0:
    // 0x3d23d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d23d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d23d4:
    // 0x3d23d4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d23d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d23d8:
    // 0x3d23d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d23d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d23dc:
    // 0x3d23dc: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3d23dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3d23e0:
    // 0x3d23e0: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3d23e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3d23e4:
    // 0x3d23e4: 0xc0e9132  jal         func_3A44C8
label_3d23e8:
    if (ctx->pc == 0x3D23E8u) {
        ctx->pc = 0x3D23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23E4u;
        // 0x3d23e8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D23ECu;
        goto label_3d23ec;
    }
    ctx->pc = 0x3D23E4u;
    SET_GPR_U32(ctx, 31, 0x3D23ECu);
    ctx->pc = 0x3D23E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23E4u;
    // 0x3d23e8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3D23E4u, 0x3D23ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23ECu;
label_3d23ec:
    // 0x3d23ec: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3d23ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3d23f0:
    // 0x3d23f0: 0x27b00470  addiu       $s0, $sp, 0x470
    ctx->pc = 0x3d23f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d23f4:
    // 0x3d23f4: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x3d23f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d23f8:
    // 0x3d23f8: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x3d23f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
label_3d23fc:
    // 0x3d23fc: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3d23fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d2400:
    // 0x3d2400: 0x26b54c98  addiu       $s5, $s5, 0x4C98
    ctx->pc = 0x3d2400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 19608));
label_3d2404:
    // 0x3d2404: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3d2404u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d2408:
    // 0x3d2408: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x3d2408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d240c:
    // 0x3d240c: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3d240cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3d2410:
    // 0x3d2410: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3d2410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d2414:
    // 0x3d2414: 0x7ba30470  lq          $v1, 0x470($sp)
    ctx->pc = 0x3d2414u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2418:
    // 0x3d2418: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3d2418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3d241c:
    // 0x3d241c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d241cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d2420:
    // 0x3d2420: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d2420u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d2424:
    // 0x3d2424: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d2424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2428:
    // 0x3d2428: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d2428u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d242c:
    // 0x3d242c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d242cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2430:
    // 0x3d2430: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d2430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2434:
    // 0x3d2434: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d2434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2438:
    // 0x3d2438: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d2438u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d243c:
    // 0x3d243c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d243cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2440:
    // 0x3d2440: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d2440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2444:
    // 0x3d2444: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d2444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d2448:
    // 0x3d2448: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d2448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d244c:
    // 0x3d244c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d244cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d2450:
    // 0x3d2450: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d2450u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2454:
    // 0x3d2454: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d2454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2458:
    // 0x3d2458: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d2458u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d245c:
    // 0x3d245c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d245cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d2460:
    // 0x3d2460: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3d2460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3d2464:
    // 0x3d2464: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d2464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d2468:
    // 0x3d2468: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d2468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d246c:
    // 0x3d246c: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3d246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3d2470:
    // 0x3d2470: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3d2470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3d2474:
    // 0x3d2474: 0xc136b18  jal         func_4DAC60
label_3d2478:
    if (ctx->pc == 0x3D2478u) {
        ctx->pc = 0x3D2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2474u;
        // 0x3d2478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D247Cu;
        goto label_3d247c;
    }
    ctx->pc = 0x3D2474u;
    SET_GPR_U32(ctx, 31, 0x3D247Cu);
    ctx->pc = 0x3D2478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2474u;
    // 0x3d2478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D2474u, 0x3D247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D247Cu;
label_3d247c:
    // 0x3d247c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3d247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3d2480:
    // 0x3d2480: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d2480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d2484:
    // 0x3d2484: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d2484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2488:
    // 0x3d2488: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3d2488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d248c:
    // 0x3d248c: 0x27b60480  addiu       $s6, $sp, 0x480
    ctx->pc = 0x3d248cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_3d2490:
    // 0x3d2490: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3d2490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d2494:
    // 0x3d2494: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d2494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d2498:
    // 0x3d2498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d2498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d249c:
    // 0x3d249c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d24a0:
    // 0x3d24a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d24a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d24a4:
    // 0x3d24a4: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3d24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3d24a8:
    // 0x3d24a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d24a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d24ac:
    // 0x3d24ac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3d24acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3d24b0:
    // 0x3d24b0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3d24b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3d24b4:
    // 0x3d24b4: 0xc0e9fa6  jal         func_3A7E98
label_3d24b8:
    if (ctx->pc == 0x3D24B8u) {
        ctx->pc = 0x3D24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24B4u;
        // 0x3d24b8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D24BCu;
        goto label_3d24bc;
    }
    ctx->pc = 0x3D24B4u;
    SET_GPR_U32(ctx, 31, 0x3D24BCu);
    ctx->pc = 0x3D24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24B4u;
    // 0x3d24b8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D24B4u, 0x3D24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24BCu;
label_3d24bc:
    // 0x3d24bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d24bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d24c0:
    // 0x3d24c0: 0xc0f15bc  jal         func_3C56F0
label_3d24c4:
    if (ctx->pc == 0x3D24C4u) {
        ctx->pc = 0x3D24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D24C0u;
        // 0x3d24c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D24C8u;
        goto label_3d24c8;
    }
    ctx->pc = 0x3D24C0u;
    SET_GPR_U32(ctx, 31, 0x3D24C8u);
    ctx->pc = 0x3D24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D24C0u;
    // 0x3d24c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D24C0u, 0x3D24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D24C8u;
label_3d24c8:
    // 0x3d24c8: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x3d24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_3d24cc:
    // 0x3d24cc: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d24ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d24d0:
    // 0x3d24d0: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3d24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3d24d4:
    // 0x3d24d4: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3d24d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d24d8:
    // 0x3d24d8: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x3d24d8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d24dc:
    // 0x3d24dc: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3d24dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d24e0:
    // 0x3d24e0: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d24e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d24e4:
    // 0x3d24e4: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3d24e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3d24e8:
    // 0x3d24e8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d24e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d24ec:
    // 0x3d24ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d24ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d24f0:
    // 0x3d24f0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d24f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d24f4:
    // 0x3d24f4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d24f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d24f8:
    // 0x3d24f8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d24f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d24fc:
    // 0x3d24fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d24fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2500:
    // 0x3d2500: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d2500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2504:
    // 0x3d2504: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d2504u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d2508:
    // 0x3d2508: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d2508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d250c:
    // 0x3d250c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d250cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2510:
    // 0x3d2510: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d2510u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d2514:
    // 0x3d2514: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d2514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2518:
    // 0x3d2518: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d2518u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d251c:
    // 0x3d251c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d251cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2520:
    // 0x3d2520: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d2520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2524:
    // 0x3d2524: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d2524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2528:
    // 0x3d2528: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d2528u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d252c:
    // 0x3d252c: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d2530:
    // 0x3d2530: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d2530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d2534:
    // 0x3d2534: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d2534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d2538:
    // 0x3d2538: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d2538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d253c:
    // 0x3d253c: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3d253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3d2540:
    // 0x3d2540: 0xc136b18  jal         func_4DAC60
label_3d2544:
    if (ctx->pc == 0x3D2544u) {
        ctx->pc = 0x3D2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2540u;
        // 0x3d2544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2548u;
        goto label_3d2548;
    }
    ctx->pc = 0x3D2540u;
    SET_GPR_U32(ctx, 31, 0x3D2548u);
    ctx->pc = 0x3D2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2540u;
    // 0x3d2544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D2540u, 0x3D2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2548u;
label_3d2548:
    // 0x3d2548: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3d2548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_3d254c:
    // 0x3d254c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d254cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d2550:
    // 0x3d2550: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d2550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2554:
    // 0x3d2554: 0x27b40430  addiu       $s4, $sp, 0x430
    ctx->pc = 0x3d2554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d2558:
    // 0x3d2558: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3d2558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d255c:
    // 0x3d255c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d2560:
    // 0x3d2560: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d2560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d2564:
    // 0x3d2564: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d2564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d2568:
    // 0x3d2568: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d2568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d256c:
    // 0x3d256c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d256cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2570:
    // 0x3d2570: 0xafa00480  sw          $zero, 0x480($sp)
    ctx->pc = 0x3d2570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
label_3d2574:
    // 0x3d2574: 0xc0e9fa6  jal         func_3A7E98
label_3d2578:
    if (ctx->pc == 0x3D2578u) {
        ctx->pc = 0x3D2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2574u;
        // 0x3d2578: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D257Cu;
        goto label_3d257c;
    }
    ctx->pc = 0x3D2574u;
    SET_GPR_U32(ctx, 31, 0x3D257Cu);
    ctx->pc = 0x3D2578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2574u;
    // 0x3d2578: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D2574u, 0x3D257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D257Cu;
label_3d257c:
    // 0x3d257c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d2580:
    // 0x3d2580: 0xc0f15bc  jal         func_3C56F0
label_3d2584:
    if (ctx->pc == 0x3D2584u) {
        ctx->pc = 0x3D2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2580u;
        // 0x3d2584: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2588u;
        goto label_3d2588;
    }
    ctx->pc = 0x3D2580u;
    SET_GPR_U32(ctx, 31, 0x3D2588u);
    ctx->pc = 0x3D2584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2580u;
    // 0x3d2584: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D2580u, 0x3D2588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2588u;
label_3d2588:
    // 0x3d2588: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x3d2588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_3d258c:
    // 0x3d258c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d258cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d2590:
    // 0x3d2590: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3d2590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3d2594:
    // 0x3d2594: 0xe6180004  swc1        $f24, 0x4($s0)
    ctx->pc = 0x3d2594u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d2598:
    // 0x3d2598: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3d2598u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d259c:
    // 0x3d259c: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3d259cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d25a0:
    // 0x3d25a0: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d25a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d25a4:
    // 0x3d25a4: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3d25a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3d25a8:
    // 0x3d25a8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d25a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d25ac:
    // 0x3d25ac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d25acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d25b0:
    // 0x3d25b0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d25b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d25b4:
    // 0x3d25b4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d25b4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d25b8:
    // 0x3d25b8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d25b8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d25bc:
    // 0x3d25bc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d25bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d25c0:
    // 0x3d25c0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d25c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d25c4:
    // 0x3d25c4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d25c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d25c8:
    // 0x3d25c8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d25c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d25cc:
    // 0x3d25cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d25ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d25d0:
    // 0x3d25d0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d25d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d25d4:
    // 0x3d25d4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d25d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d25d8:
    // 0x3d25d8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d25d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d25dc:
    // 0x3d25dc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d25dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d25e0:
    // 0x3d25e0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d25e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d25e4:
    // 0x3d25e4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d25e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d25e8:
    // 0x3d25e8: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d25e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d25ec:
    // 0x3d25ec: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d25ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d25f0:
    // 0x3d25f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d25f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d25f4:
    // 0x3d25f4: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d25f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d25f8:
    // 0x3d25f8: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d25fc:
    // 0x3d25fc: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3d25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3d2600:
    // 0x3d2600: 0xc136b18  jal         func_4DAC60
label_3d2604:
    if (ctx->pc == 0x3D2604u) {
        ctx->pc = 0x3D2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2600u;
        // 0x3d2604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2608u;
        goto label_3d2608;
    }
    ctx->pc = 0x3D2600u;
    SET_GPR_U32(ctx, 31, 0x3D2608u);
    ctx->pc = 0x3D2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2600u;
    // 0x3d2604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D2600u, 0x3D2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2608u;
label_3d2608:
    // 0x3d2608: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d2608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d260c:
    // 0x3d260c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d2610:
    // 0x3d2610: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3d2610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d2614:
    // 0x3d2614: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d2614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d2618:
    // 0x3d2618: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d2618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d261c:
    // 0x3d261c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d261cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d2620:
    // 0x3d2620: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d2620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d2624:
    // 0x3d2624: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3d2624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d2628:
    // 0x3d2628: 0xc0e9fa6  jal         func_3A7E98
label_3d262c:
    if (ctx->pc == 0x3D262Cu) {
        ctx->pc = 0x3D262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2628u;
        // 0x3d262c: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2630u;
        goto label_3d2630;
    }
    ctx->pc = 0x3D2628u;
    SET_GPR_U32(ctx, 31, 0x3D2630u);
    ctx->pc = 0x3D262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2628u;
    // 0x3d262c: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D2628u, 0x3D2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2630u;
label_3d2630:
    // 0x3d2630: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d2630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d2634:
    // 0x3d2634: 0xc0f15bc  jal         func_3C56F0
label_3d2638:
    if (ctx->pc == 0x3D2638u) {
        ctx->pc = 0x3D2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2634u;
        // 0x3d2638: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D263Cu;
        goto label_3d263c;
    }
    ctx->pc = 0x3D2634u;
    SET_GPR_U32(ctx, 31, 0x3D263Cu);
    ctx->pc = 0x3D2638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2634u;
    // 0x3d2638: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D2634u, 0x3D263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D263Cu;
label_3d263c:
    // 0x3d263c: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x3d263cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_3d2640:
    // 0x3d2640: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3d2640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3d2644:
    // 0x3d2644: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3d2644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3d2648:
    // 0x3d2648: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x3d2648u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3d264c:
    // 0x3d264c: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x3d264cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d2650:
    // 0x3d2650: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3d2650u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d2654:
    // 0x3d2654: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d2654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d2658:
    // 0x3d2658: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3d2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3d265c:
    // 0x3d265c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d265cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d2660:
    // 0x3d2660: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d2660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d2664:
    // 0x3d2664: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d2664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2668:
    // 0x3d2668: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d2668u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d266c:
    // 0x3d266c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d266cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2670:
    // 0x3d2670: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d2670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2674:
    // 0x3d2674: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d2674u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2678:
    // 0x3d2678: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d2678u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d267c:
    // 0x3d267c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d267cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2680:
    // 0x3d2680: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d2680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d2684:
    // 0x3d2684: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d2684u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d2688:
    // 0x3d2688: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d2688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d268c:
    // 0x3d268c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d268cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d2690:
    // 0x3d2690: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d2690u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d2694:
    // 0x3d2694: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d2694u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d2698:
    // 0x3d2698: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d2698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d269c:
    // 0x3d269c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d269cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d26a0:
    // 0x3d26a0: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d26a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d26a4:
    // 0x3d26a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d26a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d26a8:
    // 0x3d26a8: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d26a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d26ac:
    // 0x3d26ac: 0x7fa30470  sq          $v1, 0x470($sp)
    ctx->pc = 0x3d26acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 3));
label_3d26b0:
    // 0x3d26b0: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3d26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3d26b4:
    // 0x3d26b4: 0xc136b18  jal         func_4DAC60
label_3d26b8:
    if (ctx->pc == 0x3D26B8u) {
        ctx->pc = 0x3D26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26B4u;
        // 0x3d26b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D26BCu;
        goto label_3d26bc;
    }
    ctx->pc = 0x3D26B4u;
    SET_GPR_U32(ctx, 31, 0x3D26BCu);
    ctx->pc = 0x3D26B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D26B4u;
    // 0x3d26b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D26B4u, 0x3D26BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D26BCu;
label_3d26bc:
    // 0x3d26bc: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d26bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d26c0:
    // 0x3d26c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d26c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d26c4:
    // 0x3d26c4: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3d26c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3d26c8:
    // 0x3d26c8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3d26c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d26cc:
    // 0x3d26cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d26ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d26d0:
    // 0x3d26d0: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d26d4:
    // 0x3d26d4: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d26d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d26d8:
    // 0x3d26d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d26d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d26dc:
    // 0x3d26dc: 0xc0e9fa6  jal         func_3A7E98
label_3d26e0:
    if (ctx->pc == 0x3D26E0u) {
        ctx->pc = 0x3D26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26DCu;
        // 0x3d26e0: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D26E4u;
        goto label_3d26e4;
    }
    ctx->pc = 0x3D26DCu;
    SET_GPR_U32(ctx, 31, 0x3D26E4u);
    ctx->pc = 0x3D26E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D26DCu;
    // 0x3d26e0: 0xafa00480  sw          $zero, 0x480($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D26DCu, 0x3D26E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D26E4u;
label_3d26e4:
    // 0x3d26e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d26e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d26e8:
    // 0x3d26e8: 0xc0f15bc  jal         func_3C56F0
label_3d26ec:
    if (ctx->pc == 0x3D26ECu) {
        ctx->pc = 0x3D26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26E8u;
        // 0x3d26ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D26F0u;
        goto label_3d26f0;
    }
    ctx->pc = 0x3D26E8u;
    SET_GPR_U32(ctx, 31, 0x3D26F0u);
    ctx->pc = 0x3D26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D26E8u;
    // 0x3d26ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D26E8u, 0x3D26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D26F0u;
label_3d26f0:
    // 0x3d26f0: 0x3c03eac9  lui         $v1, 0xEAC9
    ctx->pc = 0x3d26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60105 << 16));
label_3d26f4:
    // 0x3d26f4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d26f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3d26f8:
    // 0x3d26f8: 0x3463acff  ori         $v1, $v1, 0xACFF
    ctx->pc = 0x3d26f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44287);
label_3d26fc:
    // 0x3d26fc: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x3d26fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_3d2700:
    // 0x3d2700: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x3d2700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
label_3d2704:
    // 0x3d2704: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x3d2704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
label_3d2708:
    // 0x3d2708: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x3d2708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_3d270c:
    // 0x3d270c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d2710:
    // 0x3d2710: 0xae2400c8  sw          $a0, 0xC8($s1)
    ctx->pc = 0x3d2710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 4));
label_3d2714:
    // 0x3d2714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d2714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2718:
    // 0x3d2718: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x3d2718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_3d271c:
    // 0x3d271c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3d271cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3d2720:
    // 0x3d2720: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3d2720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3d2724:
    // 0x3d2724: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x3d2724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_3d2728:
    // 0x3d2728: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x3d2728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_3d272c:
    // 0x3d272c: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x3d272cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3d2730:
    // 0x3d2730: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x3d2730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3d2734:
    // 0x3d2734: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x3d2734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3d2738:
    // 0x3d2738: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x3d2738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d273c:
    // 0x3d273c: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x3d273cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d2740:
    // 0x3d2740: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x3d2740u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d2744:
    // 0x3d2744: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x3d2744u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d2748:
    // 0x3d2748: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3d2748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d274c:
    // 0x3d274c: 0xc7b80540  lwc1        $f24, 0x540($sp)
    ctx->pc = 0x3d274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3d2750:
    // 0x3d2750: 0xc7b70538  lwc1        $f23, 0x538($sp)
    ctx->pc = 0x3d2750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3d2754:
    // 0x3d2754: 0xc7b60530  lwc1        $f22, 0x530($sp)
    ctx->pc = 0x3d2754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d2758:
    // 0x3d2758: 0xc7b50528  lwc1        $f21, 0x528($sp)
    ctx->pc = 0x3d2758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d275c:
    // 0x3d275c: 0xc7b40520  lwc1        $f20, 0x520($sp)
    ctx->pc = 0x3d275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d2760:
    // 0x3d2760: 0x3e00008  jr          $ra
label_3d2764:
    if (ctx->pc == 0x3D2764u) {
        ctx->pc = 0x3D2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2760u;
        // 0x3d2764: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2768u;
        goto label_fallthrough_0x3d2760;
    }
    ctx->pc = 0x3D2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2760u;
        // 0x3d2764: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d2760:
    ctx->pc = 0x3D2768u;
}
