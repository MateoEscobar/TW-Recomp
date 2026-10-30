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

// Function: sub_00469528
// Address: 0x469528 - 0x469bf0
void sub_00469528_0x469528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469528_0x469528");
#endif

    switch (ctx->pc) {
        case 0x469528u: goto label_469528;
        case 0x46952cu: goto label_46952c;
        case 0x469530u: goto label_469530;
        case 0x469534u: goto label_469534;
        case 0x469538u: goto label_469538;
        case 0x46953cu: goto label_46953c;
        case 0x469540u: goto label_469540;
        case 0x469544u: goto label_469544;
        case 0x469548u: goto label_469548;
        case 0x46954cu: goto label_46954c;
        case 0x469550u: goto label_469550;
        case 0x469554u: goto label_469554;
        case 0x469558u: goto label_469558;
        case 0x46955cu: goto label_46955c;
        case 0x469560u: goto label_469560;
        case 0x469564u: goto label_469564;
        case 0x469568u: goto label_469568;
        case 0x46956cu: goto label_46956c;
        case 0x469570u: goto label_469570;
        case 0x469574u: goto label_469574;
        case 0x469578u: goto label_469578;
        case 0x46957cu: goto label_46957c;
        case 0x469580u: goto label_469580;
        case 0x469584u: goto label_469584;
        case 0x469588u: goto label_469588;
        case 0x46958cu: goto label_46958c;
        case 0x469590u: goto label_469590;
        case 0x469594u: goto label_469594;
        case 0x469598u: goto label_469598;
        case 0x46959cu: goto label_46959c;
        case 0x4695a0u: goto label_4695a0;
        case 0x4695a4u: goto label_4695a4;
        case 0x4695a8u: goto label_4695a8;
        case 0x4695acu: goto label_4695ac;
        case 0x4695b0u: goto label_4695b0;
        case 0x4695b4u: goto label_4695b4;
        case 0x4695b8u: goto label_4695b8;
        case 0x4695bcu: goto label_4695bc;
        case 0x4695c0u: goto label_4695c0;
        case 0x4695c4u: goto label_4695c4;
        case 0x4695c8u: goto label_4695c8;
        case 0x4695ccu: goto label_4695cc;
        case 0x4695d0u: goto label_4695d0;
        case 0x4695d4u: goto label_4695d4;
        case 0x4695d8u: goto label_4695d8;
        case 0x4695dcu: goto label_4695dc;
        case 0x4695e0u: goto label_4695e0;
        case 0x4695e4u: goto label_4695e4;
        case 0x4695e8u: goto label_4695e8;
        case 0x4695ecu: goto label_4695ec;
        case 0x4695f0u: goto label_4695f0;
        case 0x4695f4u: goto label_4695f4;
        case 0x4695f8u: goto label_4695f8;
        case 0x4695fcu: goto label_4695fc;
        case 0x469600u: goto label_469600;
        case 0x469604u: goto label_469604;
        case 0x469608u: goto label_469608;
        case 0x46960cu: goto label_46960c;
        case 0x469610u: goto label_469610;
        case 0x469614u: goto label_469614;
        case 0x469618u: goto label_469618;
        case 0x46961cu: goto label_46961c;
        case 0x469620u: goto label_469620;
        case 0x469624u: goto label_469624;
        case 0x469628u: goto label_469628;
        case 0x46962cu: goto label_46962c;
        case 0x469630u: goto label_469630;
        case 0x469634u: goto label_469634;
        case 0x469638u: goto label_469638;
        case 0x46963cu: goto label_46963c;
        case 0x469640u: goto label_469640;
        case 0x469644u: goto label_469644;
        case 0x469648u: goto label_469648;
        case 0x46964cu: goto label_46964c;
        case 0x469650u: goto label_469650;
        case 0x469654u: goto label_469654;
        case 0x469658u: goto label_469658;
        case 0x46965cu: goto label_46965c;
        case 0x469660u: goto label_469660;
        case 0x469664u: goto label_469664;
        case 0x469668u: goto label_469668;
        case 0x46966cu: goto label_46966c;
        case 0x469670u: goto label_469670;
        case 0x469674u: goto label_469674;
        case 0x469678u: goto label_469678;
        case 0x46967cu: goto label_46967c;
        case 0x469680u: goto label_469680;
        case 0x469684u: goto label_469684;
        case 0x469688u: goto label_469688;
        case 0x46968cu: goto label_46968c;
        case 0x469690u: goto label_469690;
        case 0x469694u: goto label_469694;
        case 0x469698u: goto label_469698;
        case 0x46969cu: goto label_46969c;
        case 0x4696a0u: goto label_4696a0;
        case 0x4696a4u: goto label_4696a4;
        case 0x4696a8u: goto label_4696a8;
        case 0x4696acu: goto label_4696ac;
        case 0x4696b0u: goto label_4696b0;
        case 0x4696b4u: goto label_4696b4;
        case 0x4696b8u: goto label_4696b8;
        case 0x4696bcu: goto label_4696bc;
        case 0x4696c0u: goto label_4696c0;
        case 0x4696c4u: goto label_4696c4;
        case 0x4696c8u: goto label_4696c8;
        case 0x4696ccu: goto label_4696cc;
        case 0x4696d0u: goto label_4696d0;
        case 0x4696d4u: goto label_4696d4;
        case 0x4696d8u: goto label_4696d8;
        case 0x4696dcu: goto label_4696dc;
        case 0x4696e0u: goto label_4696e0;
        case 0x4696e4u: goto label_4696e4;
        case 0x4696e8u: goto label_4696e8;
        case 0x4696ecu: goto label_4696ec;
        case 0x4696f0u: goto label_4696f0;
        case 0x4696f4u: goto label_4696f4;
        case 0x4696f8u: goto label_4696f8;
        case 0x4696fcu: goto label_4696fc;
        case 0x469700u: goto label_469700;
        case 0x469704u: goto label_469704;
        case 0x469708u: goto label_469708;
        case 0x46970cu: goto label_46970c;
        case 0x469710u: goto label_469710;
        case 0x469714u: goto label_469714;
        case 0x469718u: goto label_469718;
        case 0x46971cu: goto label_46971c;
        case 0x469720u: goto label_469720;
        case 0x469724u: goto label_469724;
        case 0x469728u: goto label_469728;
        case 0x46972cu: goto label_46972c;
        case 0x469730u: goto label_469730;
        case 0x469734u: goto label_469734;
        case 0x469738u: goto label_469738;
        case 0x46973cu: goto label_46973c;
        case 0x469740u: goto label_469740;
        case 0x469744u: goto label_469744;
        case 0x469748u: goto label_469748;
        case 0x46974cu: goto label_46974c;
        case 0x469750u: goto label_469750;
        case 0x469754u: goto label_469754;
        case 0x469758u: goto label_469758;
        case 0x46975cu: goto label_46975c;
        case 0x469760u: goto label_469760;
        case 0x469764u: goto label_469764;
        case 0x469768u: goto label_469768;
        case 0x46976cu: goto label_46976c;
        case 0x469770u: goto label_469770;
        case 0x469774u: goto label_469774;
        case 0x469778u: goto label_469778;
        case 0x46977cu: goto label_46977c;
        case 0x469780u: goto label_469780;
        case 0x469784u: goto label_469784;
        case 0x469788u: goto label_469788;
        case 0x46978cu: goto label_46978c;
        case 0x469790u: goto label_469790;
        case 0x469794u: goto label_469794;
        case 0x469798u: goto label_469798;
        case 0x46979cu: goto label_46979c;
        case 0x4697a0u: goto label_4697a0;
        case 0x4697a4u: goto label_4697a4;
        case 0x4697a8u: goto label_4697a8;
        case 0x4697acu: goto label_4697ac;
        case 0x4697b0u: goto label_4697b0;
        case 0x4697b4u: goto label_4697b4;
        case 0x4697b8u: goto label_4697b8;
        case 0x4697bcu: goto label_4697bc;
        case 0x4697c0u: goto label_4697c0;
        case 0x4697c4u: goto label_4697c4;
        case 0x4697c8u: goto label_4697c8;
        case 0x4697ccu: goto label_4697cc;
        case 0x4697d0u: goto label_4697d0;
        case 0x4697d4u: goto label_4697d4;
        case 0x4697d8u: goto label_4697d8;
        case 0x4697dcu: goto label_4697dc;
        case 0x4697e0u: goto label_4697e0;
        case 0x4697e4u: goto label_4697e4;
        case 0x4697e8u: goto label_4697e8;
        case 0x4697ecu: goto label_4697ec;
        case 0x4697f0u: goto label_4697f0;
        case 0x4697f4u: goto label_4697f4;
        case 0x4697f8u: goto label_4697f8;
        case 0x4697fcu: goto label_4697fc;
        case 0x469800u: goto label_469800;
        case 0x469804u: goto label_469804;
        case 0x469808u: goto label_469808;
        case 0x46980cu: goto label_46980c;
        case 0x469810u: goto label_469810;
        case 0x469814u: goto label_469814;
        case 0x469818u: goto label_469818;
        case 0x46981cu: goto label_46981c;
        case 0x469820u: goto label_469820;
        case 0x469824u: goto label_469824;
        case 0x469828u: goto label_469828;
        case 0x46982cu: goto label_46982c;
        case 0x469830u: goto label_469830;
        case 0x469834u: goto label_469834;
        case 0x469838u: goto label_469838;
        case 0x46983cu: goto label_46983c;
        case 0x469840u: goto label_469840;
        case 0x469844u: goto label_469844;
        case 0x469848u: goto label_469848;
        case 0x46984cu: goto label_46984c;
        case 0x469850u: goto label_469850;
        case 0x469854u: goto label_469854;
        case 0x469858u: goto label_469858;
        case 0x46985cu: goto label_46985c;
        case 0x469860u: goto label_469860;
        case 0x469864u: goto label_469864;
        case 0x469868u: goto label_469868;
        case 0x46986cu: goto label_46986c;
        case 0x469870u: goto label_469870;
        case 0x469874u: goto label_469874;
        case 0x469878u: goto label_469878;
        case 0x46987cu: goto label_46987c;
        case 0x469880u: goto label_469880;
        case 0x469884u: goto label_469884;
        case 0x469888u: goto label_469888;
        case 0x46988cu: goto label_46988c;
        case 0x469890u: goto label_469890;
        case 0x469894u: goto label_469894;
        case 0x469898u: goto label_469898;
        case 0x46989cu: goto label_46989c;
        case 0x4698a0u: goto label_4698a0;
        case 0x4698a4u: goto label_4698a4;
        case 0x4698a8u: goto label_4698a8;
        case 0x4698acu: goto label_4698ac;
        case 0x4698b0u: goto label_4698b0;
        case 0x4698b4u: goto label_4698b4;
        case 0x4698b8u: goto label_4698b8;
        case 0x4698bcu: goto label_4698bc;
        case 0x4698c0u: goto label_4698c0;
        case 0x4698c4u: goto label_4698c4;
        case 0x4698c8u: goto label_4698c8;
        case 0x4698ccu: goto label_4698cc;
        case 0x4698d0u: goto label_4698d0;
        case 0x4698d4u: goto label_4698d4;
        case 0x4698d8u: goto label_4698d8;
        case 0x4698dcu: goto label_4698dc;
        case 0x4698e0u: goto label_4698e0;
        case 0x4698e4u: goto label_4698e4;
        case 0x4698e8u: goto label_4698e8;
        case 0x4698ecu: goto label_4698ec;
        case 0x4698f0u: goto label_4698f0;
        case 0x4698f4u: goto label_4698f4;
        case 0x4698f8u: goto label_4698f8;
        case 0x4698fcu: goto label_4698fc;
        case 0x469900u: goto label_469900;
        case 0x469904u: goto label_469904;
        case 0x469908u: goto label_469908;
        case 0x46990cu: goto label_46990c;
        case 0x469910u: goto label_469910;
        case 0x469914u: goto label_469914;
        case 0x469918u: goto label_469918;
        case 0x46991cu: goto label_46991c;
        case 0x469920u: goto label_469920;
        case 0x469924u: goto label_469924;
        case 0x469928u: goto label_469928;
        case 0x46992cu: goto label_46992c;
        case 0x469930u: goto label_469930;
        case 0x469934u: goto label_469934;
        case 0x469938u: goto label_469938;
        case 0x46993cu: goto label_46993c;
        case 0x469940u: goto label_469940;
        case 0x469944u: goto label_469944;
        case 0x469948u: goto label_469948;
        case 0x46994cu: goto label_46994c;
        case 0x469950u: goto label_469950;
        case 0x469954u: goto label_469954;
        case 0x469958u: goto label_469958;
        case 0x46995cu: goto label_46995c;
        case 0x469960u: goto label_469960;
        case 0x469964u: goto label_469964;
        case 0x469968u: goto label_469968;
        case 0x46996cu: goto label_46996c;
        case 0x469970u: goto label_469970;
        case 0x469974u: goto label_469974;
        case 0x469978u: goto label_469978;
        case 0x46997cu: goto label_46997c;
        case 0x469980u: goto label_469980;
        case 0x469984u: goto label_469984;
        case 0x469988u: goto label_469988;
        case 0x46998cu: goto label_46998c;
        case 0x469990u: goto label_469990;
        case 0x469994u: goto label_469994;
        case 0x469998u: goto label_469998;
        case 0x46999cu: goto label_46999c;
        case 0x4699a0u: goto label_4699a0;
        case 0x4699a4u: goto label_4699a4;
        case 0x4699a8u: goto label_4699a8;
        case 0x4699acu: goto label_4699ac;
        case 0x4699b0u: goto label_4699b0;
        case 0x4699b4u: goto label_4699b4;
        case 0x4699b8u: goto label_4699b8;
        case 0x4699bcu: goto label_4699bc;
        case 0x4699c0u: goto label_4699c0;
        case 0x4699c4u: goto label_4699c4;
        case 0x4699c8u: goto label_4699c8;
        case 0x4699ccu: goto label_4699cc;
        case 0x4699d0u: goto label_4699d0;
        case 0x4699d4u: goto label_4699d4;
        case 0x4699d8u: goto label_4699d8;
        case 0x4699dcu: goto label_4699dc;
        case 0x4699e0u: goto label_4699e0;
        case 0x4699e4u: goto label_4699e4;
        case 0x4699e8u: goto label_4699e8;
        case 0x4699ecu: goto label_4699ec;
        case 0x4699f0u: goto label_4699f0;
        case 0x4699f4u: goto label_4699f4;
        case 0x4699f8u: goto label_4699f8;
        case 0x4699fcu: goto label_4699fc;
        case 0x469a00u: goto label_469a00;
        case 0x469a04u: goto label_469a04;
        case 0x469a08u: goto label_469a08;
        case 0x469a0cu: goto label_469a0c;
        case 0x469a10u: goto label_469a10;
        case 0x469a14u: goto label_469a14;
        case 0x469a18u: goto label_469a18;
        case 0x469a1cu: goto label_469a1c;
        case 0x469a20u: goto label_469a20;
        case 0x469a24u: goto label_469a24;
        case 0x469a28u: goto label_469a28;
        case 0x469a2cu: goto label_469a2c;
        case 0x469a30u: goto label_469a30;
        case 0x469a34u: goto label_469a34;
        case 0x469a38u: goto label_469a38;
        case 0x469a3cu: goto label_469a3c;
        case 0x469a40u: goto label_469a40;
        case 0x469a44u: goto label_469a44;
        case 0x469a48u: goto label_469a48;
        case 0x469a4cu: goto label_469a4c;
        case 0x469a50u: goto label_469a50;
        case 0x469a54u: goto label_469a54;
        case 0x469a58u: goto label_469a58;
        case 0x469a5cu: goto label_469a5c;
        case 0x469a60u: goto label_469a60;
        case 0x469a64u: goto label_469a64;
        case 0x469a68u: goto label_469a68;
        case 0x469a6cu: goto label_469a6c;
        case 0x469a70u: goto label_469a70;
        case 0x469a74u: goto label_469a74;
        case 0x469a78u: goto label_469a78;
        case 0x469a7cu: goto label_469a7c;
        case 0x469a80u: goto label_469a80;
        case 0x469a84u: goto label_469a84;
        case 0x469a88u: goto label_469a88;
        case 0x469a8cu: goto label_469a8c;
        case 0x469a90u: goto label_469a90;
        case 0x469a94u: goto label_469a94;
        case 0x469a98u: goto label_469a98;
        case 0x469a9cu: goto label_469a9c;
        case 0x469aa0u: goto label_469aa0;
        case 0x469aa4u: goto label_469aa4;
        case 0x469aa8u: goto label_469aa8;
        case 0x469aacu: goto label_469aac;
        case 0x469ab0u: goto label_469ab0;
        case 0x469ab4u: goto label_469ab4;
        case 0x469ab8u: goto label_469ab8;
        case 0x469abcu: goto label_469abc;
        case 0x469ac0u: goto label_469ac0;
        case 0x469ac4u: goto label_469ac4;
        case 0x469ac8u: goto label_469ac8;
        case 0x469accu: goto label_469acc;
        case 0x469ad0u: goto label_469ad0;
        case 0x469ad4u: goto label_469ad4;
        case 0x469ad8u: goto label_469ad8;
        case 0x469adcu: goto label_469adc;
        case 0x469ae0u: goto label_469ae0;
        case 0x469ae4u: goto label_469ae4;
        case 0x469ae8u: goto label_469ae8;
        case 0x469aecu: goto label_469aec;
        case 0x469af0u: goto label_469af0;
        case 0x469af4u: goto label_469af4;
        case 0x469af8u: goto label_469af8;
        case 0x469afcu: goto label_469afc;
        case 0x469b00u: goto label_469b00;
        case 0x469b04u: goto label_469b04;
        case 0x469b08u: goto label_469b08;
        case 0x469b0cu: goto label_469b0c;
        case 0x469b10u: goto label_469b10;
        case 0x469b14u: goto label_469b14;
        case 0x469b18u: goto label_469b18;
        case 0x469b1cu: goto label_469b1c;
        case 0x469b20u: goto label_469b20;
        case 0x469b24u: goto label_469b24;
        case 0x469b28u: goto label_469b28;
        case 0x469b2cu: goto label_469b2c;
        case 0x469b30u: goto label_469b30;
        case 0x469b34u: goto label_469b34;
        case 0x469b38u: goto label_469b38;
        case 0x469b3cu: goto label_469b3c;
        case 0x469b40u: goto label_469b40;
        case 0x469b44u: goto label_469b44;
        case 0x469b48u: goto label_469b48;
        case 0x469b4cu: goto label_469b4c;
        case 0x469b50u: goto label_469b50;
        case 0x469b54u: goto label_469b54;
        case 0x469b58u: goto label_469b58;
        case 0x469b5cu: goto label_469b5c;
        case 0x469b60u: goto label_469b60;
        case 0x469b64u: goto label_469b64;
        case 0x469b68u: goto label_469b68;
        case 0x469b6cu: goto label_469b6c;
        case 0x469b70u: goto label_469b70;
        case 0x469b74u: goto label_469b74;
        case 0x469b78u: goto label_469b78;
        case 0x469b7cu: goto label_469b7c;
        case 0x469b80u: goto label_469b80;
        case 0x469b84u: goto label_469b84;
        case 0x469b88u: goto label_469b88;
        case 0x469b8cu: goto label_469b8c;
        case 0x469b90u: goto label_469b90;
        case 0x469b94u: goto label_469b94;
        case 0x469b98u: goto label_469b98;
        case 0x469b9cu: goto label_469b9c;
        case 0x469ba0u: goto label_469ba0;
        case 0x469ba4u: goto label_469ba4;
        case 0x469ba8u: goto label_469ba8;
        case 0x469bacu: goto label_469bac;
        case 0x469bb0u: goto label_469bb0;
        case 0x469bb4u: goto label_469bb4;
        case 0x469bb8u: goto label_469bb8;
        case 0x469bbcu: goto label_469bbc;
        case 0x469bc0u: goto label_469bc0;
        case 0x469bc4u: goto label_469bc4;
        case 0x469bc8u: goto label_469bc8;
        case 0x469bccu: goto label_469bcc;
        case 0x469bd0u: goto label_469bd0;
        case 0x469bd4u: goto label_469bd4;
        case 0x469bd8u: goto label_469bd8;
        case 0x469bdcu: goto label_469bdc;
        case 0x469be0u: goto label_469be0;
        case 0x469be4u: goto label_469be4;
        case 0x469be8u: goto label_469be8;
        case 0x469becu: goto label_469bec;
        default: break;
    }

    ctx->pc = 0x469528u;

