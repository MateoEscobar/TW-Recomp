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

// Function: sub_001363E8
// Address: 0x1363e8 - 0x136a88
void sub_001363E8_0x1363e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001363E8_0x1363e8");
#endif

    switch (ctx->pc) {
        case 0x1363e8u: goto label_1363e8;
        case 0x1363ecu: goto label_1363ec;
        case 0x1363f0u: goto label_1363f0;
        case 0x1363f4u: goto label_1363f4;
        case 0x1363f8u: goto label_1363f8;
        case 0x1363fcu: goto label_1363fc;
        case 0x136400u: goto label_136400;
        case 0x136404u: goto label_136404;
        case 0x136408u: goto label_136408;
        case 0x13640cu: goto label_13640c;
        case 0x136410u: goto label_136410;
        case 0x136414u: goto label_136414;
        case 0x136418u: goto label_136418;
        case 0x13641cu: goto label_13641c;
        case 0x136420u: goto label_136420;
        case 0x136424u: goto label_136424;
        case 0x136428u: goto label_136428;
        case 0x13642cu: goto label_13642c;
        case 0x136430u: goto label_136430;
        case 0x136434u: goto label_136434;
        case 0x136438u: goto label_136438;
        case 0x13643cu: goto label_13643c;
        case 0x136440u: goto label_136440;
        case 0x136444u: goto label_136444;
        case 0x136448u: goto label_136448;
        case 0x13644cu: goto label_13644c;
        case 0x136450u: goto label_136450;
        case 0x136454u: goto label_136454;
        case 0x136458u: goto label_136458;
        case 0x13645cu: goto label_13645c;
        case 0x136460u: goto label_136460;
        case 0x136464u: goto label_136464;
        case 0x136468u: goto label_136468;
        case 0x13646cu: goto label_13646c;
        case 0x136470u: goto label_136470;
        case 0x136474u: goto label_136474;
        case 0x136478u: goto label_136478;
        case 0x13647cu: goto label_13647c;
        case 0x136480u: goto label_136480;
        case 0x136484u: goto label_136484;
        case 0x136488u: goto label_136488;
        case 0x13648cu: goto label_13648c;
        case 0x136490u: goto label_136490;
        case 0x136494u: goto label_136494;
        case 0x136498u: goto label_136498;
        case 0x13649cu: goto label_13649c;
        case 0x1364a0u: goto label_1364a0;
        case 0x1364a4u: goto label_1364a4;
        case 0x1364a8u: goto label_1364a8;
        case 0x1364acu: goto label_1364ac;
        case 0x1364b0u: goto label_1364b0;
        case 0x1364b4u: goto label_1364b4;
        case 0x1364b8u: goto label_1364b8;
        case 0x1364bcu: goto label_1364bc;
        case 0x1364c0u: goto label_1364c0;
        case 0x1364c4u: goto label_1364c4;
        case 0x1364c8u: goto label_1364c8;
        case 0x1364ccu: goto label_1364cc;
        case 0x1364d0u: goto label_1364d0;
        case 0x1364d4u: goto label_1364d4;
        case 0x1364d8u: goto label_1364d8;
        case 0x1364dcu: goto label_1364dc;
        case 0x1364e0u: goto label_1364e0;
        case 0x1364e4u: goto label_1364e4;
        case 0x1364e8u: goto label_1364e8;
        case 0x1364ecu: goto label_1364ec;
        case 0x1364f0u: goto label_1364f0;
        case 0x1364f4u: goto label_1364f4;
        case 0x1364f8u: goto label_1364f8;
        case 0x1364fcu: goto label_1364fc;
        case 0x136500u: goto label_136500;
        case 0x136504u: goto label_136504;
        case 0x136508u: goto label_136508;
        case 0x13650cu: goto label_13650c;
        case 0x136510u: goto label_136510;
        case 0x136514u: goto label_136514;
        case 0x136518u: goto label_136518;
        case 0x13651cu: goto label_13651c;
        case 0x136520u: goto label_136520;
        case 0x136524u: goto label_136524;
        case 0x136528u: goto label_136528;
        case 0x13652cu: goto label_13652c;
        case 0x136530u: goto label_136530;
        case 0x136534u: goto label_136534;
        case 0x136538u: goto label_136538;
        case 0x13653cu: goto label_13653c;
        case 0x136540u: goto label_136540;
        case 0x136544u: goto label_136544;
        case 0x136548u: goto label_136548;
        case 0x13654cu: goto label_13654c;
        case 0x136550u: goto label_136550;
        case 0x136554u: goto label_136554;
        case 0x136558u: goto label_136558;
        case 0x13655cu: goto label_13655c;
        case 0x136560u: goto label_136560;
        case 0x136564u: goto label_136564;
        case 0x136568u: goto label_136568;
        case 0x13656cu: goto label_13656c;
        case 0x136570u: goto label_136570;
        case 0x136574u: goto label_136574;
        case 0x136578u: goto label_136578;
        case 0x13657cu: goto label_13657c;
        case 0x136580u: goto label_136580;
        case 0x136584u: goto label_136584;
        case 0x136588u: goto label_136588;
        case 0x13658cu: goto label_13658c;
        case 0x136590u: goto label_136590;
        case 0x136594u: goto label_136594;
        case 0x136598u: goto label_136598;
        case 0x13659cu: goto label_13659c;
        case 0x1365a0u: goto label_1365a0;
        case 0x1365a4u: goto label_1365a4;
        case 0x1365a8u: goto label_1365a8;
        case 0x1365acu: goto label_1365ac;
        case 0x1365b0u: goto label_1365b0;
        case 0x1365b4u: goto label_1365b4;
        case 0x1365b8u: goto label_1365b8;
        case 0x1365bcu: goto label_1365bc;
        case 0x1365c0u: goto label_1365c0;
        case 0x1365c4u: goto label_1365c4;
        case 0x1365c8u: goto label_1365c8;
        case 0x1365ccu: goto label_1365cc;
        case 0x1365d0u: goto label_1365d0;
        case 0x1365d4u: goto label_1365d4;
        case 0x1365d8u: goto label_1365d8;
        case 0x1365dcu: goto label_1365dc;
        case 0x1365e0u: goto label_1365e0;
        case 0x1365e4u: goto label_1365e4;
        case 0x1365e8u: goto label_1365e8;
        case 0x1365ecu: goto label_1365ec;
        case 0x1365f0u: goto label_1365f0;
        case 0x1365f4u: goto label_1365f4;
        case 0x1365f8u: goto label_1365f8;
        case 0x1365fcu: goto label_1365fc;
        case 0x136600u: goto label_136600;
        case 0x136604u: goto label_136604;
        case 0x136608u: goto label_136608;
        case 0x13660cu: goto label_13660c;
        case 0x136610u: goto label_136610;
        case 0x136614u: goto label_136614;
        case 0x136618u: goto label_136618;
        case 0x13661cu: goto label_13661c;
        case 0x136620u: goto label_136620;
        case 0x136624u: goto label_136624;
        case 0x136628u: goto label_136628;
        case 0x13662cu: goto label_13662c;
        case 0x136630u: goto label_136630;
        case 0x136634u: goto label_136634;
        case 0x136638u: goto label_136638;
        case 0x13663cu: goto label_13663c;
        case 0x136640u: goto label_136640;
        case 0x136644u: goto label_136644;
        case 0x136648u: goto label_136648;
        case 0x13664cu: goto label_13664c;
        case 0x136650u: goto label_136650;
        case 0x136654u: goto label_136654;
        case 0x136658u: goto label_136658;
        case 0x13665cu: goto label_13665c;
        case 0x136660u: goto label_136660;
        case 0x136664u: goto label_136664;
        case 0x136668u: goto label_136668;
        case 0x13666cu: goto label_13666c;
        case 0x136670u: goto label_136670;
        case 0x136674u: goto label_136674;
        case 0x136678u: goto label_136678;
        case 0x13667cu: goto label_13667c;
        case 0x136680u: goto label_136680;
        case 0x136684u: goto label_136684;
        case 0x136688u: goto label_136688;
        case 0x13668cu: goto label_13668c;
        case 0x136690u: goto label_136690;
        case 0x136694u: goto label_136694;
        case 0x136698u: goto label_136698;
        case 0x13669cu: goto label_13669c;
        case 0x1366a0u: goto label_1366a0;
        case 0x1366a4u: goto label_1366a4;
        case 0x1366a8u: goto label_1366a8;
        case 0x1366acu: goto label_1366ac;
        case 0x1366b0u: goto label_1366b0;
        case 0x1366b4u: goto label_1366b4;
        case 0x1366b8u: goto label_1366b8;
        case 0x1366bcu: goto label_1366bc;
        case 0x1366c0u: goto label_1366c0;
        case 0x1366c4u: goto label_1366c4;
        case 0x1366c8u: goto label_1366c8;
        case 0x1366ccu: goto label_1366cc;
        case 0x1366d0u: goto label_1366d0;
        case 0x1366d4u: goto label_1366d4;
        case 0x1366d8u: goto label_1366d8;
        case 0x1366dcu: goto label_1366dc;
        case 0x1366e0u: goto label_1366e0;
        case 0x1366e4u: goto label_1366e4;
        case 0x1366e8u: goto label_1366e8;
        case 0x1366ecu: goto label_1366ec;
        case 0x1366f0u: goto label_1366f0;
        case 0x1366f4u: goto label_1366f4;
        case 0x1366f8u: goto label_1366f8;
        case 0x1366fcu: goto label_1366fc;
        case 0x136700u: goto label_136700;
        case 0x136704u: goto label_136704;
        case 0x136708u: goto label_136708;
        case 0x13670cu: goto label_13670c;
        case 0x136710u: goto label_136710;
        case 0x136714u: goto label_136714;
        case 0x136718u: goto label_136718;
        case 0x13671cu: goto label_13671c;
        case 0x136720u: goto label_136720;
        case 0x136724u: goto label_136724;
        case 0x136728u: goto label_136728;
        case 0x13672cu: goto label_13672c;
        case 0x136730u: goto label_136730;
        case 0x136734u: goto label_136734;
        case 0x136738u: goto label_136738;
        case 0x13673cu: goto label_13673c;
        case 0x136740u: goto label_136740;
        case 0x136744u: goto label_136744;
        case 0x136748u: goto label_136748;
        case 0x13674cu: goto label_13674c;
        case 0x136750u: goto label_136750;
        case 0x136754u: goto label_136754;
        case 0x136758u: goto label_136758;
        case 0x13675cu: goto label_13675c;
        case 0x136760u: goto label_136760;
        case 0x136764u: goto label_136764;
        case 0x136768u: goto label_136768;
        case 0x13676cu: goto label_13676c;
        case 0x136770u: goto label_136770;
        case 0x136774u: goto label_136774;
        case 0x136778u: goto label_136778;
        case 0x13677cu: goto label_13677c;
        case 0x136780u: goto label_136780;
        case 0x136784u: goto label_136784;
        case 0x136788u: goto label_136788;
        case 0x13678cu: goto label_13678c;
        case 0x136790u: goto label_136790;
        case 0x136794u: goto label_136794;
        case 0x136798u: goto label_136798;
        case 0x13679cu: goto label_13679c;
        case 0x1367a0u: goto label_1367a0;
        case 0x1367a4u: goto label_1367a4;
        case 0x1367a8u: goto label_1367a8;
        case 0x1367acu: goto label_1367ac;
        case 0x1367b0u: goto label_1367b0;
        case 0x1367b4u: goto label_1367b4;
        case 0x1367b8u: goto label_1367b8;
        case 0x1367bcu: goto label_1367bc;
        case 0x1367c0u: goto label_1367c0;
        case 0x1367c4u: goto label_1367c4;
        case 0x1367c8u: goto label_1367c8;
        case 0x1367ccu: goto label_1367cc;
        case 0x1367d0u: goto label_1367d0;
        case 0x1367d4u: goto label_1367d4;
        case 0x1367d8u: goto label_1367d8;
        case 0x1367dcu: goto label_1367dc;
        case 0x1367e0u: goto label_1367e0;
        case 0x1367e4u: goto label_1367e4;
        case 0x1367e8u: goto label_1367e8;
        case 0x1367ecu: goto label_1367ec;
        case 0x1367f0u: goto label_1367f0;
        case 0x1367f4u: goto label_1367f4;
        case 0x1367f8u: goto label_1367f8;
        case 0x1367fcu: goto label_1367fc;
        case 0x136800u: goto label_136800;
        case 0x136804u: goto label_136804;
        case 0x136808u: goto label_136808;
        case 0x13680cu: goto label_13680c;
        case 0x136810u: goto label_136810;
        case 0x136814u: goto label_136814;
        case 0x136818u: goto label_136818;
        case 0x13681cu: goto label_13681c;
        case 0x136820u: goto label_136820;
        case 0x136824u: goto label_136824;
        case 0x136828u: goto label_136828;
        case 0x13682cu: goto label_13682c;
        case 0x136830u: goto label_136830;
        case 0x136834u: goto label_136834;
        case 0x136838u: goto label_136838;
        case 0x13683cu: goto label_13683c;
        case 0x136840u: goto label_136840;
        case 0x136844u: goto label_136844;
        case 0x136848u: goto label_136848;
        case 0x13684cu: goto label_13684c;
        case 0x136850u: goto label_136850;
        case 0x136854u: goto label_136854;
        case 0x136858u: goto label_136858;
        case 0x13685cu: goto label_13685c;
        case 0x136860u: goto label_136860;
        case 0x136864u: goto label_136864;
        case 0x136868u: goto label_136868;
        case 0x13686cu: goto label_13686c;
        case 0x136870u: goto label_136870;
        case 0x136874u: goto label_136874;
        case 0x136878u: goto label_136878;
        case 0x13687cu: goto label_13687c;
        case 0x136880u: goto label_136880;
        case 0x136884u: goto label_136884;
        case 0x136888u: goto label_136888;
        case 0x13688cu: goto label_13688c;
        case 0x136890u: goto label_136890;
        case 0x136894u: goto label_136894;
        case 0x136898u: goto label_136898;
        case 0x13689cu: goto label_13689c;
        case 0x1368a0u: goto label_1368a0;
        case 0x1368a4u: goto label_1368a4;
        case 0x1368a8u: goto label_1368a8;
        case 0x1368acu: goto label_1368ac;
        case 0x1368b0u: goto label_1368b0;
        case 0x1368b4u: goto label_1368b4;
        case 0x1368b8u: goto label_1368b8;
        case 0x1368bcu: goto label_1368bc;
        case 0x1368c0u: goto label_1368c0;
        case 0x1368c4u: goto label_1368c4;
        case 0x1368c8u: goto label_1368c8;
        case 0x1368ccu: goto label_1368cc;
        case 0x1368d0u: goto label_1368d0;
        case 0x1368d4u: goto label_1368d4;
        case 0x1368d8u: goto label_1368d8;
        case 0x1368dcu: goto label_1368dc;
        case 0x1368e0u: goto label_1368e0;
        case 0x1368e4u: goto label_1368e4;
        case 0x1368e8u: goto label_1368e8;
        case 0x1368ecu: goto label_1368ec;
        case 0x1368f0u: goto label_1368f0;
        case 0x1368f4u: goto label_1368f4;
        case 0x1368f8u: goto label_1368f8;
        case 0x1368fcu: goto label_1368fc;
        case 0x136900u: goto label_136900;
        case 0x136904u: goto label_136904;
        case 0x136908u: goto label_136908;
        case 0x13690cu: goto label_13690c;
        case 0x136910u: goto label_136910;
        case 0x136914u: goto label_136914;
        case 0x136918u: goto label_136918;
        case 0x13691cu: goto label_13691c;
        case 0x136920u: goto label_136920;
        case 0x136924u: goto label_136924;
        case 0x136928u: goto label_136928;
        case 0x13692cu: goto label_13692c;
        case 0x136930u: goto label_136930;
        case 0x136934u: goto label_136934;
        case 0x136938u: goto label_136938;
        case 0x13693cu: goto label_13693c;
        case 0x136940u: goto label_136940;
        case 0x136944u: goto label_136944;
        case 0x136948u: goto label_136948;
        case 0x13694cu: goto label_13694c;
        case 0x136950u: goto label_136950;
        case 0x136954u: goto label_136954;
        case 0x136958u: goto label_136958;
        case 0x13695cu: goto label_13695c;
        case 0x136960u: goto label_136960;
        case 0x136964u: goto label_136964;
        case 0x136968u: goto label_136968;
        case 0x13696cu: goto label_13696c;
        case 0x136970u: goto label_136970;
        case 0x136974u: goto label_136974;
        case 0x136978u: goto label_136978;
        case 0x13697cu: goto label_13697c;
        case 0x136980u: goto label_136980;
        case 0x136984u: goto label_136984;
        case 0x136988u: goto label_136988;
        case 0x13698cu: goto label_13698c;
        case 0x136990u: goto label_136990;
        case 0x136994u: goto label_136994;
        case 0x136998u: goto label_136998;
        case 0x13699cu: goto label_13699c;
        case 0x1369a0u: goto label_1369a0;
        case 0x1369a4u: goto label_1369a4;
        case 0x1369a8u: goto label_1369a8;
        case 0x1369acu: goto label_1369ac;
        case 0x1369b0u: goto label_1369b0;
        case 0x1369b4u: goto label_1369b4;
        case 0x1369b8u: goto label_1369b8;
        case 0x1369bcu: goto label_1369bc;
        case 0x1369c0u: goto label_1369c0;
        case 0x1369c4u: goto label_1369c4;
        case 0x1369c8u: goto label_1369c8;
        case 0x1369ccu: goto label_1369cc;
        case 0x1369d0u: goto label_1369d0;
        case 0x1369d4u: goto label_1369d4;
        case 0x1369d8u: goto label_1369d8;
        case 0x1369dcu: goto label_1369dc;
        case 0x1369e0u: goto label_1369e0;
        case 0x1369e4u: goto label_1369e4;
        case 0x1369e8u: goto label_1369e8;
        case 0x1369ecu: goto label_1369ec;
        case 0x1369f0u: goto label_1369f0;
        case 0x1369f4u: goto label_1369f4;
        case 0x1369f8u: goto label_1369f8;
        case 0x1369fcu: goto label_1369fc;
        case 0x136a00u: goto label_136a00;
        case 0x136a04u: goto label_136a04;
        case 0x136a08u: goto label_136a08;
        case 0x136a0cu: goto label_136a0c;
        case 0x136a10u: goto label_136a10;
        case 0x136a14u: goto label_136a14;
        case 0x136a18u: goto label_136a18;
        case 0x136a1cu: goto label_136a1c;
        case 0x136a20u: goto label_136a20;
        case 0x136a24u: goto label_136a24;
        case 0x136a28u: goto label_136a28;
        case 0x136a2cu: goto label_136a2c;
        case 0x136a30u: goto label_136a30;
        case 0x136a34u: goto label_136a34;
        case 0x136a38u: goto label_136a38;
        case 0x136a3cu: goto label_136a3c;
        case 0x136a40u: goto label_136a40;
        case 0x136a44u: goto label_136a44;
        case 0x136a48u: goto label_136a48;
        case 0x136a4cu: goto label_136a4c;
        case 0x136a50u: goto label_136a50;
        case 0x136a54u: goto label_136a54;
        case 0x136a58u: goto label_136a58;
        case 0x136a5cu: goto label_136a5c;
        case 0x136a60u: goto label_136a60;
        case 0x136a64u: goto label_136a64;
        case 0x136a68u: goto label_136a68;
        case 0x136a6cu: goto label_136a6c;
        case 0x136a70u: goto label_136a70;
        case 0x136a74u: goto label_136a74;
        case 0x136a78u: goto label_136a78;
        case 0x136a7cu: goto label_136a7c;
        case 0x136a80u: goto label_136a80;
        case 0x136a84u: goto label_136a84;
        default: break;
    }

    ctx->pc = 0x1363e8u;

