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

// Function: sub_004A2670
// Address: 0x4a2670 - 0x4a2910
void sub_004A2670_0x4a2670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2670_0x4a2670");
#endif

    switch (ctx->pc) {
        case 0x4a26f4u: goto label_4a26f4;
        case 0x4a2704u: goto label_4a2704;
        case 0x4a2718u: goto label_4a2718;
        case 0x4a2724u: goto label_4a2724;
        case 0x4a2820u: goto label_4a2820;
        case 0x4a28dcu: goto label_4a28dc;
        default: break;
    }

    ctx->pc = 0x4a2670u;

    // 0x4a2670: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x4a2670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a2674: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a2674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4a2678: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a2678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4a267c: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x4a267cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x4a2680: 0x358c0001  ori         $t4, $t4, 0x1
    ctx->pc = 0x4a2680u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x4a2684: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x4a2684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x4a2688: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a2688u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a268c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a2690: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4a2690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4a2694: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x4a2694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4a2698: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4a2698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4a269c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x4a269cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x4a26a0: 0x7185f389  pcpyld      $fp, $t4, $a1
    ctx->pc = 0x4a26a0u;
    SET_GPR_VEC(ctx, 30, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x4a26a4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x4a26a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x4a26a8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4a26ac: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x4a26acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x4a26b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4a26b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4a26b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4a26b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a26b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4a26bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a26bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4a26c0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x4a26c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x4a26c4: 0x4a83e  dsrl32      $s5, $a0, 0
    ctx->pc = 0x4a26c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4a26c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a26c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4a26cc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a26ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4a26d0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a26d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26d4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4a26d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26d8: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x4a26d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26dc: 0x9283e  dsrl32      $a1, $t1, 0
    ctx->pc = 0x4a26dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x4a26e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a26e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a26e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a26e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a26e8: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x4a26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x4a26ec: 0xc10acae  jal         func_42B2B8
    ctx->pc = 0x4A26ECu;
    SET_GPR_U32(ctx, 31, 0x4A26F4u);
    ctx->pc = 0x4A26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A26ECu;
    // 0x4a26f0: 0x1521f8  dsll        $a0, $s5, 7 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << 7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4A26ECu, 0x4A26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A26F4u;
label_4a26f4:
    // 0x4a26f4: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x4a26f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a26f8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x4a26f8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x4a26fc: 0xc123298  jal         func_48CA60
    ctx->pc = 0x4A26FCu;
    SET_GPR_U32(ctx, 31, 0x4A2704u);
    ctx->pc = 0x4A2700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A26FCu;
    // 0x4a2700: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CA60u, 0x4A26FCu, 0x4A2704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2704u;
label_4a2704:
    // 0x4a2704: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4a2704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4a2708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a2708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a270c: 0x2c42018  mult        $a0, $s6, $a0
    ctx->pc = 0x4a270cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a2710: 0xc123560  jal         func_48D580
    ctx->pc = 0x4A2710u;
    SET_GPR_U32(ctx, 31, 0x4A2718u);
    ctx->pc = 0x4A2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2710u;
    // 0x4a2714: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D580u, 0x4A2710u, 0x4A2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2718u;
label_4a2718:
    // 0x4a2718: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4a2718u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a271c: 0xc123298  jal         func_48CA60
    ctx->pc = 0x4A271Cu;
    SET_GPR_U32(ctx, 31, 0x4A2724u);
    ctx->pc = 0x4A2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A271Cu;
    // 0x4a2720: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CA60u, 0x4A271Cu, 0x4A2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2724u;
label_4a2724:
    // 0x4a2724: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x4a2724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x4a2728: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x4a2728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x4a272c: 0x17203c  dsll32      $a0, $s7, 0
    ctx->pc = 0x4a272cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 0));
    // 0x4a2730: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x4a2730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4a2734: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a2734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2738: 0x70651389  pcpyld      $v0, $v1, $a1
    ctx->pc = 0x4a2738u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x4a273c: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4a2740: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a2740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4a2744: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a2744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a2748: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a2748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x4a274c: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x4a274cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x4a2750: 0x24e60500  addiu       $a2, $a3, 0x500
    ctx->pc = 0x4a2750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x4a2754: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a2754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a2758: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a2758u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x710530u));
    // 0x4a275c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a275cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4a2760: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a2760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a2764: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a2764u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x710500u));
    // 0x4a2768: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a2768u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4a276c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4a2770: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a2770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a2774: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x4a2774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4a2778: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x4a2778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x4a277c: 0x139c3c  dsll32      $s3, $s3, 16
    ctx->pc = 0x4a277cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 16));
    // 0x4a2780: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4a2780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4a2784: 0x32313fff  andi        $s1, $s1, 0x3FFF
    ctx->pc = 0x4a2784u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x4a2788: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4a2788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4a278c: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x4a278cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4a2790: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4a2790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4a2794: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x4a2794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x4a2798: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a279c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x4a279cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x4a27a0: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x4a27a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a27a4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x4a27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x4a27a8: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x4a27a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x4a27ac: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a27acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4a27b0: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x4a27b4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a27b8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a27b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4a27bc: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a27bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x4a27c0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a27c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4a27c4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a27c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a27c8: 0x16283c  dsll32      $a1, $s6, 0
    ctx->pc = 0x4a27c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 0));
    // 0x4a27cc: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x4a27ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x4a27d0: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x4a27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x4a27d4: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x4a27d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x4a27d8: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4a27d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a27dc: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x4a27dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x4a27e0: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a27e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x4a27e4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x4a27e8: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x4a27ec: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a27ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4a27f0: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a27f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x4a27f4: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x4a27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x4a27f8: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x4a27fc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4a27fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2800: 0x12c00021  beqz        $s6, . + 4 + (0x21 << 2)
    ctx->pc = 0x4A2800u;
    {
        const bool branch_taken_0x4a2800 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2800u;
        // 0x4a2804: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2800) {
            ctx->pc = 0x4A2888u;
            goto label_4a2888;
        }
    }
    ctx->pc = 0x4A2808u;
    // 0x4a2808: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x4a2808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x4a280c: 0x26caffff  addiu       $t2, $s6, -0x1
    ctx->pc = 0x4a280cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4a2810: 0x2a24825  or          $t1, $s5, $v0
    ctx->pc = 0x4a2810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x4a2814: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x4a2814u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4a2818: 0xd6b3c  dsll32      $t5, $t5, 12
    ctx->pc = 0x4a2818u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 12));
    // 0x4a281c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4a281cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a2820:
    // 0x4a2820: 0x7cde0000  sq          $fp, 0x0($a2)
    ctx->pc = 0x4a2820u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 30));
    // 0x4a2824: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x4a2824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4a2828: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a2828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a282c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a282cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a2830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a2834: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x4a2834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x4a2838: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x4a2838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x4a283c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4a2840: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x4a2840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x4a2844: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4a2848: 0x2a31825  or          $v1, $s5, $v1
    ctx->pc = 0x4a2848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
    // 0x4a284c: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x4a284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x4a2850: 0x9603c  dsll32      $t4, $t1, 0
    ctx->pc = 0x4a2850u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 0));
    // 0x4a2854: 0x4d2825  or          $a1, $v0, $t5
    ctx->pc = 0x4a2854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4a2858: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4a2858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4a285c: 0x71651389  pcpyld      $v0, $t3, $a1
    ctx->pc = 0x4a285cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x4a2860: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4a2860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2864: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a2864u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2868: 0x285a021  addu        $s4, $s4, $a1
    ctx->pc = 0x4a2868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x4a286c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a286cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a2870: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x4a2870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4a2874: 0x71851389  pcpyld      $v0, $t4, $a1
    ctx->pc = 0x4a2874u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x4a2878: 0x116182b  sltu        $v1, $t0, $s6
    ctx->pc = 0x4a2878u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4a287c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a287cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a2880: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4A2880u;
    {
        const bool branch_taken_0x4a2880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2880u;
        // 0x4a2884: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2880) {
            ctx->pc = 0x4A2820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2820;
        }
    }
    ctx->pc = 0x4A2888u;
