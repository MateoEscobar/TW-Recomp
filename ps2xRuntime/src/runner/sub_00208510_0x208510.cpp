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

// Function: sub_00208510
// Address: 0x208510 - 0x208b40
void sub_00208510_0x208510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208510_0x208510");
#endif

    switch (ctx->pc) {
        case 0x208510u: goto label_208510;
        case 0x208514u: goto label_208514;
        case 0x208518u: goto label_208518;
        case 0x20851cu: goto label_20851c;
        case 0x208520u: goto label_208520;
        case 0x208524u: goto label_208524;
        case 0x208528u: goto label_208528;
        case 0x20852cu: goto label_20852c;
        case 0x208530u: goto label_208530;
        case 0x208534u: goto label_208534;
        case 0x208538u: goto label_208538;
        case 0x20853cu: goto label_20853c;
        case 0x208540u: goto label_208540;
        case 0x208544u: goto label_208544;
        case 0x208548u: goto label_208548;
        case 0x20854cu: goto label_20854c;
        case 0x208550u: goto label_208550;
        case 0x208554u: goto label_208554;
        case 0x208558u: goto label_208558;
        case 0x20855cu: goto label_20855c;
        case 0x208560u: goto label_208560;
        case 0x208564u: goto label_208564;
        case 0x208568u: goto label_208568;
        case 0x20856cu: goto label_20856c;
        case 0x208570u: goto label_208570;
        case 0x208574u: goto label_208574;
        case 0x208578u: goto label_208578;
        case 0x20857cu: goto label_20857c;
        case 0x208580u: goto label_208580;
        case 0x208584u: goto label_208584;
        case 0x208588u: goto label_208588;
        case 0x20858cu: goto label_20858c;
        case 0x208590u: goto label_208590;
        case 0x208594u: goto label_208594;
        case 0x208598u: goto label_208598;
        case 0x20859cu: goto label_20859c;
        case 0x2085a0u: goto label_2085a0;
        case 0x2085a4u: goto label_2085a4;
        case 0x2085a8u: goto label_2085a8;
        case 0x2085acu: goto label_2085ac;
        case 0x2085b0u: goto label_2085b0;
        case 0x2085b4u: goto label_2085b4;
        case 0x2085b8u: goto label_2085b8;
        case 0x2085bcu: goto label_2085bc;
        case 0x2085c0u: goto label_2085c0;
        case 0x2085c4u: goto label_2085c4;
        case 0x2085c8u: goto label_2085c8;
        case 0x2085ccu: goto label_2085cc;
        case 0x2085d0u: goto label_2085d0;
        case 0x2085d4u: goto label_2085d4;
        case 0x2085d8u: goto label_2085d8;
        case 0x2085dcu: goto label_2085dc;
        case 0x2085e0u: goto label_2085e0;
        case 0x2085e4u: goto label_2085e4;
        case 0x2085e8u: goto label_2085e8;
        case 0x2085ecu: goto label_2085ec;
        case 0x2085f0u: goto label_2085f0;
        case 0x2085f4u: goto label_2085f4;
        case 0x2085f8u: goto label_2085f8;
        case 0x2085fcu: goto label_2085fc;
        case 0x208600u: goto label_208600;
        case 0x208604u: goto label_208604;
        case 0x208608u: goto label_208608;
        case 0x20860cu: goto label_20860c;
        case 0x208610u: goto label_208610;
        case 0x208614u: goto label_208614;
        case 0x208618u: goto label_208618;
        case 0x20861cu: goto label_20861c;
        case 0x208620u: goto label_208620;
        case 0x208624u: goto label_208624;
        case 0x208628u: goto label_208628;
        case 0x20862cu: goto label_20862c;
        case 0x208630u: goto label_208630;
        case 0x208634u: goto label_208634;
        case 0x208638u: goto label_208638;
        case 0x20863cu: goto label_20863c;
        case 0x208640u: goto label_208640;
        case 0x208644u: goto label_208644;
        case 0x208648u: goto label_208648;
        case 0x20864cu: goto label_20864c;
        case 0x208650u: goto label_208650;
        case 0x208654u: goto label_208654;
        case 0x208658u: goto label_208658;
        case 0x20865cu: goto label_20865c;
        case 0x208660u: goto label_208660;
        case 0x208664u: goto label_208664;
        case 0x208668u: goto label_208668;
        case 0x20866cu: goto label_20866c;
        case 0x208670u: goto label_208670;
        case 0x208674u: goto label_208674;
        case 0x208678u: goto label_208678;
        case 0x20867cu: goto label_20867c;
        case 0x208680u: goto label_208680;
        case 0x208684u: goto label_208684;
        case 0x208688u: goto label_208688;
        case 0x20868cu: goto label_20868c;
        case 0x208690u: goto label_208690;
        case 0x208694u: goto label_208694;
        case 0x208698u: goto label_208698;
        case 0x20869cu: goto label_20869c;
        case 0x2086a0u: goto label_2086a0;
        case 0x2086a4u: goto label_2086a4;
        case 0x2086a8u: goto label_2086a8;
        case 0x2086acu: goto label_2086ac;
        case 0x2086b0u: goto label_2086b0;
        case 0x2086b4u: goto label_2086b4;
        case 0x2086b8u: goto label_2086b8;
        case 0x2086bcu: goto label_2086bc;
        case 0x2086c0u: goto label_2086c0;
        case 0x2086c4u: goto label_2086c4;
        case 0x2086c8u: goto label_2086c8;
        case 0x2086ccu: goto label_2086cc;
        case 0x2086d0u: goto label_2086d0;
        case 0x2086d4u: goto label_2086d4;
        case 0x2086d8u: goto label_2086d8;
        case 0x2086dcu: goto label_2086dc;
        case 0x2086e0u: goto label_2086e0;
        case 0x2086e4u: goto label_2086e4;
        case 0x2086e8u: goto label_2086e8;
        case 0x2086ecu: goto label_2086ec;
        case 0x2086f0u: goto label_2086f0;
        case 0x2086f4u: goto label_2086f4;
        case 0x2086f8u: goto label_2086f8;
        case 0x2086fcu: goto label_2086fc;
        case 0x208700u: goto label_208700;
        case 0x208704u: goto label_208704;
        case 0x208708u: goto label_208708;
        case 0x20870cu: goto label_20870c;
        case 0x208710u: goto label_208710;
        case 0x208714u: goto label_208714;
        case 0x208718u: goto label_208718;
        case 0x20871cu: goto label_20871c;
        case 0x208720u: goto label_208720;
        case 0x208724u: goto label_208724;
        case 0x208728u: goto label_208728;
        case 0x20872cu: goto label_20872c;
        case 0x208730u: goto label_208730;
        case 0x208734u: goto label_208734;
        case 0x208738u: goto label_208738;
        case 0x20873cu: goto label_20873c;
        case 0x208740u: goto label_208740;
        case 0x208744u: goto label_208744;
        case 0x208748u: goto label_208748;
        case 0x20874cu: goto label_20874c;
        case 0x208750u: goto label_208750;
        case 0x208754u: goto label_208754;
        case 0x208758u: goto label_208758;
        case 0x20875cu: goto label_20875c;
        case 0x208760u: goto label_208760;
        case 0x208764u: goto label_208764;
        case 0x208768u: goto label_208768;
        case 0x20876cu: goto label_20876c;
        case 0x208770u: goto label_208770;
        case 0x208774u: goto label_208774;
        case 0x208778u: goto label_208778;
        case 0x20877cu: goto label_20877c;
        case 0x208780u: goto label_208780;
        case 0x208784u: goto label_208784;
        case 0x208788u: goto label_208788;
        case 0x20878cu: goto label_20878c;
        case 0x208790u: goto label_208790;
        case 0x208794u: goto label_208794;
        case 0x208798u: goto label_208798;
        case 0x20879cu: goto label_20879c;
        case 0x2087a0u: goto label_2087a0;
        case 0x2087a4u: goto label_2087a4;
        case 0x2087a8u: goto label_2087a8;
        case 0x2087acu: goto label_2087ac;
        case 0x2087b0u: goto label_2087b0;
        case 0x2087b4u: goto label_2087b4;
        case 0x2087b8u: goto label_2087b8;
        case 0x2087bcu: goto label_2087bc;
        case 0x2087c0u: goto label_2087c0;
        case 0x2087c4u: goto label_2087c4;
        case 0x2087c8u: goto label_2087c8;
        case 0x2087ccu: goto label_2087cc;
        case 0x2087d0u: goto label_2087d0;
        case 0x2087d4u: goto label_2087d4;
        case 0x2087d8u: goto label_2087d8;
        case 0x2087dcu: goto label_2087dc;
        case 0x2087e0u: goto label_2087e0;
        case 0x2087e4u: goto label_2087e4;
        case 0x2087e8u: goto label_2087e8;
        case 0x2087ecu: goto label_2087ec;
        case 0x2087f0u: goto label_2087f0;
        case 0x2087f4u: goto label_2087f4;
        case 0x2087f8u: goto label_2087f8;
        case 0x2087fcu: goto label_2087fc;
        case 0x208800u: goto label_208800;
        case 0x208804u: goto label_208804;
        case 0x208808u: goto label_208808;
        case 0x20880cu: goto label_20880c;
        case 0x208810u: goto label_208810;
        case 0x208814u: goto label_208814;
        case 0x208818u: goto label_208818;
        case 0x20881cu: goto label_20881c;
        case 0x208820u: goto label_208820;
        case 0x208824u: goto label_208824;
        case 0x208828u: goto label_208828;
        case 0x20882cu: goto label_20882c;
        case 0x208830u: goto label_208830;
        case 0x208834u: goto label_208834;
        case 0x208838u: goto label_208838;
        case 0x20883cu: goto label_20883c;
        case 0x208840u: goto label_208840;
        case 0x208844u: goto label_208844;
        case 0x208848u: goto label_208848;
        case 0x20884cu: goto label_20884c;
        case 0x208850u: goto label_208850;
        case 0x208854u: goto label_208854;
        case 0x208858u: goto label_208858;
        case 0x20885cu: goto label_20885c;
        case 0x208860u: goto label_208860;
        case 0x208864u: goto label_208864;
        case 0x208868u: goto label_208868;
        case 0x20886cu: goto label_20886c;
        case 0x208870u: goto label_208870;
        case 0x208874u: goto label_208874;
        case 0x208878u: goto label_208878;
        case 0x20887cu: goto label_20887c;
        case 0x208880u: goto label_208880;
        case 0x208884u: goto label_208884;
        case 0x208888u: goto label_208888;
        case 0x20888cu: goto label_20888c;
        case 0x208890u: goto label_208890;
        case 0x208894u: goto label_208894;
        case 0x208898u: goto label_208898;
        case 0x20889cu: goto label_20889c;
        case 0x2088a0u: goto label_2088a0;
        case 0x2088a4u: goto label_2088a4;
        case 0x2088a8u: goto label_2088a8;
        case 0x2088acu: goto label_2088ac;
        case 0x2088b0u: goto label_2088b0;
        case 0x2088b4u: goto label_2088b4;
        case 0x2088b8u: goto label_2088b8;
        case 0x2088bcu: goto label_2088bc;
        case 0x2088c0u: goto label_2088c0;
        case 0x2088c4u: goto label_2088c4;
        case 0x2088c8u: goto label_2088c8;
        case 0x2088ccu: goto label_2088cc;
        case 0x2088d0u: goto label_2088d0;
        case 0x2088d4u: goto label_2088d4;
        case 0x2088d8u: goto label_2088d8;
        case 0x2088dcu: goto label_2088dc;
        case 0x2088e0u: goto label_2088e0;
        case 0x2088e4u: goto label_2088e4;
        case 0x2088e8u: goto label_2088e8;
        case 0x2088ecu: goto label_2088ec;
        case 0x2088f0u: goto label_2088f0;
        case 0x2088f4u: goto label_2088f4;
        case 0x2088f8u: goto label_2088f8;
        case 0x2088fcu: goto label_2088fc;
        case 0x208900u: goto label_208900;
        case 0x208904u: goto label_208904;
        case 0x208908u: goto label_208908;
        case 0x20890cu: goto label_20890c;
        case 0x208910u: goto label_208910;
        case 0x208914u: goto label_208914;
        case 0x208918u: goto label_208918;
        case 0x20891cu: goto label_20891c;
        case 0x208920u: goto label_208920;
        case 0x208924u: goto label_208924;
        case 0x208928u: goto label_208928;
        case 0x20892cu: goto label_20892c;
        case 0x208930u: goto label_208930;
        case 0x208934u: goto label_208934;
        case 0x208938u: goto label_208938;
        case 0x20893cu: goto label_20893c;
        case 0x208940u: goto label_208940;
        case 0x208944u: goto label_208944;
        case 0x208948u: goto label_208948;
        case 0x20894cu: goto label_20894c;
        case 0x208950u: goto label_208950;
        case 0x208954u: goto label_208954;
        case 0x208958u: goto label_208958;
        case 0x20895cu: goto label_20895c;
        case 0x208960u: goto label_208960;
        case 0x208964u: goto label_208964;
        case 0x208968u: goto label_208968;
        case 0x20896cu: goto label_20896c;
        case 0x208970u: goto label_208970;
        case 0x208974u: goto label_208974;
        case 0x208978u: goto label_208978;
        case 0x20897cu: goto label_20897c;
        case 0x208980u: goto label_208980;
        case 0x208984u: goto label_208984;
        case 0x208988u: goto label_208988;
        case 0x20898cu: goto label_20898c;
        case 0x208990u: goto label_208990;
        case 0x208994u: goto label_208994;
        case 0x208998u: goto label_208998;
        case 0x20899cu: goto label_20899c;
        case 0x2089a0u: goto label_2089a0;
        case 0x2089a4u: goto label_2089a4;
        case 0x2089a8u: goto label_2089a8;
        case 0x2089acu: goto label_2089ac;
        case 0x2089b0u: goto label_2089b0;
        case 0x2089b4u: goto label_2089b4;
        case 0x2089b8u: goto label_2089b8;
        case 0x2089bcu: goto label_2089bc;
        case 0x2089c0u: goto label_2089c0;
        case 0x2089c4u: goto label_2089c4;
        case 0x2089c8u: goto label_2089c8;
        case 0x2089ccu: goto label_2089cc;
        case 0x2089d0u: goto label_2089d0;
        case 0x2089d4u: goto label_2089d4;
        case 0x2089d8u: goto label_2089d8;
        case 0x2089dcu: goto label_2089dc;
        case 0x2089e0u: goto label_2089e0;
        case 0x2089e4u: goto label_2089e4;
        case 0x2089e8u: goto label_2089e8;
        case 0x2089ecu: goto label_2089ec;
        case 0x2089f0u: goto label_2089f0;
        case 0x2089f4u: goto label_2089f4;
        case 0x2089f8u: goto label_2089f8;
        case 0x2089fcu: goto label_2089fc;
        case 0x208a00u: goto label_208a00;
        case 0x208a04u: goto label_208a04;
        case 0x208a08u: goto label_208a08;
        case 0x208a0cu: goto label_208a0c;
        case 0x208a10u: goto label_208a10;
        case 0x208a14u: goto label_208a14;
        case 0x208a18u: goto label_208a18;
        case 0x208a1cu: goto label_208a1c;
        case 0x208a20u: goto label_208a20;
        case 0x208a24u: goto label_208a24;
        case 0x208a28u: goto label_208a28;
        case 0x208a2cu: goto label_208a2c;
        case 0x208a30u: goto label_208a30;
        case 0x208a34u: goto label_208a34;
        case 0x208a38u: goto label_208a38;
        case 0x208a3cu: goto label_208a3c;
        case 0x208a40u: goto label_208a40;
        case 0x208a44u: goto label_208a44;
        case 0x208a48u: goto label_208a48;
        case 0x208a4cu: goto label_208a4c;
        case 0x208a50u: goto label_208a50;
        case 0x208a54u: goto label_208a54;
        case 0x208a58u: goto label_208a58;
        case 0x208a5cu: goto label_208a5c;
        case 0x208a60u: goto label_208a60;
        case 0x208a64u: goto label_208a64;
        case 0x208a68u: goto label_208a68;
        case 0x208a6cu: goto label_208a6c;
        case 0x208a70u: goto label_208a70;
        case 0x208a74u: goto label_208a74;
        case 0x208a78u: goto label_208a78;
        case 0x208a7cu: goto label_208a7c;
        case 0x208a80u: goto label_208a80;
        case 0x208a84u: goto label_208a84;
        case 0x208a88u: goto label_208a88;
        case 0x208a8cu: goto label_208a8c;
        case 0x208a90u: goto label_208a90;
        case 0x208a94u: goto label_208a94;
        case 0x208a98u: goto label_208a98;
        case 0x208a9cu: goto label_208a9c;
        case 0x208aa0u: goto label_208aa0;
        case 0x208aa4u: goto label_208aa4;
        case 0x208aa8u: goto label_208aa8;
        case 0x208aacu: goto label_208aac;
        case 0x208ab0u: goto label_208ab0;
        case 0x208ab4u: goto label_208ab4;
        case 0x208ab8u: goto label_208ab8;
        case 0x208abcu: goto label_208abc;
        case 0x208ac0u: goto label_208ac0;
        case 0x208ac4u: goto label_208ac4;
        case 0x208ac8u: goto label_208ac8;
        case 0x208accu: goto label_208acc;
        case 0x208ad0u: goto label_208ad0;
        case 0x208ad4u: goto label_208ad4;
        case 0x208ad8u: goto label_208ad8;
        case 0x208adcu: goto label_208adc;
        case 0x208ae0u: goto label_208ae0;
        case 0x208ae4u: goto label_208ae4;
        case 0x208ae8u: goto label_208ae8;
        case 0x208aecu: goto label_208aec;
        case 0x208af0u: goto label_208af0;
        case 0x208af4u: goto label_208af4;
        case 0x208af8u: goto label_208af8;
        case 0x208afcu: goto label_208afc;
        case 0x208b00u: goto label_208b00;
        case 0x208b04u: goto label_208b04;
        case 0x208b08u: goto label_208b08;
        case 0x208b0cu: goto label_208b0c;
        case 0x208b10u: goto label_208b10;
        case 0x208b14u: goto label_208b14;
        case 0x208b18u: goto label_208b18;
        case 0x208b1cu: goto label_208b1c;
        case 0x208b20u: goto label_208b20;
        case 0x208b24u: goto label_208b24;
        case 0x208b28u: goto label_208b28;
        case 0x208b2cu: goto label_208b2c;
        case 0x208b30u: goto label_208b30;
        case 0x208b34u: goto label_208b34;
        case 0x208b38u: goto label_208b38;
        case 0x208b3cu: goto label_208b3c;
        default: break;
    }

    ctx->pc = 0x208510u;

