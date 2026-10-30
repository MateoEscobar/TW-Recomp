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

// Function: sub_00193298
// Address: 0x193298 - 0x1939b8
void sub_00193298_0x193298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193298_0x193298");
#endif

    switch (ctx->pc) {
        case 0x193298u: goto label_193298;
        case 0x19329cu: goto label_19329c;
        case 0x1932a0u: goto label_1932a0;
        case 0x1932a4u: goto label_1932a4;
        case 0x1932a8u: goto label_1932a8;
        case 0x1932acu: goto label_1932ac;
        case 0x1932b0u: goto label_1932b0;
        case 0x1932b4u: goto label_1932b4;
        case 0x1932b8u: goto label_1932b8;
        case 0x1932bcu: goto label_1932bc;
        case 0x1932c0u: goto label_1932c0;
        case 0x1932c4u: goto label_1932c4;
        case 0x1932c8u: goto label_1932c8;
        case 0x1932ccu: goto label_1932cc;
        case 0x1932d0u: goto label_1932d0;
        case 0x1932d4u: goto label_1932d4;
        case 0x1932d8u: goto label_1932d8;
        case 0x1932dcu: goto label_1932dc;
        case 0x1932e0u: goto label_1932e0;
        case 0x1932e4u: goto label_1932e4;
        case 0x1932e8u: goto label_1932e8;
        case 0x1932ecu: goto label_1932ec;
        case 0x1932f0u: goto label_1932f0;
        case 0x1932f4u: goto label_1932f4;
        case 0x1932f8u: goto label_1932f8;
        case 0x1932fcu: goto label_1932fc;
        case 0x193300u: goto label_193300;
        case 0x193304u: goto label_193304;
        case 0x193308u: goto label_193308;
        case 0x19330cu: goto label_19330c;
        case 0x193310u: goto label_193310;
        case 0x193314u: goto label_193314;
        case 0x193318u: goto label_193318;
        case 0x19331cu: goto label_19331c;
        case 0x193320u: goto label_193320;
        case 0x193324u: goto label_193324;
        case 0x193328u: goto label_193328;
        case 0x19332cu: goto label_19332c;
        case 0x193330u: goto label_193330;
        case 0x193334u: goto label_193334;
        case 0x193338u: goto label_193338;
        case 0x19333cu: goto label_19333c;
        case 0x193340u: goto label_193340;
        case 0x193344u: goto label_193344;
        case 0x193348u: goto label_193348;
        case 0x19334cu: goto label_19334c;
        case 0x193350u: goto label_193350;
        case 0x193354u: goto label_193354;
        case 0x193358u: goto label_193358;
        case 0x19335cu: goto label_19335c;
        case 0x193360u: goto label_193360;
        case 0x193364u: goto label_193364;
        case 0x193368u: goto label_193368;
        case 0x19336cu: goto label_19336c;
        case 0x193370u: goto label_193370;
        case 0x193374u: goto label_193374;
        case 0x193378u: goto label_193378;
        case 0x19337cu: goto label_19337c;
        case 0x193380u: goto label_193380;
        case 0x193384u: goto label_193384;
        case 0x193388u: goto label_193388;
        case 0x19338cu: goto label_19338c;
        case 0x193390u: goto label_193390;
        case 0x193394u: goto label_193394;
        case 0x193398u: goto label_193398;
        case 0x19339cu: goto label_19339c;
        case 0x1933a0u: goto label_1933a0;
        case 0x1933a4u: goto label_1933a4;
        case 0x1933a8u: goto label_1933a8;
        case 0x1933acu: goto label_1933ac;
        case 0x1933b0u: goto label_1933b0;
        case 0x1933b4u: goto label_1933b4;
        case 0x1933b8u: goto label_1933b8;
        case 0x1933bcu: goto label_1933bc;
        case 0x1933c0u: goto label_1933c0;
        case 0x1933c4u: goto label_1933c4;
        case 0x1933c8u: goto label_1933c8;
        case 0x1933ccu: goto label_1933cc;
        case 0x1933d0u: goto label_1933d0;
        case 0x1933d4u: goto label_1933d4;
        case 0x1933d8u: goto label_1933d8;
        case 0x1933dcu: goto label_1933dc;
        case 0x1933e0u: goto label_1933e0;
        case 0x1933e4u: goto label_1933e4;
        case 0x1933e8u: goto label_1933e8;
        case 0x1933ecu: goto label_1933ec;
        case 0x1933f0u: goto label_1933f0;
        case 0x1933f4u: goto label_1933f4;
        case 0x1933f8u: goto label_1933f8;
        case 0x1933fcu: goto label_1933fc;
        case 0x193400u: goto label_193400;
        case 0x193404u: goto label_193404;
        case 0x193408u: goto label_193408;
        case 0x19340cu: goto label_19340c;
        case 0x193410u: goto label_193410;
        case 0x193414u: goto label_193414;
        case 0x193418u: goto label_193418;
        case 0x19341cu: goto label_19341c;
        case 0x193420u: goto label_193420;
        case 0x193424u: goto label_193424;
        case 0x193428u: goto label_193428;
        case 0x19342cu: goto label_19342c;
        case 0x193430u: goto label_193430;
        case 0x193434u: goto label_193434;
        case 0x193438u: goto label_193438;
        case 0x19343cu: goto label_19343c;
        case 0x193440u: goto label_193440;
        case 0x193444u: goto label_193444;
        case 0x193448u: goto label_193448;
        case 0x19344cu: goto label_19344c;
        case 0x193450u: goto label_193450;
        case 0x193454u: goto label_193454;
        case 0x193458u: goto label_193458;
        case 0x19345cu: goto label_19345c;
        case 0x193460u: goto label_193460;
        case 0x193464u: goto label_193464;
        case 0x193468u: goto label_193468;
        case 0x19346cu: goto label_19346c;
        case 0x193470u: goto label_193470;
        case 0x193474u: goto label_193474;
        case 0x193478u: goto label_193478;
        case 0x19347cu: goto label_19347c;
        case 0x193480u: goto label_193480;
        case 0x193484u: goto label_193484;
        case 0x193488u: goto label_193488;
        case 0x19348cu: goto label_19348c;
        case 0x193490u: goto label_193490;
        case 0x193494u: goto label_193494;
        case 0x193498u: goto label_193498;
        case 0x19349cu: goto label_19349c;
        case 0x1934a0u: goto label_1934a0;
        case 0x1934a4u: goto label_1934a4;
        case 0x1934a8u: goto label_1934a8;
        case 0x1934acu: goto label_1934ac;
        case 0x1934b0u: goto label_1934b0;
        case 0x1934b4u: goto label_1934b4;
        case 0x1934b8u: goto label_1934b8;
        case 0x1934bcu: goto label_1934bc;
        case 0x1934c0u: goto label_1934c0;
        case 0x1934c4u: goto label_1934c4;
        case 0x1934c8u: goto label_1934c8;
        case 0x1934ccu: goto label_1934cc;
        case 0x1934d0u: goto label_1934d0;
        case 0x1934d4u: goto label_1934d4;
        case 0x1934d8u: goto label_1934d8;
        case 0x1934dcu: goto label_1934dc;
        case 0x1934e0u: goto label_1934e0;
        case 0x1934e4u: goto label_1934e4;
        case 0x1934e8u: goto label_1934e8;
        case 0x1934ecu: goto label_1934ec;
        case 0x1934f0u: goto label_1934f0;
        case 0x1934f4u: goto label_1934f4;
        case 0x1934f8u: goto label_1934f8;
        case 0x1934fcu: goto label_1934fc;
        case 0x193500u: goto label_193500;
        case 0x193504u: goto label_193504;
        case 0x193508u: goto label_193508;
        case 0x19350cu: goto label_19350c;
        case 0x193510u: goto label_193510;
        case 0x193514u: goto label_193514;
        case 0x193518u: goto label_193518;
        case 0x19351cu: goto label_19351c;
        case 0x193520u: goto label_193520;
        case 0x193524u: goto label_193524;
        case 0x193528u: goto label_193528;
        case 0x19352cu: goto label_19352c;
        case 0x193530u: goto label_193530;
        case 0x193534u: goto label_193534;
        case 0x193538u: goto label_193538;
        case 0x19353cu: goto label_19353c;
        case 0x193540u: goto label_193540;
        case 0x193544u: goto label_193544;
        case 0x193548u: goto label_193548;
        case 0x19354cu: goto label_19354c;
        case 0x193550u: goto label_193550;
        case 0x193554u: goto label_193554;
        case 0x193558u: goto label_193558;
        case 0x19355cu: goto label_19355c;
        case 0x193560u: goto label_193560;
        case 0x193564u: goto label_193564;
        case 0x193568u: goto label_193568;
        case 0x19356cu: goto label_19356c;
        case 0x193570u: goto label_193570;
        case 0x193574u: goto label_193574;
        case 0x193578u: goto label_193578;
        case 0x19357cu: goto label_19357c;
        case 0x193580u: goto label_193580;
        case 0x193584u: goto label_193584;
        case 0x193588u: goto label_193588;
        case 0x19358cu: goto label_19358c;
        case 0x193590u: goto label_193590;
        case 0x193594u: goto label_193594;
        case 0x193598u: goto label_193598;
        case 0x19359cu: goto label_19359c;
        case 0x1935a0u: goto label_1935a0;
        case 0x1935a4u: goto label_1935a4;
        case 0x1935a8u: goto label_1935a8;
        case 0x1935acu: goto label_1935ac;
        case 0x1935b0u: goto label_1935b0;
        case 0x1935b4u: goto label_1935b4;
        case 0x1935b8u: goto label_1935b8;
        case 0x1935bcu: goto label_1935bc;
        case 0x1935c0u: goto label_1935c0;
        case 0x1935c4u: goto label_1935c4;
        case 0x1935c8u: goto label_1935c8;
        case 0x1935ccu: goto label_1935cc;
        case 0x1935d0u: goto label_1935d0;
        case 0x1935d4u: goto label_1935d4;
        case 0x1935d8u: goto label_1935d8;
        case 0x1935dcu: goto label_1935dc;
        case 0x1935e0u: goto label_1935e0;
        case 0x1935e4u: goto label_1935e4;
        case 0x1935e8u: goto label_1935e8;
        case 0x1935ecu: goto label_1935ec;
        case 0x1935f0u: goto label_1935f0;
        case 0x1935f4u: goto label_1935f4;
        case 0x1935f8u: goto label_1935f8;
        case 0x1935fcu: goto label_1935fc;
        case 0x193600u: goto label_193600;
        case 0x193604u: goto label_193604;
        case 0x193608u: goto label_193608;
        case 0x19360cu: goto label_19360c;
        case 0x193610u: goto label_193610;
        case 0x193614u: goto label_193614;
        case 0x193618u: goto label_193618;
        case 0x19361cu: goto label_19361c;
        case 0x193620u: goto label_193620;
        case 0x193624u: goto label_193624;
        case 0x193628u: goto label_193628;
        case 0x19362cu: goto label_19362c;
        case 0x193630u: goto label_193630;
        case 0x193634u: goto label_193634;
        case 0x193638u: goto label_193638;
        case 0x19363cu: goto label_19363c;
        case 0x193640u: goto label_193640;
        case 0x193644u: goto label_193644;
        case 0x193648u: goto label_193648;
        case 0x19364cu: goto label_19364c;
        case 0x193650u: goto label_193650;
        case 0x193654u: goto label_193654;
        case 0x193658u: goto label_193658;
        case 0x19365cu: goto label_19365c;
        case 0x193660u: goto label_193660;
        case 0x193664u: goto label_193664;
        case 0x193668u: goto label_193668;
        case 0x19366cu: goto label_19366c;
        case 0x193670u: goto label_193670;
        case 0x193674u: goto label_193674;
        case 0x193678u: goto label_193678;
        case 0x19367cu: goto label_19367c;
        case 0x193680u: goto label_193680;
        case 0x193684u: goto label_193684;
        case 0x193688u: goto label_193688;
        case 0x19368cu: goto label_19368c;
        case 0x193690u: goto label_193690;
        case 0x193694u: goto label_193694;
        case 0x193698u: goto label_193698;
        case 0x19369cu: goto label_19369c;
        case 0x1936a0u: goto label_1936a0;
        case 0x1936a4u: goto label_1936a4;
        case 0x1936a8u: goto label_1936a8;
        case 0x1936acu: goto label_1936ac;
        case 0x1936b0u: goto label_1936b0;
        case 0x1936b4u: goto label_1936b4;
        case 0x1936b8u: goto label_1936b8;
        case 0x1936bcu: goto label_1936bc;
        case 0x1936c0u: goto label_1936c0;
        case 0x1936c4u: goto label_1936c4;
        case 0x1936c8u: goto label_1936c8;
        case 0x1936ccu: goto label_1936cc;
        case 0x1936d0u: goto label_1936d0;
        case 0x1936d4u: goto label_1936d4;
        case 0x1936d8u: goto label_1936d8;
        case 0x1936dcu: goto label_1936dc;
        case 0x1936e0u: goto label_1936e0;
        case 0x1936e4u: goto label_1936e4;
        case 0x1936e8u: goto label_1936e8;
        case 0x1936ecu: goto label_1936ec;
        case 0x1936f0u: goto label_1936f0;
        case 0x1936f4u: goto label_1936f4;
        case 0x1936f8u: goto label_1936f8;
        case 0x1936fcu: goto label_1936fc;
        case 0x193700u: goto label_193700;
        case 0x193704u: goto label_193704;
        case 0x193708u: goto label_193708;
        case 0x19370cu: goto label_19370c;
        case 0x193710u: goto label_193710;
        case 0x193714u: goto label_193714;
        case 0x193718u: goto label_193718;
        case 0x19371cu: goto label_19371c;
        case 0x193720u: goto label_193720;
        case 0x193724u: goto label_193724;
        case 0x193728u: goto label_193728;
        case 0x19372cu: goto label_19372c;
        case 0x193730u: goto label_193730;
        case 0x193734u: goto label_193734;
        case 0x193738u: goto label_193738;
        case 0x19373cu: goto label_19373c;
        case 0x193740u: goto label_193740;
        case 0x193744u: goto label_193744;
        case 0x193748u: goto label_193748;
        case 0x19374cu: goto label_19374c;
        case 0x193750u: goto label_193750;
        case 0x193754u: goto label_193754;
        case 0x193758u: goto label_193758;
        case 0x19375cu: goto label_19375c;
        case 0x193760u: goto label_193760;
        case 0x193764u: goto label_193764;
        case 0x193768u: goto label_193768;
        case 0x19376cu: goto label_19376c;
        case 0x193770u: goto label_193770;
        case 0x193774u: goto label_193774;
        case 0x193778u: goto label_193778;
        case 0x19377cu: goto label_19377c;
        case 0x193780u: goto label_193780;
        case 0x193784u: goto label_193784;
        case 0x193788u: goto label_193788;
        case 0x19378cu: goto label_19378c;
        case 0x193790u: goto label_193790;
        case 0x193794u: goto label_193794;
        case 0x193798u: goto label_193798;
        case 0x19379cu: goto label_19379c;
        case 0x1937a0u: goto label_1937a0;
        case 0x1937a4u: goto label_1937a4;
        case 0x1937a8u: goto label_1937a8;
        case 0x1937acu: goto label_1937ac;
        case 0x1937b0u: goto label_1937b0;
        case 0x1937b4u: goto label_1937b4;
        case 0x1937b8u: goto label_1937b8;
        case 0x1937bcu: goto label_1937bc;
        case 0x1937c0u: goto label_1937c0;
        case 0x1937c4u: goto label_1937c4;
        case 0x1937c8u: goto label_1937c8;
        case 0x1937ccu: goto label_1937cc;
        case 0x1937d0u: goto label_1937d0;
        case 0x1937d4u: goto label_1937d4;
        case 0x1937d8u: goto label_1937d8;
        case 0x1937dcu: goto label_1937dc;
        case 0x1937e0u: goto label_1937e0;
        case 0x1937e4u: goto label_1937e4;
        case 0x1937e8u: goto label_1937e8;
        case 0x1937ecu: goto label_1937ec;
        case 0x1937f0u: goto label_1937f0;
        case 0x1937f4u: goto label_1937f4;
        case 0x1937f8u: goto label_1937f8;
        case 0x1937fcu: goto label_1937fc;
        case 0x193800u: goto label_193800;
        case 0x193804u: goto label_193804;
        case 0x193808u: goto label_193808;
        case 0x19380cu: goto label_19380c;
        case 0x193810u: goto label_193810;
        case 0x193814u: goto label_193814;
        case 0x193818u: goto label_193818;
        case 0x19381cu: goto label_19381c;
        case 0x193820u: goto label_193820;
        case 0x193824u: goto label_193824;
        case 0x193828u: goto label_193828;
        case 0x19382cu: goto label_19382c;
        case 0x193830u: goto label_193830;
        case 0x193834u: goto label_193834;
        case 0x193838u: goto label_193838;
        case 0x19383cu: goto label_19383c;
        case 0x193840u: goto label_193840;
        case 0x193844u: goto label_193844;
        case 0x193848u: goto label_193848;
        case 0x19384cu: goto label_19384c;
        case 0x193850u: goto label_193850;
        case 0x193854u: goto label_193854;
        case 0x193858u: goto label_193858;
        case 0x19385cu: goto label_19385c;
        case 0x193860u: goto label_193860;
        case 0x193864u: goto label_193864;
        case 0x193868u: goto label_193868;
        case 0x19386cu: goto label_19386c;
        case 0x193870u: goto label_193870;
        case 0x193874u: goto label_193874;
        case 0x193878u: goto label_193878;
        case 0x19387cu: goto label_19387c;
        case 0x193880u: goto label_193880;
        case 0x193884u: goto label_193884;
        case 0x193888u: goto label_193888;
        case 0x19388cu: goto label_19388c;
        case 0x193890u: goto label_193890;
        case 0x193894u: goto label_193894;
        case 0x193898u: goto label_193898;
        case 0x19389cu: goto label_19389c;
        case 0x1938a0u: goto label_1938a0;
        case 0x1938a4u: goto label_1938a4;
        case 0x1938a8u: goto label_1938a8;
        case 0x1938acu: goto label_1938ac;
        case 0x1938b0u: goto label_1938b0;
        case 0x1938b4u: goto label_1938b4;
        case 0x1938b8u: goto label_1938b8;
        case 0x1938bcu: goto label_1938bc;
        case 0x1938c0u: goto label_1938c0;
        case 0x1938c4u: goto label_1938c4;
        case 0x1938c8u: goto label_1938c8;
        case 0x1938ccu: goto label_1938cc;
        case 0x1938d0u: goto label_1938d0;
        case 0x1938d4u: goto label_1938d4;
        case 0x1938d8u: goto label_1938d8;
        case 0x1938dcu: goto label_1938dc;
        case 0x1938e0u: goto label_1938e0;
        case 0x1938e4u: goto label_1938e4;
        case 0x1938e8u: goto label_1938e8;
        case 0x1938ecu: goto label_1938ec;
        case 0x1938f0u: goto label_1938f0;
        case 0x1938f4u: goto label_1938f4;
        case 0x1938f8u: goto label_1938f8;
        case 0x1938fcu: goto label_1938fc;
        case 0x193900u: goto label_193900;
        case 0x193904u: goto label_193904;
        case 0x193908u: goto label_193908;
        case 0x19390cu: goto label_19390c;
        case 0x193910u: goto label_193910;
        case 0x193914u: goto label_193914;
        case 0x193918u: goto label_193918;
        case 0x19391cu: goto label_19391c;
        case 0x193920u: goto label_193920;
        case 0x193924u: goto label_193924;
        case 0x193928u: goto label_193928;
        case 0x19392cu: goto label_19392c;
        case 0x193930u: goto label_193930;
        case 0x193934u: goto label_193934;
        case 0x193938u: goto label_193938;
        case 0x19393cu: goto label_19393c;
        case 0x193940u: goto label_193940;
        case 0x193944u: goto label_193944;
        case 0x193948u: goto label_193948;
        case 0x19394cu: goto label_19394c;
        case 0x193950u: goto label_193950;
        case 0x193954u: goto label_193954;
        case 0x193958u: goto label_193958;
        case 0x19395cu: goto label_19395c;
        case 0x193960u: goto label_193960;
        case 0x193964u: goto label_193964;
        case 0x193968u: goto label_193968;
        case 0x19396cu: goto label_19396c;
        case 0x193970u: goto label_193970;
        case 0x193974u: goto label_193974;
        case 0x193978u: goto label_193978;
        case 0x19397cu: goto label_19397c;
        case 0x193980u: goto label_193980;
        case 0x193984u: goto label_193984;
        case 0x193988u: goto label_193988;
        case 0x19398cu: goto label_19398c;
        case 0x193990u: goto label_193990;
        case 0x193994u: goto label_193994;
        case 0x193998u: goto label_193998;
        case 0x19399cu: goto label_19399c;
        case 0x1939a0u: goto label_1939a0;
        case 0x1939a4u: goto label_1939a4;
        case 0x1939a8u: goto label_1939a8;
        case 0x1939acu: goto label_1939ac;
        case 0x1939b0u: goto label_1939b0;
        case 0x1939b4u: goto label_1939b4;
        default: break;
    }

    ctx->pc = 0x193298u;