label_469528:
    // 0x469528: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x469528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_46952c:
    // 0x46952c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469530:
    // 0x469530: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x469530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_469534:
    // 0x469534: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x469534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_469538:
    // 0x469538: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x469538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46953c:
    // 0x46953c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x46953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_469540:
    // 0x469540: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x469540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_469544:
    // 0x469544: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x469544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_469548:
    // 0x469548: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x469548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_46954c:
    // 0x46954c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x46954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_469550:
    // 0x469550: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x469550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_469554:
    // 0x469554: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x469554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_469558:
    // 0x469558: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x469558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_46955c:
    // 0x46955c: 0xc11eeae  jal         func_47BAB8
label_469560:
    if (ctx->pc == 0x469560u) {
        ctx->pc = 0x469560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46955Cu;
        // 0x469560: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469564u;
        goto label_469564;
    }
    ctx->pc = 0x46955Cu;
    SET_GPR_U32(ctx, 31, 0x469564u);
    ctx->pc = 0x469560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46955Cu;
    // 0x469560: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x46955Cu, 0x469564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469564u;
label_469564:
    // 0x469564: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_469568:
    if (ctx->pc == 0x469568u) {
        ctx->pc = 0x469568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469564u;
        // 0x469568: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46956Cu;
        goto label_46956c;
    }
    ctx->pc = 0x469564u;
    {
        const bool branch_taken_0x469564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469564u;
        // 0x469568: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469564) {
            ctx->pc = 0x469590u;
            goto label_469590;
        }
    }
    ctx->pc = 0x46956Cu;
