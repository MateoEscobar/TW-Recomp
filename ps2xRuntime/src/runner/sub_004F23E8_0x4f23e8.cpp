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

// Function: sub_004F23E8
// Address: 0x4f23e8 - 0x4f2650
void sub_004F23E8_0x4f23e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F23E8_0x4f23e8");
#endif

    switch (ctx->pc) {
        case 0x4f23e8u: goto label_4f23e8;
        case 0x4f23ecu: goto label_4f23ec;
        case 0x4f23f0u: goto label_4f23f0;
        case 0x4f23f4u: goto label_4f23f4;
        case 0x4f23f8u: goto label_4f23f8;
        case 0x4f23fcu: goto label_4f23fc;
        case 0x4f2400u: goto label_4f2400;
        case 0x4f2404u: goto label_4f2404;
        case 0x4f2408u: goto label_4f2408;
        case 0x4f240cu: goto label_4f240c;
        case 0x4f2410u: goto label_4f2410;
        case 0x4f2414u: goto label_4f2414;
        case 0x4f2418u: goto label_4f2418;
        case 0x4f241cu: goto label_4f241c;
        case 0x4f2420u: goto label_4f2420;
        case 0x4f2424u: goto label_4f2424;
        case 0x4f2428u: goto label_4f2428;
        case 0x4f242cu: goto label_4f242c;
        case 0x4f2430u: goto label_4f2430;
        case 0x4f2434u: goto label_4f2434;
        case 0x4f2438u: goto label_4f2438;
        case 0x4f243cu: goto label_4f243c;
        case 0x4f2440u: goto label_4f2440;
        case 0x4f2444u: goto label_4f2444;
        case 0x4f2448u: goto label_4f2448;
        case 0x4f244cu: goto label_4f244c;
        case 0x4f2450u: goto label_4f2450;
        case 0x4f2454u: goto label_4f2454;
        case 0x4f2458u: goto label_4f2458;
        case 0x4f245cu: goto label_4f245c;
        case 0x4f2460u: goto label_4f2460;
        case 0x4f2464u: goto label_4f2464;
        case 0x4f2468u: goto label_4f2468;
        case 0x4f246cu: goto label_4f246c;
        case 0x4f2470u: goto label_4f2470;
        case 0x4f2474u: goto label_4f2474;
        case 0x4f2478u: goto label_4f2478;
        case 0x4f247cu: goto label_4f247c;
        case 0x4f2480u: goto label_4f2480;
        case 0x4f2484u: goto label_4f2484;
        case 0x4f2488u: goto label_4f2488;
        case 0x4f248cu: goto label_4f248c;
        case 0x4f2490u: goto label_4f2490;
        case 0x4f2494u: goto label_4f2494;
        case 0x4f2498u: goto label_4f2498;
        case 0x4f249cu: goto label_4f249c;
        case 0x4f24a0u: goto label_4f24a0;
        case 0x4f24a4u: goto label_4f24a4;
        case 0x4f24a8u: goto label_4f24a8;
        case 0x4f24acu: goto label_4f24ac;
        case 0x4f24b0u: goto label_4f24b0;
        case 0x4f24b4u: goto label_4f24b4;
        case 0x4f24b8u: goto label_4f24b8;
        case 0x4f24bcu: goto label_4f24bc;
        case 0x4f24c0u: goto label_4f24c0;
        case 0x4f24c4u: goto label_4f24c4;
        case 0x4f24c8u: goto label_4f24c8;
        case 0x4f24ccu: goto label_4f24cc;
        case 0x4f24d0u: goto label_4f24d0;
        case 0x4f24d4u: goto label_4f24d4;
        case 0x4f24d8u: goto label_4f24d8;
        case 0x4f24dcu: goto label_4f24dc;
        case 0x4f24e0u: goto label_4f24e0;
        case 0x4f24e4u: goto label_4f24e4;
        case 0x4f24e8u: goto label_4f24e8;
        case 0x4f24ecu: goto label_4f24ec;
        case 0x4f24f0u: goto label_4f24f0;
        case 0x4f24f4u: goto label_4f24f4;
        case 0x4f24f8u: goto label_4f24f8;
        case 0x4f24fcu: goto label_4f24fc;
        case 0x4f2500u: goto label_4f2500;
        case 0x4f2504u: goto label_4f2504;
        case 0x4f2508u: goto label_4f2508;
        case 0x4f250cu: goto label_4f250c;
        case 0x4f2510u: goto label_4f2510;
        case 0x4f2514u: goto label_4f2514;
        case 0x4f2518u: goto label_4f2518;
        case 0x4f251cu: goto label_4f251c;
        case 0x4f2520u: goto label_4f2520;
        case 0x4f2524u: goto label_4f2524;
        case 0x4f2528u: goto label_4f2528;
        case 0x4f252cu: goto label_4f252c;
        case 0x4f2530u: goto label_4f2530;
        case 0x4f2534u: goto label_4f2534;
        case 0x4f2538u: goto label_4f2538;
        case 0x4f253cu: goto label_4f253c;
        case 0x4f2540u: goto label_4f2540;
        case 0x4f2544u: goto label_4f2544;
        case 0x4f2548u: goto label_4f2548;
        case 0x4f254cu: goto label_4f254c;
        case 0x4f2550u: goto label_4f2550;
        case 0x4f2554u: goto label_4f2554;
        case 0x4f2558u: goto label_4f2558;
        case 0x4f255cu: goto label_4f255c;
        case 0x4f2560u: goto label_4f2560;
        case 0x4f2564u: goto label_4f2564;
        case 0x4f2568u: goto label_4f2568;
        case 0x4f256cu: goto label_4f256c;
        case 0x4f2570u: goto label_4f2570;
        case 0x4f2574u: goto label_4f2574;
        case 0x4f2578u: goto label_4f2578;
        case 0x4f257cu: goto label_4f257c;
        case 0x4f2580u: goto label_4f2580;
        case 0x4f2584u: goto label_4f2584;
        case 0x4f2588u: goto label_4f2588;
        case 0x4f258cu: goto label_4f258c;
        case 0x4f2590u: goto label_4f2590;
        case 0x4f2594u: goto label_4f2594;
        case 0x4f2598u: goto label_4f2598;
        case 0x4f259cu: goto label_4f259c;
        case 0x4f25a0u: goto label_4f25a0;
        case 0x4f25a4u: goto label_4f25a4;
        case 0x4f25a8u: goto label_4f25a8;
        case 0x4f25acu: goto label_4f25ac;
        case 0x4f25b0u: goto label_4f25b0;
        case 0x4f25b4u: goto label_4f25b4;
        case 0x4f25b8u: goto label_4f25b8;
        case 0x4f25bcu: goto label_4f25bc;
        case 0x4f25c0u: goto label_4f25c0;
        case 0x4f25c4u: goto label_4f25c4;
        case 0x4f25c8u: goto label_4f25c8;
        case 0x4f25ccu: goto label_4f25cc;
        case 0x4f25d0u: goto label_4f25d0;
        case 0x4f25d4u: goto label_4f25d4;
        case 0x4f25d8u: goto label_4f25d8;
        case 0x4f25dcu: goto label_4f25dc;
        case 0x4f25e0u: goto label_4f25e0;
        case 0x4f25e4u: goto label_4f25e4;
        case 0x4f25e8u: goto label_4f25e8;
        case 0x4f25ecu: goto label_4f25ec;
        case 0x4f25f0u: goto label_4f25f0;
        case 0x4f25f4u: goto label_4f25f4;
        case 0x4f25f8u: goto label_4f25f8;
        case 0x4f25fcu: goto label_4f25fc;
        case 0x4f2600u: goto label_4f2600;
        case 0x4f2604u: goto label_4f2604;
        case 0x4f2608u: goto label_4f2608;
        case 0x4f260cu: goto label_4f260c;
        case 0x4f2610u: goto label_4f2610;
        case 0x4f2614u: goto label_4f2614;
        case 0x4f2618u: goto label_4f2618;
        case 0x4f261cu: goto label_4f261c;
        case 0x4f2620u: goto label_4f2620;
        case 0x4f2624u: goto label_4f2624;
        case 0x4f2628u: goto label_4f2628;
        case 0x4f262cu: goto label_4f262c;
        case 0x4f2630u: goto label_4f2630;
        case 0x4f2634u: goto label_4f2634;
        case 0x4f2638u: goto label_4f2638;
        case 0x4f263cu: goto label_4f263c;
        case 0x4f2640u: goto label_4f2640;
        case 0x4f2644u: goto label_4f2644;
        case 0x4f2648u: goto label_4f2648;
        case 0x4f264cu: goto label_4f264c;
        default: break;
    }

    ctx->pc = 0x4f23e8u;