label_208510:
    // 0x208510: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_208514:
    // 0x208514: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x208514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_208518:
    // 0x208518: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x208518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_20851c:
    // 0x20851c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20851cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208520:
    // 0x208520: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x208520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_208524:
    // 0x208524: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x208524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_208528:
    // 0x208528: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x208528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_20852c:
    // 0x20852c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x20852cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_208530:
    // 0x208530: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x208530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_208534:
    // 0x208534: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x208534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_208538:
    // 0x208538: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x208538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_20853c:
    // 0x20853c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_208540:
    // 0x208540: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x208540u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_208544:
    // 0x208544: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x208544u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_208548:
    // 0x208548: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x208548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_20854c:
    // 0x20854c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x20854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_208550:
    // 0x208550: 0x1440016d  bnez        $v0, . + 4 + (0x16D << 2)
label_208554:
    if (ctx->pc == 0x208554u) {
        ctx->pc = 0x208554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208550u;
        // 0x208554: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208558u;
        goto label_208558;
    }
    ctx->pc = 0x208550u;
    {
        const bool branch_taken_0x208550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208550u;
        // 0x208554: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208550) {
            ctx->pc = 0x208B08u;
            goto label_208b08;
        }
    }
    ctx->pc = 0x208558u;
label_208558:
    // 0x208558: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x208558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_20855c:
    // 0x20855c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208560:
    // 0x208560: 0xc06ba26  jal         func_1AE898
