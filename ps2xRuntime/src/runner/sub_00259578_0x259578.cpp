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

// Function: sub_00259578
// Address: 0x259578 - 0x25a178
void sub_00259578_0x259578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259578_0x259578");
#endif

    switch (ctx->pc) {
        case 0x259578u: goto label_259578;
        case 0x25957cu: goto label_25957c;
        case 0x259580u: goto label_259580;
        case 0x259584u: goto label_259584;
        case 0x259588u: goto label_259588;
        case 0x25958cu: goto label_25958c;
        case 0x259590u: goto label_259590;
        case 0x259594u: goto label_259594;
        case 0x259598u: goto label_259598;
        case 0x25959cu: goto label_25959c;
        case 0x2595a0u: goto label_2595a0;
        case 0x2595a4u: goto label_2595a4;
        case 0x2595a8u: goto label_2595a8;
        case 0x2595acu: goto label_2595ac;
        case 0x2595b0u: goto label_2595b0;
        case 0x2595b4u: goto label_2595b4;
        case 0x2595b8u: goto label_2595b8;
        case 0x2595bcu: goto label_2595bc;
        case 0x2595c0u: goto label_2595c0;
        case 0x2595c4u: goto label_2595c4;
        case 0x2595c8u: goto label_2595c8;
        case 0x2595ccu: goto label_2595cc;
        case 0x2595d0u: goto label_2595d0;
        case 0x2595d4u: goto label_2595d4;
        case 0x2595d8u: goto label_2595d8;
        case 0x2595dcu: goto label_2595dc;
        case 0x2595e0u: goto label_2595e0;
        case 0x2595e4u: goto label_2595e4;
        case 0x2595e8u: goto label_2595e8;
        case 0x2595ecu: goto label_2595ec;
        case 0x2595f0u: goto label_2595f0;
        case 0x2595f4u: goto label_2595f4;
        case 0x2595f8u: goto label_2595f8;
        case 0x2595fcu: goto label_2595fc;
        case 0x259600u: goto label_259600;
        case 0x259604u: goto label_259604;
        case 0x259608u: goto label_259608;
        case 0x25960cu: goto label_25960c;
        case 0x259610u: goto label_259610;
        case 0x259614u: goto label_259614;
        case 0x259618u: goto label_259618;
        case 0x25961cu: goto label_25961c;
        case 0x259620u: goto label_259620;
        case 0x259624u: goto label_259624;
        case 0x259628u: goto label_259628;
        case 0x25962cu: goto label_25962c;
        case 0x259630u: goto label_259630;
        case 0x259634u: goto label_259634;
        case 0x259638u: goto label_259638;
        case 0x25963cu: goto label_25963c;
        case 0x259640u: goto label_259640;
        case 0x259644u: goto label_259644;
        case 0x259648u: goto label_259648;
        case 0x25964cu: goto label_25964c;
        case 0x259650u: goto label_259650;
        case 0x259654u: goto label_259654;
        case 0x259658u: goto label_259658;
        case 0x25965cu: goto label_25965c;
        case 0x259660u: goto label_259660;
        case 0x259664u: goto label_259664;
        case 0x259668u: goto label_259668;
        case 0x25966cu: goto label_25966c;
        case 0x259670u: goto label_259670;
        case 0x259674u: goto label_259674;
        case 0x259678u: goto label_259678;
        case 0x25967cu: goto label_25967c;
        case 0x259680u: goto label_259680;
        case 0x259684u: goto label_259684;
        case 0x259688u: goto label_259688;
        case 0x25968cu: goto label_25968c;
        case 0x259690u: goto label_259690;
        case 0x259694u: goto label_259694;
        case 0x259698u: goto label_259698;
        case 0x25969cu: goto label_25969c;
        case 0x2596a0u: goto label_2596a0;
        case 0x2596a4u: goto label_2596a4;
        case 0x2596a8u: goto label_2596a8;
        case 0x2596acu: goto label_2596ac;
        case 0x2596b0u: goto label_2596b0;
        case 0x2596b4u: goto label_2596b4;
        case 0x2596b8u: goto label_2596b8;
        case 0x2596bcu: goto label_2596bc;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596c4u: goto label_2596c4;
        case 0x2596c8u: goto label_2596c8;
        case 0x2596ccu: goto label_2596cc;
        case 0x2596d0u: goto label_2596d0;
        case 0x2596d4u: goto label_2596d4;
        case 0x2596d8u: goto label_2596d8;
        case 0x2596dcu: goto label_2596dc;
        case 0x2596e0u: goto label_2596e0;
        case 0x2596e4u: goto label_2596e4;
        case 0x2596e8u: goto label_2596e8;
        case 0x2596ecu: goto label_2596ec;
        case 0x2596f0u: goto label_2596f0;
        case 0x2596f4u: goto label_2596f4;
        case 0x2596f8u: goto label_2596f8;
        case 0x2596fcu: goto label_2596fc;
        case 0x259700u: goto label_259700;
        case 0x259704u: goto label_259704;
        case 0x259708u: goto label_259708;
        case 0x25970cu: goto label_25970c;
        case 0x259710u: goto label_259710;
        case 0x259714u: goto label_259714;
        case 0x259718u: goto label_259718;
        case 0x25971cu: goto label_25971c;
        case 0x259720u: goto label_259720;
        case 0x259724u: goto label_259724;
        case 0x259728u: goto label_259728;
        case 0x25972cu: goto label_25972c;
        case 0x259730u: goto label_259730;
        case 0x259734u: goto label_259734;
        case 0x259738u: goto label_259738;
        case 0x25973cu: goto label_25973c;
        case 0x259740u: goto label_259740;
        case 0x259744u: goto label_259744;
        case 0x259748u: goto label_259748;
        case 0x25974cu: goto label_25974c;
        case 0x259750u: goto label_259750;
        case 0x259754u: goto label_259754;
        case 0x259758u: goto label_259758;
        case 0x25975cu: goto label_25975c;
        case 0x259760u: goto label_259760;
        case 0x259764u: goto label_259764;
        case 0x259768u: goto label_259768;
        case 0x25976cu: goto label_25976c;
        case 0x259770u: goto label_259770;
        case 0x259774u: goto label_259774;
        case 0x259778u: goto label_259778;
        case 0x25977cu: goto label_25977c;
        case 0x259780u: goto label_259780;
        case 0x259784u: goto label_259784;
        case 0x259788u: goto label_259788;
        case 0x25978cu: goto label_25978c;
        case 0x259790u: goto label_259790;
        case 0x259794u: goto label_259794;
        case 0x259798u: goto label_259798;
        case 0x25979cu: goto label_25979c;
        case 0x2597a0u: goto label_2597a0;
        case 0x2597a4u: goto label_2597a4;
        case 0x2597a8u: goto label_2597a8;
        case 0x2597acu: goto label_2597ac;
        case 0x2597b0u: goto label_2597b0;
        case 0x2597b4u: goto label_2597b4;
        case 0x2597b8u: goto label_2597b8;
        case 0x2597bcu: goto label_2597bc;
        case 0x2597c0u: goto label_2597c0;
        case 0x2597c4u: goto label_2597c4;
        case 0x2597c8u: goto label_2597c8;
        case 0x2597ccu: goto label_2597cc;
        case 0x2597d0u: goto label_2597d0;
        case 0x2597d4u: goto label_2597d4;
        case 0x2597d8u: goto label_2597d8;
        case 0x2597dcu: goto label_2597dc;
        case 0x2597e0u: goto label_2597e0;
        case 0x2597e4u: goto label_2597e4;
        case 0x2597e8u: goto label_2597e8;
        case 0x2597ecu: goto label_2597ec;
        case 0x2597f0u: goto label_2597f0;
        case 0x2597f4u: goto label_2597f4;
        case 0x2597f8u: goto label_2597f8;
        case 0x2597fcu: goto label_2597fc;
        case 0x259800u: goto label_259800;
        case 0x259804u: goto label_259804;
        case 0x259808u: goto label_259808;
        case 0x25980cu: goto label_25980c;
        case 0x259810u: goto label_259810;
        case 0x259814u: goto label_259814;
        case 0x259818u: goto label_259818;
        case 0x25981cu: goto label_25981c;
        case 0x259820u: goto label_259820;
        case 0x259824u: goto label_259824;
        case 0x259828u: goto label_259828;
        case 0x25982cu: goto label_25982c;
        case 0x259830u: goto label_259830;
        case 0x259834u: goto label_259834;
        case 0x259838u: goto label_259838;
        case 0x25983cu: goto label_25983c;
        case 0x259840u: goto label_259840;
        case 0x259844u: goto label_259844;
        case 0x259848u: goto label_259848;
        case 0x25984cu: goto label_25984c;
        case 0x259850u: goto label_259850;
        case 0x259854u: goto label_259854;
        case 0x259858u: goto label_259858;
        case 0x25985cu: goto label_25985c;
        case 0x259860u: goto label_259860;
        case 0x259864u: goto label_259864;
        case 0x259868u: goto label_259868;
        case 0x25986cu: goto label_25986c;
        case 0x259870u: goto label_259870;
        case 0x259874u: goto label_259874;
        case 0x259878u: goto label_259878;
        case 0x25987cu: goto label_25987c;
        case 0x259880u: goto label_259880;
        case 0x259884u: goto label_259884;
        case 0x259888u: goto label_259888;
        case 0x25988cu: goto label_25988c;
        case 0x259890u: goto label_259890;
        case 0x259894u: goto label_259894;
        case 0x259898u: goto label_259898;
        case 0x25989cu: goto label_25989c;
        case 0x2598a0u: goto label_2598a0;
        case 0x2598a4u: goto label_2598a4;
        case 0x2598a8u: goto label_2598a8;
        case 0x2598acu: goto label_2598ac;
        case 0x2598b0u: goto label_2598b0;
        case 0x2598b4u: goto label_2598b4;
        case 0x2598b8u: goto label_2598b8;
        case 0x2598bcu: goto label_2598bc;
        case 0x2598c0u: goto label_2598c0;
        case 0x2598c4u: goto label_2598c4;
        case 0x2598c8u: goto label_2598c8;
        case 0x2598ccu: goto label_2598cc;
        case 0x2598d0u: goto label_2598d0;
        case 0x2598d4u: goto label_2598d4;
        case 0x2598d8u: goto label_2598d8;
        case 0x2598dcu: goto label_2598dc;
        case 0x2598e0u: goto label_2598e0;
        case 0x2598e4u: goto label_2598e4;
        case 0x2598e8u: goto label_2598e8;
        case 0x2598ecu: goto label_2598ec;
        case 0x2598f0u: goto label_2598f0;
        case 0x2598f4u: goto label_2598f4;
        case 0x2598f8u: goto label_2598f8;
        case 0x2598fcu: goto label_2598fc;
        case 0x259900u: goto label_259900;
        case 0x259904u: goto label_259904;
        case 0x259908u: goto label_259908;
        case 0x25990cu: goto label_25990c;
        case 0x259910u: goto label_259910;
        case 0x259914u: goto label_259914;
        case 0x259918u: goto label_259918;
        case 0x25991cu: goto label_25991c;
        case 0x259920u: goto label_259920;
        case 0x259924u: goto label_259924;
        case 0x259928u: goto label_259928;
        case 0x25992cu: goto label_25992c;
        case 0x259930u: goto label_259930;
        case 0x259934u: goto label_259934;
        case 0x259938u: goto label_259938;
        case 0x25993cu: goto label_25993c;
        case 0x259940u: goto label_259940;
        case 0x259944u: goto label_259944;
        case 0x259948u: goto label_259948;
        case 0x25994cu: goto label_25994c;
        case 0x259950u: goto label_259950;
        case 0x259954u: goto label_259954;
        case 0x259958u: goto label_259958;
        case 0x25995cu: goto label_25995c;
        case 0x259960u: goto label_259960;
        case 0x259964u: goto label_259964;
        case 0x259968u: goto label_259968;
        case 0x25996cu: goto label_25996c;
        case 0x259970u: goto label_259970;
        case 0x259974u: goto label_259974;
        case 0x259978u: goto label_259978;
        case 0x25997cu: goto label_25997c;
        case 0x259980u: goto label_259980;
        case 0x259984u: goto label_259984;
        case 0x259988u: goto label_259988;
        case 0x25998cu: goto label_25998c;
        case 0x259990u: goto label_259990;
        case 0x259994u: goto label_259994;
        case 0x259998u: goto label_259998;
        case 0x25999cu: goto label_25999c;
        case 0x2599a0u: goto label_2599a0;
        case 0x2599a4u: goto label_2599a4;
        case 0x2599a8u: goto label_2599a8;
        case 0x2599acu: goto label_2599ac;
        case 0x2599b0u: goto label_2599b0;
        case 0x2599b4u: goto label_2599b4;
        case 0x2599b8u: goto label_2599b8;
        case 0x2599bcu: goto label_2599bc;
        case 0x2599c0u: goto label_2599c0;
        case 0x2599c4u: goto label_2599c4;
        case 0x2599c8u: goto label_2599c8;
        case 0x2599ccu: goto label_2599cc;
        case 0x2599d0u: goto label_2599d0;
        case 0x2599d4u: goto label_2599d4;
        case 0x2599d8u: goto label_2599d8;
        case 0x2599dcu: goto label_2599dc;
        case 0x2599e0u: goto label_2599e0;
        case 0x2599e4u: goto label_2599e4;
        case 0x2599e8u: goto label_2599e8;
        case 0x2599ecu: goto label_2599ec;
        case 0x2599f0u: goto label_2599f0;
        case 0x2599f4u: goto label_2599f4;
        case 0x2599f8u: goto label_2599f8;
        case 0x2599fcu: goto label_2599fc;
        case 0x259a00u: goto label_259a00;
        case 0x259a04u: goto label_259a04;
        case 0x259a08u: goto label_259a08;
        case 0x259a0cu: goto label_259a0c;
        case 0x259a10u: goto label_259a10;
        case 0x259a14u: goto label_259a14;
        case 0x259a18u: goto label_259a18;
        case 0x259a1cu: goto label_259a1c;
        case 0x259a20u: goto label_259a20;
        case 0x259a24u: goto label_259a24;
        case 0x259a28u: goto label_259a28;
        case 0x259a2cu: goto label_259a2c;
        case 0x259a30u: goto label_259a30;
        case 0x259a34u: goto label_259a34;
        case 0x259a38u: goto label_259a38;
        case 0x259a3cu: goto label_259a3c;
        case 0x259a40u: goto label_259a40;
        case 0x259a44u: goto label_259a44;
        case 0x259a48u: goto label_259a48;
        case 0x259a4cu: goto label_259a4c;
        case 0x259a50u: goto label_259a50;
        case 0x259a54u: goto label_259a54;
        case 0x259a58u: goto label_259a58;
        case 0x259a5cu: goto label_259a5c;
        case 0x259a60u: goto label_259a60;
        case 0x259a64u: goto label_259a64;
        case 0x259a68u: goto label_259a68;
        case 0x259a6cu: goto label_259a6c;
        case 0x259a70u: goto label_259a70;
        case 0x259a74u: goto label_259a74;
        case 0x259a78u: goto label_259a78;
        case 0x259a7cu: goto label_259a7c;
        case 0x259a80u: goto label_259a80;
        case 0x259a84u: goto label_259a84;
        case 0x259a88u: goto label_259a88;
        case 0x259a8cu: goto label_259a8c;
        case 0x259a90u: goto label_259a90;
        case 0x259a94u: goto label_259a94;
        case 0x259a98u: goto label_259a98;
        case 0x259a9cu: goto label_259a9c;
        case 0x259aa0u: goto label_259aa0;
        case 0x259aa4u: goto label_259aa4;
        case 0x259aa8u: goto label_259aa8;
        case 0x259aacu: goto label_259aac;
        case 0x259ab0u: goto label_259ab0;
        case 0x259ab4u: goto label_259ab4;
        case 0x259ab8u: goto label_259ab8;
        case 0x259abcu: goto label_259abc;
        case 0x259ac0u: goto label_259ac0;
        case 0x259ac4u: goto label_259ac4;
        case 0x259ac8u: goto label_259ac8;
        case 0x259accu: goto label_259acc;
        case 0x259ad0u: goto label_259ad0;
        case 0x259ad4u: goto label_259ad4;
        case 0x259ad8u: goto label_259ad8;
        case 0x259adcu: goto label_259adc;
        case 0x259ae0u: goto label_259ae0;
        case 0x259ae4u: goto label_259ae4;
        case 0x259ae8u: goto label_259ae8;
        case 0x259aecu: goto label_259aec;
        case 0x259af0u: goto label_259af0;
        case 0x259af4u: goto label_259af4;
        case 0x259af8u: goto label_259af8;
        case 0x259afcu: goto label_259afc;
        case 0x259b00u: goto label_259b00;
        case 0x259b04u: goto label_259b04;
        case 0x259b08u: goto label_259b08;
        case 0x259b0cu: goto label_259b0c;
        case 0x259b10u: goto label_259b10;
        case 0x259b14u: goto label_259b14;
        case 0x259b18u: goto label_259b18;
        case 0x259b1cu: goto label_259b1c;
        case 0x259b20u: goto label_259b20;
        case 0x259b24u: goto label_259b24;
        case 0x259b28u: goto label_259b28;
        case 0x259b2cu: goto label_259b2c;
        case 0x259b30u: goto label_259b30;
        case 0x259b34u: goto label_259b34;
        case 0x259b38u: goto label_259b38;
        case 0x259b3cu: goto label_259b3c;
        case 0x259b40u: goto label_259b40;
        case 0x259b44u: goto label_259b44;
        case 0x259b48u: goto label_259b48;
        case 0x259b4cu: goto label_259b4c;
        case 0x259b50u: goto label_259b50;
        case 0x259b54u: goto label_259b54;
        case 0x259b58u: goto label_259b58;
        case 0x259b5cu: goto label_259b5c;
        case 0x259b60u: goto label_259b60;
        case 0x259b64u: goto label_259b64;
        case 0x259b68u: goto label_259b68;
        case 0x259b6cu: goto label_259b6c;
        case 0x259b70u: goto label_259b70;
        case 0x259b74u: goto label_259b74;
        case 0x259b78u: goto label_259b78;
        case 0x259b7cu: goto label_259b7c;
        case 0x259b80u: goto label_259b80;
        case 0x259b84u: goto label_259b84;
        case 0x259b88u: goto label_259b88;
        case 0x259b8cu: goto label_259b8c;
        case 0x259b90u: goto label_259b90;
        case 0x259b94u: goto label_259b94;
        case 0x259b98u: goto label_259b98;
        case 0x259b9cu: goto label_259b9c;
        case 0x259ba0u: goto label_259ba0;
        case 0x259ba4u: goto label_259ba4;
        case 0x259ba8u: goto label_259ba8;
        case 0x259bacu: goto label_259bac;
        case 0x259bb0u: goto label_259bb0;
        case 0x259bb4u: goto label_259bb4;
        case 0x259bb8u: goto label_259bb8;
        case 0x259bbcu: goto label_259bbc;
        case 0x259bc0u: goto label_259bc0;
        case 0x259bc4u: goto label_259bc4;
        case 0x259bc8u: goto label_259bc8;
        case 0x259bccu: goto label_259bcc;
        case 0x259bd0u: goto label_259bd0;
        case 0x259bd4u: goto label_259bd4;
        case 0x259bd8u: goto label_259bd8;
        case 0x259bdcu: goto label_259bdc;
        case 0x259be0u: goto label_259be0;
        case 0x259be4u: goto label_259be4;
        case 0x259be8u: goto label_259be8;
        case 0x259becu: goto label_259bec;
        case 0x259bf0u: goto label_259bf0;
        case 0x259bf4u: goto label_259bf4;
        case 0x259bf8u: goto label_259bf8;
        case 0x259bfcu: goto label_259bfc;
        case 0x259c00u: goto label_259c00;
        case 0x259c04u: goto label_259c04;
        case 0x259c08u: goto label_259c08;
        case 0x259c0cu: goto label_259c0c;
        case 0x259c10u: goto label_259c10;
        case 0x259c14u: goto label_259c14;
        case 0x259c18u: goto label_259c18;
        case 0x259c1cu: goto label_259c1c;
        case 0x259c20u: goto label_259c20;
        case 0x259c24u: goto label_259c24;
        case 0x259c28u: goto label_259c28;
        case 0x259c2cu: goto label_259c2c;
        case 0x259c30u: goto label_259c30;
        case 0x259c34u: goto label_259c34;
        case 0x259c38u: goto label_259c38;
        case 0x259c3cu: goto label_259c3c;
        case 0x259c40u: goto label_259c40;
        case 0x259c44u: goto label_259c44;
        case 0x259c48u: goto label_259c48;
        case 0x259c4cu: goto label_259c4c;
        case 0x259c50u: goto label_259c50;
        case 0x259c54u: goto label_259c54;
        case 0x259c58u: goto label_259c58;
        case 0x259c5cu: goto label_259c5c;
        case 0x259c60u: goto label_259c60;
        case 0x259c64u: goto label_259c64;
        case 0x259c68u: goto label_259c68;
        case 0x259c6cu: goto label_259c6c;
        case 0x259c70u: goto label_259c70;
        case 0x259c74u: goto label_259c74;
        case 0x259c78u: goto label_259c78;
        case 0x259c7cu: goto label_259c7c;
        case 0x259c80u: goto label_259c80;
        case 0x259c84u: goto label_259c84;
        case 0x259c88u: goto label_259c88;
        case 0x259c8cu: goto label_259c8c;
        case 0x259c90u: goto label_259c90;
        case 0x259c94u: goto label_259c94;
        case 0x259c98u: goto label_259c98;
        case 0x259c9cu: goto label_259c9c;
        case 0x259ca0u: goto label_259ca0;
        case 0x259ca4u: goto label_259ca4;
        case 0x259ca8u: goto label_259ca8;
        case 0x259cacu: goto label_259cac;
        case 0x259cb0u: goto label_259cb0;
        case 0x259cb4u: goto label_259cb4;
        case 0x259cb8u: goto label_259cb8;
        case 0x259cbcu: goto label_259cbc;
        case 0x259cc0u: goto label_259cc0;
        case 0x259cc4u: goto label_259cc4;
        case 0x259cc8u: goto label_259cc8;
        case 0x259cccu: goto label_259ccc;
        case 0x259cd0u: goto label_259cd0;
        case 0x259cd4u: goto label_259cd4;
        case 0x259cd8u: goto label_259cd8;
        case 0x259cdcu: goto label_259cdc;
        case 0x259ce0u: goto label_259ce0;
        case 0x259ce4u: goto label_259ce4;
        case 0x259ce8u: goto label_259ce8;
        case 0x259cecu: goto label_259cec;
        case 0x259cf0u: goto label_259cf0;
        case 0x259cf4u: goto label_259cf4;
        case 0x259cf8u: goto label_259cf8;
        case 0x259cfcu: goto label_259cfc;
        case 0x259d00u: goto label_259d00;
        case 0x259d04u: goto label_259d04;
        case 0x259d08u: goto label_259d08;
        case 0x259d0cu: goto label_259d0c;
        case 0x259d10u: goto label_259d10;
        case 0x259d14u: goto label_259d14;
        case 0x259d18u: goto label_259d18;
        case 0x259d1cu: goto label_259d1c;
        case 0x259d20u: goto label_259d20;
        case 0x259d24u: goto label_259d24;
        case 0x259d28u: goto label_259d28;
        case 0x259d2cu: goto label_259d2c;
        case 0x259d30u: goto label_259d30;
        case 0x259d34u: goto label_259d34;
        case 0x259d38u: goto label_259d38;
        case 0x259d3cu: goto label_259d3c;
        case 0x259d40u: goto label_259d40;
        case 0x259d44u: goto label_259d44;
        case 0x259d48u: goto label_259d48;
        case 0x259d4cu: goto label_259d4c;
        case 0x259d50u: goto label_259d50;
        case 0x259d54u: goto label_259d54;
        case 0x259d58u: goto label_259d58;
        case 0x259d5cu: goto label_259d5c;
        case 0x259d60u: goto label_259d60;
        case 0x259d64u: goto label_259d64;
        case 0x259d68u: goto label_259d68;
        case 0x259d6cu: goto label_259d6c;
        case 0x259d70u: goto label_259d70;
        case 0x259d74u: goto label_259d74;
        case 0x259d78u: goto label_259d78;
        case 0x259d7cu: goto label_259d7c;
        case 0x259d80u: goto label_259d80;
        case 0x259d84u: goto label_259d84;
        case 0x259d88u: goto label_259d88;
        case 0x259d8cu: goto label_259d8c;
        case 0x259d90u: goto label_259d90;
        case 0x259d94u: goto label_259d94;
        case 0x259d98u: goto label_259d98;
        case 0x259d9cu: goto label_259d9c;
        case 0x259da0u: goto label_259da0;
        case 0x259da4u: goto label_259da4;
        case 0x259da8u: goto label_259da8;
        case 0x259dacu: goto label_259dac;
        case 0x259db0u: goto label_259db0;
        case 0x259db4u: goto label_259db4;
        case 0x259db8u: goto label_259db8;
        case 0x259dbcu: goto label_259dbc;
        case 0x259dc0u: goto label_259dc0;
        case 0x259dc4u: goto label_259dc4;
        case 0x259dc8u: goto label_259dc8;
        case 0x259dccu: goto label_259dcc;
        case 0x259dd0u: goto label_259dd0;
        case 0x259dd4u: goto label_259dd4;
        case 0x259dd8u: goto label_259dd8;
        case 0x259ddcu: goto label_259ddc;
        case 0x259de0u: goto label_259de0;
        case 0x259de4u: goto label_259de4;
        case 0x259de8u: goto label_259de8;
        case 0x259decu: goto label_259dec;
        case 0x259df0u: goto label_259df0;
        case 0x259df4u: goto label_259df4;
        case 0x259df8u: goto label_259df8;
        case 0x259dfcu: goto label_259dfc;
        case 0x259e00u: goto label_259e00;
        case 0x259e04u: goto label_259e04;
        case 0x259e08u: goto label_259e08;
        case 0x259e0cu: goto label_259e0c;
        case 0x259e10u: goto label_259e10;
        case 0x259e14u: goto label_259e14;
        case 0x259e18u: goto label_259e18;
        case 0x259e1cu: goto label_259e1c;
        case 0x259e20u: goto label_259e20;
        case 0x259e24u: goto label_259e24;
        case 0x259e28u: goto label_259e28;
        case 0x259e2cu: goto label_259e2c;
        case 0x259e30u: goto label_259e30;
        case 0x259e34u: goto label_259e34;
        case 0x259e38u: goto label_259e38;
        case 0x259e3cu: goto label_259e3c;
        case 0x259e40u: goto label_259e40;
        case 0x259e44u: goto label_259e44;
        case 0x259e48u: goto label_259e48;
        case 0x259e4cu: goto label_259e4c;
        case 0x259e50u: goto label_259e50;
        case 0x259e54u: goto label_259e54;
        case 0x259e58u: goto label_259e58;
        case 0x259e5cu: goto label_259e5c;
        case 0x259e60u: goto label_259e60;
        case 0x259e64u: goto label_259e64;
        case 0x259e68u: goto label_259e68;
        case 0x259e6cu: goto label_259e6c;
        case 0x259e70u: goto label_259e70;
        case 0x259e74u: goto label_259e74;
        case 0x259e78u: goto label_259e78;
        case 0x259e7cu: goto label_259e7c;
        case 0x259e80u: goto label_259e80;
        case 0x259e84u: goto label_259e84;
        case 0x259e88u: goto label_259e88;
        case 0x259e8cu: goto label_259e8c;
        case 0x259e90u: goto label_259e90;
        case 0x259e94u: goto label_259e94;
        case 0x259e98u: goto label_259e98;
        case 0x259e9cu: goto label_259e9c;
        case 0x259ea0u: goto label_259ea0;
        case 0x259ea4u: goto label_259ea4;
        case 0x259ea8u: goto label_259ea8;
        case 0x259eacu: goto label_259eac;
        case 0x259eb0u: goto label_259eb0;
        case 0x259eb4u: goto label_259eb4;
        case 0x259eb8u: goto label_259eb8;
        case 0x259ebcu: goto label_259ebc;
        case 0x259ec0u: goto label_259ec0;
        case 0x259ec4u: goto label_259ec4;
        case 0x259ec8u: goto label_259ec8;
        case 0x259eccu: goto label_259ecc;
        case 0x259ed0u: goto label_259ed0;
        case 0x259ed4u: goto label_259ed4;
        case 0x259ed8u: goto label_259ed8;
        case 0x259edcu: goto label_259edc;
        case 0x259ee0u: goto label_259ee0;
        case 0x259ee4u: goto label_259ee4;
        case 0x259ee8u: goto label_259ee8;
        case 0x259eecu: goto label_259eec;
        case 0x259ef0u: goto label_259ef0;
        case 0x259ef4u: goto label_259ef4;
        case 0x259ef8u: goto label_259ef8;
        case 0x259efcu: goto label_259efc;
        case 0x259f00u: goto label_259f00;
        case 0x259f04u: goto label_259f04;
        case 0x259f08u: goto label_259f08;
        case 0x259f0cu: goto label_259f0c;
        case 0x259f10u: goto label_259f10;
        case 0x259f14u: goto label_259f14;
        case 0x259f18u: goto label_259f18;
        case 0x259f1cu: goto label_259f1c;
        case 0x259f20u: goto label_259f20;
        case 0x259f24u: goto label_259f24;
        case 0x259f28u: goto label_259f28;
        case 0x259f2cu: goto label_259f2c;
        case 0x259f30u: goto label_259f30;
        case 0x259f34u: goto label_259f34;
        case 0x259f38u: goto label_259f38;
        case 0x259f3cu: goto label_259f3c;
        case 0x259f40u: goto label_259f40;
        case 0x259f44u: goto label_259f44;
        case 0x259f48u: goto label_259f48;
        case 0x259f4cu: goto label_259f4c;
        case 0x259f50u: goto label_259f50;
        case 0x259f54u: goto label_259f54;
        case 0x259f58u: goto label_259f58;
        case 0x259f5cu: goto label_259f5c;
        case 0x259f60u: goto label_259f60;
        case 0x259f64u: goto label_259f64;
        case 0x259f68u: goto label_259f68;
        case 0x259f6cu: goto label_259f6c;
        case 0x259f70u: goto label_259f70;
        case 0x259f74u: goto label_259f74;
        case 0x259f78u: goto label_259f78;
        case 0x259f7cu: goto label_259f7c;
        case 0x259f80u: goto label_259f80;
        case 0x259f84u: goto label_259f84;
        case 0x259f88u: goto label_259f88;
        case 0x259f8cu: goto label_259f8c;
        case 0x259f90u: goto label_259f90;
        case 0x259f94u: goto label_259f94;
        case 0x259f98u: goto label_259f98;
        case 0x259f9cu: goto label_259f9c;
        case 0x259fa0u: goto label_259fa0;
        case 0x259fa4u: goto label_259fa4;
        case 0x259fa8u: goto label_259fa8;
        case 0x259facu: goto label_259fac;
        case 0x259fb0u: goto label_259fb0;
        case 0x259fb4u: goto label_259fb4;
        case 0x259fb8u: goto label_259fb8;
        case 0x259fbcu: goto label_259fbc;
        case 0x259fc0u: goto label_259fc0;
        case 0x259fc4u: goto label_259fc4;
        case 0x259fc8u: goto label_259fc8;
        case 0x259fccu: goto label_259fcc;
        case 0x259fd0u: goto label_259fd0;
        case 0x259fd4u: goto label_259fd4;
        case 0x259fd8u: goto label_259fd8;
        case 0x259fdcu: goto label_259fdc;
        case 0x259fe0u: goto label_259fe0;
        case 0x259fe4u: goto label_259fe4;
        case 0x259fe8u: goto label_259fe8;
        case 0x259fecu: goto label_259fec;
        case 0x259ff0u: goto label_259ff0;
        case 0x259ff4u: goto label_259ff4;
        case 0x259ff8u: goto label_259ff8;
        case 0x259ffcu: goto label_259ffc;
        case 0x25a000u: goto label_25a000;
        case 0x25a004u: goto label_25a004;
        case 0x25a008u: goto label_25a008;
        case 0x25a00cu: goto label_25a00c;
        case 0x25a010u: goto label_25a010;
        case 0x25a014u: goto label_25a014;
        case 0x25a018u: goto label_25a018;
        case 0x25a01cu: goto label_25a01c;
        case 0x25a020u: goto label_25a020;
        case 0x25a024u: goto label_25a024;
        case 0x25a028u: goto label_25a028;
        case 0x25a02cu: goto label_25a02c;
        case 0x25a030u: goto label_25a030;
        case 0x25a034u: goto label_25a034;
        case 0x25a038u: goto label_25a038;
        case 0x25a03cu: goto label_25a03c;
        case 0x25a040u: goto label_25a040;
        case 0x25a044u: goto label_25a044;
        case 0x25a048u: goto label_25a048;
        case 0x25a04cu: goto label_25a04c;
        case 0x25a050u: goto label_25a050;
        case 0x25a054u: goto label_25a054;
        case 0x25a058u: goto label_25a058;
        case 0x25a05cu: goto label_25a05c;
        case 0x25a060u: goto label_25a060;
        case 0x25a064u: goto label_25a064;
        case 0x25a068u: goto label_25a068;
        case 0x25a06cu: goto label_25a06c;
        case 0x25a070u: goto label_25a070;
        case 0x25a074u: goto label_25a074;
        case 0x25a078u: goto label_25a078;
        case 0x25a07cu: goto label_25a07c;
        case 0x25a080u: goto label_25a080;
        case 0x25a084u: goto label_25a084;
        case 0x25a088u: goto label_25a088;
        case 0x25a08cu: goto label_25a08c;
        case 0x25a090u: goto label_25a090;
        case 0x25a094u: goto label_25a094;
        case 0x25a098u: goto label_25a098;
        case 0x25a09cu: goto label_25a09c;
        case 0x25a0a0u: goto label_25a0a0;
        case 0x25a0a4u: goto label_25a0a4;
        case 0x25a0a8u: goto label_25a0a8;
        case 0x25a0acu: goto label_25a0ac;
        case 0x25a0b0u: goto label_25a0b0;
        case 0x25a0b4u: goto label_25a0b4;
        case 0x25a0b8u: goto label_25a0b8;
        case 0x25a0bcu: goto label_25a0bc;
        case 0x25a0c0u: goto label_25a0c0;
        case 0x25a0c4u: goto label_25a0c4;
        case 0x25a0c8u: goto label_25a0c8;
        case 0x25a0ccu: goto label_25a0cc;
        case 0x25a0d0u: goto label_25a0d0;
        case 0x25a0d4u: goto label_25a0d4;
        case 0x25a0d8u: goto label_25a0d8;
        case 0x25a0dcu: goto label_25a0dc;
        case 0x25a0e0u: goto label_25a0e0;
        case 0x25a0e4u: goto label_25a0e4;
        case 0x25a0e8u: goto label_25a0e8;
        case 0x25a0ecu: goto label_25a0ec;
        case 0x25a0f0u: goto label_25a0f0;
        case 0x25a0f4u: goto label_25a0f4;
        case 0x25a0f8u: goto label_25a0f8;
        case 0x25a0fcu: goto label_25a0fc;
        case 0x25a100u: goto label_25a100;
        case 0x25a104u: goto label_25a104;
        case 0x25a108u: goto label_25a108;
        case 0x25a10cu: goto label_25a10c;
        case 0x25a110u: goto label_25a110;
        case 0x25a114u: goto label_25a114;
        case 0x25a118u: goto label_25a118;
        case 0x25a11cu: goto label_25a11c;
        case 0x25a120u: goto label_25a120;
        case 0x25a124u: goto label_25a124;
        case 0x25a128u: goto label_25a128;
        case 0x25a12cu: goto label_25a12c;
        case 0x25a130u: goto label_25a130;
        case 0x25a134u: goto label_25a134;
        case 0x25a138u: goto label_25a138;
        case 0x25a13cu: goto label_25a13c;
        case 0x25a140u: goto label_25a140;
        case 0x25a144u: goto label_25a144;
        case 0x25a148u: goto label_25a148;
        case 0x25a14cu: goto label_25a14c;
        case 0x25a150u: goto label_25a150;
        case 0x25a154u: goto label_25a154;
        case 0x25a158u: goto label_25a158;
        case 0x25a15cu: goto label_25a15c;
        case 0x25a160u: goto label_25a160;
        case 0x25a164u: goto label_25a164;
        case 0x25a168u: goto label_25a168;
        case 0x25a16cu: goto label_25a16c;
        case 0x25a170u: goto label_25a170;
        case 0x25a174u: goto label_25a174;
        default: break;
    }

    ctx->pc = 0x259578u;