label_193298:
    // 0x193298: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_19329c:
    // 0x19329c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1932a0:
    // 0x1932a0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1932a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1932a4:
    // 0x1932a4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1932a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1932a8:
    // 0x1932a8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1932a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1932ac:
    // 0x1932ac: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1932acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1932b0:
    // 0x1932b0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1932b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1932b4:
    // 0x1932b4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1932b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1932b8:
    // 0x1932b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1932b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1932bc:
    // 0x1932bc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1932bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1932c0:
    // 0x1932c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1932c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1932c4:
    // 0x1932c4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1932c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1932c8:
    // 0x1932c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1932c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1932cc:
    // 0x1932cc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1932ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1932d0:
    // 0x1932d0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1932d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1932d4:
    // 0x1932d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1932d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1932d8:
    // 0x1932d8: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x1932d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1932dc:
    // 0x1932dc: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x1932dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1932e0:
    // 0x1932e0: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x1932e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1932e4:
    // 0x1932e4: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1932e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1932e8:
    // 0x1932e8: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1932e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1932ec:
    // 0x1932ec: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1932ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1932f0:
    // 0x1932f0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1932f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1932f4:
    // 0x1932f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1932f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1932f8:
    // 0x1932f8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1932fc:
    if (ctx->pc == 0x1932FCu) {
        ctx->pc = 0x1932FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932F8u;
        // 0x1932fc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193300u;
        goto label_193300;
    }
    ctx->pc = 0x1932F8u;
    {
        const bool branch_taken_0x1932f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1932FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932F8u;
        // 0x1932fc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932f8) {
            ctx->pc = 0x193334u;
            goto label_193334;
        }
    }
    ctx->pc = 0x193300u;
