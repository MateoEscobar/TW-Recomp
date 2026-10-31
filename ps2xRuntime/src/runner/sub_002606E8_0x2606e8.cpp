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

// Function: sub_002606E8
// Address: 0x2606e8 - 0x260a70
void sub_002606E8_0x2606e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002606E8_0x2606e8");
#endif

    switch (ctx->pc) {
        case 0x2606e8u: goto label_2606e8;
        case 0x2606ecu: goto label_2606ec;
        case 0x2606f0u: goto label_2606f0;
        case 0x2606f4u: goto label_2606f4;
        case 0x2606f8u: goto label_2606f8;
        case 0x2606fcu: goto label_2606fc;
        case 0x260700u: goto label_260700;
        case 0x260704u: goto label_260704;
        case 0x260708u: goto label_260708;
        case 0x26070cu: goto label_26070c;
        case 0x260710u: goto label_260710;
        case 0x260714u: goto label_260714;
        case 0x260718u: goto label_260718;
        case 0x26071cu: goto label_26071c;
        case 0x260720u: goto label_260720;
        case 0x260724u: goto label_260724;
        case 0x260728u: goto label_260728;
        case 0x26072cu: goto label_26072c;
        case 0x260730u: goto label_260730;
        case 0x260734u: goto label_260734;
        case 0x260738u: goto label_260738;
        case 0x26073cu: goto label_26073c;
        case 0x260740u: goto label_260740;
        case 0x260744u: goto label_260744;
        case 0x260748u: goto label_260748;
        case 0x26074cu: goto label_26074c;
        case 0x260750u: goto label_260750;
        case 0x260754u: goto label_260754;
        case 0x260758u: goto label_260758;
        case 0x26075cu: goto label_26075c;
        case 0x260760u: goto label_260760;
        case 0x260764u: goto label_260764;
        case 0x260768u: goto label_260768;
        case 0x26076cu: goto label_26076c;
        case 0x260770u: goto label_260770;
        case 0x260774u: goto label_260774;
        case 0x260778u: goto label_260778;
        case 0x26077cu: goto label_26077c;
        case 0x260780u: goto label_260780;
        case 0x260784u: goto label_260784;
        case 0x260788u: goto label_260788;
        case 0x26078cu: goto label_26078c;
        case 0x260790u: goto label_260790;
        case 0x260794u: goto label_260794;
        case 0x260798u: goto label_260798;
        case 0x26079cu: goto label_26079c;
        case 0x2607a0u: goto label_2607a0;
        case 0x2607a4u: goto label_2607a4;
        case 0x2607a8u: goto label_2607a8;
        case 0x2607acu: goto label_2607ac;
        case 0x2607b0u: goto label_2607b0;
        case 0x2607b4u: goto label_2607b4;
        case 0x2607b8u: goto label_2607b8;
        case 0x2607bcu: goto label_2607bc;
        case 0x2607c0u: goto label_2607c0;
        case 0x2607c4u: goto label_2607c4;
        case 0x2607c8u: goto label_2607c8;
        case 0x2607ccu: goto label_2607cc;
        case 0x2607d0u: goto label_2607d0;
        case 0x2607d4u: goto label_2607d4;
        case 0x2607d8u: goto label_2607d8;
        case 0x2607dcu: goto label_2607dc;
        case 0x2607e0u: goto label_2607e0;
        case 0x2607e4u: goto label_2607e4;
        case 0x2607e8u: goto label_2607e8;
        case 0x2607ecu: goto label_2607ec;
        case 0x2607f0u: goto label_2607f0;
        case 0x2607f4u: goto label_2607f4;
        case 0x2607f8u: goto label_2607f8;
        case 0x2607fcu: goto label_2607fc;
        case 0x260800u: goto label_260800;
        case 0x260804u: goto label_260804;
        case 0x260808u: goto label_260808;
        case 0x26080cu: goto label_26080c;
        case 0x260810u: goto label_260810;
        case 0x260814u: goto label_260814;
        case 0x260818u: goto label_260818;
        case 0x26081cu: goto label_26081c;
        case 0x260820u: goto label_260820;
        case 0x260824u: goto label_260824;
        case 0x260828u: goto label_260828;
        case 0x26082cu: goto label_26082c;
        case 0x260830u: goto label_260830;
        case 0x260834u: goto label_260834;
        case 0x260838u: goto label_260838;
        case 0x26083cu: goto label_26083c;
        case 0x260840u: goto label_260840;
        case 0x260844u: goto label_260844;
        case 0x260848u: goto label_260848;
        case 0x26084cu: goto label_26084c;
        case 0x260850u: goto label_260850;
        case 0x260854u: goto label_260854;
        case 0x260858u: goto label_260858;
        case 0x26085cu: goto label_26085c;
        case 0x260860u: goto label_260860;
        case 0x260864u: goto label_260864;
        case 0x260868u: goto label_260868;
        case 0x26086cu: goto label_26086c;
        case 0x260870u: goto label_260870;
        case 0x260874u: goto label_260874;
        case 0x260878u: goto label_260878;
        case 0x26087cu: goto label_26087c;
        case 0x260880u: goto label_260880;
        case 0x260884u: goto label_260884;
        case 0x260888u: goto label_260888;
        case 0x26088cu: goto label_26088c;
        case 0x260890u: goto label_260890;
        case 0x260894u: goto label_260894;
        case 0x260898u: goto label_260898;
        case 0x26089cu: goto label_26089c;
        case 0x2608a0u: goto label_2608a0;
        case 0x2608a4u: goto label_2608a4;
        case 0x2608a8u: goto label_2608a8;
        case 0x2608acu: goto label_2608ac;
        case 0x2608b0u: goto label_2608b0;
        case 0x2608b4u: goto label_2608b4;
        case 0x2608b8u: goto label_2608b8;
        case 0x2608bcu: goto label_2608bc;
        case 0x2608c0u: goto label_2608c0;
        case 0x2608c4u: goto label_2608c4;
        case 0x2608c8u: goto label_2608c8;
        case 0x2608ccu: goto label_2608cc;
        case 0x2608d0u: goto label_2608d0;
        case 0x2608d4u: goto label_2608d4;
        case 0x2608d8u: goto label_2608d8;
        case 0x2608dcu: goto label_2608dc;
        case 0x2608e0u: goto label_2608e0;
        case 0x2608e4u: goto label_2608e4;
        case 0x2608e8u: goto label_2608e8;
        case 0x2608ecu: goto label_2608ec;
        case 0x2608f0u: goto label_2608f0;
        case 0x2608f4u: goto label_2608f4;
        case 0x2608f8u: goto label_2608f8;
        case 0x2608fcu: goto label_2608fc;
        case 0x260900u: goto label_260900;
        case 0x260904u: goto label_260904;
        case 0x260908u: goto label_260908;
        case 0x26090cu: goto label_26090c;
        case 0x260910u: goto label_260910;
        case 0x260914u: goto label_260914;
        case 0x260918u: goto label_260918;
        case 0x26091cu: goto label_26091c;
        case 0x260920u: goto label_260920;
        case 0x260924u: goto label_260924;
        case 0x260928u: goto label_260928;
        case 0x26092cu: goto label_26092c;
        case 0x260930u: goto label_260930;
        case 0x260934u: goto label_260934;
        case 0x260938u: goto label_260938;
        case 0x26093cu: goto label_26093c;
        case 0x260940u: goto label_260940;
        case 0x260944u: goto label_260944;
        case 0x260948u: goto label_260948;
        case 0x26094cu: goto label_26094c;
        case 0x260950u: goto label_260950;
        case 0x260954u: goto label_260954;
        case 0x260958u: goto label_260958;
        case 0x26095cu: goto label_26095c;
        case 0x260960u: goto label_260960;
        case 0x260964u: goto label_260964;
        case 0x260968u: goto label_260968;
        case 0x26096cu: goto label_26096c;
        case 0x260970u: goto label_260970;
        case 0x260974u: goto label_260974;
        case 0x260978u: goto label_260978;
        case 0x26097cu: goto label_26097c;
        case 0x260980u: goto label_260980;
        case 0x260984u: goto label_260984;
        case 0x260988u: goto label_260988;
        case 0x26098cu: goto label_26098c;
        case 0x260990u: goto label_260990;
        case 0x260994u: goto label_260994;
        case 0x260998u: goto label_260998;
        case 0x26099cu: goto label_26099c;
        case 0x2609a0u: goto label_2609a0;
        case 0x2609a4u: goto label_2609a4;
        case 0x2609a8u: goto label_2609a8;
        case 0x2609acu: goto label_2609ac;
        case 0x2609b0u: goto label_2609b0;
        case 0x2609b4u: goto label_2609b4;
        case 0x2609b8u: goto label_2609b8;
        case 0x2609bcu: goto label_2609bc;
        case 0x2609c0u: goto label_2609c0;
        case 0x2609c4u: goto label_2609c4;
        case 0x2609c8u: goto label_2609c8;
        case 0x2609ccu: goto label_2609cc;
        case 0x2609d0u: goto label_2609d0;
        case 0x2609d4u: goto label_2609d4;
        case 0x2609d8u: goto label_2609d8;
        case 0x2609dcu: goto label_2609dc;
        case 0x2609e0u: goto label_2609e0;
        case 0x2609e4u: goto label_2609e4;
        case 0x2609e8u: goto label_2609e8;
        case 0x2609ecu: goto label_2609ec;
        case 0x2609f0u: goto label_2609f0;
        case 0x2609f4u: goto label_2609f4;
        case 0x2609f8u: goto label_2609f8;
        case 0x2609fcu: goto label_2609fc;
        case 0x260a00u: goto label_260a00;
        case 0x260a04u: goto label_260a04;
        case 0x260a08u: goto label_260a08;
        case 0x260a0cu: goto label_260a0c;
        case 0x260a10u: goto label_260a10;
        case 0x260a14u: goto label_260a14;
        case 0x260a18u: goto label_260a18;
        case 0x260a1cu: goto label_260a1c;
        case 0x260a20u: goto label_260a20;
        case 0x260a24u: goto label_260a24;
        case 0x260a28u: goto label_260a28;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a30u: goto label_260a30;
        case 0x260a34u: goto label_260a34;
        case 0x260a38u: goto label_260a38;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a40u: goto label_260a40;
        case 0x260a44u: goto label_260a44;
        case 0x260a48u: goto label_260a48;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a50u: goto label_260a50;
        case 0x260a54u: goto label_260a54;
        case 0x260a58u: goto label_260a58;
        case 0x260a5cu: goto label_260a5c;
        case 0x260a60u: goto label_260a60;
        case 0x260a64u: goto label_260a64;
        case 0x260a68u: goto label_260a68;
        case 0x260a6cu: goto label_260a6c;
        default: break;
    }

    ctx->pc = 0x2606e8u;