label_259578:
    // 0x259578: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x259578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25957c:
    // 0x25957c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_259580:
    // 0x259580: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x259580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_259584:
    // 0x259584: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x259584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259588:
    // 0x259588: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x259588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25958c:
    // 0x25958c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_259590:
    // 0x259590: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x259590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_259594:
    // 0x259594: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x259594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_259598:
    // 0x259598: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x259598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_25959c:
    // 0x25959c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2595a0:
    // 0x2595a0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2595a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2595a4:
    // 0x2595a4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2595a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2595a8:
    // 0x2595a8: 0xc0e87c0  jal         func_3A1F00
label_2595ac:
    if (ctx->pc == 0x2595ACu) {
        ctx->pc = 0x2595ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595A8u;
        // 0x2595ac: 0x8e5100d4  lw          $s1, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595B0u;
        goto label_2595b0;
    }
    ctx->pc = 0x2595A8u;
    SET_GPR_U32(ctx, 31, 0x2595B0u);
    ctx->pc = 0x2595ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595A8u;
    // 0x2595ac: 0x8e5100d4  lw          $s1, 0xD4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x2595A8u, 0x2595B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595B0u;
label_2595b0:
    // 0x2595b0: 0x8e440280  lw          $a0, 0x280($s2)
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_2595b4:
    // 0x2595b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2595b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2595b8:
    // 0x2595b8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2595b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2595bc:
    // 0x2595bc: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2595bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2595c0:
    // 0x2595c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2595c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2595c4:
    // 0x2595c4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2595c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2595c8:
    // 0x2595c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2595c8u;
    // VWAITQ (Q already resolved in this runtime)
label_2595cc:
    // 0x2595cc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2595ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2595d0:
    // 0x2595d0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2595d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2595d4:
    // 0x2595d4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x2595d4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_2595d8:
    // 0x2595d8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2595d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2595dc:
    // 0x2595dc: 0x548002d7  bnel        $a0, $zero, . + 4 + (0x2D7 << 2)
label_2595e0:
    if (ctx->pc == 0x2595E0u) {
        ctx->pc = 0x2595E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595DCu;
        // 0x2595e0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595E4u;
        goto label_2595e4;
    }
    ctx->pc = 0x2595DCu;
    {
        const bool branch_taken_0x2595dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2595dc) {
            ctx->pc = 0x2595E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2595DCu;
            // 0x2595e0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x2595E4u;
label_2595e4:
    // 0x2595e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2595e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2595e8:
    // 0x2595e8: 0xc089998  jal         func_226660
label_2595ec:
    if (ctx->pc == 0x2595ECu) {
        ctx->pc = 0x2595ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595E8u;
        // 0x2595ec: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595F0u;
        goto label_2595f0;
    }
    ctx->pc = 0x2595E8u;
    SET_GPR_U32(ctx, 31, 0x2595F0u);
    ctx->pc = 0x2595ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2595E8u;
    // 0x2595ec: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2595E8u, 0x2595F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2595F0u;
label_2595f0:
    // 0x2595f0: 0x144002d3  bnez        $v0, . + 4 + (0x2D3 << 2)
label_2595f4:
    if (ctx->pc == 0x2595F4u) {
        ctx->pc = 0x2595F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595F0u;
        // 0x2595f4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2595F8u;
        goto label_2595f8;
    }
    ctx->pc = 0x2595F0u;
    {
        const bool branch_taken_0x2595f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2595F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595F0u;
        // 0x2595f4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595f0) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x2595F8u;
label_2595f8:
    // 0x2595f8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2595f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2595fc:
    // 0x2595fc: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x2595fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
label_259600:
    // 0x259600: 0xc08997c  jal         func_2265F0
label_259604:
    if (ctx->pc == 0x259604u) {
        ctx->pc = 0x259604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259600u;
        // 0x259604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259608u;
        goto label_259608;
    }
    ctx->pc = 0x259600u;
    SET_GPR_U32(ctx, 31, 0x259608u);
    ctx->pc = 0x259604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259600u;
    // 0x259604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259600u, 0x259608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259608u;
label_259608:
    // 0x259608: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_25960c:
    if (ctx->pc == 0x25960Cu) {
        ctx->pc = 0x259610u;
        goto label_259610;
    }
    ctx->pc = 0x259608u;
    {
        const bool branch_taken_0x259608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259608) {
            ctx->pc = 0x259640u;
            goto label_259640;
        }
    }
    ctx->pc = 0x259610u;
label_259610:
    // 0x259610: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x259610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_259614:
    // 0x259614: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x259614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
label_259618:
    // 0x259618: 0x104002c8  beqz        $v0, . + 4 + (0x2C8 << 2)
label_25961c:
    if (ctx->pc == 0x25961Cu) {
        ctx->pc = 0x25961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259618u;
        // 0x25961c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259620u;
        goto label_259620;
    }
    ctx->pc = 0x259618u;
    {
        const bool branch_taken_0x259618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259618u;
        // 0x25961c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259618) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259620u;
label_259620:
    // 0x259620: 0xc089988  jal         func_226620
label_259624:
    if (ctx->pc == 0x259624u) {
        ctx->pc = 0x259624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259620u;
        // 0x259624: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259628u;
        goto label_259628;
    }
    ctx->pc = 0x259620u;
    SET_GPR_U32(ctx, 31, 0x259628u);
    ctx->pc = 0x259624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259620u;
    // 0x259624: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x259620u, 0x259628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259628u;
label_259628:
    // 0x259628: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x259628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_25962c:
    // 0x25962c: 0x8c62074c  lw          $v0, 0x74C($v1)
    ctx->pc = 0x25962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1868)));