label_4f23e8:
    // 0x4f23e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4f23e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4f23ec:
    // 0x4f23ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4f23ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4f23f0:
    // 0x4f23f0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4f23f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4f23f4:
    // 0x4f23f4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4f23f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f23f8:
    // 0x4f23f8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4f23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4f23fc:
    // 0x4f23fc: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x4f23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_4f2400:
    // 0x4f2400: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4f2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4f2404:
    // 0x4f2404: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4f2404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4f2408:
    // 0x4f2408: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4f2408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4f240c:
    // 0x4f240c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4f240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4f2410:
    // 0x4f2410: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f2410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f2414:
    // 0x4f2414: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4f2414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f2418:
    // 0x4f2418: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4f241c:
    // 0x4f241c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4f241cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f2420:
    // 0x4f2420: 0x2b083  sra         $s6, $v0, 2
    ctx->pc = 0x4f2420u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 2));
label_4f2424:
    // 0x4f2424: 0x2c5182b  sltu        $v1, $s6, $a1
    ctx->pc = 0x4f2424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4f2428:
    // 0x4f2428: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_4f242c:
    if (ctx->pc == 0x4F242Cu) {
        ctx->pc = 0x4F242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2428u;
        // 0x4f242c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2430u;
        goto label_4f2430;
    }
    ctx->pc = 0x4F2428u;
    {
        const bool branch_taken_0x4f2428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2428u;
        // 0x4f242c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2428) {
            ctx->pc = 0x4F2624u;
            goto label_4f2624;
        }
    }
    ctx->pc = 0x4F2430u;
