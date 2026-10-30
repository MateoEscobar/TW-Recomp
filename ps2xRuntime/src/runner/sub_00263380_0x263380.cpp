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

// Function: sub_00263380
// Address: 0x263380 - 0x263c90
void sub_00263380_0x263380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263380_0x263380");
#endif

    switch (ctx->pc) {
        case 0x263380u: goto label_263380;
        case 0x263384u: goto label_263384;
        case 0x263388u: goto label_263388;
        case 0x26338cu: goto label_26338c;
        case 0x263390u: goto label_263390;
        case 0x263394u: goto label_263394;
        case 0x263398u: goto label_263398;
        case 0x26339cu: goto label_26339c;
        case 0x2633a0u: goto label_2633a0;
        case 0x2633a4u: goto label_2633a4;
        case 0x2633a8u: goto label_2633a8;
        case 0x2633acu: goto label_2633ac;
        case 0x2633b0u: goto label_2633b0;
        case 0x2633b4u: goto label_2633b4;
        case 0x2633b8u: goto label_2633b8;
        case 0x2633bcu: goto label_2633bc;
        case 0x2633c0u: goto label_2633c0;
        case 0x2633c4u: goto label_2633c4;
        case 0x2633c8u: goto label_2633c8;
        case 0x2633ccu: goto label_2633cc;
        case 0x2633d0u: goto label_2633d0;
        case 0x2633d4u: goto label_2633d4;
        case 0x2633d8u: goto label_2633d8;
        case 0x2633dcu: goto label_2633dc;
        case 0x2633e0u: goto label_2633e0;
        case 0x2633e4u: goto label_2633e4;
        case 0x2633e8u: goto label_2633e8;
        case 0x2633ecu: goto label_2633ec;
        case 0x2633f0u: goto label_2633f0;
        case 0x2633f4u: goto label_2633f4;
        case 0x2633f8u: goto label_2633f8;
        case 0x2633fcu: goto label_2633fc;
        case 0x263400u: goto label_263400;
        case 0x263404u: goto label_263404;
        case 0x263408u: goto label_263408;
        case 0x26340cu: goto label_26340c;
        case 0x263410u: goto label_263410;
        case 0x263414u: goto label_263414;
        case 0x263418u: goto label_263418;
        case 0x26341cu: goto label_26341c;
        case 0x263420u: goto label_263420;
        case 0x263424u: goto label_263424;
        case 0x263428u: goto label_263428;
        case 0x26342cu: goto label_26342c;
        case 0x263430u: goto label_263430;
        case 0x263434u: goto label_263434;
        case 0x263438u: goto label_263438;
        case 0x26343cu: goto label_26343c;
        case 0x263440u: goto label_263440;
        case 0x263444u: goto label_263444;
        case 0x263448u: goto label_263448;
        case 0x26344cu: goto label_26344c;
        case 0x263450u: goto label_263450;
        case 0x263454u: goto label_263454;
        case 0x263458u: goto label_263458;
        case 0x26345cu: goto label_26345c;
        case 0x263460u: goto label_263460;
        case 0x263464u: goto label_263464;
        case 0x263468u: goto label_263468;
        case 0x26346cu: goto label_26346c;
        case 0x263470u: goto label_263470;
        case 0x263474u: goto label_263474;
        case 0x263478u: goto label_263478;
        case 0x26347cu: goto label_26347c;
        case 0x263480u: goto label_263480;
        case 0x263484u: goto label_263484;
        case 0x263488u: goto label_263488;
        case 0x26348cu: goto label_26348c;
        case 0x263490u: goto label_263490;
        case 0x263494u: goto label_263494;
        case 0x263498u: goto label_263498;
        case 0x26349cu: goto label_26349c;
        case 0x2634a0u: goto label_2634a0;
        case 0x2634a4u: goto label_2634a4;
        case 0x2634a8u: goto label_2634a8;
        case 0x2634acu: goto label_2634ac;
        case 0x2634b0u: goto label_2634b0;
        case 0x2634b4u: goto label_2634b4;
        case 0x2634b8u: goto label_2634b8;
        case 0x2634bcu: goto label_2634bc;
        case 0x2634c0u: goto label_2634c0;
        case 0x2634c4u: goto label_2634c4;
        case 0x2634c8u: goto label_2634c8;
        case 0x2634ccu: goto label_2634cc;
        case 0x2634d0u: goto label_2634d0;
        case 0x2634d4u: goto label_2634d4;
        case 0x2634d8u: goto label_2634d8;
        case 0x2634dcu: goto label_2634dc;
        case 0x2634e0u: goto label_2634e0;
        case 0x2634e4u: goto label_2634e4;
        case 0x2634e8u: goto label_2634e8;
        case 0x2634ecu: goto label_2634ec;
        case 0x2634f0u: goto label_2634f0;
        case 0x2634f4u: goto label_2634f4;
        case 0x2634f8u: goto label_2634f8;
        case 0x2634fcu: goto label_2634fc;
        case 0x263500u: goto label_263500;
        case 0x263504u: goto label_263504;
        case 0x263508u: goto label_263508;
        case 0x26350cu: goto label_26350c;
        case 0x263510u: goto label_263510;
        case 0x263514u: goto label_263514;
        case 0x263518u: goto label_263518;
        case 0x26351cu: goto label_26351c;
        case 0x263520u: goto label_263520;
        case 0x263524u: goto label_263524;
        case 0x263528u: goto label_263528;
        case 0x26352cu: goto label_26352c;
        case 0x263530u: goto label_263530;
        case 0x263534u: goto label_263534;
        case 0x263538u: goto label_263538;
        case 0x26353cu: goto label_26353c;
        case 0x263540u: goto label_263540;
        case 0x263544u: goto label_263544;
        case 0x263548u: goto label_263548;
        case 0x26354cu: goto label_26354c;
        case 0x263550u: goto label_263550;
        case 0x263554u: goto label_263554;
        case 0x263558u: goto label_263558;
        case 0x26355cu: goto label_26355c;
        case 0x263560u: goto label_263560;
        case 0x263564u: goto label_263564;
        case 0x263568u: goto label_263568;
        case 0x26356cu: goto label_26356c;
        case 0x263570u: goto label_263570;
        case 0x263574u: goto label_263574;
        case 0x263578u: goto label_263578;
        case 0x26357cu: goto label_26357c;
        case 0x263580u: goto label_263580;
        case 0x263584u: goto label_263584;
        case 0x263588u: goto label_263588;
        case 0x26358cu: goto label_26358c;
        case 0x263590u: goto label_263590;
        case 0x263594u: goto label_263594;
        case 0x263598u: goto label_263598;
        case 0x26359cu: goto label_26359c;
        case 0x2635a0u: goto label_2635a0;
        case 0x2635a4u: goto label_2635a4;
        case 0x2635a8u: goto label_2635a8;
        case 0x2635acu: goto label_2635ac;
        case 0x2635b0u: goto label_2635b0;
        case 0x2635b4u: goto label_2635b4;
        case 0x2635b8u: goto label_2635b8;
        case 0x2635bcu: goto label_2635bc;
        case 0x2635c0u: goto label_2635c0;
        case 0x2635c4u: goto label_2635c4;
        case 0x2635c8u: goto label_2635c8;
        case 0x2635ccu: goto label_2635cc;
        case 0x2635d0u: goto label_2635d0;
        case 0x2635d4u: goto label_2635d4;
        case 0x2635d8u: goto label_2635d8;
        case 0x2635dcu: goto label_2635dc;
        case 0x2635e0u: goto label_2635e0;
        case 0x2635e4u: goto label_2635e4;
        case 0x2635e8u: goto label_2635e8;
        case 0x2635ecu: goto label_2635ec;
        case 0x2635f0u: goto label_2635f0;
        case 0x2635f4u: goto label_2635f4;
        case 0x2635f8u: goto label_2635f8;
        case 0x2635fcu: goto label_2635fc;
        case 0x263600u: goto label_263600;
        case 0x263604u: goto label_263604;
        case 0x263608u: goto label_263608;
        case 0x26360cu: goto label_26360c;
        case 0x263610u: goto label_263610;
        case 0x263614u: goto label_263614;
        case 0x263618u: goto label_263618;
        case 0x26361cu: goto label_26361c;
        case 0x263620u: goto label_263620;
        case 0x263624u: goto label_263624;
        case 0x263628u: goto label_263628;
        case 0x26362cu: goto label_26362c;
        case 0x263630u: goto label_263630;
        case 0x263634u: goto label_263634;
        case 0x263638u: goto label_263638;
        case 0x26363cu: goto label_26363c;
        case 0x263640u: goto label_263640;
        case 0x263644u: goto label_263644;
        case 0x263648u: goto label_263648;
        case 0x26364cu: goto label_26364c;
        case 0x263650u: goto label_263650;
        case 0x263654u: goto label_263654;
        case 0x263658u: goto label_263658;
        case 0x26365cu: goto label_26365c;
        case 0x263660u: goto label_263660;
        case 0x263664u: goto label_263664;
        case 0x263668u: goto label_263668;
        case 0x26366cu: goto label_26366c;
        case 0x263670u: goto label_263670;
        case 0x263674u: goto label_263674;
        case 0x263678u: goto label_263678;
        case 0x26367cu: goto label_26367c;
        case 0x263680u: goto label_263680;
        case 0x263684u: goto label_263684;
        case 0x263688u: goto label_263688;
        case 0x26368cu: goto label_26368c;
        case 0x263690u: goto label_263690;
        case 0x263694u: goto label_263694;
        case 0x263698u: goto label_263698;
        case 0x26369cu: goto label_26369c;
        case 0x2636a0u: goto label_2636a0;
        case 0x2636a4u: goto label_2636a4;
        case 0x2636a8u: goto label_2636a8;
        case 0x2636acu: goto label_2636ac;
        case 0x2636b0u: goto label_2636b0;
        case 0x2636b4u: goto label_2636b4;
        case 0x2636b8u: goto label_2636b8;
        case 0x2636bcu: goto label_2636bc;
        case 0x2636c0u: goto label_2636c0;
        case 0x2636c4u: goto label_2636c4;
        case 0x2636c8u: goto label_2636c8;
        case 0x2636ccu: goto label_2636cc;
        case 0x2636d0u: goto label_2636d0;
        case 0x2636d4u: goto label_2636d4;
        case 0x2636d8u: goto label_2636d8;
        case 0x2636dcu: goto label_2636dc;
        case 0x2636e0u: goto label_2636e0;
        case 0x2636e4u: goto label_2636e4;
        case 0x2636e8u: goto label_2636e8;
        case 0x2636ecu: goto label_2636ec;
        case 0x2636f0u: goto label_2636f0;
        case 0x2636f4u: goto label_2636f4;
        case 0x2636f8u: goto label_2636f8;
        case 0x2636fcu: goto label_2636fc;
        case 0x263700u: goto label_263700;
        case 0x263704u: goto label_263704;
        case 0x263708u: goto label_263708;
        case 0x26370cu: goto label_26370c;
        case 0x263710u: goto label_263710;
        case 0x263714u: goto label_263714;
        case 0x263718u: goto label_263718;
        case 0x26371cu: goto label_26371c;
        case 0x263720u: goto label_263720;
        case 0x263724u: goto label_263724;
        case 0x263728u: goto label_263728;
        case 0x26372cu: goto label_26372c;
        case 0x263730u: goto label_263730;
        case 0x263734u: goto label_263734;
        case 0x263738u: goto label_263738;
        case 0x26373cu: goto label_26373c;
        case 0x263740u: goto label_263740;
        case 0x263744u: goto label_263744;
        case 0x263748u: goto label_263748;
        case 0x26374cu: goto label_26374c;
        case 0x263750u: goto label_263750;
        case 0x263754u: goto label_263754;
        case 0x263758u: goto label_263758;
        case 0x26375cu: goto label_26375c;
        case 0x263760u: goto label_263760;
        case 0x263764u: goto label_263764;
        case 0x263768u: goto label_263768;
        case 0x26376cu: goto label_26376c;
        case 0x263770u: goto label_263770;
        case 0x263774u: goto label_263774;
        case 0x263778u: goto label_263778;
        case 0x26377cu: goto label_26377c;
        case 0x263780u: goto label_263780;
        case 0x263784u: goto label_263784;
        case 0x263788u: goto label_263788;
        case 0x26378cu: goto label_26378c;
        case 0x263790u: goto label_263790;
        case 0x263794u: goto label_263794;
        case 0x263798u: goto label_263798;
        case 0x26379cu: goto label_26379c;
        case 0x2637a0u: goto label_2637a0;
        case 0x2637a4u: goto label_2637a4;
        case 0x2637a8u: goto label_2637a8;
        case 0x2637acu: goto label_2637ac;
        case 0x2637b0u: goto label_2637b0;
        case 0x2637b4u: goto label_2637b4;
        case 0x2637b8u: goto label_2637b8;
        case 0x2637bcu: goto label_2637bc;
        case 0x2637c0u: goto label_2637c0;
        case 0x2637c4u: goto label_2637c4;
        case 0x2637c8u: goto label_2637c8;
        case 0x2637ccu: goto label_2637cc;
        case 0x2637d0u: goto label_2637d0;
        case 0x2637d4u: goto label_2637d4;
        case 0x2637d8u: goto label_2637d8;
        case 0x2637dcu: goto label_2637dc;
        case 0x2637e0u: goto label_2637e0;
        case 0x2637e4u: goto label_2637e4;
        case 0x2637e8u: goto label_2637e8;
        case 0x2637ecu: goto label_2637ec;
        case 0x2637f0u: goto label_2637f0;
        case 0x2637f4u: goto label_2637f4;
        case 0x2637f8u: goto label_2637f8;
        case 0x2637fcu: goto label_2637fc;
        case 0x263800u: goto label_263800;
        case 0x263804u: goto label_263804;
        case 0x263808u: goto label_263808;
        case 0x26380cu: goto label_26380c;
        case 0x263810u: goto label_263810;
        case 0x263814u: goto label_263814;
        case 0x263818u: goto label_263818;
        case 0x26381cu: goto label_26381c;
        case 0x263820u: goto label_263820;
        case 0x263824u: goto label_263824;
        case 0x263828u: goto label_263828;
        case 0x26382cu: goto label_26382c;
        case 0x263830u: goto label_263830;
        case 0x263834u: goto label_263834;
        case 0x263838u: goto label_263838;
        case 0x26383cu: goto label_26383c;
        case 0x263840u: goto label_263840;
        case 0x263844u: goto label_263844;
        case 0x263848u: goto label_263848;
        case 0x26384cu: goto label_26384c;
        case 0x263850u: goto label_263850;
        case 0x263854u: goto label_263854;
        case 0x263858u: goto label_263858;
        case 0x26385cu: goto label_26385c;
        case 0x263860u: goto label_263860;
        case 0x263864u: goto label_263864;
        case 0x263868u: goto label_263868;
        case 0x26386cu: goto label_26386c;
        case 0x263870u: goto label_263870;
        case 0x263874u: goto label_263874;
        case 0x263878u: goto label_263878;
        case 0x26387cu: goto label_26387c;
        case 0x263880u: goto label_263880;
        case 0x263884u: goto label_263884;
        case 0x263888u: goto label_263888;
        case 0x26388cu: goto label_26388c;
        case 0x263890u: goto label_263890;
        case 0x263894u: goto label_263894;
        case 0x263898u: goto label_263898;
        case 0x26389cu: goto label_26389c;
        case 0x2638a0u: goto label_2638a0;
        case 0x2638a4u: goto label_2638a4;
        case 0x2638a8u: goto label_2638a8;
        case 0x2638acu: goto label_2638ac;
        case 0x2638b0u: goto label_2638b0;
        case 0x2638b4u: goto label_2638b4;
        case 0x2638b8u: goto label_2638b8;
        case 0x2638bcu: goto label_2638bc;
        case 0x2638c0u: goto label_2638c0;
        case 0x2638c4u: goto label_2638c4;
        case 0x2638c8u: goto label_2638c8;
        case 0x2638ccu: goto label_2638cc;
        case 0x2638d0u: goto label_2638d0;
        case 0x2638d4u: goto label_2638d4;
        case 0x2638d8u: goto label_2638d8;
        case 0x2638dcu: goto label_2638dc;
        case 0x2638e0u: goto label_2638e0;
        case 0x2638e4u: goto label_2638e4;
        case 0x2638e8u: goto label_2638e8;
        case 0x2638ecu: goto label_2638ec;
        case 0x2638f0u: goto label_2638f0;
        case 0x2638f4u: goto label_2638f4;
        case 0x2638f8u: goto label_2638f8;
        case 0x2638fcu: goto label_2638fc;
        case 0x263900u: goto label_263900;
        case 0x263904u: goto label_263904;
        case 0x263908u: goto label_263908;
        case 0x26390cu: goto label_26390c;
        case 0x263910u: goto label_263910;
        case 0x263914u: goto label_263914;
        case 0x263918u: goto label_263918;
        case 0x26391cu: goto label_26391c;
        case 0x263920u: goto label_263920;
        case 0x263924u: goto label_263924;
        case 0x263928u: goto label_263928;
        case 0x26392cu: goto label_26392c;
        case 0x263930u: goto label_263930;
        case 0x263934u: goto label_263934;
        case 0x263938u: goto label_263938;
        case 0x26393cu: goto label_26393c;
        case 0x263940u: goto label_263940;
        case 0x263944u: goto label_263944;
        case 0x263948u: goto label_263948;
        case 0x26394cu: goto label_26394c;
        case 0x263950u: goto label_263950;
        case 0x263954u: goto label_263954;
        case 0x263958u: goto label_263958;
        case 0x26395cu: goto label_26395c;
        case 0x263960u: goto label_263960;
        case 0x263964u: goto label_263964;
        case 0x263968u: goto label_263968;
        case 0x26396cu: goto label_26396c;
        case 0x263970u: goto label_263970;
        case 0x263974u: goto label_263974;
        case 0x263978u: goto label_263978;
        case 0x26397cu: goto label_26397c;
        case 0x263980u: goto label_263980;
        case 0x263984u: goto label_263984;
        case 0x263988u: goto label_263988;
        case 0x26398cu: goto label_26398c;
        case 0x263990u: goto label_263990;
        case 0x263994u: goto label_263994;
        case 0x263998u: goto label_263998;
        case 0x26399cu: goto label_26399c;
        case 0x2639a0u: goto label_2639a0;
        case 0x2639a4u: goto label_2639a4;
        case 0x2639a8u: goto label_2639a8;
        case 0x2639acu: goto label_2639ac;
        case 0x2639b0u: goto label_2639b0;
        case 0x2639b4u: goto label_2639b4;
        case 0x2639b8u: goto label_2639b8;
        case 0x2639bcu: goto label_2639bc;
        case 0x2639c0u: goto label_2639c0;
        case 0x2639c4u: goto label_2639c4;
        case 0x2639c8u: goto label_2639c8;
        case 0x2639ccu: goto label_2639cc;
        case 0x2639d0u: goto label_2639d0;
        case 0x2639d4u: goto label_2639d4;
        case 0x2639d8u: goto label_2639d8;
        case 0x2639dcu: goto label_2639dc;
        case 0x2639e0u: goto label_2639e0;
        case 0x2639e4u: goto label_2639e4;
        case 0x2639e8u: goto label_2639e8;
        case 0x2639ecu: goto label_2639ec;
        case 0x2639f0u: goto label_2639f0;
        case 0x2639f4u: goto label_2639f4;
        case 0x2639f8u: goto label_2639f8;
        case 0x2639fcu: goto label_2639fc;
        case 0x263a00u: goto label_263a00;
        case 0x263a04u: goto label_263a04;
        case 0x263a08u: goto label_263a08;
        case 0x263a0cu: goto label_263a0c;
        case 0x263a10u: goto label_263a10;
        case 0x263a14u: goto label_263a14;
        case 0x263a18u: goto label_263a18;
        case 0x263a1cu: goto label_263a1c;
        case 0x263a20u: goto label_263a20;
        case 0x263a24u: goto label_263a24;
        case 0x263a28u: goto label_263a28;
        case 0x263a2cu: goto label_263a2c;
        case 0x263a30u: goto label_263a30;
        case 0x263a34u: goto label_263a34;
        case 0x263a38u: goto label_263a38;
        case 0x263a3cu: goto label_263a3c;
        case 0x263a40u: goto label_263a40;
        case 0x263a44u: goto label_263a44;
        case 0x263a48u: goto label_263a48;
        case 0x263a4cu: goto label_263a4c;
        case 0x263a50u: goto label_263a50;
        case 0x263a54u: goto label_263a54;
        case 0x263a58u: goto label_263a58;
        case 0x263a5cu: goto label_263a5c;
        case 0x263a60u: goto label_263a60;
        case 0x263a64u: goto label_263a64;
        case 0x263a68u: goto label_263a68;
        case 0x263a6cu: goto label_263a6c;
        case 0x263a70u: goto label_263a70;
        case 0x263a74u: goto label_263a74;
        case 0x263a78u: goto label_263a78;
        case 0x263a7cu: goto label_263a7c;
        case 0x263a80u: goto label_263a80;
        case 0x263a84u: goto label_263a84;
        case 0x263a88u: goto label_263a88;
        case 0x263a8cu: goto label_263a8c;
        case 0x263a90u: goto label_263a90;
        case 0x263a94u: goto label_263a94;
        case 0x263a98u: goto label_263a98;
        case 0x263a9cu: goto label_263a9c;
        case 0x263aa0u: goto label_263aa0;
        case 0x263aa4u: goto label_263aa4;
        case 0x263aa8u: goto label_263aa8;
        case 0x263aacu: goto label_263aac;
        case 0x263ab0u: goto label_263ab0;
        case 0x263ab4u: goto label_263ab4;
        case 0x263ab8u: goto label_263ab8;
        case 0x263abcu: goto label_263abc;
        case 0x263ac0u: goto label_263ac0;
        case 0x263ac4u: goto label_263ac4;
        case 0x263ac8u: goto label_263ac8;
        case 0x263accu: goto label_263acc;
        case 0x263ad0u: goto label_263ad0;
        case 0x263ad4u: goto label_263ad4;
        case 0x263ad8u: goto label_263ad8;
        case 0x263adcu: goto label_263adc;
        case 0x263ae0u: goto label_263ae0;
        case 0x263ae4u: goto label_263ae4;
        case 0x263ae8u: goto label_263ae8;
        case 0x263aecu: goto label_263aec;
        case 0x263af0u: goto label_263af0;
        case 0x263af4u: goto label_263af4;
        case 0x263af8u: goto label_263af8;
        case 0x263afcu: goto label_263afc;
        case 0x263b00u: goto label_263b00;
        case 0x263b04u: goto label_263b04;
        case 0x263b08u: goto label_263b08;
        case 0x263b0cu: goto label_263b0c;
        case 0x263b10u: goto label_263b10;
        case 0x263b14u: goto label_263b14;
        case 0x263b18u: goto label_263b18;
        case 0x263b1cu: goto label_263b1c;
        case 0x263b20u: goto label_263b20;
        case 0x263b24u: goto label_263b24;
        case 0x263b28u: goto label_263b28;
        case 0x263b2cu: goto label_263b2c;
        case 0x263b30u: goto label_263b30;
        case 0x263b34u: goto label_263b34;
        case 0x263b38u: goto label_263b38;
        case 0x263b3cu: goto label_263b3c;
        case 0x263b40u: goto label_263b40;
        case 0x263b44u: goto label_263b44;
        case 0x263b48u: goto label_263b48;
        case 0x263b4cu: goto label_263b4c;
        case 0x263b50u: goto label_263b50;
        case 0x263b54u: goto label_263b54;
        case 0x263b58u: goto label_263b58;
        case 0x263b5cu: goto label_263b5c;
        case 0x263b60u: goto label_263b60;
        case 0x263b64u: goto label_263b64;
        case 0x263b68u: goto label_263b68;
        case 0x263b6cu: goto label_263b6c;
        case 0x263b70u: goto label_263b70;
        case 0x263b74u: goto label_263b74;
        case 0x263b78u: goto label_263b78;
        case 0x263b7cu: goto label_263b7c;
        case 0x263b80u: goto label_263b80;
        case 0x263b84u: goto label_263b84;
        case 0x263b88u: goto label_263b88;
        case 0x263b8cu: goto label_263b8c;
        case 0x263b90u: goto label_263b90;
        case 0x263b94u: goto label_263b94;
        case 0x263b98u: goto label_263b98;
        case 0x263b9cu: goto label_263b9c;
        case 0x263ba0u: goto label_263ba0;
        case 0x263ba4u: goto label_263ba4;
        case 0x263ba8u: goto label_263ba8;
        case 0x263bacu: goto label_263bac;
        case 0x263bb0u: goto label_263bb0;
        case 0x263bb4u: goto label_263bb4;
        case 0x263bb8u: goto label_263bb8;
        case 0x263bbcu: goto label_263bbc;
        case 0x263bc0u: goto label_263bc0;
        case 0x263bc4u: goto label_263bc4;
        case 0x263bc8u: goto label_263bc8;
        case 0x263bccu: goto label_263bcc;
        case 0x263bd0u: goto label_263bd0;
        case 0x263bd4u: goto label_263bd4;
        case 0x263bd8u: goto label_263bd8;
        case 0x263bdcu: goto label_263bdc;
        case 0x263be0u: goto label_263be0;
        case 0x263be4u: goto label_263be4;
        case 0x263be8u: goto label_263be8;
        case 0x263becu: goto label_263bec;
        case 0x263bf0u: goto label_263bf0;
        case 0x263bf4u: goto label_263bf4;
        case 0x263bf8u: goto label_263bf8;
        case 0x263bfcu: goto label_263bfc;
        case 0x263c00u: goto label_263c00;
        case 0x263c04u: goto label_263c04;
        case 0x263c08u: goto label_263c08;
        case 0x263c0cu: goto label_263c0c;
        case 0x263c10u: goto label_263c10;
        case 0x263c14u: goto label_263c14;
        case 0x263c18u: goto label_263c18;
        case 0x263c1cu: goto label_263c1c;
        case 0x263c20u: goto label_263c20;
        case 0x263c24u: goto label_263c24;
        case 0x263c28u: goto label_263c28;
        case 0x263c2cu: goto label_263c2c;
        case 0x263c30u: goto label_263c30;
        case 0x263c34u: goto label_263c34;
        case 0x263c38u: goto label_263c38;
        case 0x263c3cu: goto label_263c3c;
        case 0x263c40u: goto label_263c40;
        case 0x263c44u: goto label_263c44;
        case 0x263c48u: goto label_263c48;
        case 0x263c4cu: goto label_263c4c;
        case 0x263c50u: goto label_263c50;
        case 0x263c54u: goto label_263c54;
        case 0x263c58u: goto label_263c58;
        case 0x263c5cu: goto label_263c5c;
        case 0x263c60u: goto label_263c60;
        case 0x263c64u: goto label_263c64;
        case 0x263c68u: goto label_263c68;
        case 0x263c6cu: goto label_263c6c;
        case 0x263c70u: goto label_263c70;
        case 0x263c74u: goto label_263c74;
        case 0x263c78u: goto label_263c78;
        case 0x263c7cu: goto label_263c7c;
        case 0x263c80u: goto label_263c80;
        case 0x263c84u: goto label_263c84;
        case 0x263c88u: goto label_263c88;
        case 0x263c8cu: goto label_263c8c;
        default: break;
    }

    ctx->pc = 0x263380u;