label_259630:
    // 0x259630: 0x40f809  jalr        $v0
label_259634:
    if (ctx->pc == 0x259634u) {
        ctx->pc = 0x259634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259630u;
        // 0x259634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259638u;
        goto label_259638;
    }
    ctx->pc = 0x259630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259638u);
        ctx->pc = 0x259634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259630u;
        // 0x259634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259630u, 0x259638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259638u;
label_259638:
    // 0x259638: 0x100002c1  b           . + 4 + (0x2C1 << 2)
label_25963c:
    if (ctx->pc == 0x25963Cu) {
        ctx->pc = 0x25963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259638u;
        // 0x25963c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259640u;
        goto label_259640;
    }
    ctx->pc = 0x259638u;
    {
        const bool branch_taken_0x259638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259638u;
        // 0x25963c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259638) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x259640u;
label_259640:
    // 0x259640: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x259640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_259644:
    // 0x259644: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x259644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_259648:
    // 0x259648: 0xc08997c  jal         func_2265F0
label_25964c:
    if (ctx->pc == 0x25964Cu) {
        ctx->pc = 0x25964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259648u;
        // 0x25964c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259650u;
        goto label_259650;
    }
    ctx->pc = 0x259648u;
    SET_GPR_U32(ctx, 31, 0x259650u);
    ctx->pc = 0x25964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259648u;
    // 0x25964c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259648u, 0x259650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259650u;
label_259650:
    // 0x259650: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_259654:
    if (ctx->pc == 0x259654u) {
        ctx->pc = 0x259658u;
        goto label_259658;
    }
    ctx->pc = 0x259650u;
    {
        const bool branch_taken_0x259650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259650) {
            ctx->pc = 0x259698u;
            goto label_259698;
        }
    }
    ctx->pc = 0x259658u;
label_259658:
    // 0x259658: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x259658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_25965c:
    // 0x25965c: 0x3862001a  xori        $v0, $v1, 0x1A
    ctx->pc = 0x25965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)26);
label_259660:
    // 0x259660: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_259664:
    if (ctx->pc == 0x259664u) {
        ctx->pc = 0x259664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259660u;
        // 0x259664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259668u;
        goto label_259668;
    }
    ctx->pc = 0x259660u;
    {
        const bool branch_taken_0x259660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259660u;
        // 0x259664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259660) {
            ctx->pc = 0x259670u;
            goto label_259670;
        }
    }
    ctx->pc = 0x259668u;
label_259668:
    // 0x259668: 0x3862001e  xori        $v0, $v1, 0x1E
    ctx->pc = 0x259668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)30);
label_25966c:
    // 0x25966c: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x25966cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_259670:
    // 0x259670: 0x108002b2  beqz        $a0, . + 4 + (0x2B2 << 2)
label_259674:
    if (ctx->pc == 0x259674u) {
        ctx->pc = 0x259674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259670u;
        // 0x259674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259678u;
        goto label_259678;
    }
    ctx->pc = 0x259670u;
    {
        const bool branch_taken_0x259670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x259674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259670u;
        // 0x259674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259670) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259678u;
label_259678:
    // 0x259678: 0xc089988  jal         func_226620
label_25967c:
    if (ctx->pc == 0x25967Cu) {
        ctx->pc = 0x25967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259678u;
        // 0x25967c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259680u;
        goto label_259680;
    }
    ctx->pc = 0x259678u;
    SET_GPR_U32(ctx, 31, 0x259680u);
    ctx->pc = 0x25967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259678u;
    // 0x25967c: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x259678u, 0x259680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259680u;
label_259680:
    // 0x259680: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x259680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_259684:
    // 0x259684: 0x8c620748  lw          $v0, 0x748($v1)
    ctx->pc = 0x259684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1864)));
label_259688:
    // 0x259688: 0x40f809  jalr        $v0
label_25968c:
    if (ctx->pc == 0x25968Cu) {
        ctx->pc = 0x25968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259688u;
        // 0x25968c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259690u;
        goto label_259690;
    }
    ctx->pc = 0x259688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259690u);
        ctx->pc = 0x25968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259688u;
        // 0x25968c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259688u, 0x259690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259690u;
label_259690:
    // 0x259690: 0x100002ab  b           . + 4 + (0x2AB << 2)
label_259694:
    if (ctx->pc == 0x259694u) {
        ctx->pc = 0x259694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259690u;
        // 0x259694: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259698u;
        goto label_259698;
    }
    ctx->pc = 0x259690u;
    {
        const bool branch_taken_0x259690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259690u;
        // 0x259694: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259690) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x259698u;
label_259698:
    // 0x259698: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x259698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_25969c:
    // 0x25969c: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x25969cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_2596a0:
    // 0x2596a0: 0xc08997c  jal         func_2265F0
label_2596a4:
    if (ctx->pc == 0x2596A4u) {
        ctx->pc = 0x2596A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596A0u;
        // 0x2596a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596A8u;
        goto label_2596a8;
    }
    ctx->pc = 0x2596A0u;
    SET_GPR_U32(ctx, 31, 0x2596A8u);
    ctx->pc = 0x2596A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596A0u;
    // 0x2596a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2596A0u, 0x2596A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596A8u;
label_2596a8:
    // 0x2596a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2596ac:
    if (ctx->pc == 0x2596ACu) {
        ctx->pc = 0x2596B0u;
        goto label_2596b0;
    }
    ctx->pc = 0x2596A8u;
    {
        const bool branch_taken_0x2596a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2596a8) {
            ctx->pc = 0x2596E0u;
            goto label_2596e0;
        }
    }
    ctx->pc = 0x2596B0u;
label_2596b0:
    // 0x2596b0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2596b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2596b4:
    // 0x2596b4: 0x38420019  xori        $v0, $v0, 0x19
    ctx->pc = 0x2596b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)25);
label_2596b8:
    // 0x2596b8: 0x104002a0  beqz        $v0, . + 4 + (0x2A0 << 2)
label_2596bc:
    if (ctx->pc == 0x2596BCu) {
        ctx->pc = 0x2596BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596B8u;
        // 0x2596bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596C0u;
        goto label_2596c0;
    }
    ctx->pc = 0x2596B8u;
    {
        const bool branch_taken_0x2596b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596B8u;
        // 0x2596bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596b8) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x2596C0u;
label_2596c0:
    // 0x2596c0: 0xc089988  jal         func_226620
label_2596c4:
    if (ctx->pc == 0x2596C4u) {
        ctx->pc = 0x2596C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596C0u;
        // 0x2596c4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596C8u;
        goto label_2596c8;
    }
    ctx->pc = 0x2596C0u;
    SET_GPR_U32(ctx, 31, 0x2596C8u);
    ctx->pc = 0x2596C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596C0u;
    // 0x2596c4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x2596C0u, 0x2596C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596C8u;
label_2596c8:
    // 0x2596c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2596c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2596cc:
    // 0x2596cc: 0x8c620744  lw          $v0, 0x744($v1)
    ctx->pc = 0x2596ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1860)));
label_2596d0:
    // 0x2596d0: 0x40f809  jalr        $v0
label_2596d4:
    if (ctx->pc == 0x2596D4u) {
        ctx->pc = 0x2596D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596D0u;
        // 0x2596d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596D8u;
        goto label_2596d8;
    }
    ctx->pc = 0x2596D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2596D8u);
        ctx->pc = 0x2596D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596D0u;
        // 0x2596d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2596D0u, 0x2596D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2596D8u;
label_2596d8:
    // 0x2596d8: 0x10000299  b           . + 4 + (0x299 << 2)
label_2596dc:
    if (ctx->pc == 0x2596DCu) {
        ctx->pc = 0x2596DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596D8u;
        // 0x2596dc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596E0u;
        goto label_2596e0;
    }
    ctx->pc = 0x2596D8u;
    {
        const bool branch_taken_0x2596d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596D8u;
        // 0x2596dc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596d8) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x2596E0u;
label_2596e0:
    // 0x2596e0: 0xc0874fa  jal         func_21D3E8
label_2596e4:
    if (ctx->pc == 0x2596E4u) {
        ctx->pc = 0x2596E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596E0u;
        // 0x2596e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596E8u;
        goto label_2596e8;
    }
    ctx->pc = 0x2596E0u;
    SET_GPR_U32(ctx, 31, 0x2596E8u);
    ctx->pc = 0x2596E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596E0u;
    // 0x2596e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2596E0u, 0x2596E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596E8u;
label_2596e8:
    // 0x2596e8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x2596e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2596ec:
    // 0x2596ec: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2596f0:
    if (ctx->pc == 0x2596F0u) {
        ctx->pc = 0x2596F4u;
        goto label_2596f4;
    }
    ctx->pc = 0x2596ECu;
    {
        const bool branch_taken_0x2596ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2596ec) {
            ctx->pc = 0x25973Cu;
            goto label_25973c;
        }
    }
    ctx->pc = 0x2596F4u;
label_2596f4:
    // 0x2596f4: 0xc0874fa  jal         func_21D3E8
label_2596f8:
    if (ctx->pc == 0x2596F8u) {
        ctx->pc = 0x2596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596F4u;
        // 0x2596f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2596FCu;
        goto label_2596fc;
    }
    ctx->pc = 0x2596F4u;
    SET_GPR_U32(ctx, 31, 0x2596FCu);
    ctx->pc = 0x2596F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596F4u;
    // 0x2596f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2596F4u, 0x2596FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596FCu;
label_2596fc:
    // 0x2596fc: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x2596fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_259700:
    // 0x259700: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x259700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
label_259704:
    // 0x259704: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x259704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_259708:
    // 0x259708: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25970c:
    // 0x25970c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25970cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_259710:
    // 0x259710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_259714:
    // 0x259714: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x259714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259718:
    // 0x259718: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x259718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25971c:
    // 0x25971c: 0x0  nop
    ctx->pc = 0x25971cu;
    // NOP
label_259720:
    // 0x259720: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_259724:
    if (ctx->pc == 0x259724u) {
        ctx->pc = 0x259724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259720u;
        // 0x259724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259728u;
        goto label_259728;
    }
    ctx->pc = 0x259720u;
    {
        const bool branch_taken_0x259720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259720u;
        // 0x259724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259720) {
            ctx->pc = 0x25973Cu;
            goto label_25973c;
        }
    }
    ctx->pc = 0x259728u;
label_259728:
    // 0x259728: 0xc089998  jal         func_226660
label_25972c:
    if (ctx->pc == 0x25972Cu) {
        ctx->pc = 0x25972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259728u;
        // 0x25972c: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259730u;
        goto label_259730;
    }
    ctx->pc = 0x259728u;
    SET_GPR_U32(ctx, 31, 0x259730u);
    ctx->pc = 0x25972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259728u;
    // 0x25972c: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x259728u, 0x259730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259730u;
label_259730:
    // 0x259730: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_259734:
    if (ctx->pc == 0x259734u) {
        ctx->pc = 0x259738u;
        goto label_259738;
    }
    ctx->pc = 0x259730u;
    {
        const bool branch_taken_0x259730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259730) {
            ctx->pc = 0x25973Cu;
            goto label_25973c;
        }
    }
    ctx->pc = 0x259738u;
label_259738:
    // 0x259738: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x259738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_25973c:
    // 0x25973c: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x25973cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_259740:
    // 0x259740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259744:
    // 0x259744: 0xc089998  jal         func_226660
label_259748:
    if (ctx->pc == 0x259748u) {
        ctx->pc = 0x259748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259744u;
        // 0x259748: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25974Cu;
        goto label_25974c;
    }
    ctx->pc = 0x259744u;
    SET_GPR_U32(ctx, 31, 0x25974Cu);
    ctx->pc = 0x259748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259744u;
    // 0x259748: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x259744u, 0x25974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25974Cu;
label_25974c:
    // 0x25974c: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
label_259750:
    if (ctx->pc == 0x259750u) {
        ctx->pc = 0x259750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25974Cu;
        // 0x259750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259754u;
        goto label_259754;
    }
    ctx->pc = 0x25974Cu;
    {
        const bool branch_taken_0x25974c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25974Cu;
        // 0x259750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25974c) {
            ctx->pc = 0x259B94u;
            goto label_259b94;
        }
    }
    ctx->pc = 0x259754u;
label_259754:
    // 0x259754: 0xc089998  jal         func_226660
label_259758:
    if (ctx->pc == 0x259758u) {
        ctx->pc = 0x259758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259754u;
        // 0x259758: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25975Cu;
        goto label_25975c;
    }
    ctx->pc = 0x259754u;
    SET_GPR_U32(ctx, 31, 0x25975Cu);
    ctx->pc = 0x259758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259754u;
    // 0x259758: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x259754u, 0x25975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25975Cu;
label_25975c:
    // 0x25975c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_259760:
    if (ctx->pc == 0x259760u) {
        ctx->pc = 0x259760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25975Cu;
        // 0x259760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259764u;
        goto label_259764;
    }
    ctx->pc = 0x25975Cu;
    {
        const bool branch_taken_0x25975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25975Cu;
        // 0x259760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25975c) {
            ctx->pc = 0x259794u;
            goto label_259794;
        }
    }
    ctx->pc = 0x259764u;
label_259764:
    // 0x259764: 0xc088f6e  jal         func_223DB8
label_259768:
    if (ctx->pc == 0x259768u) {
        ctx->pc = 0x259768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259764u;
        // 0x259768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25976Cu;
        goto label_25976c;
    }
    ctx->pc = 0x259764u;
    SET_GPR_U32(ctx, 31, 0x25976Cu);
    ctx->pc = 0x259768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259764u;
    // 0x259768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223DB8u, 0x259764u, 0x25976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25976Cu;
label_25976c:
    // 0x25976c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_259770:
    if (ctx->pc == 0x259770u) {
        ctx->pc = 0x259774u;
        goto label_259774;
    }
    ctx->pc = 0x25976Cu;
    {
        const bool branch_taken_0x25976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25976c) {
            ctx->pc = 0x259794u;
            goto label_259794;
        }
    }
    ctx->pc = 0x259774u;
label_259774:
    // 0x259774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x259774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259778:
    // 0x259778: 0x0  nop
    ctx->pc = 0x259778u;
    // NOP
label_25977c:
    // 0x25977c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x25977cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259780:
    // 0x259780: 0x0  nop
    ctx->pc = 0x259780u;
    // NOP
label_259784:
    // 0x259784: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_259788:
    if (ctx->pc == 0x259788u) {
        ctx->pc = 0x259788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259784u;
        // 0x259788: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25978Cu;
        goto label_25978c;
    }
    ctx->pc = 0x259784u;
    {
        const bool branch_taken_0x259784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259784u;
        // 0x259788: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259784) {
            ctx->pc = 0x259794u;
            goto label_259794;
        }
    }
    ctx->pc = 0x25978Cu;
label_25978c:
    // 0x25978c: 0xc097bb8  jal         func_25EEE0
label_259790:
    if (ctx->pc == 0x259790u) {
        ctx->pc = 0x259790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25978Cu;
        // 0x259790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259794u;
        goto label_259794;
    }
    ctx->pc = 0x25978Cu;
    SET_GPR_U32(ctx, 31, 0x259794u);
    ctx->pc = 0x259790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25978Cu;
    // 0x259790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x25978Cu, 0x259794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259794u;
label_259794:
    // 0x259794: 0xc0874fa  jal         func_21D3E8
label_259798:
    if (ctx->pc == 0x259798u) {
        ctx->pc = 0x259798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259794u;
        // 0x259798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25979Cu;
        goto label_25979c;
    }
    ctx->pc = 0x259794u;
    SET_GPR_U32(ctx, 31, 0x25979Cu);
    ctx->pc = 0x259798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259794u;
    // 0x259798: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x259794u, 0x25979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25979Cu;
label_25979c:
    // 0x25979c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25979cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_2597a0:
    // 0x2597a0: 0x106000db  beqz        $v1, . + 4 + (0xDB << 2)
label_2597a4:
    if (ctx->pc == 0x2597A4u) {
        ctx->pc = 0x2597A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597A0u;
        // 0x2597a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597A8u;
        goto label_2597a8;
    }
    ctx->pc = 0x2597A0u;
    {
        const bool branch_taken_0x2597a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597A0u;
        // 0x2597a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597a0) {
            ctx->pc = 0x259B10u;
            goto label_259b10;
        }
    }
    ctx->pc = 0x2597A8u;
label_2597a8:
    // 0x2597a8: 0xc089998  jal         func_226660
label_2597ac:
    if (ctx->pc == 0x2597ACu) {
        ctx->pc = 0x2597ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597A8u;
        // 0x2597ac: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597B0u;
        goto label_2597b0;
    }
    ctx->pc = 0x2597A8u;
    SET_GPR_U32(ctx, 31, 0x2597B0u);
    ctx->pc = 0x2597ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597A8u;
    // 0x2597ac: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2597A8u, 0x2597B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597B0u;
label_2597b0:
    // 0x2597b0: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
label_2597b4:
    if (ctx->pc == 0x2597B4u) {
        ctx->pc = 0x2597B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597B0u;
        // 0x2597b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597B8u;
        goto label_2597b8;
    }
    ctx->pc = 0x2597B0u;
    {
        const bool branch_taken_0x2597b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597B0u;
        // 0x2597b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597b0) {
            ctx->pc = 0x259B10u;
            goto label_259b10;
        }
    }
    ctx->pc = 0x2597B8u;
label_2597b8:
    // 0x2597b8: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x2597b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
label_2597bc:
    // 0x2597bc: 0xc089998  jal         func_226660
label_2597c0:
    if (ctx->pc == 0x2597C0u) {
        ctx->pc = 0x2597C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597BCu;
        // 0x2597c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597C4u;
        goto label_2597c4;
    }
    ctx->pc = 0x2597BCu;
    SET_GPR_U32(ctx, 31, 0x2597C4u);
    ctx->pc = 0x2597C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597BCu;
    // 0x2597c0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2597BCu, 0x2597C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597C4u;
label_2597c4:
    // 0x2597c4: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_2597c8:
    if (ctx->pc == 0x2597C8u) {
        ctx->pc = 0x2597C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597C4u;
        // 0x2597c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597CCu;
        goto label_2597cc;
    }
    ctx->pc = 0x2597C4u;
    {
        const bool branch_taken_0x2597c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2597C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597C4u;
        // 0x2597c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597c4) {
            ctx->pc = 0x259B14u;
            goto label_259b14;
        }
    }
    ctx->pc = 0x2597CCu;
label_2597cc:
    // 0x2597cc: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x2597ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2597d0:
    // 0x2597d0: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2597d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2597d4:
    // 0x2597d4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2597d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2597d8:
    // 0x2597d8: 0x14640259  bne         $v1, $a0, . + 4 + (0x259 << 2)
label_2597dc:
    if (ctx->pc == 0x2597DCu) {
        ctx->pc = 0x2597DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597D8u;
        // 0x2597dc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597E0u;
        goto label_2597e0;
    }
    ctx->pc = 0x2597D8u;
    {
        const bool branch_taken_0x2597d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2597DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597D8u;
        // 0x2597dc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597d8) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x2597E0u;
label_2597e0:
    // 0x2597e0: 0xc089704  jal         func_225C10
label_2597e4:
    if (ctx->pc == 0x2597E4u) {
        ctx->pc = 0x2597E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597E0u;
        // 0x2597e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597E8u;
        goto label_2597e8;
    }
    ctx->pc = 0x2597E0u;
    SET_GPR_U32(ctx, 31, 0x2597E8u);
    ctx->pc = 0x2597E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597E0u;
    // 0x2597e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C10u, 0x2597E0u, 0x2597E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597E8u;
label_2597e8:
    // 0x2597e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2597ec:
    if (ctx->pc == 0x2597ECu) {
        ctx->pc = 0x2597F0u;
        goto label_2597f0;
    }
    ctx->pc = 0x2597E8u;
    {
        const bool branch_taken_0x2597e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2597e8) {
            ctx->pc = 0x259800u;
            goto label_259800;
        }
    }
    ctx->pc = 0x2597F0u;
label_2597f0:
    // 0x2597f0: 0xc089770  jal         func_225DC0