label_208564:
    if (ctx->pc == 0x208564u) {
        ctx->pc = 0x208564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208560u;
        // 0x208564: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208568u;
        goto label_208568;
    }
    ctx->pc = 0x208560u;
    SET_GPR_U32(ctx, 31, 0x208568u);
    ctx->pc = 0x208564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208560u;
    // 0x208564: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x208560u, 0x208568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208568u;
label_208568:
    // 0x208568: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x208568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_20856c:
    // 0x20856c: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x20856cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
label_208570:
    // 0x208570: 0x8c62cdb4  lw          $v0, -0x324C($v1)
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_208574:
    // 0x208574: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208578:
    // 0x208578: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x208578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_20857c:
    // 0x20857c: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_208580:
    if (ctx->pc == 0x208580u) {
        ctx->pc = 0x208580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20857Cu;
        // 0x208580: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208584u;
        goto label_208584;
    }
    ctx->pc = 0x20857Cu;
    {
        const bool branch_taken_0x20857c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20857Cu;
        // 0x208580: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20857c) {
            ctx->pc = 0x208694u;
            goto label_208694;
        }
    }
    ctx->pc = 0x208584u;
label_208584:
    // 0x208584: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_208588:
    if (ctx->pc == 0x208588u) {
        ctx->pc = 0x208588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208584u;
        // 0x208588: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20858Cu;
        goto label_20858c;
    }
    ctx->pc = 0x208584u;
    {
        const bool branch_taken_0x208584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208584u;
        // 0x208588: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208584) {
            ctx->pc = 0x2085F8u;
            goto label_2085f8;
        }
    }
    ctx->pc = 0x20858Cu;