label_263380:
    // 0x263380: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x263380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_263384:
    // 0x263384: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x263384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_263388:
    // 0x263388: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x263388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_26338c:
    // 0x26338c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x26338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_263390:
    // 0x263390: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x263390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_263394:
    // 0x263394: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x263394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_263398:
    // 0x263398: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x263398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_26339c:
    // 0x26339c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26339cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2633a0:
    // 0x2633a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2633a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2633a4:
    // 0x2633a4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2633a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_2633a8:
    // 0x2633a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2633a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2633ac:
    // 0x2633ac: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2633acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_2633b0:
    // 0x2633b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2633b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2633b4:
    // 0x2633b4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2633b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_2633b8:
    // 0x2633b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2633b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2633bc:
    // 0x2633bc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2633bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_2633c0:
    // 0x2633c0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2633c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_2633c4:
    // 0x2633c4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2633c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2633c8:
    // 0x2633c8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x2633c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_2633cc:
    // 0x2633cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2633ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2633d0:
    // 0x2633d0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2633d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2633d4:
    // 0x2633d4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x2633d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_2633d8:
    // 0x2633d8: 0xafa8003c  sw          $t0, 0x3C($sp)
    ctx->pc = 0x2633d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 8));
label_2633dc:
    // 0x2633dc: 0xc040698  jal         func_101A60