label_2597f4:
    if (ctx->pc == 0x2597F4u) {
        ctx->pc = 0x2597F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597F0u;
        // 0x2597f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2597F8u;
        goto label_2597f8;
    }
    ctx->pc = 0x2597F0u;
    SET_GPR_U32(ctx, 31, 0x2597F8u);
    ctx->pc = 0x2597F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2597F0u;
    // 0x2597f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DC0u, 0x2597F0u, 0x2597F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2597F8u;
label_2597f8:
    // 0x2597f8: 0x10400251  beqz        $v0, . + 4 + (0x251 << 2)
label_2597fc:
    if (ctx->pc == 0x2597FCu) {
        ctx->pc = 0x2597FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597F8u;
        // 0x2597fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259800u;
        goto label_259800;
    }
    ctx->pc = 0x2597F8u;
    {
        const bool branch_taken_0x2597f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2597FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2597F8u;
        // 0x2597fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2597f8) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x259800u;
label_259800:
    // 0x259800: 0xc0874fa  jal         func_21D3E8
label_259804:
    if (ctx->pc == 0x259804u) {
        ctx->pc = 0x259804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259800u;
        // 0x259804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259808u;
        goto label_259808;
    }
    ctx->pc = 0x259800u;
    SET_GPR_U32(ctx, 31, 0x259808u);
    ctx->pc = 0x259804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259800u;
    // 0x259804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x259800u, 0x259808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259808u;
label_259808:
    // 0x259808: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x259808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_25980c:
    // 0x25980c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x25980cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_259810:
    // 0x259810: 0xc48102e8  lwc1        $f1, 0x2E8($a0)
    ctx->pc = 0x259810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_259814:
    // 0x259814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x259814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_259818:
    // 0x259818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x259818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25981c:
    // 0x25981c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x25981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_259820:
    // 0x259820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x259820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259824:
    // 0x259824: 0x0  nop
    ctx->pc = 0x259824u;
    // NOP
label_259828:
    // 0x259828: 0x45000245  bc1f        . + 4 + (0x245 << 2)
label_25982c:
    if (ctx->pc == 0x25982Cu) {
        ctx->pc = 0x25982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259828u;
        // 0x25982c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259830u;
        goto label_259830;
    }
    ctx->pc = 0x259828u;
    {
        const bool branch_taken_0x259828 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259828u;
        // 0x25982c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259828) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x259830u;
label_259830:
    // 0x259830: 0xc05d484  jal         func_175210
label_259834:
    if (ctx->pc == 0x259834u) {
        ctx->pc = 0x259834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259830u;
        // 0x259834: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259838u;
        goto label_259838;
    }
    ctx->pc = 0x259830u;
    SET_GPR_U32(ctx, 31, 0x259838u);
    ctx->pc = 0x259834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259830u;
    // 0x259834: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x259830u, 0x259838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259838u;
label_259838:
    // 0x259838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x259838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25983c:
    // 0x25983c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259840:
    // 0x259840: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x259840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_259844:
    // 0x259844: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x259844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_259848:
    // 0x259848: 0x60f809  jalr        $v1
label_25984c:
    if (ctx->pc == 0x25984Cu) {
        ctx->pc = 0x25984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259848u;
        // 0x25984c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259850u;
        goto label_259850;
    }
    ctx->pc = 0x259848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259850u);
        ctx->pc = 0x25984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259848u;
        // 0x25984c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259848u, 0x259850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259850u;
label_259850:
    // 0x259850: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x259850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259854:
    // 0x259854: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x259854u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_259858:
    // 0x259858: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x259858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25985c:
    // 0x25985c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_259860:
    // 0x259860: 0x60f809  jalr        $v1
label_259864:
    if (ctx->pc == 0x259864u) {
        ctx->pc = 0x259864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259860u;
        // 0x259864: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259868u;
        goto label_259868;
    }
    ctx->pc = 0x259860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259868u);
        ctx->pc = 0x259864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259860u;
        // 0x259864: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259860u, 0x259868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259868u;
label_259868:
    // 0x259868: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x259868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25986c:
    // 0x25986c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x25986cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_259870:
    // 0x259870: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x259870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_259874:
    // 0x259874: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x259874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_259878:
    // 0x259878: 0x60f809  jalr        $v1
label_25987c:
    if (ctx->pc == 0x25987Cu) {
        ctx->pc = 0x25987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259878u;
        // 0x25987c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259880u;
        goto label_259880;
    }
    ctx->pc = 0x259878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259880u);
        ctx->pc = 0x25987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259878u;
        // 0x25987c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259878u, 0x259880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259880u;
label_259880:
    // 0x259880: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x259880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_259884:
    // 0x259884: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_259888:
    // 0x259888: 0x0  nop
    ctx->pc = 0x259888u;
    // NOP
label_25988c:
    // 0x25988c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25988cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_259890:
    // 0x259890: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x259890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259894:
    // 0x259894: 0x0  nop
    ctx->pc = 0x259894u;
    // NOP
label_259898:
    // 0x259898: 0x45000228  bc1f        . + 4 + (0x228 << 2)
label_25989c:
    if (ctx->pc == 0x25989Cu) {
        ctx->pc = 0x25989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259898u;
        // 0x25989c: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2598A0u;
        goto label_2598a0;
    }
    ctx->pc = 0x259898u;
    {
        const bool branch_taken_0x259898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259898u;
        // 0x25989c: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259898) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x2598A0u;
label_2598a0:
    // 0x2598a0: 0x8e5600d8  lw          $s6, 0xD8($s2)
    ctx->pc = 0x2598a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2598a4:
    // 0x2598a4: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x2598a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_2598a8:
    // 0x2598a8: 0xc041532  jal         func_1054C8
label_2598ac:
    if (ctx->pc == 0x2598ACu) {
        ctx->pc = 0x2598ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598A8u;
        // 0x2598ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2598B0u;
        goto label_2598b0;
    }
    ctx->pc = 0x2598A8u;
    SET_GPR_U32(ctx, 31, 0x2598B0u);
    ctx->pc = 0x2598ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598A8u;
    // 0x2598ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2598A8u, 0x2598B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598B0u;
label_2598b0:
    // 0x2598b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2598b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2598b4:
    // 0x2598b4: 0xc041532  jal         func_1054C8
label_2598b8:
    if (ctx->pc == 0x2598B8u) {
        ctx->pc = 0x2598B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598B4u;
        // 0x2598b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2598BCu;
        goto label_2598bc;
    }
    ctx->pc = 0x2598B4u;
    SET_GPR_U32(ctx, 31, 0x2598BCu);
    ctx->pc = 0x2598B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598B4u;
    // 0x2598b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2598B4u, 0x2598BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598BCu;
label_2598bc:
    // 0x2598bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2598bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2598c0:
    // 0x2598c0: 0xc041532  jal         func_1054C8
label_2598c4:
    if (ctx->pc == 0x2598C4u) {
        ctx->pc = 0x2598C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598C0u;
        // 0x2598c4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2598C8u;
        goto label_2598c8;
    }
    ctx->pc = 0x2598C0u;
    SET_GPR_U32(ctx, 31, 0x2598C8u);
    ctx->pc = 0x2598C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2598C0u;
    // 0x2598c4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2598C0u, 0x2598C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2598C8u;
label_2598c8:
    // 0x2598c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2598c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2598cc:
    // 0x2598cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2598ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2598d0:
    // 0x2598d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2598d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2598d4:
    // 0x2598d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2598d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2598d8:
    // 0x2598d8: 0x60f809  jalr        $v1
label_2598dc:
    if (ctx->pc == 0x2598DCu) {
        ctx->pc = 0x2598DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598D8u;
        // 0x2598dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2598E0u;
        goto label_2598e0;
    }
    ctx->pc = 0x2598D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2598E0u);
        ctx->pc = 0x2598DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598D8u;
        // 0x2598dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2598D8u, 0x2598E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2598E0u;
label_2598e0:
    // 0x2598e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2598e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2598e4:
    // 0x2598e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2598e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2598e8:
    // 0x2598e8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_2598ec:
    // 0x2598ec: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x2598ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_2598f0:
    // 0x2598f0: 0x60f809  jalr        $v1
label_2598f4:
    if (ctx->pc == 0x2598F4u) {
        ctx->pc = 0x2598F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598F0u;
        // 0x2598f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2598F8u;
        goto label_2598f8;
    }
    ctx->pc = 0x2598F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2598F8u);
        ctx->pc = 0x2598F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598F0u;
        // 0x2598f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2598F0u, 0x2598F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2598F8u;
label_2598f8:
    // 0x2598f8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2598f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2598fc:
    // 0x2598fc: 0x0  nop
    ctx->pc = 0x2598fcu;
    // NOP
label_259900:
    // 0x259900: 0x0  nop
    ctx->pc = 0x259900u;
    // NOP
label_259904:
    // 0x259904: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x259904u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_259908:
    // 0x259908: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x259908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_25990c:
    // 0x25990c: 0x84c400e8  lh          $a0, 0xE8($a2)
    ctx->pc = 0x25990cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 232)));
label_259910:
    // 0x259910: 0x8cc200ec  lw          $v0, 0xEC($a2)
    ctx->pc = 0x259910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 236)));
label_259914:
    // 0x259914: 0x40f809  jalr        $v0
label_259918:
    if (ctx->pc == 0x259918u) {
        ctx->pc = 0x259918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259914u;
        // 0x259918: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25991Cu;
        goto label_25991c;
    }
    ctx->pc = 0x259914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25991Cu);
        ctx->pc = 0x259918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259914u;
        // 0x259918: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259914u, 0x25991Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25991Cu;
label_25991c:
    // 0x25991c: 0x12a0001d  beqz        $s5, . + 4 + (0x1D << 2)
label_259920:
    if (ctx->pc == 0x259920u) {
        ctx->pc = 0x259924u;
        goto label_259924;
    }
    ctx->pc = 0x25991Cu;
    {
        const bool branch_taken_0x25991c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x25991c) {
            ctx->pc = 0x259994u;
            goto label_259994;
        }
    }
    ctx->pc = 0x259924u;
label_259924:
    // 0x259924: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x259924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259928:
    // 0x259928: 0x8e5000d8  lw          $s0, 0xD8($s2)
    ctx->pc = 0x259928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_25992c:
    // 0x25992c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25992cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_259930:
    // 0x259930: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x259930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_259934:
    // 0x259934: 0x60f809  jalr        $v1
label_259938:
    if (ctx->pc == 0x259938u) {
        ctx->pc = 0x259938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259934u;
        // 0x259938: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25993Cu;
        goto label_25993c;
    }
    ctx->pc = 0x259934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25993Cu);
        ctx->pc = 0x259938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259934u;
        // 0x259938: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259934u, 0x25993Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25993Cu;
label_25993c:
    // 0x25993c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_259940:
    // 0x259940: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x259940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_259944:
    // 0x259944: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_259948:
    // 0x259948: 0x0  nop
    ctx->pc = 0x259948u;
    // NOP
label_25994c:
    // 0x25994c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x25994cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259950:
    // 0x259950: 0x0  nop
    ctx->pc = 0x259950u;
    // NOP
label_259954:
    // 0x259954: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_259958:
    if (ctx->pc == 0x259958u) {
        ctx->pc = 0x259958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259954u;
        // 0x259958: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25995Cu;
        goto label_25995c;
    }
    ctx->pc = 0x259954u;
    {
        const bool branch_taken_0x259954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259954u;
        // 0x259958: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259954) {
            ctx->pc = 0x259978u;
            goto label_259978;
        }
    }
    ctx->pc = 0x25995Cu;
label_25995c:
    // 0x25995c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_259960:
    // 0x259960: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x259960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_259964:
    // 0x259964: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x259964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_259968:
    // 0x259968: 0x60f809  jalr        $v1
label_25996c:
    if (ctx->pc == 0x25996Cu) {
        ctx->pc = 0x25996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259968u;
        // 0x25996c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259970u;
        goto label_259970;
    }
    ctx->pc = 0x259968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259970u);
        ctx->pc = 0x25996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259968u;
        // 0x25996c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259968u, 0x259970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259970u;
label_259970:
    // 0x259970: 0x10000002  b           . + 4 + (0x2 << 2)
label_259974:
    if (ctx->pc == 0x259974u) {
        ctx->pc = 0x259974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259970u;
        // 0x259974: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259978u;
        goto label_259978;
    }
    ctx->pc = 0x259970u;
    {
        const bool branch_taken_0x259970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259970u;
        // 0x259974: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259970) {
            ctx->pc = 0x25997Cu;
            goto label_25997c;
        }
    }
    ctx->pc = 0x259978u;
label_259978:
    // 0x259978: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x259978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25997c:
    // 0x25997c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25997cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259980:
    // 0x259980: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x259980u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_259984:
    // 0x259984: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x259984u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_259988:
    // 0x259988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x259988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25998c:
    // 0x25998c: 0xc041b20  jal         func_106C80
label_259990:
    if (ctx->pc == 0x259990u) {
        ctx->pc = 0x259990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25998Cu;
        // 0x259990: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259994u;
        goto label_259994;
    }
    ctx->pc = 0x25998Cu;
    SET_GPR_U32(ctx, 31, 0x259994u);
    ctx->pc = 0x259990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25998Cu;
    // 0x259990: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25998Cu, 0x259994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259994u;
label_259994:
    // 0x259994: 0xc05d484  jal         func_175210
label_259998:
    if (ctx->pc == 0x259998u) {
        ctx->pc = 0x259998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259994u;
        // 0x259998: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25999Cu;
        goto label_25999c;
    }
    ctx->pc = 0x259994u;
    SET_GPR_U32(ctx, 31, 0x25999Cu);
    ctx->pc = 0x259998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259994u;
    // 0x259998: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x259994u, 0x25999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25999Cu;
label_25999c:
    // 0x25999c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2599a0:
    // 0x2599a0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2599a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2599a4:
    // 0x2599a4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2599a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2599a8:
    // 0x2599a8: 0xa0f809  jalr        $a1
label_2599ac:
    if (ctx->pc == 0x2599ACu) {
        ctx->pc = 0x2599ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599A8u;
        // 0x2599ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2599B0u;
        goto label_2599b0;
    }
    ctx->pc = 0x2599A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2599B0u);
        ctx->pc = 0x2599ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599A8u;
        // 0x2599ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2599A8u, 0x2599B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2599B0u;
label_2599b0:
    // 0x2599b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2599b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2599b4:
    // 0x2599b4: 0xc087016  jal         func_21C058
label_2599b8:
    if (ctx->pc == 0x2599B8u) {
        ctx->pc = 0x2599B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599B4u;
        // 0x2599b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2599BCu;
        goto label_2599bc;
    }
    ctx->pc = 0x2599B4u;
    SET_GPR_U32(ctx, 31, 0x2599BCu);
    ctx->pc = 0x2599B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599B4u;
    // 0x2599b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2599B4u, 0x2599BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2599BCu;
label_2599bc:
    // 0x2599bc: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_2599c0:
    if (ctx->pc == 0x2599C0u) {
        ctx->pc = 0x2599C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599BCu;
        // 0x2599c0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2599C4u;
        goto label_2599c4;
    }
    ctx->pc = 0x2599BCu;
    {
        const bool branch_taken_0x2599bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2599C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599BCu;
        // 0x2599c0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2599bc) {
            ctx->pc = 0x259A00u;
            goto label_259a00;
        }
    }
    ctx->pc = 0x2599C4u;
label_2599c4:
    // 0x2599c4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x2599c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2599c8:
    // 0x2599c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2599c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2599cc:
    // 0x2599cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2599ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2599d0:
    // 0x2599d0: 0x8c6bbd30  lw          $t3, -0x42D0($v1)
    ctx->pc = 0x2599d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2599d4:
    // 0x2599d4: 0x8c490044  lw          $t1, 0x44($v0)
    ctx->pc = 0x2599d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2599d8:
    // 0x2599d8: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x2599d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2599dc:
    // 0x2599dc: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x2599dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2599e0:
    // 0x2599e0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2599e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2599e4:
    // 0x2599e4: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x2599e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2599e8:
    // 0x2599e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2599e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2599ec:
    // 0x2599ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2599ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2599f0:
    // 0x2599f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2599f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2599f4:
    // 0x2599f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2599f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2599f8:
    // 0x2599f8: 0xc0428c4  jal         func_10A310
label_2599fc:
    if (ctx->pc == 0x2599FCu) {
        ctx->pc = 0x2599FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599F8u;
        // 0x2599fc: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259A00u;
        goto label_259a00;
    }
    ctx->pc = 0x2599F8u;
    SET_GPR_U32(ctx, 31, 0x259A00u);
    ctx->pc = 0x2599FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2599F8u;
    // 0x2599fc: 0x8c480040  lw          $t0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A310u, 0x2599F8u, 0x259A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A00u;
label_259a00:
    // 0x259a00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x259a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_259a04:
    // 0x259a04: 0x240502c1  addiu       $a1, $zero, 0x2C1
    ctx->pc = 0x259a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
label_259a08:
    // 0x259a08: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x259a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_259a0c:
    // 0x259a0c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x259a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_259a10:
    // 0x259a10: 0x60f809  jalr        $v1
label_259a14:
    if (ctx->pc == 0x259A14u) {
        ctx->pc = 0x259A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A10u;
        // 0x259a14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259A18u;
        goto label_259a18;
    }
    ctx->pc = 0x259A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259A18u);
        ctx->pc = 0x259A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A10u;
        // 0x259a14: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259A10u, 0x259A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259A18u;
label_259a18:
    // 0x259a18: 0x8e4400d4  lw          $a0, 0xD4($s2)
    ctx->pc = 0x259a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_259a1c:
    // 0x259a1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_259a20:
    // 0x259a20: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_259a24:
    if (ctx->pc == 0x259A24u) {
        ctx->pc = 0x259A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A20u;
        // 0x259a24: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259A28u;
        goto label_259a28;
    }
    ctx->pc = 0x259A20u;
    {
        const bool branch_taken_0x259a20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A20u;
        // 0x259a24: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a20) {
            ctx->pc = 0x259A70u;
            goto label_259a70;
        }
    }
    ctx->pc = 0x259A28u;
label_259a28:
    // 0x259a28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x259a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_259a2c:
    // 0x259a2c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x259a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_259a30:
    // 0x259a30: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x259a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_259a34:
    // 0x259a34: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x259a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_259a38:
    // 0x259a38: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x259a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_259a3c:
    // 0x259a3c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x259a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_259a40:
    // 0x259a40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x259a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_259a44:
    // 0x259a44: 0x40f809  jalr        $v0
label_259a48:
    if (ctx->pc == 0x259A48u) {
        ctx->pc = 0x259A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A44u;
        // 0x259a48: 0x8e5100d8  lw          $s1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259A4Cu;
        goto label_259a4c;
    }
    ctx->pc = 0x259A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259A4Cu);
        ctx->pc = 0x259A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A44u;
        // 0x259a48: 0x8e5100d8  lw          $s1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259A44u, 0x259A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259A4Cu;
label_259a4c:
    // 0x259a4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x259a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_259a50:
    // 0x259a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_259a54:
    // 0x259a54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x259a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259a58:
    // 0x259a58: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x259a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_259a5c:
    // 0x259a5c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x259a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259a60:
    // 0x259a60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x259a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_259a64:
    // 0x259a64: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x259a64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_259a68:
    // 0x259a68: 0xc041664  jal         func_105990
label_259a6c:
    if (ctx->pc == 0x259A6Cu) {
        ctx->pc = 0x259A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A68u;
        // 0x259a6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259A70u;
        goto label_259a70;
    }
    ctx->pc = 0x259A68u;
    SET_GPR_U32(ctx, 31, 0x259A70u);
    ctx->pc = 0x259A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259A68u;
    // 0x259a6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x259A68u, 0x259A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A70u;
label_259a70:
    // 0x259a70: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x259a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_259a74:
    // 0x259a74: 0xc089990  jal         func_226640
label_259a78:
    if (ctx->pc == 0x259A78u) {
        ctx->pc = 0x259A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A74u;
        // 0x259a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259A7Cu;
        goto label_259a7c;
    }
    ctx->pc = 0x259A74u;
    SET_GPR_U32(ctx, 31, 0x259A7Cu);
    ctx->pc = 0x259A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259A74u;
    // 0x259a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x259A74u, 0x259A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259A7Cu;
label_259a7c:
    // 0x259a7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x259a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_259a80:
    // 0x259a80: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x259a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_259a84:
    // 0x259a84: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x259a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_259a88:
    // 0x259a88: 0x60f809  jalr        $v1
label_259a8c:
    if (ctx->pc == 0x259A8Cu) {
        ctx->pc = 0x259A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A88u;
        // 0x259a8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259A90u;
        goto label_259a90;
    }
    ctx->pc = 0x259A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259A90u);
        ctx->pc = 0x259A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259A88u;
        // 0x259a8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259A88u, 0x259A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259A90u;
label_259a90:
    // 0x259a90: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x259a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_259a94:
    // 0x259a94: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x259a94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_259a98:
    // 0x259a98: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x259a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_259a9c:
    // 0x259a9c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_259aa0:
    // 0x259aa0: 0x60f809  jalr        $v1