label_193300:
    // 0x193300: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_193304:
    // 0x193304: 0x8e22ce20  lw          $v0, -0x31E0($s1)
    ctx->pc = 0x193304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954528)));
label_193308:
    // 0x193308: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19330c:
    if (ctx->pc == 0x19330Cu) {
        ctx->pc = 0x19330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193308u;
        // 0x19330c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193310u;
        goto label_193310;
    }
    ctx->pc = 0x193308u;
    {
        const bool branch_taken_0x193308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193308u;
        // 0x19330c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193308) {
            ctx->pc = 0x193338u;
            goto label_193338;
        }
    }
    ctx->pc = 0x193310u;
label_193310:
    // 0x193310: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_193314:
    // 0x193314: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_193318:
    // 0x193318: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19331c:
    // 0x19331c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19331cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_193320:
    // 0x193320: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_193324:
    // 0x193324: 0x40f809  jalr        $v0
label_193328:
    if (ctx->pc == 0x193328u) {
        ctx->pc = 0x193328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193324u;
        // 0x193328: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19332Cu;
        goto label_19332c;
    }
    ctx->pc = 0x193324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19332Cu);
        ctx->pc = 0x193328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193324u;
        // 0x193328: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193324u, 0x19332Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19332Cu;
label_19332c:
    // 0x19332c: 0x10000010  b           . + 4 + (0x10 << 2)
label_193330:
    if (ctx->pc == 0x193330u) {
        ctx->pc = 0x193330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19332Cu;
        // 0x193330: 0xae22ce20  sw          $v0, -0x31E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294954528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193334u;
        goto label_193334;
    }
    ctx->pc = 0x19332Cu;
    {
        const bool branch_taken_0x19332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19332Cu;
        // 0x193330: 0xae22ce20  sw          $v0, -0x31E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294954528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19332c) {
            ctx->pc = 0x193370u;
            goto label_193370;
        }
    }
    ctx->pc = 0x193334u;
label_193334:
    // 0x193334: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x193334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_193338:
    // 0x193338: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_19333c:
    if (ctx->pc == 0x19333Cu) {
        ctx->pc = 0x19333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193338u;
        // 0x19333c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193340u;
        goto label_193340;
    }
    ctx->pc = 0x193338u;
    {
        const bool branch_taken_0x193338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x193338) {
            ctx->pc = 0x19333Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193338u;
            // 0x19333c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193374u;
            goto label_193374;
        }
    }
    ctx->pc = 0x193340u;
label_193340:
    // 0x193340: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x193340u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_193344:
    // 0x193344: 0x8e22ce24  lw          $v0, -0x31DC($s1)
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954532)));
label_193348:
    // 0x193348: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_19334c:
    if (ctx->pc == 0x19334Cu) {
        ctx->pc = 0x19334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193348u;
        // 0x19334c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193350u;
        goto label_193350;
    }
    ctx->pc = 0x193348u;
    {
        const bool branch_taken_0x193348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193348) {
            ctx->pc = 0x19334Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193348u;
            // 0x19334c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193374u;
            goto label_193374;
        }
    }
    ctx->pc = 0x193350u;
label_193350:
    // 0x193350: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x193350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_193354:
    // 0x193354: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x193354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_193358:
    // 0x193358: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x193358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19335c:
    // 0x19335c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19335cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_193360:
    // 0x193360: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x193360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_193364:
    // 0x193364: 0x40f809  jalr        $v0
