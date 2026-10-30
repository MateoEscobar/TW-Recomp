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

// Function: sub_00273110
// Address: 0x273110 - 0x273668
void sub_00273110_0x273110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273110_0x273110");
#endif

    switch (ctx->pc) {
        case 0x273110u: goto label_273110;
        case 0x273114u: goto label_273114;
        case 0x273118u: goto label_273118;
        case 0x27311cu: goto label_27311c;
        case 0x273120u: goto label_273120;
        case 0x273124u: goto label_273124;
        case 0x273128u: goto label_273128;
        case 0x27312cu: goto label_27312c;
        case 0x273130u: goto label_273130;
        case 0x273134u: goto label_273134;
        case 0x273138u: goto label_273138;
        case 0x27313cu: goto label_27313c;
        case 0x273140u: goto label_273140;
        case 0x273144u: goto label_273144;
        case 0x273148u: goto label_273148;
        case 0x27314cu: goto label_27314c;
        case 0x273150u: goto label_273150;
        case 0x273154u: goto label_273154;
        case 0x273158u: goto label_273158;
        case 0x27315cu: goto label_27315c;
        case 0x273160u: goto label_273160;
        case 0x273164u: goto label_273164;
        case 0x273168u: goto label_273168;
        case 0x27316cu: goto label_27316c;
        case 0x273170u: goto label_273170;
        case 0x273174u: goto label_273174;
        case 0x273178u: goto label_273178;
        case 0x27317cu: goto label_27317c;
        case 0x273180u: goto label_273180;
        case 0x273184u: goto label_273184;
        case 0x273188u: goto label_273188;
        case 0x27318cu: goto label_27318c;
        case 0x273190u: goto label_273190;
        case 0x273194u: goto label_273194;
        case 0x273198u: goto label_273198;
        case 0x27319cu: goto label_27319c;
        case 0x2731a0u: goto label_2731a0;
        case 0x2731a4u: goto label_2731a4;
        case 0x2731a8u: goto label_2731a8;
        case 0x2731acu: goto label_2731ac;
        case 0x2731b0u: goto label_2731b0;
        case 0x2731b4u: goto label_2731b4;
        case 0x2731b8u: goto label_2731b8;
        case 0x2731bcu: goto label_2731bc;
        case 0x2731c0u: goto label_2731c0;
        case 0x2731c4u: goto label_2731c4;
        case 0x2731c8u: goto label_2731c8;
        case 0x2731ccu: goto label_2731cc;
        case 0x2731d0u: goto label_2731d0;
        case 0x2731d4u: goto label_2731d4;
        case 0x2731d8u: goto label_2731d8;
        case 0x2731dcu: goto label_2731dc;
        case 0x2731e0u: goto label_2731e0;
        case 0x2731e4u: goto label_2731e4;
        case 0x2731e8u: goto label_2731e8;
        case 0x2731ecu: goto label_2731ec;
        case 0x2731f0u: goto label_2731f0;
        case 0x2731f4u: goto label_2731f4;
        case 0x2731f8u: goto label_2731f8;
        case 0x2731fcu: goto label_2731fc;
        case 0x273200u: goto label_273200;
        case 0x273204u: goto label_273204;
        case 0x273208u: goto label_273208;
        case 0x27320cu: goto label_27320c;
        case 0x273210u: goto label_273210;
        case 0x273214u: goto label_273214;
        case 0x273218u: goto label_273218;
        case 0x27321cu: goto label_27321c;
        case 0x273220u: goto label_273220;
        case 0x273224u: goto label_273224;
        case 0x273228u: goto label_273228;
        case 0x27322cu: goto label_27322c;
        case 0x273230u: goto label_273230;
        case 0x273234u: goto label_273234;
        case 0x273238u: goto label_273238;
        case 0x27323cu: goto label_27323c;
        case 0x273240u: goto label_273240;
        case 0x273244u: goto label_273244;
        case 0x273248u: goto label_273248;
        case 0x27324cu: goto label_27324c;
        case 0x273250u: goto label_273250;
        case 0x273254u: goto label_273254;
        case 0x273258u: goto label_273258;
        case 0x27325cu: goto label_27325c;
        case 0x273260u: goto label_273260;
        case 0x273264u: goto label_273264;
        case 0x273268u: goto label_273268;
        case 0x27326cu: goto label_27326c;
        case 0x273270u: goto label_273270;
        case 0x273274u: goto label_273274;
        case 0x273278u: goto label_273278;
        case 0x27327cu: goto label_27327c;
        case 0x273280u: goto label_273280;
        case 0x273284u: goto label_273284;
        case 0x273288u: goto label_273288;
        case 0x27328cu: goto label_27328c;
        case 0x273290u: goto label_273290;
        case 0x273294u: goto label_273294;
        case 0x273298u: goto label_273298;
        case 0x27329cu: goto label_27329c;
        case 0x2732a0u: goto label_2732a0;
        case 0x2732a4u: goto label_2732a4;
        case 0x2732a8u: goto label_2732a8;
        case 0x2732acu: goto label_2732ac;
        case 0x2732b0u: goto label_2732b0;
        case 0x2732b4u: goto label_2732b4;
        case 0x2732b8u: goto label_2732b8;
        case 0x2732bcu: goto label_2732bc;
        case 0x2732c0u: goto label_2732c0;
        case 0x2732c4u: goto label_2732c4;
        case 0x2732c8u: goto label_2732c8;
        case 0x2732ccu: goto label_2732cc;
        case 0x2732d0u: goto label_2732d0;
        case 0x2732d4u: goto label_2732d4;
        case 0x2732d8u: goto label_2732d8;
        case 0x2732dcu: goto label_2732dc;
        case 0x2732e0u: goto label_2732e0;
        case 0x2732e4u: goto label_2732e4;
        case 0x2732e8u: goto label_2732e8;
        case 0x2732ecu: goto label_2732ec;
        case 0x2732f0u: goto label_2732f0;
        case 0x2732f4u: goto label_2732f4;
        case 0x2732f8u: goto label_2732f8;
        case 0x2732fcu: goto label_2732fc;
        case 0x273300u: goto label_273300;
        case 0x273304u: goto label_273304;
        case 0x273308u: goto label_273308;
        case 0x27330cu: goto label_27330c;
        case 0x273310u: goto label_273310;
        case 0x273314u: goto label_273314;
        case 0x273318u: goto label_273318;
        case 0x27331cu: goto label_27331c;
        case 0x273320u: goto label_273320;
        case 0x273324u: goto label_273324;
        case 0x273328u: goto label_273328;
        case 0x27332cu: goto label_27332c;
        case 0x273330u: goto label_273330;
        case 0x273334u: goto label_273334;
        case 0x273338u: goto label_273338;
        case 0x27333cu: goto label_27333c;
        case 0x273340u: goto label_273340;
        case 0x273344u: goto label_273344;
        case 0x273348u: goto label_273348;
        case 0x27334cu: goto label_27334c;
        case 0x273350u: goto label_273350;
        case 0x273354u: goto label_273354;
        case 0x273358u: goto label_273358;
        case 0x27335cu: goto label_27335c;
        case 0x273360u: goto label_273360;
        case 0x273364u: goto label_273364;
        case 0x273368u: goto label_273368;
        case 0x27336cu: goto label_27336c;
        case 0x273370u: goto label_273370;
        case 0x273374u: goto label_273374;
        case 0x273378u: goto label_273378;
        case 0x27337cu: goto label_27337c;
        case 0x273380u: goto label_273380;
        case 0x273384u: goto label_273384;
        case 0x273388u: goto label_273388;
        case 0x27338cu: goto label_27338c;
        case 0x273390u: goto label_273390;
        case 0x273394u: goto label_273394;
        case 0x273398u: goto label_273398;
        case 0x27339cu: goto label_27339c;
        case 0x2733a0u: goto label_2733a0;
        case 0x2733a4u: goto label_2733a4;
        case 0x2733a8u: goto label_2733a8;
        case 0x2733acu: goto label_2733ac;
        case 0x2733b0u: goto label_2733b0;
        case 0x2733b4u: goto label_2733b4;
        case 0x2733b8u: goto label_2733b8;
        case 0x2733bcu: goto label_2733bc;
        case 0x2733c0u: goto label_2733c0;
        case 0x2733c4u: goto label_2733c4;
        case 0x2733c8u: goto label_2733c8;
        case 0x2733ccu: goto label_2733cc;
        case 0x2733d0u: goto label_2733d0;
        case 0x2733d4u: goto label_2733d4;
        case 0x2733d8u: goto label_2733d8;
        case 0x2733dcu: goto label_2733dc;
        case 0x2733e0u: goto label_2733e0;
        case 0x2733e4u: goto label_2733e4;
        case 0x2733e8u: goto label_2733e8;
        case 0x2733ecu: goto label_2733ec;
        case 0x2733f0u: goto label_2733f0;
        case 0x2733f4u: goto label_2733f4;
        case 0x2733f8u: goto label_2733f8;
        case 0x2733fcu: goto label_2733fc;
        case 0x273400u: goto label_273400;
        case 0x273404u: goto label_273404;
        case 0x273408u: goto label_273408;
        case 0x27340cu: goto label_27340c;
        case 0x273410u: goto label_273410;
        case 0x273414u: goto label_273414;
        case 0x273418u: goto label_273418;
        case 0x27341cu: goto label_27341c;
        case 0x273420u: goto label_273420;
        case 0x273424u: goto label_273424;
        case 0x273428u: goto label_273428;
        case 0x27342cu: goto label_27342c;
        case 0x273430u: goto label_273430;
        case 0x273434u: goto label_273434;
        case 0x273438u: goto label_273438;
        case 0x27343cu: goto label_27343c;
        case 0x273440u: goto label_273440;
        case 0x273444u: goto label_273444;
        case 0x273448u: goto label_273448;
        case 0x27344cu: goto label_27344c;
        case 0x273450u: goto label_273450;
        case 0x273454u: goto label_273454;
        case 0x273458u: goto label_273458;
        case 0x27345cu: goto label_27345c;
        case 0x273460u: goto label_273460;
        case 0x273464u: goto label_273464;
        case 0x273468u: goto label_273468;
        case 0x27346cu: goto label_27346c;
        case 0x273470u: goto label_273470;
        case 0x273474u: goto label_273474;
        case 0x273478u: goto label_273478;
        case 0x27347cu: goto label_27347c;
        case 0x273480u: goto label_273480;
        case 0x273484u: goto label_273484;
        case 0x273488u: goto label_273488;
        case 0x27348cu: goto label_27348c;
        case 0x273490u: goto label_273490;
        case 0x273494u: goto label_273494;
        case 0x273498u: goto label_273498;
        case 0x27349cu: goto label_27349c;
        case 0x2734a0u: goto label_2734a0;
        case 0x2734a4u: goto label_2734a4;
        case 0x2734a8u: goto label_2734a8;
        case 0x2734acu: goto label_2734ac;
        case 0x2734b0u: goto label_2734b0;
        case 0x2734b4u: goto label_2734b4;
        case 0x2734b8u: goto label_2734b8;
        case 0x2734bcu: goto label_2734bc;
        case 0x2734c0u: goto label_2734c0;
        case 0x2734c4u: goto label_2734c4;
        case 0x2734c8u: goto label_2734c8;
        case 0x2734ccu: goto label_2734cc;
        case 0x2734d0u: goto label_2734d0;
        case 0x2734d4u: goto label_2734d4;
        case 0x2734d8u: goto label_2734d8;
        case 0x2734dcu: goto label_2734dc;
        case 0x2734e0u: goto label_2734e0;
        case 0x2734e4u: goto label_2734e4;
        case 0x2734e8u: goto label_2734e8;
        case 0x2734ecu: goto label_2734ec;
        case 0x2734f0u: goto label_2734f0;
        case 0x2734f4u: goto label_2734f4;
        case 0x2734f8u: goto label_2734f8;
        case 0x2734fcu: goto label_2734fc;
        case 0x273500u: goto label_273500;
        case 0x273504u: goto label_273504;
        case 0x273508u: goto label_273508;
        case 0x27350cu: goto label_27350c;
        case 0x273510u: goto label_273510;
        case 0x273514u: goto label_273514;
        case 0x273518u: goto label_273518;
        case 0x27351cu: goto label_27351c;
        case 0x273520u: goto label_273520;
        case 0x273524u: goto label_273524;
        case 0x273528u: goto label_273528;
        case 0x27352cu: goto label_27352c;
        case 0x273530u: goto label_273530;
        case 0x273534u: goto label_273534;
        case 0x273538u: goto label_273538;
        case 0x27353cu: goto label_27353c;
        case 0x273540u: goto label_273540;
        case 0x273544u: goto label_273544;
        case 0x273548u: goto label_273548;
        case 0x27354cu: goto label_27354c;
        case 0x273550u: goto label_273550;
        case 0x273554u: goto label_273554;
        case 0x273558u: goto label_273558;
        case 0x27355cu: goto label_27355c;
        case 0x273560u: goto label_273560;
        case 0x273564u: goto label_273564;
        case 0x273568u: goto label_273568;
        case 0x27356cu: goto label_27356c;
        case 0x273570u: goto label_273570;
        case 0x273574u: goto label_273574;
        case 0x273578u: goto label_273578;
        case 0x27357cu: goto label_27357c;
        case 0x273580u: goto label_273580;
        case 0x273584u: goto label_273584;
        case 0x273588u: goto label_273588;
        case 0x27358cu: goto label_27358c;
        case 0x273590u: goto label_273590;
        case 0x273594u: goto label_273594;
        case 0x273598u: goto label_273598;
        case 0x27359cu: goto label_27359c;
        case 0x2735a0u: goto label_2735a0;
        case 0x2735a4u: goto label_2735a4;
        case 0x2735a8u: goto label_2735a8;
        case 0x2735acu: goto label_2735ac;
        case 0x2735b0u: goto label_2735b0;
        case 0x2735b4u: goto label_2735b4;
        case 0x2735b8u: goto label_2735b8;
        case 0x2735bcu: goto label_2735bc;
        case 0x2735c0u: goto label_2735c0;
        case 0x2735c4u: goto label_2735c4;
        case 0x2735c8u: goto label_2735c8;
        case 0x2735ccu: goto label_2735cc;
        case 0x2735d0u: goto label_2735d0;
        case 0x2735d4u: goto label_2735d4;
        case 0x2735d8u: goto label_2735d8;
        case 0x2735dcu: goto label_2735dc;
        case 0x2735e0u: goto label_2735e0;
        case 0x2735e4u: goto label_2735e4;
        case 0x2735e8u: goto label_2735e8;
        case 0x2735ecu: goto label_2735ec;
        case 0x2735f0u: goto label_2735f0;
        case 0x2735f4u: goto label_2735f4;
        case 0x2735f8u: goto label_2735f8;
        case 0x2735fcu: goto label_2735fc;
        case 0x273600u: goto label_273600;
        case 0x273604u: goto label_273604;
        case 0x273608u: goto label_273608;
        case 0x27360cu: goto label_27360c;
        case 0x273610u: goto label_273610;
        case 0x273614u: goto label_273614;
        case 0x273618u: goto label_273618;
        case 0x27361cu: goto label_27361c;
        case 0x273620u: goto label_273620;
        case 0x273624u: goto label_273624;
        case 0x273628u: goto label_273628;
        case 0x27362cu: goto label_27362c;
        case 0x273630u: goto label_273630;
        case 0x273634u: goto label_273634;
        case 0x273638u: goto label_273638;
        case 0x27363cu: goto label_27363c;
        case 0x273640u: goto label_273640;
        case 0x273644u: goto label_273644;
        case 0x273648u: goto label_273648;
        case 0x27364cu: goto label_27364c;
        case 0x273650u: goto label_273650;
        case 0x273654u: goto label_273654;
        case 0x273658u: goto label_273658;
        case 0x27365cu: goto label_27365c;
        case 0x273660u: goto label_273660;
        case 0x273664u: goto label_273664;
        default: break;
    }

    ctx->pc = 0x273110u;