label_20858c:
    // 0x20858c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x20858cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_208590:
    // 0x208590: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x208590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_208594:
    // 0x208594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x208594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208598:
    // 0x208598: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x208598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
label_20859c:
    // 0x20859c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x20859cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_2085a0:
    // 0x2085a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2085a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2085a4:
    // 0x2085a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2085a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2085a8:
    // 0x2085a8: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x2085a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_2085ac:
    // 0x2085ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2085acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2085b0:
    // 0x2085b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2085b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2085b4:
    // 0x2085b4: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2085b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2085b8:
    // 0x2085b8: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x2085b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
label_2085bc:
    // 0x2085bc: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x2085bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_2085c0:
    // 0x2085c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2085c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2085c4:
    // 0x2085c4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x2085c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_2085c8:
    // 0x2085c8: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x2085c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_2085cc:
    // 0x2085cc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2085ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_2085d0:
    // 0x2085d0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2085d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2085d4:
    // 0x2085d4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2085d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2085d8:
    // 0x2085d8: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x2085d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_2085dc:
    // 0x2085dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2085dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2085e0:
    // 0x2085e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2085e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2085e4:
    // 0x2085e4: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x2085e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_2085e8:
    // 0x2085e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2085e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2085ec:
    // 0x2085ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2085ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2085f0:
    // 0x2085f0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2085f4:
    if (ctx->pc == 0x2085F4u) {
        ctx->pc = 0x2085F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085F0u;
        // 0x2085f4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2085F8u;
        goto label_2085f8;
    }
    ctx->pc = 0x2085F0u;
    {
        const bool branch_taken_0x2085f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085F0u;
        // 0x2085f4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085f0) {
            ctx->pc = 0x208660u;
            goto label_208660;
        }
    }
    ctx->pc = 0x2085F8u;
label_2085f8:
    // 0x2085f8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_2085fc:
    // 0x2085fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2085fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_208600:
    // 0x208600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x208600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208604:
    // 0x208604: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
label_208608:
    // 0x208608: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x208608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_20860c:
    // 0x20860c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20860cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208610:
    // 0x208610: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x208610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_208614:
    // 0x208614: 0x3c013e57  lui         $at, 0x3E57
    ctx->pc = 0x208614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15959 << 16));
label_208618:
    // 0x208618: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x208618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_20861c:
    // 0x20861c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20861cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_208620:
    // 0x208620: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x208620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_208624:
    // 0x208624: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x208624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
label_208628:
    // 0x208628: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x208628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_20862c:
    // 0x20862c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20862cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_208630:
    // 0x208630: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_208634:
    // 0x208634: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x208634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_208638:
    // 0x208638: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x208638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_20863c:
    // 0x20863c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20863cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_208640:
    // 0x208640: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x208640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_208644:
    // 0x208644: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x208644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_208648:
    // 0x208648: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x208648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20864c:
    // 0x20864c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x20864cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_208650:
    // 0x208650: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x208650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_208654:
    // 0x208654: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_208658:
    // 0x208658: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x208658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_20865c:
    // 0x20865c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x20865cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_208660:
    // 0x208660: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x208660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_208664:
    // 0x208664: 0xe440f634  swc1        $f0, -0x9CC($v0)
    ctx->pc = 0x208664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964788), bits); }
label_208668:
    // 0x208668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x208668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20866c:
    // 0x20866c: 0xe461f638  swc1        $f1, -0x9C8($v1)
    ctx->pc = 0x20866cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964792), bits); }
label_208670:
    // 0x208670: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x208670u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208674:
    // 0x208674: 0xe482f63c  swc1        $f2, -0x9C4($a0)
    ctx->pc = 0x208674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964796), bits); }
label_208678:
    // 0x208678: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x208678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20867c:
    // 0x20867c: 0xe4a3f640  swc1        $f3, -0x9C0($a1)
    ctx->pc = 0x20867cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964800), bits); }
label_208680:
    // 0x208680: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x208680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_208684:
    // 0x208684: 0xe4c4f644  swc1        $f4, -0x9BC($a2)
    ctx->pc = 0x208684u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964804), bits); }
label_208688:
    // 0x208688: 0xe4e5f648  swc1        $f5, -0x9B8($a3)
    ctx->pc = 0x208688u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964808), bits); }
label_20868c:
    // 0x20868c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_208690:
    if (ctx->pc == 0x208690u) {
        ctx->pc = 0x208690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20868Cu;
        // 0x208690: 0xe506f64c  swc1        $f6, -0x9B4($t0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964812), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x208694u;
        goto label_208694;
    }
    ctx->pc = 0x20868Cu;
    {
        const bool branch_taken_0x20868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20868Cu;
        // 0x208690: 0xe506f64c  swc1        $f6, -0x9B4($t0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964812), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20868c) {
            ctx->pc = 0x20878Cu;
            goto label_20878c;
        }
    }
    ctx->pc = 0x208694u;
label_208694:
    // 0x208694: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x208694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_208698:
    // 0x208698: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_20869c:
    // 0x20869c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x20869cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_2086a0:
    // 0x2086a0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2086a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2086a4:
    // 0x2086a4: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x2086a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_2086a8:
    // 0x2086a8: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_2086ac:
    if (ctx->pc == 0x2086ACu) {
        ctx->pc = 0x2086ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086A8u;
        // 0x2086ac: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2086B0u;
        goto label_2086b0;
    }
    ctx->pc = 0x2086A8u;
    {
        const bool branch_taken_0x2086a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086A8u;
        // 0x2086ac: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086a8) {
            ctx->pc = 0x20878Cu;
            goto label_20878c;
        }
    }
    ctx->pc = 0x2086B0u;
label_2086b0:
    // 0x2086b0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2086b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2086b4:
    // 0x2086b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2086b8:
    if (ctx->pc == 0x2086B8u) {
        ctx->pc = 0x2086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086B4u;
        // 0x2086b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2086BCu;
        goto label_2086bc;
    }
    ctx->pc = 0x2086B4u;
    {
        const bool branch_taken_0x2086b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2086B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086B4u;
        // 0x2086b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086b4) {
            ctx->pc = 0x208718u;
            goto label_208718;
        }
    }
    ctx->pc = 0x2086BCu;
label_2086bc:
    // 0x2086bc: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x2086bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_2086c0:
    // 0x2086c0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2086c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_2086c4:
    // 0x2086c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2086c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2086c8:
    // 0x2086c8: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
label_2086cc:
    // 0x2086cc: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x2086ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_2086d0:
    // 0x2086d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2086d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2086d4:
    // 0x2086d4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2086d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2086d8:
    // 0x2086d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2086d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2086dc:
    // 0x2086dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2086dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2086e0:
    // 0x2086e0: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
