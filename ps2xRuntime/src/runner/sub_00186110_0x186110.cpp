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

// Function: sub_00186110
// Address: 0x186110 - 0x1866e8
void sub_00186110_0x186110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186110_0x186110");
#endif

    switch (ctx->pc) {
        case 0x186110u: goto label_186110;
        case 0x186114u: goto label_186114;
        case 0x186118u: goto label_186118;
        case 0x18611cu: goto label_18611c;
        case 0x186120u: goto label_186120;
        case 0x186124u: goto label_186124;
        case 0x186128u: goto label_186128;
        case 0x18612cu: goto label_18612c;
        case 0x186130u: goto label_186130;
        case 0x186134u: goto label_186134;
        case 0x186138u: goto label_186138;
        case 0x18613cu: goto label_18613c;
        case 0x186140u: goto label_186140;
        case 0x186144u: goto label_186144;
        case 0x186148u: goto label_186148;
        case 0x18614cu: goto label_18614c;
        case 0x186150u: goto label_186150;
        case 0x186154u: goto label_186154;
        case 0x186158u: goto label_186158;
        case 0x18615cu: goto label_18615c;
        case 0x186160u: goto label_186160;
        case 0x186164u: goto label_186164;
        case 0x186168u: goto label_186168;
        case 0x18616cu: goto label_18616c;
        case 0x186170u: goto label_186170;
        case 0x186174u: goto label_186174;
        case 0x186178u: goto label_186178;
        case 0x18617cu: goto label_18617c;
        case 0x186180u: goto label_186180;
        case 0x186184u: goto label_186184;
        case 0x186188u: goto label_186188;
        case 0x18618cu: goto label_18618c;
        case 0x186190u: goto label_186190;
        case 0x186194u: goto label_186194;
        case 0x186198u: goto label_186198;
        case 0x18619cu: goto label_18619c;
        case 0x1861a0u: goto label_1861a0;
        case 0x1861a4u: goto label_1861a4;
        case 0x1861a8u: goto label_1861a8;
        case 0x1861acu: goto label_1861ac;
        case 0x1861b0u: goto label_1861b0;
        case 0x1861b4u: goto label_1861b4;
        case 0x1861b8u: goto label_1861b8;
        case 0x1861bcu: goto label_1861bc;
        case 0x1861c0u: goto label_1861c0;
        case 0x1861c4u: goto label_1861c4;
        case 0x1861c8u: goto label_1861c8;
        case 0x1861ccu: goto label_1861cc;
        case 0x1861d0u: goto label_1861d0;
        case 0x1861d4u: goto label_1861d4;
        case 0x1861d8u: goto label_1861d8;
        case 0x1861dcu: goto label_1861dc;
        case 0x1861e0u: goto label_1861e0;
        case 0x1861e4u: goto label_1861e4;
        case 0x1861e8u: goto label_1861e8;
        case 0x1861ecu: goto label_1861ec;
        case 0x1861f0u: goto label_1861f0;
        case 0x1861f4u: goto label_1861f4;
        case 0x1861f8u: goto label_1861f8;
        case 0x1861fcu: goto label_1861fc;
        case 0x186200u: goto label_186200;
        case 0x186204u: goto label_186204;
        case 0x186208u: goto label_186208;
        case 0x18620cu: goto label_18620c;
        case 0x186210u: goto label_186210;
        case 0x186214u: goto label_186214;
        case 0x186218u: goto label_186218;
        case 0x18621cu: goto label_18621c;
        case 0x186220u: goto label_186220;
        case 0x186224u: goto label_186224;
        case 0x186228u: goto label_186228;
        case 0x18622cu: goto label_18622c;
        case 0x186230u: goto label_186230;
        case 0x186234u: goto label_186234;
        case 0x186238u: goto label_186238;
        case 0x18623cu: goto label_18623c;
        case 0x186240u: goto label_186240;
        case 0x186244u: goto label_186244;
        case 0x186248u: goto label_186248;
        case 0x18624cu: goto label_18624c;
        case 0x186250u: goto label_186250;
        case 0x186254u: goto label_186254;
        case 0x186258u: goto label_186258;
        case 0x18625cu: goto label_18625c;
        case 0x186260u: goto label_186260;
        case 0x186264u: goto label_186264;
        case 0x186268u: goto label_186268;
        case 0x18626cu: goto label_18626c;
        case 0x186270u: goto label_186270;
        case 0x186274u: goto label_186274;
        case 0x186278u: goto label_186278;
        case 0x18627cu: goto label_18627c;
        case 0x186280u: goto label_186280;
        case 0x186284u: goto label_186284;
        case 0x186288u: goto label_186288;
        case 0x18628cu: goto label_18628c;
        case 0x186290u: goto label_186290;
        case 0x186294u: goto label_186294;
        case 0x186298u: goto label_186298;
        case 0x18629cu: goto label_18629c;
        case 0x1862a0u: goto label_1862a0;
        case 0x1862a4u: goto label_1862a4;
        case 0x1862a8u: goto label_1862a8;
        case 0x1862acu: goto label_1862ac;
        case 0x1862b0u: goto label_1862b0;
        case 0x1862b4u: goto label_1862b4;
        case 0x1862b8u: goto label_1862b8;
        case 0x1862bcu: goto label_1862bc;
        case 0x1862c0u: goto label_1862c0;
        case 0x1862c4u: goto label_1862c4;
        case 0x1862c8u: goto label_1862c8;
        case 0x1862ccu: goto label_1862cc;
        case 0x1862d0u: goto label_1862d0;
        case 0x1862d4u: goto label_1862d4;
        case 0x1862d8u: goto label_1862d8;
        case 0x1862dcu: goto label_1862dc;
        case 0x1862e0u: goto label_1862e0;
        case 0x1862e4u: goto label_1862e4;
        case 0x1862e8u: goto label_1862e8;
        case 0x1862ecu: goto label_1862ec;
        case 0x1862f0u: goto label_1862f0;
        case 0x1862f4u: goto label_1862f4;
        case 0x1862f8u: goto label_1862f8;
        case 0x1862fcu: goto label_1862fc;
        case 0x186300u: goto label_186300;
        case 0x186304u: goto label_186304;
        case 0x186308u: goto label_186308;
        case 0x18630cu: goto label_18630c;
        case 0x186310u: goto label_186310;
        case 0x186314u: goto label_186314;
        case 0x186318u: goto label_186318;
        case 0x18631cu: goto label_18631c;
        case 0x186320u: goto label_186320;
        case 0x186324u: goto label_186324;
        case 0x186328u: goto label_186328;
        case 0x18632cu: goto label_18632c;
        case 0x186330u: goto label_186330;
        case 0x186334u: goto label_186334;
        case 0x186338u: goto label_186338;
        case 0x18633cu: goto label_18633c;
        case 0x186340u: goto label_186340;
        case 0x186344u: goto label_186344;
        case 0x186348u: goto label_186348;
        case 0x18634cu: goto label_18634c;
        case 0x186350u: goto label_186350;
        case 0x186354u: goto label_186354;
        case 0x186358u: goto label_186358;
        case 0x18635cu: goto label_18635c;
        case 0x186360u: goto label_186360;
        case 0x186364u: goto label_186364;
        case 0x186368u: goto label_186368;
        case 0x18636cu: goto label_18636c;
        case 0x186370u: goto label_186370;
        case 0x186374u: goto label_186374;
        case 0x186378u: goto label_186378;
        case 0x18637cu: goto label_18637c;
        case 0x186380u: goto label_186380;
        case 0x186384u: goto label_186384;
        case 0x186388u: goto label_186388;
        case 0x18638cu: goto label_18638c;
        case 0x186390u: goto label_186390;
        case 0x186394u: goto label_186394;
        case 0x186398u: goto label_186398;
        case 0x18639cu: goto label_18639c;
        case 0x1863a0u: goto label_1863a0;
        case 0x1863a4u: goto label_1863a4;
        case 0x1863a8u: goto label_1863a8;
        case 0x1863acu: goto label_1863ac;
        case 0x1863b0u: goto label_1863b0;
        case 0x1863b4u: goto label_1863b4;
        case 0x1863b8u: goto label_1863b8;
        case 0x1863bcu: goto label_1863bc;
        case 0x1863c0u: goto label_1863c0;
        case 0x1863c4u: goto label_1863c4;
        case 0x1863c8u: goto label_1863c8;
        case 0x1863ccu: goto label_1863cc;
        case 0x1863d0u: goto label_1863d0;
        case 0x1863d4u: goto label_1863d4;
        case 0x1863d8u: goto label_1863d8;
        case 0x1863dcu: goto label_1863dc;
        case 0x1863e0u: goto label_1863e0;
        case 0x1863e4u: goto label_1863e4;
        case 0x1863e8u: goto label_1863e8;
        case 0x1863ecu: goto label_1863ec;
        case 0x1863f0u: goto label_1863f0;
        case 0x1863f4u: goto label_1863f4;
        case 0x1863f8u: goto label_1863f8;
        case 0x1863fcu: goto label_1863fc;
        case 0x186400u: goto label_186400;
        case 0x186404u: goto label_186404;
        case 0x186408u: goto label_186408;
        case 0x18640cu: goto label_18640c;
        case 0x186410u: goto label_186410;
        case 0x186414u: goto label_186414;
        case 0x186418u: goto label_186418;
        case 0x18641cu: goto label_18641c;
        case 0x186420u: goto label_186420;
        case 0x186424u: goto label_186424;
        case 0x186428u: goto label_186428;
        case 0x18642cu: goto label_18642c;
        case 0x186430u: goto label_186430;
        case 0x186434u: goto label_186434;
        case 0x186438u: goto label_186438;
        case 0x18643cu: goto label_18643c;
        case 0x186440u: goto label_186440;
        case 0x186444u: goto label_186444;
        case 0x186448u: goto label_186448;
        case 0x18644cu: goto label_18644c;
        case 0x186450u: goto label_186450;
        case 0x186454u: goto label_186454;
        case 0x186458u: goto label_186458;
        case 0x18645cu: goto label_18645c;
        case 0x186460u: goto label_186460;
        case 0x186464u: goto label_186464;
        case 0x186468u: goto label_186468;
        case 0x18646cu: goto label_18646c;
        case 0x186470u: goto label_186470;
        case 0x186474u: goto label_186474;
        case 0x186478u: goto label_186478;
        case 0x18647cu: goto label_18647c;
        case 0x186480u: goto label_186480;
        case 0x186484u: goto label_186484;
        case 0x186488u: goto label_186488;
        case 0x18648cu: goto label_18648c;
        case 0x186490u: goto label_186490;
        case 0x186494u: goto label_186494;
        case 0x186498u: goto label_186498;
        case 0x18649cu: goto label_18649c;
        case 0x1864a0u: goto label_1864a0;
        case 0x1864a4u: goto label_1864a4;
        case 0x1864a8u: goto label_1864a8;
        case 0x1864acu: goto label_1864ac;
        case 0x1864b0u: goto label_1864b0;
        case 0x1864b4u: goto label_1864b4;
        case 0x1864b8u: goto label_1864b8;
        case 0x1864bcu: goto label_1864bc;
        case 0x1864c0u: goto label_1864c0;
        case 0x1864c4u: goto label_1864c4;
        case 0x1864c8u: goto label_1864c8;
        case 0x1864ccu: goto label_1864cc;
        case 0x1864d0u: goto label_1864d0;
        case 0x1864d4u: goto label_1864d4;
        case 0x1864d8u: goto label_1864d8;
        case 0x1864dcu: goto label_1864dc;
        case 0x1864e0u: goto label_1864e0;
        case 0x1864e4u: goto label_1864e4;
        case 0x1864e8u: goto label_1864e8;
        case 0x1864ecu: goto label_1864ec;
        case 0x1864f0u: goto label_1864f0;
        case 0x1864f4u: goto label_1864f4;
        case 0x1864f8u: goto label_1864f8;
        case 0x1864fcu: goto label_1864fc;
        case 0x186500u: goto label_186500;
        case 0x186504u: goto label_186504;
        case 0x186508u: goto label_186508;
        case 0x18650cu: goto label_18650c;
        case 0x186510u: goto label_186510;
        case 0x186514u: goto label_186514;
        case 0x186518u: goto label_186518;
        case 0x18651cu: goto label_18651c;
        case 0x186520u: goto label_186520;
        case 0x186524u: goto label_186524;
        case 0x186528u: goto label_186528;
        case 0x18652cu: goto label_18652c;
        case 0x186530u: goto label_186530;
        case 0x186534u: goto label_186534;
        case 0x186538u: goto label_186538;
        case 0x18653cu: goto label_18653c;
        case 0x186540u: goto label_186540;
        case 0x186544u: goto label_186544;
        case 0x186548u: goto label_186548;
        case 0x18654cu: goto label_18654c;
        case 0x186550u: goto label_186550;
        case 0x186554u: goto label_186554;
        case 0x186558u: goto label_186558;
        case 0x18655cu: goto label_18655c;
        case 0x186560u: goto label_186560;
        case 0x186564u: goto label_186564;
        case 0x186568u: goto label_186568;
        case 0x18656cu: goto label_18656c;
        case 0x186570u: goto label_186570;
        case 0x186574u: goto label_186574;
        case 0x186578u: goto label_186578;
        case 0x18657cu: goto label_18657c;
        case 0x186580u: goto label_186580;
        case 0x186584u: goto label_186584;
        case 0x186588u: goto label_186588;
        case 0x18658cu: goto label_18658c;
        case 0x186590u: goto label_186590;
        case 0x186594u: goto label_186594;
        case 0x186598u: goto label_186598;
        case 0x18659cu: goto label_18659c;
        case 0x1865a0u: goto label_1865a0;
        case 0x1865a4u: goto label_1865a4;
        case 0x1865a8u: goto label_1865a8;
        case 0x1865acu: goto label_1865ac;
        case 0x1865b0u: goto label_1865b0;
        case 0x1865b4u: goto label_1865b4;
        case 0x1865b8u: goto label_1865b8;
        case 0x1865bcu: goto label_1865bc;
        case 0x1865c0u: goto label_1865c0;
        case 0x1865c4u: goto label_1865c4;
        case 0x1865c8u: goto label_1865c8;
        case 0x1865ccu: goto label_1865cc;
        case 0x1865d0u: goto label_1865d0;
        case 0x1865d4u: goto label_1865d4;
        case 0x1865d8u: goto label_1865d8;
        case 0x1865dcu: goto label_1865dc;
        case 0x1865e0u: goto label_1865e0;
        case 0x1865e4u: goto label_1865e4;
        case 0x1865e8u: goto label_1865e8;
        case 0x1865ecu: goto label_1865ec;
        case 0x1865f0u: goto label_1865f0;
        case 0x1865f4u: goto label_1865f4;
        case 0x1865f8u: goto label_1865f8;
        case 0x1865fcu: goto label_1865fc;
        case 0x186600u: goto label_186600;
        case 0x186604u: goto label_186604;
        case 0x186608u: goto label_186608;
        case 0x18660cu: goto label_18660c;
        case 0x186610u: goto label_186610;
        case 0x186614u: goto label_186614;
        case 0x186618u: goto label_186618;
        case 0x18661cu: goto label_18661c;
        case 0x186620u: goto label_186620;
        case 0x186624u: goto label_186624;
        case 0x186628u: goto label_186628;
        case 0x18662cu: goto label_18662c;
        case 0x186630u: goto label_186630;
        case 0x186634u: goto label_186634;
        case 0x186638u: goto label_186638;
        case 0x18663cu: goto label_18663c;
        case 0x186640u: goto label_186640;
        case 0x186644u: goto label_186644;
        case 0x186648u: goto label_186648;
        case 0x18664cu: goto label_18664c;
        case 0x186650u: goto label_186650;
        case 0x186654u: goto label_186654;
        case 0x186658u: goto label_186658;
        case 0x18665cu: goto label_18665c;
        case 0x186660u: goto label_186660;
        case 0x186664u: goto label_186664;
        case 0x186668u: goto label_186668;
        case 0x18666cu: goto label_18666c;
        case 0x186670u: goto label_186670;
        case 0x186674u: goto label_186674;
        case 0x186678u: goto label_186678;
        case 0x18667cu: goto label_18667c;
        case 0x186680u: goto label_186680;
        case 0x186684u: goto label_186684;
        case 0x186688u: goto label_186688;
        case 0x18668cu: goto label_18668c;
        case 0x186690u: goto label_186690;
        case 0x186694u: goto label_186694;
        case 0x186698u: goto label_186698;
        case 0x18669cu: goto label_18669c;
        case 0x1866a0u: goto label_1866a0;
        case 0x1866a4u: goto label_1866a4;
        case 0x1866a8u: goto label_1866a8;
        case 0x1866acu: goto label_1866ac;
        case 0x1866b0u: goto label_1866b0;
        case 0x1866b4u: goto label_1866b4;
        case 0x1866b8u: goto label_1866b8;
        case 0x1866bcu: goto label_1866bc;
        case 0x1866c0u: goto label_1866c0;
        case 0x1866c4u: goto label_1866c4;
        case 0x1866c8u: goto label_1866c8;
        case 0x1866ccu: goto label_1866cc;
        case 0x1866d0u: goto label_1866d0;
        case 0x1866d4u: goto label_1866d4;
        case 0x1866d8u: goto label_1866d8;
        case 0x1866dcu: goto label_1866dc;
        case 0x1866e0u: goto label_1866e0;
        case 0x1866e4u: goto label_1866e4;
        default: break;
    }

    ctx->pc = 0x186110u;