label_193368:
    if (ctx->pc == 0x193368u) {
        ctx->pc = 0x193368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193364u;
        // 0x193368: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19336Cu;
        goto label_19336c;
    }
    ctx->pc = 0x193364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19336Cu);
        ctx->pc = 0x193368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193364u;
        // 0x193368: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193364u, 0x19336Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19336Cu;
label_19336c:
    // 0x19336c: 0xae22ce24  sw          $v0, -0x31DC($s1)
    ctx->pc = 0x19336cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954532), GPR_U32(ctx, 2));
label_193370:
    // 0x193370: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x193370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193374:
    // 0x193374: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x193374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_193378:
    // 0x193378: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x193378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_19337c:
    // 0x19337c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_193380:
    if (ctx->pc == 0x193380u) {
        ctx->pc = 0x193380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19337Cu;
        // 0x193380: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193384u;
        goto label_193384;
    }
    ctx->pc = 0x19337Cu;
    {
        const bool branch_taken_0x19337c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19337Cu;
        // 0x193380: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19337c) {
            ctx->pc = 0x19349Cu;
            goto label_19349c;
        }
    }
    ctx->pc = 0x193384u;
label_193384:
    // 0x193384: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x193384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_193388:
    // 0x193388: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19338c:
    // 0x19338c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_193390:
    // 0x193390: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x193390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_193394:
    // 0x193394: 0x40f809  jalr        $v0
label_193398:
    if (ctx->pc == 0x193398u) {
        ctx->pc = 0x193398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193394u;
        // 0x193398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19339Cu;
        goto label_19339c;
    }
    ctx->pc = 0x193394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19339Cu);
        ctx->pc = 0x193398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193394u;
        // 0x193398: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193394u, 0x19339Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19339Cu;
label_19339c:
    // 0x19339c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1933a0:
    // 0x1933a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1933a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1933a4:
    // 0x1933a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1933a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1933a8:
    // 0x1933a8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_1933ac:
    if (ctx->pc == 0x1933ACu) {
        ctx->pc = 0x1933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933A8u;
        // 0x1933ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1933B0u;
        goto label_1933b0;
    }
    ctx->pc = 0x1933A8u;
    {
        const bool branch_taken_0x1933a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1933a8) {
            ctx->pc = 0x1933ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1933A8u;
            // 0x1933ac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1933C4u;
            goto label_1933c4;
        }
    }
    ctx->pc = 0x1933B0u;
label_1933b0:
    // 0x1933b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1933b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1933b4:
    // 0x1933b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1933b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1933b8:
    // 0x1933b8: 0x8c45ce0c  lw          $a1, -0x31F4($v0)
    ctx->pc = 0x1933b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954508)));
label_1933bc:
    // 0x1933bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1933c0:
    if (ctx->pc == 0x1933C0u) {
        ctx->pc = 0x1933C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933BCu;
        // 0x1933c0: 0x8c62ce20  lw          $v0, -0x31E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1933C4u;
        goto label_1933c4;
    }
    ctx->pc = 0x1933BCu;
    {
        const bool branch_taken_0x1933bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933BCu;
        // 0x1933c0: 0x8c62ce20  lw          $v0, -0x31E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933bc) {
            ctx->pc = 0x1933D0u;
            goto label_1933d0;
        }
    }
    ctx->pc = 0x1933C4u;
label_1933c4:
    // 0x1933c4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1933c8:
    // 0x1933c8: 0x8c45ce10  lw          $a1, -0x31F0($v0)
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954512)));
label_1933cc:
    // 0x1933cc: 0x8c62ce24  lw          $v0, -0x31DC($v1)
    ctx->pc = 0x1933ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954532)));
label_1933d0:
    // 0x1933d0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1933d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1933d4:
    // 0x1933d4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1933d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1933d8:
    // 0x1933d8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_1933dc:
    if (ctx->pc == 0x1933DCu) {
        ctx->pc = 0x1933DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933D8u;
        // 0x1933dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1933E0u;
        goto label_1933e0;
    }
    ctx->pc = 0x1933D8u;
    {
        const bool branch_taken_0x1933d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1933d8) {
            ctx->pc = 0x1933DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1933D8u;
            // 0x1933dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193474u;
            goto label_193474;
        }
    }
    ctx->pc = 0x1933E0u;
label_1933e0:
    // 0x1933e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1933e4:
    // 0x1933e4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1933e8:
    if (ctx->pc == 0x1933E8u) {
        ctx->pc = 0x1933E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933E4u;
        // 0x1933e8: 0x2446ce14  addiu       $a2, $v0, -0x31EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954516));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1933ECu;
        goto label_1933ec;
    }
    ctx->pc = 0x1933E4u;
    {
        const bool branch_taken_0x1933e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1933E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933E4u;
        // 0x1933e8: 0x2446ce14  addiu       $a2, $v0, -0x31EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933e4) {
            ctx->pc = 0x193400u;
            goto label_193400;
        }
    }
    ctx->pc = 0x1933ECu;
label_1933ec:
    // 0x1933ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1933ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1933f0:
    // 0x1933f0: 0x0  nop
    ctx->pc = 0x1933f0u;
    // NOP
label_1933f4:
    // 0x1933f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1933f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1933f8:
    // 0x1933f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1933fc:
    if (ctx->pc == 0x1933FCu) {
        ctx->pc = 0x193400u;
        goto label_193400;
    }
    ctx->pc = 0x1933F8u;
    {
        const bool branch_taken_0x1933f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1933f8) {
            ctx->pc = 0x19341Cu;
            goto label_19341c;
        }
    }
    ctx->pc = 0x193400u;
label_193400:
    // 0x193400: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_193404:
    // 0x193404: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x193404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_193408:
    // 0x193408: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19340c:
    // 0x19340c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19340cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193410:
    // 0x193410: 0x0  nop
    ctx->pc = 0x193410u;
    // NOP
label_193414:
    // 0x193414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193418:
    // 0x193418: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19341c:
    // 0x19341c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_193420:
    if (ctx->pc == 0x193420u) {
        ctx->pc = 0x193420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19341Cu;
        // 0x193420: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193424u;
        goto label_193424;
    }
    ctx->pc = 0x19341Cu;
    {
        const bool branch_taken_0x19341c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x193420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19341Cu;
        // 0x193420: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19341c) {
            ctx->pc = 0x193438u;
            goto label_193438;
        }
    }
    ctx->pc = 0x193424u;
label_193424:
    // 0x193424: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x193424u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193428:
    // 0x193428: 0x0  nop
    ctx->pc = 0x193428u;
    // NOP
label_19342c:
    // 0x19342c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19342cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193430:
    // 0x193430: 0x10000007  b           . + 4 + (0x7 << 2)
label_193434:
    if (ctx->pc == 0x193434u) {
        ctx->pc = 0x193438u;
        goto label_193438;
    }
    ctx->pc = 0x193430u;
    {
        const bool branch_taken_0x193430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193430) {
            ctx->pc = 0x193450u;
            goto label_193450;
        }
    }
    ctx->pc = 0x193438u;
label_193438:
    // 0x193438: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x193438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_19343c:
    // 0x19343c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193440:
    // 0x193440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193444:
    // 0x193444: 0x0  nop
    ctx->pc = 0x193444u;
    // NOP
label_193448:
    // 0x193448: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19344c:
    // 0x19344c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19344cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_193450:
    // 0x193450: 0x0  nop
    ctx->pc = 0x193450u;
    // NOP
label_193454:
    // 0x193454: 0x0  nop
    ctx->pc = 0x193454u;
    // NOP
label_193458:
    // 0x193458: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x193458u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_19345c:
    // 0x19345c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_193460:
    // 0x193460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193464:
    // 0x193464: 0x0  nop
    ctx->pc = 0x193464u;
    // NOP
label_193468:
    // 0x193468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19346c:
    // 0x19346c: 0x1000000f  b           . + 4 + (0xF << 2)
label_193470:
    if (ctx->pc == 0x193470u) {
        ctx->pc = 0x193470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19346Cu;
        // 0x193470: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193474u;
        goto label_193474;
    }
    ctx->pc = 0x19346Cu;
    {
        const bool branch_taken_0x19346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19346Cu;
        // 0x193470: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19346c) {
            ctx->pc = 0x1934ACu;
            goto label_1934ac;
        }
    }
    ctx->pc = 0x193474u;
label_193474:
    // 0x193474: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x193474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_193478:
    // 0x193478: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_19347c:
    if (ctx->pc == 0x19347Cu) {
        ctx->pc = 0x19347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193478u;
        // 0x19347c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193480u;
        goto label_193480;
    }
    ctx->pc = 0x193478u;
    {
        const bool branch_taken_0x193478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193478u;
        // 0x19347c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193478) {
            ctx->pc = 0x19348Cu;
            goto label_19348c;
        }
    }
    ctx->pc = 0x193480u;
label_193480:
    // 0x193480: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x193480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_193484:
    // 0x193484: 0x10000002  b           . + 4 + (0x2 << 2)
