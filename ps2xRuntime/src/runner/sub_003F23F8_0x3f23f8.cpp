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

// Function: sub_003F23F8
// Address: 0x3f23f8 - 0x3f2698
void sub_003F23F8_0x3f23f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F23F8_0x3f23f8");
#endif

    switch (ctx->pc) {
        case 0x3f23f8u: goto label_3f23f8;
        case 0x3f23fcu: goto label_3f23fc;
        case 0x3f2400u: goto label_3f2400;
        case 0x3f2404u: goto label_3f2404;
        case 0x3f2408u: goto label_3f2408;
        case 0x3f240cu: goto label_3f240c;
        case 0x3f2410u: goto label_3f2410;
        case 0x3f2414u: goto label_3f2414;
        case 0x3f2418u: goto label_3f2418;
        case 0x3f241cu: goto label_3f241c;
        case 0x3f2420u: goto label_3f2420;
        case 0x3f2424u: goto label_3f2424;
        case 0x3f2428u: goto label_3f2428;
        case 0x3f242cu: goto label_3f242c;
        case 0x3f2430u: goto label_3f2430;
        case 0x3f2434u: goto label_3f2434;
        case 0x3f2438u: goto label_3f2438;
        case 0x3f243cu: goto label_3f243c;
        case 0x3f2440u: goto label_3f2440;
        case 0x3f2444u: goto label_3f2444;
        case 0x3f2448u: goto label_3f2448;
        case 0x3f244cu: goto label_3f244c;
        case 0x3f2450u: goto label_3f2450;
        case 0x3f2454u: goto label_3f2454;
        case 0x3f2458u: goto label_3f2458;
        case 0x3f245cu: goto label_3f245c;
        case 0x3f2460u: goto label_3f2460;
        case 0x3f2464u: goto label_3f2464;
        case 0x3f2468u: goto label_3f2468;
        case 0x3f246cu: goto label_3f246c;
        case 0x3f2470u: goto label_3f2470;
        case 0x3f2474u: goto label_3f2474;
        case 0x3f2478u: goto label_3f2478;
        case 0x3f247cu: goto label_3f247c;
        case 0x3f2480u: goto label_3f2480;
        case 0x3f2484u: goto label_3f2484;
        case 0x3f2488u: goto label_3f2488;
        case 0x3f248cu: goto label_3f248c;
        case 0x3f2490u: goto label_3f2490;
        case 0x3f2494u: goto label_3f2494;
        case 0x3f2498u: goto label_3f2498;
        case 0x3f249cu: goto label_3f249c;
        case 0x3f24a0u: goto label_3f24a0;
        case 0x3f24a4u: goto label_3f24a4;
        case 0x3f24a8u: goto label_3f24a8;
        case 0x3f24acu: goto label_3f24ac;
        case 0x3f24b0u: goto label_3f24b0;
        case 0x3f24b4u: goto label_3f24b4;
        case 0x3f24b8u: goto label_3f24b8;
        case 0x3f24bcu: goto label_3f24bc;
        case 0x3f24c0u: goto label_3f24c0;
        case 0x3f24c4u: goto label_3f24c4;
        case 0x3f24c8u: goto label_3f24c8;
        case 0x3f24ccu: goto label_3f24cc;
        case 0x3f24d0u: goto label_3f24d0;
        case 0x3f24d4u: goto label_3f24d4;
        case 0x3f24d8u: goto label_3f24d8;
        case 0x3f24dcu: goto label_3f24dc;
        case 0x3f24e0u: goto label_3f24e0;
        case 0x3f24e4u: goto label_3f24e4;
        case 0x3f24e8u: goto label_3f24e8;
        case 0x3f24ecu: goto label_3f24ec;
        case 0x3f24f0u: goto label_3f24f0;
        case 0x3f24f4u: goto label_3f24f4;
        case 0x3f24f8u: goto label_3f24f8;
        case 0x3f24fcu: goto label_3f24fc;
        case 0x3f2500u: goto label_3f2500;
        case 0x3f2504u: goto label_3f2504;
        case 0x3f2508u: goto label_3f2508;
        case 0x3f250cu: goto label_3f250c;
        case 0x3f2510u: goto label_3f2510;
        case 0x3f2514u: goto label_3f2514;
        case 0x3f2518u: goto label_3f2518;
        case 0x3f251cu: goto label_3f251c;
        case 0x3f2520u: goto label_3f2520;
        case 0x3f2524u: goto label_3f2524;
        case 0x3f2528u: goto label_3f2528;
        case 0x3f252cu: goto label_3f252c;
        case 0x3f2530u: goto label_3f2530;
        case 0x3f2534u: goto label_3f2534;
        case 0x3f2538u: goto label_3f2538;
        case 0x3f253cu: goto label_3f253c;
        case 0x3f2540u: goto label_3f2540;
        case 0x3f2544u: goto label_3f2544;
        case 0x3f2548u: goto label_3f2548;
        case 0x3f254cu: goto label_3f254c;
        case 0x3f2550u: goto label_3f2550;
        case 0x3f2554u: goto label_3f2554;
        case 0x3f2558u: goto label_3f2558;
        case 0x3f255cu: goto label_3f255c;
        case 0x3f2560u: goto label_3f2560;
        case 0x3f2564u: goto label_3f2564;
        case 0x3f2568u: goto label_3f2568;
        case 0x3f256cu: goto label_3f256c;
        case 0x3f2570u: goto label_3f2570;
        case 0x3f2574u: goto label_3f2574;
        case 0x3f2578u: goto label_3f2578;
        case 0x3f257cu: goto label_3f257c;
        case 0x3f2580u: goto label_3f2580;
        case 0x3f2584u: goto label_3f2584;
        case 0x3f2588u: goto label_3f2588;
        case 0x3f258cu: goto label_3f258c;
        case 0x3f2590u: goto label_3f2590;
        case 0x3f2594u: goto label_3f2594;
        case 0x3f2598u: goto label_3f2598;
        case 0x3f259cu: goto label_3f259c;
        case 0x3f25a0u: goto label_3f25a0;
        case 0x3f25a4u: goto label_3f25a4;
        case 0x3f25a8u: goto label_3f25a8;
        case 0x3f25acu: goto label_3f25ac;
        case 0x3f25b0u: goto label_3f25b0;
        case 0x3f25b4u: goto label_3f25b4;
        case 0x3f25b8u: goto label_3f25b8;
        case 0x3f25bcu: goto label_3f25bc;
        case 0x3f25c0u: goto label_3f25c0;
        case 0x3f25c4u: goto label_3f25c4;
        case 0x3f25c8u: goto label_3f25c8;
        case 0x3f25ccu: goto label_3f25cc;
        case 0x3f25d0u: goto label_3f25d0;
        case 0x3f25d4u: goto label_3f25d4;
        case 0x3f25d8u: goto label_3f25d8;
        case 0x3f25dcu: goto label_3f25dc;
        case 0x3f25e0u: goto label_3f25e0;
        case 0x3f25e4u: goto label_3f25e4;
        case 0x3f25e8u: goto label_3f25e8;
        case 0x3f25ecu: goto label_3f25ec;
        case 0x3f25f0u: goto label_3f25f0;
        case 0x3f25f4u: goto label_3f25f4;
        case 0x3f25f8u: goto label_3f25f8;
        case 0x3f25fcu: goto label_3f25fc;
        case 0x3f2600u: goto label_3f2600;
        case 0x3f2604u: goto label_3f2604;
        case 0x3f2608u: goto label_3f2608;
        case 0x3f260cu: goto label_3f260c;
        case 0x3f2610u: goto label_3f2610;
        case 0x3f2614u: goto label_3f2614;
        case 0x3f2618u: goto label_3f2618;
        case 0x3f261cu: goto label_3f261c;
        case 0x3f2620u: goto label_3f2620;
        case 0x3f2624u: goto label_3f2624;
        case 0x3f2628u: goto label_3f2628;
        case 0x3f262cu: goto label_3f262c;
        case 0x3f2630u: goto label_3f2630;
        case 0x3f2634u: goto label_3f2634;
        case 0x3f2638u: goto label_3f2638;
        case 0x3f263cu: goto label_3f263c;
        case 0x3f2640u: goto label_3f2640;
        case 0x3f2644u: goto label_3f2644;
        case 0x3f2648u: goto label_3f2648;
        case 0x3f264cu: goto label_3f264c;
        case 0x3f2650u: goto label_3f2650;
        case 0x3f2654u: goto label_3f2654;
        case 0x3f2658u: goto label_3f2658;
        case 0x3f265cu: goto label_3f265c;
        case 0x3f2660u: goto label_3f2660;
        case 0x3f2664u: goto label_3f2664;
        case 0x3f2668u: goto label_3f2668;
        case 0x3f266cu: goto label_3f266c;
        case 0x3f2670u: goto label_3f2670;
        case 0x3f2674u: goto label_3f2674;
        case 0x3f2678u: goto label_3f2678;
        case 0x3f267cu: goto label_3f267c;
        case 0x3f2680u: goto label_3f2680;
        case 0x3f2684u: goto label_3f2684;
        case 0x3f2688u: goto label_3f2688;
        case 0x3f268cu: goto label_3f268c;
        case 0x3f2690u: goto label_3f2690;
        case 0x3f2694u: goto label_3f2694;
        default: break;
    }

    ctx->pc = 0x3f23f8u;