label_186110:
    // 0x186110: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x186110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_186114:
    // 0x186114: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x186114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_186118:
    // 0x186118: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x186118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_18611c:
    // 0x18611c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18611cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186120:
    // 0x186120: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x186120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_186124:
    // 0x186124: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186128:
    // 0x186128: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x186128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_18612c:
    // 0x18612c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18612cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186130:
    // 0x186130: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x186130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_186134:
    // 0x186134: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x186134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_186138:
    // 0x186138: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x186138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_18613c:
    // 0x18613c: 0x1000000f  b           . + 4 + (0xF << 2)
label_186140:
    if (ctx->pc == 0x186140u) {
        ctx->pc = 0x186140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18613Cu;
        // 0x186140: 0xa260002b  sb          $zero, 0x2B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186144u;
        goto label_186144;
    }
    ctx->pc = 0x18613Cu;
    {
        const bool branch_taken_0x18613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18613Cu;
        // 0x186140: 0xa260002b  sb          $zero, 0x2B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18613c) {
            ctx->pc = 0x18617Cu;
            goto label_18617c;
        }
    }
    ctx->pc = 0x186144u;
label_186144:
    // 0x186144: 0x0  nop
    ctx->pc = 0x186144u;
    // NOP
label_186148:
    // 0x186148: 0xc05e036  jal         func_1780D8