label_1363e8:
    // 0x1363e8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1363e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1363ec:
    // 0x1363ec: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1363ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_1363f0:
    // 0x1363f0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1363f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1363f4:
    // 0x1363f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1363f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1363f8:
    // 0x1363f8: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1363f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_1363fc:
    // 0x1363fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1363fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_136400:
    // 0x136400: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x136400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_136404:
    // 0x136404: 0x268401e0  addiu       $a0, $s4, 0x1E0
    ctx->pc = 0x136404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 480));
label_136408:
    // 0x136408: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x136408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_13640c:
    // 0x13640c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x13640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_136410:
    // 0x136410: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x136410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_136414:
    // 0x136414: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x136414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_136418:
    // 0x136418: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x136418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_13641c:
    // 0x13641c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x13641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_136420:
    // 0x136420: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x136420u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_136424:
    // 0x136424: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x136424u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_136428:
    // 0x136428: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x136428u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_13642c:
    // 0x13642c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x13642cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_136430:
    // 0x136430: 0xc0e409a  jal         func_390268
label_136434:
    if (ctx->pc == 0x136434u) {
        ctx->pc = 0x136434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136430u;
        // 0x136434: 0xafa50090  sw          $a1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136438u;
        goto label_136438;
    }
    ctx->pc = 0x136430u;
    SET_GPR_U32(ctx, 31, 0x136438u);
    ctx->pc = 0x136434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136430u;
    // 0x136434: 0xafa50090  sw          $a1, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x136430u, 0x136438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136438u;