label_2606e8:
    // 0x2606e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2606e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2606ec:
    // 0x2606ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2606ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2606f0:
    // 0x2606f0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2606f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2606f4:
    // 0x2606f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2606f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2606f8:
    // 0x2606f8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2606f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2606fc:
    // 0x2606fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2606fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_260700:
    // 0x260700: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x260700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_260704:
    // 0x260704: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x260704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_260708:
    // 0x260708: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x260708u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_26070c:
    // 0x26070c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_260710:
    // 0x260710: 0x2610dc40  addiu       $s0, $s0, -0x23C0
    ctx->pc = 0x260710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958144));
label_260714:
    // 0x260714: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x260714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_260718:
    // 0x260718: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x260718u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_26071c:
    // 0x26071c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x26071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_260720:
    // 0x260720: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x260720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_260724:
    // 0x260724: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x260724u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_260728:
    // 0x260728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26072c:
    // 0x26072c: 0xc08b58a  jal         func_22D628
label_260730:
    if (ctx->pc == 0x260730u) {
        ctx->pc = 0x260730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26072Cu;
        // 0x260730: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260734u;
        goto label_260734;
    }
    ctx->pc = 0x26072Cu;
    SET_GPR_U32(ctx, 31, 0x260734u);
    ctx->pc = 0x260730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26072Cu;
    // 0x260730: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x26072Cu, 0x260734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260734u;