label_273110:
    // 0x273110: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x273110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_273114:
    // 0x273114: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x273114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_273118:
    // 0x273118: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x273118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_27311c:
    // 0x27311c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27311cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273120:
    // 0x273120: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x273120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_273124:
    // 0x273124: 0x264400c4  addiu       $a0, $s2, 0xC4
    ctx->pc = 0x273124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_273128:
    // 0x273128: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x273128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_27312c:
    // 0x27312c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x27312cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273130:
    // 0x273130: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x273130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_273134:
    // 0x273134: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x273134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_273138:
    // 0x273138: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x273138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27313c:
    // 0x27313c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x27313cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_273140:
    // 0x273140: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x273140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_273144:
    // 0x273144: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x273144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_273148:
    // 0x273148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27314c:
    // 0x27314c: 0xc0e409a  jal         func_390268
label_273150:
    if (ctx->pc == 0x273150u) {
        ctx->pc = 0x273150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27314Cu;
        // 0x273150: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273154u;
        goto label_273154;
    }
    ctx->pc = 0x27314Cu;
    SET_GPR_U32(ctx, 31, 0x273154u);
    ctx->pc = 0x273150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27314Cu;
    // 0x273150: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27314Cu, 0x273154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273154u;
label_273154:
    // 0x273154: 0x2610e3d0  addiu       $s0, $s0, -0x1C30
    ctx->pc = 0x273154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960080));