label_46956c:
    // 0x46956c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469570:
    // 0x469570: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_469574:
    // 0x469574: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x469574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_469578:
    // 0x469578: 0xc11eff2  jal         func_47BFC8
label_46957c:
    if (ctx->pc == 0x46957Cu) {
        ctx->pc = 0x46957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469578u;
        // 0x46957c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x469580u;
        goto label_469580;
    }
    ctx->pc = 0x469578u;
    SET_GPR_U32(ctx, 31, 0x469580u);
    ctx->pc = 0x46957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469578u;
    // 0x46957c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x469578u, 0x469580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469580u;
label_469580:
    // 0x469580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x469580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_469584:
    // 0x469584: 0x1000018c  b           . + 4 + (0x18C << 2)
label_469588:
    if (ctx->pc == 0x469588u) {
        ctx->pc = 0x469588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469584u;
        // 0x469588: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46958Cu;
        goto label_46958c;
    }
    ctx->pc = 0x469584u;
    {
        const bool branch_taken_0x469584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469584u;
        // 0x469588: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469584) {
            ctx->pc = 0x469BB8u;
            goto label_469bb8;
        }
    }
    ctx->pc = 0x46958Cu;
label_46958c:
    // 0x46958c: 0x0  nop
    ctx->pc = 0x46958cu;
    // NOP
label_469590:
    // 0x469590: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x469590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_469594:
    // 0x469594: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x469594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_469598:
    // 0x469598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x469598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46959c:
    // 0x46959c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x46959cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_4695a0:
    // 0x4695a0: 0x1060017d  beqz        $v1, . + 4 + (0x17D << 2)
label_4695a4:
    if (ctx->pc == 0x4695A4u) {
        ctx->pc = 0x4695A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695A0u;
        // 0x4695a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4695A8u;
        goto label_4695a8;
    }
    ctx->pc = 0x4695A0u;
    {
        const bool branch_taken_0x4695a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4695A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695A0u;
        // 0x4695a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4695a0) {
            ctx->pc = 0x469B98u;
            goto label_469b98;
        }
    }
    ctx->pc = 0x4695A8u;
label_4695a8:
    // 0x4695a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4695a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4695ac:
    // 0x4695ac: 0xc11fb56  jal         func_47ED58
label_4695b0:
    if (ctx->pc == 0x4695B0u) {
        ctx->pc = 0x4695B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695ACu;
        // 0x4695b0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4695B4u;
        goto label_4695b4;
    }
    ctx->pc = 0x4695ACu;
    SET_GPR_U32(ctx, 31, 0x4695B4u);
    ctx->pc = 0x4695B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4695ACu;
    // 0x4695b0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4695ACu, 0x4695B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4695B4u;
label_4695b4:
    // 0x4695b4: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x4695b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_4695b8:
    // 0x4695b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4695bc:
    if (ctx->pc == 0x4695BCu) {
        ctx->pc = 0x4695BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695B8u;
        // 0x4695bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4695C0u;
        goto label_4695c0;
    }
    ctx->pc = 0x4695B8u;
    {
        const bool branch_taken_0x4695b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4695BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695B8u;
        // 0x4695bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4695b8) {
            ctx->pc = 0x4695D0u;
            goto label_4695d0;
        }
    }
    ctx->pc = 0x4695C0u;
label_4695c0:
    // 0x4695c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4695c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4695c4:
    // 0x4695c4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4695c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_4695c8:
    // 0x4695c8: 0x10000177  b           . + 4 + (0x177 << 2)
label_4695cc:
    if (ctx->pc == 0x4695CCu) {
        ctx->pc = 0x4695CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695C8u;
        // 0x4695cc: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4695D0u;
        goto label_4695d0;
    }
    ctx->pc = 0x4695C8u;
    {
        const bool branch_taken_0x4695c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4695CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695C8u;
        // 0x4695cc: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4695c8) {
            ctx->pc = 0x469BA8u;
            goto label_469ba8;
        }
    }
    ctx->pc = 0x4695D0u;
label_4695d0:
    // 0x4695d0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4695d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4695d4:
    // 0x4695d4: 0x8f8588b8  lw          $a1, -0x7748($gp)
    ctx->pc = 0x4695d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
label_4695d8:
    // 0x4695d8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x4695d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4695dc:
    // 0x4695dc: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x4695dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_4695e0:
    // 0x4695e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4695e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4695e4:
    // 0x4695e4: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x4695e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_4695e8:
    // 0x4695e8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x4695e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4695ec:
    // 0x4695ec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4695ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4695f0:
    // 0x4695f0: 0x40f809  jalr        $v0
label_4695f4:
    if (ctx->pc == 0x4695F4u) {
        ctx->pc = 0x4695F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695F0u;
        // 0x4695f4: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4695F8u;
        goto label_4695f8;
    }
    ctx->pc = 0x4695F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4695F8u);
        ctx->pc = 0x4695F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695F0u;
        // 0x4695f4: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4695F0u, 0x4695F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4695F8u;
label_4695f8:
    // 0x4695f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4695f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4695fc:
    // 0x4695fc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_469600:
    if (ctx->pc == 0x469600u) {
        ctx->pc = 0x469600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695FCu;
        // 0x469600: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469604u;
        goto label_469604;
    }
    ctx->pc = 0x4695FCu;
    {
        const bool branch_taken_0x4695fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x469600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4695FCu;
        // 0x469600: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4695fc) {
            ctx->pc = 0x46960Cu;
            goto label_46960c;
        }
    }
    ctx->pc = 0x469604u;
label_469604:
    // 0x469604: 0x1000001a  b           . + 4 + (0x1A << 2)
label_469608:
    if (ctx->pc == 0x469608u) {
        ctx->pc = 0x469608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469604u;
        // 0x469608: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46960Cu;
        goto label_46960c;
    }
    ctx->pc = 0x469604u;
    {
        const bool branch_taken_0x469604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469604u;
        // 0x469608: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469604) {
            ctx->pc = 0x469670u;
            goto label_469670;
        }
    }
    ctx->pc = 0x46960Cu;
label_46960c:
    // 0x46960c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x46960cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_469610:
    // 0x469610: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x469610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_469614:
    // 0x469614: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x469614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_469618:
    // 0x469618: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x469618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_46961c:
    // 0x46961c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x46961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_469620:
    // 0x469620: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x469620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_469624:
    // 0x469624: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x469624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_469628:
    // 0x469628: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x469628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_46962c:
    // 0x46962c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x46962cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_469630:
    // 0x469630: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x469630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_469634:
    // 0x469634: 0x2442aac0  addiu       $v0, $v0, -0x5540
    ctx->pc = 0x469634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945472));
label_469638:
    // 0x469638: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x469638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_46963c:
    // 0x46963c: 0x2484e6c8  addiu       $a0, $a0, -0x1938
    ctx->pc = 0x46963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960840));
label_469640:
    // 0x469640: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x469640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_469644:
    // 0x469644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x469644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469648:
    // 0x469648: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x469648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_46964c:
    // 0x46964c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x46964cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469650:
    // 0x469650: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x469650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_469654:
    // 0x469654: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x469654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_469658:
    // 0x469658: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x469658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_46965c:
    // 0x46965c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x46965cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_469660:
    // 0x469660: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x469660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_469664:
    // 0x469664: 0xc11ff8e  jal         func_47FE38
label_469668:
    if (ctx->pc == 0x469668u) {
        ctx->pc = 0x469668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469664u;
        // 0x469668: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46966Cu;
        goto label_46966c;
    }
    ctx->pc = 0x469664u;
    SET_GPR_U32(ctx, 31, 0x46966Cu);
    ctx->pc = 0x469668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469664u;
    // 0x469668: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x469664u, 0x46966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46966Cu;
label_46966c:
    // 0x46966c: 0x0  nop
    ctx->pc = 0x46966cu;
    // NOP
label_469670:
    // 0x469670: 0x12600153  beqz        $s3, . + 4 + (0x153 << 2)
label_469674:
    if (ctx->pc == 0x469674u) {
        ctx->pc = 0x469674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469670u;
        // 0x469674: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469678u;
        goto label_469678;
    }
    ctx->pc = 0x469670u;
    {
        const bool branch_taken_0x469670 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x469674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469670u;
        // 0x469674: 0x27b00048  addiu       $s0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469670) {
            ctx->pc = 0x469BC0u;
            goto label_469bc0;
        }
    }
    ctx->pc = 0x469678u;
label_469678:
    // 0x469678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x469678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46967c:
    // 0x46967c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x46967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_469680:
    // 0x469680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x469680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469684:
    // 0x469684: 0xc11eeae  jal         func_47BAB8