label_260734:
    // 0x260734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260738:
    // 0x260738: 0xc041532  jal         func_1054C8
label_26073c:
    if (ctx->pc == 0x26073Cu) {
        ctx->pc = 0x26073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260738u;
        // 0x26073c: 0x8e7600d8  lw          $s6, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260740u;
        goto label_260740;
    }
    ctx->pc = 0x260738u;
    SET_GPR_U32(ctx, 31, 0x260740u);
    ctx->pc = 0x26073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260738u;
    // 0x26073c: 0x8e7600d8  lw          $s6, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260738u, 0x260740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260740u;
label_260740:
    // 0x260740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260744:
    // 0x260744: 0xc041532  jal         func_1054C8
label_260748:
    if (ctx->pc == 0x260748u) {
        ctx->pc = 0x260748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260744u;
        // 0x260748: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26074Cu;
        goto label_26074c;
    }
    ctx->pc = 0x260744u;
    SET_GPR_U32(ctx, 31, 0x26074Cu);
    ctx->pc = 0x260748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260744u;
    // 0x260748: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260744u, 0x26074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26074Cu;
label_26074c:
    // 0x26074c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260750:
    // 0x260750: 0xc041532  jal         func_1054C8
label_260754:
    if (ctx->pc == 0x260754u) {
        ctx->pc = 0x260754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260750u;
        // 0x260754: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260758u;
        goto label_260758;
    }
    ctx->pc = 0x260750u;
    SET_GPR_U32(ctx, 31, 0x260758u);
    ctx->pc = 0x260754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260750u;
    // 0x260754: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260750u, 0x260758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260758u;
label_260758:
    // 0x260758: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26075c:
    // 0x26075c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26075cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260760:
    // 0x260760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260764:
    // 0x260764: 0x8e29bd30  lw          $t1, -0x42D0($s1)
    ctx->pc = 0x260764u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_260768:
    // 0x260768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26076c:
    // 0x26076c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x26076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_260770:
    // 0x260770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260774:
    // 0x260774: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x260774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260778:
    // 0x260778: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x260778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26077c:
    // 0x26077c: 0xc088178  jal         func_2205E0
label_260780:
    if (ctx->pc == 0x260780u) {
        ctx->pc = 0x260780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26077Cu;
        // 0x260780: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260784u;
        goto label_260784;
    }
    ctx->pc = 0x26077Cu;
    SET_GPR_U32(ctx, 31, 0x260784u);
    ctx->pc = 0x260780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26077Cu;
    // 0x260780: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x26077Cu, 0x260784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260784u;
label_260784:
    // 0x260784: 0x8ee4489c  lw          $a0, 0x489C($s7)
    ctx->pc = 0x260784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_260788:
    // 0x260788: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x260788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_26078c:
    // 0x26078c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_260790:
    if (ctx->pc == 0x260790u) {
        ctx->pc = 0x260790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26078Cu;
        // 0x260790: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260794u;
        goto label_260794;
    }
    ctx->pc = 0x26078Cu;
    {
        const bool branch_taken_0x26078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26078Cu;
        // 0x260790: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26078c) {
            ctx->pc = 0x2607A0u;
            goto label_2607a0;
        }
    }
    ctx->pc = 0x260794u;
label_260794:
    // 0x260794: 0xc107444  jal         func_41D110