label_259aa4:
    if (ctx->pc == 0x259AA4u) {
        ctx->pc = 0x259AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AA0u;
        // 0x259aa4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259AA8u;
        goto label_259aa8;
    }
    ctx->pc = 0x259AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259AA8u);
        ctx->pc = 0x259AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AA0u;
        // 0x259aa4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259AA0u, 0x259AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259AA8u;
label_259aa8:
    // 0x259aa8: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x259aa8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_259aac:
    // 0x259aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x259aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259ab0:
    // 0x259ab0: 0x0  nop
    ctx->pc = 0x259ab0u;
    // NOP
label_259ab4:
    // 0x259ab4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x259ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259ab8:
    // 0x259ab8: 0x0  nop
    ctx->pc = 0x259ab8u;
    // NOP
label_259abc:
    // 0x259abc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_259ac0:
    if (ctx->pc == 0x259AC0u) {
        ctx->pc = 0x259AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259ABCu;
        // 0x259ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259AC4u;
        goto label_259ac4;
    }
    ctx->pc = 0x259ABCu;
    {
        const bool branch_taken_0x259abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x259AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259ABCu;
        // 0x259ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259abc) {
            ctx->pc = 0x259ADCu;
            goto label_259adc;
        }
    }
    ctx->pc = 0x259AC4u;
label_259ac4:
    // 0x259ac4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x259ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_259ac8:
    // 0x259ac8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x259ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_259acc:
    // 0x259acc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x259accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_259ad0:
    // 0x259ad0: 0x60f809  jalr        $v1
label_259ad4:
    if (ctx->pc == 0x259AD4u) {
        ctx->pc = 0x259AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AD0u;
        // 0x259ad4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259AD8u;
        goto label_259ad8;
    }
    ctx->pc = 0x259AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x259AD8u);
        ctx->pc = 0x259AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AD0u;
        // 0x259ad4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259AD0u, 0x259AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259AD8u;
label_259ad8:
    // 0x259ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259adc:
    // 0x259adc: 0xc089990  jal         func_226640
label_259ae0:
    if (ctx->pc == 0x259AE0u) {
        ctx->pc = 0x259AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259ADCu;
        // 0x259ae0: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259AE4u;
        goto label_259ae4;
    }
    ctx->pc = 0x259ADCu;
    SET_GPR_U32(ctx, 31, 0x259AE4u);
    ctx->pc = 0x259AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259ADCu;
    // 0x259ae0: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x259ADCu, 0x259AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AE4u;
label_259ae4:
    // 0x259ae4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_259ae8:
    // 0x259ae8: 0xc05d53a  jal         func_1754E8
label_259aec:
    if (ctx->pc == 0x259AECu) {
        ctx->pc = 0x259AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AE8u;
        // 0x259aec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259AF0u;
        goto label_259af0;
    }
    ctx->pc = 0x259AE8u;
    SET_GPR_U32(ctx, 31, 0x259AF0u);
    ctx->pc = 0x259AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259AE8u;
    // 0x259aec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x259AE8u, 0x259AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AF0u;
label_259af0:
    // 0x259af0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x259af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_259af4:
    // 0x259af4: 0xc05d4f6  jal         func_1753D8
label_259af8:
    if (ctx->pc == 0x259AF8u) {
        ctx->pc = 0x259AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259AF4u;
        // 0x259af8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259AFCu;
        goto label_259afc;
    }
    ctx->pc = 0x259AF4u;
    SET_GPR_U32(ctx, 31, 0x259AFCu);
    ctx->pc = 0x259AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259AF4u;
    // 0x259af8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x259AF4u, 0x259AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259AFCu;
label_259afc:
    // 0x259afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259b00:
    // 0x259b00: 0xc0899aa  jal         func_2266A8
label_259b04:
    if (ctx->pc == 0x259B04u) {
        ctx->pc = 0x259B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B00u;
        // 0x259b04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B08u;
        goto label_259b08;
    }
    ctx->pc = 0x259B00u;
    SET_GPR_U32(ctx, 31, 0x259B08u);
    ctx->pc = 0x259B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B00u;
    // 0x259b04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x259B00u, 0x259B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B08u;
label_259b08:
    // 0x259b08: 0x1000018d  b           . + 4 + (0x18D << 2)
label_259b0c:
    if (ctx->pc == 0x259B0Cu) {
        ctx->pc = 0x259B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B08u;
        // 0x259b0c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B10u;
        goto label_259b10;
    }
    ctx->pc = 0x259B08u;
    {
        const bool branch_taken_0x259b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B08u;
        // 0x259b0c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b08) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x259B10u;
label_259b10:
    // 0x259b10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259b14:
    // 0x259b14: 0xc08997c  jal         func_2265F0
label_259b18:
    if (ctx->pc == 0x259B18u) {
        ctx->pc = 0x259B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B14u;
        // 0x259b18: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B1Cu;
        goto label_259b1c;
    }
    ctx->pc = 0x259B14u;
    SET_GPR_U32(ctx, 31, 0x259B1Cu);
    ctx->pc = 0x259B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B14u;
    // 0x259b18: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259B14u, 0x259B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B1Cu;
label_259b1c:
    // 0x259b1c: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
label_259b20:
    if (ctx->pc == 0x259B20u) {
        ctx->pc = 0x259B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B1Cu;
        // 0x259b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B24u;
        goto label_259b24;
    }
    ctx->pc = 0x259B1Cu;
    {
        const bool branch_taken_0x259b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B1Cu;
        // 0x259b20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b1c) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259B24u;
label_259b24:
    // 0x259b24: 0xc089998  jal         func_226660
label_259b28:
    if (ctx->pc == 0x259B28u) {
        ctx->pc = 0x259B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B24u;
        // 0x259b28: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B2Cu;
        goto label_259b2c;
    }
    ctx->pc = 0x259B24u;
    SET_GPR_U32(ctx, 31, 0x259B2Cu);
    ctx->pc = 0x259B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B24u;
    // 0x259b28: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x259B24u, 0x259B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B2Cu;
label_259b2c:
    // 0x259b2c: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
label_259b30:
    if (ctx->pc == 0x259B30u) {
        ctx->pc = 0x259B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B2Cu;
        // 0x259b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B34u;
        goto label_259b34;
    }
    ctx->pc = 0x259B2Cu;
    {
        const bool branch_taken_0x259b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B2Cu;
        // 0x259b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b2c) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259B34u;
label_259b34:
    // 0x259b34: 0xc65405e4  lwc1        $f20, 0x5E4($s2)
    ctx->pc = 0x259b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_259b38:
    // 0x259b38: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x259b38u;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_259b3c:
    // 0x259b3c: 0xc0884f6  jal         func_2213D8
label_259b40:
    if (ctx->pc == 0x259B40u) {
        ctx->pc = 0x259B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B3Cu;
        // 0x259b40: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B44u;
        goto label_259b44;
    }
    ctx->pc = 0x259B3Cu;
    SET_GPR_U32(ctx, 31, 0x259B44u);
    ctx->pc = 0x259B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B3Cu;
    // 0x259b40: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x259B3Cu, 0x259B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B44u;
label_259b44:
    // 0x259b44: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x259b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259b48:
    // 0x259b48: 0x0  nop
    ctx->pc = 0x259b48u;
    // NOP
label_259b4c:
    // 0x259b4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_259b50:
    if (ctx->pc == 0x259B50u) {
        ctx->pc = 0x259B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B4Cu;
        // 0x259b50: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B54u;
        goto label_259b54;
    }
    ctx->pc = 0x259B4Cu;
    {
        const bool branch_taken_0x259b4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259b4c) {
            ctx->pc = 0x259B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B4Cu;
            // 0x259b50: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259B54u;
            goto label_259b54;
        }
    }
    ctx->pc = 0x259B54u;
label_259b54:
    // 0x259b54: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x259b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_259b58:
    // 0x259b58: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_259b5c:
    if (ctx->pc == 0x259B5Cu) {
        ctx->pc = 0x259B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B58u;
        // 0x259b5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B60u;
        goto label_259b60;
    }
    ctx->pc = 0x259B58u;
    {
        const bool branch_taken_0x259b58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x259B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B58u;
        // 0x259b5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b58) {
            ctx->pc = 0x259B74u;
            goto label_259b74;
        }
    }
    ctx->pc = 0x259B60u;
label_259b60:
    // 0x259b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259b64:
    // 0x259b64: 0xc08997c  jal         func_2265F0
label_259b68:
    if (ctx->pc == 0x259B68u) {
        ctx->pc = 0x259B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B64u;
        // 0x259b68: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B6Cu;
        goto label_259b6c;
    }
    ctx->pc = 0x259B64u;
    SET_GPR_U32(ctx, 31, 0x259B6Cu);
    ctx->pc = 0x259B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B64u;
    // 0x259b68: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259B64u, 0x259B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B6Cu;
label_259b6c:
    // 0x259b6c: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
label_259b70:
    if (ctx->pc == 0x259B70u) {
        ctx->pc = 0x259B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B6Cu;
        // 0x259b70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B74u;
        goto label_259b74;
    }
    ctx->pc = 0x259B6Cu;
    {
        const bool branch_taken_0x259b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B6Cu;
        // 0x259b70: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b6c) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259B74u;
label_259b74:
    // 0x259b74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x259b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_259b78:
    // 0x259b78: 0x244206e0  addiu       $v0, $v0, 0x6E0
    ctx->pc = 0x259b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1760));
label_259b7c:
    // 0x259b7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_259b80:
    // 0x259b80: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x259b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_259b84:
    // 0x259b84: 0xa0f809  jalr        $a1
label_259b88:
    if (ctx->pc == 0x259B88u) {
        ctx->pc = 0x259B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B84u;
        // 0x259b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B8Cu;
        goto label_259b8c;
    }
    ctx->pc = 0x259B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x259B8Cu);
        ctx->pc = 0x259B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B84u;
        // 0x259b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259B84u, 0x259B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259B8Cu;
label_259b8c:
    // 0x259b8c: 0x10000138  b           . + 4 + (0x138 << 2)
label_259b90:
    if (ctx->pc == 0x259B90u) {
        ctx->pc = 0x259B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B8Cu;
        // 0x259b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B94u;
        goto label_259b94;
    }
    ctx->pc = 0x259B8Cu;
    {
        const bool branch_taken_0x259b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B8Cu;
        // 0x259b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b8c) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x259B94u;
label_259b94:
    // 0x259b94: 0xc088e38  jal         func_2238E0
label_259b98:
    if (ctx->pc == 0x259B98u) {
        ctx->pc = 0x259B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B94u;
        // 0x259b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259B9Cu;
        goto label_259b9c;
    }
    ctx->pc = 0x259B94u;
    SET_GPR_U32(ctx, 31, 0x259B9Cu);
    ctx->pc = 0x259B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259B94u;
    // 0x259b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x259B94u, 0x259B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259B9Cu;
label_259b9c:
    // 0x259b9c: 0x54400167  bnel        $v0, $zero, . + 4 + (0x167 << 2)
label_259ba0:
    if (ctx->pc == 0x259BA0u) {
        ctx->pc = 0x259BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259B9Cu;
        // 0x259ba0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BA4u;
        goto label_259ba4;
    }
    ctx->pc = 0x259B9Cu;
    {
        const bool branch_taken_0x259b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259b9c) {
            ctx->pc = 0x259BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259B9Cu;
            // 0x259ba0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259BA4u;
label_259ba4:
    // 0x259ba4: 0xc088e40  jal         func_223900
label_259ba8:
    if (ctx->pc == 0x259BA8u) {
        ctx->pc = 0x259BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BA4u;
        // 0x259ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BACu;
        goto label_259bac;
    }
    ctx->pc = 0x259BA4u;
    SET_GPR_U32(ctx, 31, 0x259BACu);
    ctx->pc = 0x259BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BA4u;
    // 0x259ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x259BA4u, 0x259BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BACu;
label_259bac:
    // 0x259bac: 0x54400163  bnel        $v0, $zero, . + 4 + (0x163 << 2)
label_259bb0:
    if (ctx->pc == 0x259BB0u) {
        ctx->pc = 0x259BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BACu;
        // 0x259bb0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BB4u;
        goto label_259bb4;
    }
    ctx->pc = 0x259BACu;
    {
        const bool branch_taken_0x259bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259bac) {
            ctx->pc = 0x259BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259BACu;
            // 0x259bb0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259BB4u;
label_259bb4:
    // 0x259bb4: 0xc08a024  jal         func_228090
label_259bb8:
    if (ctx->pc == 0x259BB8u) {
        ctx->pc = 0x259BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BB4u;
        // 0x259bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BBCu;
        goto label_259bbc;
    }
    ctx->pc = 0x259BB4u;
    SET_GPR_U32(ctx, 31, 0x259BBCu);
    ctx->pc = 0x259BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BB4u;
    // 0x259bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x259BB4u, 0x259BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BBCu;
label_259bbc:
    // 0x259bbc: 0x5440015f  bnel        $v0, $zero, . + 4 + (0x15F << 2)
label_259bc0:
    if (ctx->pc == 0x259BC0u) {
        ctx->pc = 0x259BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BBCu;
        // 0x259bc0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BC4u;
        goto label_259bc4;
    }
    ctx->pc = 0x259BBCu;
    {
        const bool branch_taken_0x259bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259bbc) {
            ctx->pc = 0x259BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259BBCu;
            // 0x259bc0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259BC4u;
label_259bc4:
    // 0x259bc4: 0xc08a01c  jal         func_228070
label_259bc8:
    if (ctx->pc == 0x259BC8u) {
        ctx->pc = 0x259BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BC4u;
        // 0x259bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BCCu;
        goto label_259bcc;
    }
    ctx->pc = 0x259BC4u;
    SET_GPR_U32(ctx, 31, 0x259BCCu);
    ctx->pc = 0x259BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BC4u;
    // 0x259bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x259BC4u, 0x259BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BCCu;
label_259bcc:
    // 0x259bcc: 0x5440015b  bnel        $v0, $zero, . + 4 + (0x15B << 2)
label_259bd0:
    if (ctx->pc == 0x259BD0u) {
        ctx->pc = 0x259BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BCCu;
        // 0x259bd0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BD4u;
        goto label_259bd4;
    }
    ctx->pc = 0x259BCCu;
    {
        const bool branch_taken_0x259bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259bcc) {
            ctx->pc = 0x259BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259BCCu;
            // 0x259bd0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259BD4u;
label_259bd4:
    // 0x259bd4: 0xc08a014  jal         func_228050
label_259bd8:
    if (ctx->pc == 0x259BD8u) {
        ctx->pc = 0x259BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BD4u;
        // 0x259bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BDCu;
        goto label_259bdc;
    }
    ctx->pc = 0x259BD4u;
    SET_GPR_U32(ctx, 31, 0x259BDCu);
    ctx->pc = 0x259BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BD4u;
    // 0x259bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x259BD4u, 0x259BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BDCu;
label_259bdc:
    // 0x259bdc: 0x54400157  bnel        $v0, $zero, . + 4 + (0x157 << 2)
label_259be0:
    if (ctx->pc == 0x259BE0u) {
        ctx->pc = 0x259BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BDCu;
        // 0x259be0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BE4u;
        goto label_259be4;
    }
    ctx->pc = 0x259BDCu;
    {
        const bool branch_taken_0x259bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259bdc) {
            ctx->pc = 0x259BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259BDCu;
            // 0x259be0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259BE4u;
label_259be4:
    // 0x259be4: 0xc088e30  jal         func_2238C0
label_259be8:
    if (ctx->pc == 0x259BE8u) {
        ctx->pc = 0x259BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BE4u;
        // 0x259be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BECu;
        goto label_259bec;
    }
    ctx->pc = 0x259BE4u;
    SET_GPR_U32(ctx, 31, 0x259BECu);
    ctx->pc = 0x259BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BE4u;
    // 0x259be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x259BE4u, 0x259BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BECu;
label_259bec:
    // 0x259bec: 0x54400153  bnel        $v0, $zero, . + 4 + (0x153 << 2)
label_259bf0:
    if (ctx->pc == 0x259BF0u) {
        ctx->pc = 0x259BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BECu;
        // 0x259bf0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BF4u;
        goto label_259bf4;
    }
    ctx->pc = 0x259BECu;
    {
        const bool branch_taken_0x259bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259bec) {
            ctx->pc = 0x259BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259BECu;
            // 0x259bf0: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259BF4u;
label_259bf4:
    // 0x259bf4: 0xc08a03c  jal         func_2280F0
label_259bf8:
    if (ctx->pc == 0x259BF8u) {
        ctx->pc = 0x259BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259BF4u;
        // 0x259bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259BFCu;
        goto label_259bfc;
    }
    ctx->pc = 0x259BF4u;
    SET_GPR_U32(ctx, 31, 0x259BFCu);
    ctx->pc = 0x259BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259BF4u;
    // 0x259bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280F0u, 0x259BF4u, 0x259BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BFCu;
label_259bfc:
    // 0x259bfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_259c00:
    if (ctx->pc == 0x259C00u) {
        ctx->pc = 0x259C04u;
        goto label_259c04;
    }
    ctx->pc = 0x259BFCu;
    {
        const bool branch_taken_0x259bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259bfc) {
            ctx->pc = 0x259C0Cu;
            goto label_259c0c;
        }
    }
    ctx->pc = 0x259C04u;
label_259c04:
    // 0x259c04: 0x1000014d  b           . + 4 + (0x14D << 2)
label_259c08:
    if (ctx->pc == 0x259C08u) {
        ctx->pc = 0x259C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C04u;
        // 0x259c08: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C0Cu;
        goto label_259c0c;
    }
    ctx->pc = 0x259C04u;
    {
        const bool branch_taken_0x259c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C04u;
        // 0x259c08: 0xae4001a8  sw          $zero, 0x1A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c04) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259C0Cu;
label_259c0c:
    // 0x259c0c: 0xc0899ae  jal         func_2266B8
label_259c10:
    if (ctx->pc == 0x259C10u) {
        ctx->pc = 0x259C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C0Cu;
        // 0x259c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C14u;
        goto label_259c14;
    }
    ctx->pc = 0x259C0Cu;
    SET_GPR_U32(ctx, 31, 0x259C14u);
    ctx->pc = 0x259C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C0Cu;
    // 0x259c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x259C0Cu, 0x259C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C14u;
label_259c14:
    // 0x259c14: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x259c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_259c18:
    // 0x259c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_259c1c:
    // 0x259c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259c20:
    // 0x259c20: 0xc089998  jal         func_226660
label_259c24:
    if (ctx->pc == 0x259C24u) {
        ctx->pc = 0x259C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C20u;
        // 0x259c24: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C28u;
        goto label_259c28;
    }
    ctx->pc = 0x259C20u;
    SET_GPR_U32(ctx, 31, 0x259C28u);
    ctx->pc = 0x259C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C20u;
    // 0x259c24: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x259C20u, 0x259C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C28u;
label_259c28:
    // 0x259c28: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
label_259c2c:
    if (ctx->pc == 0x259C2Cu) {
        ctx->pc = 0x259C30u;
        goto label_259c30;
    }
    ctx->pc = 0x259C28u;
    {
        const bool branch_taken_0x259c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259c28) {
            ctx->pc = 0x259E40u;
            goto label_259e40;
        }
    }
    ctx->pc = 0x259C30u;
label_259c30:
    // 0x259c30: 0xc088edc  jal         func_223B70
label_259c34:
    if (ctx->pc == 0x259C34u) {
        ctx->pc = 0x259C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C30u;
        // 0x259c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C38u;
        goto label_259c38;
    }
    ctx->pc = 0x259C30u;
    SET_GPR_U32(ctx, 31, 0x259C38u);
    ctx->pc = 0x259C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C30u;
    // 0x259c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x259C30u, 0x259C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C38u;
label_259c38:
    // 0x259c38: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_259c3c:
    if (ctx->pc == 0x259C3Cu) {
        ctx->pc = 0x259C40u;
        goto label_259c40;
    }
    ctx->pc = 0x259C38u;
    {
        const bool branch_taken_0x259c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c38) {
            ctx->pc = 0x259CB0u;
            goto label_259cb0;
        }
    }
    ctx->pc = 0x259C40u;
label_259c40:
    // 0x259c40: 0xc089fac  jal         func_227EB0
label_259c44:
    if (ctx->pc == 0x259C44u) {
        ctx->pc = 0x259C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C40u;
        // 0x259c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C48u;
        goto label_259c48;
    }
    ctx->pc = 0x259C40u;
    SET_GPR_U32(ctx, 31, 0x259C48u);
    ctx->pc = 0x259C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C40u;
    // 0x259c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x259C40u, 0x259C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C48u;
label_259c48:
    // 0x259c48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_259c4c:
    if (ctx->pc == 0x259C4Cu) {
        ctx->pc = 0x259C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C48u;
        // 0x259c4c: 0x3a020143  xori        $v0, $s0, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C50u;
        goto label_259c50;
    }
    ctx->pc = 0x259C48u;
    {
        const bool branch_taken_0x259c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C48u;
        // 0x259c4c: 0x3a020143  xori        $v0, $s0, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c48) {
            ctx->pc = 0x259C60u;
            goto label_259c60;
        }
    }
    ctx->pc = 0x259C50u;
label_259c50:
    // 0x259c50: 0xc089f76  jal         func_227DD8
label_259c54:
    if (ctx->pc == 0x259C54u) {
        ctx->pc = 0x259C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C50u;
        // 0x259c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C58u;
        goto label_259c58;
    }
    ctx->pc = 0x259C50u;
    SET_GPR_U32(ctx, 31, 0x259C58u);
    ctx->pc = 0x259C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C50u;
    // 0x259c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x259C50u, 0x259C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C58u;
label_259c58:
    // 0x259c58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_259c5c:
    if (ctx->pc == 0x259C5Cu) {
        ctx->pc = 0x259C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C58u;
        // 0x259c5c: 0x3a020143  xori        $v0, $s0, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C60u;
        goto label_259c60;
    }
    ctx->pc = 0x259C58u;
    {
        const bool branch_taken_0x259c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C58u;
        // 0x259c5c: 0x3a020143  xori        $v0, $s0, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c58) {
            ctx->pc = 0x259CB0u;
            goto label_259cb0;
        }
    }
    ctx->pc = 0x259C60u;
label_259c60:
    // 0x259c60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_259c64:
    if (ctx->pc == 0x259C64u) {
        ctx->pc = 0x259C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C60u;
        // 0x259c64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C68u;
        goto label_259c68;
    }
    ctx->pc = 0x259C60u;
    {
        const bool branch_taken_0x259c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C60u;
        // 0x259c64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c60) {
            ctx->pc = 0x259C7Cu;
            goto label_259c7c;
        }
    }
    ctx->pc = 0x259C68u;
label_259c68:
    // 0x259c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259c6c:
    // 0x259c6c: 0xc08997c  jal         func_2265F0
label_259c70:
    if (ctx->pc == 0x259C70u) {
        ctx->pc = 0x259C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C6Cu;
        // 0x259c70: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C74u;
        goto label_259c74;
    }
    ctx->pc = 0x259C6Cu;
    SET_GPR_U32(ctx, 31, 0x259C74u);
    ctx->pc = 0x259C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C6Cu;
    // 0x259c70: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259C6Cu, 0x259C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C74u;
label_259c74:
    // 0x259c74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_259c78:
    if (ctx->pc == 0x259C78u) {
        ctx->pc = 0x259C7Cu;
        goto label_259c7c;
    }
    ctx->pc = 0x259C74u;
    {
        const bool branch_taken_0x259c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c74) {
            ctx->pc = 0x259C80u;
            goto label_259c80;
        }
    }
    ctx->pc = 0x259C7Cu;
label_259c7c:
    // 0x259c7c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x259c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259c80:
    // 0x259c80: 0x1200012e  beqz        $s0, . + 4 + (0x12E << 2)
label_259c84:
    if (ctx->pc == 0x259C84u) {
        ctx->pc = 0x259C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C80u;
        // 0x259c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C88u;
        goto label_259c88;
    }
    ctx->pc = 0x259C80u;
    {
        const bool branch_taken_0x259c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C80u;
        // 0x259c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c80) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259C88u;
label_259c88:
    // 0x259c88: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x259c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
label_259c8c:
    // 0x259c8c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x259c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_259c90:
    // 0x259c90: 0xc089988  jal         func_226620
label_259c94:
    if (ctx->pc == 0x259C94u) {
        ctx->pc = 0x259C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259C90u;
        // 0x259c94: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259C98u;
        goto label_259c98;
    }
    ctx->pc = 0x259C90u;
    SET_GPR_U32(ctx, 31, 0x259C98u);
    ctx->pc = 0x259C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259C90u;
    // 0x259c94: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x259C90u, 0x259C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259C98u;
label_259c98:
    // 0x259c98: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x259c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_259c9c:
    // 0x259c9c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x259c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_259ca0:
    // 0x259ca0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_259ca4:
    // 0x259ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259ca8:
    // 0x259ca8: 0x10000038  b           . + 4 + (0x38 << 2)
label_259cac:
    if (ctx->pc == 0x259CACu) {
        ctx->pc = 0x259CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CA8u;
        // 0x259cac: 0x24050143  addiu       $a1, $zero, 0x143 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259CB0u;
        goto label_259cb0;
    }
    ctx->pc = 0x259CA8u;
    {
        const bool branch_taken_0x259ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CA8u;
        // 0x259cac: 0x24050143  addiu       $a1, $zero, 0x143 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ca8) {
            ctx->pc = 0x259D8Cu;
            goto label_259d8c;
        }
    }
    ctx->pc = 0x259CB0u;
label_259cb0:
    // 0x259cb0: 0xc088edc  jal         func_223B70
label_259cb4:
    if (ctx->pc == 0x259CB4u) {
        ctx->pc = 0x259CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CB0u;
        // 0x259cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259CB8u;
        goto label_259cb8;
    }
    ctx->pc = 0x259CB0u;
    SET_GPR_U32(ctx, 31, 0x259CB8u);
    ctx->pc = 0x259CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259CB0u;
    // 0x259cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x259CB0u, 0x259CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CB8u;
label_259cb8:
    // 0x259cb8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_259cbc:
    if (ctx->pc == 0x259CBCu) {
        ctx->pc = 0x259CC0u;
        goto label_259cc0;
    }
    ctx->pc = 0x259CB8u;
    {
        const bool branch_taken_0x259cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259cb8) {
            ctx->pc = 0x259D30u;
            goto label_259d30;
        }
    }
    ctx->pc = 0x259CC0u;