label_193488:
    if (ctx->pc == 0x193488u) {
        ctx->pc = 0x193488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193484u;
        // 0x193488: 0xac40ce20  sw          $zero, -0x31E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19348Cu;
        goto label_19348c;
    }
    ctx->pc = 0x193484u;
    {
        const bool branch_taken_0x193484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193484u;
        // 0x193488: 0xac40ce20  sw          $zero, -0x31E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193484) {
            ctx->pc = 0x193490u;
            goto label_193490;
        }
    }
    ctx->pc = 0x19348Cu;
label_19348c:
    // 0x19348c: 0xac40ce24  sw          $zero, -0x31DC($v0)
    ctx->pc = 0x19348cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954532), GPR_U32(ctx, 0));
label_193490:
    // 0x193490: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x193490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_193494:
    // 0x193494: 0x10000134  b           . + 4 + (0x134 << 2)
label_193498:
    if (ctx->pc == 0x193498u) {
        ctx->pc = 0x193498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193494u;
        // 0x193498: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19349Cu;
        goto label_19349c;
    }
    ctx->pc = 0x193494u;
    {
        const bool branch_taken_0x193494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193494u;
        // 0x193498: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193494) {
            ctx->pc = 0x193968u;
            goto label_193968;
        }
    }
    ctx->pc = 0x19349Cu;
label_19349c:
    // 0x19349c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19349cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1934a0:
    // 0x1934a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1934a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1934a4:
    // 0x1934a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1934a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1934a8:
    // 0x1934a8: 0xe440ce14  swc1        $f0, -0x31EC($v0)
    ctx->pc = 0x1934a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954516), bits); }
label_1934ac:
    // 0x1934ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1934acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1934b0:
    // 0x1934b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1934b4:
    if (ctx->pc == 0x1934B4u) {
        ctx->pc = 0x1934B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934B0u;
        // 0x1934b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1934B8u;
        goto label_1934b8;
    }
    ctx->pc = 0x1934B0u;
    {
        const bool branch_taken_0x1934b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1934B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934B0u;
        // 0x1934b4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934b0) {
            ctx->pc = 0x1934C8u;
            goto label_1934c8;
        }
    }
    ctx->pc = 0x1934B8u;
label_1934b8:
    // 0x1934b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1934b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1934bc:
    // 0x1934bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1934bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1934c0:
    // 0x1934c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1934c4:
    if (ctx->pc == 0x1934C4u) {
        ctx->pc = 0x1934C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934C0u;
        // 0x1934c4: 0xc440ce18  lwc1        $f0, -0x31E8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1934C8u;
        goto label_1934c8;
    }
    ctx->pc = 0x1934C0u;
    {
        const bool branch_taken_0x1934c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1934C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934C0u;
        // 0x1934c4: 0xc440ce18  lwc1        $f0, -0x31E8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934c0) {
            ctx->pc = 0x1934D0u;
            goto label_1934d0;
        }
    }
    ctx->pc = 0x1934C8u;
label_1934c8:
    // 0x1934c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1934c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1934cc:
    // 0x1934cc: 0xc440ce1c  lwc1        $f0, -0x31E4($v0)
    ctx->pc = 0x1934ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1934d0:
    // 0x1934d0: 0xe460ce00  swc1        $f0, -0x3200($v1)
    ctx->pc = 0x1934d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954496), bits); }
label_1934d4:
    // 0x1934d4: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x1934d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1934d8:
    // 0x1934d8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1934d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1934dc:
    // 0x1934dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1934dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1934e0:
    // 0x1934e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1934e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1934e4:
    // 0x1934e4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1934e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1934e8:
    // 0x1934e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1934e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1934ec:
    // 0x1934ec: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1934ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1934f0:
    // 0x1934f0: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1934f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1934f4:
    // 0x1934f4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1934f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1934f8:
    // 0x1934f8: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x1934f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1934fc:
    // 0x1934fc: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x1934fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_193500:
    // 0x193500: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x193500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_193504:
    // 0x193504: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x193504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_193508:
    // 0x193508: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_19350c:
    if (ctx->pc == 0x19350Cu) {
        ctx->pc = 0x19350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193508u;
        // 0x19350c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193510u;
        goto label_193510;
    }
    ctx->pc = 0x193508u;
    {
        const bool branch_taken_0x193508 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193508u;
        // 0x19350c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193508) {
            ctx->pc = 0x193524u;
            goto label_193524;
        }
    }
    ctx->pc = 0x193510u;
label_193510:
    // 0x193510: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x193510u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193514:
    // 0x193514: 0x0  nop
    ctx->pc = 0x193514u;
    // NOP
label_193518:
    // 0x193518: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19351c:
    // 0x19351c: 0x10000008  b           . + 4 + (0x8 << 2)
label_193520:
    if (ctx->pc == 0x193520u) {
        ctx->pc = 0x193524u;
        goto label_193524;
    }
    ctx->pc = 0x19351Cu;
    {
        const bool branch_taken_0x19351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19351c) {
            ctx->pc = 0x193540u;
            goto label_193540;
        }
    }
    ctx->pc = 0x193524u;
label_193524:
    // 0x193524: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x193524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_193528:
    // 0x193528: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x193528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_19352c:
    // 0x19352c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193530:
    // 0x193530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193534:
    // 0x193534: 0x0  nop
    ctx->pc = 0x193534u;
    // NOP
label_193538:
    // 0x193538: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19353c:
    // 0x19353c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19353cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193540:
    // 0x193540: 0x0  nop
    ctx->pc = 0x193540u;
    // NOP
label_193544:
    // 0x193544: 0x0  nop
    ctx->pc = 0x193544u;
    // NOP
label_193548:
    // 0x193548: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x193548u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_19354c:
    // 0x19354c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19354cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_193550:
    // 0x193550: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193554:
    // 0x193554: 0x46032800  add.s       $f0, $f5, $f3
    ctx->pc = 0x193554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_193558:
    // 0x193558: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x193558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19355c:
    // 0x19355c: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
label_193560:
    if (ctx->pc == 0x193560u) {
        ctx->pc = 0x193560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19355Cu;
        // 0x193560: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193564u;
        goto label_193564;
    }
    ctx->pc = 0x19355Cu;
    {
        const bool branch_taken_0x19355c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x193560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19355Cu;
        // 0x193560: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19355c) {
            ctx->pc = 0x193578u;
            goto label_193578;
        }
    }
    ctx->pc = 0x193564u;
label_193564:
    // 0x193564: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x193564u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193568:
    // 0x193568: 0x0  nop
    ctx->pc = 0x193568u;
    // NOP
label_19356c:
    // 0x19356c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19356cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193570:
    // 0x193570: 0x10000008  b           . + 4 + (0x8 << 2)
label_193574:
    if (ctx->pc == 0x193574u) {
        ctx->pc = 0x193578u;
        goto label_193578;
    }
    ctx->pc = 0x193570u;
    {
        const bool branch_taken_0x193570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193570) {
            ctx->pc = 0x193594u;
            goto label_193594;
        }
    }
    ctx->pc = 0x193578u;
label_193578:
    // 0x193578: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x193578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_19357c:
    // 0x19357c: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x19357cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_193580:
    // 0x193580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_193584:
    // 0x193584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193588:
    // 0x193588: 0x0  nop
    ctx->pc = 0x193588u;
    // NOP
label_19358c:
    // 0x19358c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19358cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193590:
    // 0x193590: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193594:
    // 0x193594: 0x0  nop
    ctx->pc = 0x193594u;
    // NOP
label_193598:
    // 0x193598: 0x0  nop
    ctx->pc = 0x193598u;
    // NOP
label_19359c:
    // 0x19359c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19359cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1935a0:
    // 0x1935a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1935a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1935a4:
    // 0x1935a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1935a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1935a8:
    // 0x1935a8: 0x0  nop
    ctx->pc = 0x1935a8u;
    // NOP
label_1935ac:
    // 0x1935ac: 0x46002080  add.s       $f2, $f4, $f0
    ctx->pc = 0x1935acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1935b0:
    // 0x1935b0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1935b4:
    if (ctx->pc == 0x1935B4u) {
        ctx->pc = 0x1935B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935B0u;
        // 0x1935b4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1935B8u;
        goto label_1935b8;
    }
    ctx->pc = 0x1935B0u;
    {
        const bool branch_taken_0x1935b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1935B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935B0u;
        // 0x1935b4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935b0) {
            ctx->pc = 0x1935CCu;
            goto label_1935cc;
        }
    }
    ctx->pc = 0x1935B8u;
label_1935b8:
    // 0x1935b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1935b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1935bc:
    // 0x1935bc: 0x0  nop
    ctx->pc = 0x1935bcu;
    // NOP