label_2633e0:
    if (ctx->pc == 0x2633E0u) {
        ctx->pc = 0x2633E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633DCu;
        // 0x2633e0: 0xafa90040  sw          $t1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2633E4u;
        goto label_2633e4;
    }
    ctx->pc = 0x2633DCu;
    SET_GPR_U32(ctx, 31, 0x2633E4u);
    ctx->pc = 0x2633E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633DCu;
    // 0x2633e0: 0xafa90040  sw          $t1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x2633DCu, 0x2633E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633E4u;
label_2633e4:
    // 0x2633e4: 0x1240021d  beqz        $s2, . + 4 + (0x21D << 2)
label_2633e8:
    if (ctx->pc == 0x2633E8u) {
        ctx->pc = 0x2633E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633E4u;
        // 0x2633e8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2633ECu;
        goto label_2633ec;
    }
    ctx->pc = 0x2633E4u;
    {
        const bool branch_taken_0x2633e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2633E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633E4u;
        // 0x2633e8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2633e4) {
            ctx->pc = 0x263C5Cu;
            goto label_263c5c;
        }
    }
    ctx->pc = 0x2633ECu;
label_2633ec:
    // 0x2633ec: 0xc088e78  jal         func_2239E0
label_2633f0:
    if (ctx->pc == 0x2633F0u) {
        ctx->pc = 0x2633F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633ECu;
        // 0x2633f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2633F4u;
        goto label_2633f4;
    }
    ctx->pc = 0x2633ECu;
    SET_GPR_U32(ctx, 31, 0x2633F4u);
    ctx->pc = 0x2633F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633ECu;
    // 0x2633f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x2633ECu, 0x2633F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2633F4u;
label_2633f4:
    // 0x2633f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2633f8:
    if (ctx->pc == 0x2633F8u) {
        ctx->pc = 0x2633FCu;
        goto label_2633fc;
    }
    ctx->pc = 0x2633F4u;
    {
        const bool branch_taken_0x2633f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2633f4) {
            ctx->pc = 0x26340Cu;
            goto label_26340c;
        }
    }
    ctx->pc = 0x2633FCu;
label_2633fc:
    // 0x2633fc: 0xc088e80  jal         func_223A00
label_263400:
    if (ctx->pc == 0x263400u) {
        ctx->pc = 0x263400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2633FCu;
        // 0x263400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263404u;
        goto label_263404;
    }
    ctx->pc = 0x2633FCu;
    SET_GPR_U32(ctx, 31, 0x263404u);
    ctx->pc = 0x263400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2633FCu;
    // 0x263400: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x2633FCu, 0x263404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263404u;
label_263404:
    // 0x263404: 0x10400216  beqz        $v0, . + 4 + (0x216 << 2)
label_263408:
    if (ctx->pc == 0x263408u) {
        ctx->pc = 0x263408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263404u;
        // 0x263408: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26340Cu;
        goto label_26340c;
    }
    ctx->pc = 0x263404u;
    {
        const bool branch_taken_0x263404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263404u;
        // 0x263408: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263404) {
            ctx->pc = 0x263C60u;
            goto label_263c60;
        }
    }
    ctx->pc = 0x26340Cu;
label_26340c:
    // 0x26340c: 0xc088e78  jal         func_2239E0
label_263410:
    if (ctx->pc == 0x263410u) {
        ctx->pc = 0x263410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26340Cu;
        // 0x263410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263414u;
        goto label_263414;
    }
    ctx->pc = 0x26340Cu;
    SET_GPR_U32(ctx, 31, 0x263414u);
    ctx->pc = 0x263410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26340Cu;
    // 0x263410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x26340Cu, 0x263414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263414u;
label_263414:
    // 0x263414: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_263418:
    if (ctx->pc == 0x263418u) {
        ctx->pc = 0x263418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263414u;
        // 0x263418: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26341Cu;
        goto label_26341c;
    }
    ctx->pc = 0x263414u;
    {
        const bool branch_taken_0x263414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263414u;
        // 0x263418: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263414) {
            ctx->pc = 0x263430u;
            goto label_263430;
        }
    }
    ctx->pc = 0x26341Cu;
label_26341c:
    // 0x26341c: 0xc088e80  jal         func_223A00
label_263420:
    if (ctx->pc == 0x263420u) {
        ctx->pc = 0x263420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26341Cu;
        // 0x263420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263424u;
        goto label_263424;
    }
    ctx->pc = 0x26341Cu;
    SET_GPR_U32(ctx, 31, 0x263424u);
    ctx->pc = 0x263420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26341Cu;
    // 0x263420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x26341Cu, 0x263424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263424u;
label_263424:
    // 0x263424: 0x1440020e  bnez        $v0, . + 4 + (0x20E << 2)
label_263428:
    if (ctx->pc == 0x263428u) {
        ctx->pc = 0x263428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263424u;
        // 0x263428: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26342Cu;
        goto label_26342c;
    }
    ctx->pc = 0x263424u;
    {
        const bool branch_taken_0x263424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263424u;
        // 0x263428: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263424) {
            ctx->pc = 0x263C60u;
            goto label_263c60;
        }
    }
    ctx->pc = 0x26342Cu;
label_26342c:
    // 0x26342c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x26342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_263430:
    // 0x263430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263434:
    // 0x263434: 0xc44c0278  lwc1        $f12, 0x278($v0)
    ctx->pc = 0x263434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_263438:
    // 0x263438: 0xc089912  jal         func_226448
label_26343c:
    if (ctx->pc == 0x26343Cu) {
        ctx->pc = 0x26343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263438u;
        // 0x26343c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263440u;
        goto label_263440;
    }
    ctx->pc = 0x263438u;
    SET_GPR_U32(ctx, 31, 0x263440u);
    ctx->pc = 0x26343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263438u;
    // 0x26343c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x263438u, 0x263440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263440u;
label_263440:
    // 0x263440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263444:
    // 0x263444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x263444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263448:
    // 0x263448: 0xc099cb4  jal         func_2672D0
label_26344c:
    if (ctx->pc == 0x26344Cu) {
        ctx->pc = 0x26344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263448u;
        // 0x26344c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263450u;
        goto label_263450;
    }
    ctx->pc = 0x263448u;
    SET_GPR_U32(ctx, 31, 0x263450u);
    ctx->pc = 0x26344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263448u;
    // 0x26344c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x263448u, 0x263450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263450u;
label_263450:
    // 0x263450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263454:
    // 0x263454: 0xc0e409a  jal         func_390268
label_263458:
    if (ctx->pc == 0x263458u) {
        ctx->pc = 0x263458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263454u;
        // 0x263458: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26345Cu;
        goto label_26345c;
    }
    ctx->pc = 0x263454u;
    SET_GPR_U32(ctx, 31, 0x26345Cu);
    ctx->pc = 0x263458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263454u;
    // 0x263458: 0x266400c4  addiu       $a0, $s3, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x263454u, 0x26345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26345Cu;
label_26345c:
    // 0x26345c: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
label_263460:
    if (ctx->pc == 0x263460u) {
        ctx->pc = 0x263460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26345Cu;
        // 0x263460: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263464u;
        goto label_263464;
    }
    ctx->pc = 0x26345Cu;
    {
        const bool branch_taken_0x26345c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x263460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26345Cu;
        // 0x263460: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26345c) {
            ctx->pc = 0x263484u;
            goto label_263484;
        }
    }
    ctx->pc = 0x263464u;
label_263464:
    // 0x263464: 0x124001fd  beqz        $s2, . + 4 + (0x1FD << 2)
label_263468:
    if (ctx->pc == 0x263468u) {
        ctx->pc = 0x263468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263464u;
        // 0x263468: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26346Cu;
        goto label_26346c;
    }
    ctx->pc = 0x263464u;
    {
        const bool branch_taken_0x263464 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x263468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263464u;
        // 0x263468: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263464) {
            ctx->pc = 0x263C5Cu;
            goto label_263c5c;
        }
    }
    ctx->pc = 0x26346Cu;
label_26346c:
    // 0x26346c: 0x2e060001  sltiu       $a2, $s0, 0x1
    ctx->pc = 0x26346cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_263470:
    // 0x263470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263474:
    // 0x263474: 0xc09dec8  jal         func_277B20
label_263478:
    if (ctx->pc == 0x263478u) {
        ctx->pc = 0x263478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263474u;
        // 0x263478: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26347Cu;
        goto label_26347c;
    }
    ctx->pc = 0x263474u;
    SET_GPR_U32(ctx, 31, 0x26347Cu);
    ctx->pc = 0x263478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263474u;
    // 0x263478: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B20u, 0x263474u, 0x26347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26347Cu;
label_26347c:
    // 0x26347c: 0x104001f7  beqz        $v0, . + 4 + (0x1F7 << 2)
label_263480:
    if (ctx->pc == 0x263480u) {
        ctx->pc = 0x263480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26347Cu;
        // 0x263480: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263484u;
        goto label_263484;
    }
    ctx->pc = 0x26347Cu;
    {
        const bool branch_taken_0x26347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26347Cu;
        // 0x263480: 0x8fa50038  lw          $a1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26347c) {
            ctx->pc = 0x263C5Cu;
            goto label_263c5c;
        }
    }
    ctx->pc = 0x263484u;
label_263484:
    // 0x263484: 0xc0950ba  jal         func_2542E8
label_263488:
    if (ctx->pc == 0x263488u) {
        ctx->pc = 0x263488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263484u;
        // 0x263488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26348Cu;
        goto label_26348c;
    }
    ctx->pc = 0x263484u;
    SET_GPR_U32(ctx, 31, 0x26348Cu);
    ctx->pc = 0x263488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263484u;
    // 0x263488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x263484u, 0x26348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26348Cu;
label_26348c:
    // 0x26348c: 0xc10b1c6  jal         func_42C718
label_263490:
    if (ctx->pc == 0x263490u) {
        ctx->pc = 0x263490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26348Cu;
        // 0x263490: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x263494u;
        goto label_263494;
    }
    ctx->pc = 0x26348Cu;
    SET_GPR_U32(ctx, 31, 0x263494u);
    ctx->pc = 0x263490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26348Cu;
    // 0x263490: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x26348Cu, 0x263494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263494u;
label_263494:
    // 0x263494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x263494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263498:
    // 0x263498: 0xc08c6a0  jal         func_231A80
label_26349c:
    if (ctx->pc == 0x26349Cu) {
        ctx->pc = 0x26349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263498u;
        // 0x26349c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634A0u;
        goto label_2634a0;
    }
    ctx->pc = 0x263498u;
    SET_GPR_U32(ctx, 31, 0x2634A0u);
    ctx->pc = 0x26349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263498u;
    // 0x26349c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x263498u, 0x2634A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634A0u;
label_2634a0:
    // 0x2634a0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2634a4:
    if (ctx->pc == 0x2634A4u) {
        ctx->pc = 0x2634A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634A0u;
        // 0x2634a4: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634A8u;
        goto label_2634a8;
    }
    ctx->pc = 0x2634A0u;
    {
        const bool branch_taken_0x2634a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634a0) {
            ctx->pc = 0x2634A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2634A0u;
            // 0x2634a4: 0xde6200e0  ld          $v0, 0xE0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2634F8u;
            goto label_2634f8;
        }
    }
    ctx->pc = 0x2634A8u;
label_2634a8:
    // 0x2634a8: 0xc088ade  jal         func_222B78
label_2634ac:
    if (ctx->pc == 0x2634ACu) {
        ctx->pc = 0x2634ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634A8u;
        // 0x2634ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634B0u;
        goto label_2634b0;
    }
    ctx->pc = 0x2634A8u;
    SET_GPR_U32(ctx, 31, 0x2634B0u);
    ctx->pc = 0x2634ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2634A8u;
    // 0x2634ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2634A8u, 0x2634B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634B0u;