label_273158:
    // 0x273158: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x273158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27315c:
    // 0x27315c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273160:
    // 0x273160: 0xc041532  jal         func_1054C8
label_273164:
    if (ctx->pc == 0x273164u) {
        ctx->pc = 0x273164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273160u;
        // 0x273164: 0x8e7400d8  lw          $s4, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273168u;
        goto label_273168;
    }
    ctx->pc = 0x273160u;
    SET_GPR_U32(ctx, 31, 0x273168u);
    ctx->pc = 0x273164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273160u;
    // 0x273164: 0x8e7400d8  lw          $s4, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x273160u, 0x273168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273168u;
label_273168:
    // 0x273168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27316c:
    // 0x27316c: 0xc041532  jal         func_1054C8
label_273170:
    if (ctx->pc == 0x273170u) {
        ctx->pc = 0x273170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27316Cu;
        // 0x273170: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273174u;
        goto label_273174;
    }
    ctx->pc = 0x27316Cu;
    SET_GPR_U32(ctx, 31, 0x273174u);
    ctx->pc = 0x273170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27316Cu;
    // 0x273170: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27316Cu, 0x273174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273174u;
label_273174:
    // 0x273174: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x273174u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273178:
    // 0x273178: 0xc041532  jal         func_1054C8
label_27317c:
    if (ctx->pc == 0x27317Cu) {
        ctx->pc = 0x27317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273178u;
        // 0x27317c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273180u;
        goto label_273180;
    }
    ctx->pc = 0x273178u;
    SET_GPR_U32(ctx, 31, 0x273180u);
    ctx->pc = 0x27317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273178u;
    // 0x27317c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x273178u, 0x273180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273180u;
label_273180:
    // 0x273180: 0x16e00024  bnez        $s7, . + 4 + (0x24 << 2)
label_273184:
    if (ctx->pc == 0x273184u) {
        ctx->pc = 0x273184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273180u;
        // 0x273184: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273188u;
        goto label_273188;
    }
    ctx->pc = 0x273180u;
    {
        const bool branch_taken_0x273180 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x273184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273180u;
        // 0x273184: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273180) {
            ctx->pc = 0x273214u;
            goto label_273214;
        }
    }
    ctx->pc = 0x273188u;
label_273188:
    // 0x273188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x273188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27318c:
    // 0x27318c: 0xc094fb4  jal         func_253ED0
label_273190:
    if (ctx->pc == 0x273190u) {
        ctx->pc = 0x273190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27318Cu;
        // 0x273190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273194u;
        goto label_273194;
    }
    ctx->pc = 0x27318Cu;
    SET_GPR_U32(ctx, 31, 0x273194u);
    ctx->pc = 0x273190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27318Cu;
    // 0x273190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x27318Cu, 0x273194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273194u;
label_273194:
    // 0x273194: 0xc08a0d0  jal         func_228340
label_273198:
    if (ctx->pc == 0x273198u) {
        ctx->pc = 0x273198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273194u;
        // 0x273198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27319Cu;
        goto label_27319c;
    }
    ctx->pc = 0x273194u;
    SET_GPR_U32(ctx, 31, 0x27319Cu);
    ctx->pc = 0x273198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273194u;
    // 0x273198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x273194u, 0x27319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27319Cu;
label_27319c:
    // 0x27319c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2731a0:
    if (ctx->pc == 0x2731A0u) {
        ctx->pc = 0x2731A4u;
        goto label_2731a4;
    }
    ctx->pc = 0x27319Cu;
    {
        const bool branch_taken_0x27319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27319c) {
            ctx->pc = 0x2731D8u;
            goto label_2731d8;
        }
    }
    ctx->pc = 0x2731A4u;
label_2731a4:
    // 0x2731a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2731a8:
    if (ctx->pc == 0x2731A8u) {
        ctx->pc = 0x2731A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731A4u;
        // 0x2731a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2731ACu;
        goto label_2731ac;
    }
    ctx->pc = 0x2731A4u;
    {
        const bool branch_taken_0x2731a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731A4u;
        // 0x2731a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731a4) {
            ctx->pc = 0x2731C8u;
            goto label_2731c8;
        }
    }
    ctx->pc = 0x2731ACu;
label_2731ac:
    // 0x2731ac: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x2731acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2731b0:
    // 0x2731b0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2731b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2731b4:
    // 0x2731b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2731b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2731b8:
    // 0x2731b8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2731b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2731bc:
    // 0x2731bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2731bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2731c0:
    // 0x2731c0: 0xc04159e  jal         func_105678
label_2731c4:
    if (ctx->pc == 0x2731C4u) {
        ctx->pc = 0x2731C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731C0u;
        // 0x2731c4: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2731C8u;
        goto label_2731c8;
    }
    ctx->pc = 0x2731C0u;
    SET_GPR_U32(ctx, 31, 0x2731C8u);
    ctx->pc = 0x2731C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2731C0u;
    // 0x2731c4: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2731C0u, 0x2731C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731C8u;
label_2731c8:
    // 0x2731c8: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x2731c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2731cc:
    // 0x2731cc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2731ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2731d0:
    // 0x2731d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2731d4:
    if (ctx->pc == 0x2731D4u) {
        ctx->pc = 0x2731D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731D0u;
        // 0x2731d4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2731D8u;
        goto label_2731d8;
    }
    ctx->pc = 0x2731D0u;
    {
        const bool branch_taken_0x2731d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731D0u;
        // 0x2731d4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731d0) {
            ctx->pc = 0x273204u;
            goto label_273204;
        }
    }
    ctx->pc = 0x2731D8u;
label_2731d8:
    // 0x2731d8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2731dc:
    if (ctx->pc == 0x2731DCu) {
        ctx->pc = 0x2731DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731D8u;
        // 0x2731dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2731E0u;
        goto label_2731e0;
    }
    ctx->pc = 0x2731D8u;
    {
        const bool branch_taken_0x2731d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2731DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731D8u;
        // 0x2731dc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2731d8) {
            ctx->pc = 0x2731FCu;
            goto label_2731fc;
        }
    }
    ctx->pc = 0x2731E0u;
label_2731e0:
    // 0x2731e0: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x2731e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2731e4:
    // 0x2731e4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2731e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2731e8:
    // 0x2731e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2731e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2731ec:
    // 0x2731ec: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2731ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2731f0:
    // 0x2731f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2731f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2731f4:
    // 0x2731f4: 0xc04159e  jal         func_105678
label_2731f8:
    if (ctx->pc == 0x2731F8u) {
        ctx->pc = 0x2731F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2731F4u;
        // 0x2731f8: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2731FCu;
        goto label_2731fc;
    }
    ctx->pc = 0x2731F4u;
    SET_GPR_U32(ctx, 31, 0x2731FCu);
    ctx->pc = 0x2731F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2731F4u;
    // 0x2731f8: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2731F4u, 0x2731FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2731FCu;
label_2731fc:
    // 0x2731fc: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x2731fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_273200:
    // 0x273200: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x273200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_273204:
    // 0x273204: 0xc094fca  jal         func_253F28
label_273208:
    if (ctx->pc == 0x273208u) {
        ctx->pc = 0x273208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273204u;
        // 0x273208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27320Cu;
        goto label_27320c;
    }
    ctx->pc = 0x273204u;
    SET_GPR_U32(ctx, 31, 0x27320Cu);
    ctx->pc = 0x273208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273204u;
    // 0x273208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x273204u, 0x27320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27320Cu;