label_260798:
    if (ctx->pc == 0x260798u) {
        ctx->pc = 0x26079Cu;
        goto label_26079c;
    }
    ctx->pc = 0x260794u;
    SET_GPR_U32(ctx, 31, 0x26079Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x260794u, 0x26079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26079Cu;
label_26079c:
    // 0x26079c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x26079cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2607a0:
    // 0x2607a0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2607a4:
    if (ctx->pc == 0x2607A4u) {
        ctx->pc = 0x2607A8u;
        goto label_2607a8;
    }
    ctx->pc = 0x2607A0u;
    {
        const bool branch_taken_0x2607a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2607a0) {
            ctx->pc = 0x2607F0u;
            goto label_2607f0;
        }
    }
    ctx->pc = 0x2607A8u;
label_2607a8:
    // 0x2607a8: 0xc073a8e  jal         func_1CEA38
label_2607ac:
    if (ctx->pc == 0x2607ACu) {
        ctx->pc = 0x2607ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607A8u;
        // 0x2607ac: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2607B0u;
        goto label_2607b0;
    }
    ctx->pc = 0x2607A8u;
    SET_GPR_U32(ctx, 31, 0x2607B0u);
    ctx->pc = 0x2607ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607A8u;
    // 0x2607ac: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2607A8u, 0x2607B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607B0u;
label_2607b0:
    // 0x2607b0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2607b4:
    if (ctx->pc == 0x2607B4u) {
        ctx->pc = 0x2607B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607B0u;
        // 0x2607b4: 0x8ee5489c  lw          $a1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2607B8u;
        goto label_2607b8;
    }
    ctx->pc = 0x2607B0u;
    {
        const bool branch_taken_0x2607b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607B0u;
        // 0x2607b4: 0x8ee5489c  lw          $a1, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607b0) {
            ctx->pc = 0x2607F0u;
            goto label_2607f0;
        }
    }
    ctx->pc = 0x2607B8u;
label_2607b8:
    // 0x2607b8: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2607b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2607bc:
    // 0x2607bc: 0x41238  dsll        $v0, $a0, 8
    ctx->pc = 0x2607bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 8);
label_2607c0:
    // 0x2607c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2607c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2607c4:
    // 0x2607c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2607c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2607c8:
    // 0x2607c8: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x2607c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2607cc:
    // 0x2607cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2607d0:
    if (ctx->pc == 0x2607D0u) {
        ctx->pc = 0x2607D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607CCu;
        // 0x2607d0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2607D4u;
        goto label_2607d4;
    }
    ctx->pc = 0x2607CCu;
    {
        const bool branch_taken_0x2607cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607CCu;
        // 0x2607d0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607cc) {
            ctx->pc = 0x2607F0u;
            goto label_2607f0;
        }
    }
    ctx->pc = 0x2607D4u;
label_2607d4:
    // 0x2607d4: 0x3c03fcff  lui         $v1, 0xFCFF
    ctx->pc = 0x2607d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64767 << 16));
label_2607d8:
    // 0x2607d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2607d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2607dc:
    // 0x2607dc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2607dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2607e0:
    // 0x2607e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2607e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2607e4:
    // 0x2607e4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2607e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2607e8:
    // 0x2607e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2607e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2607ec:
    // 0x2607ec: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2607ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_2607f0:
    // 0x2607f0: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_2607f4:
    if (ctx->pc == 0x2607F4u) {
        ctx->pc = 0x2607F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607F0u;
        // 0x2607f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2607F8u;
        goto label_2607f8;
    }
    ctx->pc = 0x2607F0u;
    {
        const bool branch_taken_0x2607f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607F0u;
        // 0x2607f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607f0) {
            ctx->pc = 0x260814u;
            goto label_260814;
        }
    }
    ctx->pc = 0x2607F8u;
label_2607f8:
    // 0x2607f8: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x2607f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2607fc:
    // 0x2607fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2607fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260800:
    // 0x260800: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x260800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_260804:
    // 0x260804: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x260804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_260808:
    // 0x260808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26080c:
    // 0x26080c: 0xc041b20  jal         func_106C80
label_260810:
    if (ctx->pc == 0x260810u) {
        ctx->pc = 0x260810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26080Cu;
        // 0x260810: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260814u;
        goto label_260814;
    }
    ctx->pc = 0x26080Cu;
    SET_GPR_U32(ctx, 31, 0x260814u);
    ctx->pc = 0x260810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26080Cu;
    // 0x260810: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26080Cu, 0x260814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260814u;
label_260814:
    // 0x260814: 0xc05d484  jal         func_175210
label_260818:
    if (ctx->pc == 0x260818u) {
        ctx->pc = 0x260818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260814u;
        // 0x260818: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26081Cu;
        goto label_26081c;
    }
    ctx->pc = 0x260814u;
    SET_GPR_U32(ctx, 31, 0x26081Cu);
    ctx->pc = 0x260818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260814u;
    // 0x260818: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x260814u, 0x26081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26081Cu;
label_26081c:
    // 0x26081c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260820:
    // 0x260820: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x260820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_260824:
    // 0x260824: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x260824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_260828:
    // 0x260828: 0xa0f809  jalr        $a1
label_26082c:
    if (ctx->pc == 0x26082Cu) {
        ctx->pc = 0x26082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260828u;
        // 0x26082c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260830u;
        goto label_260830;
    }
    ctx->pc = 0x260828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x260830u);
        ctx->pc = 0x26082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260828u;
        // 0x26082c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260828u, 0x260830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260830u;