label_2634b0:
    // 0x2634b0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_2634b4:
    if (ctx->pc == 0x2634B4u) {
        ctx->pc = 0x2634B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634B0u;
        // 0x2634b4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634B8u;
        goto label_2634b8;
    }
    ctx->pc = 0x2634B0u;
    {
        const bool branch_taken_0x2634b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2634B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634B0u;
        // 0x2634b4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634b0) {
            ctx->pc = 0x2634CCu;
            goto label_2634cc;
        }
    }
    ctx->pc = 0x2634B8u;
label_2634b8:
    // 0x2634b8: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x2634b8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2634bc:
    // 0x2634bc: 0x0  nop
    ctx->pc = 0x2634bcu;
    // NOP
label_2634c0:
    // 0x2634c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2634c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2634c4:
    // 0x2634c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2634c8:
    if (ctx->pc == 0x2634C8u) {
        ctx->pc = 0x2634CCu;
        goto label_2634cc;
    }
    ctx->pc = 0x2634C4u;
    {
        const bool branch_taken_0x2634c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634c4) {
            ctx->pc = 0x2634E8u;
            goto label_2634e8;
        }
    }
    ctx->pc = 0x2634CCu;
label_2634cc:
    // 0x2634cc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2634ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2634d0:
    // 0x2634d0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2634d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2634d4:
    // 0x2634d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2634d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2634d8:
    // 0x2634d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2634d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2634dc:
    // 0x2634dc: 0x0  nop
    ctx->pc = 0x2634dcu;
    // NOP
label_2634e0:
    // 0x2634e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2634e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2634e4:
    // 0x2634e4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2634e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2634e8:
    // 0x2634e8: 0xc10b1c6  jal         func_42C718
label_2634ec:
    if (ctx->pc == 0x2634ECu) {
        ctx->pc = 0x2634ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2634E8u;
        // 0x2634ec: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2634F0u;
        goto label_2634f0;
    }
    ctx->pc = 0x2634E8u;
    SET_GPR_U32(ctx, 31, 0x2634F0u);
    ctx->pc = 0x2634ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2634E8u;
    // 0x2634ec: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2634E8u, 0x2634F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634F0u;
label_2634f0:
    // 0x2634f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2634f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2634f4:
    // 0x2634f4: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x2634f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
label_2634f8:
    // 0x2634f8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x2634f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_2634fc:
    // 0x2634fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2634fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263500:
    // 0x263500: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x263500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_263504:
    // 0x263504: 0xc088e78  jal         func_2239E0
label_263508:
    if (ctx->pc == 0x263508u) {
        ctx->pc = 0x263508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263504u;
        // 0x263508: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26350Cu;
        goto label_26350c;
    }
    ctx->pc = 0x263504u;
    SET_GPR_U32(ctx, 31, 0x26350Cu);
    ctx->pc = 0x263508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263504u;
    // 0x263508: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x263504u, 0x26350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26350Cu;
label_26350c:
    // 0x26350c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_263510:
    if (ctx->pc == 0x263510u) {
        ctx->pc = 0x263514u;
        goto label_263514;
    }
    ctx->pc = 0x26350Cu;
    {
        const bool branch_taken_0x26350c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26350c) {
            ctx->pc = 0x263570u;
            goto label_263570;
        }
    }
    ctx->pc = 0x263514u;
label_263514:
    // 0x263514: 0xc088e80  jal         func_223A00
label_263518:
    if (ctx->pc == 0x263518u) {
        ctx->pc = 0x263518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263514u;
        // 0x263518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26351Cu;
        goto label_26351c;
    }
    ctx->pc = 0x263514u;
    SET_GPR_U32(ctx, 31, 0x26351Cu);
    ctx->pc = 0x263518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263514u;
    // 0x263518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x263514u, 0x26351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26351Cu;
label_26351c:
    // 0x26351c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_263520:
    if (ctx->pc == 0x263520u) {
        ctx->pc = 0x263524u;
        goto label_263524;
    }
    ctx->pc = 0x26351Cu;
    {
        const bool branch_taken_0x26351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26351c) {
            ctx->pc = 0x263570u;
            goto label_263570;
        }
    }
    ctx->pc = 0x263524u;
label_263524:
    // 0x263524: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_263528:
    if (ctx->pc == 0x263528u) {
        ctx->pc = 0x26352Cu;
        goto label_26352c;
    }
    ctx->pc = 0x263524u;
    {
        const bool branch_taken_0x263524 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x263524) {
            ctx->pc = 0x263550u;
            goto label_263550;
        }
    }
    ctx->pc = 0x26352Cu;
label_26352c:
    // 0x26352c: 0xc089944  jal         func_226510
label_263530:
    if (ctx->pc == 0x263530u) {
        ctx->pc = 0x263530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26352Cu;
        // 0x263530: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263534u;
        goto label_263534;
    }
    ctx->pc = 0x26352Cu;
    SET_GPR_U32(ctx, 31, 0x263534u);
    ctx->pc = 0x263530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26352Cu;
    // 0x263530: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x26352Cu, 0x263534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263534u;
label_263534:
    // 0x263534: 0xc68c0278  lwc1        $f12, 0x278($s4)
    ctx->pc = 0x263534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_263538:
    // 0x263538: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x263538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26353c:
    // 0x26353c: 0x0  nop
    ctx->pc = 0x26353cu;
    // NOP
label_263540:
    // 0x263540: 0x450001c7  bc1f        . + 4 + (0x1C7 << 2)
label_263544:
    if (ctx->pc == 0x263544u) {
        ctx->pc = 0x263544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263540u;
        // 0x263544: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263548u;
        goto label_263548;
    }
    ctx->pc = 0x263540u;
    {
        const bool branch_taken_0x263540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x263544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263540u;
        // 0x263544: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263540) {
            ctx->pc = 0x263C60u;
            goto label_263c60;
        }
    }
    ctx->pc = 0x263548u;
label_263548:
    // 0x263548: 0xc089912  jal         func_226448
label_26354c:
    if (ctx->pc == 0x26354Cu) {
        ctx->pc = 0x26354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263548u;
        // 0x26354c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263550u;
        goto label_263550;
    }
    ctx->pc = 0x263548u;
    SET_GPR_U32(ctx, 31, 0x263550u);
    ctx->pc = 0x26354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263548u;
    // 0x26354c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x263548u, 0x263550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263550u;
label_263550:
    // 0x263550: 0xc098a30  jal         func_2628C0
label_263554:
    if (ctx->pc == 0x263554u) {
        ctx->pc = 0x263554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263550u;
        // 0x263554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263558u;
        goto label_263558;
    }
    ctx->pc = 0x263550u;
    SET_GPR_U32(ctx, 31, 0x263558u);
    ctx->pc = 0x263554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263550u;
    // 0x263554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2628C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2628C0u, 0x263550u, 0x263558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263558u;
label_263558:
    // 0x263558: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x263558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_26355c:
    // 0x26355c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263560:
    // 0x263560: 0xc08ae58  jal         func_22B960
label_263564:
    if (ctx->pc == 0x263564u) {
        ctx->pc = 0x263564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263560u;
        // 0x263564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263568u;
        goto label_263568;
    }
    ctx->pc = 0x263560u;
    SET_GPR_U32(ctx, 31, 0x263568u);
    ctx->pc = 0x263564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263560u;
    // 0x263564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x263560u, 0x263568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263568u;
label_263568:
    // 0x263568: 0x1000000e  b           . + 4 + (0xE << 2)
label_26356c:
    if (ctx->pc == 0x26356Cu) {
        ctx->pc = 0x26356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263568u;
        // 0x26356c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263570u;
        goto label_263570;
    }
    ctx->pc = 0x263568u;
    {
        const bool branch_taken_0x263568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263568u;
        // 0x26356c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263568) {
            ctx->pc = 0x2635A4u;
            goto label_2635a4;
        }
    }
    ctx->pc = 0x263570u;
label_263570:
    // 0x263570: 0xc098a48  jal         func_262920
label_263574:
    if (ctx->pc == 0x263574u) {
        ctx->pc = 0x263574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263570u;
        // 0x263574: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263578u;
        goto label_263578;
    }
    ctx->pc = 0x263570u;
    SET_GPR_U32(ctx, 31, 0x263578u);
    ctx->pc = 0x263574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263570u;
    // 0x263574: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262920u, 0x263570u, 0x263578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263578u;
label_263578:
    // 0x263578: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x263578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_26357c:
    // 0x26357c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_263580:
    if (ctx->pc == 0x263580u) {
        ctx->pc = 0x263580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26357Cu;
        // 0x263580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263584u;
        goto label_263584;
    }
    ctx->pc = 0x26357Cu;
    {
        const bool branch_taken_0x26357c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x263580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26357Cu;
        // 0x263580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26357c) {
            ctx->pc = 0x2635A4u;
            goto label_2635a4;
        }
    }
    ctx->pc = 0x263584u;
label_263584:
    // 0x263584: 0xc095018  jal         func_254060
label_263588:
    if (ctx->pc == 0x263588u) {
        ctx->pc = 0x263588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263584u;
        // 0x263588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26358Cu;
        goto label_26358c;
    }
    ctx->pc = 0x263584u;
    SET_GPR_U32(ctx, 31, 0x26358Cu);
    ctx->pc = 0x263588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263584u;
    // 0x263588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x263584u, 0x26358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26358Cu;
label_26358c:
    // 0x26358c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x26358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_263590:
    // 0x263590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_263594:
    if (ctx->pc == 0x263594u) {
        ctx->pc = 0x263594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263590u;
        // 0x263594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263598u;
        goto label_263598;
    }
    ctx->pc = 0x263590u;
    {
        const bool branch_taken_0x263590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263590u;
        // 0x263594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263590) {
            ctx->pc = 0x2635A0u;
            goto label_2635a0;
        }
    }
    ctx->pc = 0x263598u;
label_263598:
    // 0x263598: 0xc094fb4  jal         func_253ED0
label_26359c:
    if (ctx->pc == 0x26359Cu) {
        ctx->pc = 0x26359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263598u;
        // 0x26359c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2635A0u;
        goto label_2635a0;
    }
    ctx->pc = 0x263598u;
    SET_GPR_U32(ctx, 31, 0x2635A0u);
    ctx->pc = 0x26359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263598u;
    // 0x26359c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x263598u, 0x2635A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2635A0u;
label_2635a0:
    // 0x2635a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2635a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2635a4:
    // 0x2635a4: 0xc09970a  jal         func_265C28
label_2635a8:
    if (ctx->pc == 0x2635A8u) {
        ctx->pc = 0x2635A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635A4u;
        // 0x2635a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2635ACu;
        goto label_2635ac;
    }
    ctx->pc = 0x2635A4u;
    SET_GPR_U32(ctx, 31, 0x2635ACu);
    ctx->pc = 0x2635A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2635A4u;
    // 0x2635a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265C28u, 0x2635A4u, 0x2635ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2635ACu;
label_2635ac:
    // 0x2635ac: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_2635b0:
    if (ctx->pc == 0x2635B0u) {
        ctx->pc = 0x2635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635ACu;
        // 0x2635b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2635B4u;
        goto label_2635b4;
    }
    ctx->pc = 0x2635ACu;
    {
        const bool branch_taken_0x2635ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635ACu;
        // 0x2635b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635ac) {
            ctx->pc = 0x2637B8u;
            goto label_2637b8;
        }
    }
    ctx->pc = 0x2635B4u;
label_2635b4:
    // 0x2635b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2635b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2635b8:
    // 0x2635b8: 0xc087b0e  jal         func_21EC38
label_2635bc:
    if (ctx->pc == 0x2635BCu) {
        ctx->pc = 0x2635BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635B8u;
        // 0x2635bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2635C0u;
        goto label_2635c0;
    }
    ctx->pc = 0x2635B8u;
    SET_GPR_U32(ctx, 31, 0x2635C0u);
    ctx->pc = 0x2635BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2635B8u;
    // 0x2635bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x2635B8u, 0x2635C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2635C0u;
label_2635c0:
    // 0x2635c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2635c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2635c4:
    // 0x2635c4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2635c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_2635c8:
    // 0x2635c8: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x2635c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_2635cc:
    // 0x2635cc: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2635ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2635d0:
    // 0x2635d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2635d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2635d4:
    // 0x2635d4: 0x2471dd30  addiu       $s1, $v1, -0x22D0
    ctx->pc = 0x2635d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958384));
label_2635d8:
    // 0x2635d8: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x2635d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
label_2635dc:
    // 0x2635dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2635dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2635e0:
    // 0x2635e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2635e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2635e4:
    // 0x2635e4: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x2635e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
label_2635e8:
    // 0x2635e8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2635e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2635ec:
    // 0x2635ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2635ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2635f0:
    // 0x2635f0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x2635f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2635f4:
    // 0x2635f4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2635f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2635f8:
    // 0x2635f8: 0x40f809  jalr        $v0
label_2635fc:
    if (ctx->pc == 0x2635FCu) {
        ctx->pc = 0x2635FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635F8u;
        // 0x2635fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263600u;
        goto label_263600;
    }
    ctx->pc = 0x2635F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263600u);
        ctx->pc = 0x2635FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635F8u;
        // 0x2635fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2635F8u, 0x263600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263600u;
label_263600:
    // 0x263600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263604:
    // 0x263604: 0xc041532  jal         func_1054C8
label_263608:
    if (ctx->pc == 0x263608u) {
        ctx->pc = 0x263608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263604u;
        // 0x263608: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26360Cu;
        goto label_26360c;
    }
    ctx->pc = 0x263604u;
    SET_GPR_U32(ctx, 31, 0x26360Cu);
    ctx->pc = 0x263608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263604u;
    // 0x263608: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263604u, 0x26360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26360Cu;
label_26360c:
    // 0x26360c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26360cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263610:
    // 0x263610: 0xc041532  jal         func_1054C8