label_3f23f8:
    // 0x3f23f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f23f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f23fc:
    // 0x3f23fc: 0x3c022b6e  lui         $v0, 0x2B6E
    ctx->pc = 0x3f23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11118 << 16));
label_3f2400:
    // 0x3f2400: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3f2404:
    // 0x3f2404: 0x34420387  ori         $v0, $v0, 0x387
    ctx->pc = 0x3f2404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)903);
label_3f2408:
    // 0x3f2408: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f2408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3f240c:
    // 0x3f240c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3f2410:
    // 0x3f2410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f2410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f2414:
    // 0x3f2414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f2418:
    // 0x3f2418: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3f2418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3f241c:
    // 0x3f241c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
label_3f2420:
    if (ctx->pc == 0x3F2420u) {
        ctx->pc = 0x3F2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F241Cu;
        // 0x3f2420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2424u;
        goto label_3f2424;
    }
    ctx->pc = 0x3F241Cu;
    {
        const bool branch_taken_0x3f241c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F241Cu;
        // 0x3f2420: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f241c) {
            ctx->pc = 0x3F24D8u;
            goto label_3f24d8;
        }
    }
    ctx->pc = 0x3F2424u;
label_3f2424:
    // 0x3f2424: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3f2424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3f2428:
    // 0x3f2428: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3f242c:
    if (ctx->pc == 0x3F242Cu) {
        ctx->pc = 0x3F242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2428u;
        // 0x3f242c: 0x3c020e05  lui         $v0, 0xE05 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3589 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2430u;
        goto label_3f2430;
    }
    ctx->pc = 0x3F2428u;
    {
        const bool branch_taken_0x3f2428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2428u;
        // 0x3f242c: 0x3c020e05  lui         $v0, 0xE05 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3589 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2428) {
            ctx->pc = 0x3F2470u;
            goto label_3f2470;
        }
    }
    ctx->pc = 0x3F2430u;