label_136438:
    // 0x136438: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x136438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13643c:
    // 0x13643c: 0xc0e409a  jal         func_390268
label_136440:
    if (ctx->pc == 0x136440u) {
        ctx->pc = 0x136440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13643Cu;
        // 0x136440: 0x268401e4  addiu       $a0, $s4, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136444u;
        goto label_136444;
    }
    ctx->pc = 0x13643Cu;
    SET_GPR_U32(ctx, 31, 0x136444u);
    ctx->pc = 0x136440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13643Cu;
    // 0x136440: 0x268401e4  addiu       $a0, $s4, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13643Cu, 0x136444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136444u;
label_136444:
    // 0x136444: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_136448:
    if (ctx->pc == 0x136448u) {
        ctx->pc = 0x136448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136444u;
        // 0x136448: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13644Cu;
        goto label_13644c;
    }
    ctx->pc = 0x136444u;
    {
        const bool branch_taken_0x136444 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x136448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136444u;
        // 0x136448: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136444) {
            ctx->pc = 0x13645Cu;
            goto label_13645c;
        }
    }
    ctx->pc = 0x13644Cu;
label_13644c:
    // 0x13644c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136450:
    // 0x136450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136454:
    // 0x136454: 0x1000017b  b           . + 4 + (0x17B << 2)
label_136458:
    if (ctx->pc == 0x136458u) {
        ctx->pc = 0x136458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136454u;
        // 0x136458: 0xae830258  sw          $v1, 0x258($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13645Cu;
        goto label_13645c;
    }
    ctx->pc = 0x136454u;
    {
        const bool branch_taken_0x136454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136454u;
        // 0x136458: 0xae830258  sw          $v1, 0x258($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136454) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x13645Cu;
label_13645c:
    // 0x13645c: 0x26d20090  addiu       $s2, $s6, 0x90
    ctx->pc = 0x13645cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
label_136460:
    // 0x136460: 0xc6800208  lwc1        $f0, 0x208($s4)
    ctx->pc = 0x136460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136464:
    // 0x136464: 0x86500002  lh          $s0, 0x2($s2)
    ctx->pc = 0x136464u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_136468:
    // 0x136468: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x136468u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
label_13646c:
    // 0x13646c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13646cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_136470:
    // 0x136470: 0x26314b00  addiu       $s1, $s1, 0x4B00
    ctx->pc = 0x136470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
label_136474:
    // 0x136474: 0x46160028  max.s       $f0, $f0, $f22
    ctx->pc = 0x136474u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[22]);
label_136478:
    // 0x136478: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x136478u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_13647c:
    // 0x13647c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x13647cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_136480:
    // 0x136480: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x136480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_136484:
    // 0x136484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136488:
    // 0x136488: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x136488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13648c:
    // 0x13648c: 0x460c0329  min.s       $f12, $f0, $f12
    ctx->pc = 0x13648cu;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[12]);
label_136490:
    // 0x136490: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x136490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_136494:
    // 0x136494: 0xc136b24  jal         func_4DAC90
label_136498:
    if (ctx->pc == 0x136498u) {
        ctx->pc = 0x136498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136494u;
        // 0x136498: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13649Cu;
        goto label_13649c;
    }
    ctx->pc = 0x136494u;
    SET_GPR_U32(ctx, 31, 0x13649Cu);
    ctx->pc = 0x136498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136494u;
    // 0x136498: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136494u, 0x13649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13649Cu;
label_13649c:
    // 0x13649c: 0x26930220  addiu       $s3, $s4, 0x220
    ctx->pc = 0x13649cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 544));
label_1364a0:
    // 0x1364a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1364a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1364a4:
    // 0x1364a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1364a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1364a8:
    // 0x1364a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1364a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1364ac:
    // 0x1364ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1364acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1364b0:
    // 0x1364b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1364b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1364b4:
    // 0x1364b4: 0xc136b18  jal         func_4DAC60
label_1364b8:
    if (ctx->pc == 0x1364B8u) {
        ctx->pc = 0x1364B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B4u;
        // 0x1364b8: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364BCu;
        goto label_1364bc;
    }
    ctx->pc = 0x1364B4u;
    SET_GPR_U32(ctx, 31, 0x1364BCu);
    ctx->pc = 0x1364B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364B4u;
    // 0x1364b8: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1364B4u, 0x1364BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1364BCu;
label_1364bc:
    // 0x1364bc: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x1364bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_1364c0:
    // 0x1364c0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1364c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1364c4:
    // 0x1364c4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1364c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1364c8:
    // 0x1364c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1364c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1364cc:
    // 0x1364cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1364ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1364d0:
    // 0x1364d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1364d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1364d4:
    // 0x1364d4: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x1364d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1364d8:
    // 0x1364d8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1364dc:
    // 0x1364dc: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1364dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1364e0:
    // 0x1364e0: 0xc0cd8c2  jal         func_336308
label_1364e4:
    if (ctx->pc == 0x1364E4u) {
        ctx->pc = 0x1364E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E0u;
        // 0x1364e4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364E8u;
        goto label_1364e8;
    }
    ctx->pc = 0x1364E0u;
    SET_GPR_U32(ctx, 31, 0x1364E8u);
    ctx->pc = 0x1364E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364E0u;
    // 0x1364e4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x1364E0u, 0x1364E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1364E8u;