label_2086e4:
    // 0x2086e4: 0x34216c8b  ori         $at, $at, 0x6C8B
    ctx->pc = 0x2086e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27787);
label_2086e8:
    // 0x2086e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2086e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2086ec:
    // 0x2086ec: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x2086ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_2086f0:
    // 0x2086f0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2086f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_2086f4:
    // 0x2086f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2086f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2086f8:
    // 0x2086f8: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2086f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_2086fc:
    // 0x2086fc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2086fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_208700:
    // 0x208700: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x208700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_208704:
    // 0x208704: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x208704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_208708:
    // 0x208708: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x208708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_20870c:
    // 0x20870c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x20870cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_208710:
    // 0x208710: 0x10000017  b           . + 4 + (0x17 << 2)
label_208714:
    if (ctx->pc == 0x208714u) {
        ctx->pc = 0x208714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208710u;
        // 0x208714: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208718u;
        goto label_208718;
    }
    ctx->pc = 0x208710u;
    {
        const bool branch_taken_0x208710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208710u;
        // 0x208714: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208710) {
            ctx->pc = 0x208770u;
            goto label_208770;
        }
    }
    ctx->pc = 0x208718u;
label_208718:
    // 0x208718: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x208718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_20871c:
    // 0x20871c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x20871cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_208720:
    // 0x208720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x208720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208724:
    // 0x208724: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x208724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
label_208728:
    // 0x208728: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x208728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_20872c:
    // 0x20872c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20872cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_208730:
    // 0x208730: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x208730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_208734:
    // 0x208734: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x208734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_208738:
    // 0x208738: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x208738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_20873c:
    // 0x20873c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20873cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_208740:
    // 0x208740: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x208740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
label_208744:
    // 0x208744: 0x34216c8b  ori         $at, $at, 0x6C8B
    ctx->pc = 0x208744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27787);
label_208748:
    // 0x208748: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x208748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20874c:
    // 0x20874c: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x20874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
label_208750:
    // 0x208750: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x208750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_208754:
    // 0x208754: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x208754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_208758:
    // 0x208758: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x208758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_20875c:
    // 0x20875c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20875cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_208760:
    // 0x208760: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x208760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_208764:
    // 0x208764: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x208764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_208768:
    // 0x208768: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x208768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_20876c:
    // 0x20876c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x20876cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_208770:
    // 0x208770: 0xe600f634  swc1        $f0, -0x9CC($s0)
    ctx->pc = 0x208770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294964788), bits); }
label_208774:
    // 0x208774: 0xe7c1f638  swc1        $f1, -0x9C8($fp)
    ctx->pc = 0x208774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4294964792), bits); }
label_208778:
    // 0x208778: 0xe442f63c  swc1        $f2, -0x9C4($v0)
    ctx->pc = 0x208778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964796), bits); }
label_20877c:
    // 0x20877c: 0xe463f640  swc1        $f3, -0x9C0($v1)
    ctx->pc = 0x20877cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964800), bits); }
label_208780:
    // 0x208780: 0xe4c4f644  swc1        $f4, -0x9BC($a2)
    ctx->pc = 0x208780u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964804), bits); }
label_208784:
    // 0x208784: 0xe6e5f648  swc1        $f5, -0x9B8($s7)
    ctx->pc = 0x208784u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4294964808), bits); }
label_208788:
    // 0x208788: 0xe626f64c  swc1        $f6, -0x9B4($s1)
    ctx->pc = 0x208788u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294964812), bits); }
label_20878c:
    // 0x20878c: 0xc4d4f644  lwc1        $f20, -0x9BC($a2)
    ctx->pc = 0x20878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_208790:
    // 0x208790: 0xc080ebe  jal         func_203AF8
label_208794:
    if (ctx->pc == 0x208794u) {
        ctx->pc = 0x208794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208790u;
        // 0x208794: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208798u;
        goto label_208798;
    }
    ctx->pc = 0x208790u;
    SET_GPR_U32(ctx, 31, 0x208798u);
    ctx->pc = 0x208794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208790u;
    // 0x208794: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x208790u, 0x208798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208798u;
label_208798:
    // 0x208798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x208798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20879c:
    // 0x20879c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x20879cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2087a0:
    // 0x2087a0: 0xc601f634  lwc1        $f1, -0x9CC($s0)
    ctx->pc = 0x2087a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294964788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2087a4:
    // 0x2087a4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2087a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2087a8:
    // 0x2087a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2087a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2087ac:
    // 0x2087ac: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2087acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2087b0:
    // 0x2087b0: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2087b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2087b4:
    // 0x2087b4: 0x24548d60  addiu       $s4, $v0, -0x72A0
    ctx->pc = 0x2087b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937952));
label_2087b8:
    // 0x2087b8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2087b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2087bc:
    // 0x2087bc: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2087bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2087c0:
    // 0x2087c0: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x2087c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2087c4:
    // 0x2087c4: 0x24a58d50  addiu       $a1, $a1, -0x72B0
    ctx->pc = 0x2087c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937936));
label_2087c8:
    // 0x2087c8: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x2087c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_2087cc:
    // 0x2087cc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2087ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2087d0:
    // 0x2087d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2087d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2087d4:
    // 0x2087d4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2087d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2087d8:
    // 0x2087d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2087d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2087dc:
    // 0x2087dc: 0x240900a1  addiu       $t1, $zero, 0xA1
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_2087e0:
    // 0x2087e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2087e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2087e4:
    // 0x2087e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2087e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2087e8:
    // 0x2087e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2087e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2087ec:
    // 0x2087ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2087ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2087f0:
    // 0x2087f0: 0x40f809  jalr        $v0
label_2087f4:
    if (ctx->pc == 0x2087F4u) {
        ctx->pc = 0x2087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087F0u;
        // 0x2087f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087F8u;
        goto label_2087f8;
    }
    ctx->pc = 0x2087F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2087F8u);
        ctx->pc = 0x2087F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087F0u;
        // 0x2087f4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2087F0u, 0x2087F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2087F8u;
label_2087f8:
    // 0x2087f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2087fc:
    if (ctx->pc == 0x2087FCu) {
        ctx->pc = 0x2087FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087F8u;
        // 0x2087fc: 0xae620094  sw          $v0, 0x94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208800u;
        goto label_208800;
    }
    ctx->pc = 0x2087F8u;
    {
        const bool branch_taken_0x2087f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2087f8) {
            ctx->pc = 0x2087FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2087F8u;
            // 0x2087fc: 0xae620094  sw          $v0, 0x94($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20880Cu;
            goto label_20880c;
        }
    }
    ctx->pc = 0x208800u;
label_208800:
    // 0x208800: 0xc0686fe  jal         func_1A1BF8
label_208804:
    if (ctx->pc == 0x208804u) {
        ctx->pc = 0x208804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208800u;
        // 0x208804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208808u;
        goto label_208808;
    }
    ctx->pc = 0x208800u;
    SET_GPR_U32(ctx, 31, 0x208808u);
    ctx->pc = 0x208804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208800u;
    // 0x208804: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x208800u, 0x208808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208808u;