label_263614:
    if (ctx->pc == 0x263614u) {
        ctx->pc = 0x263614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263610u;
        // 0x263614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263618u;
        goto label_263618;
    }
    ctx->pc = 0x263610u;
    SET_GPR_U32(ctx, 31, 0x263618u);
    ctx->pc = 0x263614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263610u;
    // 0x263614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263610u, 0x263618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263618u;
label_263618:
    // 0x263618: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_26361c:
    if (ctx->pc == 0x26361Cu) {
        ctx->pc = 0x26361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263618u;
        // 0x26361c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263620u;
        goto label_263620;
    }
    ctx->pc = 0x263618u;
    {
        const bool branch_taken_0x263618 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263618u;
        // 0x26361c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263618) {
            ctx->pc = 0x26363Cu;
            goto label_26363c;
        }
    }
    ctx->pc = 0x263620u;
label_263620:
    // 0x263620: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x263620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_263624:
    // 0x263624: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x263624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_263628:
    // 0x263628: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x263628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26362c:
    // 0x26362c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26362cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_263630:
    // 0x263630: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263634:
    // 0x263634: 0xc041b20  jal         func_106C80
label_263638:
    if (ctx->pc == 0x263638u) {
        ctx->pc = 0x263638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263634u;
        // 0x263638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26363Cu;
        goto label_26363c;
    }
    ctx->pc = 0x263634u;
    SET_GPR_U32(ctx, 31, 0x26363Cu);
    ctx->pc = 0x263638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263634u;
    // 0x263638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x263634u, 0x26363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26363Cu;
label_26363c:
    // 0x26363c: 0xc05d484  jal         func_175210
label_263640:
    if (ctx->pc == 0x263640u) {
        ctx->pc = 0x263640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26363Cu;
        // 0x263640: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263644u;
        goto label_263644;
    }
    ctx->pc = 0x26363Cu;
    SET_GPR_U32(ctx, 31, 0x263644u);
    ctx->pc = 0x263640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26363Cu;
    // 0x263640: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26363Cu, 0x263644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263644u;
label_263644:
    // 0x263644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_263648:
    // 0x263648: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x263648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26364c:
    // 0x26364c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26364cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_263650:
    // 0x263650: 0xa0f809  jalr        $a1
label_263654:
    if (ctx->pc == 0x263654u) {
        ctx->pc = 0x263654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263650u;
        // 0x263654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263658u;
        goto label_263658;
    }
    ctx->pc = 0x263650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x263658u);
        ctx->pc = 0x263654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263650u;
        // 0x263654: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263650u, 0x263658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263658u;
label_263658:
    // 0x263658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x263658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26365c:
    // 0x26365c: 0xc087016  jal         func_21C058
label_263660:
    if (ctx->pc == 0x263660u) {
        ctx->pc = 0x263660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26365Cu;
        // 0x263660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263664u;
        goto label_263664;
    }
    ctx->pc = 0x26365Cu;
    SET_GPR_U32(ctx, 31, 0x263664u);
    ctx->pc = 0x263660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26365Cu;
    // 0x263660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26365Cu, 0x263664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263664u;
label_263664:
    // 0x263664: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x263664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_263668:
    // 0x263668: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
label_26366c:
    if (ctx->pc == 0x26366Cu) {
        ctx->pc = 0x26366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263668u;
        // 0x26366c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263670u;
        goto label_263670;
    }
    ctx->pc = 0x263668u;
    {
        const bool branch_taken_0x263668 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x263668) {
            ctx->pc = 0x26366Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263668u;
            // 0x26366c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2636BCu;
            goto label_2636bc;
        }
    }
    ctx->pc = 0x263670u;
label_263670:
    // 0x263670: 0x12e00049  beqz        $s7, . + 4 + (0x49 << 2)
label_263674:
    if (ctx->pc == 0x263674u) {
        ctx->pc = 0x263674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263670u;
        // 0x263674: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263678u;
        goto label_263678;
    }
    ctx->pc = 0x263670u;
    {
        const bool branch_taken_0x263670 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x263674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263670u;
        // 0x263674: 0x8fa60048  lw          $a2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263670) {
            ctx->pc = 0x263798u;
            goto label_263798;
        }
    }
    ctx->pc = 0x263678u;
label_263678:
    // 0x263678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26367c:
    // 0x26367c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26367cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263680:
    // 0x263680: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x263680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263684:
    // 0x263684: 0xc099e80  jal         func_267A00
label_263688:
    if (ctx->pc == 0x263688u) {
        ctx->pc = 0x263688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263684u;
        // 0x263688: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26368Cu;
        goto label_26368c;
    }
    ctx->pc = 0x263684u;
    SET_GPR_U32(ctx, 31, 0x26368Cu);
    ctx->pc = 0x263688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263684u;
    // 0x263688: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x263684u, 0x26368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26368Cu;
label_26368c:
    // 0x26368c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x26368cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_263690:
    // 0x263690: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263694:
    // 0x263694: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x263694u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_263698:
    // 0x263698: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x263698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26369c:
    // 0x26369c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x26369cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2636a0:
    // 0x2636a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2636a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2636a4:
    // 0x2636a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2636a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2636a8:
    // 0x2636a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2636a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2636ac:
    // 0x2636ac: 0xc041664  jal         func_105990
label_2636b0:
    if (ctx->pc == 0x2636B0u) {
        ctx->pc = 0x2636B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636ACu;
        // 0x2636b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2636B4u;
        goto label_2636b4;
    }
    ctx->pc = 0x2636ACu;
    SET_GPR_U32(ctx, 31, 0x2636B4u);
    ctx->pc = 0x2636B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636ACu;
    // 0x2636b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2636ACu, 0x2636B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636B4u;
label_2636b4:
    // 0x2636b4: 0x10000039  b           . + 4 + (0x39 << 2)
label_2636b8:
    if (ctx->pc == 0x2636B8u) {
        ctx->pc = 0x2636B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636B4u;
        // 0x2636b8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2636BCu;
        goto label_2636bc;
    }
    ctx->pc = 0x2636B4u;
    {
        const bool branch_taken_0x2636b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2636B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636B4u;
        // 0x2636b8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636b4) {
            ctx->pc = 0x26379Cu;
            goto label_26379c;
        }
    }
    ctx->pc = 0x2636BCu;
label_2636bc:
    // 0x2636bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2636bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2636c0:
    // 0x2636c0: 0xc0cd526  jal         func_335498
label_2636c4:
    if (ctx->pc == 0x2636C4u) {
        ctx->pc = 0x2636C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636C0u;
        // 0x2636c4: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2636C8u;
        goto label_2636c8;
    }
    ctx->pc = 0x2636C0u;
    SET_GPR_U32(ctx, 31, 0x2636C8u);
    ctx->pc = 0x2636C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636C0u;
    // 0x2636c4: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2636C0u, 0x2636C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636C8u;
label_2636c8:
    // 0x2636c8: 0x24500134  addiu       $s0, $v0, 0x134
    ctx->pc = 0x2636c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_2636cc:
    // 0x2636cc: 0xc041532  jal         func_1054C8
label_2636d0:
    if (ctx->pc == 0x2636D0u) {
        ctx->pc = 0x2636D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636CCu;
        // 0x2636d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2636D4u;
        goto label_2636d4;
    }
    ctx->pc = 0x2636CCu;
    SET_GPR_U32(ctx, 31, 0x2636D4u);
    ctx->pc = 0x2636D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636CCu;
    // 0x2636d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2636CCu, 0x2636D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636D4u;
label_2636d4:
    // 0x2636d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2636d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2636d8:
    // 0x2636d8: 0x1280001f  beqz        $s4, . + 4 + (0x1F << 2)
label_2636dc:
    if (ctx->pc == 0x2636DCu) {
        ctx->pc = 0x2636E0u;
        goto label_2636e0;
    }
    ctx->pc = 0x2636D8u;
    {
        const bool branch_taken_0x2636d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636d8) {
            ctx->pc = 0x263758u;
            goto label_263758;
        }
    }
    ctx->pc = 0x2636E0u;
label_2636e0:
    // 0x2636e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2636e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2636e4:
    // 0x2636e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2636e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2636e8:
    // 0x2636e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2636e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2636ec:
    // 0x2636ec: 0x40f809  jalr        $v0
label_2636f0:
    if (ctx->pc == 0x2636F0u) {
        ctx->pc = 0x2636F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636ECu;
        // 0x2636f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2636F4u;
        goto label_2636f4;
    }
    ctx->pc = 0x2636ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2636F4u);
        ctx->pc = 0x2636F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636ECu;
        // 0x2636f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2636ECu, 0x2636F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2636F4u;
label_2636f4:
    // 0x2636f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2636f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2636f8:
    // 0x2636f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2636f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2636fc:
    // 0x2636fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2636fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263700:
    // 0x263700: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x263700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_263704:
    // 0x263704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_263708:
    // 0x263708: 0xc099e80  jal         func_267A00
label_26370c:
    if (ctx->pc == 0x26370Cu) {
        ctx->pc = 0x26370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263708u;
        // 0x26370c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263710u;
        goto label_263710;
    }
    ctx->pc = 0x263708u;
    SET_GPR_U32(ctx, 31, 0x263710u);
    ctx->pc = 0x26370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263708u;
    // 0x26370c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x263708u, 0x263710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263710u;
label_263710:
    // 0x263710: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x263710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_263714:
    // 0x263714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263718:
    // 0x263718: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26371c:
    // 0x26371c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263720:
    // 0x263720: 0x40f809  jalr        $v0
label_263724:
    if (ctx->pc == 0x263724u) {
        ctx->pc = 0x263724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263720u;
        // 0x263724: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263728u;
        goto label_263728;
    }
    ctx->pc = 0x263720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263728u);
        ctx->pc = 0x263724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263720u;
        // 0x263724: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263720u, 0x263728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263728u;
label_263728:
    // 0x263728: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x263728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26372c:
    // 0x26372c: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26372cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_263730:
    // 0x263730: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x263730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263734:
    // 0x263734: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x263734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263738:
    // 0x263738: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x263738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_26373c:
    // 0x26373c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26373cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263740:
    // 0x263740: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x263740u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263744:
    // 0x263744: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263748:
    // 0x263748: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x263748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26374c:
    // 0x26374c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26374cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263750:
    // 0x263750: 0xc04229e  jal         func_108A78
label_263754:
    if (ctx->pc == 0x263754u) {
        ctx->pc = 0x263754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263750u;
        // 0x263754: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263758u;
        goto label_263758;
    }
    ctx->pc = 0x263750u;
    SET_GPR_U32(ctx, 31, 0x263758u);
    ctx->pc = 0x263754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263750u;
    // 0x263754: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x263750u, 0x263758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263758u;
label_263758:
    // 0x263758: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
label_26375c:
    if (ctx->pc == 0x26375Cu) {
        ctx->pc = 0x26375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263758u;
        // 0x26375c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263760u;
        goto label_263760;
    }
    ctx->pc = 0x263758u;
    {
        const bool branch_taken_0x263758 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263758u;
        // 0x26375c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263758) {
            ctx->pc = 0x26379Cu;
            goto label_26379c;
        }
    }
    ctx->pc = 0x263760u;
label_263760:
    // 0x263760: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x263760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_263764:
    // 0x263764: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263768:
    // 0x263768: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26376c:
    // 0x26376c: 0x40f809  jalr        $v0
label_263770:
    if (ctx->pc == 0x263770u) {
        ctx->pc = 0x263770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26376Cu;
        // 0x263770: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263774u;
        goto label_263774;
    }
    ctx->pc = 0x26376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263774u);
        ctx->pc = 0x263770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26376Cu;
        // 0x263770: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26376Cu, 0x263774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263774u;
label_263774:
    // 0x263774: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263778:
    // 0x263778: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x263778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26377c:
    // 0x26377c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x26377cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_263780:
    // 0x263780: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x263780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263784:
    // 0x263784: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x263784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_263788:
    // 0x263788: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x263788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26378c:
    // 0x26378c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26378cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263790:
    // 0x263790: 0xc041664  jal         func_105990
label_263794:
    if (ctx->pc == 0x263794u) {
        ctx->pc = 0x263794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263790u;
        // 0x263794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263798u;
        goto label_263798;
    }
    ctx->pc = 0x263790u;
    SET_GPR_U32(ctx, 31, 0x263798u);
    ctx->pc = 0x263794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263790u;
    // 0x263794: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x263790u, 0x263798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263798u;
label_263798:
    // 0x263798: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x263798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26379c:
    // 0x26379c: 0xc05d53a  jal         func_1754E8
label_2637a0:
    if (ctx->pc == 0x2637A0u) {
        ctx->pc = 0x2637A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26379Cu;
        // 0x2637a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2637A4u;
        goto label_2637a4;
    }
    ctx->pc = 0x26379Cu;
    SET_GPR_U32(ctx, 31, 0x2637A4u);
    ctx->pc = 0x2637A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26379Cu;
    // 0x2637a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26379Cu, 0x2637A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637A4u;
label_2637a4:
    // 0x2637a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2637a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2637a8:
    // 0x2637a8: 0xc05d4f6  jal         func_1753D8
label_2637ac:
    if (ctx->pc == 0x2637ACu) {
        ctx->pc = 0x2637ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637A8u;
        // 0x2637ac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2637B0u;
        goto label_2637b0;
    }
    ctx->pc = 0x2637A8u;
    SET_GPR_U32(ctx, 31, 0x2637B0u);
    ctx->pc = 0x2637ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637A8u;
    // 0x2637ac: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2637A8u, 0x2637B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637B0u;