label_1364e8:
    // 0x1364e8: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x1364e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1364ec:
    // 0x1364ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1364ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1364f0:
    // 0x1364f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1364f4:
    // 0x1364f4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1364f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1364f8:
    // 0x1364f8: 0xc0cd8ec  jal         func_3363B0
label_1364fc:
    if (ctx->pc == 0x1364FCu) {
        ctx->pc = 0x1364FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364F8u;
        // 0x1364fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136500u;
        goto label_136500;
    }
    ctx->pc = 0x1364F8u;
    SET_GPR_U32(ctx, 31, 0x136500u);
    ctx->pc = 0x1364FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364F8u;
    // 0x1364fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1364F8u, 0x136500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136500u;
label_136500:
    // 0x136500: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x136500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136504:
    // 0x136504: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x136504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_136508:
    // 0x136508: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x136508u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13650c:
    // 0x13650c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_136510:
    // 0x136510: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_136514:
    // 0x136514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136518:
    // 0x136518: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x136518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13651c:
    // 0x13651c: 0xc4d48df4  lwc1        $f20, -0x720C($a2)
    ctx->pc = 0x13651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294938100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_136520:
    // 0x136520: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x136520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_136524:
    // 0x136524: 0x7e830210  sq          $v1, 0x210($s4)
    ctx->pc = 0x136524u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 528), GPR_VEC(ctx, 3));
label_136528:
    // 0x136528: 0x7e820220  sq          $v0, 0x220($s4)
    ctx->pc = 0x136528u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 544), GPR_VEC(ctx, 2));
label_13652c:
    // 0x13652c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13652cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_136530:
    // 0x136530: 0xc136b24  jal         func_4DAC90
label_136534:
    if (ctx->pc == 0x136534u) {
        ctx->pc = 0x136534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136530u;
        // 0x136534: 0xe6800254  swc1        $f0, 0x254($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 596), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136538u;
        goto label_136538;
    }
    ctx->pc = 0x136530u;
    SET_GPR_U32(ctx, 31, 0x136538u);
    ctx->pc = 0x136534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136530u;
    // 0x136534: 0xe6800254  swc1        $f0, 0x254($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 596), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136530u, 0x136538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136538u;
label_136538:
    // 0x136538: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x136538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13653c:
    // 0x13653c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_136540:
    // 0x136540: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x136540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_136544:
    // 0x136544: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x136544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_136548:
    // 0x136548: 0xc136b18  jal         func_4DAC60
label_13654c:
    if (ctx->pc == 0x13654Cu) {
        ctx->pc = 0x13654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136548u;
        // 0x13654c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136550u;
        goto label_136550;
    }
    ctx->pc = 0x136548u;
    SET_GPR_U32(ctx, 31, 0x136550u);
    ctx->pc = 0x13654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136548u;
    // 0x13654c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x136548u, 0x136550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136550u;
label_136550:
    // 0x136550: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x136550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_136554:
    // 0x136554: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x136554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136558:
    // 0x136558: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x136558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_13655c:
    // 0x13655c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13655cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_136560:
    // 0x136560: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x136560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_136564:
    // 0x136564: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x136564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_136568:
    // 0x136568: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x136568u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_13656c:
    // 0x13656c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x13656cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_136570:
    // 0x136570: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x136570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_136574:
    // 0x136574: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x136574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_136578:
    // 0x136578: 0xc04dd36  jal         func_1374D8
label_13657c:
    if (ctx->pc == 0x13657Cu) {
        ctx->pc = 0x13657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136578u;
        // 0x13657c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136580u;
        goto label_136580;
    }
    ctx->pc = 0x136578u;
    SET_GPR_U32(ctx, 31, 0x136580u);
    ctx->pc = 0x13657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136578u;
    // 0x13657c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1374D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1374D8u, 0x136578u, 0x136580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136580u;
label_136580:
    // 0x136580: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_136584:
    if (ctx->pc == 0x136584u) {
        ctx->pc = 0x136584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136580u;
        // 0x136584: 0xc6940254  lwc1        $f20, 0x254($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136588u;
        goto label_136588;
    }
    ctx->pc = 0x136580u;
    {
        const bool branch_taken_0x136580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136580) {
            ctx->pc = 0x136584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136580u;
            // 0x136584: 0xc6940254  lwc1        $f20, 0x254($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x136588u;
            goto label_136588;
        }
    }
    ctx->pc = 0x136588u;
label_136588:
    // 0x136588: 0xc68c0254  lwc1        $f12, 0x254($s4)
    ctx->pc = 0x136588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13658c:
    // 0x13658c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136590:
    // 0x136590: 0xc136b24  jal         func_4DAC90
label_136594:
    if (ctx->pc == 0x136594u) {
        ctx->pc = 0x136594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136590u;
        // 0x136594: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136598u;
        goto label_136598;
    }
    ctx->pc = 0x136590u;
    SET_GPR_U32(ctx, 31, 0x136598u);
    ctx->pc = 0x136594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136590u;
    // 0x136594: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136590u, 0x136598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136598u;
label_136598:
    // 0x136598: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x136598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13659c:
    // 0x13659c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1365a0:
    // 0x1365a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1365a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1365a4:
    // 0x1365a4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1365a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1365a8:
    // 0x1365a8: 0xc136afa  jal         func_4DABE8
label_1365ac:
    if (ctx->pc == 0x1365ACu) {
        ctx->pc = 0x1365ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365A8u;
        // 0x1365ac: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1365B0u;
        goto label_1365b0;
    }
    ctx->pc = 0x1365A8u;
    SET_GPR_U32(ctx, 31, 0x1365B0u);
    ctx->pc = 0x1365ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365A8u;
    // 0x1365ac: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1365A8u, 0x1365B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365B0u;
label_1365b0:
    // 0x1365b0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1365b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1365b4:
    // 0x1365b4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1365b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_1365b8:
    // 0x1365b8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1365b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1365bc:
    // 0x1365bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1365bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1365c0:
    // 0x1365c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1365c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1365c4:
    // 0x1365c4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1365c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1365c8:
    // 0x1365c8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1365c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_1365cc:
    // 0x1365cc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1365ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1365d0:
    // 0x1365d0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1365d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1365d4:
    // 0x1365d4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1365d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1365d8:
    // 0x1365d8: 0xc04dd36  jal         func_1374D8
label_1365dc:
    if (ctx->pc == 0x1365DCu) {
        ctx->pc = 0x1365DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365D8u;
        // 0x1365dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1365E0u;
        goto label_1365e0;
    }
    ctx->pc = 0x1365D8u;
    SET_GPR_U32(ctx, 31, 0x1365E0u);
    ctx->pc = 0x1365DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1365D8u;
    // 0x1365dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1374D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1374D8u, 0x1365D8u, 0x1365E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365E0u;
label_1365e0:
    // 0x1365e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1365e4:
    if (ctx->pc == 0x1365E4u) {
        ctx->pc = 0x1365E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365E0u;
        // 0x1365e4: 0xc6950254  lwc1        $f21, 0x254($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1365E8u;
        goto label_1365e8;
    }
    ctx->pc = 0x1365E0u;
    {
        const bool branch_taken_0x1365e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1365e0) {
            ctx->pc = 0x1365E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1365E0u;
            // 0x1365e4: 0xc6950254  lwc1        $f21, 0x254($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1365E8u;
            goto label_1365e8;
        }
    }
    ctx->pc = 0x1365E8u;
label_1365e8:
    // 0x1365e8: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x1365e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1365ec:
    // 0x1365ec: 0x0  nop
    ctx->pc = 0x1365ecu;
    // NOP
label_1365f0:
    // 0x1365f0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1365f4:
    if (ctx->pc == 0x1365F4u) {
        ctx->pc = 0x1365F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365F0u;
        // 0x1365f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1365F8u;
        goto label_1365f8;
    }
    ctx->pc = 0x1365F0u;
    {
        const bool branch_taken_0x1365f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1365f0) {
            ctx->pc = 0x1365F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1365F0u;
            // 0x1365f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13660Cu;
            goto label_13660c;
        }
    }
    ctx->pc = 0x1365F8u;
label_1365f8:
    // 0x1365f8: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x1365f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1365fc:
    // 0x1365fc: 0x0  nop
    ctx->pc = 0x1365fcu;
    // NOP
label_136600:
    // 0x136600: 0x45010110  bc1t        . + 4 + (0x110 << 2)
label_136604:
    if (ctx->pc == 0x136604u) {
        ctx->pc = 0x136604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136600u;
        // 0x136604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136608u;
        goto label_136608;
    }
    ctx->pc = 0x136600u;
    {
        const bool branch_taken_0x136600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136600u;
        // 0x136604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136600) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x136608u;
label_136608:
    // 0x136608: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x136608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_13660c:
    // 0x13660c: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x13660cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136610:
    // 0x136610: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x136610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_136614:
    // 0x136614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136618:
    // 0x136618: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_13661c:
    if (ctx->pc == 0x13661Cu) {
        ctx->pc = 0x13661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136618u;
        // 0x13661c: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136620u;
        goto label_136620;
    }
    ctx->pc = 0x136618u;
    {
        const bool branch_taken_0x136618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136618u;
        // 0x13661c: 0x8c620048  lw          $v0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136618) {
            ctx->pc = 0x136624u;
            goto label_136624;
        }
    }
    ctx->pc = 0x136620u;