label_3f2430:
    // 0x3f2430: 0x34424fe2  ori         $v0, $v0, 0x4FE2
    ctx->pc = 0x3f2430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20450);
label_3f2434:
    // 0x3f2434: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_3f2438:
    if (ctx->pc == 0x3F2438u) {
        ctx->pc = 0x3F2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2434u;
        // 0x3f2438: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F243Cu;
        goto label_3f243c;
    }
    ctx->pc = 0x3F2434u;
    {
        const bool branch_taken_0x3f2434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2434u;
        // 0x3f2438: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2434) {
            ctx->pc = 0x3F24D8u;
            goto label_3f24d8;
        }
    }
    ctx->pc = 0x3F243Cu;
label_3f243c:
    // 0x3f243c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3f2440:
    if (ctx->pc == 0x3F2440u) {
        ctx->pc = 0x3F2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F243Cu;
        // 0x3f2440: 0x3c02116e  lui         $v0, 0x116E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4462 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2444u;
        goto label_3f2444;
    }
    ctx->pc = 0x3F243Cu;
    {
        const bool branch_taken_0x3f243c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F243Cu;
        // 0x3f2440: 0x3c02116e  lui         $v0, 0x116E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f243c) {
            ctx->pc = 0x3F245Cu;
            goto label_3f245c;
        }
    }
    ctx->pc = 0x3F2444u;
label_3f2444:
    // 0x3f2444: 0x3c020335  lui         $v0, 0x335
    ctx->pc = 0x3f2444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)821 << 16));
label_3f2448:
    // 0x3f2448: 0x344227de  ori         $v0, $v0, 0x27DE
    ctx->pc = 0x3f2448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10206);
label_3f244c:
    // 0x3f244c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_3f2450:
    if (ctx->pc == 0x3F2450u) {
        ctx->pc = 0x3F2450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F244Cu;
        // 0x3f2450: 0x3c02023c  lui         $v0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)572 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2454u;
        goto label_3f2454;
    }
    ctx->pc = 0x3F244Cu;
    {
        const bool branch_taken_0x3f244c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F244Cu;
        // 0x3f2450: 0x3c02023c  lui         $v0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)572 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f244c) {
            ctx->pc = 0x3F24C0u;
            goto label_3f24c0;
        }
    }
    ctx->pc = 0x3F2454u;