label_27320c:
    // 0x27320c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_273210:
    if (ctx->pc == 0x273210u) {
        ctx->pc = 0x273214u;
        goto label_273214;
    }
    ctx->pc = 0x27320Cu;
    {
        const bool branch_taken_0x27320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27320c) {
            ctx->pc = 0x273284u;
            goto label_273284;
        }
    }
    ctx->pc = 0x273214u;
label_273214:
    // 0x273214: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_273218:
    if (ctx->pc == 0x273218u) {
        ctx->pc = 0x273218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273214u;
        // 0x273218: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27321Cu;
        goto label_27321c;
    }
    ctx->pc = 0x273214u;
    {
        const bool branch_taken_0x273214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x273218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273214u;
        // 0x273218: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273214) {
            ctx->pc = 0x273250u;
            goto label_273250;
        }
    }
    ctx->pc = 0x27321Cu;
label_27321c:
    // 0x27321c: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x27321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_273220:
    // 0x273220: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x273220u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273224:
    // 0x273224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273228:
    // 0x273228: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x273228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_27322c:
    // 0x27322c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x27322cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273230:
    // 0x273230: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x273230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_273234:
    // 0x273234: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x273234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_273238:
    // 0x273238: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x273238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27323c:
    // 0x27323c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27323cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_273240:
    // 0x273240: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x273240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_273244:
    // 0x273244: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x273244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_273248:
    // 0x273248: 0xc041bd4  jal         func_106F50
label_27324c:
    if (ctx->pc == 0x27324Cu) {
        ctx->pc = 0x27324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273248u;
        // 0x27324c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273250u;
        goto label_273250;
    }
    ctx->pc = 0x273248u;
    SET_GPR_U32(ctx, 31, 0x273250u);
    ctx->pc = 0x27324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273248u;
    // 0x27324c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x273248u, 0x273250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273250u;
label_273250:
    // 0x273250: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x273250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_273254:
    // 0x273254: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x273254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_273258:
    // 0x273258: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x273258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_27325c:
    // 0x27325c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x27325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_273260:
    // 0x273260: 0x60f809  jalr        $v1
label_273264:
    if (ctx->pc == 0x273264u) {
        ctx->pc = 0x273264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273260u;
        // 0x273264: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273268u;
        goto label_273268;
    }
    ctx->pc = 0x273260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x273268u);
        ctx->pc = 0x273264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273260u;
        // 0x273264: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273260u, 0x273268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273268u;
label_273268:
    // 0x273268: 0x8e6400d4  lw          $a0, 0xD4($s3)
    ctx->pc = 0x273268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_27326c:
    // 0x27326c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_273270:
    // 0x273270: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_273274:
    if (ctx->pc == 0x273274u) {
        ctx->pc = 0x273274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273270u;
        // 0x273274: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273278u;
        goto label_273278;
    }
    ctx->pc = 0x273270u;
    {
        const bool branch_taken_0x273270 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x273274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273270u;
        // 0x273274: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273270) {
            ctx->pc = 0x273284u;
            goto label_273284;
        }
    }
    ctx->pc = 0x273278u;
label_273278:
    // 0x273278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x273278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27327c:
    // 0x27327c: 0xc05dc68  jal         func_1771A0
label_273280:
    if (ctx->pc == 0x273280u) {
        ctx->pc = 0x273280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27327Cu;
        // 0x273280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273284u;
        goto label_273284;
    }
    ctx->pc = 0x27327Cu;
    SET_GPR_U32(ctx, 31, 0x273284u);
    ctx->pc = 0x273280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27327Cu;
    // 0x273280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1771A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1771A0u, 0x27327Cu, 0x273284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273284u;
label_273284:
    // 0x273284: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_273288:
    if (ctx->pc == 0x273288u) {
        ctx->pc = 0x273288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273284u;
        // 0x273288: 0x24020159  addiu       $v0, $zero, 0x159 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27328Cu;
        goto label_27328c;
    }
    ctx->pc = 0x273284u;
    {
        const bool branch_taken_0x273284 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x273288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273284u;
        // 0x273288: 0x24020159  addiu       $v0, $zero, 0x159 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273284) {
            ctx->pc = 0x2732CCu;
            goto label_2732cc;
        }
    }
    ctx->pc = 0x27328Cu;
label_27328c:
    // 0x27328c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27328cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_273290:
    // 0x273290: 0x2410015b  addiu       $s0, $zero, 0x15B
    ctx->pc = 0x273290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
label_273294:
    // 0x273294: 0x57800b  movn        $s0, $v0, $s7
    ctx->pc = 0x273294u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_273298:
    // 0x273298: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x273298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_27329c:
    // 0x27329c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x27329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2732a0:
    // 0x2732a0: 0x40f809  jalr        $v0
label_2732a4:
    if (ctx->pc == 0x2732A4u) {
        ctx->pc = 0x2732A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732A0u;
        // 0x2732a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732A8u;
        goto label_2732a8;
    }
    ctx->pc = 0x2732A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2732A8u);
        ctx->pc = 0x2732A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732A0u;
        // 0x2732a4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2732A0u, 0x2732A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2732A8u;
label_2732a8:
    // 0x2732a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2732a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2732ac:
    // 0x2732ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2732acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2732b0:
    // 0x2732b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2732b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2732b4:
    // 0x2732b4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2732b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2732b8:
    // 0x2732b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2732b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2732bc:
    // 0x2732bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2732bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2732c0:
    // 0x2732c0: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x2732c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
label_2732c4:
    // 0x2732c4: 0xc041664  jal         func_105990
label_2732c8:
    if (ctx->pc == 0x2732C8u) {
        ctx->pc = 0x2732C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732C4u;
        // 0x2732c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732CCu;
        goto label_2732cc;
    }
    ctx->pc = 0x2732C4u;
    SET_GPR_U32(ctx, 31, 0x2732CCu);
    ctx->pc = 0x2732C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732C4u;
    // 0x2732c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2732C4u, 0x2732CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732CCu;
label_2732cc:
    // 0x2732cc: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_2732d0:
    if (ctx->pc == 0x2732D0u) {
        ctx->pc = 0x2732D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732CCu;
        // 0x2732d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732D4u;
        goto label_2732d4;
    }
    ctx->pc = 0x2732CCu;
    {
        const bool branch_taken_0x2732cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2732D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732CCu;
        // 0x2732d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2732cc) {
            ctx->pc = 0x2732F4u;
            goto label_2732f4;
        }
    }
    ctx->pc = 0x2732D4u;
label_2732d4:
    // 0x2732d4: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x2732d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_2732d8:
    // 0x2732d8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2732d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2732dc:
    // 0x2732dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2732dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2732e0:
    // 0x2732e0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2732e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2732e4:
    // 0x2732e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2732e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2732e8:
    // 0x2732e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2732e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2732ec:
    // 0x2732ec: 0xc041b20  jal         func_106C80
label_2732f0:
    if (ctx->pc == 0x2732F0u) {
        ctx->pc = 0x2732F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732ECu;
        // 0x2732f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732F4u;
        goto label_2732f4;
    }
    ctx->pc = 0x2732ECu;
    SET_GPR_U32(ctx, 31, 0x2732F4u);
    ctx->pc = 0x2732F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732ECu;
    // 0x2732f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2732ECu, 0x2732F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732F4u;
label_2732f4:
    // 0x2732f4: 0xc05d484  jal         func_175210
label_2732f8:
    if (ctx->pc == 0x2732F8u) {
        ctx->pc = 0x2732F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732F4u;
        // 0x2732f8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732FCu;
        goto label_2732fc;
    }
    ctx->pc = 0x2732F4u;
    SET_GPR_U32(ctx, 31, 0x2732FCu);
    ctx->pc = 0x2732F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732F4u;
    // 0x2732f8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2732F4u, 0x2732FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2732FCu;
label_2732fc:
    // 0x2732fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273300:
    // 0x273300: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x273300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_273304:
    // 0x273304: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x273304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_273308:
    // 0x273308: 0xa0f809  jalr        $a1
label_27330c:
    if (ctx->pc == 0x27330Cu) {
        ctx->pc = 0x27330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273308u;
        // 0x27330c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273310u;
        goto label_273310;
    }
    ctx->pc = 0x273308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x273310u);
        ctx->pc = 0x27330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273308u;
        // 0x27330c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273308u, 0x273310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273310u;
label_273310:
    // 0x273310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x273310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_273314:
    // 0x273314: 0xc087016  jal         func_21C058