label_18614c:
    if (ctx->pc == 0x18614Cu) {
        ctx->pc = 0x18614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186148u;
        // 0x18614c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186150u;
        goto label_186150;
    }
    ctx->pc = 0x186148u;
    SET_GPR_U32(ctx, 31, 0x186150u);
    ctx->pc = 0x18614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186148u;
    // 0x18614c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D8u, 0x186148u, 0x186150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186150u;
label_186150:
    // 0x186150: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x186150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186154:
    // 0x186154: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x186154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_186158:
    // 0x186158: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x186158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_18615c:
    // 0x18615c: 0x1043005c  beq         $v0, $v1, . + 4 + (0x5C << 2)
label_186160:
    if (ctx->pc == 0x186160u) {
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186164u;
        goto label_186164;
    }
    ctx->pc = 0x18615Cu;
    {
        const bool branch_taken_0x18615c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18615c) {
            ctx->pc = 0x1862D0u;
            goto label_1862d0;
        }
    }
    ctx->pc = 0x186164u;
label_186164:
    // 0x186164: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_186168:
    // 0x186168: 0x10e3006f  beq         $a3, $v1, . + 4 + (0x6F << 2)
label_18616c:
    if (ctx->pc == 0x18616Cu) {
        ctx->pc = 0x18616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186168u;
        // 0x18616c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186170u;
        goto label_186170;
    }
    ctx->pc = 0x186168u;
    {
        const bool branch_taken_0x186168 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x18616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186168u;
        // 0x18616c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186168) {
            ctx->pc = 0x186328u;
            goto label_186328;
        }
    }
    ctx->pc = 0x186170u;
label_186170:
    // 0x186170: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x186170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_186174:
    // 0x186174: 0x1043007f  beq         $v0, $v1, . + 4 + (0x7F << 2)
label_186178:
    if (ctx->pc == 0x186178u) {
        ctx->pc = 0x186178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186174u;
        // 0x186178: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18617Cu;
        goto label_18617c;
    }
    ctx->pc = 0x186174u;
    {
        const bool branch_taken_0x186174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x186178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186174u;
        // 0x186178: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186174) {
            ctx->pc = 0x186374u;
            goto label_186374;
        }
    }
    ctx->pc = 0x18617Cu;
label_18617c:
    // 0x18617c: 0xc05e034  jal         func_1780D0
label_186180:
    if (ctx->pc == 0x186180u) {
        ctx->pc = 0x186180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18617Cu;
        // 0x186180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186184u;
        goto label_186184;
    }
    ctx->pc = 0x18617Cu;
    SET_GPR_U32(ctx, 31, 0x186184u);
    ctx->pc = 0x186180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18617Cu;
    // 0x186180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D0u, 0x18617Cu, 0x186184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186184u;
label_186184:
    // 0x186184: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x186184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_186188:
    // 0x186188: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_18618c:
    if (ctx->pc == 0x18618Cu) {
        ctx->pc = 0x18618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186188u;
        // 0x18618c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186190u;
        goto label_186190;
    }
    ctx->pc = 0x186188u;
    {
        const bool branch_taken_0x186188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186188u;
        // 0x18618c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186188) {
            ctx->pc = 0x186148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186148;
        }
    }
    ctx->pc = 0x186190u;
label_186190:
    // 0x186190: 0x10000013  b           . + 4 + (0x13 << 2)
label_186194:
    if (ctx->pc == 0x186194u) {
        ctx->pc = 0x186194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186190u;
        // 0x186194: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186198u;
        goto label_186198;
    }
    ctx->pc = 0x186190u;
    {
        const bool branch_taken_0x186190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186190u;
        // 0x186194: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186190) {
            ctx->pc = 0x1861E0u;
            goto label_1861e0;
        }
    }
    ctx->pc = 0x186198u;
label_186198:
    // 0x186198: 0xc06048a  jal         func_181228
label_18619c:
    if (ctx->pc == 0x18619Cu) {
        ctx->pc = 0x18619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186198u;
        // 0x18619c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861A0u;
        goto label_1861a0;
    }
    ctx->pc = 0x186198u;
    SET_GPR_U32(ctx, 31, 0x1861A0u);
    ctx->pc = 0x18619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186198u;
    // 0x18619c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181228u, 0x186198u, 0x1861A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861A0u;