label_469688:
    if (ctx->pc == 0x469688u) {
        ctx->pc = 0x469688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469684u;
        // 0x469688: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46968Cu;
        goto label_46968c;
    }
    ctx->pc = 0x469684u;
    SET_GPR_U32(ctx, 31, 0x46968Cu);
    ctx->pc = 0x469688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469684u;
    // 0x469688: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x469684u, 0x46968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46968Cu;
label_46968c:
    // 0x46968c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_469690:
    if (ctx->pc == 0x469690u) {
        ctx->pc = 0x469690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46968Cu;
        // 0x469690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469694u;
        goto label_469694;
    }
    ctx->pc = 0x46968Cu;
    {
        const bool branch_taken_0x46968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46968c) {
            ctx->pc = 0x469690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46968Cu;
            // 0x469690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4696B0u;
            goto label_4696b0;
        }
    }
    ctx->pc = 0x469694u;
label_469694:
    // 0x469694: 0xc11a4fc  jal         func_4693F0
label_469698:
    if (ctx->pc == 0x469698u) {
        ctx->pc = 0x469698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469694u;
        // 0x469698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46969Cu;
        goto label_46969c;
    }
    ctx->pc = 0x469694u;
    SET_GPR_U32(ctx, 31, 0x46969Cu);
    ctx->pc = 0x469698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469694u;
    // 0x469698: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x469694u, 0x46969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46969Cu;
label_46969c:
    // 0x46969c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4696a0:
    // 0x4696a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4696a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4696a4:
    // 0x4696a4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4696a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_4696a8:
    // 0x4696a8: 0x1000013f  b           . + 4 + (0x13F << 2)
label_4696ac:
    if (ctx->pc == 0x4696ACu) {
        ctx->pc = 0x4696ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696A8u;
        // 0x4696ac: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4696B0u;
        goto label_4696b0;
    }
    ctx->pc = 0x4696A8u;
    {
        const bool branch_taken_0x4696a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4696ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696A8u;
        // 0x4696ac: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4696a8) {
            ctx->pc = 0x469BA8u;
            goto label_469ba8;
        }
    }
    ctx->pc = 0x4696B0u;
label_4696b0:
    // 0x4696b0: 0xc120274  jal         func_4809D0
label_4696b4:
    if (ctx->pc == 0x4696B4u) {
        ctx->pc = 0x4696B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696B0u;
        // 0x4696b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4696B8u;
        goto label_4696b8;
    }
    ctx->pc = 0x4696B0u;
    SET_GPR_U32(ctx, 31, 0x4696B8u);
    ctx->pc = 0x4696B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4696B0u;
    // 0x4696b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4809D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4809D0u, 0x4696B0u, 0x4696B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4696B8u;
label_4696b8:
    // 0x4696b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4696bc:
    if (ctx->pc == 0x4696BCu) {
        ctx->pc = 0x4696BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696B8u;
        // 0x4696bc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4696C0u;
        goto label_4696c0;
    }
    ctx->pc = 0x4696B8u;
    {
        const bool branch_taken_0x4696b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4696BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696B8u;
        // 0x4696bc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4696b8) {
            ctx->pc = 0x4696E0u;
            goto label_4696e0;
        }
    }
    ctx->pc = 0x4696C0u;
label_4696c0:
    // 0x4696c0: 0xc11a4fc  jal         func_4693F0
label_4696c4:
    if (ctx->pc == 0x4696C4u) {
        ctx->pc = 0x4696C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696C0u;
        // 0x4696c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4696C8u;
        goto label_4696c8;
    }
    ctx->pc = 0x4696C0u;
    SET_GPR_U32(ctx, 31, 0x4696C8u);
    ctx->pc = 0x4696C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4696C0u;
    // 0x4696c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x4696C0u, 0x4696C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4696C8u;
label_4696c8:
    // 0x4696c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4696c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4696cc:
    // 0x4696cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4696ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4696d0:
    // 0x4696d0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4696d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_4696d4:
    // 0x4696d4: 0x10000134  b           . + 4 + (0x134 << 2)
label_4696d8:
    if (ctx->pc == 0x4696D8u) {
        ctx->pc = 0x4696D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696D4u;
        // 0x4696d8: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4696DCu;
        goto label_4696dc;
    }
    ctx->pc = 0x4696D4u;
    {
        const bool branch_taken_0x4696d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4696D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696D4u;
        // 0x4696d8: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4696d4) {
            ctx->pc = 0x469BA8u;
            goto label_469ba8;
        }
    }
    ctx->pc = 0x4696DCu;
label_4696dc:
    // 0x4696dc: 0x0  nop
    ctx->pc = 0x4696dcu;
    // NOP
label_4696e0:
    // 0x4696e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4696e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4696e4:
    // 0x4696e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4696e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4696e8:
    // 0x4696e8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x4696e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_4696ec:
    // 0x4696ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4696ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4696f0:
    // 0x4696f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4696f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4696f4:
    // 0x4696f4: 0xc11eeae  jal         func_47BAB8
label_4696f8:
    if (ctx->pc == 0x4696F8u) {
        ctx->pc = 0x4696F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696F4u;
        // 0x4696f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4696FCu;
        goto label_4696fc;
    }
    ctx->pc = 0x4696F4u;
    SET_GPR_U32(ctx, 31, 0x4696FCu);
    ctx->pc = 0x4696F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4696F4u;
    // 0x4696f8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4696F4u, 0x4696FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4696FCu;
label_4696fc:
    // 0x4696fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_469700:
    if (ctx->pc == 0x469700u) {
        ctx->pc = 0x469700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696FCu;
        // 0x469700: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469704u;
        goto label_469704;
    }
    ctx->pc = 0x4696FCu;
    {
        const bool branch_taken_0x4696fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4696FCu;
        // 0x469700: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4696fc) {
            ctx->pc = 0x469728u;
            goto label_469728;
        }
    }
    ctx->pc = 0x469704u;
label_469704:
    // 0x469704: 0xc120352  jal         func_480D48
label_469708:
    if (ctx->pc == 0x469708u) {
        ctx->pc = 0x469708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469704u;
        // 0x469708: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46970Cu;
        goto label_46970c;
    }
    ctx->pc = 0x469704u;
    SET_GPR_U32(ctx, 31, 0x46970Cu);
    ctx->pc = 0x469708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469704u;
    // 0x469708: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D48u, 0x469704u, 0x46970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46970Cu;
label_46970c:
    // 0x46970c: 0xc11a4fc  jal         func_4693F0
label_469710:
    if (ctx->pc == 0x469710u) {
        ctx->pc = 0x469710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46970Cu;
        // 0x469710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469714u;
        goto label_469714;
    }
    ctx->pc = 0x46970Cu;
    SET_GPR_U32(ctx, 31, 0x469714u);
    ctx->pc = 0x469710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46970Cu;
    // 0x469710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x46970Cu, 0x469714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469714u;
label_469714:
    // 0x469714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x469714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469718:
    // 0x469718: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46971c:
    // 0x46971c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x46971cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_469720:
    // 0x469720: 0x10000121  b           . + 4 + (0x121 << 2)
label_469724:
    if (ctx->pc == 0x469724u) {
        ctx->pc = 0x469724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469720u;
        // 0x469724: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x469728u;
        goto label_469728;
    }
    ctx->pc = 0x469720u;
    {
        const bool branch_taken_0x469720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469720u;
        // 0x469724: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x469720) {
            ctx->pc = 0x469BA8u;
            goto label_469ba8;
        }
    }
    ctx->pc = 0x469728u;
label_469728:
    // 0x469728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x469728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46972c:
    // 0x46972c: 0xc11a2c0  jal         func_468B00
label_469730:
    if (ctx->pc == 0x469730u) {
        ctx->pc = 0x469730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46972Cu;
        // 0x469730: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469734u;
        goto label_469734;
    }
    ctx->pc = 0x46972Cu;
    SET_GPR_U32(ctx, 31, 0x469734u);
    ctx->pc = 0x469730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46972Cu;
    // 0x469730: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468B00u, 0x46972Cu, 0x469734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469734u;
label_469734:
    // 0x469734: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_469738:
    if (ctx->pc == 0x469738u) {
        ctx->pc = 0x469738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469734u;
        // 0x469738: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46973Cu;
        goto label_46973c;
    }
    ctx->pc = 0x469734u;
    {
        const bool branch_taken_0x469734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469734u;
        // 0x469738: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469734) {
            ctx->pc = 0x469760u;
            goto label_469760;
        }
    }
    ctx->pc = 0x46973Cu;
label_46973c:
    // 0x46973c: 0xc120352  jal         func_480D48
label_469740:
    if (ctx->pc == 0x469740u) {
        ctx->pc = 0x469740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46973Cu;
        // 0x469740: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469744u;
        goto label_469744;
    }
    ctx->pc = 0x46973Cu;
    SET_GPR_U32(ctx, 31, 0x469744u);
    ctx->pc = 0x469740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46973Cu;
    // 0x469740: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D48u, 0x46973Cu, 0x469744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469744u;
label_469744:
    // 0x469744: 0xc11a4fc  jal         func_4693F0
label_469748:
    if (ctx->pc == 0x469748u) {
        ctx->pc = 0x469748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469744u;
        // 0x469748: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46974Cu;
        goto label_46974c;
    }
    ctx->pc = 0x469744u;
    SET_GPR_U32(ctx, 31, 0x46974Cu);
    ctx->pc = 0x469748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469744u;
    // 0x469748: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x469744u, 0x46974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46974Cu;
label_46974c:
    // 0x46974c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469750:
    // 0x469750: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_469754:
    // 0x469754: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x469754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_469758:
    // 0x469758: 0x10000113  b           . + 4 + (0x113 << 2)
label_46975c:
    if (ctx->pc == 0x46975Cu) {
        ctx->pc = 0x46975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469758u;
        // 0x46975c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x469760u;
        goto label_469760;
    }
    ctx->pc = 0x469758u;
    {
        const bool branch_taken_0x469758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469758u;
        // 0x46975c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x469758) {
            ctx->pc = 0x469BA8u;
            goto label_469ba8;
        }
    }
    ctx->pc = 0x469760u;
label_469760:
    // 0x469760: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
label_469764:
    if (ctx->pc == 0x469764u) {
        ctx->pc = 0x469764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469760u;
        // 0x469764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469768u;
        goto label_469768;
    }
    ctx->pc = 0x469760u;
    {
        const bool branch_taken_0x469760 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x469764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469760u;
        // 0x469764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469760) {
            ctx->pc = 0x469864u;
            goto label_469864;
        }
    }
    ctx->pc = 0x469768u;