label_273318:
    if (ctx->pc == 0x273318u) {
        ctx->pc = 0x273318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273314u;
        // 0x273318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27331Cu;
        goto label_27331c;
    }
    ctx->pc = 0x273314u;
    SET_GPR_U32(ctx, 31, 0x27331Cu);
    ctx->pc = 0x273318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273314u;
    // 0x273318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x273314u, 0x27331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27331Cu;
label_27331c:
    // 0x27331c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27331cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_273320:
    // 0x273320: 0xc05d53a  jal         func_1754E8
label_273324:
    if (ctx->pc == 0x273324u) {
        ctx->pc = 0x273324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273320u;
        // 0x273324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273328u;
        goto label_273328;
    }
    ctx->pc = 0x273320u;
    SET_GPR_U32(ctx, 31, 0x273328u);
    ctx->pc = 0x273324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273320u;
    // 0x273324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x273320u, 0x273328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273328u;
label_273328:
    // 0x273328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27332c:
    // 0x27332c: 0xc05d4f6  jal         func_1753D8
label_273330:
    if (ctx->pc == 0x273330u) {
        ctx->pc = 0x273330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27332Cu;
        // 0x273330: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273334u;
        goto label_273334;
    }
    ctx->pc = 0x27332Cu;
    SET_GPR_U32(ctx, 31, 0x273334u);
    ctx->pc = 0x273330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27332Cu;
    // 0x273330: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x27332Cu, 0x273334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273334u;
label_273334:
    // 0x273334: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x273334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_273338:
    // 0x273338: 0xc089990  jal         func_226640
label_27333c:
    if (ctx->pc == 0x27333Cu) {
        ctx->pc = 0x27333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273338u;
        // 0x27333c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273340u;
        goto label_273340;
    }
    ctx->pc = 0x273338u;
    SET_GPR_U32(ctx, 31, 0x273340u);
    ctx->pc = 0x27333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273338u;
    // 0x27333c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x273338u, 0x273340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273340u;
label_273340:
    // 0x273340: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x273340u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_273344:
    // 0x273344: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x273344u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_273348:
    // 0x273348: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_27334c:
    if (ctx->pc == 0x27334Cu) {
        ctx->pc = 0x27334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273348u;
        // 0x27334c: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273350u;
        goto label_273350;
    }
    ctx->pc = 0x273348u;
    {
        const bool branch_taken_0x273348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273348u;
        // 0x27334c: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273348) {
            ctx->pc = 0x2733A4u;
            goto label_2733a4;
        }
    }
    ctx->pc = 0x273350u;
label_273350:
    // 0x273350: 0xc047e72  jal         func_11F9C8
label_273354:
    if (ctx->pc == 0x273354u) {
        ctx->pc = 0x273358u;
        goto label_273358;
    }
    ctx->pc = 0x273350u;
    SET_GPR_U32(ctx, 31, 0x273358u);
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x273350u, 0x273358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273358u;
label_273358:
    // 0x273358: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_27335c:
    if (ctx->pc == 0x27335Cu) {
        ctx->pc = 0x27335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273358u;
        // 0x27335c: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273360u;
        goto label_273360;
    }
    ctx->pc = 0x273358u;
    {
        const bool branch_taken_0x273358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273358) {
            ctx->pc = 0x27335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273358u;
            // 0x27335c: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2733A8u;
            goto label_2733a8;
        }
    }
    ctx->pc = 0x273360u;
label_273360:
    // 0x273360: 0xc047e72  jal         func_11F9C8
label_273364:
    if (ctx->pc == 0x273364u) {
        ctx->pc = 0x273364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273360u;
        // 0x273364: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273368u;
        goto label_273368;
    }
    ctx->pc = 0x273360u;
    SET_GPR_U32(ctx, 31, 0x273368u);
    ctx->pc = 0x273364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273360u;
    // 0x273364: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x273360u, 0x273368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273368u;
label_273368:
    // 0x273368: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x273368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27336c:
    // 0x27336c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x27336cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_273370:
    // 0x273370: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x273370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_273374:
    // 0x273374: 0xa0f809  jalr        $a1
label_273378:
    if (ctx->pc == 0x273378u) {
        ctx->pc = 0x273378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273374u;
        // 0x273378: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27337Cu;
        goto label_27337c;
    }
    ctx->pc = 0x273374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x27337Cu);
        ctx->pc = 0x273378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273374u;
        // 0x273378: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273374u, 0x27337Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27337Cu;
label_27337c:
    // 0x27337c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_273380:
    // 0x273380: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_273384:
    if (ctx->pc == 0x273384u) {
        ctx->pc = 0x273384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273380u;
        // 0x273384: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273388u;
        goto label_273388;
    }
    ctx->pc = 0x273380u;
    {
        const bool branch_taken_0x273380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x273384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273380u;
        // 0x273384: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273380) {
            ctx->pc = 0x2733A4u;
            goto label_2733a4;
        }
    }
    ctx->pc = 0x273388u;
label_273388:
    // 0x273388: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x273388u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_27338c:
    // 0x27338c: 0xc047f60  jal         func_11FD80
label_273390:
    if (ctx->pc == 0x273390u) {
        ctx->pc = 0x273390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27338Cu;
        // 0x273390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273394u;
        goto label_273394;
    }
    ctx->pc = 0x27338Cu;
    SET_GPR_U32(ctx, 31, 0x273394u);
    ctx->pc = 0x273390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27338Cu;
    // 0x273390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x27338Cu, 0x273394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273394u;
label_273394:
    // 0x273394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273398:
    // 0x273398: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x273398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
label_27339c:
    // 0x27339c: 0xac43024c  sw          $v1, 0x24C($v0)
    ctx->pc = 0x27339cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 3));
label_2733a0:
    // 0x2733a0: 0x27d0e3d0  addiu       $s0, $fp, -0x1C30
    ctx->pc = 0x2733a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960080));
label_2733a4:
    // 0x2733a4: 0x8e5400d8  lw          $s4, 0xD8($s2)
    ctx->pc = 0x2733a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2733a8:
    // 0x2733a8: 0xc041532  jal         func_1054C8
label_2733ac:
    if (ctx->pc == 0x2733ACu) {
        ctx->pc = 0x2733ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733A8u;
        // 0x2733ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733B0u;
        goto label_2733b0;
    }
    ctx->pc = 0x2733A8u;
    SET_GPR_U32(ctx, 31, 0x2733B0u);
    ctx->pc = 0x2733ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733A8u;
    // 0x2733ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2733A8u, 0x2733B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733B0u;
label_2733b0:
    // 0x2733b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2733b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2733b4:
    // 0x2733b4: 0xc041532  jal         func_1054C8
label_2733b8:
    if (ctx->pc == 0x2733B8u) {
        ctx->pc = 0x2733B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733B4u;
        // 0x2733b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733BCu;
        goto label_2733bc;
    }
    ctx->pc = 0x2733B4u;
    SET_GPR_U32(ctx, 31, 0x2733BCu);
    ctx->pc = 0x2733B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733B4u;
    // 0x2733b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2733B4u, 0x2733BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733BCu;
label_2733bc:
    // 0x2733bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2733bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2733c0:
    // 0x2733c0: 0xc041532  jal         func_1054C8
label_2733c4:
    if (ctx->pc == 0x2733C4u) {
        ctx->pc = 0x2733C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733C0u;
        // 0x2733c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733C8u;
        goto label_2733c8;
    }
    ctx->pc = 0x2733C0u;
    SET_GPR_U32(ctx, 31, 0x2733C8u);
    ctx->pc = 0x2733C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733C0u;
    // 0x2733c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2733C0u, 0x2733C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733C8u;
label_2733c8:
    // 0x2733c8: 0x16e00027  bnez        $s7, . + 4 + (0x27 << 2)
label_2733cc:
    if (ctx->pc == 0x2733CCu) {
        ctx->pc = 0x2733CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733C8u;
        // 0x2733cc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733D0u;
        goto label_2733d0;
    }
    ctx->pc = 0x2733C8u;
    {
        const bool branch_taken_0x2733c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2733CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733C8u;
        // 0x2733cc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733c8) {
            ctx->pc = 0x273468u;
            goto label_273468;
        }
    }
    ctx->pc = 0x2733D0u;
label_2733d0:
    // 0x2733d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2733d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2733d4:
    // 0x2733d4: 0xc094fb4  jal         func_253ED0