label_3f2454:
    // 0x3f2454: 0x10000070  b           . + 4 + (0x70 << 2)
label_3f2458:
    if (ctx->pc == 0x3F2458u) {
        ctx->pc = 0x3F2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2454u;
        // 0x3f2458: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F245Cu;
        goto label_3f245c;
    }
    ctx->pc = 0x3F2454u;
    {
        const bool branch_taken_0x3f2454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2454u;
        // 0x3f2458: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2454) {
            ctx->pc = 0x3F2618u;
            goto label_3f2618;
        }
    }
    ctx->pc = 0x3F245Cu;
label_3f245c:
    // 0x3f245c: 0x34427fb3  ori         $v0, $v0, 0x7FB3
    ctx->pc = 0x3f245cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32691);
label_3f2460:
    // 0x3f2460: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_3f2464:
    if (ctx->pc == 0x3F2464u) {
        ctx->pc = 0x3F2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2460u;
        // 0x3f2464: 0x3c024c0d  lui         $v0, 0x4C0D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19469 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2468u;
        goto label_3f2468;
    }
    ctx->pc = 0x3F2460u;
    {
        const bool branch_taken_0x3f2460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2460u;
        // 0x3f2464: 0x3c024c0d  lui         $v0, 0x4C0D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19469 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2460) {
            ctx->pc = 0x3F24CCu;
            goto label_3f24cc;
        }
    }
    ctx->pc = 0x3F2468u;
label_3f2468:
    // 0x3f2468: 0x1000006b  b           . + 4 + (0x6B << 2)
label_3f246c:
    if (ctx->pc == 0x3F246Cu) {
        ctx->pc = 0x3F246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2468u;
        // 0x3f246c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2470u;
        goto label_3f2470;
    }
    ctx->pc = 0x3F2468u;
    {
        const bool branch_taken_0x3f2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2468u;
        // 0x3f246c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2468) {
            ctx->pc = 0x3F2618u;
            goto label_3f2618;
        }
    }
    ctx->pc = 0x3F2470u;
label_3f2470:
    // 0x3f2470: 0x3c02d576  lui         $v0, 0xD576
    ctx->pc = 0x3f2470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54646 << 16));
label_3f2474:
    // 0x3f2474: 0x3442e4b7  ori         $v0, $v0, 0xE4B7
    ctx->pc = 0x3f2474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58551);
label_3f2478:
    // 0x3f2478: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_3f247c:
    if (ctx->pc == 0x3F247Cu) {
        ctx->pc = 0x3F247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2478u;
        // 0x3f247c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2480u;
        goto label_3f2480;
    }
    ctx->pc = 0x3F2478u;
    {
        const bool branch_taken_0x3f2478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2478u;
        // 0x3f247c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2478) {
            ctx->pc = 0x3F24BCu;
            goto label_3f24bc;
        }
    }
    ctx->pc = 0x3F2480u;
label_3f2480:
    // 0x3f2480: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3f2484:
    if (ctx->pc == 0x3F2484u) {
        ctx->pc = 0x3F2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2480u;
        // 0x3f2484: 0x3c022fd6  lui         $v0, 0x2FD6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12246 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2488u;
        goto label_3f2488;
    }
    ctx->pc = 0x3F2480u;
    {
        const bool branch_taken_0x3f2480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2480u;
        // 0x3f2484: 0x3c022fd6  lui         $v0, 0x2FD6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12246 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2480) {
            ctx->pc = 0x3F249Cu;
            goto label_3f249c;
        }
    }
    ctx->pc = 0x3F2488u;
label_3f2488:
    // 0x3f2488: 0x344290d6  ori         $v0, $v0, 0x90D6
    ctx->pc = 0x3f2488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37078);
label_3f248c:
    // 0x3f248c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
label_3f2490:
    if (ctx->pc == 0x3F2490u) {
        ctx->pc = 0x3F2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F248Cu;
        // 0x3f2490: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2494u;
        goto label_3f2494;
    }
    ctx->pc = 0x3F248Cu;
    {
        const bool branch_taken_0x3f248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f248c) {
            ctx->pc = 0x3F2490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F248Cu;
            // 0x3f2490: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F24E8u;
            goto label_3f24e8;
        }
    }
    ctx->pc = 0x3F2494u;
label_3f2494:
    // 0x3f2494: 0x10000060  b           . + 4 + (0x60 << 2)