label_469768:
    // 0x469768: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x469768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46976c:
    // 0x46976c: 0x2454ad18  addiu       $s4, $v0, -0x52E8
    ctx->pc = 0x46976cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_469770:
    // 0x469770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x469770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_469774:
    // 0x469774: 0x0  nop
    ctx->pc = 0x469774u;
    // NOP
label_469778:
    // 0x469778: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x469778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46977c:
    // 0x46977c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46977cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469780:
    // 0x469780: 0xc11eeae  jal         func_47BAB8
label_469784:
    if (ctx->pc == 0x469784u) {
        ctx->pc = 0x469784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469780u;
        // 0x469784: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469788u;
        goto label_469788;
    }
    ctx->pc = 0x469780u;
    SET_GPR_U32(ctx, 31, 0x469788u);
    ctx->pc = 0x469784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469780u;
    // 0x469784: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x469780u, 0x469788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469788u;
label_469788:
    // 0x469788: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_46978c:
    if (ctx->pc == 0x46978Cu) {
        ctx->pc = 0x46978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469788u;
        // 0x46978c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469790u;
        goto label_469790;
    }
    ctx->pc = 0x469788u;
    {
        const bool branch_taken_0x469788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469788u;
        // 0x46978c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469788) {
            ctx->pc = 0x4697A8u;
            goto label_4697a8;
        }
    }
    ctx->pc = 0x469790u;
label_469790:
    // 0x469790: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x469790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_469794:
    // 0x469794: 0xc11a36a  jal         func_468DA8
label_469798:
    if (ctx->pc == 0x469798u) {
        ctx->pc = 0x469798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469794u;
        // 0x469798: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46979Cu;
        goto label_46979c;
    }
    ctx->pc = 0x469794u;
    SET_GPR_U32(ctx, 31, 0x46979Cu);
    ctx->pc = 0x469798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469794u;
    // 0x469798: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468DA8u, 0x469794u, 0x46979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46979Cu;
label_46979c:
    // 0x46979c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46979cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4697a0:
    // 0x4697a0: 0x54a00023  bnel        $a1, $zero, . + 4 + (0x23 << 2)
label_4697a4:
    if (ctx->pc == 0x4697A4u) {
        ctx->pc = 0x4697A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4697A0u;
        // 0x4697a4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4697A8u;
        goto label_4697a8;
    }
    ctx->pc = 0x4697A0u;
    {
        const bool branch_taken_0x4697a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4697a0) {
            ctx->pc = 0x4697A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4697A0u;
            // 0x4697a4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x469830u;
            goto label_469830;
        }
    }
    ctx->pc = 0x4697A8u;
label_4697a8:
    // 0x4697a8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4697a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4697ac:
    // 0x4697ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4697acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4697b0:
    // 0x4697b0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_4697b4:
    if (ctx->pc == 0x4697B4u) {
        ctx->pc = 0x4697B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4697B0u;
        // 0x4697b4: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4697B8u;
        goto label_4697b8;
    }
    ctx->pc = 0x4697B0u;
    {
        const bool branch_taken_0x4697b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4697B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4697B0u;
        // 0x4697b4: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4697b0) {
            ctx->pc = 0x4697E4u;
            goto label_4697e4;
        }
    }
    ctx->pc = 0x4697B8u;
label_4697b8:
    // 0x4697b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4697b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4697bc:
    // 0x4697bc: 0x0  nop
    ctx->pc = 0x4697bcu;
    // NOP
label_4697c0:
    // 0x4697c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4697c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4697c4:
    // 0x4697c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4697c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4697c8:
    // 0x4697c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4697c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4697cc:
    // 0x4697cc: 0xc11b010  jal         func_46C040
label_4697d0:
    if (ctx->pc == 0x4697D0u) {
        ctx->pc = 0x4697D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4697CCu;
        // 0x4697d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4697D4u;
        goto label_4697d4;
    }
    ctx->pc = 0x4697CCu;
    SET_GPR_U32(ctx, 31, 0x4697D4u);
    ctx->pc = 0x4697D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4697CCu;
    // 0x4697d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x4697CCu, 0x4697D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4697D4u;
label_4697d4:
    // 0x4697d4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4697d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4697d8:
    // 0x4697d8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x4697d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4697dc:
    // 0x4697dc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_4697e0:
    if (ctx->pc == 0x4697E0u) {
        ctx->pc = 0x4697E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4697DCu;
        // 0x4697e0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4697E4u;
        goto label_4697e4;
    }
    ctx->pc = 0x4697DCu;
    {
        const bool branch_taken_0x4697dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4697E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4697DCu;
        // 0x4697e0: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4697dc) {
            ctx->pc = 0x4697C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4697c0;
        }
    }
    ctx->pc = 0x4697E4u;
label_4697e4:
    // 0x4697e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4697e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4697e8:
    // 0x4697e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4697ec:
    if (ctx->pc == 0x4697ECu) {
        ctx->pc = 0x4697F0u;
        goto label_4697f0;
    }
    ctx->pc = 0x4697E8u;
    {
        const bool branch_taken_0x4697e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4697e8) {
            ctx->pc = 0x469800u;
            goto label_469800;
        }
    }
    ctx->pc = 0x4697F0u;
label_4697f0:
    // 0x4697f0: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x4697f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_4697f4:
    // 0x4697f4: 0x40f809  jalr        $v0
label_4697f8:
    if (ctx->pc == 0x4697F8u) {
        ctx->pc = 0x4697FCu;
        goto label_4697fc;
    }
    ctx->pc = 0x4697F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4697FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4697F4u, 0x4697FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4697FCu;
label_4697fc:
    // 0x4697fc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4697fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_469800:
    // 0x469800: 0xc120352  jal         func_480D48
label_469804:
    if (ctx->pc == 0x469804u) {
        ctx->pc = 0x469804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469800u;
        // 0x469804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469808u;
        goto label_469808;
    }
    ctx->pc = 0x469800u;
    SET_GPR_U32(ctx, 31, 0x469808u);
    ctx->pc = 0x469804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469800u;
    // 0x469804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D48u, 0x469800u, 0x469808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469808u;
label_469808:
    // 0x469808: 0xc11a4fc  jal         func_4693F0
label_46980c:
    if (ctx->pc == 0x46980Cu) {
        ctx->pc = 0x46980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469808u;
        // 0x46980c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469810u;
        goto label_469810;
    }
    ctx->pc = 0x469808u;
    SET_GPR_U32(ctx, 31, 0x469810u);
    ctx->pc = 0x46980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469808u;
    // 0x46980c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x469808u, 0x469810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469810u;
label_469810:
    // 0x469810: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x469810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469814:
    // 0x469814: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_469818:
    // 0x469818: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x469818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_46981c:
    // 0x46981c: 0xc11eff2  jal         func_47BFC8
label_469820:
    if (ctx->pc == 0x469820u) {
        ctx->pc = 0x469820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46981Cu;
        // 0x469820: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x469824u;
        goto label_469824;
    }
    ctx->pc = 0x46981Cu;
    SET_GPR_U32(ctx, 31, 0x469824u);
    ctx->pc = 0x469820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46981Cu;
    // 0x469820: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46981Cu, 0x469824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469824u;
label_469824:
    // 0x469824: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x469824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_469828:
    // 0x469828: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_46982c:
    if (ctx->pc == 0x46982Cu) {
        ctx->pc = 0x46982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469828u;
        // 0x46982c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469830u;
        goto label_469830;
    }
    ctx->pc = 0x469828u;
    {
        const bool branch_taken_0x469828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469828u;
        // 0x46982c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469828) {
            ctx->pc = 0x469BB8u;
            goto label_469bb8;
        }
    }
    ctx->pc = 0x469830u;
label_469830:
    // 0x469830: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x469830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_469834:
    // 0x469834: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x469834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
label_469838:
    // 0x469838: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x469838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_46983c:
    // 0x46983c: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x46983cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
label_469840:
    // 0x469840: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x469840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_469844:
    // 0x469844: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x469844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_469848:
    // 0x469848: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x469848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_46984c:
    // 0x46984c: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x46984cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_469850:
    // 0x469850: 0xacb3003c  sw          $s3, 0x3C($a1)
    ctx->pc = 0x469850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 19));
label_469854:
    // 0x469854: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_469858:
    // 0x469858: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x469858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_46985c:
    // 0x46985c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_469860:
    if (ctx->pc == 0x469860u) {
        ctx->pc = 0x469860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46985Cu;
        // 0x469860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469864u;
        goto label_469864;
    }
    ctx->pc = 0x46985Cu;
    {
        const bool branch_taken_0x46985c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46985Cu;
        // 0x469860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46985c) {
            ctx->pc = 0x469778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469778;
        }
    }
    ctx->pc = 0x469864u;
label_469864:
    // 0x469864: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x469864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_469868:
    // 0x469868: 0x18400053  blez        $v0, . + 4 + (0x53 << 2)
label_46986c:
    if (ctx->pc == 0x46986Cu) {
        ctx->pc = 0x46986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469868u;
        // 0x46986c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469870u;
        goto label_469870;
    }
    ctx->pc = 0x469868u;
    {
        const bool branch_taken_0x469868 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469868u;
        // 0x46986c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469868) {
            ctx->pc = 0x4699B8u;
            goto label_4699b8;
        }
    }
    ctx->pc = 0x469870u;
label_469870:
    // 0x469870: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469874:
    // 0x469874: 0x0  nop
    ctx->pc = 0x469874u;
    // NOP
label_469878:
    // 0x469878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x469878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46987c:
    // 0x46987c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46987cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_469880:
    // 0x469880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x469880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469884:
    // 0x469884: 0xc11eeae  jal         func_47BAB8
label_469888:
    if (ctx->pc == 0x469888u) {
        ctx->pc = 0x469888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469884u;
        // 0x469888: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46988Cu;
        goto label_46988c;
    }
    ctx->pc = 0x469884u;
    SET_GPR_U32(ctx, 31, 0x46988Cu);
    ctx->pc = 0x469888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469884u;
    // 0x469888: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x469884u, 0x46988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46988Cu;