label_136620:
    // 0x136620: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x136620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_136624:
    // 0x136624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_136628:
    // 0x136628: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x136628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_13662c:
    // 0x13662c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_136630:
    if (ctx->pc == 0x136630u) {
        ctx->pc = 0x136630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13662Cu;
        // 0x136630: 0xc6800244  lwc1        $f0, 0x244($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136634u;
        goto label_136634;
    }
    ctx->pc = 0x13662Cu;
    {
        const bool branch_taken_0x13662c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13662c) {
            ctx->pc = 0x136630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13662Cu;
            // 0x136630: 0xc6800244  lwc1        $f0, 0x244($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x136648u;
            goto label_136648;
        }
    }
    ctx->pc = 0x136634u;
label_136634:
    // 0x136634: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x136634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136638:
    // 0x136638: 0x0  nop
    ctx->pc = 0x136638u;
    // NOP
label_13663c:
    // 0x13663c: 0x45000037  bc1f        . + 4 + (0x37 << 2)
label_136640:
    if (ctx->pc == 0x136640u) {
        ctx->pc = 0x136640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13663Cu;
        // 0x136640: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136644u;
        goto label_136644;
    }
    ctx->pc = 0x13663Cu;
    {
        const bool branch_taken_0x13663c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13663Cu;
        // 0x136640: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13663c) {
            ctx->pc = 0x13671Cu;
            goto label_13671c;
        }
    }
    ctx->pc = 0x136644u;
label_136644:
    // 0x136644: 0xc6800244  lwc1        $f0, 0x244($s4)
    ctx->pc = 0x136644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136648:
    // 0x136648: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x136648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_13664c:
    // 0x13664c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x13664cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_136650:
    // 0x136650: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x136650u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_136654:
    // 0x136654: 0x10000035  b           . + 4 + (0x35 << 2)
label_136658:
    if (ctx->pc == 0x136658u) {
        ctx->pc = 0x136658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136654u;
        // 0x136658: 0xe6800244  swc1        $f0, 0x244($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13665Cu;
        goto label_13665c;
    }
    ctx->pc = 0x136654u;
    {
        const bool branch_taken_0x136654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136654u;
        // 0x136658: 0xe6800244  swc1        $f0, 0x244($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136654) {
            ctx->pc = 0x13672Cu;
            goto label_13672c;
        }
    }
    ctx->pc = 0x13665Cu;
label_13665c:
    // 0x13665c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136660:
    // 0x136660: 0xc68c0254  lwc1        $f12, 0x254($s4)
    ctx->pc = 0x136660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_136664:
    // 0x136664: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x136664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_136668:
    // 0x136668: 0x863001b8  lh          $s0, 0x1B8($s1)
    ctx->pc = 0x136668u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 440)));
label_13666c:
    // 0x13666c: 0x263101b8  addiu       $s1, $s1, 0x1B8
    ctx->pc = 0x13666cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
label_136670:
    // 0x136670: 0xc136b24  jal         func_4DAC90
label_136674:
    if (ctx->pc == 0x136674u) {
        ctx->pc = 0x136674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136670u;
        // 0x136674: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136678u;
        goto label_136678;
    }
    ctx->pc = 0x136670u;
    SET_GPR_U32(ctx, 31, 0x136678u);
    ctx->pc = 0x136674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136670u;
    // 0x136674: 0x2908021  addu        $s0, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136670u, 0x136678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136678u;
label_136678:
    // 0x136678: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x136678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13667c:
    // 0x13667c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136680:
    // 0x136680: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x136680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_136684:
    // 0x136684: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x136684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_136688:
    // 0x136688: 0xc136b18  jal         func_4DAC60
label_13668c:
    if (ctx->pc == 0x13668Cu) {
        ctx->pc = 0x13668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136688u;
        // 0x13668c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136690u;
        goto label_136690;
    }
    ctx->pc = 0x136688u;
    SET_GPR_U32(ctx, 31, 0x136690u);
    ctx->pc = 0x13668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136688u;
    // 0x13668c: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x136688u, 0x136690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136690u;
label_136690:
    // 0x136690: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x136690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_136694:
    // 0x136694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136698:
    // 0x136698: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x136698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13669c:
    // 0x13669c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x13669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_1366a0:
    // 0x1366a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1366a4:
    if (ctx->pc == 0x1366A4u) {
        ctx->pc = 0x1366A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366A0u;
        // 0x1366a4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1366A8u;
        goto label_1366a8;
    }
    ctx->pc = 0x1366A0u;
    {
        const bool branch_taken_0x1366a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366A0u;
        // 0x1366a4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366a0) {
            ctx->pc = 0x1366F0u;
            goto label_1366f0;
        }
    }
    ctx->pc = 0x1366A8u;
label_1366a8:
    // 0x1366a8: 0xc68c0254  lwc1        $f12, 0x254($s4)
    ctx->pc = 0x1366a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1366ac:
    // 0x1366ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1366acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1366b0:
    // 0x1366b0: 0xc136b24  jal         func_4DAC90
label_1366b4:
    if (ctx->pc == 0x1366B4u) {
        ctx->pc = 0x1366B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366B0u;
        // 0x1366b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1366B8u;
        goto label_1366b8;
    }
    ctx->pc = 0x1366B0u;
    SET_GPR_U32(ctx, 31, 0x1366B8u);
    ctx->pc = 0x1366B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366B0u;
    // 0x1366b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1366B0u, 0x1366B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366B8u;
label_1366b8:
    // 0x1366b8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1366b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1366bc:
    // 0x1366bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1366bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1366c0:
    // 0x1366c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1366c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1366c4:
    // 0x1366c4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1366c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1366c8:
    // 0x1366c8: 0xc136b18  jal         func_4DAC60
label_1366cc:
    if (ctx->pc == 0x1366CCu) {
        ctx->pc = 0x1366CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366C8u;
        // 0x1366cc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1366D0u;
        goto label_1366d0;
    }
    ctx->pc = 0x1366C8u;
    SET_GPR_U32(ctx, 31, 0x1366D0u);
    ctx->pc = 0x1366CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366C8u;
    // 0x1366cc: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1366C8u, 0x1366D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366D0u;
label_1366d0:
    // 0x1366d0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1366d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1366d4:
    // 0x1366d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1366d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1366d8:
    // 0x1366d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1366d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1366dc:
    // 0x1366dc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1366dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1366e0:
    // 0x1366e0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1366e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1366e4:
    // 0x1366e4: 0x846401b8  lh          $a0, 0x1B8($v1)
    ctx->pc = 0x1366e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 440)));
label_1366e8:
    // 0x1366e8: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x1366e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_1366ec:
    // 0x1366ec: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1366ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1366f0:
    // 0x1366f0: 0x40f809  jalr        $v0
label_1366f4:
    if (ctx->pc == 0x1366F4u) {
        ctx->pc = 0x1366F8u;
        goto label_1366f8;
    }
    ctx->pc = 0x1366F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1366F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1366F0u, 0x1366F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1366F8u;
label_1366f8:
    // 0x1366f8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1366f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1366fc:
    // 0x1366fc: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1366fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_136700:
    // 0x136700: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x136700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_136704:
    // 0x136704: 0x40f809  jalr        $v0
label_136708:
    if (ctx->pc == 0x136708u) {
        ctx->pc = 0x136708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136704u;
        // 0x136708: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13670Cu;
        goto label_13670c;
    }
    ctx->pc = 0x136704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13670Cu);
        ctx->pc = 0x136708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136704u;
        // 0x136708: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136704u, 0x13670Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13670Cu;
label_13670c:
    // 0x13670c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x13670cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_136710:
    // 0x136710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136714:
    // 0x136714: 0x100000cb  b           . + 4 + (0xCB << 2)