label_260830:
    // 0x260830: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260834:
    // 0x260834: 0xc087016  jal         func_21C058
label_260838:
    if (ctx->pc == 0x260838u) {
        ctx->pc = 0x260838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260834u;
        // 0x260838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26083Cu;
        goto label_26083c;
    }
    ctx->pc = 0x260834u;
    SET_GPR_U32(ctx, 31, 0x26083Cu);
    ctx->pc = 0x260838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260834u;
    // 0x260838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x260834u, 0x26083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26083Cu;
label_26083c:
    // 0x26083c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_260840:
    if (ctx->pc == 0x260840u) {
        ctx->pc = 0x260840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26083Cu;
        // 0x260840: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260844u;
        goto label_260844;
    }
    ctx->pc = 0x26083Cu;
    {
        const bool branch_taken_0x26083c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x260840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26083Cu;
        // 0x260840: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26083c) {
            ctx->pc = 0x26085Cu;
            goto label_26085c;
        }
    }
    ctx->pc = 0x260844u;
label_260844:
    // 0x260844: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x260844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_260848:
    // 0x260848: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x260848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26084c:
    // 0x26084c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26084cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260850:
    // 0x260850: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x260850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_260854:
    // 0x260854: 0xc04159e  jal         func_105678
label_260858:
    if (ctx->pc == 0x260858u) {
        ctx->pc = 0x260858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260854u;
        // 0x260858: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26085Cu;
        goto label_26085c;
    }
    ctx->pc = 0x260854u;
    SET_GPR_U32(ctx, 31, 0x26085Cu);
    ctx->pc = 0x260858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260854u;
    // 0x260858: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x260854u, 0x26085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26085Cu;
label_26085c:
    // 0x26085c: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_260860:
    // 0x260860: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_260864:
    if (ctx->pc == 0x260864u) {
        ctx->pc = 0x260864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260860u;
        // 0x260864: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260868u;
        goto label_260868;
    }
    ctx->pc = 0x260860u;
    {
        const bool branch_taken_0x260860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260860u;
        // 0x260864: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260860) {
            ctx->pc = 0x2608ACu;
            goto label_2608ac;
        }
    }
    ctx->pc = 0x260868u;
label_260868:
    // 0x260868: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x260868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26086c:
    // 0x26086c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26086cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_260870:
    // 0x260870: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x260870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_260874:
    // 0x260874: 0x40f809  jalr        $v0
label_260878:
    if (ctx->pc == 0x260878u) {
        ctx->pc = 0x260878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260874u;
        // 0x260878: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26087Cu;
        goto label_26087c;
    }
    ctx->pc = 0x260874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26087Cu);
        ctx->pc = 0x260878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260874u;
        // 0x260878: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260874u, 0x26087Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26087Cu;
label_26087c:
    // 0x26087c: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x26087cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_260880:
    // 0x260880: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x260880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_260884:
    // 0x260884: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x260884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_260888:
    // 0x260888: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26088c:
    // 0x26088c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26088cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260890:
    // 0x260890: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x260890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260894:
    // 0x260894: 0x254a05f0  addiu       $t2, $t2, 0x5F0
    ctx->pc = 0x260894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1520));
label_260898:
    // 0x260898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26089c:
    // 0x26089c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26089cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2608a0:
    // 0x2608a0: 0x2406014c  addiu       $a2, $zero, 0x14C
    ctx->pc = 0x2608a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_2608a4:
    // 0x2608a4: 0xc041664  jal         func_105990
label_2608a8:
    if (ctx->pc == 0x2608A8u) {
        ctx->pc = 0x2608A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608A4u;
        // 0x2608a8: 0x3c080200  lui         $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608ACu;
        goto label_2608ac;
    }
    ctx->pc = 0x2608A4u;
    SET_GPR_U32(ctx, 31, 0x2608ACu);
    ctx->pc = 0x2608A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608A4u;
    // 0x2608a8: 0x3c080200  lui         $t0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2608A4u, 0x2608ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608ACu;
label_2608ac:
    // 0x2608ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2608acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2608b0:
    // 0x2608b0: 0xc05d53a  jal         func_1754E8
label_2608b4:
    if (ctx->pc == 0x2608B4u) {
        ctx->pc = 0x2608B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608B0u;
        // 0x2608b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608B8u;
        goto label_2608b8;
    }
    ctx->pc = 0x2608B0u;
    SET_GPR_U32(ctx, 31, 0x2608B8u);
    ctx->pc = 0x2608B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608B0u;
    // 0x2608b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2608B0u, 0x2608B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608B8u;
label_2608b8:
    // 0x2608b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2608b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2608bc:
    // 0x2608bc: 0xc05d4f6  jal         func_1753D8
label_2608c0:
    if (ctx->pc == 0x2608C0u) {
        ctx->pc = 0x2608C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608BCu;
        // 0x2608c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608C4u;
        goto label_2608c4;
    }
    ctx->pc = 0x2608BCu;
    SET_GPR_U32(ctx, 31, 0x2608C4u);
    ctx->pc = 0x2608C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608BCu;
    // 0x2608c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2608BCu, 0x2608C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608C4u;