label_2637b0:
    // 0x2637b0: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2637b4:
    if (ctx->pc == 0x2637B4u) {
        ctx->pc = 0x2637B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637B0u;
        // 0x2637b4: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2637B8u;
        goto label_2637b8;
    }
    ctx->pc = 0x2637B0u;
    {
        const bool branch_taken_0x2637b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637B0u;
        // 0x2637b4: 0x3c040056  lui         $a0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637b0) {
            ctx->pc = 0x263B00u;
            goto label_263b00;
        }
    }
    ctx->pc = 0x2637B8u;
label_2637b8:
    // 0x2637b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2637b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2637bc:
    // 0x2637bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2637bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2637c0:
    // 0x2637c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2637c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2637c4:
    // 0x2637c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2637c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2637c8:
    // 0x2637c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2637c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2637cc:
    // 0x2637cc: 0xc0875a0  jal         func_21D680
label_2637d0:
    if (ctx->pc == 0x2637D0u) {
        ctx->pc = 0x2637D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637CCu;
        // 0x2637d0: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2637D4u;
        goto label_2637d4;
    }
    ctx->pc = 0x2637CCu;
    SET_GPR_U32(ctx, 31, 0x2637D4u);
    ctx->pc = 0x2637D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637CCu;
    // 0x2637d0: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x2637CCu, 0x2637D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637D4u;
label_2637d4:
    // 0x2637d4: 0x2614dd30  addiu       $s4, $s0, -0x22D0
    ctx->pc = 0x2637d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_2637d8:
    // 0x2637d8: 0x8e5500d8  lw          $s5, 0xD8($s2)
    ctx->pc = 0x2637d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2637dc:
    // 0x2637dc: 0xc041532  jal         func_1054C8
label_2637e0:
    if (ctx->pc == 0x2637E0u) {
        ctx->pc = 0x2637E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637DCu;
        // 0x2637e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2637E4u;
        goto label_2637e4;
    }
    ctx->pc = 0x2637DCu;
    SET_GPR_U32(ctx, 31, 0x2637E4u);
    ctx->pc = 0x2637E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637DCu;
    // 0x2637e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2637DCu, 0x2637E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637E4u;
label_2637e4:
    // 0x2637e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2637e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2637e8:
    // 0x2637e8: 0xc041532  jal         func_1054C8
label_2637ec:
    if (ctx->pc == 0x2637ECu) {
        ctx->pc = 0x2637ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637E8u;
        // 0x2637ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2637F0u;
        goto label_2637f0;
    }
    ctx->pc = 0x2637E8u;
    SET_GPR_U32(ctx, 31, 0x2637F0u);
    ctx->pc = 0x2637ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637E8u;
    // 0x2637ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2637E8u, 0x2637F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637F0u;
label_2637f0:
    // 0x2637f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2637f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2637f4:
    // 0x2637f4: 0xc041532  jal         func_1054C8
label_2637f8:
    if (ctx->pc == 0x2637F8u) {
        ctx->pc = 0x2637F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637F4u;
        // 0x2637f8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2637FCu;
        goto label_2637fc;
    }
    ctx->pc = 0x2637F4u;
    SET_GPR_U32(ctx, 31, 0x2637FCu);
    ctx->pc = 0x2637F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637F4u;
    // 0x2637f8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2637F4u, 0x2637FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637FCu;
label_2637fc:
    // 0x2637fc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2637fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263800:
    // 0x263800: 0xc041532  jal         func_1054C8
label_263804:
    if (ctx->pc == 0x263804u) {
        ctx->pc = 0x263804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263800u;
        // 0x263804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263808u;
        goto label_263808;
    }
    ctx->pc = 0x263800u;
    SET_GPR_U32(ctx, 31, 0x263808u);
    ctx->pc = 0x263804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263800u;
    // 0x263804: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263800u, 0x263808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263808u;
label_263808:
    // 0x263808: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_26380c:
    if (ctx->pc == 0x26380Cu) {
        ctx->pc = 0x26380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263808u;
        // 0x26380c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263810u;
        goto label_263810;
    }
    ctx->pc = 0x263808u;
    {
        const bool branch_taken_0x263808 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263808u;
        // 0x26380c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263808) {
            ctx->pc = 0x26382Cu;
            goto label_26382c;
        }
    }
    ctx->pc = 0x263810u;
label_263810:
    // 0x263810: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x263810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_263814:
    // 0x263814: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x263814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_263818:
    // 0x263818: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x263818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26381c:
    // 0x26381c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_263820:
    // 0x263820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263824:
    // 0x263824: 0xc041b20  jal         func_106C80
label_263828:
    if (ctx->pc == 0x263828u) {
        ctx->pc = 0x263828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263824u;
        // 0x263828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26382Cu;
        goto label_26382c;
    }
    ctx->pc = 0x263824u;
    SET_GPR_U32(ctx, 31, 0x26382Cu);
    ctx->pc = 0x263828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263824u;
    // 0x263828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x263824u, 0x26382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26382Cu;
label_26382c:
    // 0x26382c: 0xc05d484  jal         func_175210
label_263830:
    if (ctx->pc == 0x263830u) {
        ctx->pc = 0x263830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26382Cu;
        // 0x263830: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263834u;
        goto label_263834;
    }
    ctx->pc = 0x26382Cu;
    SET_GPR_U32(ctx, 31, 0x263834u);
    ctx->pc = 0x263830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26382Cu;
    // 0x263830: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26382Cu, 0x263834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263834u;
label_263834:
    // 0x263834: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_263838:
    // 0x263838: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x263838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26383c:
    // 0x26383c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26383cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_263840:
    // 0x263840: 0xa0f809  jalr        $a1
label_263844:
    if (ctx->pc == 0x263844u) {
        ctx->pc = 0x263844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263840u;
        // 0x263844: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263848u;
        goto label_263848;
    }
    ctx->pc = 0x263840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x263848u);
        ctx->pc = 0x263844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263840u;
        // 0x263844: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263840u, 0x263848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263848u;
label_263848:
    // 0x263848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26384c:
    // 0x26384c: 0xc087016  jal         func_21C058
label_263850:
    if (ctx->pc == 0x263850u) {
        ctx->pc = 0x263850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26384Cu;
        // 0x263850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263854u;
        goto label_263854;
    }
    ctx->pc = 0x26384Cu;
    SET_GPR_U32(ctx, 31, 0x263854u);
    ctx->pc = 0x263850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26384Cu;
    // 0x263850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26384Cu, 0x263854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263854u;
label_263854:
    // 0x263854: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x263854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_263858:
    // 0x263858: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_26385c:
    if (ctx->pc == 0x26385Cu) {
        ctx->pc = 0x263860u;
        goto label_263860;
    }
    ctx->pc = 0x263858u;
    {
        const bool branch_taken_0x263858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263858) {
            ctx->pc = 0x2639D4u;
            goto label_2639d4;
        }
    }
    ctx->pc = 0x263860u;
label_263860:
    // 0x263860: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_263864:
    if (ctx->pc == 0x263864u) {
        ctx->pc = 0x263864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263860u;
        // 0x263864: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263868u;
        goto label_263868;
    }
    ctx->pc = 0x263860u;
    {
        const bool branch_taken_0x263860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x263864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263860u;
        // 0x263864: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263860) {
            ctx->pc = 0x263884u;
            goto label_263884;
        }
    }
    ctx->pc = 0x263868u;
label_263868:
    // 0x263868: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x263868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26386c:
    // 0x26386c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26386cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263870:
    // 0x263870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263874:
    // 0x263874: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x263874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_263878:
    // 0x263878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x263878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26387c:
    // 0x26387c: 0xc04159e  jal         func_105678
label_263880:
    if (ctx->pc == 0x263880u) {
        ctx->pc = 0x263880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26387Cu;
        // 0x263880: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263884u;
        goto label_263884;
    }
    ctx->pc = 0x26387Cu;
    SET_GPR_U32(ctx, 31, 0x263884u);
    ctx->pc = 0x263880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26387Cu;
    // 0x263880: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26387Cu, 0x263884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263884u;
label_263884:
    // 0x263884: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x263884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_263888:
    // 0x263888: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x263888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_26388c:
    // 0x26388c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x26388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_263890:
    // 0x263890: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
label_263894:
    if (ctx->pc == 0x263894u) {
        ctx->pc = 0x263898u;
        goto label_263898;
    }
    ctx->pc = 0x263890u;
    {
        const bool branch_taken_0x263890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263890) {
            ctx->pc = 0x26396Cu;
            goto label_26396c;
        }
    }
    ctx->pc = 0x263898u;
label_263898:
    // 0x263898: 0xc041532  jal         func_1054C8
label_26389c:
    if (ctx->pc == 0x26389Cu) {
        ctx->pc = 0x26389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263898u;
        // 0x26389c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2638A0u;
        goto label_2638a0;
    }
    ctx->pc = 0x263898u;
    SET_GPR_U32(ctx, 31, 0x2638A0u);
    ctx->pc = 0x26389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263898u;
    // 0x26389c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263898u, 0x2638A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2638A0u;
label_2638a0:
    // 0x2638a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2638a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2638a4:
    // 0x2638a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2638a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2638a8:
    // 0x2638a8: 0xc089990  jal         func_226640
label_2638ac:
    if (ctx->pc == 0x2638ACu) {
        ctx->pc = 0x2638ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638A8u;
        // 0x2638ac: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2638B0u;
        goto label_2638b0;
    }
    ctx->pc = 0x2638A8u;
    SET_GPR_U32(ctx, 31, 0x2638B0u);
    ctx->pc = 0x2638ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2638A8u;
    // 0x2638ac: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2638A8u, 0x2638B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2638B0u;
label_2638b0:
    // 0x2638b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2638b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2638b4:
    // 0x2638b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2638b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2638b8:
    // 0x2638b8: 0x3442dfff  ori         $v0, $v0, 0xDFFF
    ctx->pc = 0x2638b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57343);
label_2638bc:
    // 0x2638bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2638bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2638c0:
    // 0x2638c0: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_2638c4:
    if (ctx->pc == 0x2638C4u) {
        ctx->pc = 0x2638C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638C0u;
        // 0x2638c4: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2638C8u;
        goto label_2638c8;
    }
    ctx->pc = 0x2638C0u;
    {
        const bool branch_taken_0x2638c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638C0u;
        // 0x2638c4: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638c0) {
            ctx->pc = 0x26391Cu;
            goto label_26391c;
        }
    }
    ctx->pc = 0x2638C8u;
label_2638c8:
    // 0x2638c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2638c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2638cc:
    // 0x2638cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2638ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2638d0:
    // 0x2638d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2638d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2638d4:
    // 0x2638d4: 0x40f809  jalr        $v0
label_2638d8:
    if (ctx->pc == 0x2638D8u) {
        ctx->pc = 0x2638D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638D4u;
        // 0x2638d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2638DCu;
        goto label_2638dc;
    }
    ctx->pc = 0x2638D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2638DCu);
        ctx->pc = 0x2638D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638D4u;
        // 0x2638d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2638D4u, 0x2638DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2638DCu;
label_2638dc:
    // 0x2638dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2638dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2638e0:
    // 0x2638e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2638e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2638e4:
    // 0x2638e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2638e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2638e8:
    // 0x2638e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2638e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2638ec:
    // 0x2638ec: 0x40f809  jalr        $v0
label_2638f0:
    if (ctx->pc == 0x2638F0u) {
        ctx->pc = 0x2638F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638ECu;
        // 0x2638f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2638F4u;
        goto label_2638f4;
    }
    ctx->pc = 0x2638ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2638F4u);
        ctx->pc = 0x2638F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638ECu;
        // 0x2638f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2638ECu, 0x2638F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2638F4u;
label_2638f4:
    // 0x2638f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2638f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2638f8:
    // 0x2638f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2638f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2638fc:
    // 0x2638fc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2638fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263900:
    // 0x263900: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x263900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263904:
    // 0x263904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263908:
    // 0x263908: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x263908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26390c:
    // 0x26390c: 0x240700c6  addiu       $a3, $zero, 0xC6
    ctx->pc = 0x26390cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_263910:
    // 0x263910: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x263910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_263914:
    // 0x263914: 0xc04229e  jal         func_108A78
label_263918:
    if (ctx->pc == 0x263918u) {
        ctx->pc = 0x263918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263914u;
        // 0x263918: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26391Cu;
        goto label_26391c;
    }
    ctx->pc = 0x263914u;
    SET_GPR_U32(ctx, 31, 0x26391Cu);
    ctx->pc = 0x263918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263914u;
    // 0x263918: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x263914u, 0x26391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26391Cu;
label_26391c:
    // 0x26391c: 0x12c00063  beqz        $s6, . + 4 + (0x63 << 2)
label_263920:
    if (ctx->pc == 0x263920u) {
        ctx->pc = 0x263924u;
        goto label_263924;
    }
    ctx->pc = 0x26391Cu;
    {
        const bool branch_taken_0x26391c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x26391c) {
            ctx->pc = 0x263AACu;
            goto label_263aac;
        }
    }
    ctx->pc = 0x263924u;
label_263924:
    // 0x263924: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x263924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_263928:
    // 0x263928: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26392c:
    // 0x26392c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263930:
    // 0x263930: 0x40f809  jalr        $v0
label_263934:
    if (ctx->pc == 0x263934u) {
        ctx->pc = 0x263934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263930u;
        // 0x263934: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263938u;
        goto label_263938;
    }
    ctx->pc = 0x263930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263938u);
        ctx->pc = 0x263934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263930u;
        // 0x263934: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263930u, 0x263938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263938u;
label_263938:
    // 0x263938: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x263938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26393c:
    // 0x26393c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263940:
    // 0x263940: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263944:
    // 0x263944: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263948:
    // 0x263948: 0x40f809  jalr        $v0