label_1861a0:
    // 0x1861a0: 0x8fa900e0  lw          $t1, 0xE0($sp)
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1861a4:
    // 0x1861a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1861a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1861a8:
    // 0x1861a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1861a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1861ac:
    // 0x1861ac: 0x2504000c  addiu       $a0, $t0, 0xC
    ctx->pc = 0x1861acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1861b0:
    // 0x1861b0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1861b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1861b4:
    // 0x1861b4: 0x0  nop
    ctx->pc = 0x1861b4u;
    // NOP
label_1861b8:
    // 0x1861b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1861b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1861bc:
    // 0x1861bc: 0x10460087  beq         $v0, $a2, . + 4 + (0x87 << 2)
label_1861c0:
    if (ctx->pc == 0x1861C0u) {
        ctx->pc = 0x1861C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861BCu;
        // 0x1861c0: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861C4u;
        goto label_1861c4;
    }
    ctx->pc = 0x1861BCu;
    {
        const bool branch_taken_0x1861bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1861C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861BCu;
        // 0x1861c0: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861bc) {
            ctx->pc = 0x1863DCu;
            goto label_1863dc;
        }
    }
    ctx->pc = 0x1861C4u;
label_1861c4:
    // 0x1861c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1861c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1861c8:
    // 0x1861c8: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1861c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1861cc:
    // 0x1861cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1861d0:
    if (ctx->pc == 0x1861D0u) {
        ctx->pc = 0x1861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861CCu;
        // 0x1861d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861D4u;
        goto label_1861d4;
    }
    ctx->pc = 0x1861CCu;
    {
        const bool branch_taken_0x1861cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861CCu;
        // 0x1861d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861cc) {
            ctx->pc = 0x1861B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1861b8;
        }
    }
    ctx->pc = 0x1861D4u;
label_1861d4:
    // 0x1861d4: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1861d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1861d8:
    // 0x1861d8: 0x10e9009b  beq         $a3, $t1, . + 4 + (0x9B << 2)
label_1861dc:
    if (ctx->pc == 0x1861DCu) {
        ctx->pc = 0x1861DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861D8u;
        // 0x1861dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861E0u;
        goto label_1861e0;
    }
    ctx->pc = 0x1861D8u;
    {
        const bool branch_taken_0x1861d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x1861DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861D8u;
        // 0x1861dc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861d8) {
            ctx->pc = 0x186448u;
            goto label_186448;
        }
    }
    ctx->pc = 0x1861E0u;
label_1861e0:
    // 0x1861e0: 0xc06046a  jal         func_1811A8
label_1861e4:
    if (ctx->pc == 0x1861E4u) {
        ctx->pc = 0x1861E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861E0u;
        // 0x1861e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861E8u;
        goto label_1861e8;
    }
    ctx->pc = 0x1861E0u;
    SET_GPR_U32(ctx, 31, 0x1861E8u);
    ctx->pc = 0x1861E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861E0u;
    // 0x1861e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1811A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1811A8u, 0x1861E0u, 0x1861E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861E8u;
label_1861e8:
    // 0x1861e8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1861e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1861ec:
    // 0x1861ec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1861f0:
    if (ctx->pc == 0x1861F0u) {
        ctx->pc = 0x1861F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861ECu;
        // 0x1861f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861F4u;
        goto label_1861f4;
    }
    ctx->pc = 0x1861ECu;
    {
        const bool branch_taken_0x1861ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1861F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861ECu;
        // 0x1861f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861ec) {
            ctx->pc = 0x186198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186198;
        }
    }
    ctx->pc = 0x1861F4u;
label_1861f4:
    // 0x1861f4: 0x8fb100e0  lw          $s1, 0xE0($sp)
    ctx->pc = 0x1861f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1861f8:
    // 0x1861f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1861fc:
    if (ctx->pc == 0x1861FCu) {
        ctx->pc = 0x1861FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861F8u;
        // 0x1861fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186200u;
        goto label_186200;
    }
    ctx->pc = 0x1861F8u;
    {
        const bool branch_taken_0x1861f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861F8u;
        // 0x1861fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861f8) {
            ctx->pc = 0x186218u;
            goto label_186218;
        }
    }
    ctx->pc = 0x186200u;
label_186200:
    // 0x186200: 0xc060a30  jal         func_1828C0
label_186204:
    if (ctx->pc == 0x186204u) {
        ctx->pc = 0x186204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186200u;
        // 0x186204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186208u;
        goto label_186208;
    }
    ctx->pc = 0x186200u;
    SET_GPR_U32(ctx, 31, 0x186208u);
    ctx->pc = 0x186204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186200u;
    // 0x186204: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x186200u, 0x186208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186208u;
label_186208:
    // 0x186208: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x186208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18620c:
    // 0x18620c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_186210:
    // 0x186210: 0x105100b1  beq         $v0, $s1, . + 4 + (0xB1 << 2)
label_186214:
    if (ctx->pc == 0x186214u) {
        ctx->pc = 0x186214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186210u;
        // 0x186214: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186218u;
        goto label_186218;
    }
    ctx->pc = 0x186210u;
    {
        const bool branch_taken_0x186210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x186214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186210u;
        // 0x186214: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186210) {
            ctx->pc = 0x1864D8u;
            goto label_1864d8;
        }
    }
    ctx->pc = 0x186218u;
label_186218:
    // 0x186218: 0xc060a2c  jal         func_1828B0
label_18621c:
    if (ctx->pc == 0x18621Cu) {
        ctx->pc = 0x18621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186218u;
        // 0x18621c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186220u;
        goto label_186220;
    }
    ctx->pc = 0x186218u;
    SET_GPR_U32(ctx, 31, 0x186220u);
    ctx->pc = 0x18621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186218u;
    // 0x18621c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828B0u, 0x186218u, 0x186220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186220u;
label_186220:
    // 0x186220: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x186220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_186224:
    // 0x186224: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_186228:
    if (ctx->pc == 0x186228u) {
        ctx->pc = 0x186228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186224u;
        // 0x186228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18622Cu;
        goto label_18622c;
    }
    ctx->pc = 0x186224u;
    {
        const bool branch_taken_0x186224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186224u;
        // 0x186228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186224) {
            ctx->pc = 0x186200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186200;
        }
    }
    ctx->pc = 0x18622Cu;
label_18622c:
    // 0x18622c: 0x8fb400e0  lw          $s4, 0xE0($sp)
    ctx->pc = 0x18622cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_186230:
    // 0x186230: 0x10000006  b           . + 4 + (0x6 << 2)
label_186234:
    if (ctx->pc == 0x186234u) {
        ctx->pc = 0x186234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186230u;
        // 0x186234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186238u;
        goto label_186238;
    }
    ctx->pc = 0x186230u;
    {
        const bool branch_taken_0x186230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186230u;
        // 0x186234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186230) {
            ctx->pc = 0x18624Cu;
            goto label_18624c;
        }
    }
    ctx->pc = 0x186238u;
label_186238:
    // 0x186238: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x186238u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_18623c:
    // 0x18623c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_186240:
    // 0x186240: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x186240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_186244:
    // 0x186244: 0x107400be  beq         $v1, $s4, . + 4 + (0xBE << 2)
label_186248:
    if (ctx->pc == 0x186248u) {
        ctx->pc = 0x186248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186244u;
        // 0x186248: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18624Cu;
        goto label_18624c;
    }
    ctx->pc = 0x186244u;
    {
        const bool branch_taken_0x186244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x186248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186244u;
        // 0x186248: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186244) {
            ctx->pc = 0x186540u;
            goto label_186540;
        }
    }
    ctx->pc = 0x18624Cu;
label_18624c:
    // 0x18624c: 0xc05e3ce  jal         func_178F38