label_2733d8:
    if (ctx->pc == 0x2733D8u) {
        ctx->pc = 0x2733D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733D4u;
        // 0x2733d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733DCu;
        goto label_2733dc;
    }
    ctx->pc = 0x2733D4u;
    SET_GPR_U32(ctx, 31, 0x2733DCu);
    ctx->pc = 0x2733D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733D4u;
    // 0x2733d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x2733D4u, 0x2733DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733DCu;
label_2733dc:
    // 0x2733dc: 0xc08a0d0  jal         func_228340
label_2733e0:
    if (ctx->pc == 0x2733E0u) {
        ctx->pc = 0x2733E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733DCu;
        // 0x2733e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733E4u;
        goto label_2733e4;
    }
    ctx->pc = 0x2733DCu;
    SET_GPR_U32(ctx, 31, 0x2733E4u);
    ctx->pc = 0x2733E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2733DCu;
    // 0x2733e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2733DCu, 0x2733E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2733E4u;
label_2733e4:
    // 0x2733e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2733e8:
    if (ctx->pc == 0x2733E8u) {
        ctx->pc = 0x2733ECu;
        goto label_2733ec;
    }
    ctx->pc = 0x2733E4u;
    {
        const bool branch_taken_0x2733e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2733e4) {
            ctx->pc = 0x273420u;
            goto label_273420;
        }
    }
    ctx->pc = 0x2733ECu;
label_2733ec:
    // 0x2733ec: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2733f0:
    if (ctx->pc == 0x2733F0u) {
        ctx->pc = 0x2733F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733ECu;
        // 0x2733f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2733F4u;
        goto label_2733f4;
    }
    ctx->pc = 0x2733ECu;
    {
        const bool branch_taken_0x2733ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2733ECu;
        // 0x2733f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733ec) {
            ctx->pc = 0x273410u;
            goto label_273410;
        }
    }
    ctx->pc = 0x2733F4u;
label_2733f4:
    // 0x2733f4: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2733f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2733f8:
    // 0x2733f8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2733fc:
    // 0x2733fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2733fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273400:
    // 0x273400: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x273400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_273404:
    // 0x273404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x273404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273408:
    // 0x273408: 0xc04159e  jal         func_105678
label_27340c:
    if (ctx->pc == 0x27340Cu) {
        ctx->pc = 0x27340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273408u;
        // 0x27340c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273410u;
        goto label_273410;
    }
    ctx->pc = 0x273408u;
    SET_GPR_U32(ctx, 31, 0x273410u);
    ctx->pc = 0x27340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273408u;
    // 0x27340c: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x273408u, 0x273410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273410u;
label_273410:
    // 0x273410: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x273410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_273414:
    // 0x273414: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x273414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_273418:
    // 0x273418: 0x1000000c  b           . + 4 + (0xC << 2)
label_27341c:
    if (ctx->pc == 0x27341Cu) {
        ctx->pc = 0x27341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273418u;
        // 0x27341c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273420u;
        goto label_273420;
    }
    ctx->pc = 0x273418u;
    {
        const bool branch_taken_0x273418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273418u;
        // 0x27341c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273418) {
            ctx->pc = 0x27344Cu;
            goto label_27344c;
        }
    }
    ctx->pc = 0x273420u;
label_273420:
    // 0x273420: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_273424:
    if (ctx->pc == 0x273424u) {
        ctx->pc = 0x273424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273420u;
        // 0x273424: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273428u;
        goto label_273428;
    }
    ctx->pc = 0x273420u;
    {
        const bool branch_taken_0x273420 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x273424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273420u;
        // 0x273424: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273420) {
            ctx->pc = 0x273444u;
            goto label_273444;
        }
    }
    ctx->pc = 0x273428u;
label_273428:
    // 0x273428: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x273428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_27342c:
    // 0x27342c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x27342cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273430:
    // 0x273430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273434:
    // 0x273434: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x273434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_273438:
    // 0x273438: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x273438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27343c:
    // 0x27343c: 0xc04159e  jal         func_105678
label_273440:
    if (ctx->pc == 0x273440u) {
        ctx->pc = 0x273440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27343Cu;
        // 0x273440: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273444u;
        goto label_273444;
    }
    ctx->pc = 0x27343Cu;
    SET_GPR_U32(ctx, 31, 0x273444u);
    ctx->pc = 0x273440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27343Cu;
    // 0x273440: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x27343Cu, 0x273444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273444u;
label_273444:
    // 0x273444: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x273444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_273448:
    // 0x273448: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x273448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_27344c:
    // 0x27344c: 0xc094fca  jal         func_253F28
label_273450:
    if (ctx->pc == 0x273450u) {
        ctx->pc = 0x273450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27344Cu;
        // 0x273450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273454u;
        goto label_273454;
    }
    ctx->pc = 0x27344Cu;
    SET_GPR_U32(ctx, 31, 0x273454u);
    ctx->pc = 0x273450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27344Cu;
    // 0x273450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x27344Cu, 0x273454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273454u;
label_273454:
    // 0x273454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273458:
    // 0x273458: 0xc0a0152  jal         func_280548
label_27345c:
    if (ctx->pc == 0x27345Cu) {
        ctx->pc = 0x27345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273458u;
        // 0x27345c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273460u;
        goto label_273460;
    }
    ctx->pc = 0x273458u;
    SET_GPR_U32(ctx, 31, 0x273460u);
    ctx->pc = 0x27345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273458u;
    // 0x27345c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x273458u, 0x273460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273460u;
label_273460:
    // 0x273460: 0x1000001d  b           . + 4 + (0x1D << 2)
label_273464:
    if (ctx->pc == 0x273464u) {
        ctx->pc = 0x273468u;
        goto label_273468;
    }
    ctx->pc = 0x273460u;
    {
        const bool branch_taken_0x273460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273460) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x273468u;
label_273468:
    // 0x273468: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_27346c:
    if (ctx->pc == 0x27346Cu) {
        ctx->pc = 0x27346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273468u;
        // 0x27346c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273470u;
        goto label_273470;
    }
    ctx->pc = 0x273468u;
    {
        const bool branch_taken_0x273468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273468u;
        // 0x27346c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273468) {
            ctx->pc = 0x2734A4u;
            goto label_2734a4;
        }
    }
    ctx->pc = 0x273470u;
label_273470:
    // 0x273470: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x273470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_273474:
    // 0x273474: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x273474u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273478:
    // 0x273478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27347c:
    // 0x27347c: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x27347cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_273480:
    // 0x273480: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x273480u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273484:
    // 0x273484: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x273484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_273488:
    // 0x273488: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x273488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_27348c:
    // 0x27348c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x27348cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_273490:
    // 0x273490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x273490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_273494:
    // 0x273494: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x273494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_273498:
    // 0x273498: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x273498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_27349c:
    // 0x27349c: 0xc041bd4  jal         func_106F50
label_2734a0:
    if (ctx->pc == 0x2734A0u) {
        ctx->pc = 0x2734A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27349Cu;
        // 0x2734a0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734A4u;
        goto label_2734a4;
    }
    ctx->pc = 0x27349Cu;
    SET_GPR_U32(ctx, 31, 0x2734A4u);
    ctx->pc = 0x2734A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27349Cu;
    // 0x2734a0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x27349Cu, 0x2734A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734A4u;
label_2734a4:
    // 0x2734a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2734a8:
    // 0x2734a8: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x2734a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_2734ac:
    // 0x2734ac: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x2734acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_2734b0:
    // 0x2734b0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x2734b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_2734b4:
    // 0x2734b4: 0x60f809  jalr        $v1
label_2734b8:
    if (ctx->pc == 0x2734B8u) {
        ctx->pc = 0x2734B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734B4u;
        // 0x2734b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734BCu;
        goto label_2734bc;
    }
    ctx->pc = 0x2734B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2734BCu);
        ctx->pc = 0x2734B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734B4u;
        // 0x2734b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2734B4u, 0x2734BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2734BCu;
label_2734bc:
    // 0x2734bc: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x2734bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2734c0:
    // 0x2734c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2734c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2734c4:
    // 0x2734c4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2734c8:
    if (ctx->pc == 0x2734C8u) {
        ctx->pc = 0x2734C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734C4u;
        // 0x2734c8: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734CCu;
        goto label_2734cc;
    }
    ctx->pc = 0x2734C4u;
    {
        const bool branch_taken_0x2734c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734C4u;
        // 0x2734c8: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734c4) {
            ctx->pc = 0x2734D8u;
            goto label_2734d8;
        }
    }
    ctx->pc = 0x2734CCu;