label_26394c:
    if (ctx->pc == 0x26394Cu) {
        ctx->pc = 0x26394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263948u;
        // 0x26394c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263950u;
        goto label_263950;
    }
    ctx->pc = 0x263948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263950u);
        ctx->pc = 0x26394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263948u;
        // 0x26394c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263948u, 0x263950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263950u;
label_263950:
    // 0x263950: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x263950u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_263954:
    // 0x263954: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263958:
    // 0x263958: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x263958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_26395c:
    // 0x26395c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26395cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263960:
    // 0x263960: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x263960u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_263964:
    // 0x263964: 0x10000014  b           . + 4 + (0x14 << 2)
label_263968:
    if (ctx->pc == 0x263968u) {
        ctx->pc = 0x263968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263964u;
        // 0x263968: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26396Cu;
        goto label_26396c;
    }
    ctx->pc = 0x263964u;
    {
        const bool branch_taken_0x263964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263964u;
        // 0x263968: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263964) {
            ctx->pc = 0x2639B8u;
            goto label_2639b8;
        }
    }
    ctx->pc = 0x26396Cu;
label_26396c:
    // 0x26396c: 0x12c0004f  beqz        $s6, . + 4 + (0x4F << 2)
label_263970:
    if (ctx->pc == 0x263970u) {
        ctx->pc = 0x263974u;
        goto label_263974;
    }
    ctx->pc = 0x26396Cu;
    {
        const bool branch_taken_0x26396c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x26396c) {
            ctx->pc = 0x263AACu;
            goto label_263aac;
        }
    }
    ctx->pc = 0x263974u;
label_263974:
    // 0x263974: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x263974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_263978:
    // 0x263978: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26397c:
    // 0x26397c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263980:
    // 0x263980: 0x40f809  jalr        $v0
label_263984:
    if (ctx->pc == 0x263984u) {
        ctx->pc = 0x263984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263980u;
        // 0x263984: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263988u;
        goto label_263988;
    }
    ctx->pc = 0x263980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263988u);
        ctx->pc = 0x263984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263980u;
        // 0x263984: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263980u, 0x263988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263988u;
label_263988:
    // 0x263988: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x263988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26398c:
    // 0x26398c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26398cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263990:
    // 0x263990: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263994:
    // 0x263994: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263998:
    // 0x263998: 0x40f809  jalr        $v0
label_26399c:
    if (ctx->pc == 0x26399Cu) {
        ctx->pc = 0x26399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263998u;
        // 0x26399c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2639A0u;
        goto label_2639a0;
    }
    ctx->pc = 0x263998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2639A0u);
        ctx->pc = 0x26399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263998u;
        // 0x26399c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263998u, 0x2639A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2639A0u;
label_2639a0:
    // 0x2639a0: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x2639a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_2639a4:
    // 0x2639a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2639a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2639a8:
    // 0x2639a8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2639a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2639ac:
    // 0x2639ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2639acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2639b0:
    // 0x2639b0: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x2639b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2639b4:
    // 0x2639b4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2639b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2639b8:
    // 0x2639b8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2639b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2639bc:
    // 0x2639bc: 0x256b2a38  addiu       $t3, $t3, 0x2A38
    ctx->pc = 0x2639bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
label_2639c0:
    // 0x2639c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2639c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2639c4:
    // 0x2639c4: 0xc04229e  jal         func_108A78
label_2639c8:
    if (ctx->pc == 0x2639C8u) {
        ctx->pc = 0x2639C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639C4u;
        // 0x2639c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2639CCu;
        goto label_2639cc;
    }
    ctx->pc = 0x2639C4u;
    SET_GPR_U32(ctx, 31, 0x2639CCu);
    ctx->pc = 0x2639C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2639C4u;
    // 0x2639c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x2639C4u, 0x2639CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2639CCu;
label_2639cc:
    // 0x2639cc: 0x10000037  b           . + 4 + (0x37 << 2)
label_2639d0:
    if (ctx->pc == 0x2639D0u) {
        ctx->pc = 0x2639D4u;
        goto label_2639d4;
    }
    ctx->pc = 0x2639CCu;
    {
        const bool branch_taken_0x2639cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639cc) {
            ctx->pc = 0x263AACu;
            goto label_263aac;
        }
    }
    ctx->pc = 0x2639D4u;
label_2639d4:
    // 0x2639d4: 0xc088ef0  jal         func_223BC0
label_2639d8:
    if (ctx->pc == 0x2639D8u) {
        ctx->pc = 0x2639D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639D4u;
        // 0x2639d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2639DCu;
        goto label_2639dc;
    }
    ctx->pc = 0x2639D4u;
    SET_GPR_U32(ctx, 31, 0x2639DCu);
    ctx->pc = 0x2639D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2639D4u;
    // 0x2639d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2639D4u, 0x2639DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2639DCu;
label_2639dc:
    // 0x2639dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2639e0:
    if (ctx->pc == 0x2639E0u) {
        ctx->pc = 0x2639E4u;
        goto label_2639e4;
    }
    ctx->pc = 0x2639DCu;
    {
        const bool branch_taken_0x2639dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639dc) {
            ctx->pc = 0x263A14u;
            goto label_263a14;
        }
    }
    ctx->pc = 0x2639E4u;
label_2639e4:
    // 0x2639e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2639e8:
    if (ctx->pc == 0x2639E8u) {
        ctx->pc = 0x2639E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639E4u;
        // 0x2639e8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2639ECu;
        goto label_2639ec;
    }
    ctx->pc = 0x2639E4u;
    {
        const bool branch_taken_0x2639e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639E4u;
        // 0x2639e8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639e4) {
            ctx->pc = 0x263A08u;
            goto label_263a08;
        }
    }
    ctx->pc = 0x2639ECu;
label_2639ec:
    // 0x2639ec: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2639ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2639f0:
    // 0x2639f0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2639f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2639f4:
    // 0x2639f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2639f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2639f8:
    // 0x2639f8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2639f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2639fc:
    // 0x2639fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2639fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263a00:
    // 0x263a00: 0xc04159e  jal         func_105678
label_263a04:
    if (ctx->pc == 0x263A04u) {
        ctx->pc = 0x263A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A00u;
        // 0x263a04: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263A08u;
        goto label_263a08;
    }
    ctx->pc = 0x263A00u;
    SET_GPR_U32(ctx, 31, 0x263A08u);
    ctx->pc = 0x263A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A00u;
    // 0x263a04: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x263A00u, 0x263A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A08u;
label_263a08:
    // 0x263a08: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x263a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_263a0c:
    // 0x263a0c: 0x1000000d  b           . + 4 + (0xD << 2)
label_263a10:
    if (ctx->pc == 0x263A10u) {
        ctx->pc = 0x263A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A0Cu;
        // 0x263a10: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263A14u;
        goto label_263a14;
    }
    ctx->pc = 0x263A0Cu;
    {
        const bool branch_taken_0x263a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A0Cu;
        // 0x263a10: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a0c) {
            ctx->pc = 0x263A44u;
            goto label_263a44;
        }
    }
    ctx->pc = 0x263A14u;
label_263a14:
    // 0x263a14: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_263a18:
    if (ctx->pc == 0x263A18u) {
        ctx->pc = 0x263A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A14u;
        // 0x263a18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263A1Cu;
        goto label_263a1c;
    }
    ctx->pc = 0x263A14u;
    {
        const bool branch_taken_0x263a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x263A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A14u;
        // 0x263a18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a14) {
            ctx->pc = 0x263A38u;
            goto label_263a38;
        }
    }
    ctx->pc = 0x263A1Cu;
label_263a1c:
    // 0x263a1c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x263a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_263a20:
    // 0x263a20: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263a24:
    // 0x263a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263a28:
    // 0x263a28: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x263a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_263a2c:
    // 0x263a2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x263a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263a30:
    // 0x263a30: 0xc04159e  jal         func_105678
label_263a34:
    if (ctx->pc == 0x263A34u) {
        ctx->pc = 0x263A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A30u;
        // 0x263a34: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263A38u;
        goto label_263a38;
    }
    ctx->pc = 0x263A30u;
    SET_GPR_U32(ctx, 31, 0x263A38u);
    ctx->pc = 0x263A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A30u;
    // 0x263a34: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x263A30u, 0x263A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A38u;
label_263a38:
    // 0x263a38: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x263a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_263a3c:
    // 0x263a3c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_263a40:
    // 0x263a40: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x263a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_263a44:
    // 0x263a44: 0x12c00019  beqz        $s6, . + 4 + (0x19 << 2)
label_263a48:
    if (ctx->pc == 0x263A48u) {
        ctx->pc = 0x263A4Cu;
        goto label_263a4c;
    }
    ctx->pc = 0x263A44u;
    {
        const bool branch_taken_0x263a44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a44) {
            ctx->pc = 0x263AACu;
            goto label_263aac;
        }
    }
    ctx->pc = 0x263A4Cu;
label_263a4c:
    // 0x263a4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x263a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_263a50:
    // 0x263a50: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263a54:
    // 0x263a54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263a58:
    // 0x263a58: 0x40f809  jalr        $v0
label_263a5c:
    if (ctx->pc == 0x263A5Cu) {
        ctx->pc = 0x263A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A58u;
        // 0x263a5c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263A60u;
        goto label_263a60;
    }
    ctx->pc = 0x263A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263A60u);
        ctx->pc = 0x263A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A58u;
        // 0x263a5c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263A58u, 0x263A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263A60u;
label_263a60:
    // 0x263a60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x263a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_263a64:
    // 0x263a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263a68:
    // 0x263a68: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263a68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263a6c:
    // 0x263a6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263a70:
    // 0x263a70: 0x40f809  jalr        $v0
label_263a74:
    if (ctx->pc == 0x263A74u) {
        ctx->pc = 0x263A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A70u;
        // 0x263a74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263A78u;
        goto label_263a78;
    }
    ctx->pc = 0x263A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263A78u);
        ctx->pc = 0x263A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A70u;
        // 0x263a74: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263A70u, 0x263A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263A78u;
label_263a78:
    // 0x263a78: 0x3c0b0026  lui         $t3, 0x26
    ctx->pc = 0x263a78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)38 << 16));
label_263a7c:
    // 0x263a7c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x263a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_263a80:
    // 0x263a80: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x263a80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_263a84:
    // 0x263a84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x263a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263a88:
    // 0x263a88: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x263a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_263a8c:
    // 0x263a8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x263a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263a90:
    // 0x263a90: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x263a90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_263a94:
    // 0x263a94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x263a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263a98:
    // 0x263a98: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x263a98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263a9c:
    // 0x263a9c: 0x256b2a38  addiu       $t3, $t3, 0x2A38
    ctx->pc = 0x263a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 10808));
label_263aa0:
    // 0x263aa0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x263aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_263aa4:
    // 0x263aa4: 0xc04229e  jal         func_108A78
label_263aa8:
    if (ctx->pc == 0x263AA8u) {
        ctx->pc = 0x263AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AA4u;
        // 0x263aa8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263AACu;
        goto label_263aac;
    }
    ctx->pc = 0x263AA4u;
    SET_GPR_U32(ctx, 31, 0x263AACu);
    ctx->pc = 0x263AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AA4u;
    // 0x263aa8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x263AA4u, 0x263AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AACu;
label_263aac:
    // 0x263aac: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_263ab0:
    if (ctx->pc == 0x263AB0u) {
        ctx->pc = 0x263AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AACu;
        // 0x263ab0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263AB4u;
        goto label_263ab4;
    }
    ctx->pc = 0x263AACu;
    {
        const bool branch_taken_0x263aac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AACu;
        // 0x263ab0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263aac) {
            ctx->pc = 0x263AD8u;
            goto label_263ad8;
        }
    }
    ctx->pc = 0x263AB4u;
label_263ab4:
    // 0x263ab4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263ab8:
    // 0x263ab8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x263ab8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263abc:
    // 0x263abc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x263abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_263ac0:
    // 0x263ac0: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x263ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_263ac4:
    // 0x263ac4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x263ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_263ac8:
    // 0x263ac8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x263ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263acc:
    // 0x263acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x263accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263ad0:
    // 0x263ad0: 0xc041664  jal         func_105990
label_263ad4:
    if (ctx->pc == 0x263AD4u) {
        ctx->pc = 0x263AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AD0u;
        // 0x263ad4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263AD8u;
        goto label_263ad8;
    }
    ctx->pc = 0x263AD0u;
    SET_GPR_U32(ctx, 31, 0x263AD8u);
    ctx->pc = 0x263AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AD0u;
    // 0x263ad4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x263AD0u, 0x263AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AD8u;
label_263ad8:
    // 0x263ad8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x263ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_263adc:
    // 0x263adc: 0xc05d53a  jal         func_1754E8
label_263ae0:
    if (ctx->pc == 0x263AE0u) {
        ctx->pc = 0x263AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263ADCu;
        // 0x263ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263AE4u;
        goto label_263ae4;
    }
    ctx->pc = 0x263ADCu;
    SET_GPR_U32(ctx, 31, 0x263AE4u);
    ctx->pc = 0x263AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263ADCu;
    // 0x263ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x263ADCu, 0x263AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AE4u;
label_263ae4:
    // 0x263ae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x263ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263ae8:
    // 0x263ae8: 0xc05d4f6  jal         func_1753D8
label_263aec:
    if (ctx->pc == 0x263AECu) {
        ctx->pc = 0x263AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AE8u;
        // 0x263aec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263AF0u;
        goto label_263af0;
    }
    ctx->pc = 0x263AE8u;
    SET_GPR_U32(ctx, 31, 0x263AF0u);
    ctx->pc = 0x263AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AE8u;
    // 0x263aec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x263AE8u, 0x263AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AF0u;