label_136718:
    if (ctx->pc == 0x136718u) {
        ctx->pc = 0x136718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136714u;
        // 0x136718: 0x7e8301f0  sq          $v1, 0x1F0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 496), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13671Cu;
        goto label_13671c;
    }
    ctx->pc = 0x136714u;
    {
        const bool branch_taken_0x136714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136714u;
        // 0x136718: 0x7e8301f0  sq          $v1, 0x1F0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 496), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136714) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x13671Cu;
label_13671c:
    // 0x13671c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13671cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_136720:
    // 0x136720: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136724:
    // 0x136724: 0xc136b24  jal         func_4DAC90
label_136728:
    if (ctx->pc == 0x136728u) {
        ctx->pc = 0x136728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136724u;
        // 0x136728: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13672Cu;
        goto label_13672c;
    }
    ctx->pc = 0x136724u;
    SET_GPR_U32(ctx, 31, 0x13672Cu);
    ctx->pc = 0x136728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136724u;
    // 0x136728: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x136724u, 0x13672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13672Cu;
label_13672c:
    // 0x13672c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13672cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136730:
    // 0x136730: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x136730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_136734:
    // 0x136734: 0x0  nop
    ctx->pc = 0x136734u;
    // NOP
label_136738:
    // 0x136738: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x136738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13673c:
    // 0x13673c: 0xc136b24  jal         func_4DAC90
label_136740:
    if (ctx->pc == 0x136740u) {
        ctx->pc = 0x136740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13673Cu;
        // 0x136740: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136744u;
        goto label_136744;
    }
    ctx->pc = 0x13673Cu;
    SET_GPR_U32(ctx, 31, 0x136744u);
    ctx->pc = 0x136740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13673Cu;
    // 0x136740: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x13673Cu, 0x136744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136744u;
label_136744:
    // 0x136744: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x136744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_136748:
    // 0x136748: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x136748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_13674c:
    // 0x13674c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_136750:
    // 0x136750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136754:
    // 0x136754: 0x7e820220  sq          $v0, 0x220($s4)
    ctx->pc = 0x136754u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 544), GPR_VEC(ctx, 2));
label_136758:
    // 0x136758: 0xe6800254  swc1        $f0, 0x254($s4)
    ctx->pc = 0x136758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 596), bits); }
label_13675c:
    // 0x13675c: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_136760:
    if (ctx->pc == 0x136760u) {
        ctx->pc = 0x136760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13675Cu;
        // 0x136760: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136764u;
        goto label_136764;
    }
    ctx->pc = 0x13675Cu;
    {
        const bool branch_taken_0x13675c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13675Cu;
        // 0x136760: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13675c) {
            ctx->pc = 0x136888u;
            goto label_136888;
        }
    }
    ctx->pc = 0x136764u;
label_136764:
    // 0x136764: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x136764u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_136768:
    // 0x136768: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13676c:
    // 0x13676c: 0x2604b888  addiu       $a0, $s0, -0x4778
    ctx->pc = 0x13676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
label_136770:
    // 0x136770: 0xc0cd4fc  jal         func_3353F0
label_136774:
    if (ctx->pc == 0x136774u) {
        ctx->pc = 0x136774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136770u;
        // 0x136774: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136778u;
        goto label_136778;
    }
    ctx->pc = 0x136770u;
    SET_GPR_U32(ctx, 31, 0x136778u);
    ctx->pc = 0x136774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136770u;
    // 0x136774: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x136770u, 0x136778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136778u;
label_136778:
    // 0x136778: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x136778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13677c:
    // 0x13677c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x13677cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_136780:
    // 0x136780: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_136784:
    if (ctx->pc == 0x136784u) {
        ctx->pc = 0x136784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136780u;
        // 0x136784: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136788u;
        goto label_136788;
    }
    ctx->pc = 0x136780u;
    {
        const bool branch_taken_0x136780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136780u;
        // 0x136784: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136780) {
            ctx->pc = 0x1367F8u;
            goto label_1367f8;
        }
    }
    ctx->pc = 0x136788u;
label_136788:
    // 0x136788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13678c:
    // 0x13678c: 0x24428e00  addiu       $v0, $v0, -0x7200
    ctx->pc = 0x13678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938112));
label_136790:
    // 0x136790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x136790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_136794:
    // 0x136794: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x136794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_136798:
    // 0x136798: 0x800008  jr          $a0
label_13679c:
    if (ctx->pc == 0x13679Cu) {
        ctx->pc = 0x1367A0u;
        goto label_1367a0;
    }
    ctx->pc = 0x136798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1367A0u: goto label_1367a0;
            case 0x1367B4u: goto label_1367b4;
            case 0x1367C8u: goto label_1367c8;
            case 0x1367DCu: goto label_1367dc;
            case 0x1367E4u: goto label_1367e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136798u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1367A0u;
label_1367a0:
    // 0x1367a0: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1367a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
label_1367a4:
    // 0x1367a4: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x1367a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_1367a8:
    // 0x1367a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1367a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1367ac:
    // 0x1367ac: 0x10000012  b           . + 4 + (0x12 << 2)
label_1367b0:
    if (ctx->pc == 0x1367B0u) {
        ctx->pc = 0x1367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ACu;
        // 0x1367b0: 0xe6800250  swc1        $f0, 0x250($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367B4u;
        goto label_1367b4;
    }
    ctx->pc = 0x1367ACu;
    {
        const bool branch_taken_0x1367ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ACu;
        // 0x1367b0: 0xe6800250  swc1        $f0, 0x250($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367ac) {
            ctx->pc = 0x1367F8u;
            goto label_1367f8;
        }
    }
    ctx->pc = 0x1367B4u;
label_1367b4:
    // 0x1367b4: 0x3c013e95  lui         $at, 0x3E95
    ctx->pc = 0x1367b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16021 << 16));
label_1367b8:
    // 0x1367b8: 0x34213b8e  ori         $at, $at, 0x3B8E
    ctx->pc = 0x1367b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15246);
label_1367bc:
    // 0x1367bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1367bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1367c0:
    // 0x1367c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1367c4:
    if (ctx->pc == 0x1367C4u) {
        ctx->pc = 0x1367C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367C0u;
        // 0x1367c4: 0xe6800250  swc1        $f0, 0x250($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367C8u;
        goto label_1367c8;
    }
    ctx->pc = 0x1367C0u;
    {
        const bool branch_taken_0x1367c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367C0u;
        // 0x1367c4: 0xe6800250  swc1        $f0, 0x250($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367c0) {
            ctx->pc = 0x1367F8u;
            goto label_1367f8;
        }
    }
    ctx->pc = 0x1367C8u;
label_1367c8:
    // 0x1367c8: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x1367c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
label_1367cc:
    // 0x1367cc: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x1367ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_1367d0:
    // 0x1367d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1367d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1367d4:
    // 0x1367d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1367d8:
    if (ctx->pc == 0x1367D8u) {
        ctx->pc = 0x1367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367D4u;
        // 0x1367d8: 0xe6800250  swc1        $f0, 0x250($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367DCu;
        goto label_1367dc;
    }
    ctx->pc = 0x1367D4u;
    {
        const bool branch_taken_0x1367d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367D4u;
        // 0x1367d8: 0xe6800250  swc1        $f0, 0x250($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367d4) {
            ctx->pc = 0x1367F8u;
            goto label_1367f8;
        }
    }
    ctx->pc = 0x1367DCu;
label_1367dc:
    // 0x1367dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1367e0:
    if (ctx->pc == 0x1367E0u) {
        ctx->pc = 0x1367E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367DCu;
        // 0x1367e0: 0xae800250  sw          $zero, 0x250($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1367E4u;
        goto label_1367e4;
    }
    ctx->pc = 0x1367DCu;
    {
        const bool branch_taken_0x1367dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367DCu;
        // 0x1367e0: 0xae800250  sw          $zero, 0x250($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367dc) {
            ctx->pc = 0x1367F8u;
            goto label_1367f8;
        }
    }
    ctx->pc = 0x1367E4u;
label_1367e4:
    // 0x1367e4: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x1367e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_1367e8:
    // 0x1367e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1367e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1367ec:
    // 0x1367ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1367ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1367f0:
    // 0x1367f0: 0x0  nop
    ctx->pc = 0x1367f0u;
    // NOP
label_1367f4:
    // 0x1367f4: 0xe6800250  swc1        $f0, 0x250($s4)
    ctx->pc = 0x1367f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
label_1367f8:
    // 0x1367f8: 0x2604b888  addiu       $a0, $s0, -0x4778
    ctx->pc = 0x1367f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949000));
label_1367fc:
    // 0x1367fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1367fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136800:
    // 0x136800: 0xc0cd4fc  jal         func_3353F0
label_136804:
    if (ctx->pc == 0x136804u) {
        ctx->pc = 0x136804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136800u;
        // 0x136804: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136808u;
        goto label_136808;
    }
    ctx->pc = 0x136800u;
    SET_GPR_U32(ctx, 31, 0x136808u);
    ctx->pc = 0x136804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136800u;
    // 0x136804: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x136800u, 0x136808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136808u;
label_136808:
    // 0x136808: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x136808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13680c:
    // 0x13680c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x13680cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_136810:
    // 0x136810: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_136814:
    if (ctx->pc == 0x136814u) {
        ctx->pc = 0x136814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136810u;
        // 0x136814: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136818u;
        goto label_136818;
    }
    ctx->pc = 0x136810u;
    {
        const bool branch_taken_0x136810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136810u;
        // 0x136814: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136810) {
            ctx->pc = 0x13689Cu;
            goto label_13689c;
        }
    }
    ctx->pc = 0x136818u;