label_2608c4:
    // 0x2608c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2608c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2608c8:
    // 0x2608c8: 0xc089990  jal         func_226640
label_2608cc:
    if (ctx->pc == 0x2608CCu) {
        ctx->pc = 0x2608CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608C8u;
        // 0x2608cc: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608D0u;
        goto label_2608d0;
    }
    ctx->pc = 0x2608C8u;
    SET_GPR_U32(ctx, 31, 0x2608D0u);
    ctx->pc = 0x2608CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608C8u;
    // 0x2608cc: 0x3c050200  lui         $a1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2608C8u, 0x2608D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608D0u;
label_2608d0:
    // 0x2608d0: 0xc088edc  jal         func_223B70
label_2608d4:
    if (ctx->pc == 0x2608D4u) {
        ctx->pc = 0x2608D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608D0u;
        // 0x2608d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608D8u;
        goto label_2608d8;
    }
    ctx->pc = 0x2608D0u;
    SET_GPR_U32(ctx, 31, 0x2608D8u);
    ctx->pc = 0x2608D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608D0u;
    // 0x2608d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2608D0u, 0x2608D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608D8u;
label_2608d8:
    // 0x2608d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2608dc:
    if (ctx->pc == 0x2608DCu) {
        ctx->pc = 0x2608E0u;
        goto label_2608e0;
    }
    ctx->pc = 0x2608D8u;
    {
        const bool branch_taken_0x2608d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2608d8) {
            ctx->pc = 0x2608E8u;
            goto label_2608e8;
        }
    }
    ctx->pc = 0x2608E0u;
label_2608e0:
    // 0x2608e0: 0xc08bbd6  jal         func_22EF58
label_2608e4:
    if (ctx->pc == 0x2608E4u) {
        ctx->pc = 0x2608E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608E0u;
        // 0x2608e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608E8u;
        goto label_2608e8;
    }
    ctx->pc = 0x2608E0u;
    SET_GPR_U32(ctx, 31, 0x2608E8u);
    ctx->pc = 0x2608E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608E0u;
    // 0x2608e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF58u, 0x2608E0u, 0x2608E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608E8u;
label_2608e8:
    // 0x2608e8: 0xc089f76  jal         func_227DD8
label_2608ec:
    if (ctx->pc == 0x2608ECu) {
        ctx->pc = 0x2608ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608E8u;
        // 0x2608ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608F0u;
        goto label_2608f0;
    }
    ctx->pc = 0x2608E8u;
    SET_GPR_U32(ctx, 31, 0x2608F0u);
    ctx->pc = 0x2608ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608E8u;
    // 0x2608ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x2608E8u, 0x2608F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608F0u;
label_2608f0:
    // 0x2608f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2608f4:
    if (ctx->pc == 0x2608F4u) {
        ctx->pc = 0x2608F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608F0u;
        // 0x2608f4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2608F8u;
        goto label_2608f8;
    }
    ctx->pc = 0x2608F0u;
    {
        const bool branch_taken_0x2608f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608F0u;
        // 0x2608f4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608f0) {
            ctx->pc = 0x26091Cu;
            goto label_26091c;
        }
    }
    ctx->pc = 0x2608F8u;
label_2608f8:
    // 0x2608f8: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2608f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2608fc:
    // 0x2608fc: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x2608fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
label_260900:
    // 0x260900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_260904:
    // 0x260904: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_260908:
    if (ctx->pc == 0x260908u) {
        ctx->pc = 0x260908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260904u;
        // 0x260908: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26090Cu;
        goto label_26090c;
    }
    ctx->pc = 0x260904u;
    {
        const bool branch_taken_0x260904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260904u;
        // 0x260908: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260904) {
            ctx->pc = 0x26091Cu;
            goto label_26091c;
        }
    }
    ctx->pc = 0x26090Cu;
label_26090c:
    // 0x26090c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260910:
    // 0x260910: 0xc08bad0  jal         func_22EB40
label_260914:
    if (ctx->pc == 0x260914u) {
        ctx->pc = 0x260914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260910u;
        // 0x260914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260918u;
        goto label_260918;
    }
    ctx->pc = 0x260910u;
    SET_GPR_U32(ctx, 31, 0x260918u);
    ctx->pc = 0x260914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260910u;
    // 0x260914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB40u, 0x260910u, 0x260918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260918u;
label_260918:
    // 0x260918: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x260918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26091c:
    // 0x26091c: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x26091cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_260920:
    // 0x260920: 0x2450dc40  addiu       $s0, $v0, -0x23C0
    ctx->pc = 0x260920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
label_260924:
    // 0x260924: 0xc041532  jal         func_1054C8
label_260928:
    if (ctx->pc == 0x260928u) {
        ctx->pc = 0x260928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260924u;
        // 0x260928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26092Cu;
        goto label_26092c;
    }
    ctx->pc = 0x260924u;
    SET_GPR_U32(ctx, 31, 0x26092Cu);
    ctx->pc = 0x260928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260924u;
    // 0x260928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260924u, 0x26092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26092Cu;
label_26092c:
    // 0x26092c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260930:
    // 0x260930: 0xc041532  jal         func_1054C8