label_1935c0:
    // 0x1935c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1935c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1935c4:
    // 0x1935c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1935c8:
    if (ctx->pc == 0x1935C8u) {
        ctx->pc = 0x1935CCu;
        goto label_1935cc;
    }
    ctx->pc = 0x1935C4u;
    {
        const bool branch_taken_0x1935c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935c4) {
            ctx->pc = 0x1935E8u;
            goto label_1935e8;
        }
    }
    ctx->pc = 0x1935CCu;
label_1935cc:
    // 0x1935cc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1935ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1935d0:
    // 0x1935d0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1935d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1935d4:
    // 0x1935d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1935d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1935d8:
    // 0x1935d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1935d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1935dc:
    // 0x1935dc: 0x0  nop
    ctx->pc = 0x1935dcu;
    // NOP
label_1935e0:
    // 0x1935e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1935e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1935e4:
    // 0x1935e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1935e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1935e8:
    // 0x1935e8: 0x0  nop
    ctx->pc = 0x1935e8u;
    // NOP
label_1935ec:
    // 0x1935ec: 0x0  nop
    ctx->pc = 0x1935ecu;
    // NOP
label_1935f0:
    // 0x1935f0: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x1935f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_1935f4:
    // 0x1935f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1935f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1935f8:
    // 0x1935f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1935f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1935fc:
    // 0x1935fc: 0x0  nop
    ctx->pc = 0x1935fcu;
    // NOP
label_193600:
    // 0x193600: 0x46002880  add.s       $f2, $f5, $f0
    ctx->pc = 0x193600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_193604:
    // 0x193604: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
label_193608:
    if (ctx->pc == 0x193608u) {
        ctx->pc = 0x193608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193604u;
        // 0x193608: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19360Cu;
        goto label_19360c;
    }
    ctx->pc = 0x193604u;
    {
        const bool branch_taken_0x193604 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x193608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193604u;
        // 0x193608: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193604) {
            ctx->pc = 0x193620u;
            goto label_193620;
        }
    }
    ctx->pc = 0x19360Cu;
label_19360c:
    // 0x19360c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x19360cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193610:
    // 0x193610: 0x0  nop
    ctx->pc = 0x193610u;
    // NOP
label_193614:
    // 0x193614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193618:
    // 0x193618: 0x10000008  b           . + 4 + (0x8 << 2)
label_19361c:
    if (ctx->pc == 0x19361Cu) {
        ctx->pc = 0x193620u;
        goto label_193620;
    }
    ctx->pc = 0x193618u;
    {
        const bool branch_taken_0x193618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193618) {
            ctx->pc = 0x19363Cu;
            goto label_19363c;
        }
    }
    ctx->pc = 0x193620u;
label_193620:
    // 0x193620: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x193620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_193624:
    // 0x193624: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x193624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_193628:
    // 0x193628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19362c:
    // 0x19362c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19362cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193630:
    // 0x193630: 0x0  nop
    ctx->pc = 0x193630u;
    // NOP
label_193634:
    // 0x193634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193638:
    // 0x193638: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19363c:
    // 0x19363c: 0x0  nop
    ctx->pc = 0x19363cu;
    // NOP
label_193640:
    // 0x193640: 0x0  nop
    ctx->pc = 0x193640u;
    // NOP
label_193644:
    // 0x193644: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x193644u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_193648:
    // 0x193648: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x193648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_19364c:
    // 0x19364c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_193650:
    // 0x193650: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x193650u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_193654:
    // 0x193654: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x193654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_193658:
    // 0x193658: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x193658u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19365c:
    // 0x19365c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x19365cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_193660:
    // 0x193660: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x193660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_193664:
    // 0x193664: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193668:
    // 0x193668: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x193668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19366c:
    // 0x19366c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x19366cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_193670:
    // 0x193670: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_193674:
    // 0x193674: 0x40f809  jalr        $v0
label_193678:
    if (ctx->pc == 0x193678u) {
        ctx->pc = 0x193678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193674u;
        // 0x193678: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19367Cu;
        goto label_19367c;
    }
    ctx->pc = 0x193674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19367Cu);
        ctx->pc = 0x193678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193674u;
        // 0x193678: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193674u, 0x19367Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19367Cu;
label_19367c:
    // 0x19367c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x19367cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_193680:
    // 0x193680: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x193680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_193684:
    // 0x193684: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x193684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_193688:
    // 0x193688: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19368c:
    // 0x19368c: 0xc445ce04  lwc1        $f5, -0x31FC($v0)
    ctx->pc = 0x19368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_193690:
    // 0x193690: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x193690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193694:
    // 0x193694: 0xc5382a  slt         $a3, $a2, $a1
    ctx->pc = 0x193694u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_193698:
    // 0x193698: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x193698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19369c:
    // 0x19369c: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x19369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1936a0:
    // 0x1936a0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1936a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1936a4:
    // 0x1936a4: 0xa7180b  movn        $v1, $a1, $a3
    ctx->pc = 0x1936a4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_1936a8:
    // 0x1936a8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1936a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1936ac:
    // 0x1936ac: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1936acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1936b0:
    // 0x1936b0: 0xc601ce28  lwc1        $f1, -0x31D8($s0)
    ctx->pc = 0x1936b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1936b4:
    // 0x1936b4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1936b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1936b8:
    // 0x1936b8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1936b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1936bc:
    // 0x1936bc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1936bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1936c0:
    // 0x1936c0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1936c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1936c4:
    // 0x1936c4: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_1936c8:
    // 0x1936c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1936c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1936cc:
    // 0x1936cc: 0xc4302a  slt         $a2, $a2, $a0
    ctx->pc = 0x1936ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1936d0:
    // 0x1936d0: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x1936d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_1936d4:
    // 0x1936d4: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x1936d4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1936d8:
    // 0x1936d8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1936d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1936dc:
    // 0x1936dc: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1936dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1936e0:
    // 0x1936e0: 0x46001642  mul.s       $f25, $f2, $f0
    ctx->pc = 0x1936e0u;
    ctx->f[25] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1936e4:
    // 0x1936e4: 0x2f0c3  sra         $fp, $v0, 3
    ctx->pc = 0x1936e4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 3));
label_1936e8:
    // 0x1936e8: 0x46002602  mul.s       $f24, $f4, $f0
    ctx->pc = 0x1936e8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1936ec:
    // 0x1936ec: 0xc12e310  jal         func_4B8C40
label_1936f0:
    if (ctx->pc == 0x1936F0u) {
        ctx->pc = 0x1936F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936ECu;
        // 0x1936f0: 0xe601ce28  swc1        $f1, -0x31D8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1936F4u;
        goto label_1936f4;
    }
    ctx->pc = 0x1936ECu;
    SET_GPR_U32(ctx, 31, 0x1936F4u);
    ctx->pc = 0x1936F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1936ECu;
    // 0x1936f0: 0xe601ce28  swc1        $f1, -0x31D8($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294954536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x1936ECu, 0x1936F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1936F4u;
label_1936f4:
    // 0x1936f4: 0xc621cdfc  lwc1        $f1, -0x3204($s1)
    ctx->pc = 0x1936f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294954492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1936f8:
    // 0x1936f8: 0xc60cce28  lwc1        $f12, -0x31D8($s0)
    ctx->pc = 0x1936f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1936fc:
    // 0x1936fc: 0xc12e29c  jal         func_4B8A70
label_193700:
    if (ctx->pc == 0x193700u) {
        ctx->pc = 0x193700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936FCu;
        // 0x193700: 0x46000dc2  mul.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193704u;
        goto label_193704;
    }
    ctx->pc = 0x1936FCu;
    SET_GPR_U32(ctx, 31, 0x193704u);
    ctx->pc = 0x193700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1936FCu;
    // 0x193700: 0x46000dc2  mul.s       $f23, $f1, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x1936FCu, 0x193704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193704u;
label_193704:
    // 0x193704: 0xc621cdfc  lwc1        $f1, -0x3204($s1)
    ctx->pc = 0x193704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294954492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193708:
    // 0x193708: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x193708u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19370c:
    // 0x19370c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_193710:
    // 0x193710: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x193710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_193714:
    // 0x193714: 0x2463e030  addiu       $v1, $v1, -0x1FD0
    ctx->pc = 0x193714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959152));
label_193718:
    // 0x193718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x193718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19371c:
    // 0x19371c: 0x242a018  mult        $s4, $s2, $v0
    ctx->pc = 0x19371cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_193720:
    // 0x193720: 0x26570001  addiu       $s7, $s2, 0x1
    ctx->pc = 0x193720u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193724:
    // 0x193724: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x193724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_193728:
    // 0x193728: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x193728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19372c:
    // 0x19372c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x19372cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193730:
    // 0x193730: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_193734:
    // 0x193734: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_193738:
    // 0x193738: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19373c:
    if (ctx->pc == 0x19373Cu) {
        ctx->pc = 0x19373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193738u;
        // 0x19373c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193740u;
        goto label_193740;
    }
    ctx->pc = 0x193738u;
    {
        const bool branch_taken_0x193738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193738u;
        // 0x19373c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193738) {
            ctx->pc = 0x193754u;
            goto label_193754;
        }
    }
    ctx->pc = 0x193740u;