label_4f2430:
    // 0x4f2430: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x4f2430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_4f2434:
    // 0x4f2434: 0x2451dfd8  addiu       $s1, $v0, -0x2028
    ctx->pc = 0x4f2434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959064));
label_4f2438:
    // 0x4f2438: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4f2438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4f243c:
    // 0x4f243c: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x4f243cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4f2440:
    // 0x4f2440: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x4f2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_4f2444:
    // 0x4f2444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f2444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f2448:
    // 0x4f2448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f2448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f244c:
    // 0x4f244c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4f244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4f2450:
    // 0x4f2450: 0xc136850  jal         func_4DA140
label_4f2454:
    if (ctx->pc == 0x4F2454u) {
        ctx->pc = 0x4F2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2450u;
        // 0x4f2454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2458u;
        goto label_4f2458;
    }
    ctx->pc = 0x4F2450u;
    SET_GPR_U32(ctx, 31, 0x4F2458u);
    ctx->pc = 0x4F2454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2450u;
    // 0x4f2454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DA140u, 0x4F2450u, 0x4F2458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2458u;
label_4f2458:
    // 0x4f2458: 0x54500002  bnel        $v0, $s0, . + 4 + (0x2 << 2)
label_4f245c:
    if (ctx->pc == 0x4F245Cu) {
        ctx->pc = 0x4F245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2458u;
        // 0x4f245c: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2460u;
        goto label_4f2460;
    }
    ctx->pc = 0x4F2458u;
    {
        const bool branch_taken_0x4f2458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4f2458) {
            ctx->pc = 0x4F245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F2458u;
            // 0x4f245c: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2464u;
            goto label_4f2464;
        }
    }
    ctx->pc = 0x4F2460u;
label_4f2460:
    // 0x4f2460: 0xde2200d8  ld          $v0, 0xD8($s1)
    ctx->pc = 0x4f2460u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 216)));
label_4f2464:
    // 0x4f2464: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x4f2464u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_4f2468:
    // 0x4f2468: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x4f2468u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_4f246c:
    // 0x4f246c: 0x2d4102b  sltu        $v0, $s6, $s4
    ctx->pc = 0x4f246cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4f2470:
    // 0x4f2470: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_4f2474:
    if (ctx->pc == 0x4F2474u) {
        ctx->pc = 0x4F2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2470u;
        // 0x4f2474: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2478u;
        goto label_4f2478;
    }
    ctx->pc = 0x4F2470u;
    {
        const bool branch_taken_0x4f2470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2470u;
        // 0x4f2474: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2470) {
            ctx->pc = 0x4F2624u;
            goto label_4f2624;
        }
    }
    ctx->pc = 0x4F2478u;