label_260934:
    if (ctx->pc == 0x260934u) {
        ctx->pc = 0x260934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260930u;
        // 0x260934: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260938u;
        goto label_260938;
    }
    ctx->pc = 0x260930u;
    SET_GPR_U32(ctx, 31, 0x260938u);
    ctx->pc = 0x260934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260930u;
    // 0x260934: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260930u, 0x260938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260938u;
label_260938:
    // 0x260938: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x260938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26093c:
    // 0x26093c: 0xc041532  jal         func_1054C8
label_260940:
    if (ctx->pc == 0x260940u) {
        ctx->pc = 0x260940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26093Cu;
        // 0x260940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260944u;
        goto label_260944;
    }
    ctx->pc = 0x26093Cu;
    SET_GPR_U32(ctx, 31, 0x260944u);
    ctx->pc = 0x260940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26093Cu;
    // 0x260940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26093Cu, 0x260944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260944u;
label_260944:
    // 0x260944: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_260948:
    if (ctx->pc == 0x260948u) {
        ctx->pc = 0x260948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260944u;
        // 0x260948: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26094Cu;
        goto label_26094c;
    }
    ctx->pc = 0x260944u;
    {
        const bool branch_taken_0x260944 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x260948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260944u;
        // 0x260948: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260944) {
            ctx->pc = 0x26096Cu;
            goto label_26096c;
        }
    }
    ctx->pc = 0x26094Cu;
label_26094c:
    // 0x26094c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26094cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_260950:
    // 0x260950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x260950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260954:
    // 0x260954: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x260954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_260958:
    // 0x260958: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x260958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26095c:
    // 0x26095c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26095cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260960:
    // 0x260960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260964:
    // 0x260964: 0xc041b20  jal         func_106C80
label_260968:
    if (ctx->pc == 0x260968u) {
        ctx->pc = 0x260968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260964u;
        // 0x260968: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26096Cu;
        goto label_26096c;
    }
    ctx->pc = 0x260964u;
    SET_GPR_U32(ctx, 31, 0x26096Cu);
    ctx->pc = 0x260968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260964u;
    // 0x260968: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x260964u, 0x26096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26096Cu;
label_26096c:
    // 0x26096c: 0xc05d484  jal         func_175210
label_260970:
    if (ctx->pc == 0x260970u) {
        ctx->pc = 0x260970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26096Cu;
        // 0x260970: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260974u;
        goto label_260974;
    }
    ctx->pc = 0x26096Cu;
    SET_GPR_U32(ctx, 31, 0x260974u);
    ctx->pc = 0x260970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26096Cu;
    // 0x260970: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26096Cu, 0x260974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260974u;
label_260974:
    // 0x260974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260978:
    // 0x260978: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x260978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26097c:
    // 0x26097c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_260980:
    // 0x260980: 0xa0f809  jalr        $a1
label_260984:
    if (ctx->pc == 0x260984u) {
        ctx->pc = 0x260984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260980u;
        // 0x260984: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260988u;
        goto label_260988;
    }
    ctx->pc = 0x260980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x260988u);
        ctx->pc = 0x260984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260980u;
        // 0x260984: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260980u, 0x260988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260988u;
label_260988:
    // 0x260988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26098c:
    // 0x26098c: 0xc087016  jal         func_21C058
label_260990:
    if (ctx->pc == 0x260990u) {
        ctx->pc = 0x260990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26098Cu;
        // 0x260990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260994u;
        goto label_260994;
    }
    ctx->pc = 0x26098Cu;
    SET_GPR_U32(ctx, 31, 0x260994u);
    ctx->pc = 0x260990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26098Cu;
    // 0x260990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26098Cu, 0x260994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260994u;
label_260994:
    // 0x260994: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_260998:
    if (ctx->pc == 0x260998u) {
        ctx->pc = 0x260998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260994u;
        // 0x260998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26099Cu;
        goto label_26099c;
    }
    ctx->pc = 0x260994u;
    {
        const bool branch_taken_0x260994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x260998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260994u;
        // 0x260998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260994) {
            ctx->pc = 0x2609B4u;
            goto label_2609b4;
        }
    }
    ctx->pc = 0x26099Cu;
label_26099c:
    // 0x26099c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2609a0:
    // 0x2609a0: 0x8fc7bd30  lw          $a3, -0x42D0($fp)
    ctx->pc = 0x2609a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_2609a4:
    // 0x2609a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2609a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2609a8:
    // 0x2609a8: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2609ac:
    // 0x2609ac: 0xc04159e  jal         func_105678
label_2609b0:
    if (ctx->pc == 0x2609B0u) {
        ctx->pc = 0x2609B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609ACu;
        // 0x2609b0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2609B4u;
        goto label_2609b4;
    }
    ctx->pc = 0x2609ACu;
    SET_GPR_U32(ctx, 31, 0x2609B4u);
    ctx->pc = 0x2609B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2609ACu;
    // 0x2609b0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2609ACu, 0x2609B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609B4u;
label_2609b4:
    // 0x2609b4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2609b8:
    // 0x2609b8: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
label_2609bc:
    if (ctx->pc == 0x2609BCu) {
        ctx->pc = 0x2609BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609B8u;
        // 0x2609bc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2609C0u;
        goto label_2609c0;
    }
    ctx->pc = 0x2609B8u;
    {
        const bool branch_taken_0x2609b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609B8u;
        // 0x2609bc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609b8) {
            ctx->pc = 0x260A18u;
            goto label_260a18;
        }
    }
    ctx->pc = 0x2609C0u;