label_46988c:
    // 0x46988c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_469890:
    if (ctx->pc == 0x469890u) {
        ctx->pc = 0x469890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46988Cu;
        // 0x469890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469894u;
        goto label_469894;
    }
    ctx->pc = 0x46988Cu;
    {
        const bool branch_taken_0x46988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46988Cu;
        // 0x469890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46988c) {
            ctx->pc = 0x4698A4u;
            goto label_4698a4;
        }
    }
    ctx->pc = 0x469894u;
label_469894:
    // 0x469894: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x469894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_469898:
    // 0x469898: 0xc11ef80  jal         func_47BE00
label_46989c:
    if (ctx->pc == 0x46989Cu) {
        ctx->pc = 0x46989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469898u;
        // 0x46989c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4698A0u;
        goto label_4698a0;
    }
    ctx->pc = 0x469898u;
    SET_GPR_U32(ctx, 31, 0x4698A0u);
    ctx->pc = 0x46989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469898u;
    // 0x46989c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x469898u, 0x4698A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4698A0u;
label_4698a0:
    // 0x4698a0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x4698a0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4698a4:
    // 0x4698a4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_4698a8:
    if (ctx->pc == 0x4698A8u) {
        ctx->pc = 0x4698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698A4u;
        // 0x4698a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4698ACu;
        goto label_4698ac;
    }
    ctx->pc = 0x4698A4u;
    {
        const bool branch_taken_0x4698a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698A4u;
        // 0x4698a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4698a4) {
            ctx->pc = 0x4698D8u;
            goto label_4698d8;
        }
    }
    ctx->pc = 0x4698ACu;
label_4698ac:
    // 0x4698ac: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x4698acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4698b0:
    // 0x4698b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4698b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4698b4:
    // 0x4698b4: 0xc11eeae  jal         func_47BAB8
label_4698b8:
    if (ctx->pc == 0x4698B8u) {
        ctx->pc = 0x4698B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698B4u;
        // 0x4698b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4698BCu;
        goto label_4698bc;
    }
    ctx->pc = 0x4698B4u;
    SET_GPR_U32(ctx, 31, 0x4698BCu);
    ctx->pc = 0x4698B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4698B4u;
    // 0x4698b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4698B4u, 0x4698BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4698BCu;
label_4698bc:
    // 0x4698bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4698c0:
    if (ctx->pc == 0x4698C0u) {
        ctx->pc = 0x4698C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698BCu;
        // 0x4698c0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4698C4u;
        goto label_4698c4;
    }
    ctx->pc = 0x4698BCu;
    {
        const bool branch_taken_0x4698bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4698C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698BCu;
        // 0x4698c0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4698bc) {
            ctx->pc = 0x4698DCu;
            goto label_4698dc;
        }
    }
    ctx->pc = 0x4698C4u;
label_4698c4:
    // 0x4698c4: 0xc11b112  jal         func_46C448
label_4698c8:
    if (ctx->pc == 0x4698C8u) {
        ctx->pc = 0x4698C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698C4u;
        // 0x4698c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4698CCu;
        goto label_4698cc;
    }
    ctx->pc = 0x4698C4u;
    SET_GPR_U32(ctx, 31, 0x4698CCu);
    ctx->pc = 0x4698C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4698C4u;
    // 0x4698c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C448u, 0x4698C4u, 0x4698CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4698CCu;
label_4698cc:
    // 0x4698cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4698ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4698d0:
    // 0x4698d0: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
label_4698d4:
    if (ctx->pc == 0x4698D4u) {
        ctx->pc = 0x4698D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698D0u;
        // 0x4698d4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4698D8u;
        goto label_4698d8;
    }
    ctx->pc = 0x4698D0u;
    {
        const bool branch_taken_0x4698d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4698D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698D0u;
        // 0x4698d4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4698d0) {
            ctx->pc = 0x469960u;
            goto label_469960;
        }
    }
    ctx->pc = 0x4698D8u;
label_4698d8:
    // 0x4698d8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4698d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4698dc:
    // 0x4698dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4698dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4698e0:
    // 0x4698e0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_4698e4:
    if (ctx->pc == 0x4698E4u) {
        ctx->pc = 0x4698E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698E0u;
        // 0x4698e4: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4698E8u;
        goto label_4698e8;
    }
    ctx->pc = 0x4698E0u;
    {
        const bool branch_taken_0x4698e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4698E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698E0u;
        // 0x4698e4: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4698e0) {
            ctx->pc = 0x469914u;
            goto label_469914;
        }
    }
    ctx->pc = 0x4698E8u;
label_4698e8:
    // 0x4698e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4698e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4698ec:
    // 0x4698ec: 0x0  nop
    ctx->pc = 0x4698ecu;
    // NOP
label_4698f0:
    // 0x4698f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4698f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4698f4:
    // 0x4698f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4698f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4698f8:
    // 0x4698f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4698f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4698fc:
    // 0x4698fc: 0xc11b010  jal         func_46C040
label_469900:
    if (ctx->pc == 0x469900u) {
        ctx->pc = 0x469900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4698FCu;
        // 0x469900: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469904u;
        goto label_469904;
    }
    ctx->pc = 0x4698FCu;
    SET_GPR_U32(ctx, 31, 0x469904u);
    ctx->pc = 0x469900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4698FCu;
    // 0x469900: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x4698FCu, 0x469904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469904u;
label_469904:
    // 0x469904: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x469904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_469908:
    // 0x469908: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x469908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_46990c:
    // 0x46990c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_469910:
    if (ctx->pc == 0x469910u) {
        ctx->pc = 0x469910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46990Cu;
        // 0x469910: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469914u;
        goto label_469914;
    }
    ctx->pc = 0x46990Cu;
    {
        const bool branch_taken_0x46990c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x469910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46990Cu;
        // 0x469910: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46990c) {
            ctx->pc = 0x4698F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4698f0;
        }
    }
    ctx->pc = 0x469914u;
label_469914:
    // 0x469914: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x469914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_469918:
    // 0x469918: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_46991c:
    if (ctx->pc == 0x46991Cu) {
        ctx->pc = 0x46991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469918u;
        // 0x46991c: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469920u;
        goto label_469920;
    }
    ctx->pc = 0x469918u;
    {
        const bool branch_taken_0x469918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469918u;
        // 0x46991c: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469918) {
            ctx->pc = 0x469930u;
            goto label_469930;
        }
    }
    ctx->pc = 0x469920u;
label_469920:
    // 0x469920: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x469920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_469924:
    // 0x469924: 0x40f809  jalr        $v0
label_469928:
    if (ctx->pc == 0x469928u) {
        ctx->pc = 0x46992Cu;
        goto label_46992c;
    }
    ctx->pc = 0x469924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46992Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469924u, 0x46992Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46992Cu;
label_46992c:
    // 0x46992c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x46992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_469930:
    // 0x469930: 0xc120352  jal         func_480D48
label_469934:
    if (ctx->pc == 0x469934u) {
        ctx->pc = 0x469934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469930u;
        // 0x469934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469938u;
        goto label_469938;
    }
    ctx->pc = 0x469930u;
    SET_GPR_U32(ctx, 31, 0x469938u);
    ctx->pc = 0x469934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469930u;
    // 0x469934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D48u, 0x469930u, 0x469938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469938u;
label_469938:
    // 0x469938: 0xc11a4fc  jal         func_4693F0
label_46993c:
    if (ctx->pc == 0x46993Cu) {
        ctx->pc = 0x46993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469938u;
        // 0x46993c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469940u;
        goto label_469940;
    }
    ctx->pc = 0x469938u;
    SET_GPR_U32(ctx, 31, 0x469940u);
    ctx->pc = 0x46993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469938u;
    // 0x46993c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x469938u, 0x469940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469940u;
label_469940:
    // 0x469940: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x469940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469944:
    // 0x469944: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_469948:
    // 0x469948: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x469948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_46994c:
    // 0x46994c: 0xc11eff2  jal         func_47BFC8
label_469950:
    if (ctx->pc == 0x469950u) {
        ctx->pc = 0x469950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46994Cu;
        // 0x469950: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x469954u;
        goto label_469954;
    }
    ctx->pc = 0x46994Cu;
    SET_GPR_U32(ctx, 31, 0x469954u);
    ctx->pc = 0x469950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46994Cu;
    // 0x469950: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46994Cu, 0x469954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469954u;
label_469954:
    // 0x469954: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x469954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_469958:
    // 0x469958: 0x10000097  b           . + 4 + (0x97 << 2)
label_46995c:
    if (ctx->pc == 0x46995Cu) {
        ctx->pc = 0x46995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469958u;
        // 0x46995c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469960u;
        goto label_469960;
    }
    ctx->pc = 0x469958u;
    {
        const bool branch_taken_0x469958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469958u;
        // 0x46995c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469958) {
            ctx->pc = 0x469BB8u;
            goto label_469bb8;
        }
    }
    ctx->pc = 0x469960u;
label_469960:
    // 0x469960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469964:
    // 0x469964: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x469964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_469968:
    // 0x469968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x469968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46996c:
    // 0x46996c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_469970:
    // 0x469970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x469970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_469974:
    // 0x469974: 0xc12247e  jal         func_4891F8
label_469978:
    if (ctx->pc == 0x469978u) {
        ctx->pc = 0x469978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469974u;
        // 0x469978: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46997Cu;
        goto label_46997c;
    }
    ctx->pc = 0x469974u;
    SET_GPR_U32(ctx, 31, 0x46997Cu);
    ctx->pc = 0x469978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469974u;
    // 0x469978: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4891F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891F8u, 0x469974u, 0x46997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46997Cu;
label_46997c:
    // 0x46997c: 0x8f8384c0  lw          $v1, -0x7B40($gp)
    ctx->pc = 0x46997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935744)));
label_469980:
    // 0x469980: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x469980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_469984:
    // 0x469984: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x469984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_469988:
    // 0x469988: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x469988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_46998c:
    // 0x46998c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x46998cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_469990:
    // 0x469990: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x469990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_469994:
    // 0x469994: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x469994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_469998:
    // 0x469998: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x469998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_46999c:
    // 0x46999c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x46999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4699a0:
    // 0x4699a0: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x4699a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_4699a4:
    // 0x4699a4: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x4699a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_4699a8:
    // 0x4699a8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4699a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_4699ac:
    // 0x4699ac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x4699acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4699b0:
    // 0x4699b0: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_4699b4:
    if (ctx->pc == 0x4699B4u) {
        ctx->pc = 0x4699B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699B0u;
        // 0x4699b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4699B8u;
        goto label_4699b8;
    }
    ctx->pc = 0x4699B0u;
    {
        const bool branch_taken_0x4699b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4699B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699B0u;
        // 0x4699b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4699b0) {
            ctx->pc = 0x469878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469878;
        }
    }
    ctx->pc = 0x4699B8u;