label_259cc0:
    // 0x259cc0: 0xc089fac  jal         func_227EB0
label_259cc4:
    if (ctx->pc == 0x259CC4u) {
        ctx->pc = 0x259CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CC0u;
        // 0x259cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259CC8u;
        goto label_259cc8;
    }
    ctx->pc = 0x259CC0u;
    SET_GPR_U32(ctx, 31, 0x259CC8u);
    ctx->pc = 0x259CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259CC0u;
    // 0x259cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x259CC0u, 0x259CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CC8u;
label_259cc8:
    // 0x259cc8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_259ccc:
    if (ctx->pc == 0x259CCCu) {
        ctx->pc = 0x259CD0u;
        goto label_259cd0;
    }
    ctx->pc = 0x259CC8u;
    {
        const bool branch_taken_0x259cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259cc8) {
            ctx->pc = 0x259D30u;
            goto label_259d30;
        }
    }
    ctx->pc = 0x259CD0u;
label_259cd0:
    // 0x259cd0: 0xc089f76  jal         func_227DD8
label_259cd4:
    if (ctx->pc == 0x259CD4u) {
        ctx->pc = 0x259CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CD0u;
        // 0x259cd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259CD8u;
        goto label_259cd8;
    }
    ctx->pc = 0x259CD0u;
    SET_GPR_U32(ctx, 31, 0x259CD8u);
    ctx->pc = 0x259CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259CD0u;
    // 0x259cd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x259CD0u, 0x259CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CD8u;
label_259cd8:
    // 0x259cd8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_259cdc:
    if (ctx->pc == 0x259CDCu) {
        ctx->pc = 0x259CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CD8u;
        // 0x259cdc: 0x3a020140  xori        $v0, $s0, 0x140 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259CE0u;
        goto label_259ce0;
    }
    ctx->pc = 0x259CD8u;
    {
        const bool branch_taken_0x259cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CD8u;
        // 0x259cdc: 0x3a020140  xori        $v0, $s0, 0x140 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cd8) {
            ctx->pc = 0x259D30u;
            goto label_259d30;
        }
    }
    ctx->pc = 0x259CE0u;
label_259ce0:
    // 0x259ce0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_259ce4:
    if (ctx->pc == 0x259CE4u) {
        ctx->pc = 0x259CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CE0u;
        // 0x259ce4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259CE8u;
        goto label_259ce8;
    }
    ctx->pc = 0x259CE0u;
    {
        const bool branch_taken_0x259ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CE0u;
        // 0x259ce4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ce0) {
            ctx->pc = 0x259CFCu;
            goto label_259cfc;
        }
    }
    ctx->pc = 0x259CE8u;
label_259ce8:
    // 0x259ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259cec:
    // 0x259cec: 0xc08997c  jal         func_2265F0
label_259cf0:
    if (ctx->pc == 0x259CF0u) {
        ctx->pc = 0x259CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259CECu;
        // 0x259cf0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259CF4u;
        goto label_259cf4;
    }
    ctx->pc = 0x259CECu;
    SET_GPR_U32(ctx, 31, 0x259CF4u);
    ctx->pc = 0x259CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259CECu;
    // 0x259cf0: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259CECu, 0x259CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259CF4u;
label_259cf4:
    // 0x259cf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_259cf8:
    if (ctx->pc == 0x259CF8u) {
        ctx->pc = 0x259CFCu;
        goto label_259cfc;
    }
    ctx->pc = 0x259CF4u;
    {
        const bool branch_taken_0x259cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259cf4) {
            ctx->pc = 0x259D00u;
            goto label_259d00;
        }
    }
    ctx->pc = 0x259CFCu;
label_259cfc:
    // 0x259cfc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x259cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259d00:
    // 0x259d00: 0x1200010e  beqz        $s0, . + 4 + (0x10E << 2)
label_259d04:
    if (ctx->pc == 0x259D04u) {
        ctx->pc = 0x259D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D00u;
        // 0x259d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D08u;
        goto label_259d08;
    }
    ctx->pc = 0x259D00u;
    {
        const bool branch_taken_0x259d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D00u;
        // 0x259d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d00) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259D08u;
label_259d08:
    // 0x259d08: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x259d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
label_259d0c:
    // 0x259d0c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x259d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_259d10:
    // 0x259d10: 0xc089988  jal         func_226620
label_259d14:
    if (ctx->pc == 0x259D14u) {
        ctx->pc = 0x259D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D10u;
        // 0x259d14: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D18u;
        goto label_259d18;
    }
    ctx->pc = 0x259D10u;
    SET_GPR_U32(ctx, 31, 0x259D18u);
    ctx->pc = 0x259D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D10u;
    // 0x259d14: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x259D10u, 0x259D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D18u;
label_259d18:
    // 0x259d18: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x259d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_259d1c:
    // 0x259d1c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x259d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_259d20:
    // 0x259d20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_259d24:
    // 0x259d24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259d28:
    // 0x259d28: 0x10000018  b           . + 4 + (0x18 << 2)
label_259d2c:
    if (ctx->pc == 0x259D2Cu) {
        ctx->pc = 0x259D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D28u;
        // 0x259d2c: 0x24050140  addiu       $a1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D30u;
        goto label_259d30;
    }
    ctx->pc = 0x259D28u;
    {
        const bool branch_taken_0x259d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D28u;
        // 0x259d2c: 0x24050140  addiu       $a1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d28) {
            ctx->pc = 0x259D8Cu;
            goto label_259d8c;
        }
    }
    ctx->pc = 0x259D30u;
label_259d30:
    // 0x259d30: 0xc089f76  jal         func_227DD8
label_259d34:
    if (ctx->pc == 0x259D34u) {
        ctx->pc = 0x259D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D30u;
        // 0x259d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D38u;
        goto label_259d38;
    }
    ctx->pc = 0x259D30u;
    SET_GPR_U32(ctx, 31, 0x259D38u);
    ctx->pc = 0x259D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D30u;
    // 0x259d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x259D30u, 0x259D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D38u;
label_259d38:
    // 0x259d38: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_259d3c:
    if (ctx->pc == 0x259D3Cu) {
        ctx->pc = 0x259D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D38u;
        // 0x259d3c: 0x3a02015d  xori        $v0, $s0, 0x15D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)349);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D40u;
        goto label_259d40;
    }
    ctx->pc = 0x259D38u;
    {
        const bool branch_taken_0x259d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D38u;
        // 0x259d3c: 0x3a02015d  xori        $v0, $s0, 0x15D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)349);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d38) {
            ctx->pc = 0x259D9Cu;
            goto label_259d9c;
        }
    }
    ctx->pc = 0x259D40u;
label_259d40:
    // 0x259d40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_259d44:
    if (ctx->pc == 0x259D44u) {
        ctx->pc = 0x259D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D40u;
        // 0x259d44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D48u;
        goto label_259d48;
    }
    ctx->pc = 0x259D40u;
    {
        const bool branch_taken_0x259d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D40u;
        // 0x259d44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d40) {
            ctx->pc = 0x259D5Cu;
            goto label_259d5c;
        }
    }
    ctx->pc = 0x259D48u;
label_259d48:
    // 0x259d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259d4c:
    // 0x259d4c: 0xc08997c  jal         func_2265F0
label_259d50:
    if (ctx->pc == 0x259D50u) {
        ctx->pc = 0x259D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D4Cu;
        // 0x259d50: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D54u;
        goto label_259d54;
    }
    ctx->pc = 0x259D4Cu;
    SET_GPR_U32(ctx, 31, 0x259D54u);
    ctx->pc = 0x259D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D4Cu;
    // 0x259d50: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259D4Cu, 0x259D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D54u;
label_259d54:
    // 0x259d54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_259d58:
    if (ctx->pc == 0x259D58u) {
        ctx->pc = 0x259D5Cu;
        goto label_259d5c;
    }
    ctx->pc = 0x259D54u;
    {
        const bool branch_taken_0x259d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d54) {
            ctx->pc = 0x259D60u;
            goto label_259d60;
        }
    }
    ctx->pc = 0x259D5Cu;
label_259d5c:
    // 0x259d5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x259d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259d60:
    // 0x259d60: 0x120000f6  beqz        $s0, . + 4 + (0xF6 << 2)
label_259d64:
    if (ctx->pc == 0x259D64u) {
        ctx->pc = 0x259D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D60u;
        // 0x259d64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D68u;
        goto label_259d68;
    }
    ctx->pc = 0x259D60u;
    {
        const bool branch_taken_0x259d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D60u;
        // 0x259d64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d60) {
            ctx->pc = 0x25A13Cu;
            goto label_25a13c;
        }
    }
    ctx->pc = 0x259D68u;
label_259d68:
    // 0x259d68: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x259d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
label_259d6c:
    // 0x259d6c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x259d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_259d70:
    // 0x259d70: 0xc089988  jal         func_226620
label_259d74:
    if (ctx->pc == 0x259D74u) {
        ctx->pc = 0x259D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D70u;
        // 0x259d74: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D78u;
        goto label_259d78;
    }
    ctx->pc = 0x259D70u;
    SET_GPR_U32(ctx, 31, 0x259D78u);
    ctx->pc = 0x259D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D70u;
    // 0x259d74: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x259D70u, 0x259D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D78u;
label_259d78:
    // 0x259d78: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x259d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_259d7c:
    // 0x259d7c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x259d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_259d80:
    // 0x259d80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x259d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_259d84:
    // 0x259d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259d88:
    // 0x259d88: 0x2405015d  addiu       $a1, $zero, 0x15D
    ctx->pc = 0x259d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_259d8c:
    // 0x259d8c: 0xc097c6e  jal         func_25F1B8
label_259d90:
    if (ctx->pc == 0x259D90u) {
        ctx->pc = 0x259D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D8Cu;
        // 0x259d90: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D94u;
        goto label_259d94;
    }
    ctx->pc = 0x259D8Cu;
    SET_GPR_U32(ctx, 31, 0x259D94u);
    ctx->pc = 0x259D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D8Cu;
    // 0x259d90: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B8u, 0x259D8Cu, 0x259D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259D94u;
label_259d94:
    // 0x259d94: 0x100000ea  b           . + 4 + (0xEA << 2)
label_259d98:
    if (ctx->pc == 0x259D98u) {
        ctx->pc = 0x259D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D94u;
        // 0x259d98: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D9Cu;
        goto label_259d9c;
    }
    ctx->pc = 0x259D94u;
    {
        const bool branch_taken_0x259d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D94u;
        // 0x259d98: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259d94) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x259D9Cu;
label_259d9c:
    // 0x259d9c: 0xc088ed2  jal         func_223B48
label_259da0:
    if (ctx->pc == 0x259DA0u) {
        ctx->pc = 0x259DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D9Cu;
        // 0x259da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DA4u;
        goto label_259da4;
    }
    ctx->pc = 0x259D9Cu;
    SET_GPR_U32(ctx, 31, 0x259DA4u);
    ctx->pc = 0x259DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259D9Cu;
    // 0x259da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x259D9Cu, 0x259DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DA4u;
label_259da4:
    // 0x259da4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_259da8:
    if (ctx->pc == 0x259DA8u) {
        ctx->pc = 0x259DACu;
        goto label_259dac;
    }
    ctx->pc = 0x259DA4u;
    {
        const bool branch_taken_0x259da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259da4) {
            ctx->pc = 0x259DE4u;
            goto label_259de4;
        }
    }
    ctx->pc = 0x259DACu;
label_259dac:
    // 0x259dac: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x259dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
label_259db0:
    // 0x259db0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x259db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_259db4:
    // 0x259db4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_259db8:
    if (ctx->pc == 0x259DB8u) {
        ctx->pc = 0x259DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DB4u;
        // 0x259db8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DBCu;
        goto label_259dbc;
    }
    ctx->pc = 0x259DB4u;
    {
        const bool branch_taken_0x259db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DB4u;
        // 0x259db8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259db4) {
            ctx->pc = 0x259DD0u;
            goto label_259dd0;
        }
    }
    ctx->pc = 0x259DBCu;
label_259dbc:
    // 0x259dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259dc0:
    // 0x259dc0: 0xc08997c  jal         func_2265F0
label_259dc4:
    if (ctx->pc == 0x259DC4u) {
        ctx->pc = 0x259DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DC0u;
        // 0x259dc4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DC8u;
        goto label_259dc8;
    }
    ctx->pc = 0x259DC0u;
    SET_GPR_U32(ctx, 31, 0x259DC8u);
    ctx->pc = 0x259DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259DC0u;
    // 0x259dc4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259DC0u, 0x259DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DC8u;
label_259dc8:
    // 0x259dc8: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_259dcc:
    if (ctx->pc == 0x259DCCu) {
        ctx->pc = 0x259DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DC8u;
        // 0x259dcc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DD0u;
        goto label_259dd0;
    }
    ctx->pc = 0x259DC8u;
    {
        const bool branch_taken_0x259dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DC8u;
        // 0x259dcc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259dc8) {
            ctx->pc = 0x25A06Cu;
            goto label_25a06c;
        }
    }
    ctx->pc = 0x259DD0u;
label_259dd0:
    // 0x259dd0: 0x8c6206e0  lw          $v0, 0x6E0($v1)
    ctx->pc = 0x259dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1760)));
label_259dd4:
    // 0x259dd4: 0x40f809  jalr        $v0
label_259dd8:
    if (ctx->pc == 0x259DD8u) {
        ctx->pc = 0x259DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DD4u;
        // 0x259dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DDCu;
        goto label_259ddc;
    }
    ctx->pc = 0x259DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259DDCu);
        ctx->pc = 0x259DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DD4u;
        // 0x259dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259DD4u, 0x259DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259DDCu;
label_259ddc:
    // 0x259ddc: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_259de0:
    if (ctx->pc == 0x259DE0u) {
        ctx->pc = 0x259DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DDCu;
        // 0x259de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DE4u;
        goto label_259de4;
    }
    ctx->pc = 0x259DDCu;
    {
        const bool branch_taken_0x259ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DDCu;
        // 0x259de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ddc) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x259DE4u;
label_259de4:
    // 0x259de4: 0xc088ef0  jal         func_223BC0
label_259de8:
    if (ctx->pc == 0x259DE8u) {
        ctx->pc = 0x259DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DE4u;
        // 0x259de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DECu;
        goto label_259dec;
    }
    ctx->pc = 0x259DE4u;
    SET_GPR_U32(ctx, 31, 0x259DECu);
    ctx->pc = 0x259DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259DE4u;
    // 0x259de8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x259DE4u, 0x259DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DECu;
label_259dec:
    // 0x259dec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_259df0:
    if (ctx->pc == 0x259DF0u) {
        ctx->pc = 0x259DF4u;
        goto label_259df4;
    }
    ctx->pc = 0x259DECu;
    {
        const bool branch_taken_0x259dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259dec) {
            ctx->pc = 0x259E40u;
            goto label_259e40;
        }
    }
    ctx->pc = 0x259DF4u;
label_259df4:
    // 0x259df4: 0xc089fee  jal         func_227FB8
label_259df8:
    if (ctx->pc == 0x259DF8u) {
        ctx->pc = 0x259DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259DF4u;
        // 0x259df8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259DFCu;
        goto label_259dfc;
    }
    ctx->pc = 0x259DF4u;
    SET_GPR_U32(ctx, 31, 0x259DFCu);
    ctx->pc = 0x259DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259DF4u;
    // 0x259df8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227FB8u, 0x259DF4u, 0x259DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DFCu;