label_4f2478:
    // 0x4f2478: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4f2478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4f247c:
    // 0x4f247c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x4f247cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_4f2480:
    // 0x4f2480: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x4f2480u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4f2484:
    // 0x4f2484: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4f2484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_4f2488:
    // 0x4f2488: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x4f2488u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_4f248c:
    // 0x4f248c: 0x8e69b9c0  lw          $t1, -0x4640($s3)
    ctx->pc = 0x4f248cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4f2490:
    // 0x4f2490: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f2490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f2494:
    // 0x4f2494: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f2494u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f2498:
    // 0x4f2498: 0x27b10028  addiu       $s1, $sp, 0x28
    ctx->pc = 0x4f2498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_4f249c:
    // 0x4f249c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f24a0:
    // 0x4f24a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f24a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f24a4:
    // 0x4f24a4: 0x2648df58  addiu       $t0, $s2, -0x20A8
    ctx->pc = 0x4f24a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958936));
label_4f24a8:
    // 0x4f24a8: 0x254adf88  addiu       $t2, $t2, -0x2078
    ctx->pc = 0x4f24a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958984));
label_4f24ac:
    // 0x4f24ac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f24acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f24b0:
    // 0x4f24b0: 0x24a5df80  addiu       $a1, $a1, -0x2080
    ctx->pc = 0x4f24b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
label_4f24b4:
    // 0x4f24b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f24b8:
    // 0x4f24b8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f24b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f24bc:
    // 0x4f24bc: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4f24bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4f24c0:
    // 0x4f24c0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x4f24c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_4f24c4:
    // 0x4f24c4: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f24c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f24c8:
    // 0x4f24c8: 0x40f809  jalr        $v0
label_4f24cc:
    if (ctx->pc == 0x4F24CCu) {
        ctx->pc = 0x4F24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F24C8u;
        // 0x4f24cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F24D0u;
        goto label_4f24d0;
    }
    ctx->pc = 0x4F24C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F24D0u);
        ctx->pc = 0x4F24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F24C8u;
        // 0x4f24cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F24C8u, 0x4F24D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F24D0u;
label_4f24d0:
    // 0x4f24d0: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x4f24d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4f24d4:
    // 0x4f24d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f24d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f24d8:
    // 0x4f24d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4f24d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f24dc:
    // 0x4f24dc: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x4f24dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_4f24e0:
    // 0x4f24e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f24e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f24e4:
    // 0x4f24e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4f24e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4f24e8:
    // 0x4f24e8: 0xc13c7d8  jal         func_4F1F60
label_4f24ec:
    if (ctx->pc == 0x4F24ECu) {
        ctx->pc = 0x4F24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F24E8u;
        // 0x4f24ec: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F24F0u;
        goto label_4f24f0;
    }
    ctx->pc = 0x4F24E8u;
    SET_GPR_U32(ctx, 31, 0x4F24F0u);
    ctx->pc = 0x4F24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F24E8u;
    // 0x4f24ec: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1F60u, 0x4F24E8u, 0x4F24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F24F0u;
label_4f24f0:
    // 0x4f24f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4f24f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f24f4:
    // 0x4f24f4: 0x12c00035  beqz        $s6, . + 4 + (0x35 << 2)
label_4f24f8:
    if (ctx->pc == 0x4F24F8u) {
        ctx->pc = 0x4F24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F24F4u;
        // 0x4f24f8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F24FCu;
        goto label_4f24fc;
    }
    ctx->pc = 0x4F24F4u;
    {
        const bool branch_taken_0x4f24f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F24F4u;
        // 0x4f24f8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f24f4) {
            ctx->pc = 0x4F25CCu;
            goto label_4f25cc;
        }
    }
    ctx->pc = 0x4F24FCu;
label_4f24fc:
    // 0x4f24fc: 0x26ab0004  addiu       $t3, $s5, 0x4
    ctx->pc = 0x4f24fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_4f2500:
    // 0x4f2500: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4f2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4f2504:
    // 0x4f2504: 0x0  nop
    ctx->pc = 0x4f2504u;
    // NOP
label_4f2508:
    // 0x4f2508: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4f2508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f250c:
    // 0x4f250c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f2510:
    // 0x4f2510: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4f2510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2514:
    // 0x4f2514: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
label_4f2518:
    if (ctx->pc == 0x4F2518u) {
        ctx->pc = 0x4F2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2514u;
        // 0x4f2518: 0x246c0001  addiu       $t4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F251Cu;
        goto label_4f251c;
    }
    ctx->pc = 0x4F2514u;
    {
        const bool branch_taken_0x4f2514 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2514u;
        // 0x4f2518: 0x246c0001  addiu       $t4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2514) {
            ctx->pc = 0x4F25BCu;
            goto label_4f25bc;
        }
    }
    ctx->pc = 0x4F251Cu;