label_186250:
    if (ctx->pc == 0x186250u) {
        ctx->pc = 0x186250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18624Cu;
        // 0x186250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186254u;
        goto label_186254;
    }
    ctx->pc = 0x18624Cu;
    SET_GPR_U32(ctx, 31, 0x186254u);
    ctx->pc = 0x186250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18624Cu;
    // 0x186250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F38u, 0x18624Cu, 0x186254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186254u;
label_186254:
    // 0x186254: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x186254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_186258:
    // 0x186258: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_18625c:
    if (ctx->pc == 0x18625Cu) {
        ctx->pc = 0x18625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186258u;
        // 0x18625c: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186260u;
        goto label_186260;
    }
    ctx->pc = 0x186258u;
    {
        const bool branch_taken_0x186258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186258) {
            ctx->pc = 0x18625Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186258u;
            // 0x18625c: 0x8e4200a0  lw          $v0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186238;
        }
    }
    ctx->pc = 0x186260u;
label_186260:
    // 0x186260: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x186260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_186264:
    // 0x186264: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x186264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_186268:
    // 0x186268: 0x24452c78  addiu       $a1, $v0, 0x2C78
    ctx->pc = 0x186268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11384));
label_18626c:
    // 0x18626c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x18626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_186270:
    // 0x186270: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
label_186274:
    if (ctx->pc == 0x186274u) {
        ctx->pc = 0x186274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186270u;
        // 0x186274: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186278u;
        goto label_186278;
    }
    ctx->pc = 0x186270u;
    {
        const bool branch_taken_0x186270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186270u;
        // 0x186274: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186270) {
            ctx->pc = 0x186640u;
            goto label_186640;
        }
    }
    ctx->pc = 0x186278u;
label_186278:
    // 0x186278: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x186278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_18627c:
    // 0x18627c: 0x68a60007  ldl         $a2, 0x7($a1)
    ctx->pc = 0x18627cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_186280:
    // 0x186280: 0x6ca60000  ldr         $a2, 0x0($a1)
    ctx->pc = 0x186280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_186284:
    // 0x186284: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x186284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_186288:
    // 0x186288: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x186288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_18628c:
    // 0x18628c: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x18628cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_186290:
    // 0x186290: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x186290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_186294:
    // 0x186294: 0x68a9001f  ldl         $t1, 0x1F($a1)
    ctx->pc = 0x186294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_186298:
    // 0x186298: 0x6ca90018  ldr         $t1, 0x18($a1)
    ctx->pc = 0x186298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_18629c:
    // 0x18629c: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x18629cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862a0:
    // 0x1862a0: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1862a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862a4:
    // 0x1862a4: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x1862a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862a8:
    // 0x1862a8: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x1862a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862ac:
    // 0x1862ac: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x1862acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862b0:
    // 0x1862b0: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x1862b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862b4:
    // 0x1862b4: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x1862b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862b8:
    // 0x1862b8: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x1862b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1862bc:
    // 0x1862bc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1862bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1862c0:
    // 0x1862c0: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_1862c4:
    if (ctx->pc == 0x1862C4u) {
        ctx->pc = 0x1862C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C0u;
        // 0x1862c4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862C8u;
        goto label_1862c8;
    }
    ctx->pc = 0x1862C0u;
    {
        const bool branch_taken_0x1862c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1862C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862C0u;
        // 0x1862c4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862c0) {
            ctx->pc = 0x18627Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18627c;
        }
    }
    ctx->pc = 0x1862C8u;
label_1862c8:
    // 0x1862c8: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_1862cc:
    if (ctx->pc == 0x1862CCu) {
        ctx->pc = 0x1862D0u;
        goto label_1862d0;
    }
    ctx->pc = 0x1862C8u;
    {
        const bool branch_taken_0x1862c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862c8) {
            ctx->pc = 0x186670u;
            goto label_186670;
        }
    }
    ctx->pc = 0x1862D0u;
label_1862d0:
    // 0x1862d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1862d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1862d4:
    // 0x1862d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1862d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1862d8:
    // 0x1862d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1862d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1862dc:
    // 0x1862dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1862dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1862e0:
    // 0x1862e0: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x1862e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1862e4:
    // 0x1862e4: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x1862e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_1862e8:
    // 0x1862e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1862e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1862ec:
    // 0x1862ec: 0xc061e58  jal         func_187960
label_1862f0:
    if (ctx->pc == 0x1862F0u) {
        ctx->pc = 0x1862F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862ECu;
        // 0x1862f0: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862F4u;
        goto label_1862f4;
    }
    ctx->pc = 0x1862ECu;
    SET_GPR_U32(ctx, 31, 0x1862F4u);
    ctx->pc = 0x1862F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862ECu;
    // 0x1862f0: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x1862ECu, 0x1862F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862F4u;
label_1862f4:
    // 0x1862f4: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x1862f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1862f8:
    // 0x1862f8: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1862f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1862fc:
    // 0x1862fc: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x1862fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_186300:
    // 0x186300: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x186300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_186304:
    // 0x186304: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x186304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_186308:
    // 0x186308: 0xc10ca04  jal         func_432810
label_18630c:
    if (ctx->pc == 0x18630Cu) {
        ctx->pc = 0x18630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186308u;
        // 0x18630c: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186310u;
        goto label_186310;
    }
    ctx->pc = 0x186308u;
    SET_GPR_U32(ctx, 31, 0x186310u);
    ctx->pc = 0x18630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186308u;
    // 0x18630c: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x186308u, 0x186310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186310u;
label_186310:
    // 0x186310: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186314:
    // 0x186314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186318:
    // 0x186318: 0xc137916  jal         func_4DE458
label_18631c:
    if (ctx->pc == 0x18631Cu) {
        ctx->pc = 0x18631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186318u;
        // 0x18631c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186320u;
        goto label_186320;
    }
    ctx->pc = 0x186318u;
    SET_GPR_U32(ctx, 31, 0x186320u);
    ctx->pc = 0x18631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186318u;
    // 0x18631c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE458u, 0x186318u, 0x186320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186320u;
label_186320:
    // 0x186320: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_186324:
    if (ctx->pc == 0x186324u) {
        ctx->pc = 0x186324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186320u;
        // 0x186324: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186328u;
        goto label_186328;
    }
    ctx->pc = 0x186320u;
    {
        const bool branch_taken_0x186320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186320u;
        // 0x186324: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186320) {
            ctx->pc = 0x186624u;
            goto label_186624;
        }
    }
    ctx->pc = 0x186328u;
label_186328:
    // 0x186328: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x186328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_18632c:
    // 0x18632c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18632cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_186330:
    // 0x186330: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x186330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_186334:
    // 0x186334: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x186334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_186338:
    // 0x186338: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_18633c:
    // 0x18633c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x18633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_186340:
    // 0x186340: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x186340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_186344:
    // 0x186344: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x186344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_186348:
    // 0x186348: 0xc10ca04  jal         func_432810
label_18634c:
    if (ctx->pc == 0x18634Cu) {
        ctx->pc = 0x18634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186348u;
        // 0x18634c: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186350u;
        goto label_186350;
    }
    ctx->pc = 0x186348u;
    SET_GPR_U32(ctx, 31, 0x186350u);
    ctx->pc = 0x18634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186348u;
    // 0x18634c: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x186348u, 0x186350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186350u;
label_186350:
    // 0x186350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186354:
    // 0x186354: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186358:
    // 0x186358: 0xc137afa  jal         func_4DEBE8
label_18635c:
    if (ctx->pc == 0x18635Cu) {
        ctx->pc = 0x18635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186358u;
        // 0x18635c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186360u;
        goto label_186360;
    }
    ctx->pc = 0x186358u;
    SET_GPR_U32(ctx, 31, 0x186360u);
    ctx->pc = 0x18635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186358u;
    // 0x18635c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEBE8u, 0x186358u, 0x186360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186360u;