label_2734cc:
    // 0x2734cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2734ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2734d0:
    // 0x2734d0: 0xc05dc68  jal         func_1771A0
label_2734d4:
    if (ctx->pc == 0x2734D4u) {
        ctx->pc = 0x2734D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734D0u;
        // 0x2734d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734D8u;
        goto label_2734d8;
    }
    ctx->pc = 0x2734D0u;
    SET_GPR_U32(ctx, 31, 0x2734D8u);
    ctx->pc = 0x2734D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2734D0u;
    // 0x2734d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1771A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1771A0u, 0x2734D0u, 0x2734D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2734D8u;
label_2734d8:
    // 0x2734d8: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
label_2734dc:
    if (ctx->pc == 0x2734DCu) {
        ctx->pc = 0x2734DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734D8u;
        // 0x2734dc: 0x24020158  addiu       $v0, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734E0u;
        goto label_2734e0;
    }
    ctx->pc = 0x2734D8u;
    {
        const bool branch_taken_0x2734d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734D8u;
        // 0x2734dc: 0x24020158  addiu       $v0, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734d8) {
            ctx->pc = 0x273534u;
            goto label_273534;
        }
    }
    ctx->pc = 0x2734E0u;
label_2734e0:
    // 0x2734e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2734e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2734e4:
    // 0x2734e4: 0x2410015a  addiu       $s0, $zero, 0x15A
    ctx->pc = 0x2734e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
label_2734e8:
    // 0x2734e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2734e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2734ec:
    // 0x2734ec: 0x57800b  movn        $s0, $v0, $s7
    ctx->pc = 0x2734ecu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2734f0:
    // 0x2734f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2734f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2734f4:
    // 0x2734f4: 0x40f809  jalr        $v0
label_2734f8:
    if (ctx->pc == 0x2734F8u) {
        ctx->pc = 0x2734F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734F4u;
        // 0x2734f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734FCu;
        goto label_2734fc;
    }
    ctx->pc = 0x2734F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2734FCu);
        ctx->pc = 0x2734F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734F4u;
        // 0x2734f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2734F4u, 0x2734FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2734FCu;
label_2734fc:
    // 0x2734fc: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
label_273500:
    if (ctx->pc == 0x273500u) {
        ctx->pc = 0x273500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734FCu;
        // 0x273500: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273504u;
        goto label_273504;
    }
    ctx->pc = 0x2734FCu;
    {
        const bool branch_taken_0x2734fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x273500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734FCu;
        // 0x273500: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734fc) {
            ctx->pc = 0x273510u;
            goto label_273510;
        }
    }
    ctx->pc = 0x273504u;
label_273504:
    // 0x273504: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x273504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_273508:
    // 0x273508: 0x10000003  b           . + 4 + (0x3 << 2)
label_27350c:
    if (ctx->pc == 0x27350Cu) {
        ctx->pc = 0x27350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273508u;
        // 0x27350c: 0x244a3090  addiu       $t2, $v0, 0x3090 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 12432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273510u;
        goto label_273510;
    }
    ctx->pc = 0x273508u;
    {
        const bool branch_taken_0x273508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273508u;
        // 0x27350c: 0x244a3090  addiu       $t2, $v0, 0x3090 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 12432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273508) {
            ctx->pc = 0x273518u;
            goto label_273518;
        }
    }
    ctx->pc = 0x273510u;
label_273510:
    // 0x273510: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x273510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_273514:
    // 0x273514: 0x244a3038  addiu       $t2, $v0, 0x3038
    ctx->pc = 0x273514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 12344));
label_273518:
    // 0x273518: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x273518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27351c:
    // 0x27351c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273520:
    // 0x273520: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x273520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273524:
    // 0x273524: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x273524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_273528:
    // 0x273528: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x273528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27352c:
    // 0x27352c: 0xc041664  jal         func_105990
label_273530:
    if (ctx->pc == 0x273530u) {
        ctx->pc = 0x273530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27352Cu;
        // 0x273530: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273534u;
        goto label_273534;
    }
    ctx->pc = 0x27352Cu;
    SET_GPR_U32(ctx, 31, 0x273534u);
    ctx->pc = 0x273530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27352Cu;
    // 0x273530: 0x3c080080  lui         $t0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27352Cu, 0x273534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273534u;
label_273534:
    // 0x273534: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_273538:
    if (ctx->pc == 0x273538u) {
        ctx->pc = 0x273538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273534u;
        // 0x273538: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27353Cu;
        goto label_27353c;
    }
    ctx->pc = 0x273534u;
    {
        const bool branch_taken_0x273534 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x273538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273534u;
        // 0x273538: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273534) {
            ctx->pc = 0x27355Cu;
            goto label_27355c;
        }
    }
    ctx->pc = 0x27353Cu;
label_27353c:
    // 0x27353c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x27353cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_273540:
    // 0x273540: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x273540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_273544:
    // 0x273544: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x273544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_273548:
    // 0x273548: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x273548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_27354c:
    // 0x27354c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27354cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_273550:
    // 0x273550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x273550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_273554:
    // 0x273554: 0xc041b20  jal         func_106C80
label_273558:
    if (ctx->pc == 0x273558u) {
        ctx->pc = 0x273558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273554u;
        // 0x273558: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27355Cu;
        goto label_27355c;
    }
    ctx->pc = 0x273554u;
    SET_GPR_U32(ctx, 31, 0x27355Cu);
    ctx->pc = 0x273558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273554u;
    // 0x273558: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x273554u, 0x27355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27355Cu;
label_27355c:
    // 0x27355c: 0xc05d484  jal         func_175210
label_273560:
    if (ctx->pc == 0x273560u) {
        ctx->pc = 0x273560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27355Cu;
        // 0x273560: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273564u;
        goto label_273564;
    }
    ctx->pc = 0x27355Cu;
    SET_GPR_U32(ctx, 31, 0x273564u);
    ctx->pc = 0x273560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27355Cu;
    // 0x273560: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x27355Cu, 0x273564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273564u;
label_273564:
    // 0x273564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x273564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273568:
    // 0x273568: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x273568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_27356c:
    // 0x27356c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x27356cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_273570:
    // 0x273570: 0xa0f809  jalr        $a1
label_273574:
    if (ctx->pc == 0x273574u) {
        ctx->pc = 0x273574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273570u;
        // 0x273574: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273578u;
        goto label_273578;
    }
    ctx->pc = 0x273570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x273578u);
        ctx->pc = 0x273574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273570u;
        // 0x273574: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273570u, 0x273578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273578u;
label_273578:
    // 0x273578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x273578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27357c:
    // 0x27357c: 0xc087016  jal         func_21C058
label_273580:
    if (ctx->pc == 0x273580u) {
        ctx->pc = 0x273580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27357Cu;
        // 0x273580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273584u;
        goto label_273584;
    }
    ctx->pc = 0x27357Cu;
    SET_GPR_U32(ctx, 31, 0x273584u);
    ctx->pc = 0x273580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27357Cu;
    // 0x273580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x27357Cu, 0x273584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273584u;
label_273584:
    // 0x273584: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x273584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_273588:
    // 0x273588: 0xc05d53a  jal         func_1754E8
label_27358c:
    if (ctx->pc == 0x27358Cu) {
        ctx->pc = 0x27358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273588u;
        // 0x27358c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273590u;
        goto label_273590;
    }
    ctx->pc = 0x273588u;
    SET_GPR_U32(ctx, 31, 0x273590u);
    ctx->pc = 0x27358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273588u;
    // 0x27358c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x273588u, 0x273590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273590u;
label_273590:
    // 0x273590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_273594:
    // 0x273594: 0xc05d4f6  jal         func_1753D8
label_273598:
    if (ctx->pc == 0x273598u) {
        ctx->pc = 0x273598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273594u;
        // 0x273598: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27359Cu;
        goto label_27359c;
    }
    ctx->pc = 0x273594u;
    SET_GPR_U32(ctx, 31, 0x27359Cu);
    ctx->pc = 0x273598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273594u;
    // 0x273598: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x273594u, 0x27359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27359Cu;
label_27359c:
    // 0x27359c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2735a0:
    // 0x2735a0: 0xc089990  jal         func_226640