label_193740:
    // 0x193740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193744:
    // 0x193744: 0x0  nop
    ctx->pc = 0x193744u;
    // NOP
label_193748:
    // 0x193748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19374c:
    // 0x19374c: 0x10000008  b           . + 4 + (0x8 << 2)
label_193750:
    if (ctx->pc == 0x193750u) {
        ctx->pc = 0x193750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19374Cu;
        // 0x193750: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193754u;
        goto label_193754;
    }
    ctx->pc = 0x19374Cu;
    {
        const bool branch_taken_0x19374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19374Cu;
        // 0x193750: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19374c) {
            ctx->pc = 0x193770u;
            goto label_193770;
        }
    }
    ctx->pc = 0x193754u;
label_193754:
    // 0x193754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_193758:
    // 0x193758: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19375c:
    // 0x19375c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19375cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193760:
    // 0x193760: 0x0  nop
    ctx->pc = 0x193760u;
    // NOP
label_193764:
    // 0x193764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193768:
    // 0x193768: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x193768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19376c:
    // 0x19376c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x19376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_193770:
    // 0x193770: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_193774:
    // 0x193774: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x193774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_193778:
    // 0x193778: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19377c:
    if (ctx->pc == 0x19377Cu) {
        ctx->pc = 0x19377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193778u;
        // 0x19377c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193780u;
        goto label_193780;
    }
    ctx->pc = 0x193778u;
    {
        const bool branch_taken_0x193778 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193778u;
        // 0x19377c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193778) {
            ctx->pc = 0x193794u;
            goto label_193794;
        }
    }
    ctx->pc = 0x193780u;
label_193780:
    // 0x193780: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x193780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193784:
    // 0x193784: 0x0  nop
    ctx->pc = 0x193784u;
    // NOP
label_193788:
    // 0x193788: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x193788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19378c:
    // 0x19378c: 0x10000008  b           . + 4 + (0x8 << 2)
label_193790:
    if (ctx->pc == 0x193790u) {
        ctx->pc = 0x193794u;
        goto label_193794;
    }
    ctx->pc = 0x19378Cu;
    {
        const bool branch_taken_0x19378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19378c) {
            ctx->pc = 0x1937B0u;
            goto label_1937b0;
        }
    }
    ctx->pc = 0x193794u;
label_193794:
    // 0x193794: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x193794u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_193798:
    // 0x193798: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19379c:
    // 0x19379c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1937a0:
    // 0x1937a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1937a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1937a4:
    // 0x1937a4: 0x0  nop
    ctx->pc = 0x1937a4u;
    // NOP
label_1937a8:
    // 0x1937a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1937a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1937ac:
    // 0x1937ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1937acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1937b0:
    // 0x1937b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1937b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1937b4:
    // 0x1937b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1937b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1937b8:
    // 0x1937b8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x1937b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_1937bc:
    // 0x1937bc: 0x2462ad18  addiu       $v0, $v1, -0x52E8
    ctx->pc = 0x1937bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_1937c0:
    // 0x1937c0: 0x0  nop
    ctx->pc = 0x1937c0u;
    // NOP
label_1937c4:
    // 0x1937c4: 0x0  nop
    ctx->pc = 0x1937c4u;
    // NOP
label_1937c8:
    // 0x1937c8: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x1937c8u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_1937cc:
    // 0x1937cc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1937ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1937d0:
    // 0x1937d0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1937d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1937d4:
    // 0x1937d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1937d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1937d8:
    // 0x1937d8: 0x2444b8a8  addiu       $a0, $v0, -0x4758
    ctx->pc = 0x1937d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
label_1937dc:
    // 0x1937dc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1937dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1937e0:
    // 0x1937e0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1937e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1937e4:
    // 0x1937e4: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x1937e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1937e8:
    // 0x1937e8: 0xc0cd4ee  jal         func_3353B8
label_1937ec:
    if (ctx->pc == 0x1937ECu) {
        ctx->pc = 0x1937ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937E8u;
        // 0x1937ec: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937F0u;
        goto label_1937f0;
    }
    ctx->pc = 0x1937E8u;
    SET_GPR_U32(ctx, 31, 0x1937F0u);
    ctx->pc = 0x1937ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1937E8u;
    // 0x1937ec: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x1937E8u, 0x1937F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1937F0u;
label_1937f0:
    // 0x1937f0: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x1937f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1937f4:
    // 0x1937f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1937f8:
    if (ctx->pc == 0x1937F8u) {
        ctx->pc = 0x1937F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F4u;
        // 0x1937f8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937FCu;
        goto label_1937fc;
    }
    ctx->pc = 0x1937F4u;
    {
        const bool branch_taken_0x1937f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937F4u;
        // 0x1937f8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937f4) {
            ctx->pc = 0x193808u;
            goto label_193808;
        }
    }
    ctx->pc = 0x1937FCu;
label_1937fc:
    // 0x1937fc: 0xc460cdf8  lwc1        $f0, -0x3208($v1)
    ctx->pc = 0x1937fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193800:
    // 0x193800: 0x10000003  b           . + 4 + (0x3 << 2)
label_193804:
    if (ctx->pc == 0x193804u) {
        ctx->pc = 0x193804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193800u;
        // 0x193804: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193808u;
        goto label_193808;
    }
    ctx->pc = 0x193800u;
    {
        const bool branch_taken_0x193800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193800u;
        // 0x193804: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193800) {
            ctx->pc = 0x193810u;
            goto label_193810;
        }
    }
    ctx->pc = 0x193808u;
label_193808:
    // 0x193808: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19380c:
    // 0x19380c: 0xc440cdf8  lwc1        $f0, -0x3208($v0)
    ctx->pc = 0x19380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193810:
    // 0x193810: 0x4600b142  mul.s       $f5, $f22, $f0
    ctx->pc = 0x193810u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_193814:
    // 0x193814: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_193818:
    if (ctx->pc == 0x193818u) {
        ctx->pc = 0x193818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193814u;
        // 0x193818: 0x4600b882  mul.s       $f2, $f23, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19381Cu;
        goto label_19381c;
    }
    ctx->pc = 0x193814u;
    {
        const bool branch_taken_0x193814 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x193818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193814u;
        // 0x193818: 0x4600b882  mul.s       $f2, $f23, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193814) {
            ctx->pc = 0x193830u;
            goto label_193830;
        }
    }
    ctx->pc = 0x19381Cu;
label_19381c:
    // 0x19381c: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x19381cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_193820:
    // 0x193820: 0x0  nop
    ctx->pc = 0x193820u;
    // NOP
label_193824:
    // 0x193824: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x193824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_193828:
    // 0x193828: 0x10000009  b           . + 4 + (0x9 << 2)
label_19382c:
    if (ctx->pc == 0x19382Cu) {
        ctx->pc = 0x19382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193828u;
        // 0x19382c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193830u;
        goto label_193830;
    }
    ctx->pc = 0x193828u;
    {
        const bool branch_taken_0x193828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193828u;
        // 0x19382c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193828) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x193830u;
label_193830:
    // 0x193830: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x193830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_193834:
    // 0x193834: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x193834u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_193838:
    // 0x193838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19383c:
    // 0x19383c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19383cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_193840:
    // 0x193840: 0x0  nop
    ctx->pc = 0x193840u;
    // NOP
label_193844:
    // 0x193844: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x193844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_193848:
    // 0x193848: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x193848u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_19384c:
    // 0x19384c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19384cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_193850:
    // 0x193850: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x193850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193854:
    // 0x193854: 0xc460ce00  lwc1        $f0, -0x3200($v1)
    ctx->pc = 0x193854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193858:
    // 0x193858: 0x461818c2  mul.s       $f3, $f3, $f24
    ctx->pc = 0x193858u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
label_19385c:
    // 0x19385c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_193860:
    // 0x193860: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x193860u;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_193864:
    // 0x193864: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x193864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_193868:
    // 0x193868: 0xc442ce14  lwc1        $f2, -0x31EC($v0)
    ctx->pc = 0x193868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19386c:
    // 0x19386c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x19386cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_193870:
    // 0x193870: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x193870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_193874:
    // 0x193874: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_193878:
    if (ctx->pc == 0x193878u) {
        ctx->pc = 0x193878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193874u;
        // 0x193878: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19387Cu;
        goto label_19387c;
    }
    ctx->pc = 0x193874u;
    {
        const bool branch_taken_0x193874 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x193878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193874u;
        // 0x193878: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193874) {
            ctx->pc = 0x193890u;
            goto label_193890;
        }
    }
    ctx->pc = 0x19387Cu;
label_19387c:
    // 0x19387c: 0x44911800  mtc1        $s1, $f3
    ctx->pc = 0x19387cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_193880:
    // 0x193880: 0x0  nop
    ctx->pc = 0x193880u;
    // NOP