label_208808:
    // 0x208808: 0xae620094  sw          $v0, 0x94($s3)
    ctx->pc = 0x208808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
label_20880c:
    // 0x20880c: 0xc080fd6  jal         func_203F58
label_208810:
    if (ctx->pc == 0x208810u) {
        ctx->pc = 0x208810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20880Cu;
        // 0x208810: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208814u;
        goto label_208814;
    }
    ctx->pc = 0x20880Cu;
    SET_GPR_U32(ctx, 31, 0x208814u);
    ctx->pc = 0x208810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20880Cu;
    // 0x208810: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F58u, 0x20880Cu, 0x208814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208814u;
label_208814:
    // 0x208814: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x208814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_208818:
    // 0x208818: 0x8e670094  lw          $a3, 0x94($s3)
    ctx->pc = 0x208818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_20881c:
    // 0x20881c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20881cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_208820:
    // 0x208820: 0x8c66d310  lw          $a2, -0x2CF0($v1)
    ctx->pc = 0x208820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955792)));
label_208824:
    // 0x208824: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x208824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208828:
    // 0x208828: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x208828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_20882c:
    // 0x20882c: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x20882cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
label_208830:
    // 0x208830: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_208834:
    // 0x208834: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x208834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_208838:
    // 0x208838: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x208838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20883c:
    // 0x20883c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20883cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_208840:
    // 0x208840: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x208840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_208844:
    // 0x208844: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x208844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208848:
    // 0x208848: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x208848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_20884c:
    // 0x20884c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20884cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208850:
    // 0x208850: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x208850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_208854:
    // 0x208854: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x208854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_208858:
    // 0x208858: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x208858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_20885c:
    // 0x20885c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20885cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208860:
    // 0x208860: 0x35290005  ori         $t1, $t1, 0x5
    ctx->pc = 0x208860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
label_208864:
    // 0x208864: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x208864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_208868:
    // 0x208868: 0x40f809  jalr        $v0
label_20886c:
    if (ctx->pc == 0x20886Cu) {
        ctx->pc = 0x20886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208868u;
        // 0x20886c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208870u;
        goto label_208870;
    }
    ctx->pc = 0x208868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208870u);
        ctx->pc = 0x20886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208868u;
        // 0x20886c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208868u, 0x208870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208870u;
label_208870:
    // 0x208870: 0xc080ebe  jal         func_203AF8
label_208874:
    if (ctx->pc == 0x208874u) {
        ctx->pc = 0x208878u;
        goto label_208878;
    }
    ctx->pc = 0x208870u;
    SET_GPR_U32(ctx, 31, 0x208878u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x208870u, 0x208878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208878u;
label_208878:
    // 0x208878: 0xc7c1f638  lwc1        $f1, -0x9C8($fp)
    ctx->pc = 0x208878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294964792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20887c:
    // 0x20887c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20887cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_208880:
    // 0x208880: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x208880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_208884:
    // 0x208884: 0x24a58da0  addiu       $a1, $a1, -0x7260
    ctx->pc = 0x208884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938016));
label_208888:
    // 0x208888: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x208888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_20888c:
    // 0x20888c: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x20888cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_208890:
    // 0x208890: 0xc635f64c  lwc1        $f21, -0x9B4($s1)
    ctx->pc = 0x208890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294964812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_208894:
    // 0x208894: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x208894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208898:
    // 0x208898: 0xc6f4f648  lwc1        $f20, -0x9B8($s7)
    ctx->pc = 0x208898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294964808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20889c:
    // 0x20889c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x20889cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2088a0:
    // 0x2088a0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2088a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2088a4:
    // 0x2088a4: 0x240900a8  addiu       $t1, $zero, 0xA8
    ctx->pc = 0x2088a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2088a8:
    // 0x2088a8: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x2088a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2088ac:
    // 0x2088ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2088acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2088b0:
    // 0x2088b0: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x2088b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_2088b4:
    // 0x2088b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2088b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2088b8:
    // 0x2088b8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2088bc:
    // 0x2088bc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2088bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2088c0:
    // 0x2088c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2088c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2088c4:
    // 0x2088c4: 0x40f809  jalr        $v0
label_2088c8:
    if (ctx->pc == 0x2088C8u) {
        ctx->pc = 0x2088C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088C4u;
        // 0x2088c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088CCu;
        goto label_2088cc;
    }
    ctx->pc = 0x2088C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2088CCu);
        ctx->pc = 0x2088C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088C4u;
        // 0x2088c8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2088C4u, 0x2088CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2088CCu;
label_2088cc:
    // 0x2088cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2088ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2088d0:
    // 0x2088d0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_2088d4:
    if (ctx->pc == 0x2088D4u) {
        ctx->pc = 0x2088D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088D0u;
        // 0x2088d4: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088D8u;
        goto label_2088d8;
    }
    ctx->pc = 0x2088D0u;
    {
        const bool branch_taken_0x2088d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088D0u;
        // 0x2088d4: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088d0) {
            ctx->pc = 0x208928u;
            goto label_208928;
        }
    }
    ctx->pc = 0x2088D8u;
label_2088d8:
    // 0x2088d8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2088dc:
    // 0x2088dc: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x2088dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_2088e0:
    // 0x2088e0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2088e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_2088e4:
    // 0x2088e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2088e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2088e8:
    // 0x2088e8: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x2088e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_2088ec:
    // 0x2088ec: 0xc080fd6  jal         func_203F58
label_2088f0:
    if (ctx->pc == 0x2088F0u) {
        ctx->pc = 0x2088F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088ECu;
        // 0x2088f0: 0x8fb00030  lw          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088F4u;
        goto label_2088f4;
    }
    ctx->pc = 0x2088ECu;
    SET_GPR_U32(ctx, 31, 0x2088F4u);
    ctx->pc = 0x2088F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2088ECu;
    // 0x2088f0: 0x8fb00030  lw          $s0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F58u, 0x2088ECu, 0x2088F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088F4u;
label_2088f4:
    // 0x2088f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2088f8:
    // 0x2088f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2088fc:
    // 0x2088fc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2088fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_208900:
    // 0x208900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208904:
    // 0x208904: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208908:
    // 0x208908: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x208908u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_20890c:
    // 0x20890c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x20890cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_208910:
    // 0x208910: 0x34470001  ori         $a3, $v0, 0x1
    ctx->pc = 0x208910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_208914:
    // 0x208914: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x208914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208918:
    // 0x208918: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x208918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20891c:
    // 0x20891c: 0xc0683f4  jal         func_1A0FD0
label_208920:
    if (ctx->pc == 0x208920u) {
        ctx->pc = 0x208920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20891Cu;
        // 0x208920: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208924u;
        goto label_208924;
    }
    ctx->pc = 0x20891Cu;
    SET_GPR_U32(ctx, 31, 0x208924u);
    ctx->pc = 0x208920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20891Cu;
    // 0x208920: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x20891Cu, 0x208924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208924u;
label_208924:
    // 0x208924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x208924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208928:
    // 0x208928: 0xae71008c  sw          $s1, 0x8C($s3)
    ctx->pc = 0x208928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 17));