label_186360:
    // 0x186360: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x186360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_186364:
    // 0x186364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186368:
    // 0x186368: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18636c:
    // 0x18636c: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_186370:
    if (ctx->pc == 0x186370u) {
        ctx->pc = 0x186370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18636Cu;
        // 0x186370: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186374u;
        goto label_186374;
    }
    ctx->pc = 0x18636Cu;
    {
        const bool branch_taken_0x18636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18636Cu;
        // 0x186370: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18636c) {
            ctx->pc = 0x186630u;
            goto label_186630;
        }
    }
    ctx->pc = 0x186374u;
label_186374:
    // 0x186374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x186374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_186378:
    // 0x186378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18637c:
    // 0x18637c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18637cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_186380:
    // 0x186380: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x186380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_186384:
    // 0x186384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186388:
    // 0x186388: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x186388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_18638c:
    // 0x18638c: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x18638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_186390:
    // 0x186390: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x186390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186394:
    // 0x186394: 0xc061e58  jal         func_187960
label_186398:
    if (ctx->pc == 0x186398u) {
        ctx->pc = 0x186398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186394u;
        // 0x186398: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18639Cu;
        goto label_18639c;
    }
    ctx->pc = 0x186394u;
    SET_GPR_U32(ctx, 31, 0x18639Cu);
    ctx->pc = 0x186398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186394u;
    // 0x186398: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x186394u, 0x18639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18639Cu;
label_18639c:
    // 0x18639c: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1863a0:
    // 0x1863a0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1863a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1863a4:
    // 0x1863a4: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x1863a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_1863a8:
    // 0x1863a8: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x1863a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1863ac:
    // 0x1863ac: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1863acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1863b0:
    // 0x1863b0: 0xc10ca04  jal         func_432810
label_1863b4:
    if (ctx->pc == 0x1863B4u) {
        ctx->pc = 0x1863B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863B0u;
        // 0x1863b4: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863B8u;
        goto label_1863b8;
    }
    ctx->pc = 0x1863B0u;
    SET_GPR_U32(ctx, 31, 0x1863B8u);
    ctx->pc = 0x1863B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1863B0u;
    // 0x1863b4: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1863B0u, 0x1863B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1863B8u;
label_1863b8:
    // 0x1863b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1863b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1863bc:
    // 0x1863bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1863bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1863c0:
    // 0x1863c0: 0xc137a34  jal         func_4DE8D0
label_1863c4:
    if (ctx->pc == 0x1863C4u) {
        ctx->pc = 0x1863C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863C0u;
        // 0x1863c4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863C8u;
        goto label_1863c8;
    }
    ctx->pc = 0x1863C0u;
    SET_GPR_U32(ctx, 31, 0x1863C8u);
    ctx->pc = 0x1863C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1863C0u;
    // 0x1863c4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x1863C0u, 0x1863C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1863C8u;
label_1863c8:
    // 0x1863c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1863c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1863cc:
    // 0x1863cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1863ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1863d0:
    // 0x1863d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1863d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1863d4:
    // 0x1863d4: 0x10000096  b           . + 4 + (0x96 << 2)
label_1863d8:
    if (ctx->pc == 0x1863D8u) {
        ctx->pc = 0x1863D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D4u;
        // 0x1863d8: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863DCu;
        goto label_1863dc;
    }
    ctx->pc = 0x1863D4u;
    {
        const bool branch_taken_0x1863d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D4u;
        // 0x1863d8: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d4) {
            ctx->pc = 0x186630u;
            goto label_186630;
        }
    }
    ctx->pc = 0x1863DCu;
label_1863dc:
    // 0x1863dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1863dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1863e0:
    // 0x1863e0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1863e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1863e4:
    // 0x1863e4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1863e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1863e8:
    // 0x1863e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1863e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1863ec:
    // 0x1863ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1863ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1863f0:
    // 0x1863f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1863f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1863f4:
    // 0x1863f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1863f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1863f8:
    // 0x1863f8: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x1863f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1863fc:
    // 0x1863fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1863fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186400:
    // 0x186400: 0xc061e58  jal         func_187960
label_186404:
    if (ctx->pc == 0x186404u) {
        ctx->pc = 0x186404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186400u;
        // 0x186404: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186408u;
        goto label_186408;
    }
    ctx->pc = 0x186400u;
    SET_GPR_U32(ctx, 31, 0x186408u);
    ctx->pc = 0x186404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186400u;
    // 0x186404: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x186400u, 0x186408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186408u;
label_186408:
    // 0x186408: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x186408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_18640c:
    // 0x18640c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x18640cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_186410:
    // 0x186410: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x186410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_186414:
    // 0x186414: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x186414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_186418:
    // 0x186418: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_18641c:
    // 0x18641c: 0xc10ca04  jal         func_432810
label_186420:
    if (ctx->pc == 0x186420u) {
        ctx->pc = 0x186420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18641Cu;
        // 0x186420: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186424u;
        goto label_186424;
    }
    ctx->pc = 0x18641Cu;
    SET_GPR_U32(ctx, 31, 0x186424u);
    ctx->pc = 0x186420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18641Cu;
    // 0x186420: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x18641Cu, 0x186424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186424u;
label_186424:
    // 0x186424: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186428:
    // 0x186428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18642c:
    // 0x18642c: 0xc137a34  jal         func_4DE8D0
label_186430:
    if (ctx->pc == 0x186430u) {
        ctx->pc = 0x186430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18642Cu;
        // 0x186430: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186434u;
        goto label_186434;
    }
    ctx->pc = 0x18642Cu;
    SET_GPR_U32(ctx, 31, 0x186434u);
    ctx->pc = 0x186430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18642Cu;
    // 0x186430: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x18642Cu, 0x186434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186434u;
label_186434:
    // 0x186434: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x186434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186438:
    // 0x186438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18643c:
    // 0x18643c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_186440:
    // 0x186440: 0x1000007b  b           . + 4 + (0x7B << 2)
label_186444:
    if (ctx->pc == 0x186444u) {
        ctx->pc = 0x186444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186440u;
        // 0x186444: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186448u;
        goto label_186448;
    }
    ctx->pc = 0x186440u;
    {
        const bool branch_taken_0x186440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186440u;
        // 0x186444: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186440) {
            ctx->pc = 0x186630u;
            goto label_186630;
        }
    }
    ctx->pc = 0x186448u;
label_186448:
    // 0x186448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18644c:
    // 0x18644c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x18644cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_186450:
    // 0x186450: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x186450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_186454:
    // 0x186454: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_186458:
    // 0x186458: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x186458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18645c:
    // 0x18645c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x18645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_186460:
    // 0x186460: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_186464:
    // 0x186464: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x186464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_186468:
    // 0x186468: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x186468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_18646c:
    // 0x18646c: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x18646cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_186470:
    // 0x186470: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x186470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_186474:
    // 0x186474: 0xc10ca04  jal         func_432810
label_186478:
    if (ctx->pc == 0x186478u) {
        ctx->pc = 0x186478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186474u;
        // 0x186478: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18647Cu;
        goto label_18647c;
    }
    ctx->pc = 0x186474u;
    SET_GPR_U32(ctx, 31, 0x18647Cu);
    ctx->pc = 0x186478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186474u;
    // 0x186478: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x186474u, 0x18647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18647Cu;
label_18647c:
    // 0x18647c: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x18647cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_186480:
    // 0x186480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186484:
    // 0x186484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186488:
    // 0x186488: 0xc137c70  jal         func_4DF1C0
label_18648c:
    if (ctx->pc == 0x18648Cu) {
        ctx->pc = 0x18648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186488u;
        // 0x18648c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186490u;
        goto label_186490;
    }
    ctx->pc = 0x186488u;
    SET_GPR_U32(ctx, 31, 0x186490u);
    ctx->pc = 0x18648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186488u;
    // 0x18648c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF1C0u, 0x186488u, 0x186490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186490u;