label_3f2498:
    if (ctx->pc == 0x3F2498u) {
        ctx->pc = 0x3F2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2494u;
        // 0x3f2498: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F249Cu;
        goto label_3f249c;
    }
    ctx->pc = 0x3F2494u;
    {
        const bool branch_taken_0x3f2494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2494u;
        // 0x3f2498: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2494) {
            ctx->pc = 0x3F2618u;
            goto label_3f2618;
        }
    }
    ctx->pc = 0x3F249Cu;
label_3f249c:
    // 0x3f249c: 0x3c02e29d  lui         $v0, 0xE29D
    ctx->pc = 0x3f249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58013 << 16));
label_3f24a0:
    // 0x3f24a0: 0x3442d022  ori         $v0, $v0, 0xD022
    ctx->pc = 0x3f24a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53282);
label_3f24a4:
    // 0x3f24a4: 0x5462005c  bnel        $v1, $v0, . + 4 + (0x5C << 2)
label_3f24a8:
    if (ctx->pc == 0x3F24A8u) {
        ctx->pc = 0x3F24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24A4u;
        // 0x3f24a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F24ACu;
        goto label_3f24ac;
    }
    ctx->pc = 0x3F24A4u;
    {
        const bool branch_taken_0x3f24a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f24a4) {
            ctx->pc = 0x3F24A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F24A4u;
            // 0x3f24a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2618u;
            goto label_3f2618;
        }
    }
    ctx->pc = 0x3F24ACu;
label_3f24ac:
    // 0x3f24ac: 0x3c027575  lui         $v0, 0x7575
    ctx->pc = 0x3f24acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30069 << 16));
label_3f24b0:
    // 0x3f24b0: 0x344275ff  ori         $v0, $v0, 0x75FF
    ctx->pc = 0x3f24b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30207);
label_3f24b4:
    // 0x3f24b4: 0x10000057  b           . + 4 + (0x57 << 2)
label_3f24b8:
    if (ctx->pc == 0x3F24B8u) {
        ctx->pc = 0x3F24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24B4u;
        // 0x3f24b8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F24BCu;
        goto label_3f24bc;
    }
    ctx->pc = 0x3F24B4u;
    {
        const bool branch_taken_0x3f24b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24B4u;
        // 0x3f24b8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f24b4) {
            ctx->pc = 0x3F2614u;
            goto label_3f2614;
        }
    }
    ctx->pc = 0x3F24BCu;
label_3f24bc:
    // 0x3f24bc: 0x3c02023c  lui         $v0, 0x23C
    ctx->pc = 0x3f24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)572 << 16));
label_3f24c0:
    // 0x3f24c0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3f24c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3f24c4:
    // 0x3f24c4: 0x10000053  b           . + 4 + (0x53 << 2)
label_3f24c8:
    if (ctx->pc == 0x3F24C8u) {
        ctx->pc = 0x3F24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24C4u;
        // 0x3f24c8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F24CCu;
        goto label_3f24cc;
    }
    ctx->pc = 0x3F24C4u;
    {
        const bool branch_taken_0x3f24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24C4u;
        // 0x3f24c8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f24c4) {
            ctx->pc = 0x3F2614u;
            goto label_3f2614;
        }
    }
    ctx->pc = 0x3F24CCu;
label_3f24cc:
    // 0x3f24cc: 0x344216ff  ori         $v0, $v0, 0x16FF
    ctx->pc = 0x3f24ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5887);
label_3f24d0:
    // 0x3f24d0: 0x10000050  b           . + 4 + (0x50 << 2)
label_3f24d4:
    if (ctx->pc == 0x3F24D4u) {
        ctx->pc = 0x3F24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24D0u;
        // 0x3f24d4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F24D8u;
        goto label_3f24d8;
    }
    ctx->pc = 0x3F24D0u;
    {
        const bool branch_taken_0x3f24d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24D0u;
        // 0x3f24d4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f24d0) {
            ctx->pc = 0x3F2614u;
            goto label_3f2614;
        }
    }
    ctx->pc = 0x3F24D8u;
label_3f24d8:
    // 0x3f24d8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x3f24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_3f24dc:
    // 0x3f24dc: 0x344272ff  ori         $v0, $v0, 0x72FF
    ctx->pc = 0x3f24dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29439);
label_3f24e0:
    // 0x3f24e0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3f24e4:
    if (ctx->pc == 0x3F24E4u) {
        ctx->pc = 0x3F24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24E0u;
        // 0x3f24e4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F24E8u;
        goto label_3f24e8;
    }
    ctx->pc = 0x3F24E0u;
    {
        const bool branch_taken_0x3f24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F24E0u;
        // 0x3f24e4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f24e0) {
            ctx->pc = 0x3F2614u;
            goto label_3f2614;
        }
    }
    ctx->pc = 0x3F24E8u;