label_20892c:
    // 0x20892c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_208930:
    // 0x208930: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x208930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_208934:
    // 0x208934: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x208934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_208938:
    // 0x208938: 0xc441f63c  lwc1        $f1, -0x9C4($v0)
    ctx->pc = 0x208938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20893c:
    // 0x20893c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x20893cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_208940:
    // 0x208940: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x208940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_208944:
    // 0x208944: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x208944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_208948:
    // 0x208948: 0xc460f640  lwc1        $f0, -0x9C0($v1)
    ctx->pc = 0x208948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20894c:
    // 0x20894c: 0x24a58da8  addiu       $a1, $a1, -0x7258
    ctx->pc = 0x20894cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938024));
label_208950:
    // 0x208950: 0xac560054  sw          $s6, 0x54($v0)
    ctx->pc = 0x208950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 22));
label_208954:
    // 0x208954: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x208954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_208958:
    // 0x208958: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x208958u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_20895c:
    // 0x20895c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208960:
    // 0x208960: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x208960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_208964:
    // 0x208964: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x208964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_208968:
    // 0x208968: 0x8e02d328  lw          $v0, -0x2CD8($s0)
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955816)));
label_20896c:
    // 0x20896c: 0x240900af  addiu       $t1, $zero, 0xAF
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_208970:
    // 0x208970: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x208970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208974:
    // 0x208974: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x208974u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208978:
    // 0x208978: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x208978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_20897c:
    // 0x20897c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x20897cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_208980:
    // 0x208980: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x208980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_208984:
    // 0x208984: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x208984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_208988:
    // 0x208988: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x208988u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_20898c:
    // 0x20898c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_208990:
    // 0x208990: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_208994:
    // 0x208994: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x208994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_208998:
    // 0x208998: 0x40f809  jalr        $v0
label_20899c:
    if (ctx->pc == 0x20899Cu) {
        ctx->pc = 0x20899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208998u;
        // 0x20899c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089A0u;
        goto label_2089a0;
    }
    ctx->pc = 0x208998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2089A0u);
        ctx->pc = 0x20899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208998u;
        // 0x20899c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208998u, 0x2089A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2089A0u;
label_2089a0:
    // 0x2089a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2089a4:
    if (ctx->pc == 0x2089A4u) {
        ctx->pc = 0x2089A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089A0u;
        // 0x2089a4: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089A8u;
        goto label_2089a8;
    }
    ctx->pc = 0x2089A0u;
    {
        const bool branch_taken_0x2089a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089a0) {
            ctx->pc = 0x2089A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2089A0u;
            // 0x2089a4: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2089B4u;
            goto label_2089b4;
        }
    }
    ctx->pc = 0x2089A8u;
label_2089a8:
    // 0x2089a8: 0xc06e3e6  jal         func_1B8F98
label_2089ac:
    if (ctx->pc == 0x2089ACu) {
        ctx->pc = 0x2089ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089A8u;
        // 0x2089ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089B0u;
        goto label_2089b0;
    }
    ctx->pc = 0x2089A8u;
    SET_GPR_U32(ctx, 31, 0x2089B0u);
    ctx->pc = 0x2089ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089A8u;
    // 0x2089ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x2089A8u, 0x2089B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089B0u;
label_2089b0:
    // 0x2089b0: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x2089b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
label_2089b4:
    // 0x2089b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2089b8:
    // 0x2089b8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x2089b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
label_2089bc:
    // 0x2089bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2089bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2089c0:
    // 0x2089c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2089c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2089c4:
    // 0x2089c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2089c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2089c8:
    // 0x2089c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2089cc:
    // 0x2089cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2089ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2089d0:
    // 0x2089d0: 0x8e06d328  lw          $a2, -0x2CD8($s0)
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955816)));
label_2089d4:
    // 0x2089d4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2089d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2089d8:
    // 0x2089d8: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x2089d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_2089dc:
    // 0x2089dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2089dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2089e0:
    // 0x2089e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2089e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2089e4:
    // 0x2089e4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2089e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_2089e8:
    // 0x2089e8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2089e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2089ec:
    // 0x2089ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2089ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2089f0:
    // 0x2089f0: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2089f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2089f4:
    // 0x2089f4: 0x40f809  jalr        $v0
label_2089f8:
    if (ctx->pc == 0x2089F8u) {
        ctx->pc = 0x2089F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089F4u;
        // 0x2089f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089FCu;
        goto label_2089fc;
    }
    ctx->pc = 0x2089F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2089FCu);
        ctx->pc = 0x2089F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089F4u;
        // 0x2089f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2089F4u, 0x2089FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2089FCu;
label_2089fc:
    // 0x2089fc: 0x8e710090  lw          $s1, 0x90($s3)
    ctx->pc = 0x2089fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_208a00:
    // 0x208a00: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x208a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_208a04:
    // 0x208a04: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x208a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208a08:
    // 0x208a08: 0x860200e8  lh          $v0, 0xE8($s0)
    ctx->pc = 0x208a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
label_208a0c:
    // 0x208a0c: 0x261000e8  addiu       $s0, $s0, 0xE8
    ctx->pc = 0x208a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_208a10:
    // 0x208a10: 0xc067b9c  jal         func_19EE70
label_208a14:
    if (ctx->pc == 0x208A14u) {
        ctx->pc = 0x208A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A10u;
        // 0x208a14: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A18u;
        goto label_208a18;
    }
    ctx->pc = 0x208A10u;
    SET_GPR_U32(ctx, 31, 0x208A18u);
    ctx->pc = 0x208A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A10u;
    // 0x208a14: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x208A10u, 0x208A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A18u;
label_208a18:
    // 0x208a18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x208a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_208a1c:
    // 0x208a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x208a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208a20:
    // 0x208a20: 0x60f809  jalr        $v1
label_208a24:
    if (ctx->pc == 0x208A24u) {
        ctx->pc = 0x208A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A20u;
        // 0x208a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A28u;
        goto label_208a28;
    }
    ctx->pc = 0x208A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208A28u);
        ctx->pc = 0x208A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A20u;
        // 0x208a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A20u, 0x208A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208A28u;
label_208a28:
    // 0x208a28: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x208a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_208a2c:
    // 0x208a2c: 0xc06e4a2  jal         func_1B9288
label_208a30:
    if (ctx->pc == 0x208A30u) {
        ctx->pc = 0x208A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A2Cu;
        // 0x208a30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A34u;
        goto label_208a34;
    }
    ctx->pc = 0x208A2Cu;
    SET_GPR_U32(ctx, 31, 0x208A34u);
    ctx->pc = 0x208A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A2Cu;
    // 0x208a30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x208A2Cu, 0x208A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A34u;
label_208a34:
    // 0x208a34: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x208a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_208a38:
    // 0x208a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208a3c:
    // 0x208a3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x208a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_208a40:
    // 0x208a40: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x208a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_208a44:
    // 0x208a44: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x208a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_208a48:
    // 0x208a48: 0x60f809  jalr        $v1
label_208a4c:
    if (ctx->pc == 0x208A4Cu) {
        ctx->pc = 0x208A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A48u;
        // 0x208a4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A50u;
        goto label_208a50;
    }
    ctx->pc = 0x208A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208A50u);
        ctx->pc = 0x208A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A48u;
        // 0x208a4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A48u, 0x208A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208A50u;