label_186490:
    // 0x186490: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186494:
    // 0x186494: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_186498:
    // 0x186498: 0xc137a1a  jal         func_4DE868
label_18649c:
    if (ctx->pc == 0x18649Cu) {
        ctx->pc = 0x18649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186498u;
        // 0x18649c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1864A0u;
        goto label_1864a0;
    }
    ctx->pc = 0x186498u;
    SET_GPR_U32(ctx, 31, 0x1864A0u);
    ctx->pc = 0x18649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186498u;
    // 0x18649c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE868u, 0x186498u, 0x1864A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864A0u;
label_1864a0:
    // 0x1864a0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1864a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1864a4:
    // 0x1864a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1864a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1864a8:
    // 0x1864a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1864ac:
    // 0x1864ac: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1864acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_1864b0:
    // 0x1864b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1864b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1864b4:
    // 0x1864b4: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x1864b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_1864b8:
    // 0x1864b8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1864b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1864bc:
    // 0x1864bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1864bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1864c0:
    // 0x1864c0: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x1864c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_1864c4:
    // 0x1864c4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1864c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_1864c8:
    // 0x1864c8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1864c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1864cc:
    // 0x1864cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1864ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1864d0:
    // 0x1864d0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1864d4:
    if (ctx->pc == 0x1864D4u) {
        ctx->pc = 0x1864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864D0u;
        // 0x1864d4: 0xa263002b  sb          $v1, 0x2B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1864D8u;
        goto label_1864d8;
    }
    ctx->pc = 0x1864D0u;
    {
        const bool branch_taken_0x1864d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864D0u;
        // 0x1864d4: 0xa263002b  sb          $v1, 0x2B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864d0) {
            ctx->pc = 0x1866C8u;
            goto label_1866c8;
        }
    }
    ctx->pc = 0x1864D8u;
label_1864d8:
    // 0x1864d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1864d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1864dc:
    // 0x1864dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1864dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1864e0:
    // 0x1864e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1864e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1864e4:
    // 0x1864e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1864e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1864e8:
    // 0x1864e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1864e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1864ec:
    // 0x1864ec: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1864ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1864f0:
    // 0x1864f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1864f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1864f4:
    // 0x1864f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1864f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1864f8:
    // 0x1864f8: 0xc061e58  jal         func_187960
label_1864fc:
    if (ctx->pc == 0x1864FCu) {
        ctx->pc = 0x1864FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864F8u;
        // 0x1864fc: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186500u;
        goto label_186500;
    }
    ctx->pc = 0x1864F8u;
    SET_GPR_U32(ctx, 31, 0x186500u);
    ctx->pc = 0x1864FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1864F8u;
    // 0x1864fc: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x1864F8u, 0x186500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186500u;
label_186500:
    // 0x186500: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x186500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_186504:
    // 0x186504: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x186504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_186508:
    // 0x186508: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_18650c:
    // 0x18650c: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x18650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_186510:
    // 0x186510: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_186514:
    // 0x186514: 0xc10ca04  jal         func_432810
label_186518:
    if (ctx->pc == 0x186518u) {
        ctx->pc = 0x186518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186514u;
        // 0x186518: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18651Cu;
        goto label_18651c;
    }
    ctx->pc = 0x186514u;
    SET_GPR_U32(ctx, 31, 0x18651Cu);
    ctx->pc = 0x186518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186514u;
    // 0x186518: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x186514u, 0x18651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18651Cu;
label_18651c:
    // 0x18651c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186520:
    // 0x186520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186524:
    // 0x186524: 0xc137cca  jal         func_4DF328
label_186528:
    if (ctx->pc == 0x186528u) {
        ctx->pc = 0x186528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186524u;
        // 0x186528: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18652Cu;
        goto label_18652c;
    }
    ctx->pc = 0x186524u;
    SET_GPR_U32(ctx, 31, 0x18652Cu);
    ctx->pc = 0x186528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186524u;
    // 0x186528: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF328u, 0x186524u, 0x18652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18652Cu;
label_18652c:
    // 0x18652c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18652cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186530:
    // 0x186530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186534:
    // 0x186534: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_186538:
    // 0x186538: 0x1000003d  b           . + 4 + (0x3D << 2)
label_18653c:
    if (ctx->pc == 0x18653Cu) {
        ctx->pc = 0x18653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186538u;
        // 0x18653c: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186540u;
        goto label_186540;
    }
    ctx->pc = 0x186538u;
    {
        const bool branch_taken_0x186538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186538u;
        // 0x18653c: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186538) {
            ctx->pc = 0x186630u;
            goto label_186630;
        }
    }
    ctx->pc = 0x186540u;
label_186540:
    // 0x186540: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x186540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_186544:
    // 0x186544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186548:
    // 0x186548: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x186548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_18654c:
    // 0x18654c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x18654cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_186550:
    // 0x186550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186554:
    // 0x186554: 0x26500050  addiu       $s0, $s2, 0x50
    ctx->pc = 0x186554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_186558:
    // 0x186558: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x186558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_18655c:
    // 0x18655c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_186560:
    // 0x186560: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x186560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186564:
    // 0x186564: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x186564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_186568:
    // 0x186568: 0xc061e58  jal         func_187960
label_18656c:
    if (ctx->pc == 0x18656Cu) {
        ctx->pc = 0x18656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186568u;
        // 0x18656c: 0xae63002c  sw          $v1, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186570u;
        goto label_186570;
    }
    ctx->pc = 0x186568u;
    SET_GPR_U32(ctx, 31, 0x186570u);
    ctx->pc = 0x18656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186568u;
    // 0x18656c: 0xae63002c  sw          $v1, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x186568u, 0x186570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186570u;
label_186570:
    // 0x186570: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x186570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_186574:
    // 0x186574: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x186574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_186578:
    // 0x186578: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x186578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_18657c:
    // 0x18657c: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x18657cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_186580:
    // 0x186580: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x186580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_186584:
    // 0x186584: 0xc10ca04  jal         func_432810
label_186588:
    if (ctx->pc == 0x186588u) {
        ctx->pc = 0x186588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186584u;
        // 0x186588: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18658Cu;
        goto label_18658c;
    }
    ctx->pc = 0x186584u;
    SET_GPR_U32(ctx, 31, 0x18658Cu);
    ctx->pc = 0x186588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186584u;
    // 0x186588: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x186584u, 0x18658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18658Cu;
label_18658c:
    // 0x18658c: 0x8e4600a0  lw          $a2, 0xA0($s2)
    ctx->pc = 0x18658cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_186590:
    // 0x186590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186594:
    // 0x186594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186598:
    // 0x186598: 0xc137950  jal         func_4DE540
label_18659c:
    if (ctx->pc == 0x18659Cu) {
        ctx->pc = 0x18659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186598u;
        // 0x18659c: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1865A0u;
        goto label_1865a0;
    }
    ctx->pc = 0x186598u;
    SET_GPR_U32(ctx, 31, 0x1865A0u);
    ctx->pc = 0x18659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186598u;
    // 0x18659c: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE540u, 0x186598u, 0x1865A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865A0u;
label_1865a0:
    // 0x1865a0: 0x10000020  b           . + 4 + (0x20 << 2)
label_1865a4:
    if (ctx->pc == 0x1865A4u) {
        ctx->pc = 0x1865A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865A0u;
        // 0x1865a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1865A8u;
        goto label_1865a8;
    }
    ctx->pc = 0x1865A0u;
    {
        const bool branch_taken_0x1865a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865A0u;
        // 0x1865a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865a0) {
            ctx->pc = 0x186624u;
            goto label_186624;
        }
    }
    ctx->pc = 0x1865A8u;