label_4f251c:
    // 0x4f251c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4f251cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2520:
    // 0x4f2520: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x4f2520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4f2524:
    // 0x4f2524: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x4f2524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4f2528:
    // 0x4f2528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4f2528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f252c:
    // 0x4f252c: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x4f252cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4f2530:
    // 0x4f2530: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4f2530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f2534:
    // 0x4f2534: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4f2538:
    if (ctx->pc == 0x4F2538u) {
        ctx->pc = 0x4F2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2534u;
        // 0x4f2538: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F253Cu;
        goto label_4f253c;
    }
    ctx->pc = 0x4F2534u;
    {
        const bool branch_taken_0x4f2534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2534u;
        // 0x4f2538: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2534) {
            ctx->pc = 0x4F2564u;
            goto label_4f2564;
        }
    }
    ctx->pc = 0x4F253Cu;
label_4f253c:
    // 0x4f253c: 0x0  nop
    ctx->pc = 0x4f253cu;
    // NOP
label_4f2540:
    // 0x4f2540: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x4f2540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_4f2544:
    // 0x4f2544: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f2544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f2548:
    // 0x4f2548: 0x618b8  dsll        $v1, $a2, 2
    ctx->pc = 0x4f2548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 2);
label_4f254c:
    // 0x4f254c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4f254cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4f2550:
    // 0x4f2550: 0x66182d  daddu       $v1, $v1, $a2
    ctx->pc = 0x4f2550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
label_4f2554:
    // 0x4f2554: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x4f2554u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f2558:
    // 0x4f2558: 0x62302d  daddu       $a2, $v1, $v0
    ctx->pc = 0x4f2558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_4f255c:
    // 0x4f255c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_4f2560:
    if (ctx->pc == 0x4F2560u) {
        ctx->pc = 0x4F2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F255Cu;
        // 0x4f2560: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2564u;
        goto label_4f2564;
    }
    ctx->pc = 0x4F255Cu;
    {
        const bool branch_taken_0x4f255c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F255Cu;
        // 0x4f2560: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f255c) {
            ctx->pc = 0x4F2540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2540;
        }
    }
    ctx->pc = 0x4F2564u;
label_4f2564:
    // 0x4f2564: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x4f2564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_4f2568:
    // 0x4f2568: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4f2568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4f256c:
    // 0x4f256c: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_4f2570:
    if (ctx->pc == 0x4F2570u) {
        ctx->pc = 0x4F2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F256Cu;
        // 0x4f2570: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2574u;
        goto label_4f2574;
    }
    ctx->pc = 0x4F256Cu;
    {
        const bool branch_taken_0x4f256c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f256c) {
            ctx->pc = 0x4F2570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F256Cu;
            // 0x4f2570: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2574u;
            goto label_4f2574;
        }
    }
    ctx->pc = 0x4F2574u;
label_4f2574:
    // 0x4f2574: 0x74001b  divu        $zero, $v1, $s4
    ctx->pc = 0x4f2574u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4f2578:
    // 0x4f2578: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4f2578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f257c:
    // 0x4f257c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4f257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_4f2580:
    // 0x4f2580: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x4f2580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
label_4f2584:
    // 0x4f2584: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f2584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f2588:
    // 0x4f2588: 0x2810  mfhi        $a1
    ctx->pc = 0x4f2588u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4f258c:
    // 0x4f258c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4f258cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f2590:
    // 0x4f2590: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f2590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f2594:
    // 0x4f2594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4f2594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f2598:
    // 0x4f2598: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4f2598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_4f259c:
    // 0x4f259c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4f259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f25a0:
    // 0x4f25a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f25a4:
    // 0x4f25a4: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x4f25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_4f25a8:
    // 0x4f25a8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4f25a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4f25ac:
    // 0x4f25ac: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4f25acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_4f25b0:
    // 0x4f25b0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x4f25b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f25b4:
    // 0x4f25b4: 0x54e0ffdc  bnel        $a3, $zero, . + 4 + (-0x24 << 2)