label_3f24e8:
    // 0x3f24e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f24ec:
    // 0x3f24ec: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x3f24ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
label_3f24f0:
    // 0x3f24f0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f24f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f24f4:
    // 0x3f24f4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3f24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3f24f8:
    // 0x3f24f8: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f24f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f24fc:
    // 0x3f24fc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3f24fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f2500:
    // 0x3f2500: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f2504:
    // 0x3f2504: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3f2504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3f2508:
    // 0x3f2508: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x3f2508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_3f250c:
    // 0x3f250c: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x3f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_3f2510:
    // 0x3f2510: 0x40f809  jalr        $v0
label_3f2514:
    if (ctx->pc == 0x3F2514u) {
        ctx->pc = 0x3F2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2510u;
        // 0x3f2514: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2518u;
        goto label_3f2518;
    }
    ctx->pc = 0x3F2510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F2518u);
        ctx->pc = 0x3F2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2510u;
        // 0x3f2514: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2510u, 0x3F2518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F2518u;
label_3f2518:
    // 0x3f2518: 0x3c013d30  lui         $at, 0x3D30
    ctx->pc = 0x3f2518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15664 << 16));
label_3f251c:
    // 0x3f251c: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x3f251cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
label_3f2520:
    // 0x3f2520: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f2520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f2524:
    // 0x3f2524: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3f2524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f2528:
    // 0x3f2528: 0x3c013d89  lui         $at, 0x3D89
    ctx->pc = 0x3f2528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15753 << 16));
label_3f252c:
    // 0x3f252c: 0x3421374c  ori         $at, $at, 0x374C
    ctx->pc = 0x3f252cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14156);
label_3f2530:
    // 0x3f2530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f2530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f2534:
    // 0x3f2534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f2534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f2538:
    // 0x3f2538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f2538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f253c:
    // 0x3f253c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3f253cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3f2540:
    // 0x3f2540: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3f2540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3f2544:
    // 0x3f2544: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f2544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f2548:
    // 0x3f2548: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f2548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f254c:
    // 0x3f254c: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3f254cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3f2550:
    // 0x3f2550: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f2550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f2554:
    // 0x3f2554: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f2554u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f2558:
    // 0x3f2558: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f2558u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f255c:
    // 0x3f255c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f255cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f2560:
    // 0x3f2560: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f2560u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f2564:
    // 0x3f2564: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f2564u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f2568:
    // 0x3f2568: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f2568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f256c:
    // 0x3f256c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f256cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f2570:
    // 0x3f2570: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f2570u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f2574:
    // 0x3f2574: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f2574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f2578:
    // 0x3f2578: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f2578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f257c:
    // 0x3f257c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f257cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f2580:
    // 0x3f2580: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f2580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f2584:
    // 0x3f2584: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f2584u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f2588:
    // 0x3f2588: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f2588u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f258c:
    // 0x3f258c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f258cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f2590:
    // 0x3f2590: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f2590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f2594:
    // 0x3f2594: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3f2594u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f2598:
    // 0x3f2598: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3f2598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3f259c:
    // 0x3f259c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f259cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f25a0:
    // 0x3f25a0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3f25a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f25a4:
    // 0x3f25a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3f25a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f25a8:
    // 0x3f25a8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3f25a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f25ac:
    // 0x3f25ac: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3f25acu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f25b0:
    // 0x3f25b0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3f25b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3f25b4:
    // 0x3f25b4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f25b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f25b8:
    // 0x3f25b8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f25b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f25bc:
    // 0x3f25bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f25bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f25c0:
    // 0x3f25c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3f25c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3f25c4:
    // 0x3f25c4: 0xc0e8b48  jal         func_3A2D20
label_3f25c8:
    if (ctx->pc == 0x3F25C8u) {
        ctx->pc = 0x3F25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F25C4u;
        // 0x3f25c8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F25CCu;
        goto label_3f25cc;
    }
    ctx->pc = 0x3F25C4u;
    SET_GPR_U32(ctx, 31, 0x3F25CCu);
    ctx->pc = 0x3F25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25C4u;
    // 0x3f25c8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F25C4u, 0x3F25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25CCu;
label_3f25cc:
    // 0x3f25cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f25d0:
    // 0x3f25d0: 0xc0e8b58  jal         func_3A2D60