label_4699b8:
    // 0x4699b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4699b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4699bc:
    // 0x4699bc: 0x18400052  blez        $v0, . + 4 + (0x52 << 2)
label_4699c0:
    if (ctx->pc == 0x4699C0u) {
        ctx->pc = 0x4699C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699BCu;
        // 0x4699c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4699C4u;
        goto label_4699c4;
    }
    ctx->pc = 0x4699BCu;
    {
        const bool branch_taken_0x4699bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4699C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699BCu;
        // 0x4699c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4699bc) {
            ctx->pc = 0x469B08u;
            goto label_469b08;
        }
    }
    ctx->pc = 0x4699C4u;
label_4699c4:
    // 0x4699c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4699c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4699c8:
    // 0x4699c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4699c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4699cc:
    // 0x4699cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4699ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4699d0:
    // 0x4699d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4699d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4699d4:
    // 0x4699d4: 0xc11eeae  jal         func_47BAB8
label_4699d8:
    if (ctx->pc == 0x4699D8u) {
        ctx->pc = 0x4699D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699D4u;
        // 0x4699d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4699DCu;
        goto label_4699dc;
    }
    ctx->pc = 0x4699D4u;
    SET_GPR_U32(ctx, 31, 0x4699DCu);
    ctx->pc = 0x4699D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4699D4u;
    // 0x4699d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4699D4u, 0x4699DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4699DCu;
label_4699dc:
    // 0x4699dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4699e0:
    if (ctx->pc == 0x4699E0u) {
        ctx->pc = 0x4699E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699DCu;
        // 0x4699e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4699E4u;
        goto label_4699e4;
    }
    ctx->pc = 0x4699DCu;
    {
        const bool branch_taken_0x4699dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4699E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699DCu;
        // 0x4699e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4699dc) {
            ctx->pc = 0x4699F4u;
            goto label_4699f4;
        }
    }
    ctx->pc = 0x4699E4u;
label_4699e4:
    // 0x4699e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4699e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4699e8:
    // 0x4699e8: 0xc11ef80  jal         func_47BE00
label_4699ec:
    if (ctx->pc == 0x4699ECu) {
        ctx->pc = 0x4699ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699E8u;
        // 0x4699ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4699F0u;
        goto label_4699f0;
    }
    ctx->pc = 0x4699E8u;
    SET_GPR_U32(ctx, 31, 0x4699F0u);
    ctx->pc = 0x4699ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4699E8u;
    // 0x4699ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4699E8u, 0x4699F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4699F0u;
label_4699f0:
    // 0x4699f0: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x4699f0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4699f4:
    // 0x4699f4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_4699f8:
    if (ctx->pc == 0x4699F8u) {
        ctx->pc = 0x4699F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699F4u;
        // 0x4699f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4699FCu;
        goto label_4699fc;
    }
    ctx->pc = 0x4699F4u;
    {
        const bool branch_taken_0x4699f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4699F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4699F4u;
        // 0x4699f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4699f4) {
            ctx->pc = 0x469A28u;
            goto label_469a28;
        }
    }
    ctx->pc = 0x4699FCu;
label_4699fc:
    // 0x4699fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4699fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_469a00:
    // 0x469a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x469a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469a04:
    // 0x469a04: 0xc11eeae  jal         func_47BAB8
label_469a08:
    if (ctx->pc == 0x469A08u) {
        ctx->pc = 0x469A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A04u;
        // 0x469a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A0Cu;
        goto label_469a0c;
    }
    ctx->pc = 0x469A04u;
    SET_GPR_U32(ctx, 31, 0x469A0Cu);
    ctx->pc = 0x469A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469A04u;
    // 0x469a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x469A04u, 0x469A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A0Cu;
label_469a0c:
    // 0x469a0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_469a10:
    if (ctx->pc == 0x469A10u) {
        ctx->pc = 0x469A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A0Cu;
        // 0x469a10: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A14u;
        goto label_469a14;
    }
    ctx->pc = 0x469A0Cu;
    {
        const bool branch_taken_0x469a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A0Cu;
        // 0x469a10: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469a0c) {
            ctx->pc = 0x469A2Cu;
            goto label_469a2c;
        }
    }
    ctx->pc = 0x469A14u;
label_469a14:
    // 0x469a14: 0xc120228  jal         func_4808A0
label_469a18:
    if (ctx->pc == 0x469A18u) {
        ctx->pc = 0x469A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A14u;
        // 0x469a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A1Cu;
        goto label_469a1c;
    }
    ctx->pc = 0x469A14u;
    SET_GPR_U32(ctx, 31, 0x469A1Cu);
    ctx->pc = 0x469A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469A14u;
    // 0x469a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4808A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4808A0u, 0x469A14u, 0x469A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A1Cu;
label_469a1c:
    // 0x469a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x469a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_469a20:
    // 0x469a20: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
label_469a24:
    if (ctx->pc == 0x469A24u) {
        ctx->pc = 0x469A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A20u;
        // 0x469a24: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A28u;
        goto label_469a28;
    }
    ctx->pc = 0x469A20u;
    {
        const bool branch_taken_0x469a20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x469A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A20u;
        // 0x469a24: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469a20) {
            ctx->pc = 0x469AB0u;
            goto label_469ab0;
        }
    }
    ctx->pc = 0x469A28u;
label_469a28:
    // 0x469a28: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x469a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_469a2c:
    // 0x469a2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x469a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469a30:
    // 0x469a30: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_469a34:
    if (ctx->pc == 0x469A34u) {
        ctx->pc = 0x469A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A30u;
        // 0x469a34: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A38u;
        goto label_469a38;
    }
    ctx->pc = 0x469A30u;
    {
        const bool branch_taken_0x469a30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x469A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A30u;
        // 0x469a34: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469a30) {
            ctx->pc = 0x469A64u;
            goto label_469a64;
        }
    }
    ctx->pc = 0x469A38u;
label_469a38:
    // 0x469a38: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x469a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_469a3c:
    // 0x469a3c: 0x0  nop
    ctx->pc = 0x469a3cu;
    // NOP
label_469a40:
    // 0x469a40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x469a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_469a44:
    // 0x469a44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469a48:
    // 0x469a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x469a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_469a4c:
    // 0x469a4c: 0xc11b010  jal         func_46C040
label_469a50:
    if (ctx->pc == 0x469A50u) {
        ctx->pc = 0x469A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A4Cu;
        // 0x469a50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A54u;
        goto label_469a54;
    }
    ctx->pc = 0x469A4Cu;
    SET_GPR_U32(ctx, 31, 0x469A54u);
    ctx->pc = 0x469A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469A4Cu;
    // 0x469a50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x469A4Cu, 0x469A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A54u;
label_469a54:
    // 0x469a54: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x469a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_469a58:
    // 0x469a58: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x469a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_469a5c:
    // 0x469a5c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_469a60:
    if (ctx->pc == 0x469A60u) {
        ctx->pc = 0x469A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A5Cu;
        // 0x469a60: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A64u;
        goto label_469a64;
    }
    ctx->pc = 0x469A5Cu;
    {
        const bool branch_taken_0x469a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x469A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A5Cu;
        // 0x469a60: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469a5c) {
            ctx->pc = 0x469A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469a40;
        }
    }
    ctx->pc = 0x469A64u;
label_469a64:
    // 0x469a64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x469a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_469a68:
    // 0x469a68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_469a6c:
    if (ctx->pc == 0x469A6Cu) {
        ctx->pc = 0x469A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A68u;
        // 0x469a6c: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A70u;
        goto label_469a70;
    }
    ctx->pc = 0x469A68u;
    {
        const bool branch_taken_0x469a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x469A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A68u;
        // 0x469a6c: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469a68) {
            ctx->pc = 0x469A80u;
            goto label_469a80;
        }
    }
    ctx->pc = 0x469A70u;
label_469a70:
    // 0x469a70: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x469a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_469a74:
    // 0x469a74: 0x40f809  jalr        $v0
label_469a78:
    if (ctx->pc == 0x469A78u) {
        ctx->pc = 0x469A7Cu;
        goto label_469a7c;
    }
    ctx->pc = 0x469A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x469A7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469A74u, 0x469A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x469A7Cu;
label_469a7c:
    // 0x469a7c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x469a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_469a80:
    // 0x469a80: 0xc120352  jal         func_480D48
label_469a84:
    if (ctx->pc == 0x469A84u) {
        ctx->pc = 0x469A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A80u;
        // 0x469a84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A88u;
        goto label_469a88;
    }
    ctx->pc = 0x469A80u;
    SET_GPR_U32(ctx, 31, 0x469A88u);
    ctx->pc = 0x469A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469A80u;
    // 0x469a84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D48u, 0x469A80u, 0x469A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A88u;
label_469a88:
    // 0x469a88: 0xc11a4fc  jal         func_4693F0
label_469a8c:
    if (ctx->pc == 0x469A8Cu) {
        ctx->pc = 0x469A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A88u;
        // 0x469a8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469A90u;
        goto label_469a90;
    }
    ctx->pc = 0x469A88u;
    SET_GPR_U32(ctx, 31, 0x469A90u);
    ctx->pc = 0x469A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469A88u;
    // 0x469a8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x469A88u, 0x469A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A90u;
label_469a90:
    // 0x469a90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x469a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469a94:
    // 0x469a94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_469a98:
    // 0x469a98: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x469a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_469a9c:
    // 0x469a9c: 0xc11eff2  jal         func_47BFC8
label_469aa0:
    if (ctx->pc == 0x469AA0u) {
        ctx->pc = 0x469AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469A9Cu;
        // 0x469aa0: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x469AA4u;
        goto label_469aa4;
    }
    ctx->pc = 0x469A9Cu;
    SET_GPR_U32(ctx, 31, 0x469AA4u);
    ctx->pc = 0x469AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469A9Cu;
    // 0x469aa0: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x469A9Cu, 0x469AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469AA4u;
label_469aa4:
    // 0x469aa4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x469aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_469aa8:
    // 0x469aa8: 0x10000043  b           . + 4 + (0x43 << 2)