label_1865a8:
    // 0x1865a8: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1865a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1865ac:
    // 0x1865ac: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x1865acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1865b0:
    // 0x1865b0: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x1865b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1865b4:
    // 0x1865b4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1865b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1865b8:
    // 0x1865b8: 0x24c62be0  addiu       $a2, $a2, 0x2BE0
    ctx->pc = 0x1865b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11232));
label_1865bc:
    // 0x1865bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1865bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1865c0:
    // 0x1865c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1865c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1865c4:
    // 0x1865c4: 0xc10ca04  jal         func_432810
label_1865c8:
    if (ctx->pc == 0x1865C8u) {
        ctx->pc = 0x1865C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865C4u;
        // 0x1865c8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1865CCu;
        goto label_1865cc;
    }
    ctx->pc = 0x1865C4u;
    SET_GPR_U32(ctx, 31, 0x1865CCu);
    ctx->pc = 0x1865C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865C4u;
    // 0x1865c8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1865C4u, 0x1865CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865CCu;
label_1865cc:
    // 0x1865cc: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x1865ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1865d0:
    // 0x1865d0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1865d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1865d4:
    // 0x1865d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1865d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1865d8:
    // 0x1865d8: 0x8c62b788  lw          $v0, -0x4878($v1)
    ctx->pc = 0x1865d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_1865dc:
    // 0x1865dc: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x1865dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_1865e0:
    // 0x1865e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1865e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1865e4:
    // 0x1865e4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1865e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1865e8:
    // 0x1865e8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1865e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1865ec:
    // 0x1865ec: 0x40f809  jalr        $v0
label_1865f0:
    if (ctx->pc == 0x1865F0u) {
        ctx->pc = 0x1865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865ECu;
        // 0x1865f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1865F4u;
        goto label_1865f4;
    }
    ctx->pc = 0x1865ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1865F4u);
        ctx->pc = 0x1865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865ECu;
        // 0x1865f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1865ECu, 0x1865F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1865F4u;
label_1865f4:
    // 0x1865f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1865f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1865f8:
    // 0x1865f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1865f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1865fc:
    // 0x1865fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1865fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186600:
    // 0x186600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186604:
    // 0x186604: 0xc061e58  jal         func_187960
label_186608:
    if (ctx->pc == 0x186608u) {
        ctx->pc = 0x186608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186604u;
        // 0x186608: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18660Cu;
        goto label_18660c;
    }
    ctx->pc = 0x186604u;
    SET_GPR_U32(ctx, 31, 0x18660Cu);
    ctx->pc = 0x186608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186604u;
    // 0x186608: 0xae62002c  sw          $v0, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x186604u, 0x18660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18660Cu;
label_18660c:
    // 0x18660c: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x18660cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_186610:
    // 0x186610: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x186610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186614:
    // 0x186614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186618:
    // 0x186618: 0xc137a34  jal         func_4DE8D0
label_18661c:
    if (ctx->pc == 0x18661Cu) {
        ctx->pc = 0x18661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186618u;
        // 0x18661c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186620u;
        goto label_186620;
    }
    ctx->pc = 0x186618u;
    SET_GPR_U32(ctx, 31, 0x186620u);
    ctx->pc = 0x18661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186618u;
    // 0x18661c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x186618u, 0x186620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186620u;
label_186620:
    // 0x186620: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x186620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_186624:
    // 0x186624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186628:
    // 0x186628: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x186628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18662c:
    // 0x18662c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_186630:
    // 0x186630: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x186630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_186634:
    // 0x186634: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x186634u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_186638:
    // 0x186638: 0x10000023  b           . + 4 + (0x23 << 2)
label_18663c:
    if (ctx->pc == 0x18663Cu) {
        ctx->pc = 0x18663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186638u;
        // 0x18663c: 0xa263002b  sb          $v1, 0x2B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186640u;
        goto label_186640;
    }
    ctx->pc = 0x186638u;
    {
        const bool branch_taken_0x186638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186638u;
        // 0x18663c: 0xa263002b  sb          $v1, 0x2B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186638) {
            ctx->pc = 0x1866C8u;
            goto label_1866c8;
        }
    }
    ctx->pc = 0x186640u;
label_186640:
    // 0x186640: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x186640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_186644:
    // 0x186644: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x186644u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_186648:
    // 0x186648: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x186648u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_18664c:
    // 0x18664c: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x18664cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_186650:
    // 0x186650: 0xdca90018  ld          $t1, 0x18($a1)
    ctx->pc = 0x186650u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_186654:
    // 0x186654: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x186654u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
label_186658:
    // 0x186658: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x186658u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
label_18665c:
    // 0x18665c: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x18665cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
label_186660:
    // 0x186660: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x186660u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
label_186664:
    // 0x186664: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x186664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_186668:
    // 0x186668: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_18666c:
    if (ctx->pc == 0x18666Cu) {
        ctx->pc = 0x18666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186668u;
        // 0x18666c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186670u;
        goto label_186670;
    }
    ctx->pc = 0x186668u;
    {
        const bool branch_taken_0x186668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186668u;
        // 0x18666c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186668) {
            ctx->pc = 0x186644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186644;
        }
    }
    ctx->pc = 0x186670u;
label_186670:
    // 0x186670: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x186670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_186674:
    // 0x186674: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x186674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_186678:
    // 0x186678: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x186678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_18667c:
    // 0x18667c: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x18667cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_186680:
    // 0x186680: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x186680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_186684:
    // 0x186684: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x186684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_186688:
    // 0x186688: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x186688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18668c:
    // 0x18668c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x18668cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186690:
    // 0x186690: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x186690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186694:
    // 0x186694: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x186694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186698:
    // 0x186698: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x186698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18669c:
    // 0x18669c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18669cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1866a0:
    // 0x1866a0: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x1866a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1866a4:
    // 0x1866a4: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x1866a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1866a8:
    // 0x1866a8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1866a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1866ac:
    // 0x1866ac: 0x10e6ffbe  beq         $a3, $a2, . + 4 + (-0x42 << 2)
label_1866b0:
    if (ctx->pc == 0x1866B0u) {
        ctx->pc = 0x1866B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866ACu;
        // 0x1866b0: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866B4u;
        goto label_1866b4;
    }
    ctx->pc = 0x1866ACu;
    {
        const bool branch_taken_0x1866ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1866B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866ACu;
        // 0x1866b0: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866ac) {
            ctx->pc = 0x1865A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1865a8;
        }
    }
    ctx->pc = 0x1866B4u;
label_1866b4:
    // 0x1866b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1866b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1866b8:
    // 0x1866b8: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x1866b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1866bc:
    // 0x1866bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1866c0:
    if (ctx->pc == 0x1866C0u) {
        ctx->pc = 0x1866C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866BCu;
        // 0x1866c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866C4u;
        goto label_1866c4;
    }
    ctx->pc = 0x1866BCu;
    {
        const bool branch_taken_0x1866bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866BCu;
        // 0x1866c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866bc) {
            ctx->pc = 0x1866A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1866a8;
        }
    }
    ctx->pc = 0x1866C4u;
label_1866c4:
    // 0x1866c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1866c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1866c8:
    // 0x1866c8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1866c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1866cc:
    // 0x1866cc: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1866ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1866d0:
    // 0x1866d0: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1866d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1866d4:
    // 0x1866d4: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1866d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1866d8:
    // 0x1866d8: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1866d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1866dc:
    // 0x1866dc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1866dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1866e0:
    // 0x1866e0: 0x3e00008  jr          $ra
label_1866e4:
    if (ctx->pc == 0x1866E4u) {
        ctx->pc = 0x1866E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866E0u;
        // 0x1866e4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866E8u;
        goto label_fallthrough_0x1866e0;
    }
    ctx->pc = 0x1866E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1866E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866E0u;
        // 0x1866e4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1866E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1866e0:
    ctx->pc = 0x1866E8u;
}