label_259dfc:
    // 0x259dfc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_259e00:
    if (ctx->pc == 0x259E00u) {
        ctx->pc = 0x259E04u;
        goto label_259e04;
    }
    ctx->pc = 0x259DFCu;
    {
        const bool branch_taken_0x259dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259dfc) {
            ctx->pc = 0x259E40u;
            goto label_259e40;
        }
    }
    ctx->pc = 0x259E04u;
label_259e04:
    // 0x259e04: 0xae4001a8  sw          $zero, 0x1A8($s2)
    ctx->pc = 0x259e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 0));
label_259e08:
    // 0x259e08: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x259e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_259e0c:
    // 0x259e0c: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x259e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
label_259e10:
    // 0x259e10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_259e14:
    if (ctx->pc == 0x259E14u) {
        ctx->pc = 0x259E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E10u;
        // 0x259e14: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E18u;
        goto label_259e18;
    }
    ctx->pc = 0x259E10u;
    {
        const bool branch_taken_0x259e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E10u;
        // 0x259e14: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e10) {
            ctx->pc = 0x259E2Cu;
            goto label_259e2c;
        }
    }
    ctx->pc = 0x259E18u;
label_259e18:
    // 0x259e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259e1c:
    // 0x259e1c: 0xc08997c  jal         func_2265F0
label_259e20:
    if (ctx->pc == 0x259E20u) {
        ctx->pc = 0x259E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E1Cu;
        // 0x259e20: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E24u;
        goto label_259e24;
    }
    ctx->pc = 0x259E1Cu;
    SET_GPR_U32(ctx, 31, 0x259E24u);
    ctx->pc = 0x259E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E1Cu;
    // 0x259e20: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259E1Cu, 0x259E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E24u;
label_259e24:
    // 0x259e24: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_259e28:
    if (ctx->pc == 0x259E28u) {
        ctx->pc = 0x259E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E24u;
        // 0x259e28: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E2Cu;
        goto label_259e2c;
    }
    ctx->pc = 0x259E24u;
    {
        const bool branch_taken_0x259e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E24u;
        // 0x259e28: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e24) {
            ctx->pc = 0x25A06Cu;
            goto label_25a06c;
        }
    }
    ctx->pc = 0x259E2Cu;
label_259e2c:
    // 0x259e2c: 0x8c62070c  lw          $v0, 0x70C($v1)
    ctx->pc = 0x259e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1804)));
label_259e30:
    // 0x259e30: 0x40f809  jalr        $v0
label_259e34:
    if (ctx->pc == 0x259E34u) {
        ctx->pc = 0x259E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E30u;
        // 0x259e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E38u;
        goto label_259e38;
    }
    ctx->pc = 0x259E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x259E38u);
        ctx->pc = 0x259E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E30u;
        // 0x259e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259E30u, 0x259E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259E38u;
label_259e38:
    // 0x259e38: 0x1000008d  b           . + 4 + (0x8D << 2)
label_259e3c:
    if (ctx->pc == 0x259E3Cu) {
        ctx->pc = 0x259E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E38u;
        // 0x259e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E40u;
        goto label_259e40;
    }
    ctx->pc = 0x259E38u;
    {
        const bool branch_taken_0x259e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E38u;
        // 0x259e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e38) {
            ctx->pc = 0x25A070u;
            goto label_25a070;
        }
    }
    ctx->pc = 0x259E40u;
label_259e40:
    // 0x259e40: 0xc088e60  jal         func_223980
label_259e44:
    if (ctx->pc == 0x259E44u) {
        ctx->pc = 0x259E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E40u;
        // 0x259e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E48u;
        goto label_259e48;
    }
    ctx->pc = 0x259E40u;
    SET_GPR_U32(ctx, 31, 0x259E48u);
    ctx->pc = 0x259E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E40u;
    // 0x259e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x259E40u, 0x259E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E48u;
label_259e48:
    // 0x259e48: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_259e4c:
    if (ctx->pc == 0x259E4Cu) {
        ctx->pc = 0x259E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E48u;
        // 0x259e4c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E50u;
        goto label_259e50;
    }
    ctx->pc = 0x259E48u;
    {
        const bool branch_taken_0x259e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E48u;
        // 0x259e4c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e48) {
            ctx->pc = 0x259EA0u;
            goto label_259ea0;
        }
    }
    ctx->pc = 0x259E50u;
label_259e50:
    // 0x259e50: 0xc088e48  jal         func_223920
label_259e54:
    if (ctx->pc == 0x259E54u) {
        ctx->pc = 0x259E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E50u;
        // 0x259e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E58u;
        goto label_259e58;
    }
    ctx->pc = 0x259E50u;
    SET_GPR_U32(ctx, 31, 0x259E58u);
    ctx->pc = 0x259E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E50u;
    // 0x259e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x259E50u, 0x259E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E58u;
label_259e58:
    // 0x259e58: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_259e5c:
    if (ctx->pc == 0x259E5Cu) {
        ctx->pc = 0x259E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E58u;
        // 0x259e5c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E60u;
        goto label_259e60;
    }
    ctx->pc = 0x259E58u;
    {
        const bool branch_taken_0x259e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E58u;
        // 0x259e5c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e58) {
            ctx->pc = 0x259EA0u;
            goto label_259ea0;
        }
    }
    ctx->pc = 0x259E60u;
label_259e60:
    // 0x259e60: 0xc08a05a  jal         func_228168
label_259e64:
    if (ctx->pc == 0x259E64u) {
        ctx->pc = 0x259E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E60u;
        // 0x259e64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E68u;
        goto label_259e68;
    }
    ctx->pc = 0x259E60u;
    SET_GPR_U32(ctx, 31, 0x259E68u);
    ctx->pc = 0x259E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E60u;
    // 0x259e64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x259E60u, 0x259E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E68u;
label_259e68:
    // 0x259e68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_259e6c:
    if (ctx->pc == 0x259E6Cu) {
        ctx->pc = 0x259E70u;
        goto label_259e70;
    }
    ctx->pc = 0x259E68u;
    {
        const bool branch_taken_0x259e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e68) {
            ctx->pc = 0x259E8Cu;
            goto label_259e8c;
        }
    }
    ctx->pc = 0x259E70u;
label_259e70:
    // 0x259e70: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x259e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_259e74:
    // 0x259e74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_259e78:
    if (ctx->pc == 0x259E78u) {
        ctx->pc = 0x259E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E74u;
        // 0x259e78: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E7Cu;
        goto label_259e7c;
    }
    ctx->pc = 0x259E74u;
    {
        const bool branch_taken_0x259e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E74u;
        // 0x259e78: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e74) {
            ctx->pc = 0x259E84u;
            goto label_259e84;
        }
    }
    ctx->pc = 0x259E7Cu;
label_259e7c:
    // 0x259e7c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_259e80:
    if (ctx->pc == 0x259E80u) {
        ctx->pc = 0x259E84u;
        goto label_259e84;
    }
    ctx->pc = 0x259E7Cu;
    {
        const bool branch_taken_0x259e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x259e7c) {
            ctx->pc = 0x259E8Cu;
            goto label_259e8c;
        }
    }
    ctx->pc = 0x259E84u;
label_259e84:
    // 0x259e84: 0x10000006  b           . + 4 + (0x6 << 2)
label_259e88:
    if (ctx->pc == 0x259E88u) {
        ctx->pc = 0x259E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E84u;
        // 0x259e88: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E8Cu;
        goto label_259e8c;
    }
    ctx->pc = 0x259E84u;
    {
        const bool branch_taken_0x259e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E84u;
        // 0x259e88: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e84) {
            ctx->pc = 0x259EA0u;
            goto label_259ea0;
        }
    }
    ctx->pc = 0x259E8Cu;
label_259e8c:
    // 0x259e8c: 0xc08a0d0  jal         func_228340
label_259e90:
    if (ctx->pc == 0x259E90u) {
        ctx->pc = 0x259E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E8Cu;
        // 0x259e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E94u;
        goto label_259e94;
    }
    ctx->pc = 0x259E8Cu;
    SET_GPR_U32(ctx, 31, 0x259E94u);
    ctx->pc = 0x259E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E8Cu;
    // 0x259e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x259E8Cu, 0x259E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E94u;
label_259e94:
    // 0x259e94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_259e98:
    if (ctx->pc == 0x259E98u) {
        ctx->pc = 0x259E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E94u;
        // 0x259e98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E9Cu;
        goto label_259e9c;
    }
    ctx->pc = 0x259E94u;
    {
        const bool branch_taken_0x259e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E94u;
        // 0x259e98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259e94) {
            ctx->pc = 0x259EA0u;
            goto label_259ea0;
        }
    }
    ctx->pc = 0x259E9Cu;
label_259e9c:
    // 0x259e9c: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x259e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_259ea0:
    // 0x259ea0: 0xc08a0d0  jal         func_228340
label_259ea4:
    if (ctx->pc == 0x259EA4u) {
        ctx->pc = 0x259EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EA0u;
        // 0x259ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259EA8u;
        goto label_259ea8;
    }
    ctx->pc = 0x259EA0u;
    SET_GPR_U32(ctx, 31, 0x259EA8u);
    ctx->pc = 0x259EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EA0u;
    // 0x259ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x259EA0u, 0x259EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EA8u;
label_259ea8:
    // 0x259ea8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_259eac:
    if (ctx->pc == 0x259EACu) {
        ctx->pc = 0x259EB0u;
        goto label_259eb0;
    }
    ctx->pc = 0x259EA8u;
    {
        const bool branch_taken_0x259ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ea8) {
            ctx->pc = 0x259EF8u;
            goto label_259ef8;
        }
    }
    ctx->pc = 0x259EB0u;
label_259eb0:
    // 0x259eb0: 0xc088e60  jal         func_223980
label_259eb4:
    if (ctx->pc == 0x259EB4u) {
        ctx->pc = 0x259EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EB0u;
        // 0x259eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259EB8u;
        goto label_259eb8;
    }
    ctx->pc = 0x259EB0u;
    SET_GPR_U32(ctx, 31, 0x259EB8u);
    ctx->pc = 0x259EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EB0u;
    // 0x259eb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x259EB0u, 0x259EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EB8u;
label_259eb8:
    // 0x259eb8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_259ebc:
    if (ctx->pc == 0x259EBCu) {
        ctx->pc = 0x259EC0u;
        goto label_259ec0;
    }
    ctx->pc = 0x259EB8u;
    {
        const bool branch_taken_0x259eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259eb8) {
            ctx->pc = 0x259EF8u;
            goto label_259ef8;
        }
    }
    ctx->pc = 0x259EC0u;
label_259ec0:
    // 0x259ec0: 0xc088e48  jal         func_223920
label_259ec4:
    if (ctx->pc == 0x259EC4u) {
        ctx->pc = 0x259EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EC0u;
        // 0x259ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259EC8u;
        goto label_259ec8;
    }
    ctx->pc = 0x259EC0u;
    SET_GPR_U32(ctx, 31, 0x259EC8u);
    ctx->pc = 0x259EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EC0u;
    // 0x259ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x259EC0u, 0x259EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EC8u;
label_259ec8:
    // 0x259ec8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_259ecc:
    if (ctx->pc == 0x259ECCu) {
        ctx->pc = 0x259ED0u;
        goto label_259ed0;
    }
    ctx->pc = 0x259EC8u;
    {
        const bool branch_taken_0x259ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259ec8) {
            ctx->pc = 0x259EF8u;
            goto label_259ef8;
        }
    }
    ctx->pc = 0x259ED0u;
label_259ed0:
    // 0x259ed0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x259ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_259ed4:
    // 0x259ed4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x259ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_259ed8:
    // 0x259ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_259edc:
    // 0x259edc: 0x0  nop
    ctx->pc = 0x259edcu;
    // NOP
label_259ee0:
    // 0x259ee0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x259ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259ee4:
    // 0x259ee4: 0x0  nop
    ctx->pc = 0x259ee4u;
    // NOP
label_259ee8:
    // 0x259ee8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_259eec:
    if (ctx->pc == 0x259EECu) {
        ctx->pc = 0x259EF0u;
        goto label_259ef0;
    }
    ctx->pc = 0x259EE8u;
    {
        const bool branch_taken_0x259ee8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x259ee8) {
            ctx->pc = 0x259EF8u;
            goto label_259ef8;
        }
    }
    ctx->pc = 0x259EF0u;
label_259ef0:
    // 0x259ef0: 0x10000014  b           . + 4 + (0x14 << 2)
label_259ef4:
    if (ctx->pc == 0x259EF4u) {
        ctx->pc = 0x259EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EF0u;
        // 0x259ef4: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259EF8u;
        goto label_259ef8;
    }
    ctx->pc = 0x259EF0u;
    {
        const bool branch_taken_0x259ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EF0u;
        // 0x259ef4: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ef0) {
            ctx->pc = 0x259F44u;
            goto label_259f44;
        }
    }
    ctx->pc = 0x259EF8u;
label_259ef8:
    // 0x259ef8: 0xc088560  jal         func_221580
label_259efc:
    if (ctx->pc == 0x259EFCu) {
        ctx->pc = 0x259EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EF8u;
        // 0x259efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F00u;
        goto label_259f00;
    }
    ctx->pc = 0x259EF8u;
    SET_GPR_U32(ctx, 31, 0x259F00u);
    ctx->pc = 0x259EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259EF8u;
    // 0x259efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x259EF8u, 0x259F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F00u;
label_259f00:
    // 0x259f00: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x259f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_259f04:
    // 0x259f04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_259f08:
    // 0x259f08: 0x0  nop
    ctx->pc = 0x259f08u;
    // NOP
label_259f0c:
    // 0x259f0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x259f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_259f10:
    // 0x259f10: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x259f10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259f14:
    // 0x259f14: 0x0  nop
    ctx->pc = 0x259f14u;
    // NOP
label_259f18:
    // 0x259f18: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_259f1c:
    if (ctx->pc == 0x259F1Cu) {
        ctx->pc = 0x259F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F18u;
        // 0x259f1c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F20u;
        goto label_259f20;
    }
    ctx->pc = 0x259F18u;
    {
        const bool branch_taken_0x259f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259f18) {
            ctx->pc = 0x259F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259F18u;
            // 0x259f1c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259F44u;
            goto label_259f44;
        }
    }
    ctx->pc = 0x259F20u;
label_259f20:
    // 0x259f20: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_259f24:
    // 0x259f24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x259f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_259f28:
    // 0x259f28: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_259f2c:
    if (ctx->pc == 0x259F2Cu) {
        ctx->pc = 0x259F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F28u;
        // 0x259f2c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F30u;
        goto label_259f30;
    }
    ctx->pc = 0x259F28u;
    {
        const bool branch_taken_0x259f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x259F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F28u;
        // 0x259f2c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f28) {
            ctx->pc = 0x259F40u;
            goto label_259f40;
        }
    }
    ctx->pc = 0x259F30u;
label_259f30:
    // 0x259f30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_259f34:
    if (ctx->pc == 0x259F34u) {
        ctx->pc = 0x259F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F30u;
        // 0x259f34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F38u;
        goto label_259f38;
    }
    ctx->pc = 0x259F30u;
    {
        const bool branch_taken_0x259f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x259F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F30u;
        // 0x259f34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f30) {
            ctx->pc = 0x259F40u;
            goto label_259f40;
        }
    }
    ctx->pc = 0x259F38u;
label_259f38:
    // 0x259f38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_259f3c:
    if (ctx->pc == 0x259F3Cu) {
        ctx->pc = 0x259F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F38u;
        // 0x259f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F40u;
        goto label_259f40;
    }
    ctx->pc = 0x259F38u;
    {
        const bool branch_taken_0x259f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F38u;
        // 0x259f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f38) {
            ctx->pc = 0x259F48u;
            goto label_259f48;
        }
    }
    ctx->pc = 0x259F40u;
label_259f40:
    // 0x259f40: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x259f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_259f44:
    // 0x259f44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259f48:
    // 0x259f48: 0xc08997c  jal         func_2265F0
label_259f4c:
    if (ctx->pc == 0x259F4Cu) {
        ctx->pc = 0x259F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F48u;
        // 0x259f4c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F50u;
        goto label_259f50;
    }
    ctx->pc = 0x259F48u;
    SET_GPR_U32(ctx, 31, 0x259F50u);
    ctx->pc = 0x259F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F48u;
    // 0x259f4c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x259F48u, 0x259F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F50u;
label_259f50:
    // 0x259f50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_259f54:
    if (ctx->pc == 0x259F54u) {
        ctx->pc = 0x259F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F50u;
        // 0x259f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F58u;
        goto label_259f58;
    }
    ctx->pc = 0x259F50u;
    {
        const bool branch_taken_0x259f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F50u;
        // 0x259f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f50) {
            ctx->pc = 0x259F78u;
            goto label_259f78;
        }
    }
    ctx->pc = 0x259F58u;
label_259f58:
    // 0x259f58: 0xc65405e4  lwc1        $f20, 0x5E4($s2)
    ctx->pc = 0x259f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_259f5c:
    // 0x259f5c: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x259f5cu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_259f60:
    // 0x259f60: 0xc0884f6  jal         func_2213D8
label_259f64:
    if (ctx->pc == 0x259F64u) {
        ctx->pc = 0x259F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F60u;
        // 0x259f64: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F68u;
        goto label_259f68;
    }
    ctx->pc = 0x259F60u;
    SET_GPR_U32(ctx, 31, 0x259F68u);
    ctx->pc = 0x259F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259F60u;
    // 0x259f64: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x259F60u, 0x259F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F68u;
label_259f68:
    // 0x259f68: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x259f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_259f6c:
    // 0x259f6c: 0x0  nop
    ctx->pc = 0x259f6cu;
    // NOP
label_259f70:
    // 0x259f70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_259f74:
    if (ctx->pc == 0x259F74u) {
        ctx->pc = 0x259F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F70u;
        // 0x259f74: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F78u;
        goto label_259f78;
    }
    ctx->pc = 0x259F70u;
    {
        const bool branch_taken_0x259f70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x259f70) {
            ctx->pc = 0x259F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259F70u;
            // 0x259f74: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259F78u;
            goto label_259f78;
        }
    }
    ctx->pc = 0x259F78u;
label_259f78:
    // 0x259f78: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x259f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_259f7c:
    // 0x259f7c: 0x864301be  lh          $v1, 0x1BE($s2)
    ctx->pc = 0x259f7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 446)));
label_259f80:
    // 0x259f80: 0x2444d968  addiu       $a0, $v0, -0x2698
    ctx->pc = 0x259f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957416));
label_259f84:
    // 0x259f84: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x259f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_259f88:
    // 0x259f88: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_259f8c:
    if (ctx->pc == 0x259F8Cu) {
        ctx->pc = 0x259F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F88u;
        // 0x259f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F90u;
        goto label_259f90;
    }
    ctx->pc = 0x259F88u;
    {
        const bool branch_taken_0x259f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F88u;
        // 0x259f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f88) {
            ctx->pc = 0x259FC0u;
            goto label_259fc0;
        }
    }
    ctx->pc = 0x259F90u;
label_259f90:
    // 0x259f90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_259f94:
    // 0x259f94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_259f98:
    if (ctx->pc == 0x259F98u) {
        ctx->pc = 0x259F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F94u;
        // 0x259f98: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259F9Cu;
        goto label_259f9c;
    }
    ctx->pc = 0x259F94u;
    {
        const bool branch_taken_0x259f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x259F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F94u;
        // 0x259f98: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f94) {
            ctx->pc = 0x259FACu;
            goto label_259fac;
        }
    }
    ctx->pc = 0x259F9Cu;
label_259f9c:
    // 0x259f9c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x259f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_259fa0:
    // 0x259fa0: 0x864201c0  lh          $v0, 0x1C0($s2)
    ctx->pc = 0x259fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 448)));
label_259fa4:
    // 0x259fa4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_259fa8:
    if (ctx->pc == 0x259FA8u) {
        ctx->pc = 0x259FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FA4u;
        // 0x259fa8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FACu;
        goto label_259fac;
    }
    ctx->pc = 0x259FA4u;
    {
        const bool branch_taken_0x259fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x259FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FA4u;
        // 0x259fa8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fa4) {
            ctx->pc = 0x259FBCu;
            goto label_259fbc;
        }
    }
    ctx->pc = 0x259FACu;
label_259fac:
    // 0x259fac: 0x8e4301c0  lw          $v1, 0x1C0($s2)
    ctx->pc = 0x259facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_259fb0:
    // 0x259fb0: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x259fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
label_259fb4:
    // 0x259fb4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_259fb8:
    if (ctx->pc == 0x259FB8u) {
        ctx->pc = 0x259FBCu;
        goto label_259fbc;
    }
    ctx->pc = 0x259FB4u;
    {
        const bool branch_taken_0x259fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x259fb4) {
            ctx->pc = 0x259FC0u;
            goto label_259fc0;
        }
    }
    ctx->pc = 0x259FBCu;