label_4a2888:
    // 0x4a2888: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x4a2888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4a288c: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x4a288cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x4a2890: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x4a2890u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x4a2894: 0x358c0002  ori         $t4, $t4, 0x2
    ctx->pc = 0x4a2894u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x4a2898: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x4a2898u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x4a289c: 0x71851389  pcpyld      $v0, $t4, $a1
    ctx->pc = 0x4a289cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x4a28a0: 0x24e30500  addiu       $v1, $a3, 0x500
    ctx->pc = 0x4a28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x4a28a4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a28a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a28a8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x4a28a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4a28ac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4a28acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x4a28b0: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x4a28b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x4a28b4: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x4a28b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a28b8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a28b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a28bc: 0x71851389  pcpyld      $v0, $t4, $a1
    ctx->pc = 0x4a28bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 5)));
    // 0x4a28c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4a28c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28c4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4a28c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4a28c8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4a28c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a28cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4a28ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a28d0: 0x24c5008f  addiu       $a1, $a2, 0x8F
    ctx->pc = 0x4a28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 143));
    // 0x4a28d4: 0xc10f644  jal         func_43D910
    ctx->pc = 0x4A28D4u;
    SET_GPR_U32(ctx, 31, 0x4A28DCu);
    ctx->pc = 0x4A28D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A28D4u;
    // 0x4a28d8: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4A28D4u, 0x4A28DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A28DCu;
label_4a28dc:
    // 0x4a28dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a28dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a28e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a28e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a28e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a28e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a28e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a28e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a28ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a28ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a28f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a28f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a28f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a28f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a28f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a28f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a28fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4a28fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a2900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a2900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2904: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2904u;
        // 0x4a2908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A290Cu;
    // 0x4a290c: 0x0  nop
    ctx->pc = 0x4a290cu;
    // NOP
    ctx->pc = 0x4a2910u;
}