label_3f25d4:
    if (ctx->pc == 0x3F25D4u) {
        ctx->pc = 0x3F25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F25D0u;
        // 0x3f25d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F25D8u;
        goto label_3f25d8;
    }
    ctx->pc = 0x3F25D0u;
    SET_GPR_U32(ctx, 31, 0x3F25D8u);
    ctx->pc = 0x3F25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25D0u;
    // 0x3f25d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3F25D0u, 0x3F25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25D8u;
label_3f25d8:
    // 0x3f25d8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3f25d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3f25dc:
    // 0x3f25dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f25dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f25e0:
    // 0x3f25e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f25e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f25e4:
    // 0x3f25e4: 0xc0e8b78  jal         func_3A2DE0
label_3f25e8:
    if (ctx->pc == 0x3F25E8u) {
        ctx->pc = 0x3F25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F25E4u;
        // 0x3f25e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F25ECu;
        goto label_3f25ec;
    }
    ctx->pc = 0x3F25E4u;
    SET_GPR_U32(ctx, 31, 0x3F25ECu);
    ctx->pc = 0x3F25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25E4u;
    // 0x3f25e8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3F25E4u, 0x3F25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25ECu;
label_3f25ec:
    // 0x3f25ec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f25f0:
    // 0x3f25f0: 0xc0e8b70  jal         func_3A2DC0
label_3f25f4:
    if (ctx->pc == 0x3F25F4u) {
        ctx->pc = 0x3F25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F25F0u;
        // 0x3f25f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F25F8u;
        goto label_3f25f8;
    }
    ctx->pc = 0x3F25F0u;
    SET_GPR_U32(ctx, 31, 0x3F25F8u);
    ctx->pc = 0x3F25F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25F0u;
    // 0x3f25f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3F25F0u, 0x3F25F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25F8u;
label_3f25f8:
    // 0x3f25f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f25fc:
    // 0x3f25fc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f25fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f2600:
    // 0x3f2600: 0xc0e8b90  jal         func_3A2E40
label_3f2604:
    if (ctx->pc == 0x3F2604u) {
        ctx->pc = 0x3F2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2600u;
        // 0x3f2604: 0x24a56158  addiu       $a1, $a1, 0x6158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2608u;
        goto label_3f2608;
    }
    ctx->pc = 0x3F2600u;
    SET_GPR_U32(ctx, 31, 0x3F2608u);
    ctx->pc = 0x3F2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2600u;
    // 0x3f2604: 0x24a56158  addiu       $a1, $a1, 0x6158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3F2600u, 0x3F2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2608u;
label_3f2608:
    // 0x3f2608: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f2608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f260c:
    // 0x3f260c: 0xc0e8b50  jal         func_3A2D40
label_3f2610:
    if (ctx->pc == 0x3F2610u) {
        ctx->pc = 0x3F2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F260Cu;
        // 0x3f2610: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2614u;
        goto label_3f2614;
    }
    ctx->pc = 0x3F260Cu;
    SET_GPR_U32(ctx, 31, 0x3F2614u);
    ctx->pc = 0x3F2610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F260Cu;
    // 0x3f2610: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F260Cu, 0x3F2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2614u;
label_3f2614:
    // 0x3f2614: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3f2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3f2618:
    // 0x3f2618: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3f261c:
    if (ctx->pc == 0x3F261Cu) {
        ctx->pc = 0x3F261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2618u;
        // 0x3f261c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2620u;
        goto label_3f2620;
    }
    ctx->pc = 0x3F2618u;
    {
        const bool branch_taken_0x3f2618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2618u;
        // 0x3f261c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2618) {
            ctx->pc = 0x3F267Cu;
            goto label_3f267c;
        }
    }
    ctx->pc = 0x3F2620u;
label_3f2620:
    // 0x3f2620: 0xc0e8b48  jal         func_3A2D20
label_3f2624:
    if (ctx->pc == 0x3F2624u) {
        ctx->pc = 0x3F2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2620u;
        // 0x3f2624: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2628u;
        goto label_3f2628;
    }
    ctx->pc = 0x3F2620u;
    SET_GPR_U32(ctx, 31, 0x3F2628u);
    ctx->pc = 0x3F2624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2620u;
    // 0x3f2624: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F2620u, 0x3F2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2628u;
label_3f2628:
    // 0x3f2628: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f2628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f262c:
    // 0x3f262c: 0xc0e8b70  jal         func_3A2DC0
label_3f2630:
    if (ctx->pc == 0x3F2630u) {
        ctx->pc = 0x3F2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F262Cu;
        // 0x3f2630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2634u;
        goto label_3f2634;
    }
    ctx->pc = 0x3F262Cu;
    SET_GPR_U32(ctx, 31, 0x3F2634u);
    ctx->pc = 0x3F2630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F262Cu;
    // 0x3f2630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x3F262Cu, 0x3F2634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2634u;