label_2735a4:
    if (ctx->pc == 0x2735A4u) {
        ctx->pc = 0x2735A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A0u;
        // 0x2735a4: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735A8u;
        goto label_2735a8;
    }
    ctx->pc = 0x2735A0u;
    SET_GPR_U32(ctx, 31, 0x2735A8u);
    ctx->pc = 0x2735A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2735A0u;
    // 0x2735a4: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2735A0u, 0x2735A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735A8u;
label_2735a8:
    // 0x2735a8: 0x12e00024  beqz        $s7, . + 4 + (0x24 << 2)
label_2735ac:
    if (ctx->pc == 0x2735ACu) {
        ctx->pc = 0x2735ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A8u;
        // 0x2735ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735B0u;
        goto label_2735b0;
    }
    ctx->pc = 0x2735A8u;
    {
        const bool branch_taken_0x2735a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A8u;
        // 0x2735ac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735a8) {
            ctx->pc = 0x27363Cu;
            goto label_27363c;
        }
    }
    ctx->pc = 0x2735B0u;
label_2735b0:
    // 0x2735b0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2735b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_2735b4:
    // 0x2735b4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2735b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2735b8:
    // 0x2735b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2735bc:
    if (ctx->pc == 0x2735BCu) {
        ctx->pc = 0x2735BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735B8u;
        // 0x2735bc: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735C0u;
        goto label_2735c0;
    }
    ctx->pc = 0x2735B8u;
    {
        const bool branch_taken_0x2735b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735B8u;
        // 0x2735bc: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735b8) {
            ctx->pc = 0x273640u;
            goto label_273640;
        }
    }
    ctx->pc = 0x2735C0u;
label_2735c0:
    // 0x2735c0: 0xc087502  jal         func_21D408
label_2735c4:
    if (ctx->pc == 0x2735C4u) {
        ctx->pc = 0x2735C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735C0u;
        // 0x2735c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735C8u;
        goto label_2735c8;
    }
    ctx->pc = 0x2735C0u;
    SET_GPR_U32(ctx, 31, 0x2735C8u);
    ctx->pc = 0x2735C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2735C0u;
    // 0x2735c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2735C0u, 0x2735C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2735C8u;
label_2735c8:
    // 0x2735c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2735c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2735cc:
    // 0x2735cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2735ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2735d0:
    // 0x2735d0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2735d4:
    if (ctx->pc == 0x2735D4u) {
        ctx->pc = 0x2735D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735D0u;
        // 0x2735d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735D8u;
        goto label_2735d8;
    }
    ctx->pc = 0x2735D0u;
    {
        const bool branch_taken_0x2735d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2735D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735D0u;
        // 0x2735d4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735d0) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2735D8u;
label_2735d8:
    // 0x2735d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2735d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2735dc:
    // 0x2735dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2735e0:
    if (ctx->pc == 0x2735E0u) {
        ctx->pc = 0x2735E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735DCu;
        // 0x2735e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735E4u;
        goto label_2735e4;
    }
    ctx->pc = 0x2735DCu;
    {
        const bool branch_taken_0x2735dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735DCu;
        // 0x2735e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735dc) {
            ctx->pc = 0x2735F4u;
            goto label_2735f4;
        }
    }
    ctx->pc = 0x2735E4u;
label_2735e4:
    // 0x2735e4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2735e8:
    if (ctx->pc == 0x2735E8u) {
        ctx->pc = 0x2735E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735E4u;
        // 0x2735e8: 0x38c2000c  xori        $v0, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735ECu;
        goto label_2735ec;
    }
    ctx->pc = 0x2735E4u;
    {
        const bool branch_taken_0x2735e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2735E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735E4u;
        // 0x2735e8: 0x38c2000c  xori        $v0, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735e4) {
            ctx->pc = 0x273610u;
            goto label_273610;
        }
    }
    ctx->pc = 0x2735ECu;
label_2735ec:
    // 0x2735ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_2735f0:
    if (ctx->pc == 0x2735F0u) {
        ctx->pc = 0x2735F4u;
        goto label_2735f4;
    }
    ctx->pc = 0x2735ECu;
    {
        const bool branch_taken_0x2735ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2735ec) {
            ctx->pc = 0x273620u;
            goto label_273620;
        }
    }
    ctx->pc = 0x2735F4u;
label_2735f4:
    // 0x2735f4: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2735f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_2735f8:
    // 0x2735f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2735fc:
    if (ctx->pc == 0x2735FCu) {
        ctx->pc = 0x2735FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735F8u;
        // 0x2735fc: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273600u;
        goto label_273600;
    }
    ctx->pc = 0x2735F8u;
    {
        const bool branch_taken_0x2735f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735F8u;
        // 0x2735fc: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735f8) {
            ctx->pc = 0x27361Cu;
            goto label_27361c;
        }
    }
    ctx->pc = 0x273600u;
label_273600:
    // 0x273600: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_273604:
    if (ctx->pc == 0x273604u) {
        ctx->pc = 0x273604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273600u;
        // 0x273604: 0x38c2000c  xori        $v0, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273608u;
        goto label_273608;
    }
    ctx->pc = 0x273600u;
    {
        const bool branch_taken_0x273600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273600u;
        // 0x273604: 0x38c2000c  xori        $v0, $a2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273600) {
            ctx->pc = 0x273620u;
            goto label_273620;
        }
    }
    ctx->pc = 0x273608u;
label_273608:
    // 0x273608: 0x10000004  b           . + 4 + (0x4 << 2)
label_27360c:
    if (ctx->pc == 0x27360Cu) {
        ctx->pc = 0x27360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273608u;
        // 0x27360c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273610u;
        goto label_273610;
    }
    ctx->pc = 0x273608u;
    {
        const bool branch_taken_0x273608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273608u;
        // 0x27360c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273608) {
            ctx->pc = 0x27361Cu;
            goto label_27361c;
        }
    }
    ctx->pc = 0x273610u;
label_273610:
    // 0x273610: 0x10000002  b           . + 4 + (0x2 << 2)
label_273614:
    if (ctx->pc == 0x273614u) {
        ctx->pc = 0x273614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273610u;
        // 0x273614: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273618u;
        goto label_273618;
    }
    ctx->pc = 0x273610u;
    {
        const bool branch_taken_0x273610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273610u;
        // 0x273614: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273610) {
            ctx->pc = 0x27361Cu;
            goto label_27361c;
        }
    }
    ctx->pc = 0x273618u;
label_273618:
    // 0x273618: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x273618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27361c:
    // 0x27361c: 0x38c2000c  xori        $v0, $a2, 0xC
    ctx->pc = 0x27361cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)12);
label_273620:
    // 0x273620: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_273624:
    if (ctx->pc == 0x273624u) {
        ctx->pc = 0x273624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273620u;
        // 0x273624: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273628u;
        goto label_273628;
    }
    ctx->pc = 0x273620u;
    {
        const bool branch_taken_0x273620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273620u;
        // 0x273624: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273620) {
            ctx->pc = 0x273638u;
            goto label_273638;
        }
    }
    ctx->pc = 0x273628u;
label_273628:
    // 0x273628: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x273628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27362c:
    // 0x27362c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x27362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_273630:
    // 0x273630: 0xc13b652  jal         func_4ED948
label_273634:
    if (ctx->pc == 0x273634u) {
        ctx->pc = 0x273634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273630u;
        // 0x273634: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273638u;
        goto label_273638;
    }
    ctx->pc = 0x273630u;
    SET_GPR_U32(ctx, 31, 0x273638u);
    ctx->pc = 0x273634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273630u;
    // 0x273634: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x273630u, 0x273638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273638u;
label_273638:
    // 0x273638: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x273638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27363c:
    // 0x27363c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x27363cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_273640:
    // 0x273640: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x273640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_273644:
    // 0x273644: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x273644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_273648:
    // 0x273648: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x273648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27364c:
    // 0x27364c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x27364cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_273650:
    // 0x273650: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x273650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273654:
    // 0x273654: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x273654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273658:
    // 0x273658: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x273658u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27365c:
    // 0x27365c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273660:
    // 0x273660: 0x3e00008  jr          $ra
label_273664:
    if (ctx->pc == 0x273664u) {
        ctx->pc = 0x273664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273660u;
        // 0x273664: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273668u;
        goto label_fallthrough_0x273660;
    }
    ctx->pc = 0x273660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273660u;
        // 0x273664: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x273660:
    ctx->pc = 0x273668u;
}