label_263af0:
    // 0x263af0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x263af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_263af4:
    // 0x263af4: 0xc089990  jal         func_226640
label_263af8:
    if (ctx->pc == 0x263AF8u) {
        ctx->pc = 0x263AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AF4u;
        // 0x263af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263AFCu;
        goto label_263afc;
    }
    ctx->pc = 0x263AF4u;
    SET_GPR_U32(ctx, 31, 0x263AFCu);
    ctx->pc = 0x263AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AF4u;
    // 0x263af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x263AF4u, 0x263AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AFCu;
label_263afc:
    // 0x263afc: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x263afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_263b00:
    // 0x263b00: 0x8e7500d8  lw          $s5, 0xD8($s3)
    ctx->pc = 0x263b00u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_263b04:
    // 0x263b04: 0x2490dd30  addiu       $s0, $a0, -0x22D0
    ctx->pc = 0x263b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958384));
label_263b08:
    // 0x263b08: 0xc041532  jal         func_1054C8
label_263b0c:
    if (ctx->pc == 0x263B0Cu) {
        ctx->pc = 0x263B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B08u;
        // 0x263b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B10u;
        goto label_263b10;
    }
    ctx->pc = 0x263B08u;
    SET_GPR_U32(ctx, 31, 0x263B10u);
    ctx->pc = 0x263B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B08u;
    // 0x263b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263B08u, 0x263B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B10u;
label_263b10:
    // 0x263b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263b14:
    // 0x263b14: 0xc041532  jal         func_1054C8
label_263b18:
    if (ctx->pc == 0x263B18u) {
        ctx->pc = 0x263B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B14u;
        // 0x263b18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B1Cu;
        goto label_263b1c;
    }
    ctx->pc = 0x263B14u;
    SET_GPR_U32(ctx, 31, 0x263B1Cu);
    ctx->pc = 0x263B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B14u;
    // 0x263b18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263B14u, 0x263B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B1Cu;
label_263b1c:
    // 0x263b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263b20:
    // 0x263b20: 0xc041532  jal         func_1054C8
label_263b24:
    if (ctx->pc == 0x263B24u) {
        ctx->pc = 0x263B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B20u;
        // 0x263b24: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B28u;
        goto label_263b28;
    }
    ctx->pc = 0x263B20u;
    SET_GPR_U32(ctx, 31, 0x263B28u);
    ctx->pc = 0x263B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B20u;
    // 0x263b24: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263B20u, 0x263B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B28u;
label_263b28:
    // 0x263b28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x263b28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263b2c:
    // 0x263b2c: 0xc041532  jal         func_1054C8
label_263b30:
    if (ctx->pc == 0x263B30u) {
        ctx->pc = 0x263B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B2Cu;
        // 0x263b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B34u;
        goto label_263b34;
    }
    ctx->pc = 0x263B2Cu;
    SET_GPR_U32(ctx, 31, 0x263B34u);
    ctx->pc = 0x263B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B2Cu;
    // 0x263b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x263B2Cu, 0x263B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B34u;
label_263b34:
    // 0x263b34: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_263b38:
    if (ctx->pc == 0x263B38u) {
        ctx->pc = 0x263B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B34u;
        // 0x263b38: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B3Cu;
        goto label_263b3c;
    }
    ctx->pc = 0x263B34u;
    {
        const bool branch_taken_0x263b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B34u;
        // 0x263b38: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b34) {
            ctx->pc = 0x263B60u;
            goto label_263b60;
        }
    }
    ctx->pc = 0x263B3Cu;
label_263b3c:
    // 0x263b3c: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x263b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_263b40:
    // 0x263b40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x263b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_263b44:
    // 0x263b44: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x263b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263b48:
    // 0x263b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263b4c:
    // 0x263b4c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x263b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_263b50:
    // 0x263b50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x263b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263b54:
    // 0x263b54: 0xc04159e  jal         func_105678
label_263b58:
    if (ctx->pc == 0x263B58u) {
        ctx->pc = 0x263B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B54u;
        // 0x263b58: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B5Cu;
        goto label_263b5c;
    }
    ctx->pc = 0x263B54u;
    SET_GPR_U32(ctx, 31, 0x263B5Cu);
    ctx->pc = 0x263B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B54u;
    // 0x263b58: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x263B54u, 0x263B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B5Cu;
label_263b5c:
    // 0x263b5c: 0x0  nop
    ctx->pc = 0x263b5cu;
    // NOP
label_263b60:
    // 0x263b60: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x263b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_263b64:
    // 0x263b64: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x263b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_263b68:
    // 0x263b68: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_263b6c:
    if (ctx->pc == 0x263B6Cu) {
        ctx->pc = 0x263B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B68u;
        // 0x263b6c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B70u;
        goto label_263b70;
    }
    ctx->pc = 0x263B68u;
    {
        const bool branch_taken_0x263b68 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B68u;
        // 0x263b6c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b68) {
            ctx->pc = 0x263B8Cu;
            goto label_263b8c;
        }
    }
    ctx->pc = 0x263B70u;
label_263b70:
    // 0x263b70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x263b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_263b74:
    // 0x263b74: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x263b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_263b78:
    // 0x263b78: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x263b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263b7c:
    // 0x263b7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x263b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_263b80:
    // 0x263b80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263b84:
    // 0x263b84: 0xc041b20  jal         func_106C80
label_263b88:
    if (ctx->pc == 0x263B88u) {
        ctx->pc = 0x263B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B84u;
        // 0x263b88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B8Cu;
        goto label_263b8c;
    }
    ctx->pc = 0x263B84u;
    SET_GPR_U32(ctx, 31, 0x263B8Cu);
    ctx->pc = 0x263B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B84u;
    // 0x263b88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x263B84u, 0x263B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B8Cu;
label_263b8c:
    // 0x263b8c: 0xc05d484  jal         func_175210
label_263b90:
    if (ctx->pc == 0x263B90u) {
        ctx->pc = 0x263B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B8Cu;
        // 0x263b90: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263B94u;
        goto label_263b94;
    }
    ctx->pc = 0x263B8Cu;
    SET_GPR_U32(ctx, 31, 0x263B94u);
    ctx->pc = 0x263B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B8Cu;
    // 0x263b90: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x263B8Cu, 0x263B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B94u;
label_263b94:
    // 0x263b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x263b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_263b98:
    // 0x263b98: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x263b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_263b9c:
    // 0x263b9c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x263b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_263ba0:
    // 0x263ba0: 0xa0f809  jalr        $a1
label_263ba4:
    if (ctx->pc == 0x263BA4u) {
        ctx->pc = 0x263BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BA0u;
        // 0x263ba4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263BA8u;
        goto label_263ba8;
    }
    ctx->pc = 0x263BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x263BA8u);
        ctx->pc = 0x263BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BA0u;
        // 0x263ba4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263BA0u, 0x263BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263BA8u;
label_263ba8:
    // 0x263ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_263bac:
    // 0x263bac: 0xc087016  jal         func_21C058
label_263bb0:
    if (ctx->pc == 0x263BB0u) {
        ctx->pc = 0x263BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BACu;
        // 0x263bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263BB4u;
        goto label_263bb4;
    }
    ctx->pc = 0x263BACu;
    SET_GPR_U32(ctx, 31, 0x263BB4u);
    ctx->pc = 0x263BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263BACu;
    // 0x263bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x263BACu, 0x263BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BB4u;
label_263bb4:
    // 0x263bb4: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
label_263bb8:
    if (ctx->pc == 0x263BB8u) {
        ctx->pc = 0x263BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BB4u;
        // 0x263bb8: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263BBCu;
        goto label_263bbc;
    }
    ctx->pc = 0x263BB4u;
    {
        const bool branch_taken_0x263bb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BB4u;
        // 0x263bb8: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bb4) {
            ctx->pc = 0x263C0Cu;
            goto label_263c0c;
        }
    }
    ctx->pc = 0x263BBCu;
label_263bbc:
    // 0x263bbc: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x263bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_263bc0:
    // 0x263bc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x263bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_263bc4:
    // 0x263bc4: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x263bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_263bc8:
    // 0x263bc8: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x263bc8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_263bcc:
    // 0x263bcc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x263bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_263bd0:
    // 0x263bd0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x263bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_263bd4:
    // 0x263bd4: 0x40f809  jalr        $v0
label_263bd8:
    if (ctx->pc == 0x263BD8u) {
        ctx->pc = 0x263BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BD4u;
        // 0x263bd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263BDCu;
        goto label_263bdc;
    }
    ctx->pc = 0x263BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263BDCu);
        ctx->pc = 0x263BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BD4u;
        // 0x263bd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263BD4u, 0x263BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x263BDCu;
label_263bdc:
    // 0x263bdc: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x263bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_263be0:
    // 0x263be0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x263be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_263be4:
    // 0x263be4: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x263be4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_263be8:
    // 0x263be8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x263be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263bec:
    // 0x263bec: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x263becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_263bf0:
    // 0x263bf0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x263bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_263bf4:
    // 0x263bf4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x263bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_263bf8:
    // 0x263bf8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x263bf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263bfc:
    // 0x263bfc: 0x254a29a8  addiu       $t2, $t2, 0x29A8
    ctx->pc = 0x263bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10664));
label_263c00:
    // 0x263c00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x263c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_263c04:
    // 0x263c04: 0xc041664  jal         func_105990
label_263c08:
    if (ctx->pc == 0x263C08u) {
        ctx->pc = 0x263C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C04u;
        // 0x263c08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C0Cu;
        goto label_263c0c;
    }
    ctx->pc = 0x263C04u;
    SET_GPR_U32(ctx, 31, 0x263C0Cu);
    ctx->pc = 0x263C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C04u;
    // 0x263c08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x263C04u, 0x263C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C0Cu;
label_263c0c:
    // 0x263c0c: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_263c10:
    if (ctx->pc == 0x263C10u) {
        ctx->pc = 0x263C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C0Cu;
        // 0x263c10: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C14u;
        goto label_263c14;
    }
    ctx->pc = 0x263C0Cu;
    {
        const bool branch_taken_0x263c0c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C0Cu;
        // 0x263c10: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c0c) {
            ctx->pc = 0x263C38u;
            goto label_263c38;
        }
    }
    ctx->pc = 0x263C14u;
label_263c14:
    // 0x263c14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x263c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_263c18:
    // 0x263c18: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x263c18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_263c1c:
    // 0x263c1c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x263c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_263c20:
    // 0x263c20: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x263c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_263c24:
    // 0x263c24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x263c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_263c28:
    // 0x263c28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x263c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263c2c:
    // 0x263c2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x263c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263c30:
    // 0x263c30: 0xc041664  jal         func_105990
label_263c34:
    if (ctx->pc == 0x263C34u) {
        ctx->pc = 0x263C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C30u;
        // 0x263c34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C38u;
        goto label_263c38;
    }
    ctx->pc = 0x263C30u;
    SET_GPR_U32(ctx, 31, 0x263C38u);
    ctx->pc = 0x263C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C30u;
    // 0x263c34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x263C30u, 0x263C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C38u;
label_263c38:
    // 0x263c38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x263c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_263c3c:
    // 0x263c3c: 0xc05d53a  jal         func_1754E8
label_263c40:
    if (ctx->pc == 0x263C40u) {
        ctx->pc = 0x263C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C3Cu;
        // 0x263c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C44u;
        goto label_263c44;
    }
    ctx->pc = 0x263C3Cu;
    SET_GPR_U32(ctx, 31, 0x263C44u);
    ctx->pc = 0x263C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C3Cu;
    // 0x263c40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x263C3Cu, 0x263C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C44u;
label_263c44:
    // 0x263c44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x263c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263c48:
    // 0x263c48: 0xc05d4f6  jal         func_1753D8
label_263c4c:
    if (ctx->pc == 0x263C4Cu) {
        ctx->pc = 0x263C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C48u;
        // 0x263c4c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C50u;
        goto label_263c50;
    }
    ctx->pc = 0x263C48u;
    SET_GPR_U32(ctx, 31, 0x263C50u);
    ctx->pc = 0x263C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C48u;
    // 0x263c4c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x263C48u, 0x263C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C50u;
label_263c50:
    // 0x263c50: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x263c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_263c54:
    // 0x263c54: 0xc089990  jal         func_226640
label_263c58:
    if (ctx->pc == 0x263C58u) {
        ctx->pc = 0x263C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C54u;
        // 0x263c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C5Cu;
        goto label_263c5c;
    }
    ctx->pc = 0x263C54u;
    SET_GPR_U32(ctx, 31, 0x263C5Cu);
    ctx->pc = 0x263C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C54u;
    // 0x263c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x263C54u, 0x263C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C5Cu;
label_263c5c:
    // 0x263c5c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x263c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_263c60:
    // 0x263c60: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x263c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_263c64:
    // 0x263c64: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x263c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_263c68:
    // 0x263c68: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x263c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_263c6c:
    // 0x263c6c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x263c6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_263c70:
    // 0x263c70: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x263c70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_263c74:
    // 0x263c74: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x263c74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_263c78:
    // 0x263c78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x263c78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_263c7c:
    // 0x263c7c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x263c7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_263c80:
    // 0x263c80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x263c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_263c84:
    // 0x263c84: 0x3e00008  jr          $ra
label_263c88:
    if (ctx->pc == 0x263C88u) {
        ctx->pc = 0x263C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C84u;
        // 0x263c88: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x263C8Cu;
        goto label_263c8c;
    }
    ctx->pc = 0x263C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C84u;
        // 0x263c88: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263C8Cu;
label_263c8c:
    // 0x263c8c: 0x0  nop
    ctx->pc = 0x263c8cu;
    // NOP
    ctx->pc = 0x263c90u;
}