label_193884:
    // 0x193884: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x193884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_193888:
    // 0x193888: 0x10000009  b           . + 4 + (0x9 << 2)
label_19388c:
    if (ctx->pc == 0x19388Cu) {
        ctx->pc = 0x19388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193888u;
        // 0x19388c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193890u;
        goto label_193890;
    }
    ctx->pc = 0x193888u;
    {
        const bool branch_taken_0x193888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193888u;
        // 0x19388c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193888) {
            ctx->pc = 0x1938B0u;
            goto label_1938b0;
        }
    }
    ctx->pc = 0x193890u;
label_193890:
    // 0x193890: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x193890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_193894:
    // 0x193894: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x193894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_193898:
    // 0x193898: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x193898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19389c:
    // 0x19389c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19389cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1938a0:
    // 0x1938a0: 0x0  nop
    ctx->pc = 0x1938a0u;
    // NOP
label_1938a4:
    // 0x1938a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1938a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1938a8:
    // 0x1938a8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1938a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1938ac:
    // 0x1938ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1938acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1938b0:
    // 0x1938b0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1938b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1938b4:
    // 0x1938b4: 0xc460ce00  lwc1        $f0, -0x3200($v1)
    ctx->pc = 0x1938b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1938b8:
    // 0x1938b8: 0x461918c2  mul.s       $f3, $f3, $f25
    ctx->pc = 0x1938b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
label_1938bc:
    // 0x1938bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1938bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1938c0:
    // 0x1938c0: 0x461a2034  c.lt.s      $f4, $f26
    ctx->pc = 0x1938c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1938c4:
    // 0x1938c4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1938c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1938c8:
    // 0x1938c8: 0xc442ce14  lwc1        $f2, -0x31EC($v0)
    ctx->pc = 0x1938c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1938cc:
    // 0x1938cc: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x1938ccu;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_1938d0:
    // 0x1938d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1938d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1938d4:
    // 0x1938d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1938d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1938d8:
    // 0x1938d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1938dc:
    if (ctx->pc == 0x1938DCu) {
        ctx->pc = 0x1938DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938D8u;
        // 0x1938dc: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1938E0u;
        goto label_1938e0;
    }
    ctx->pc = 0x1938D8u;
    {
        const bool branch_taken_0x1938d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1938DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938D8u;
        // 0x1938dc: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938d8) {
            ctx->pc = 0x1938E8u;
            goto label_1938e8;
        }
    }
    ctx->pc = 0x1938E0u;
label_1938e0:
    // 0x1938e0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1938e4:
    if (ctx->pc == 0x1938E4u) {
        ctx->pc = 0x1938E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938E0u;
        // 0x1938e4: 0x46003106  mov.s       $f4, $f6 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1938E8u;
        goto label_1938e8;
    }
    ctx->pc = 0x1938E0u;
    {
        const bool branch_taken_0x1938e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1938E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938E0u;
        // 0x1938e4: 0x46003106  mov.s       $f4, $f6 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938e0) {
            ctx->pc = 0x1938FCu;
            goto label_1938fc;
        }
    }
    ctx->pc = 0x1938E8u;
label_1938e8:
    // 0x1938e8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1938e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1938ec:
    // 0x1938ec: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x1938ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1938f0:
    // 0x1938f0: 0x0  nop
    ctx->pc = 0x1938f0u;
    // NOP
label_1938f4:
    // 0x1938f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1938f8:
    if (ctx->pc == 0x1938F8u) {
        ctx->pc = 0x1938F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938F4u;
        // 0x1938f8: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1938FCu;
        goto label_1938fc;
    }
    ctx->pc = 0x1938F4u;
    {
        const bool branch_taken_0x1938f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1938f4) {
            ctx->pc = 0x1938F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1938F4u;
            // 0x1938f8: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1938FCu;
            goto label_1938fc;
        }
    }
    ctx->pc = 0x1938FCu;
label_1938fc:
    // 0x1938fc: 0x461a0034  c.lt.s      $f0, $f26
    ctx->pc = 0x1938fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193900:
    // 0x193900: 0x0  nop
    ctx->pc = 0x193900u;
    // NOP
label_193904:
    // 0x193904: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_193908:
    if (ctx->pc == 0x193908u) {
        ctx->pc = 0x193908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193904u;
        // 0x193908: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19390Cu;
        goto label_19390c;
    }
    ctx->pc = 0x193904u;
    {
        const bool branch_taken_0x193904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193904) {
            ctx->pc = 0x193908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193904u;
            // 0x193908: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x193914u;
            goto label_193914;
        }
    }
    ctx->pc = 0x19390Cu;
label_19390c:
    // 0x19390c: 0x10000005  b           . + 4 + (0x5 << 2)
label_193910:
    if (ctx->pc == 0x193910u) {
        ctx->pc = 0x193910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19390Cu;
        // 0x193910: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193914u;
        goto label_193914;
    }
    ctx->pc = 0x19390Cu;
    {
        const bool branch_taken_0x19390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19390Cu;
        // 0x193910: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19390c) {
            ctx->pc = 0x193924u;
            goto label_193924;
        }
    }
    ctx->pc = 0x193914u;
label_193914:
    // 0x193914: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x193914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193918:
    // 0x193918: 0x0  nop
    ctx->pc = 0x193918u;
    // NOP
label_19391c:
    // 0x19391c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_193920:
    if (ctx->pc == 0x193920u) {
        ctx->pc = 0x193920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19391Cu;
        // 0x193920: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193924u;
        goto label_193924;
    }
    ctx->pc = 0x19391Cu;
    {
        const bool branch_taken_0x19391c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19391c) {
            ctx->pc = 0x193920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19391Cu;
            // 0x193920: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x193924u;
            goto label_193924;
        }
    }
    ctx->pc = 0x193924u;
label_193924:
    // 0x193924: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x193924u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_193928:
    // 0x193928: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x193928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_19392c:
    // 0x19392c: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x19392cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_193930:
    // 0x193930: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x193930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_193934:
    // 0x193934: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x193934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_193938:
    // 0x193938: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x193938u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19393c:
    // 0x19393c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x19393cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_193940:
    // 0x193940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_193944:
    // 0x193944: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x193944u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_193948:
    // 0x193948: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x193948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_19394c:
    // 0x19394c: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_193950:
    if (ctx->pc == 0x193950u) {
        ctx->pc = 0x193950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19394Cu;
        // 0x193950: 0x27e9821  addu        $s3, $s3, $fp (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193954u;
        goto label_193954;
    }
    ctx->pc = 0x19394Cu;
    {
        const bool branch_taken_0x19394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19394Cu;
        // 0x193950: 0x27e9821  addu        $s3, $s3, $fp (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19394c) {
            ctx->pc = 0x193730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193730;
        }
    }
    ctx->pc = 0x193954u;
label_193954:
    // 0x193954: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x193954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_193958:
    // 0x193958: 0x2e420009  sltiu       $v0, $s2, 0x9
    ctx->pc = 0x193958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_19395c:
    // 0x19395c: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
label_193960:
    if (ctx->pc == 0x193960u) {
        ctx->pc = 0x193960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19395Cu;
        // 0x193960: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193964u;
        goto label_193964;
    }
    ctx->pc = 0x19395Cu;
    {
        const bool branch_taken_0x19395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19395Cu;
        // 0x193960: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19395c) {
            ctx->pc = 0x193710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193710;
        }
    }
    ctx->pc = 0x193964u;
label_193964:
    // 0x193964: 0x0  nop
    ctx->pc = 0x193964u;
    // NOP
label_193968:
    // 0x193968: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x193968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19396c:
    // 0x19396c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x19396cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_193970:
    // 0x193970: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x193970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_193974:
    // 0x193974: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x193974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_193978:
    // 0x193978: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x193978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19397c:
    // 0x19397c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x19397cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_193980:
    // 0x193980: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x193980u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_193984:
    // 0x193984: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x193984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_193988:
    // 0x193988: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x193988u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19398c:
    // 0x19398c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_193990:
    // 0x193990: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x193990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_193994:
    // 0x193994: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x193994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_193998:
    // 0x193998: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x193998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_19399c:
    // 0x19399c: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x19399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1939a0:
    // 0x1939a0: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1939a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1939a4:
    // 0x1939a4: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1939a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1939a8:
    // 0x1939a8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1939a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1939ac:
    // 0x1939ac: 0x3e00008  jr          $ra
label_1939b0:
    if (ctx->pc == 0x1939B0u) {
        ctx->pc = 0x1939B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939ACu;
        // 0x1939b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939B4u;
        goto label_1939b4;
    }
    ctx->pc = 0x1939ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1939B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939ACu;
        // 0x1939b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1939ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1939B4u;
label_1939b4:
    // 0x1939b4: 0x0  nop
    ctx->pc = 0x1939b4u;
    // NOP
    ctx->pc = 0x1939b8u;
}