label_259fbc:
    // 0x259fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x259fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_259fc0:
    // 0x259fc0: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_259fc4:
    if (ctx->pc == 0x259FC4u) {
        ctx->pc = 0x259FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FC0u;
        // 0x259fc4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FC8u;
        goto label_259fc8;
    }
    ctx->pc = 0x259FC0u;
    {
        const bool branch_taken_0x259fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x259fc0) {
            ctx->pc = 0x259FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259FC0u;
            // 0x259fc4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A000u;
            goto label_25a000;
        }
    }
    ctx->pc = 0x259FC8u;
label_259fc8:
    // 0x259fc8: 0xc089bfc  jal         func_226FF0
label_259fcc:
    if (ctx->pc == 0x259FCCu) {
        ctx->pc = 0x259FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FC8u;
        // 0x259fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FD0u;
        goto label_259fd0;
    }
    ctx->pc = 0x259FC8u;
    SET_GPR_U32(ctx, 31, 0x259FD0u);
    ctx->pc = 0x259FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FC8u;
    // 0x259fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x259FC8u, 0x259FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FD0u;
label_259fd0:
    // 0x259fd0: 0xc0e57ce  jal         func_395F38
label_259fd4:
    if (ctx->pc == 0x259FD4u) {
        ctx->pc = 0x259FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FD0u;
        // 0x259fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FD8u;
        goto label_259fd8;
    }
    ctx->pc = 0x259FD0u;
    SET_GPR_U32(ctx, 31, 0x259FD8u);
    ctx->pc = 0x259FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FD0u;
    // 0x259fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x259FD0u, 0x259FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FD8u;
label_259fd8:
    // 0x259fd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_259fdc:
    if (ctx->pc == 0x259FDCu) {
        ctx->pc = 0x259FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FD8u;
        // 0x259fdc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FE0u;
        goto label_259fe0;
    }
    ctx->pc = 0x259FD8u;
    {
        const bool branch_taken_0x259fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FD8u;
        // 0x259fdc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fd8) {
            ctx->pc = 0x259FFCu;
            goto label_259ffc;
        }
    }
    ctx->pc = 0x259FE0u;
label_259fe0:
    // 0x259fe0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x259fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_259fe4:
    // 0x259fe4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_259fe8:
    if (ctx->pc == 0x259FE8u) {
        ctx->pc = 0x259FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FE4u;
        // 0x259fe8: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FECu;
        goto label_259fec;
    }
    ctx->pc = 0x259FE4u;
    {
        const bool branch_taken_0x259fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x259FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FE4u;
        // 0x259fe8: 0x24100015  addiu       $s0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259fe4) {
            ctx->pc = 0x259FFCu;
            goto label_259ffc;
        }
    }
    ctx->pc = 0x259FECu;
label_259fec:
    // 0x259fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x259fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_259ff0:
    // 0x259ff0: 0xc0899aa  jal         func_2266A8
label_259ff4:
    if (ctx->pc == 0x259FF4u) {
        ctx->pc = 0x259FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FF0u;
        // 0x259ff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259FF8u;
        goto label_259ff8;
    }
    ctx->pc = 0x259FF0u;
    SET_GPR_U32(ctx, 31, 0x259FF8u);
    ctx->pc = 0x259FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FF0u;
    // 0x259ff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x259FF0u, 0x259FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FF8u;
label_259ff8:
    // 0x259ff8: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x259ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_259ffc:
    // 0x259ffc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x259ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_25a000:
    // 0x25a000: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x25a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_25a004:
    // 0x25a004: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
label_25a008:
    if (ctx->pc == 0x25A008u) {
        ctx->pc = 0x25A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A004u;
        // 0x25a008: 0x24100022  addiu       $s0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A00Cu;
        goto label_25a00c;
    }
    ctx->pc = 0x25A004u;
    {
        const bool branch_taken_0x25a004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a004) {
            ctx->pc = 0x25A008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A004u;
            // 0x25a008: 0x24100022  addiu       $s0, $zero, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A00Cu;
            goto label_25a00c;
        }
    }
    ctx->pc = 0x25A00Cu;
label_25a00c:
    // 0x25a00c: 0x38830009  xori        $v1, $a0, 0x9
    ctx->pc = 0x25a00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)9);
label_25a010:
    // 0x25a010: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x25a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_25a014:
    // 0x25a014: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x25a014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_25a018:
    // 0x25a018: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25a01c:
    if (ctx->pc == 0x25A01Cu) {
        ctx->pc = 0x25A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A018u;
        // 0x25a01c: 0x3800a  movz        $s0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A020u;
        goto label_25a020;
    }
    ctx->pc = 0x25A018u;
    {
        const bool branch_taken_0x25a018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A018u;
        // 0x25a01c: 0x3800a  movz        $s0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a018) {
            ctx->pc = 0x25A028u;
            goto label_25a028;
        }
    }
    ctx->pc = 0x25A020u;
label_25a020:
    // 0x25a020: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_25a024:
    if (ctx->pc == 0x25A024u) {
        ctx->pc = 0x25A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A020u;
        // 0x25a024: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A028u;
        goto label_25a028;
    }
    ctx->pc = 0x25A020u;
    {
        const bool branch_taken_0x25a020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a020) {
            ctx->pc = 0x25A024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A020u;
            // 0x25a024: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A028u;
            goto label_25a028;
        }
    }
    ctx->pc = 0x25A028u;
label_25a028:
    // 0x25a028: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x25a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_25a02c:
    // 0x25a02c: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_25a030:
    if (ctx->pc == 0x25A030u) {
        ctx->pc = 0x25A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A02Cu;
        // 0x25a030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A034u;
        goto label_25a034;
    }
    ctx->pc = 0x25A02Cu;
    {
        const bool branch_taken_0x25a02c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25a02c) {
            ctx->pc = 0x25A030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A02Cu;
            // 0x25a030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A04Cu;
            goto label_25a04c;
        }
    }
    ctx->pc = 0x25A034u;
label_25a034:
    // 0x25a034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25a038:
    // 0x25a038: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_25a03c:
    if (ctx->pc == 0x25A03Cu) {
        ctx->pc = 0x25A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A038u;
        // 0x25a03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A040u;
        goto label_25a040;
    }
    ctx->pc = 0x25A038u;
    {
        const bool branch_taken_0x25a038 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A038u;
        // 0x25a03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a038) {
            ctx->pc = 0x25A04Cu;
            goto label_25a04c;
        }
    }
    ctx->pc = 0x25A040u;
label_25a040:
    // 0x25a040: 0xc089974  jal         func_2265D0
label_25a044:
    if (ctx->pc == 0x25A044u) {
        ctx->pc = 0x25A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A040u;
        // 0x25a044: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A048u;
        goto label_25a048;
    }
    ctx->pc = 0x25A040u;
    SET_GPR_U32(ctx, 31, 0x25A048u);
    ctx->pc = 0x25A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A040u;
    // 0x25a044: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x25A040u, 0x25A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A048u;
label_25a048:
    // 0x25a048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a04c:
    // 0x25a04c: 0xc089998  jal         func_226660
label_25a050:
    if (ctx->pc == 0x25A050u) {
        ctx->pc = 0x25A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A04Cu;
        // 0x25a050: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A054u;
        goto label_25a054;
    }
    ctx->pc = 0x25A04Cu;
    SET_GPR_U32(ctx, 31, 0x25A054u);
    ctx->pc = 0x25A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A04Cu;
    // 0x25a050: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25A04Cu, 0x25A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A054u;
label_25a054:
    // 0x25a054: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_25a058:
    if (ctx->pc == 0x25A058u) {
        ctx->pc = 0x25A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A054u;
        // 0x25a058: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A05Cu;
        goto label_25a05c;
    }
    ctx->pc = 0x25A054u;
    {
        const bool branch_taken_0x25a054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a054) {
            ctx->pc = 0x25A058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A054u;
            // 0x25a058: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A080u;
            goto label_25a080;
        }
    }
    ctx->pc = 0x25A05Cu;
label_25a05c:
    // 0x25a05c: 0xc088ed2  jal         func_223B48
label_25a060:
    if (ctx->pc == 0x25A060u) {
        ctx->pc = 0x25A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A05Cu;
        // 0x25a060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A064u;
        goto label_25a064;
    }
    ctx->pc = 0x25A05Cu;
    SET_GPR_U32(ctx, 31, 0x25A064u);
    ctx->pc = 0x25A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A05Cu;
    // 0x25a060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x25A05Cu, 0x25A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A064u;
label_25a064:
    // 0x25a064: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_25a068:
    if (ctx->pc == 0x25A068u) {
        ctx->pc = 0x25A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A064u;
        // 0x25a068: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A06Cu;
        goto label_25a06c;
    }
    ctx->pc = 0x25A064u;
    {
        const bool branch_taken_0x25a064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a064) {
            ctx->pc = 0x25A068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A064u;
            // 0x25a068: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A080u;
            goto label_25a080;
        }
    }
    ctx->pc = 0x25A06Cu;
label_25a06c:
    // 0x25a06c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a070:
    // 0x25a070: 0xc089988  jal         func_226620
label_25a074:
    if (ctx->pc == 0x25A074u) {
        ctx->pc = 0x25A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A070u;
        // 0x25a074: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A078u;
        goto label_25a078;
    }
    ctx->pc = 0x25A070u;
    SET_GPR_U32(ctx, 31, 0x25A078u);
    ctx->pc = 0x25A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A070u;
    // 0x25a074: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25A070u, 0x25A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A078u;
label_25a078:
    // 0x25a078: 0x10000031  b           . + 4 + (0x31 << 2)
label_25a07c:
    if (ctx->pc == 0x25A07Cu) {
        ctx->pc = 0x25A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A078u;
        // 0x25a07c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A080u;
        goto label_25a080;
    }
    ctx->pc = 0x25A078u;
    {
        const bool branch_taken_0x25a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A078u;
        // 0x25a07c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a078) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x25A080u;
label_25a080:
    // 0x25a080: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_25a084:
    if (ctx->pc == 0x25A084u) {
        ctx->pc = 0x25A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A080u;
        // 0x25a084: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A088u;
        goto label_25a088;
    }
    ctx->pc = 0x25A080u;
    {
        const bool branch_taken_0x25a080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A080u;
        // 0x25a084: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a080) {
            ctx->pc = 0x25A09Cu;
            goto label_25a09c;
        }
    }
    ctx->pc = 0x25A088u;
label_25a088:
    // 0x25a088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a08c:
    // 0x25a08c: 0xc08997c  jal         func_2265F0
label_25a090:
    if (ctx->pc == 0x25A090u) {
        ctx->pc = 0x25A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A08Cu;
        // 0x25a090: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A094u;
        goto label_25a094;
    }
    ctx->pc = 0x25A08Cu;
    SET_GPR_U32(ctx, 31, 0x25A094u);
    ctx->pc = 0x25A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A08Cu;
    // 0x25a090: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25A08Cu, 0x25A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A094u;
label_25a094:
    // 0x25a094: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_25a098:
    if (ctx->pc == 0x25A098u) {
        ctx->pc = 0x25A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A094u;
        // 0x25a098: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A09Cu;
        goto label_25a09c;
    }
    ctx->pc = 0x25A094u;
    {
        const bool branch_taken_0x25a094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A094u;
        // 0x25a098: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a094) {
            ctx->pc = 0x25A0F8u;
            goto label_25a0f8;
        }
    }
    ctx->pc = 0x25A09Cu;
label_25a09c:
    // 0x25a09c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_25a0a0:
    // 0x25a0a0: 0x244206e0  addiu       $v0, $v0, 0x6E0
    ctx->pc = 0x25a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1760));
label_25a0a4:
    // 0x25a0a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25a0a8:
    // 0x25a0a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x25a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25a0ac:
    // 0x25a0ac: 0xa0f809  jalr        $a1
label_25a0b0:
    if (ctx->pc == 0x25A0B0u) {
        ctx->pc = 0x25A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0ACu;
        // 0x25a0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0B4u;
        goto label_25a0b4;
    }
    ctx->pc = 0x25A0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25A0B4u);
        ctx->pc = 0x25A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0ACu;
        // 0x25a0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A0ACu, 0x25A0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A0B4u;
label_25a0b4:
    // 0x25a0b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a0b8:
    // 0x25a0b8: 0xc089988  jal         func_226620
label_25a0bc:
    if (ctx->pc == 0x25A0BCu) {
        ctx->pc = 0x25A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0B8u;
        // 0x25a0bc: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0C0u;
        goto label_25a0c0;
    }
    ctx->pc = 0x25A0B8u;
    SET_GPR_U32(ctx, 31, 0x25A0C0u);
    ctx->pc = 0x25A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0B8u;
    // 0x25a0bc: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25A0B8u, 0x25A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0C0u;
label_25a0c0:
    // 0x25a0c0: 0xc0874fa  jal         func_21D3E8
label_25a0c4:
    if (ctx->pc == 0x25A0C4u) {
        ctx->pc = 0x25A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0C0u;
        // 0x25a0c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0C8u;
        goto label_25a0c8;
    }
    ctx->pc = 0x25A0C0u;
    SET_GPR_U32(ctx, 31, 0x25A0C8u);
    ctx->pc = 0x25A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0C0u;
    // 0x25a0c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25A0C0u, 0x25A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0C8u;
label_25a0c8:
    // 0x25a0c8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25a0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25a0cc:
    // 0x25a0cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_25a0d0:
    if (ctx->pc == 0x25A0D0u) {
        ctx->pc = 0x25A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0CCu;
        // 0x25a0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0D4u;
        goto label_25a0d4;
    }
    ctx->pc = 0x25A0CCu;
    {
        const bool branch_taken_0x25a0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0CCu;
        // 0x25a0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0cc) {
            ctx->pc = 0x25A0F8u;
            goto label_25a0f8;
        }
    }
    ctx->pc = 0x25A0D4u;
label_25a0d4:
    // 0x25a0d4: 0xc08866e  jal         func_2219B8
label_25a0d8:
    if (ctx->pc == 0x25A0D8u) {
        ctx->pc = 0x25A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0D4u;
        // 0x25a0d8: 0x24050276  addiu       $a1, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0DCu;
        goto label_25a0dc;
    }
    ctx->pc = 0x25A0D4u;
    SET_GPR_U32(ctx, 31, 0x25A0DCu);
    ctx->pc = 0x25A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0D4u;
    // 0x25a0d8: 0x24050276  addiu       $a1, $zero, 0x276 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x25A0D4u, 0x25A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0DCu;
label_25a0dc:
    // 0x25a0dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25a0e0:
    if (ctx->pc == 0x25A0E0u) {
        ctx->pc = 0x25A0E4u;
        goto label_25a0e4;
    }
    ctx->pc = 0x25A0DCu;
    {
        const bool branch_taken_0x25a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0dc) {
            ctx->pc = 0x25A0F8u;
            goto label_25a0f8;
        }
    }
    ctx->pc = 0x25A0E4u;
label_25a0e4:
    // 0x25a0e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_25a0e8:
    if (ctx->pc == 0x25A0E8u) {
        ctx->pc = 0x25A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0E4u;
        // 0x25a0e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0ECu;
        goto label_25a0ec;
    }
    ctx->pc = 0x25A0E4u;
    {
        const bool branch_taken_0x25a0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0E4u;
        // 0x25a0e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a0e4) {
            ctx->pc = 0x25A0F8u;
            goto label_25a0f8;
        }
    }
    ctx->pc = 0x25A0ECu;
label_25a0ec:
    // 0x25a0ec: 0x24050276  addiu       $a1, $zero, 0x276
    ctx->pc = 0x25a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_25a0f0:
    // 0x25a0f0: 0xc0886a8  jal         func_221AA0
label_25a0f4:
    if (ctx->pc == 0x25A0F4u) {
        ctx->pc = 0x25A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0F0u;
        // 0x25a0f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A0F8u;
        goto label_25a0f8;
    }
    ctx->pc = 0x25A0F0u;
    SET_GPR_U32(ctx, 31, 0x25A0F8u);
    ctx->pc = 0x25A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0F0u;
    // 0x25a0f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x25A0F0u, 0x25A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0F8u;
label_25a0f8:
    // 0x25a0f8: 0xc08a062  jal         func_228188
label_25a0fc:
    if (ctx->pc == 0x25A0FCu) {
        ctx->pc = 0x25A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A0F8u;
        // 0x25a0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A100u;
        goto label_25a100;
    }
    ctx->pc = 0x25A0F8u;
    SET_GPR_U32(ctx, 31, 0x25A100u);
    ctx->pc = 0x25A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0F8u;
    // 0x25a0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228188u, 0x25A0F8u, 0x25A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A100u;
label_25a100:
    // 0x25a100: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_25a104:
    if (ctx->pc == 0x25A104u) {
        ctx->pc = 0x25A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A100u;
        // 0x25a104: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A108u;
        goto label_25a108;
    }
    ctx->pc = 0x25A100u;
    {
        const bool branch_taken_0x25a100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a100) {
            ctx->pc = 0x25A104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A100u;
            // 0x25a104: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A11Cu;
            goto label_25a11c;
        }
    }
    ctx->pc = 0x25A108u;
label_25a108:
    // 0x25a108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25a10c:
    // 0x25a10c: 0xc097ac0  jal         func_25EB00
label_25a110:
    if (ctx->pc == 0x25A110u) {
        ctx->pc = 0x25A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A10Cu;
        // 0x25a110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A114u;
        goto label_25a114;
    }
    ctx->pc = 0x25A10Cu;
    SET_GPR_U32(ctx, 31, 0x25A114u);
    ctx->pc = 0x25A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A10Cu;
    // 0x25a110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB00u, 0x25A10Cu, 0x25A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A114u;
label_25a114:
    // 0x25a114: 0x1000000a  b           . + 4 + (0xA << 2)
label_25a118:
    if (ctx->pc == 0x25A118u) {
        ctx->pc = 0x25A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A114u;
        // 0x25a118: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A11Cu;
        goto label_25a11c;
    }
    ctx->pc = 0x25A114u;
    {
        const bool branch_taken_0x25a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A114u;
        // 0x25a118: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a114) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x25A11Cu;
label_25a11c:
    // 0x25a11c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25a120:
    // 0x25a120: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_25a124:
    if (ctx->pc == 0x25A124u) {
        ctx->pc = 0x25A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A120u;
        // 0x25a124: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A128u;
        goto label_25a128;
    }
    ctx->pc = 0x25A120u;
    {
        const bool branch_taken_0x25a120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A120u;
        // 0x25a124: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a120) {
            ctx->pc = 0x25A130u;
            goto label_25a130;
        }
    }
    ctx->pc = 0x25A128u;
label_25a128:
    // 0x25a128: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_25a12c:
    if (ctx->pc == 0x25A12Cu) {
        ctx->pc = 0x25A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A128u;
        // 0x25a12c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A130u;
        goto label_25a130;
    }
    ctx->pc = 0x25A128u;
    {
        const bool branch_taken_0x25a128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A128u;
        // 0x25a12c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a128) {
            ctx->pc = 0x25A140u;
            goto label_25a140;
        }
    }
    ctx->pc = 0x25A130u;
label_25a130:
    // 0x25a130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a134:
    // 0x25a134: 0xc097bb8  jal         func_25EEE0
label_25a138:
    if (ctx->pc == 0x25A138u) {
        ctx->pc = 0x25A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A134u;
        // 0x25a138: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A13Cu;
        goto label_25a13c;
    }
    ctx->pc = 0x25A134u;
    SET_GPR_U32(ctx, 31, 0x25A13Cu);
    ctx->pc = 0x25A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A134u;
    // 0x25a138: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x25A134u, 0x25A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A13Cu;
label_25a13c:
    // 0x25a13c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x25a13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25a140:
    // 0x25a140: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x25a140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25a144:
    // 0x25a144: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25a144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25a148:
    // 0x25a148: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25a148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25a14c:
    // 0x25a14c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25a14cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25a150:
    // 0x25a150: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x25a150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25a154:
    // 0x25a154: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x25a154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25a158:
    // 0x25a158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25a15c:
    // 0x25a15c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x25a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25a160:
    // 0x25a160: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x25a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25a164:
    // 0x25a164: 0x3e00008  jr          $ra
label_25a168:
    if (ctx->pc == 0x25A168u) {
        ctx->pc = 0x25A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A164u;
        // 0x25a168: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A16Cu;
        goto label_25a16c;
    }
    ctx->pc = 0x25A164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A164u;
        // 0x25a168: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A16Cu;
label_25a16c:
    // 0x25a16c: 0x0  nop
    ctx->pc = 0x25a16cu;
    // NOP
label_25a170:
    // 0x25a170: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_25a174:
    // 0x25a174: 0x0  nop
    ctx->pc = 0x25a174u;
    // NOP
    ctx->pc = 0x25a178u;
}