label_136818:
    // 0x136818: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13681c:
    // 0x13681c: 0x24428e20  addiu       $v0, $v0, -0x71E0
    ctx->pc = 0x13681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
label_136820:
    // 0x136820: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x136820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_136824:
    // 0x136824: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x136824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_136828:
    // 0x136828: 0x800008  jr          $a0
label_13682c:
    if (ctx->pc == 0x13682Cu) {
        ctx->pc = 0x136830u;
        goto label_136830;
    }
    ctx->pc = 0x136828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136830u: goto label_136830;
            case 0x136844u: goto label_136844;
            case 0x136858u: goto label_136858;
            case 0x136860u: goto label_136860;
            case 0x136874u: goto label_136874;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136828u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x136830u;
label_136830:
    // 0x136830: 0x3c01bec4  lui         $at, 0xBEC4
    ctx->pc = 0x136830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48836 << 16));
label_136834:
    // 0x136834: 0x3421980a  ori         $at, $at, 0x980A
    ctx->pc = 0x136834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38922);
label_136838:
    // 0x136838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13683c:
    // 0x13683c: 0x10000017  b           . + 4 + (0x17 << 2)
label_136840:
    if (ctx->pc == 0x136840u) {
        ctx->pc = 0x136840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13683Cu;
        // 0x136840: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136844u;
        goto label_136844;
    }
    ctx->pc = 0x13683Cu;
    {
        const bool branch_taken_0x13683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13683Cu;
        // 0x136840: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13683c) {
            ctx->pc = 0x13689Cu;
            goto label_13689c;
        }
    }
    ctx->pc = 0x136844u;
label_136844:
    // 0x136844: 0x3c013ebb  lui         $at, 0x3EBB
    ctx->pc = 0x136844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16059 << 16));
label_136848:
    // 0x136848: 0x3421a867  ori         $at, $at, 0xA867
    ctx->pc = 0x136848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43111);
label_13684c:
    // 0x13684c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13684cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136850:
    // 0x136850: 0x10000012  b           . + 4 + (0x12 << 2)
label_136854:
    if (ctx->pc == 0x136854u) {
        ctx->pc = 0x136854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136850u;
        // 0x136854: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136858u;
        goto label_136858;
    }
    ctx->pc = 0x136850u;
    {
        const bool branch_taken_0x136850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136850u;
        // 0x136854: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136850) {
            ctx->pc = 0x13689Cu;
            goto label_13689c;
        }
    }
    ctx->pc = 0x136858u;
label_136858:
    // 0x136858: 0x10000010  b           . + 4 + (0x10 << 2)
label_13685c:
    if (ctx->pc == 0x13685Cu) {
        ctx->pc = 0x13685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136858u;
        // 0x13685c: 0xae80024c  sw          $zero, 0x24C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136860u;
        goto label_136860;
    }
    ctx->pc = 0x136858u;
    {
        const bool branch_taken_0x136858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136858u;
        // 0x13685c: 0xae80024c  sw          $zero, 0x24C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136858) {
            ctx->pc = 0x13689Cu;
            goto label_13689c;
        }
    }
    ctx->pc = 0x136860u;
label_136860:
    // 0x136860: 0x3c013e56  lui         $at, 0x3E56
    ctx->pc = 0x136860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15958 << 16));
label_136864:
    // 0x136864: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x136864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_136868:
    // 0x136868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13686c:
    // 0x13686c: 0x1000000b  b           . + 4 + (0xB << 2)
label_136870:
    if (ctx->pc == 0x136870u) {
        ctx->pc = 0x136870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13686Cu;
        // 0x136870: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136874u;
        goto label_136874;
    }
    ctx->pc = 0x13686Cu;
    {
        const bool branch_taken_0x13686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13686Cu;
        // 0x136870: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13686c) {
            ctx->pc = 0x13689Cu;
            goto label_13689c;
        }
    }
    ctx->pc = 0x136874u;
label_136874:
    // 0x136874: 0x3c01be7a  lui         $at, 0xBE7A
    ctx->pc = 0x136874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48762 << 16));
label_136878:
    // 0x136878: 0x342135de  ori         $at, $at, 0x35DE
    ctx->pc = 0x136878u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13790);
label_13687c:
    // 0x13687c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13687cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136880:
    // 0x136880: 0x10000006  b           . + 4 + (0x6 << 2)
label_136884:
    if (ctx->pc == 0x136884u) {
        ctx->pc = 0x136884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136880u;
        // 0x136884: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136888u;
        goto label_136888;
    }
    ctx->pc = 0x136880u;
    {
        const bool branch_taken_0x136880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136880u;
        // 0x136884: 0xe680024c  swc1        $f0, 0x24C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136880) {
            ctx->pc = 0x13689Cu;
            goto label_13689c;
        }
    }
    ctx->pc = 0x136888u;
label_136888:
    // 0x136888: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x136888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
label_13688c:
    // 0x13688c: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x13688cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
label_136890:
    // 0x136890: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x136890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_136894:
    // 0x136894: 0xae80024c  sw          $zero, 0x24C($s4)
    ctx->pc = 0x136894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 588), GPR_U32(ctx, 0));
label_136898:
    // 0x136898: 0xe6800250  swc1        $f0, 0x250($s4)
    ctx->pc = 0x136898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 592), bits); }
label_13689c:
    // 0x13689c: 0xc6940250  lwc1        $f20, 0x250($s4)
    ctx->pc = 0x13689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1368a0:
    // 0x1368a0: 0xc681024c  lwc1        $f1, 0x24C($s4)
    ctx->pc = 0x1368a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1368a4:
    // 0x1368a4: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x1368a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1368a8:
    // 0x1368a8: 0x0  nop
    ctx->pc = 0x1368a8u;
    // NOP
label_1368ac:
    // 0x1368ac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1368b0:
    if (ctx->pc == 0x1368B0u) {
        ctx->pc = 0x1368B4u;
        goto label_1368b4;
    }
    ctx->pc = 0x1368ACu;
    {
        const bool branch_taken_0x1368ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368ac) {
            ctx->pc = 0x1368CCu;
            goto label_1368cc;
        }
    }
    ctx->pc = 0x1368B4u;
label_1368b4:
    // 0x1368b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1368b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1368b8:
    // 0x1368b8: 0x0  nop
    ctx->pc = 0x1368b8u;
    // NOP
label_1368bc:
    // 0x1368bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1368bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1368c0:
    // 0x1368c0: 0x0  nop
    ctx->pc = 0x1368c0u;
    // NOP
label_1368c4:
    // 0x1368c4: 0x4503ff65  bc1tl       . + 4 + (-0x9B << 2)
label_1368c8:
    if (ctx->pc == 0x1368C8u) {
        ctx->pc = 0x1368C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368C4u;
        // 0x1368c8: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368CCu;
        goto label_1368cc;
    }
    ctx->pc = 0x1368C4u;
    {
        const bool branch_taken_0x1368c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368c4) {
            ctx->pc = 0x1368C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1368C4u;
            // 0x1368c8: 0x8e910000  lw          $s1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13665Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13665c;
        }
    }
    ctx->pc = 0x1368CCu;
label_1368cc:
    // 0x1368cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1368ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1368d0:
    // 0x1368d0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1368d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1368d4:
    // 0x1368d4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1368d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1368d8:
    // 0x1368d8: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1368d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1368dc:
    // 0x1368dc: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1368dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_1368e0:
    // 0x1368e0: 0xc12e310  jal         func_4B8C40
label_1368e4:
    if (ctx->pc == 0x1368E4u) {
        ctx->pc = 0x1368E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368E0u;
        // 0x1368e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368E8u;
        goto label_1368e8;
    }
    ctx->pc = 0x1368E0u;
    SET_GPR_U32(ctx, 31, 0x1368E8u);
    ctx->pc = 0x1368E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368E0u;
    // 0x1368e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1368E0u, 0x1368E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368E8u;
label_1368e8:
    // 0x1368e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1368e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1368ec:
    // 0x1368ec: 0xc12e29c  jal         func_4B8A70
label_1368f0:
    if (ctx->pc == 0x1368F0u) {
        ctx->pc = 0x1368F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368ECu;
        // 0x1368f0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368F4u;
        goto label_1368f4;
    }
    ctx->pc = 0x1368ECu;
    SET_GPR_U32(ctx, 31, 0x1368F4u);
    ctx->pc = 0x1368F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1368ECu;
    // 0x1368f0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1368ECu, 0x1368F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368F4u;
label_1368f4:
    // 0x1368f4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1368f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1368f8:
    // 0x1368f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1368f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1368fc:
    // 0x1368fc: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x1368fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_136900:
    // 0x136900: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x136900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_136904:
    // 0x136904: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x136904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_136908:
    // 0x136908: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x136908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13690c:
    // 0x13690c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13690cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_136910:
    // 0x136910: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x136910u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_136914:
    // 0x136914: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x136914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_136918:
    // 0x136918: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x136918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13691c:
    // 0x13691c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13691cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_136920:
    // 0x136920: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x136920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_136924:
    // 0x136924: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x136924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136928:
    // 0x136928: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x136928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13692c:
    // 0x13692c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x13692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136930:
    // 0x136930: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x136930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_136934:
    // 0x136934: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x136934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_136938:
    // 0x136938: 0xc136b30  jal         func_4DACC0