label_208a50:
    // 0x208a50: 0xc080ebe  jal         func_203AF8
label_208a54:
    if (ctx->pc == 0x208A54u) {
        ctx->pc = 0x208A58u;
        goto label_208a58;
    }
    ctx->pc = 0x208A50u;
    SET_GPR_U32(ctx, 31, 0x208A58u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x208A50u, 0x208A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A58u;
label_208a58:
    // 0x208a58: 0xc080ec2  jal         func_203B08
label_208a5c:
    if (ctx->pc == 0x208A5Cu) {
        ctx->pc = 0x208A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A58u;
        // 0x208a5c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A60u;
        goto label_208a60;
    }
    ctx->pc = 0x208A58u;
    SET_GPR_U32(ctx, 31, 0x208A60u);
    ctx->pc = 0x208A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A58u;
    // 0x208a5c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x208A58u, 0x208A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A60u;
label_208a60:
    // 0x208a60: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x208a60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_208a64:
    // 0x208a64: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x208a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_208a68:
    // 0x208a68: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_208a6c:
    // 0x208a6c: 0x24a58db8  addiu       $a1, $a1, -0x7248
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938040));
label_208a70:
    // 0x208a70: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x208a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_208a74:
    // 0x208a74: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x208a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_208a78:
    // 0x208a78: 0xe656000c  swc1        $f22, 0xC($s2)
    ctx->pc = 0x208a78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_208a7c:
    // 0x208a7c: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x208a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_208a80:
    // 0x208a80: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x208a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_208a84:
    // 0x208a84: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x208a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_208a88:
    // 0x208a88: 0x240900b7  addiu       $t1, $zero, 0xB7
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_208a8c:
    // 0x208a8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x208a8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208a90:
    // 0x208a90: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x208a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_208a94:
    // 0x208a94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x208a94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208a98:
    // 0x208a98: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x208a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_208a9c:
    // 0x208a9c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x208a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_208aa0:
    // 0x208aa0: 0x40f809  jalr        $v0
label_208aa4:
    if (ctx->pc == 0x208AA4u) {
        ctx->pc = 0x208AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA0u;
        // 0x208aa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AA8u;
        goto label_208aa8;
    }
    ctx->pc = 0x208AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208AA8u);
        ctx->pc = 0x208AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA0u;
        // 0x208aa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AA0u, 0x208AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208AA8u;
label_208aa8:
    // 0x208aa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_208aac:
    if (ctx->pc == 0x208AACu) {
        ctx->pc = 0x208AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA8u;
        // 0x208aac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AB0u;
        goto label_208ab0;
    }
    ctx->pc = 0x208AA8u;
    {
        const bool branch_taken_0x208aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AA8u;
        // 0x208aac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208aa8) {
            ctx->pc = 0x208ABCu;
            goto label_208abc;
        }
    }
    ctx->pc = 0x208AB0u;
label_208ab0:
    // 0x208ab0: 0xc073a9c  jal         func_1CEA70
label_208ab4:
    if (ctx->pc == 0x208AB4u) {
        ctx->pc = 0x208AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB0u;
        // 0x208ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AB8u;
        goto label_208ab8;
    }
    ctx->pc = 0x208AB0u;
    SET_GPR_U32(ctx, 31, 0x208AB8u);
    ctx->pc = 0x208AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AB0u;
    // 0x208ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x208AB0u, 0x208AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AB8u;
label_208ab8:
    // 0x208ab8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x208ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208abc:
    // 0x208abc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x208abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208ac0:
    // 0x208ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x208ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208ac4:
    // 0x208ac4: 0xc073ad0  jal         func_1CEB40
label_208ac8:
    if (ctx->pc == 0x208AC8u) {
        ctx->pc = 0x208AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AC4u;
        // 0x208ac8: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ACCu;
        goto label_208acc;
    }
    ctx->pc = 0x208AC4u;
    SET_GPR_U32(ctx, 31, 0x208ACCu);
    ctx->pc = 0x208AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AC4u;
    // 0x208ac8: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x208AC4u, 0x208ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ACCu;
label_208acc:
    // 0x208acc: 0xc067b9c  jal         func_19EE70
label_208ad0:
    if (ctx->pc == 0x208AD0u) {
        ctx->pc = 0x208AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ACCu;
        // 0x208ad0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AD4u;
        goto label_208ad4;
    }
    ctx->pc = 0x208ACCu;
    SET_GPR_U32(ctx, 31, 0x208AD4u);
    ctx->pc = 0x208AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208ACCu;
    // 0x208ad0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x208ACCu, 0x208AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AD4u;
label_208ad4:
    // 0x208ad4: 0x8e640098  lw          $a0, 0x98($s3)
    ctx->pc = 0x208ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_208ad8:
    // 0x208ad8: 0xc073b0a  jal         func_1CEC28
label_208adc:
    if (ctx->pc == 0x208ADCu) {
        ctx->pc = 0x208ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD8u;
        // 0x208adc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AE0u;
        goto label_208ae0;
    }
    ctx->pc = 0x208AD8u;
    SET_GPR_U32(ctx, 31, 0x208AE0u);
    ctx->pc = 0x208ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AD8u;
    // 0x208adc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x208AD8u, 0x208AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AE0u;
label_208ae0:
    // 0x208ae0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208ae4:
    // 0x208ae4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x208ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_208ae8:
    // 0x208ae8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x208ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_208aec:
    // 0x208aec: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x208aecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_208af0:
    // 0x208af0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x208af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_208af4:
    // 0x208af4: 0x60f809  jalr        $v1
label_208af8:
    if (ctx->pc == 0x208AF8u) {
        ctx->pc = 0x208AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AF4u;
        // 0x208af8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AFCu;
        goto label_208afc;
    }
    ctx->pc = 0x208AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208AFCu);
        ctx->pc = 0x208AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AF4u;
        // 0x208af8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AF4u, 0x208AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208AFCu;
label_208afc:
    // 0x208afc: 0xae76000c  sw          $s6, 0xC($s3)
    ctx->pc = 0x208afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 22));
label_208b00:
    // 0x208b00: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x208b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_208b04:
    // 0x208b04: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x208b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_208b08:
    // 0x208b08: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x208b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_208b0c:
    // 0x208b0c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x208b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_208b10:
    // 0x208b10: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x208b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_208b14:
    // 0x208b14: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x208b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_208b18:
    // 0x208b18: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x208b18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_208b1c:
    // 0x208b1c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x208b1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_208b20:
    // 0x208b20: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x208b20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_208b24:
    // 0x208b24: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x208b24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_208b28:
    // 0x208b28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x208b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_208b2c:
    // 0x208b2c: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x208b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_208b30:
    // 0x208b30: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x208b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_208b34:
    // 0x208b34: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x208b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_208b38:
    // 0x208b38: 0x3e00008  jr          $ra
label_208b3c:
    if (ctx->pc == 0x208B3Cu) {
        ctx->pc = 0x208B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B38u;
        // 0x208b3c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B40u;
        goto label_fallthrough_0x208b38;
    }
    ctx->pc = 0x208B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B38u;
        // 0x208b3c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208b38:
    ctx->pc = 0x208B40u;
}
