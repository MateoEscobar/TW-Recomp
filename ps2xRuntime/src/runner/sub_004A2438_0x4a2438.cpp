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

// Function: sub_004A2438
// Address: 0x4a2438 - 0x4a2670
void sub_004A2438_0x4a2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2438_0x4a2438");
#endif

    switch (ctx->pc) {
        case 0x4a2480u: goto label_4a2480;
        case 0x4a2560u: goto label_4a2560;
        default: break;
    }

    ctx->pc = 0x4a2438u;

    // 0x4a2438: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a2438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a243c: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x4a243cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x4a2440: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a2440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4a2444: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a2444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4a2448: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4a2448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a244c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4a2450: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4a2450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2454: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a2454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a2458: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4a2458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a245c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4a2460: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a2460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2464: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a2464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4a2468: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a2468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a246c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a2470: 0x11400039  beqz        $t2, . + 4 + (0x39 << 2)
    ctx->pc = 0x4A2470u;
    {
        const bool branch_taken_0x4a2470 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2470u;
        // 0x4a2474: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2470) {
            ctx->pc = 0x4A2558u;
            goto label_4a2558;
        }
    }
    ctx->pc = 0x4A2478u;
    // 0x4a2478: 0xc123298  jal         func_48CA60
    ctx->pc = 0x4A2478u;
    SET_GPR_U32(ctx, 31, 0x4A2480u);
    ctx->pc = 0x4A247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2478u;
    // 0x4a247c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CA60u, 0x4A2478u, 0x4A2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2480u;
label_4a2480:
    // 0x4a2480: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a2480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2484: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x4a2484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x4a2488: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4a2488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x4a248c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x4a248cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x4a2490: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x4a2490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x4a2494: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a2494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a2498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a2498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a249c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a24a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a24a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a24a4: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x4a24a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x4a24a8: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4a24ac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a24acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4a24b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a24b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a24b4: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x4a24b8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4a24b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4a24bc: 0x24c60500  addiu       $a2, $a2, 0x500
    ctx->pc = 0x4a24bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
    // 0x4a24c0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a24c4: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a24c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x710530u));
    // 0x4a24c8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a24c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4a24cc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a24ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a24d0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a24d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x710500u));
    // 0x4a24d4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a24d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4a24d8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4a24dc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a24dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a24e0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x4a24e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4a24e4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4a24e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4a24e8: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x4a24e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x4a24ec: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x4a24ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x4a24f0: 0x32633fff  andi        $v1, $s3, 0x3FFF
    ctx->pc = 0x4a24f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x4a24f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a24f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a24f8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a24f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a24fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a24fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a2500: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x4a2500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x4a2504: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a2504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a2508: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x4a2508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x4a250c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a2510: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x4a2510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x4a2514: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x4a2514u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x4a2518: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a2518u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4a251c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a251cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x4a2520: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a2520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a2524: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a2524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a2528: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a2528u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x4a252c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4a2530: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a2530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a2534: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x4a2534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x4a2538: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x4a2538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x4a253c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x4a253cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x4a2540: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a2540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4a2544: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x4a2544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4a2548: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4a2548u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4a254c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x4A254Cu;
    {
        const bool branch_taken_0x4a254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A254Cu;
        // 0x4a2550: 0x7c820040  sq          $v0, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a254c) {
            ctx->pc = 0x4A2630u;
            goto label_4a2630;
        }
    }
    ctx->pc = 0x4A2554u;
    // 0x4a2554: 0x0  nop
    ctx->pc = 0x4a2554u;
    // NOP
label_4a2558:
    // 0x4a2558: 0xc123298  jal         func_48CA60
    ctx->pc = 0x4A2558u;
    SET_GPR_U32(ctx, 31, 0x4A2560u);
    ctx->pc = 0x4A255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2558u;
    // 0x4a255c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CA60u, 0x4A2558u, 0x4A2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2560u;
label_4a2560:
    // 0x4a2560: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a2560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2564: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x4a2564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x4a2568: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4a2568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x4a256c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x4a256cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x4a2570: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x4a2570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x4a2574: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a2574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a2578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a2578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a257c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a2580: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a2580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a2584: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x4a2584u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x4a2588: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a2588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4a258c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a258cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4a2590: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a2594: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a2594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x4a2598: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4a2598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4a259c: 0x24c60500  addiu       $a2, $a2, 0x500
    ctx->pc = 0x4a259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
    // 0x4a25a0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a25a4: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a25a4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x710530u));
    // 0x4a25a8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a25a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4a25ac: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a25acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a25b0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a25b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x710500u));
    // 0x4a25b4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a25b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4a25b8: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a25b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4a25bc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a25c0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x4a25c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4a25c4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4a25c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4a25c8: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x4a25c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x4a25cc: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x4a25ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x4a25d0: 0x32633fff  andi        $v1, $s3, 0x3FFF
    ctx->pc = 0x4a25d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x4a25d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a25d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4a25d8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a25d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a25dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a25dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a25e0: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x4a25e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x4a25e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a25e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a25e8: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x4a25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x4a25ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a25ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a25f0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x4a25f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x4a25f4: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x4a25f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x4a25f8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4a25fc: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x4a2600: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a2600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a2604: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a2604u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a2608: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a2608u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x4a260c: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4a2610: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a2610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a2614: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x4a2614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x4a2618: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x4a2618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x4a261c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x4a261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x4a2620: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a2620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4a2624: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x4a2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4a2628: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4a2628u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4a262c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a262cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a2630:
    // 0x4a2630: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a2630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x4a2634: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a2634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a2638: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a2638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4a263c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a263cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x4a2640: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x4a2640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x4a2644: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a2644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x4a2648: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a2648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a264c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a264cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a2650: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a2650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a2654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a2658: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a2658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a265c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a265cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a2660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2664: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2664u;
        // 0x4a2668: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A266Cu;
    // 0x4a266c: 0x0  nop
    ctx->pc = 0x4a266cu;
    // NOP
    ctx->pc = 0x4a2670u;
}