label_3f2634:
    // 0x3f2634: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f2634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f2638:
    // 0x3f2638: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3f2638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3f263c:
    // 0x3f263c: 0xc0e8b90  jal         func_3A2E40
label_3f2640:
    if (ctx->pc == 0x3F2640u) {
        ctx->pc = 0x3F2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F263Cu;
        // 0x3f2640: 0x24a56168  addiu       $a1, $a1, 0x6168 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2644u;
        goto label_3f2644;
    }
    ctx->pc = 0x3F263Cu;
    SET_GPR_U32(ctx, 31, 0x3F2644u);
    ctx->pc = 0x3F2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F263Cu;
    // 0x3f2640: 0x24a56168  addiu       $a1, $a1, 0x6168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3F263Cu, 0x3F2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2644u;
label_3f2644:
    // 0x3f2644: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f2644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f2648:
    // 0x3f2648: 0xc0e8b50  jal         func_3A2D40
label_3f264c:
    if (ctx->pc == 0x3F264Cu) {
        ctx->pc = 0x3F264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2648u;
        // 0x3f264c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2650u;
        goto label_3f2650;
    }
    ctx->pc = 0x3F2648u;
    SET_GPR_U32(ctx, 31, 0x3F2650u);
    ctx->pc = 0x3F264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2648u;
    // 0x3f264c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F2648u, 0x3F2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2650u;
label_3f2650:
    // 0x3f2650: 0xc0e8b48  jal         func_3A2D20
label_3f2654:
    if (ctx->pc == 0x3F2654u) {
        ctx->pc = 0x3F2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2650u;
        // 0x3f2654: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2658u;
        goto label_3f2658;
    }
    ctx->pc = 0x3F2650u;
    SET_GPR_U32(ctx, 31, 0x3F2658u);
    ctx->pc = 0x3F2654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2650u;
    // 0x3f2654: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F2650u, 0x3F2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2658u;
label_3f2658:
    // 0x3f2658: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f2658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f265c:
    // 0x3f265c: 0xc0e8b68  jal         func_3A2DA0
label_3f2660:
    if (ctx->pc == 0x3F2660u) {
        ctx->pc = 0x3F2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F265Cu;
        // 0x3f2660: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2664u;
        goto label_3f2664;
    }
    ctx->pc = 0x3F265Cu;
    SET_GPR_U32(ctx, 31, 0x3F2664u);
    ctx->pc = 0x3F2660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F265Cu;
    // 0x3f2660: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3F265Cu, 0x3F2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2664u;
label_3f2664:
    // 0x3f2664: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3f2664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3f2668:
    // 0x3f2668: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x3f2668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3f266c:
    // 0x3f266c: 0xc0e8b80  jal         func_3A2E00
label_3f2670:
    if (ctx->pc == 0x3F2670u) {
        ctx->pc = 0x3F2670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F266Cu;
        // 0x3f2670: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2674u;
        goto label_3f2674;
    }
    ctx->pc = 0x3F266Cu;
    SET_GPR_U32(ctx, 31, 0x3F2674u);
    ctx->pc = 0x3F2670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F266Cu;
    // 0x3f2670: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3F266Cu, 0x3F2674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2674u;
label_3f2674:
    // 0x3f2674: 0xc0e8b50  jal         func_3A2D40
label_3f2678:
    if (ctx->pc == 0x3F2678u) {
        ctx->pc = 0x3F2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2674u;
        // 0x3f2678: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F267Cu;
        goto label_3f267c;
    }
    ctx->pc = 0x3F2674u;
    SET_GPR_U32(ctx, 31, 0x3F267Cu);
    ctx->pc = 0x3F2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2674u;
    // 0x3f2678: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F2674u, 0x3F267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F267Cu;
label_3f267c:
    // 0x3f267c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f267cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f2680:
    // 0x3f2680: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f2680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f2684:
    // 0x3f2684: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f2684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f2688:
    // 0x3f2688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f2688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f268c:
    // 0x3f268c: 0x3e00008  jr          $ra
label_3f2690:
    if (ctx->pc == 0x3F2690u) {
        ctx->pc = 0x3F2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F268Cu;
        // 0x3f2690: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2694u;
        goto label_3f2694;
    }
    ctx->pc = 0x3F268Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F268Cu;
        // 0x3f2690: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F268Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2694u;
label_3f2694:
    // 0x3f2694: 0x0  nop
    ctx->pc = 0x3f2694u;
    // NOP
    ctx->pc = 0x3f2698u;
}