label_4f25b8:
    if (ctx->pc == 0x4F25B8u) {
        ctx->pc = 0x4F25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F25B4u;
        // 0x4f25b8: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F25BCu;
        goto label_4f25bc;
    }
    ctx->pc = 0x4F25B4u;
    {
        const bool branch_taken_0x4f25b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f25b4) {
            ctx->pc = 0x4F25B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F25B4u;
            // 0x4f25b8: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2528;
        }
    }
    ctx->pc = 0x4F25BCu;
label_4f25bc:
    // 0x4f25bc: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x4f25bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_4f25c0:
    // 0x4f25c0: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x4f25c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4f25c4:
    // 0x4f25c4: 0x5440ffd0  bnel        $v0, $zero, . + 4 + (-0x30 << 2)
label_4f25c8:
    if (ctx->pc == 0x4F25C8u) {
        ctx->pc = 0x4F25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F25C4u;
        // 0x4f25c8: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F25CCu;
        goto label_4f25cc;
    }
    ctx->pc = 0x4F25C4u;
    {
        const bool branch_taken_0x4f25c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f25c4) {
            ctx->pc = 0x4F25C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F25C4u;
            // 0x4f25c8: 0x8d620004  lw          $v0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2508;
        }
    }
    ctx->pc = 0x4F25CCu;
label_4f25cc:
    // 0x4f25cc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4f25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4f25d0:
    // 0x4f25d0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4f25d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4f25d4:
    // 0x4f25d4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4f25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4f25d8:
    // 0x4f25d8: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x4f25d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4f25dc:
    // 0x4f25dc: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x4f25dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4f25e0:
    // 0x4f25e0: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x4f25e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_4f25e4:
    // 0x4f25e4: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x4f25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_4f25e8:
    // 0x4f25e8: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x4f25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_4f25ec:
    // 0x4f25ec: 0xaea4000c  sw          $a0, 0xC($s5)
    ctx->pc = 0x4f25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 4));
label_4f25f0:
    // 0x4f25f0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4f25f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_4f25f4:
    // 0x4f25f4: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4f25f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_4f25f8:
    // 0x4f25f8: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_4f25fc:
    if (ctx->pc == 0x4F25FCu) {
        ctx->pc = 0x4F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F25F8u;
        // 0x4f25fc: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2600u;
        goto label_4f2600;
    }
    ctx->pc = 0x4F25F8u;
    {
        const bool branch_taken_0x4f25f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F25F8u;
        // 0x4f25fc: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f25f8) {
            ctx->pc = 0x4F2624u;
            goto label_4f2624;
        }
    }
    ctx->pc = 0x4F2600u;
label_4f2600:
    // 0x4f2600: 0x8e68b9c0  lw          $t0, -0x4640($s3)
    ctx->pc = 0x4f2600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4f2604:
    // 0x4f2604: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4f2604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f2608:
    // 0x4f2608: 0x2646df58  addiu       $a2, $s2, -0x20A8
    ctx->pc = 0x4f2608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958936));
label_4f260c:
    // 0x4f260c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f260cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f2610:
    // 0x4f2610: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f2610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f2614:
    // 0x4f2614: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f2614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f2618:
    // 0x4f2618: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f2618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f261c:
    // 0x4f261c: 0x60f809  jalr        $v1
label_4f2620:
    if (ctx->pc == 0x4F2620u) {
        ctx->pc = 0x4F2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F261Cu;
        // 0x4f2620: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2624u;
        goto label_4f2624;
    }
    ctx->pc = 0x4F261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F2624u);
        ctx->pc = 0x4F2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F261Cu;
        // 0x4f2620: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F261Cu, 0x4F2624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2624u;
label_4f2624:
    // 0x4f2624: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4f2624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4f2628:
    // 0x4f2628: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4f2628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f262c:
    // 0x4f262c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4f262cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f2630:
    // 0x4f2630: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4f2630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f2634:
    // 0x4f2634: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4f2634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f2638:
    // 0x4f2638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4f2638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f263c:
    // 0x4f263c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4f263cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f2640:
    // 0x4f2640: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f2640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f2644:
    // 0x4f2644: 0x3e00008  jr          $ra
label_4f2648:
    if (ctx->pc == 0x4F2648u) {
        ctx->pc = 0x4F2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2644u;
        // 0x4f2648: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F264Cu;
        goto label_4f264c;
    }
    ctx->pc = 0x4F2644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2644u;
        // 0x4f2648: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F264Cu;
label_4f264c:
    // 0x4f264c: 0x0  nop
    ctx->pc = 0x4f264cu;
    // NOP
    ctx->pc = 0x4f2650u;
}