label_13693c:
    if (ctx->pc == 0x13693Cu) {
        ctx->pc = 0x13693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136938u;
        // 0x13693c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136940u;
        goto label_136940;
    }
    ctx->pc = 0x136938u;
    SET_GPR_U32(ctx, 31, 0x136940u);
    ctx->pc = 0x13693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136938u;
    // 0x13693c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x136938u, 0x136940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136940u;
label_136940:
    // 0x136940: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x136940u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_136944:
    // 0x136944: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x136944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_136948:
    // 0x136948: 0xc694024c  lwc1        $f20, 0x24C($s4)
    ctx->pc = 0x136948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13694c:
    // 0x13694c: 0x24831740  addiu       $v1, $a0, 0x1740
    ctx->pc = 0x13694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
label_136950:
    // 0x136950: 0x7e820220  sq          $v0, 0x220($s4)
    ctx->pc = 0x136950u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 544), GPR_VEC(ctx, 2));
label_136954:
    // 0x136954: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x136954u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_136958:
    // 0x136958: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x136958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_13695c:
    // 0x13695c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13695cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_136960:
    // 0x136960: 0xc12e310  jal         func_4B8C40
label_136964:
    if (ctx->pc == 0x136964u) {
        ctx->pc = 0x136964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136960u;
        // 0x136964: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136968u;
        goto label_136968;
    }
    ctx->pc = 0x136960u;
    SET_GPR_U32(ctx, 31, 0x136968u);
    ctx->pc = 0x136964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136960u;
    // 0x136964: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x136960u, 0x136968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136968u;
label_136968:
    // 0x136968: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x136968u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13696c:
    // 0x13696c: 0xc12e29c  jal         func_4B8A70
label_136970:
    if (ctx->pc == 0x136970u) {
        ctx->pc = 0x136970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13696Cu;
        // 0x136970: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136974u;
        goto label_136974;
    }
    ctx->pc = 0x13696Cu;
    SET_GPR_U32(ctx, 31, 0x136974u);
    ctx->pc = 0x136970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13696Cu;
    // 0x136970: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x13696Cu, 0x136974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136974u;
label_136974:
    // 0x136974: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x136974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_136978:
    // 0x136978: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x136978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13697c:
    // 0x13697c: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x13697cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_136980:
    // 0x136980: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x136980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_136984:
    // 0x136984: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x136984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_136988:
    // 0x136988: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x136988u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13698c:
    // 0x13698c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13698cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_136990:
    // 0x136990: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x136990u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_136994:
    // 0x136994: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x136994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_136998:
    // 0x136998: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x136998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_13699c:
    // 0x13699c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13699cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1369a0:
    // 0x1369a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x1369a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_1369a4:
    // 0x1369a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1369a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1369a8:
    // 0x1369a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1369a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1369ac:
    // 0x1369ac: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1369acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1369b0:
    // 0x1369b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1369b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1369b4:
    // 0x1369b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1369b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1369b8:
    // 0x1369b8: 0xc136b30  jal         func_4DACC0
label_1369bc:
    if (ctx->pc == 0x1369BCu) {
        ctx->pc = 0x1369BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369B8u;
        // 0x1369bc: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369C0u;
        goto label_1369c0;
    }
    ctx->pc = 0x1369B8u;
    SET_GPR_U32(ctx, 31, 0x1369C0u);
    ctx->pc = 0x1369BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369B8u;
    // 0x1369bc: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x1369B8u, 0x1369C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369C0u;
label_1369c0:
    // 0x1369c0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1369c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1369c4:
    // 0x1369c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1369c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1369c8:
    // 0x1369c8: 0xc68c0254  lwc1        $f12, 0x254($s4)
    ctx->pc = 0x1369c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1369cc:
    // 0x1369cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1369ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1369d0:
    // 0x1369d0: 0x7e820220  sq          $v0, 0x220($s4)
    ctx->pc = 0x1369d0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 544), GPR_VEC(ctx, 2));
label_1369d4:
    // 0x1369d4: 0xc136b24  jal         func_4DAC90
label_1369d8:
    if (ctx->pc == 0x1369D8u) {
        ctx->pc = 0x1369D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369D4u;
        // 0x1369d8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369DCu;
        goto label_1369dc;
    }
    ctx->pc = 0x1369D4u;
    SET_GPR_U32(ctx, 31, 0x1369DCu);
    ctx->pc = 0x1369D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369D4u;
    // 0x1369d8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x1369D4u, 0x1369DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369DCu;
label_1369dc:
    // 0x1369dc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1369dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1369e0:
    // 0x1369e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1369e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1369e4:
    // 0x1369e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1369e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1369e8:
    // 0x1369e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1369e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1369ec:
    // 0x1369ec: 0xc136b18  jal         func_4DAC60
label_1369f0:
    if (ctx->pc == 0x1369F0u) {
        ctx->pc = 0x1369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369ECu;
        // 0x1369f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369F4u;
        goto label_1369f4;
    }
    ctx->pc = 0x1369ECu;
    SET_GPR_U32(ctx, 31, 0x1369F4u);
    ctx->pc = 0x1369F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369ECu;
    // 0x1369f0: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1369ECu, 0x1369F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369F4u;
label_1369f4:
    // 0x1369f4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1369f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1369f8:
    // 0x1369f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1369f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1369fc:
    // 0x1369fc: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x1369fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
label_136a00:
    // 0x136a00: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x136a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_136a04:
    // 0x136a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x136a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136a08:
    // 0x136a08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136a0c:
    // 0x136a0c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x136a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_136a10:
    // 0x136a10: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x136a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_136a14:
    // 0x136a14: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x136a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_136a18:
    // 0x136a18: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x136a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_136a1c:
    // 0x136a1c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x136a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_136a20:
    // 0x136a20: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x136a20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_136a24:
    // 0x136a24: 0xc04dd36  jal         func_1374D8
label_136a28:
    if (ctx->pc == 0x136A28u) {
        ctx->pc = 0x136A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A24u;
        // 0x136a28: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A2Cu;
        goto label_136a2c;
    }
    ctx->pc = 0x136A24u;
    SET_GPR_U32(ctx, 31, 0x136A2Cu);
    ctx->pc = 0x136A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A24u;
    // 0x136a28: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1374D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1374D8u, 0x136A24u, 0x136A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A2Cu;
label_136a2c:
    // 0x136a2c: 0x1440ff1e  bnez        $v0, . + 4 + (-0xE2 << 2)
label_136a30:
    if (ctx->pc == 0x136A30u) {
        ctx->pc = 0x136A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A2Cu;
        // 0x136a30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A34u;
        goto label_136a34;
    }
    ctx->pc = 0x136A2Cu;
    {
        const bool branch_taken_0x136a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A2Cu;
        // 0x136a30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a2c) {
            ctx->pc = 0x1366A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1366a8;
        }
    }
    ctx->pc = 0x136A34u;
label_136a34:
    // 0x136a34: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x136a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_136a38:
    // 0x136a38: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
label_136a3c:
    if (ctx->pc == 0x136A3Cu) {
        ctx->pc = 0x136A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A38u;
        // 0x136a3c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A40u;
        goto label_136a40;
    }
    ctx->pc = 0x136A38u;
    {
        const bool branch_taken_0x136a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A38u;
        // 0x136a3c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a38) {
            ctx->pc = 0x136738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136738;
        }
    }
    ctx->pc = 0x136A40u;
label_136a40:
    // 0x136a40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136a44:
    // 0x136a44: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x136a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_136a48:
    // 0x136a48: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x136a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_136a4c:
    // 0x136a4c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x136a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_136a50:
    // 0x136a50: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x136a50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_136a54:
    // 0x136a54: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x136a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_136a58:
    // 0x136a58: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x136a58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_136a5c:
    // 0x136a5c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x136a5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_136a60:
    // 0x136a60: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x136a60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_136a64:
    // 0x136a64: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x136a64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_136a68:
    // 0x136a68: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x136a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_136a6c:
    // 0x136a6c: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x136a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_136a70:
    // 0x136a70: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x136a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_136a74:
    // 0x136a74: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x136a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_136a78:
    // 0x136a78: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x136a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_136a7c:
    // 0x136a7c: 0x3e00008  jr          $ra
label_136a80:
    if (ctx->pc == 0x136A80u) {
        ctx->pc = 0x136A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A7Cu;
        // 0x136a80: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A84u;
        goto label_136a84;
    }
    ctx->pc = 0x136A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A7Cu;
        // 0x136a80: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136A84u;
label_136a84:
    // 0x136a84: 0x0  nop
    ctx->pc = 0x136a84u;
    // NOP
    ctx->pc = 0x136a88u;
}