label_469aac:
    if (ctx->pc == 0x469AACu) {
        ctx->pc = 0x469AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469AA8u;
        // 0x469aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469AB0u;
        goto label_469ab0;
    }
    ctx->pc = 0x469AA8u;
    {
        const bool branch_taken_0x469aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469AA8u;
        // 0x469aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469aa8) {
            ctx->pc = 0x469BB8u;
            goto label_469bb8;
        }
    }
    ctx->pc = 0x469AB0u;
label_469ab0:
    // 0x469ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469ab4:
    // 0x469ab4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x469ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_469ab8:
    // 0x469ab8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x469ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_469abc:
    // 0x469abc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x469abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_469ac0:
    // 0x469ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x469ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_469ac4:
    // 0x469ac4: 0xc12247e  jal         func_4891F8
label_469ac8:
    if (ctx->pc == 0x469AC8u) {
        ctx->pc = 0x469AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469AC4u;
        // 0x469ac8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469ACCu;
        goto label_469acc;
    }
    ctx->pc = 0x469AC4u;
    SET_GPR_U32(ctx, 31, 0x469ACCu);
    ctx->pc = 0x469AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469AC4u;
    // 0x469ac8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4891F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891F8u, 0x469AC4u, 0x469ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469ACCu;
label_469acc:
    // 0x469acc: 0x8f8384bc  lw          $v1, -0x7B44($gp)
    ctx->pc = 0x469accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
label_469ad0:
    // 0x469ad0: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x469ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_469ad4:
    // 0x469ad4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x469ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_469ad8:
    // 0x469ad8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x469ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_469adc:
    // 0x469adc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x469adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_469ae0:
    // 0x469ae0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x469ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_469ae4:
    // 0x469ae4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x469ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_469ae8:
    // 0x469ae8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x469ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_469aec:
    // 0x469aec: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x469aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_469af0:
    // 0x469af0: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x469af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_469af4:
    // 0x469af4: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x469af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_469af8:
    // 0x469af8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x469af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_469afc:
    // 0x469afc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x469afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_469b00:
    // 0x469b00: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_469b04:
    if (ctx->pc == 0x469B04u) {
        ctx->pc = 0x469B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B00u;
        // 0x469b04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B08u;
        goto label_469b08;
    }
    ctx->pc = 0x469B00u;
    {
        const bool branch_taken_0x469b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B00u;
        // 0x469b04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b00) {
            ctx->pc = 0x4699C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4699c8;
        }
    }
    ctx->pc = 0x469B08u;
label_469b08:
    // 0x469b08: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x469b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_469b0c:
    // 0x469b0c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_469b10:
    if (ctx->pc == 0x469B10u) {
        ctx->pc = 0x469B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B0Cu;
        // 0x469b10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B14u;
        goto label_469b14;
    }
    ctx->pc = 0x469B0Cu;
    {
        const bool branch_taken_0x469b0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x469B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B0Cu;
        // 0x469b10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b0c) {
            ctx->pc = 0x469B3Cu;
            goto label_469b3c;
        }
    }
    ctx->pc = 0x469B14u;
label_469b14:
    // 0x469b14: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x469b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_469b18:
    // 0x469b18: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x469b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_469b1c:
    // 0x469b1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x469b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_469b20:
    // 0x469b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x469b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_469b24:
    // 0x469b24: 0xc11b010  jal         func_46C040
label_469b28:
    if (ctx->pc == 0x469B28u) {
        ctx->pc = 0x469B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B24u;
        // 0x469b28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B2Cu;
        goto label_469b2c;
    }
    ctx->pc = 0x469B24u;
    SET_GPR_U32(ctx, 31, 0x469B2Cu);
    ctx->pc = 0x469B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469B24u;
    // 0x469b28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x469B24u, 0x469B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469B2Cu;
label_469b2c:
    // 0x469b2c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x469b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_469b30:
    // 0x469b30: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x469b30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_469b34:
    // 0x469b34: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_469b38:
    if (ctx->pc == 0x469B38u) {
        ctx->pc = 0x469B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B34u;
        // 0x469b38: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B3Cu;
        goto label_469b3c;
    }
    ctx->pc = 0x469B34u;
    {
        const bool branch_taken_0x469b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x469B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B34u;
        // 0x469b38: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b34) {
            ctx->pc = 0x469B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469b18;
        }
    }
    ctx->pc = 0x469B3Cu;
label_469b3c:
    // 0x469b3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x469b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_469b40:
    // 0x469b40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_469b44:
    if (ctx->pc == 0x469B44u) {
        ctx->pc = 0x469B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B40u;
        // 0x469b44: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B48u;
        goto label_469b48;
    }
    ctx->pc = 0x469B40u;
    {
        const bool branch_taken_0x469b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x469B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B40u;
        // 0x469b44: 0x26a3ad18  addiu       $v1, $s5, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b40) {
            ctx->pc = 0x469B58u;
            goto label_469b58;
        }
    }
    ctx->pc = 0x469B48u;
label_469b48:
    // 0x469b48: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x469b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_469b4c:
    // 0x469b4c: 0x40f809  jalr        $v0
label_469b50:
    if (ctx->pc == 0x469B50u) {
        ctx->pc = 0x469B54u;
        goto label_469b54;
    }
    ctx->pc = 0x469B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x469B54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469B4Cu, 0x469B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x469B54u;
label_469b54:
    // 0x469b54: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x469b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_469b58:
    // 0x469b58: 0xc120352  jal         func_480D48
label_469b5c:
    if (ctx->pc == 0x469B5Cu) {
        ctx->pc = 0x469B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B58u;
        // 0x469b5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B60u;
        goto label_469b60;
    }
    ctx->pc = 0x469B58u;
    SET_GPR_U32(ctx, 31, 0x469B60u);
    ctx->pc = 0x469B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469B58u;
    // 0x469b5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480D48u, 0x469B58u, 0x469B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469B60u;
label_469b60:
    // 0x469b60: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x469b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_469b64:
    // 0x469b64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x469b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_469b68:
    // 0x469b68: 0x2484e6c8  addiu       $a0, $a0, -0x1938
    ctx->pc = 0x469b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960840));
label_469b6c:
    // 0x469b6c: 0xc11fd22  jal         func_47F488
label_469b70:
    if (ctx->pc == 0x469B70u) {
        ctx->pc = 0x469B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B6Cu;
        // 0x469b70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B74u;
        goto label_469b74;
    }
    ctx->pc = 0x469B6Cu;
    SET_GPR_U32(ctx, 31, 0x469B74u);
    ctx->pc = 0x469B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469B6Cu;
    // 0x469b70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x469B6Cu, 0x469B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469B74u;
label_469b74:
    // 0x469b74: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_469b78:
    if (ctx->pc == 0x469B78u) {
        ctx->pc = 0x469B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B74u;
        // 0x469b78: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B7Cu;
        goto label_469b7c;
    }
    ctx->pc = 0x469B74u;
    {
        const bool branch_taken_0x469b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B74u;
        // 0x469b78: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b74) {
            ctx->pc = 0x469BC4u;
            goto label_469bc4;
        }
    }
    ctx->pc = 0x469B7Cu;
label_469b7c:
    // 0x469b7c: 0xc11a4fc  jal         func_4693F0
label_469b80:
    if (ctx->pc == 0x469B80u) {
        ctx->pc = 0x469B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B7Cu;
        // 0x469b80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B84u;
        goto label_469b84;
    }
    ctx->pc = 0x469B7Cu;
    SET_GPR_U32(ctx, 31, 0x469B84u);
    ctx->pc = 0x469B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469B7Cu;
    // 0x469b80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x469B7Cu, 0x469B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469B84u;
label_469b84:
    // 0x469b84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x469b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469b88:
    // 0x469b88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_469b8c:
    // 0x469b8c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x469b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_469b90:
    // 0x469b90: 0x10000005  b           . + 4 + (0x5 << 2)
label_469b94:
    if (ctx->pc == 0x469B94u) {
        ctx->pc = 0x469B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B90u;
        // 0x469b94: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x469B98u;
        goto label_469b98;
    }
    ctx->pc = 0x469B90u;
    {
        const bool branch_taken_0x469b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469B90u;
        // 0x469b94: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x469b90) {
            ctx->pc = 0x469BA8u;
            goto label_469ba8;
        }
    }
    ctx->pc = 0x469B98u;
label_469b98:
    // 0x469b98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x469b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_469b9c:
    // 0x469b9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x469b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_469ba0:
    // 0x469ba0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x469ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_469ba4:
    // 0x469ba4: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x469ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_469ba8:
    // 0x469ba8: 0xc11eff2  jal         func_47BFC8
label_469bac:
    if (ctx->pc == 0x469BACu) {
        ctx->pc = 0x469BB0u;
        goto label_469bb0;
    }
    ctx->pc = 0x469BA8u;
    SET_GPR_U32(ctx, 31, 0x469BB0u);
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x469BA8u, 0x469BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469BB0u;
label_469bb0:
    // 0x469bb0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x469bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_469bb4:
    // 0x469bb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x469bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_469bb8:
    // 0x469bb8: 0xc11f024  jal         func_47C090
label_469bbc:
    if (ctx->pc == 0x469BBCu) {
        ctx->pc = 0x469BC0u;
        goto label_469bc0;
    }
    ctx->pc = 0x469BB8u;
    SET_GPR_U32(ctx, 31, 0x469BC0u);
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x469BB8u, 0x469BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469BC0u;
label_469bc0:
    // 0x469bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x469bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469bc4:
    // 0x469bc4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x469bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_469bc8:
    // 0x469bc8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x469bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_469bcc:
    // 0x469bcc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x469bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_469bd0:
    // 0x469bd0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x469bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_469bd4:
    // 0x469bd4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x469bd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_469bd8:
    // 0x469bd8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x469bd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_469bdc:
    // 0x469bdc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x469bdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_469be0:
    // 0x469be0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x469be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_469be4:
    // 0x469be4: 0x3e00008  jr          $ra
label_469be8:
    if (ctx->pc == 0x469BE8u) {
        ctx->pc = 0x469BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469BE4u;
        // 0x469be8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469BECu;
        goto label_469bec;
    }
    ctx->pc = 0x469BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469BE4u;
        // 0x469be8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469BECu;
label_469bec:
    // 0x469bec: 0x0  nop
    ctx->pc = 0x469becu;
    // NOP
    ctx->pc = 0x469bf0u;
}