label_2609c0:
    // 0x2609c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2609c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2609c4:
    // 0x2609c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2609c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2609c8:
    // 0x2609c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2609c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2609cc:
    // 0x2609cc: 0x40f809  jalr        $v0
label_2609d0:
    if (ctx->pc == 0x2609D0u) {
        ctx->pc = 0x2609D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609CCu;
        // 0x2609d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2609D4u;
        goto label_2609d4;
    }
    ctx->pc = 0x2609CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2609D4u);
        ctx->pc = 0x2609D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609CCu;
        // 0x2609d0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2609CCu, 0x2609D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2609D4u;
label_2609d4:
    // 0x2609d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2609d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2609d8:
    // 0x2609d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2609d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2609dc:
    // 0x2609dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2609dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2609e0:
    // 0x2609e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2609e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2609e4:
    // 0x2609e4: 0x40f809  jalr        $v0
label_2609e8:
    if (ctx->pc == 0x2609E8u) {
        ctx->pc = 0x2609E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609E4u;
        // 0x2609e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2609ECu;
        goto label_2609ec;
    }
    ctx->pc = 0x2609E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2609ECu);
        ctx->pc = 0x2609E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609E4u;
        // 0x2609e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2609E4u, 0x2609ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2609ECu;
label_2609ec:
    // 0x2609ec: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x2609ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_2609f0:
    // 0x2609f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2609f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2609f4:
    // 0x2609f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2609f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2609f8:
    // 0x2609f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2609f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2609fc:
    // 0x2609fc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2609fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260a00:
    // 0x260a00: 0x256b0670  addiu       $t3, $t3, 0x670
    ctx->pc = 0x260a00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1648));
label_260a04:
    // 0x260a04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260a08:
    // 0x260a08: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x260a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_260a0c:
    // 0x260a0c: 0x2407014d  addiu       $a3, $zero, 0x14D
    ctx->pc = 0x260a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
label_260a10:
    // 0x260a10: 0xc04229e  jal         func_108A78
label_260a14:
    if (ctx->pc == 0x260A14u) {
        ctx->pc = 0x260A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A10u;
        // 0x260a14: 0x3c090001  lui         $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A18u;
        goto label_260a18;
    }
    ctx->pc = 0x260A10u;
    SET_GPR_U32(ctx, 31, 0x260A18u);
    ctx->pc = 0x260A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A10u;
    // 0x260a14: 0x3c090001  lui         $t1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x260A10u, 0x260A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A18u;
label_260a18:
    // 0x260a18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260a1c:
    // 0x260a1c: 0xc05d53a  jal         func_1754E8
label_260a20:
    if (ctx->pc == 0x260A20u) {
        ctx->pc = 0x260A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A1Cu;
        // 0x260a20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A24u;
        goto label_260a24;
    }
    ctx->pc = 0x260A1Cu;
    SET_GPR_U32(ctx, 31, 0x260A24u);
    ctx->pc = 0x260A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A1Cu;
    // 0x260a20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x260A1Cu, 0x260A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A24u;
label_260a24:
    // 0x260a24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x260a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_260a28:
    // 0x260a28: 0xc05d4f6  jal         func_1753D8
label_260a2c:
    if (ctx->pc == 0x260A2Cu) {
        ctx->pc = 0x260A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A28u;
        // 0x260a2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A30u;
        goto label_260a30;
    }
    ctx->pc = 0x260A28u;
    SET_GPR_U32(ctx, 31, 0x260A30u);
    ctx->pc = 0x260A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A28u;
    // 0x260a2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x260A28u, 0x260A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A30u;
label_260a30:
    // 0x260a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260a34:
    // 0x260a34: 0xc089990  jal         func_226640
label_260a38:
    if (ctx->pc == 0x260A38u) {
        ctx->pc = 0x260A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A34u;
        // 0x260a38: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A3Cu;
        goto label_260a3c;
    }
    ctx->pc = 0x260A34u;
    SET_GPR_U32(ctx, 31, 0x260A3Cu);
    ctx->pc = 0x260A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A34u;
    // 0x260a38: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x260A34u, 0x260A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A3Cu;
label_260a3c:
    // 0x260a3c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x260a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_260a40:
    // 0x260a40: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x260a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_260a44:
    // 0x260a44: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x260a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_260a48:
    // 0x260a48: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x260a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_260a4c:
    // 0x260a4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x260a4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_260a50:
    // 0x260a50: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x260a50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_260a54:
    // 0x260a54: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x260a54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_260a58:
    // 0x260a58: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x260a58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_260a5c:
    // 0x260a5c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x260a5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_260a60:
    // 0x260a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260a64:
    // 0x260a64: 0x3e00008  jr          $ra
label_260a68:
    if (ctx->pc == 0x260A68u) {
        ctx->pc = 0x260A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A64u;
        // 0x260a68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A6Cu;
        goto label_260a6c;
    }
    ctx->pc = 0x260A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A64u;
        // 0x260a68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260A6Cu;
label_260a6c:
    // 0x260a6c: 0x0  nop
    ctx->pc = 0x260a6cu;
    // NOP
    ctx->pc = 0x260a70u;
}
