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

// Function: sub_00109588
// Address: 0x109588 - 0x109fb8
void sub_00109588_0x109588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109588_0x109588");
#endif

    switch (ctx->pc) {
        case 0x109588u: goto label_109588;
        case 0x10958cu: goto label_10958c;
        case 0x109590u: goto label_109590;
        case 0x109594u: goto label_109594;
        case 0x109598u: goto label_109598;
        case 0x10959cu: goto label_10959c;
        case 0x1095a0u: goto label_1095a0;
        case 0x1095a4u: goto label_1095a4;
        case 0x1095a8u: goto label_1095a8;
        case 0x1095acu: goto label_1095ac;
        case 0x1095b0u: goto label_1095b0;
        case 0x1095b4u: goto label_1095b4;
        case 0x1095b8u: goto label_1095b8;
        case 0x1095bcu: goto label_1095bc;
        case 0x1095c0u: goto label_1095c0;
        case 0x1095c4u: goto label_1095c4;
        case 0x1095c8u: goto label_1095c8;
        case 0x1095ccu: goto label_1095cc;
        case 0x1095d0u: goto label_1095d0;
        case 0x1095d4u: goto label_1095d4;
        case 0x1095d8u: goto label_1095d8;
        case 0x1095dcu: goto label_1095dc;
        case 0x1095e0u: goto label_1095e0;
        case 0x1095e4u: goto label_1095e4;
        case 0x1095e8u: goto label_1095e8;
        case 0x1095ecu: goto label_1095ec;
        case 0x1095f0u: goto label_1095f0;
        case 0x1095f4u: goto label_1095f4;
        case 0x1095f8u: goto label_1095f8;
        case 0x1095fcu: goto label_1095fc;
        case 0x109600u: goto label_109600;
        case 0x109604u: goto label_109604;
        case 0x109608u: goto label_109608;
        case 0x10960cu: goto label_10960c;
        case 0x109610u: goto label_109610;
        case 0x109614u: goto label_109614;
        case 0x109618u: goto label_109618;
        case 0x10961cu: goto label_10961c;
        case 0x109620u: goto label_109620;
        case 0x109624u: goto label_109624;
        case 0x109628u: goto label_109628;
        case 0x10962cu: goto label_10962c;
        case 0x109630u: goto label_109630;
        case 0x109634u: goto label_109634;
        case 0x109638u: goto label_109638;
        case 0x10963cu: goto label_10963c;
        case 0x109640u: goto label_109640;
        case 0x109644u: goto label_109644;
        case 0x109648u: goto label_109648;
        case 0x10964cu: goto label_10964c;
        case 0x109650u: goto label_109650;
        case 0x109654u: goto label_109654;
        case 0x109658u: goto label_109658;
        case 0x10965cu: goto label_10965c;
        case 0x109660u: goto label_109660;
        case 0x109664u: goto label_109664;
        case 0x109668u: goto label_109668;
        case 0x10966cu: goto label_10966c;
        case 0x109670u: goto label_109670;
        case 0x109674u: goto label_109674;
        case 0x109678u: goto label_109678;
        case 0x10967cu: goto label_10967c;
        case 0x109680u: goto label_109680;
        case 0x109684u: goto label_109684;
        case 0x109688u: goto label_109688;
        case 0x10968cu: goto label_10968c;
        case 0x109690u: goto label_109690;
        case 0x109694u: goto label_109694;
        case 0x109698u: goto label_109698;
        case 0x10969cu: goto label_10969c;
        case 0x1096a0u: goto label_1096a0;
        case 0x1096a4u: goto label_1096a4;
        case 0x1096a8u: goto label_1096a8;
        case 0x1096acu: goto label_1096ac;
        case 0x1096b0u: goto label_1096b0;
        case 0x1096b4u: goto label_1096b4;
        case 0x1096b8u: goto label_1096b8;
        case 0x1096bcu: goto label_1096bc;
        case 0x1096c0u: goto label_1096c0;
        case 0x1096c4u: goto label_1096c4;
        case 0x1096c8u: goto label_1096c8;
        case 0x1096ccu: goto label_1096cc;
        case 0x1096d0u: goto label_1096d0;
        case 0x1096d4u: goto label_1096d4;
        case 0x1096d8u: goto label_1096d8;
        case 0x1096dcu: goto label_1096dc;
        case 0x1096e0u: goto label_1096e0;
        case 0x1096e4u: goto label_1096e4;
        case 0x1096e8u: goto label_1096e8;
        case 0x1096ecu: goto label_1096ec;
        case 0x1096f0u: goto label_1096f0;
        case 0x1096f4u: goto label_1096f4;
        case 0x1096f8u: goto label_1096f8;
        case 0x1096fcu: goto label_1096fc;
        case 0x109700u: goto label_109700;
        case 0x109704u: goto label_109704;
        case 0x109708u: goto label_109708;
        case 0x10970cu: goto label_10970c;
        case 0x109710u: goto label_109710;
        case 0x109714u: goto label_109714;
        case 0x109718u: goto label_109718;
        case 0x10971cu: goto label_10971c;
        case 0x109720u: goto label_109720;
        case 0x109724u: goto label_109724;
        case 0x109728u: goto label_109728;
        case 0x10972cu: goto label_10972c;
        case 0x109730u: goto label_109730;
        case 0x109734u: goto label_109734;
        case 0x109738u: goto label_109738;
        case 0x10973cu: goto label_10973c;
        case 0x109740u: goto label_109740;
        case 0x109744u: goto label_109744;
        case 0x109748u: goto label_109748;
        case 0x10974cu: goto label_10974c;
        case 0x109750u: goto label_109750;
        case 0x109754u: goto label_109754;
        case 0x109758u: goto label_109758;
        case 0x10975cu: goto label_10975c;
        case 0x109760u: goto label_109760;
        case 0x109764u: goto label_109764;
        case 0x109768u: goto label_109768;
        case 0x10976cu: goto label_10976c;
        case 0x109770u: goto label_109770;
        case 0x109774u: goto label_109774;
        case 0x109778u: goto label_109778;
        case 0x10977cu: goto label_10977c;
        case 0x109780u: goto label_109780;
        case 0x109784u: goto label_109784;
        case 0x109788u: goto label_109788;
        case 0x10978cu: goto label_10978c;
        case 0x109790u: goto label_109790;
        case 0x109794u: goto label_109794;
        case 0x109798u: goto label_109798;
        case 0x10979cu: goto label_10979c;
        case 0x1097a0u: goto label_1097a0;
        case 0x1097a4u: goto label_1097a4;
        case 0x1097a8u: goto label_1097a8;
        case 0x1097acu: goto label_1097ac;
        case 0x1097b0u: goto label_1097b0;
        case 0x1097b4u: goto label_1097b4;
        case 0x1097b8u: goto label_1097b8;
        case 0x1097bcu: goto label_1097bc;
        case 0x1097c0u: goto label_1097c0;
        case 0x1097c4u: goto label_1097c4;
        case 0x1097c8u: goto label_1097c8;
        case 0x1097ccu: goto label_1097cc;
        case 0x1097d0u: goto label_1097d0;
        case 0x1097d4u: goto label_1097d4;
        case 0x1097d8u: goto label_1097d8;
        case 0x1097dcu: goto label_1097dc;
        case 0x1097e0u: goto label_1097e0;
        case 0x1097e4u: goto label_1097e4;
        case 0x1097e8u: goto label_1097e8;
        case 0x1097ecu: goto label_1097ec;
        case 0x1097f0u: goto label_1097f0;
        case 0x1097f4u: goto label_1097f4;
        case 0x1097f8u: goto label_1097f8;
        case 0x1097fcu: goto label_1097fc;
        case 0x109800u: goto label_109800;
        case 0x109804u: goto label_109804;
        case 0x109808u: goto label_109808;
        case 0x10980cu: goto label_10980c;
        case 0x109810u: goto label_109810;
        case 0x109814u: goto label_109814;
        case 0x109818u: goto label_109818;
        case 0x10981cu: goto label_10981c;
        case 0x109820u: goto label_109820;
        case 0x109824u: goto label_109824;
        case 0x109828u: goto label_109828;
        case 0x10982cu: goto label_10982c;
        case 0x109830u: goto label_109830;
        case 0x109834u: goto label_109834;
        case 0x109838u: goto label_109838;
        case 0x10983cu: goto label_10983c;
        case 0x109840u: goto label_109840;
        case 0x109844u: goto label_109844;
        case 0x109848u: goto label_109848;
        case 0x10984cu: goto label_10984c;
        case 0x109850u: goto label_109850;
        case 0x109854u: goto label_109854;
        case 0x109858u: goto label_109858;
        case 0x10985cu: goto label_10985c;
        case 0x109860u: goto label_109860;
        case 0x109864u: goto label_109864;
        case 0x109868u: goto label_109868;
        case 0x10986cu: goto label_10986c;
        case 0x109870u: goto label_109870;
        case 0x109874u: goto label_109874;
        case 0x109878u: goto label_109878;
        case 0x10987cu: goto label_10987c;
        case 0x109880u: goto label_109880;
        case 0x109884u: goto label_109884;
        case 0x109888u: goto label_109888;
        case 0x10988cu: goto label_10988c;
        case 0x109890u: goto label_109890;
        case 0x109894u: goto label_109894;
        case 0x109898u: goto label_109898;
        case 0x10989cu: goto label_10989c;
        case 0x1098a0u: goto label_1098a0;
        case 0x1098a4u: goto label_1098a4;
        case 0x1098a8u: goto label_1098a8;
        case 0x1098acu: goto label_1098ac;
        case 0x1098b0u: goto label_1098b0;
        case 0x1098b4u: goto label_1098b4;
        case 0x1098b8u: goto label_1098b8;
        case 0x1098bcu: goto label_1098bc;
        case 0x1098c0u: goto label_1098c0;
        case 0x1098c4u: goto label_1098c4;
        case 0x1098c8u: goto label_1098c8;
        case 0x1098ccu: goto label_1098cc;
        case 0x1098d0u: goto label_1098d0;
        case 0x1098d4u: goto label_1098d4;
        case 0x1098d8u: goto label_1098d8;
        case 0x1098dcu: goto label_1098dc;
        case 0x1098e0u: goto label_1098e0;
        case 0x1098e4u: goto label_1098e4;
        case 0x1098e8u: goto label_1098e8;
        case 0x1098ecu: goto label_1098ec;
        case 0x1098f0u: goto label_1098f0;
        case 0x1098f4u: goto label_1098f4;
        case 0x1098f8u: goto label_1098f8;
        case 0x1098fcu: goto label_1098fc;
        case 0x109900u: goto label_109900;
        case 0x109904u: goto label_109904;
        case 0x109908u: goto label_109908;
        case 0x10990cu: goto label_10990c;
        case 0x109910u: goto label_109910;
        case 0x109914u: goto label_109914;
        case 0x109918u: goto label_109918;
        case 0x10991cu: goto label_10991c;
        case 0x109920u: goto label_109920;
        case 0x109924u: goto label_109924;
        case 0x109928u: goto label_109928;
        case 0x10992cu: goto label_10992c;
        case 0x109930u: goto label_109930;
        case 0x109934u: goto label_109934;
        case 0x109938u: goto label_109938;
        case 0x10993cu: goto label_10993c;
        case 0x109940u: goto label_109940;
        case 0x109944u: goto label_109944;
        case 0x109948u: goto label_109948;
        case 0x10994cu: goto label_10994c;
        case 0x109950u: goto label_109950;
        case 0x109954u: goto label_109954;
        case 0x109958u: goto label_109958;
        case 0x10995cu: goto label_10995c;
        case 0x109960u: goto label_109960;
        case 0x109964u: goto label_109964;
        case 0x109968u: goto label_109968;
        case 0x10996cu: goto label_10996c;
        case 0x109970u: goto label_109970;
        case 0x109974u: goto label_109974;
        case 0x109978u: goto label_109978;
        case 0x10997cu: goto label_10997c;
        case 0x109980u: goto label_109980;
        case 0x109984u: goto label_109984;
        case 0x109988u: goto label_109988;
        case 0x10998cu: goto label_10998c;
        case 0x109990u: goto label_109990;
        case 0x109994u: goto label_109994;
        case 0x109998u: goto label_109998;
        case 0x10999cu: goto label_10999c;
        case 0x1099a0u: goto label_1099a0;
        case 0x1099a4u: goto label_1099a4;
        case 0x1099a8u: goto label_1099a8;
        case 0x1099acu: goto label_1099ac;
        case 0x1099b0u: goto label_1099b0;
        case 0x1099b4u: goto label_1099b4;
        case 0x1099b8u: goto label_1099b8;
        case 0x1099bcu: goto label_1099bc;
        case 0x1099c0u: goto label_1099c0;
        case 0x1099c4u: goto label_1099c4;
        case 0x1099c8u: goto label_1099c8;
        case 0x1099ccu: goto label_1099cc;
        case 0x1099d0u: goto label_1099d0;
        case 0x1099d4u: goto label_1099d4;
        case 0x1099d8u: goto label_1099d8;
        case 0x1099dcu: goto label_1099dc;
        case 0x1099e0u: goto label_1099e0;
        case 0x1099e4u: goto label_1099e4;
        case 0x1099e8u: goto label_1099e8;
        case 0x1099ecu: goto label_1099ec;
        case 0x1099f0u: goto label_1099f0;
        case 0x1099f4u: goto label_1099f4;
        case 0x1099f8u: goto label_1099f8;
        case 0x1099fcu: goto label_1099fc;
        case 0x109a00u: goto label_109a00;
        case 0x109a04u: goto label_109a04;
        case 0x109a08u: goto label_109a08;
        case 0x109a0cu: goto label_109a0c;
        case 0x109a10u: goto label_109a10;
        case 0x109a14u: goto label_109a14;
        case 0x109a18u: goto label_109a18;
        case 0x109a1cu: goto label_109a1c;
        case 0x109a20u: goto label_109a20;
        case 0x109a24u: goto label_109a24;
        case 0x109a28u: goto label_109a28;
        case 0x109a2cu: goto label_109a2c;
        case 0x109a30u: goto label_109a30;
        case 0x109a34u: goto label_109a34;
        case 0x109a38u: goto label_109a38;
        case 0x109a3cu: goto label_109a3c;
        case 0x109a40u: goto label_109a40;
        case 0x109a44u: goto label_109a44;
        case 0x109a48u: goto label_109a48;
        case 0x109a4cu: goto label_109a4c;
        case 0x109a50u: goto label_109a50;
        case 0x109a54u: goto label_109a54;
        case 0x109a58u: goto label_109a58;
        case 0x109a5cu: goto label_109a5c;
        case 0x109a60u: goto label_109a60;
        case 0x109a64u: goto label_109a64;
        case 0x109a68u: goto label_109a68;
        case 0x109a6cu: goto label_109a6c;
        case 0x109a70u: goto label_109a70;
        case 0x109a74u: goto label_109a74;
        case 0x109a78u: goto label_109a78;
        case 0x109a7cu: goto label_109a7c;
        case 0x109a80u: goto label_109a80;
        case 0x109a84u: goto label_109a84;
        case 0x109a88u: goto label_109a88;
        case 0x109a8cu: goto label_109a8c;
        case 0x109a90u: goto label_109a90;
        case 0x109a94u: goto label_109a94;
        case 0x109a98u: goto label_109a98;
        case 0x109a9cu: goto label_109a9c;
        case 0x109aa0u: goto label_109aa0;
        case 0x109aa4u: goto label_109aa4;
        case 0x109aa8u: goto label_109aa8;
        case 0x109aacu: goto label_109aac;
        case 0x109ab0u: goto label_109ab0;
        case 0x109ab4u: goto label_109ab4;
        case 0x109ab8u: goto label_109ab8;
        case 0x109abcu: goto label_109abc;
        case 0x109ac0u: goto label_109ac0;
        case 0x109ac4u: goto label_109ac4;
        case 0x109ac8u: goto label_109ac8;
        case 0x109accu: goto label_109acc;
        case 0x109ad0u: goto label_109ad0;
        case 0x109ad4u: goto label_109ad4;
        case 0x109ad8u: goto label_109ad8;
        case 0x109adcu: goto label_109adc;
        case 0x109ae0u: goto label_109ae0;
        case 0x109ae4u: goto label_109ae4;
        case 0x109ae8u: goto label_109ae8;
        case 0x109aecu: goto label_109aec;
        case 0x109af0u: goto label_109af0;
        case 0x109af4u: goto label_109af4;
        case 0x109af8u: goto label_109af8;
        case 0x109afcu: goto label_109afc;
        case 0x109b00u: goto label_109b00;
        case 0x109b04u: goto label_109b04;
        case 0x109b08u: goto label_109b08;
        case 0x109b0cu: goto label_109b0c;
        case 0x109b10u: goto label_109b10;
        case 0x109b14u: goto label_109b14;
        case 0x109b18u: goto label_109b18;
        case 0x109b1cu: goto label_109b1c;
        case 0x109b20u: goto label_109b20;
        case 0x109b24u: goto label_109b24;
        case 0x109b28u: goto label_109b28;
        case 0x109b2cu: goto label_109b2c;
        case 0x109b30u: goto label_109b30;
        case 0x109b34u: goto label_109b34;
        case 0x109b38u: goto label_109b38;
        case 0x109b3cu: goto label_109b3c;
        case 0x109b40u: goto label_109b40;
        case 0x109b44u: goto label_109b44;
        case 0x109b48u: goto label_109b48;
        case 0x109b4cu: goto label_109b4c;
        case 0x109b50u: goto label_109b50;
        case 0x109b54u: goto label_109b54;
        case 0x109b58u: goto label_109b58;
        case 0x109b5cu: goto label_109b5c;
        case 0x109b60u: goto label_109b60;
        case 0x109b64u: goto label_109b64;
        case 0x109b68u: goto label_109b68;
        case 0x109b6cu: goto label_109b6c;
        case 0x109b70u: goto label_109b70;
        case 0x109b74u: goto label_109b74;
        case 0x109b78u: goto label_109b78;
        case 0x109b7cu: goto label_109b7c;
        case 0x109b80u: goto label_109b80;
        case 0x109b84u: goto label_109b84;
        case 0x109b88u: goto label_109b88;
        case 0x109b8cu: goto label_109b8c;
        case 0x109b90u: goto label_109b90;
        case 0x109b94u: goto label_109b94;
        case 0x109b98u: goto label_109b98;
        case 0x109b9cu: goto label_109b9c;
        case 0x109ba0u: goto label_109ba0;
        case 0x109ba4u: goto label_109ba4;
        case 0x109ba8u: goto label_109ba8;
        case 0x109bacu: goto label_109bac;
        case 0x109bb0u: goto label_109bb0;
        case 0x109bb4u: goto label_109bb4;
        case 0x109bb8u: goto label_109bb8;
        case 0x109bbcu: goto label_109bbc;
        case 0x109bc0u: goto label_109bc0;
        case 0x109bc4u: goto label_109bc4;
        case 0x109bc8u: goto label_109bc8;
        case 0x109bccu: goto label_109bcc;
        case 0x109bd0u: goto label_109bd0;
        case 0x109bd4u: goto label_109bd4;
        case 0x109bd8u: goto label_109bd8;
        case 0x109bdcu: goto label_109bdc;
        case 0x109be0u: goto label_109be0;
        case 0x109be4u: goto label_109be4;
        case 0x109be8u: goto label_109be8;
        case 0x109becu: goto label_109bec;
        case 0x109bf0u: goto label_109bf0;
        case 0x109bf4u: goto label_109bf4;
        case 0x109bf8u: goto label_109bf8;
        case 0x109bfcu: goto label_109bfc;
        case 0x109c00u: goto label_109c00;
        case 0x109c04u: goto label_109c04;
        case 0x109c08u: goto label_109c08;
        case 0x109c0cu: goto label_109c0c;
        case 0x109c10u: goto label_109c10;
        case 0x109c14u: goto label_109c14;
        case 0x109c18u: goto label_109c18;
        case 0x109c1cu: goto label_109c1c;
        case 0x109c20u: goto label_109c20;
        case 0x109c24u: goto label_109c24;
        case 0x109c28u: goto label_109c28;
        case 0x109c2cu: goto label_109c2c;
        case 0x109c30u: goto label_109c30;
        case 0x109c34u: goto label_109c34;
        case 0x109c38u: goto label_109c38;
        case 0x109c3cu: goto label_109c3c;
        case 0x109c40u: goto label_109c40;
        case 0x109c44u: goto label_109c44;
        case 0x109c48u: goto label_109c48;
        case 0x109c4cu: goto label_109c4c;
        case 0x109c50u: goto label_109c50;
        case 0x109c54u: goto label_109c54;
        case 0x109c58u: goto label_109c58;
        case 0x109c5cu: goto label_109c5c;
        case 0x109c60u: goto label_109c60;
        case 0x109c64u: goto label_109c64;
        case 0x109c68u: goto label_109c68;
        case 0x109c6cu: goto label_109c6c;
        case 0x109c70u: goto label_109c70;
        case 0x109c74u: goto label_109c74;
        case 0x109c78u: goto label_109c78;
        case 0x109c7cu: goto label_109c7c;
        case 0x109c80u: goto label_109c80;
        case 0x109c84u: goto label_109c84;
        case 0x109c88u: goto label_109c88;
        case 0x109c8cu: goto label_109c8c;
        case 0x109c90u: goto label_109c90;
        case 0x109c94u: goto label_109c94;
        case 0x109c98u: goto label_109c98;
        case 0x109c9cu: goto label_109c9c;
        case 0x109ca0u: goto label_109ca0;
        case 0x109ca4u: goto label_109ca4;
        case 0x109ca8u: goto label_109ca8;
        case 0x109cacu: goto label_109cac;
        case 0x109cb0u: goto label_109cb0;
        case 0x109cb4u: goto label_109cb4;
        case 0x109cb8u: goto label_109cb8;
        case 0x109cbcu: goto label_109cbc;
        case 0x109cc0u: goto label_109cc0;
        case 0x109cc4u: goto label_109cc4;
        case 0x109cc8u: goto label_109cc8;
        case 0x109cccu: goto label_109ccc;
        case 0x109cd0u: goto label_109cd0;
        case 0x109cd4u: goto label_109cd4;
        case 0x109cd8u: goto label_109cd8;
        case 0x109cdcu: goto label_109cdc;
        case 0x109ce0u: goto label_109ce0;
        case 0x109ce4u: goto label_109ce4;
        case 0x109ce8u: goto label_109ce8;
        case 0x109cecu: goto label_109cec;
        case 0x109cf0u: goto label_109cf0;
        case 0x109cf4u: goto label_109cf4;
        case 0x109cf8u: goto label_109cf8;
        case 0x109cfcu: goto label_109cfc;
        case 0x109d00u: goto label_109d00;
        case 0x109d04u: goto label_109d04;
        case 0x109d08u: goto label_109d08;
        case 0x109d0cu: goto label_109d0c;
        case 0x109d10u: goto label_109d10;
        case 0x109d14u: goto label_109d14;
        case 0x109d18u: goto label_109d18;
        case 0x109d1cu: goto label_109d1c;
        case 0x109d20u: goto label_109d20;
        case 0x109d24u: goto label_109d24;
        case 0x109d28u: goto label_109d28;
        case 0x109d2cu: goto label_109d2c;
        case 0x109d30u: goto label_109d30;
        case 0x109d34u: goto label_109d34;
        case 0x109d38u: goto label_109d38;
        case 0x109d3cu: goto label_109d3c;
        case 0x109d40u: goto label_109d40;
        case 0x109d44u: goto label_109d44;
        case 0x109d48u: goto label_109d48;
        case 0x109d4cu: goto label_109d4c;
        case 0x109d50u: goto label_109d50;
        case 0x109d54u: goto label_109d54;
        case 0x109d58u: goto label_109d58;
        case 0x109d5cu: goto label_109d5c;
        case 0x109d60u: goto label_109d60;
        case 0x109d64u: goto label_109d64;
        case 0x109d68u: goto label_109d68;
        case 0x109d6cu: goto label_109d6c;
        case 0x109d70u: goto label_109d70;
        case 0x109d74u: goto label_109d74;
        case 0x109d78u: goto label_109d78;
        case 0x109d7cu: goto label_109d7c;
        case 0x109d80u: goto label_109d80;
        case 0x109d84u: goto label_109d84;
        case 0x109d88u: goto label_109d88;
        case 0x109d8cu: goto label_109d8c;
        case 0x109d90u: goto label_109d90;
        case 0x109d94u: goto label_109d94;
        case 0x109d98u: goto label_109d98;
        case 0x109d9cu: goto label_109d9c;
        case 0x109da0u: goto label_109da0;
        case 0x109da4u: goto label_109da4;
        case 0x109da8u: goto label_109da8;
        case 0x109dacu: goto label_109dac;
        case 0x109db0u: goto label_109db0;
        case 0x109db4u: goto label_109db4;
        case 0x109db8u: goto label_109db8;
        case 0x109dbcu: goto label_109dbc;
        case 0x109dc0u: goto label_109dc0;
        case 0x109dc4u: goto label_109dc4;
        case 0x109dc8u: goto label_109dc8;
        case 0x109dccu: goto label_109dcc;
        case 0x109dd0u: goto label_109dd0;
        case 0x109dd4u: goto label_109dd4;
        case 0x109dd8u: goto label_109dd8;
        case 0x109ddcu: goto label_109ddc;
        case 0x109de0u: goto label_109de0;
        case 0x109de4u: goto label_109de4;
        case 0x109de8u: goto label_109de8;
        case 0x109decu: goto label_109dec;
        case 0x109df0u: goto label_109df0;
        case 0x109df4u: goto label_109df4;
        case 0x109df8u: goto label_109df8;
        case 0x109dfcu: goto label_109dfc;
        case 0x109e00u: goto label_109e00;
        case 0x109e04u: goto label_109e04;
        case 0x109e08u: goto label_109e08;
        case 0x109e0cu: goto label_109e0c;
        case 0x109e10u: goto label_109e10;
        case 0x109e14u: goto label_109e14;
        case 0x109e18u: goto label_109e18;
        case 0x109e1cu: goto label_109e1c;
        case 0x109e20u: goto label_109e20;
        case 0x109e24u: goto label_109e24;
        case 0x109e28u: goto label_109e28;
        case 0x109e2cu: goto label_109e2c;
        case 0x109e30u: goto label_109e30;
        case 0x109e34u: goto label_109e34;
        case 0x109e38u: goto label_109e38;
        case 0x109e3cu: goto label_109e3c;
        case 0x109e40u: goto label_109e40;
        case 0x109e44u: goto label_109e44;
        case 0x109e48u: goto label_109e48;
        case 0x109e4cu: goto label_109e4c;
        case 0x109e50u: goto label_109e50;
        case 0x109e54u: goto label_109e54;
        case 0x109e58u: goto label_109e58;
        case 0x109e5cu: goto label_109e5c;
        case 0x109e60u: goto label_109e60;
        case 0x109e64u: goto label_109e64;
        case 0x109e68u: goto label_109e68;
        case 0x109e6cu: goto label_109e6c;
        case 0x109e70u: goto label_109e70;
        case 0x109e74u: goto label_109e74;
        case 0x109e78u: goto label_109e78;
        case 0x109e7cu: goto label_109e7c;
        case 0x109e80u: goto label_109e80;
        case 0x109e84u: goto label_109e84;
        case 0x109e88u: goto label_109e88;
        case 0x109e8cu: goto label_109e8c;
        case 0x109e90u: goto label_109e90;
        case 0x109e94u: goto label_109e94;
        case 0x109e98u: goto label_109e98;
        case 0x109e9cu: goto label_109e9c;
        case 0x109ea0u: goto label_109ea0;
        case 0x109ea4u: goto label_109ea4;
        case 0x109ea8u: goto label_109ea8;
        case 0x109eacu: goto label_109eac;
        case 0x109eb0u: goto label_109eb0;
        case 0x109eb4u: goto label_109eb4;
        case 0x109eb8u: goto label_109eb8;
        case 0x109ebcu: goto label_109ebc;
        case 0x109ec0u: goto label_109ec0;
        case 0x109ec4u: goto label_109ec4;
        case 0x109ec8u: goto label_109ec8;
        case 0x109eccu: goto label_109ecc;
        case 0x109ed0u: goto label_109ed0;
        case 0x109ed4u: goto label_109ed4;
        case 0x109ed8u: goto label_109ed8;
        case 0x109edcu: goto label_109edc;
        case 0x109ee0u: goto label_109ee0;
        case 0x109ee4u: goto label_109ee4;
        case 0x109ee8u: goto label_109ee8;
        case 0x109eecu: goto label_109eec;
        case 0x109ef0u: goto label_109ef0;
        case 0x109ef4u: goto label_109ef4;
        case 0x109ef8u: goto label_109ef8;
        case 0x109efcu: goto label_109efc;
        case 0x109f00u: goto label_109f00;
        case 0x109f04u: goto label_109f04;
        case 0x109f08u: goto label_109f08;
        case 0x109f0cu: goto label_109f0c;
        case 0x109f10u: goto label_109f10;
        case 0x109f14u: goto label_109f14;
        case 0x109f18u: goto label_109f18;
        case 0x109f1cu: goto label_109f1c;
        case 0x109f20u: goto label_109f20;
        case 0x109f24u: goto label_109f24;
        case 0x109f28u: goto label_109f28;
        case 0x109f2cu: goto label_109f2c;
        case 0x109f30u: goto label_109f30;
        case 0x109f34u: goto label_109f34;
        case 0x109f38u: goto label_109f38;
        case 0x109f3cu: goto label_109f3c;
        case 0x109f40u: goto label_109f40;
        case 0x109f44u: goto label_109f44;
        case 0x109f48u: goto label_109f48;
        case 0x109f4cu: goto label_109f4c;
        case 0x109f50u: goto label_109f50;
        case 0x109f54u: goto label_109f54;
        case 0x109f58u: goto label_109f58;
        case 0x109f5cu: goto label_109f5c;
        case 0x109f60u: goto label_109f60;
        case 0x109f64u: goto label_109f64;
        case 0x109f68u: goto label_109f68;
        case 0x109f6cu: goto label_109f6c;
        case 0x109f70u: goto label_109f70;
        case 0x109f74u: goto label_109f74;
        case 0x109f78u: goto label_109f78;
        case 0x109f7cu: goto label_109f7c;
        case 0x109f80u: goto label_109f80;
        case 0x109f84u: goto label_109f84;
        case 0x109f88u: goto label_109f88;
        case 0x109f8cu: goto label_109f8c;
        case 0x109f90u: goto label_109f90;
        case 0x109f94u: goto label_109f94;
        case 0x109f98u: goto label_109f98;
        case 0x109f9cu: goto label_109f9c;
        case 0x109fa0u: goto label_109fa0;
        case 0x109fa4u: goto label_109fa4;
        case 0x109fa8u: goto label_109fa8;
        case 0x109facu: goto label_109fac;
        case 0x109fb0u: goto label_109fb0;
        case 0x109fb4u: goto label_109fb4;
        default: break;
    }

    ctx->pc = 0x109588u;

label_109588:
    // 0x109588: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x109588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10958c:
    // 0x10958c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_109590:
    // 0x109590: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x109590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_109594:
    // 0x109594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109598:
    // 0x109598: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x109598u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_10959c:
    // 0x10959c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1095a0:
    // 0x1095a0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1095a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1095a4:
    // 0x1095a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1095a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1095a8:
    // 0x1095a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1095a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1095ac:
    // 0x1095ac: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1095acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1095b0:
    // 0x1095b0: 0xc10b1c6  jal         func_42C718
label_1095b4:
    if (ctx->pc == 0x1095B4u) {
        ctx->pc = 0x1095B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095B0u;
        // 0x1095b4: 0xc60c0028  lwc1        $f12, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095B8u;
        goto label_1095b8;
    }
    ctx->pc = 0x1095B0u;
    SET_GPR_U32(ctx, 31, 0x1095B8u);
    ctx->pc = 0x1095B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095B0u;
    // 0x1095b4: 0xc60c0028  lwc1        $f12, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1095B0u, 0x1095B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095B8u;
label_1095b8:
    // 0x1095b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1095b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1095bc:
    // 0x1095bc: 0xc0420dc  jal         func_108370
label_1095c0:
    if (ctx->pc == 0x1095C0u) {
        ctx->pc = 0x1095C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095BCu;
        // 0x1095c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095C4u;
        goto label_1095c4;
    }
    ctx->pc = 0x1095BCu;
    SET_GPR_U32(ctx, 31, 0x1095C4u);
    ctx->pc = 0x1095C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1095BCu;
    // 0x1095c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x1095BCu, 0x1095C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1095C4u;
label_1095c4:
    // 0x1095c4: 0xc6040024  lwc1        $f4, 0x24($s0)
    ctx->pc = 0x1095c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1095c8:
    // 0x1095c8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1095c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1095cc:
    // 0x1095cc: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x1095ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1095d0:
    // 0x1095d0: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x1095d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
label_1095d4:
    // 0x1095d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1095d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1095d8:
    // 0x1095d8: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1095d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1095dc:
    // 0x1095dc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1095dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1095e0:
    // 0x1095e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1095e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1095e4:
    // 0x1095e4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1095e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_1095e8:
    // 0x1095e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1095e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1095ec:
    // 0x1095ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1095ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1095f0:
    // 0x1095f0: 0x0  nop
    ctx->pc = 0x1095f0u;
    // NOP
label_1095f4:
    // 0x1095f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1095f8:
    if (ctx->pc == 0x1095F8u) {
        ctx->pc = 0x1095F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095F4u;
        // 0x1095f8: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095FCu;
        goto label_1095fc;
    }
    ctx->pc = 0x1095F4u;
    {
        const bool branch_taken_0x1095f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1095f4) {
            ctx->pc = 0x1095F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1095F4u;
            // 0x1095f8: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1095FCu;
            goto label_1095fc;
        }
    }
    ctx->pc = 0x1095FCu;
label_1095fc:
    // 0x1095fc: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x1095fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109600:
    // 0x109600: 0x0  nop
    ctx->pc = 0x109600u;
    // NOP
label_109604:
    // 0x109604: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_109608:
    if (ctx->pc == 0x109608u) {
        ctx->pc = 0x109608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109604u;
        // 0x109608: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10960Cu;
        goto label_10960c;
    }
    ctx->pc = 0x109604u;
    {
        const bool branch_taken_0x109604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x109604) {
            ctx->pc = 0x109608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109604u;
            // 0x109608: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10960Cu;
            goto label_10960c;
        }
    }
    ctx->pc = 0x10960Cu;
label_10960c:
    // 0x10960c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x10960cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_109610:
    // 0x109610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_109614:
    // 0x109614: 0x0  nop
    ctx->pc = 0x109614u;
    // NOP
label_109618:
    // 0x109618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x109618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10961c:
    // 0x10961c: 0x0  nop
    ctx->pc = 0x10961cu;
    // NOP
label_109620:
    // 0x109620: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_109624:
    if (ctx->pc == 0x109624u) {
        ctx->pc = 0x109624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109620u;
        // 0x109624: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109628u;
        goto label_109628;
    }
    ctx->pc = 0x109620u;
    {
        const bool branch_taken_0x109620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x109620) {
            ctx->pc = 0x109624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109620u;
            // 0x109624: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109648u;
            goto label_109648;
        }
    }
    ctx->pc = 0x109628u;
label_109628:
    // 0x109628: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x109628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_10962c:
    // 0x10962c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10962cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_109630:
    // 0x109630: 0x0  nop
    ctx->pc = 0x109630u;
    // NOP
label_109634:
    // 0x109634: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x109634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109638:
    // 0x109638: 0x0  nop
    ctx->pc = 0x109638u;
    // NOP
label_10963c:
    // 0x10963c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_109640:
    if (ctx->pc == 0x109640u) {
        ctx->pc = 0x109644u;
        goto label_109644;
    }
    ctx->pc = 0x10963Cu;
    {
        const bool branch_taken_0x10963c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10963c) {
            ctx->pc = 0x109674u;
            goto label_109674;
        }
    }
    ctx->pc = 0x109644u;
label_109644:
    // 0x109644: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x109644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109648:
    // 0x109648: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x109648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10964c:
    // 0x10964c: 0x8c6502b8  lw          $a1, 0x2B8($v1)
    ctx->pc = 0x10964cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
label_109650:
    // 0x109650: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x109650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
label_109654:
    // 0x109654: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x109654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_109658:
    // 0x109658: 0x5464001f  bnel        $v1, $a0, . + 4 + (0x1F << 2)
label_10965c:
    if (ctx->pc == 0x10965Cu) {
        ctx->pc = 0x10965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109658u;
        // 0x10965c: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109660u;
        goto label_109660;
    }
    ctx->pc = 0x109658u;
    {
        const bool branch_taken_0x109658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x109658) {
            ctx->pc = 0x10965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109658u;
            // 0x10965c: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1096D8u;
            goto label_1096d8;
        }
    }
    ctx->pc = 0x109660u;
label_109660:
    // 0x109660: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x109660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_109664:
    // 0x109664: 0xc0899aa  jal         func_2266A8
label_109668:
    if (ctx->pc == 0x109668u) {
        ctx->pc = 0x109668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109664u;
        // 0x109668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10966Cu;
        goto label_10966c;
    }
    ctx->pc = 0x109664u;
    SET_GPR_U32(ctx, 31, 0x10966Cu);
    ctx->pc = 0x109668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109664u;
    // 0x109668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x109664u, 0x10966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10966Cu;
label_10966c:
    // 0x10966c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_109670:
    if (ctx->pc == 0x109670u) {
        ctx->pc = 0x109670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10966Cu;
        // 0x109670: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109674u;
        goto label_109674;
    }
    ctx->pc = 0x10966Cu;
    {
        const bool branch_taken_0x10966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10966Cu;
        // 0x109670: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10966c) {
            ctx->pc = 0x1096D8u;
            goto label_1096d8;
        }
    }
    ctx->pc = 0x109674u;
label_109674:
    // 0x109674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x109674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_109678:
    // 0x109678: 0x0  nop
    ctx->pc = 0x109678u;
    // NOP
label_10967c:
    // 0x10967c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10967cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109680:
    // 0x109680: 0x0  nop
    ctx->pc = 0x109680u;
    // NOP
label_109684:
    // 0x109684: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_109688:
    if (ctx->pc == 0x109688u) {
        ctx->pc = 0x109688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109684u;
        // 0x109688: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10968Cu;
        goto label_10968c;
    }
    ctx->pc = 0x109684u;
    {
        const bool branch_taken_0x109684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x109684) {
            ctx->pc = 0x109688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109684u;
            // 0x109688: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1096DCu;
            goto label_1096dc;
        }
    }
    ctx->pc = 0x10968Cu;
label_10968c:
    // 0x10968c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x10968cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109690:
    // 0x109690: 0x0  nop
    ctx->pc = 0x109690u;
    // NOP
label_109694:
    // 0x109694: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_109698:
    if (ctx->pc == 0x109698u) {
        ctx->pc = 0x109698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109694u;
        // 0x109698: 0x4605a882  mul.s       $f2, $f21, $f5 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10969Cu;
        goto label_10969c;
    }
    ctx->pc = 0x109694u;
    {
        const bool branch_taken_0x109694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x109698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109694u;
        // 0x109698: 0x4605a882  mul.s       $f2, $f21, $f5 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109694) {
            ctx->pc = 0x1096B8u;
            goto label_1096b8;
        }
    }
    ctx->pc = 0x10969Cu;
label_10969c:
    // 0x10969c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x10969cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_1096a0:
    // 0x1096a0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1096a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1096a4:
    // 0x1096a4: 0x0  nop
    ctx->pc = 0x1096a4u;
    // NOP
label_1096a8:
    // 0x1096a8: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
label_1096ac:
    if (ctx->pc == 0x1096ACu) {
        ctx->pc = 0x1096ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096A8u;
        // 0x1096ac: 0xe6040028  swc1        $f4, 0x28($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096B0u;
        goto label_1096b0;
    }
    ctx->pc = 0x1096A8u;
    {
        const bool branch_taken_0x1096a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1096a8) {
            ctx->pc = 0x1096ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1096A8u;
            // 0x1096ac: 0xe6040028  swc1        $f4, 0x28($s0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1096D4u;
            goto label_1096d4;
        }
    }
    ctx->pc = 0x1096B0u;
label_1096b0:
    // 0x1096b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1096b4:
    if (ctx->pc == 0x1096B4u) {
        ctx->pc = 0x1096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096B0u;
        // 0x1096b4: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096B8u;
        goto label_1096b8;
    }
    ctx->pc = 0x1096B0u;
    {
        const bool branch_taken_0x1096b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096B0u;
        // 0x1096b4: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096b0) {
            ctx->pc = 0x1096D0u;
            goto label_1096d0;
        }
    }
    ctx->pc = 0x1096B8u;
label_1096b8:
    // 0x1096b8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1096b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1096bc:
    // 0x1096bc: 0x0  nop
    ctx->pc = 0x1096bcu;
    // NOP
label_1096c0:
    // 0x1096c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_1096c4:
    if (ctx->pc == 0x1096C4u) {
        ctx->pc = 0x1096C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C0u;
        // 0x1096c4: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096C8u;
        goto label_1096c8;
    }
    ctx->pc = 0x1096C0u;
    {
        const bool branch_taken_0x1096c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1096c0) {
            ctx->pc = 0x1096C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1096C0u;
            // 0x1096c4: 0x46021800  add.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1096D0u;
            goto label_1096d0;
        }
    }
    ctx->pc = 0x1096C8u;
label_1096c8:
    // 0x1096c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1096cc:
    if (ctx->pc == 0x1096CCu) {
        ctx->pc = 0x1096CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C8u;
        // 0x1096cc: 0xe6040028  swc1        $f4, 0x28($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096D0u;
        goto label_1096d0;
    }
    ctx->pc = 0x1096C8u;
    {
        const bool branch_taken_0x1096c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1096CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096C8u;
        // 0x1096cc: 0xe6040028  swc1        $f4, 0x28($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096c8) {
            ctx->pc = 0x1096D4u;
            goto label_1096d4;
        }
    }
    ctx->pc = 0x1096D0u;
label_1096d0:
    // 0x1096d0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1096d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1096d4:
    // 0x1096d4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1096d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1096d8:
    // 0x1096d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1096d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1096dc:
    // 0x1096dc: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1096dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_1096e0:
    // 0x1096e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1096e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1096e4:
    // 0x1096e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1096e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1096e8:
    // 0x1096e8: 0x0  nop
    ctx->pc = 0x1096e8u;
    // NOP
label_1096ec:
    // 0x1096ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1096f0:
    if (ctx->pc == 0x1096F0u) {
        ctx->pc = 0x1096F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096ECu;
        // 0x1096f0: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1096F4u;
        goto label_1096f4;
    }
    ctx->pc = 0x1096ECu;
    {
        const bool branch_taken_0x1096ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1096ec) {
            ctx->pc = 0x1096F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1096ECu;
            // 0x1096f0: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1096F4u;
            goto label_1096f4;
        }
    }
    ctx->pc = 0x1096F4u;
label_1096f4:
    // 0x1096f4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1096f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1096f8:
    // 0x1096f8: 0x0  nop
    ctx->pc = 0x1096f8u;
    // NOP
label_1096fc:
    // 0x1096fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_109700:
    if (ctx->pc == 0x109700u) {
        ctx->pc = 0x109700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096FCu;
        // 0x109700: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109704u;
        goto label_109704;
    }
    ctx->pc = 0x1096FCu;
    {
        const bool branch_taken_0x1096fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1096fc) {
            ctx->pc = 0x109700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1096FCu;
            // 0x109700: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x109704u;
            goto label_109704;
        }
    }
    ctx->pc = 0x109704u;
label_109704:
    // 0x109704: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x109704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_109708:
    // 0x109708: 0xc10b1c6  jal         func_42C718
label_10970c:
    if (ctx->pc == 0x10970Cu) {
        ctx->pc = 0x10970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109708u;
        // 0x10970c: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109710u;
        goto label_109710;
    }
    ctx->pc = 0x109708u;
    SET_GPR_U32(ctx, 31, 0x109710u);
    ctx->pc = 0x10970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109708u;
    // 0x10970c: 0xe6010028  swc1        $f1, 0x28($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x109708u, 0x109710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109710u;
label_109710:
    // 0x109710: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109714:
    // 0x109714: 0x122601ee  beq         $s1, $a2, . + 4 + (0x1EE << 2)
label_109718:
    if (ctx->pc == 0x109718u) {
        ctx->pc = 0x109718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109714u;
        // 0x109718: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10971Cu;
        goto label_10971c;
    }
    ctx->pc = 0x109714u;
    {
        const bool branch_taken_0x109714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x109718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109714u;
        // 0x109718: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109714) {
            ctx->pc = 0x109ED0u;
            goto label_109ed0;
        }
    }
    ctx->pc = 0x10971Cu;
label_10971c:
    // 0x10971c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x10971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_109720:
    // 0x109720: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_109724:
    // 0x109724: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x109724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_109728:
    // 0x109728: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x109728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_10972c:
    // 0x10972c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x10972cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109730:
    // 0x109730: 0x1620007a  bnez        $s1, . + 4 + (0x7A << 2)
label_109734:
    if (ctx->pc == 0x109734u) {
        ctx->pc = 0x109734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109730u;
        // 0x109734: 0x449021  addu        $s2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109738u;
        goto label_109738;
    }
    ctx->pc = 0x109730u;
    {
        const bool branch_taken_0x109730 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x109734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109730u;
        // 0x109734: 0x449021  addu        $s2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109730) {
            ctx->pc = 0x10991Cu;
            goto label_10991c;
        }
    }
    ctx->pc = 0x109738u;
label_109738:
    // 0x109738: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x109738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_10973c:
    // 0x10973c: 0x14c20078  bne         $a2, $v0, . + 4 + (0x78 << 2)
label_109740:
    if (ctx->pc == 0x109740u) {
        ctx->pc = 0x109744u;
        goto label_109744;
    }
    ctx->pc = 0x10973Cu;
    {
        const bool branch_taken_0x10973c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x10973c) {
            ctx->pc = 0x109920u;
            goto label_109920;
        }
    }
    ctx->pc = 0x109744u;
label_109744:
    // 0x109744: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x109744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109748:
    // 0x109748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x109748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10974c:
    // 0x10974c: 0xc05d448  jal         func_175120
label_109750:
    if (ctx->pc == 0x109750u) {
        ctx->pc = 0x109750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10974Cu;
        // 0x109750: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109754u;
        goto label_109754;
    }
    ctx->pc = 0x10974Cu;
    SET_GPR_U32(ctx, 31, 0x109754u);
    ctx->pc = 0x109750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10974Cu;
    // 0x109750: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10974Cu, 0x109754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109754u;
label_109754:
    // 0x109754: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x109754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109758:
    // 0x109758: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x109758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10975c:
    // 0x10975c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x10975cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109760:
    // 0x109760: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_109764:
    // 0x109764: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109768:
    // 0x109768: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_10976c:
    // 0x10976c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_109770:
    if (ctx->pc == 0x109770u) {
        ctx->pc = 0x109770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10976Cu;
        // 0x109770: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109774u;
        goto label_109774;
    }
    ctx->pc = 0x10976Cu;
    {
        const bool branch_taken_0x10976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10976Cu;
        // 0x109770: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10976c) {
            ctx->pc = 0x1097CCu;
            goto label_1097cc;
        }
    }
    ctx->pc = 0x109774u;
label_109774:
    // 0x109774: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109778:
    // 0x109778: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x109778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10977c:
    // 0x10977c: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x10977cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109780:
    // 0x109780: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x109780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109784:
    // 0x109784: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x109784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109788:
    // 0x109788: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x109788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_10978c:
    // 0x10978c: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x10978cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109790:
    // 0x109790: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x109790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109794:
    // 0x109794: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x109794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109798:
    // 0x109798: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x109798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10979c:
    // 0x10979c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x10979cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1097a0:
    // 0x1097a0: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x1097a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1097a4:
    // 0x1097a4: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x1097a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1097a8:
    // 0x1097a8: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x1097a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1097ac:
    // 0x1097ac: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x1097acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1097b0:
    // 0x1097b0: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x1097b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1097b4:
    // 0x1097b4: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x1097b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1097b8:
    // 0x1097b8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1097b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1097bc:
    // 0x1097bc: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_1097c0:
    if (ctx->pc == 0x1097C0u) {
        ctx->pc = 0x1097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097BCu;
        // 0x1097c0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097C4u;
        goto label_1097c4;
    }
    ctx->pc = 0x1097BCu;
    {
        const bool branch_taken_0x1097bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097BCu;
        // 0x1097c0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097bc) {
            ctx->pc = 0x109778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109778;
        }
    }
    ctx->pc = 0x1097C4u;
label_1097c4:
    // 0x1097c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1097c8:
    if (ctx->pc == 0x1097C8u) {
        ctx->pc = 0x1097CCu;
        goto label_1097cc;
    }
    ctx->pc = 0x1097C4u;
    {
        const bool branch_taken_0x1097c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1097c4) {
            ctx->pc = 0x1097FCu;
            goto label_1097fc;
        }
    }
    ctx->pc = 0x1097CCu;
label_1097cc:
    // 0x1097cc: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x1097ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1097d0:
    // 0x1097d0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1097d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1097d4:
    // 0x1097d4: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x1097d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_1097d8:
    // 0x1097d8: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x1097d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_1097dc:
    // 0x1097dc: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x1097dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_1097e0:
    // 0x1097e0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1097e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_1097e4:
    // 0x1097e4: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x1097e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
label_1097e8:
    // 0x1097e8: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x1097e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
label_1097ec:
    // 0x1097ec: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x1097ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
label_1097f0:
    // 0x1097f0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1097f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1097f4:
    // 0x1097f4: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_1097f8:
    if (ctx->pc == 0x1097F8u) {
        ctx->pc = 0x1097F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097F4u;
        // 0x1097f8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097FCu;
        goto label_1097fc;
    }
    ctx->pc = 0x1097F4u;
    {
        const bool branch_taken_0x1097f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1097F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097F4u;
        // 0x1097f8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097f4) {
            ctx->pc = 0x1097D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1097d0;
        }
    }
    ctx->pc = 0x1097FCu;
label_1097fc:
    // 0x1097fc: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x1097fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_109800:
    // 0x109800: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x109800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_109804:
    // 0x109804: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x109804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_109808:
    // 0x109808: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x109808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10980c:
    // 0x10980c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x10980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109810:
    // 0x109810: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x109810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_109814:
    // 0x109814: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109818:
    // 0x109818: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x109818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_10981c:
    // 0x10981c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10981cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_109820:
    // 0x109820: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109824:
    // 0x109824: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x109824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109828:
    // 0x109828: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x109828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10982c:
    // 0x10982c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x10982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109830:
    // 0x109830: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109834:
    // 0x109834: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_109838:
    // 0x109838: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_10983c:
    if (ctx->pc == 0x10983Cu) {
        ctx->pc = 0x10983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109838u;
        // 0x10983c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109840u;
        goto label_109840;
    }
    ctx->pc = 0x109838u;
    {
        const bool branch_taken_0x109838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109838u;
        // 0x10983c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109838) {
            ctx->pc = 0x109898u;
            goto label_109898;
        }
    }
    ctx->pc = 0x109840u;
label_109840:
    // 0x109840: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109844:
    // 0x109844: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x109844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109848:
    // 0x109848: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x109848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_10984c:
    // 0x10984c: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x10984cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109850:
    // 0x109850: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x109850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109854:
    // 0x109854: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x109854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109858:
    // 0x109858: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x109858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_10985c:
    // 0x10985c: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x10985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109860:
    // 0x109860: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x109860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109864:
    // 0x109864: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x109864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109868:
    // 0x109868: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x109868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10986c:
    // 0x10986c: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x10986cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109870:
    // 0x109870: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x109870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109874:
    // 0x109874: 0xb0c40017  sdl         $a0, 0x17($a2)
    ctx->pc = 0x109874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109878:
    // 0x109878: 0xb4c40010  sdr         $a0, 0x10($a2)
    ctx->pc = 0x109878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10987c:
    // 0x10987c: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x10987cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109880:
    // 0x109880: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x109880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109884:
    // 0x109884: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109888:
    // 0x109888: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_10988c:
    if (ctx->pc == 0x10988Cu) {
        ctx->pc = 0x10988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109888u;
        // 0x10988c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109890u;
        goto label_109890;
    }
    ctx->pc = 0x109888u;
    {
        const bool branch_taken_0x109888 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109888u;
        // 0x10988c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109888) {
            ctx->pc = 0x109844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109844;
        }
    }
    ctx->pc = 0x109890u;
label_109890:
    // 0x109890: 0x1000000d  b           . + 4 + (0xD << 2)
label_109894:
    if (ctx->pc == 0x109894u) {
        ctx->pc = 0x109898u;
        goto label_109898;
    }
    ctx->pc = 0x109890u;
    {
        const bool branch_taken_0x109890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109890) {
            ctx->pc = 0x1098C8u;
            goto label_1098c8;
        }
    }
    ctx->pc = 0x109898u;
label_109898:
    // 0x109898: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_10989c:
    // 0x10989c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10989cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1098a0:
    // 0x1098a0: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1098a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_1098a4:
    // 0x1098a4: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x1098a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_1098a8:
    // 0x1098a8: 0xdca70018  ld          $a3, 0x18($a1)
    ctx->pc = 0x1098a8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_1098ac:
    // 0x1098ac: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x1098acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
label_1098b0:
    // 0x1098b0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1098b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
label_1098b4:
    // 0x1098b4: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1098b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_1098b8:
    // 0x1098b8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x1098b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
label_1098bc:
    // 0x1098bc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1098bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1098c0:
    // 0x1098c0: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_1098c4:
    if (ctx->pc == 0x1098C4u) {
        ctx->pc = 0x1098C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C0u;
        // 0x1098c4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098C8u;
        goto label_1098c8;
    }
    ctx->pc = 0x1098C0u;
    {
        const bool branch_taken_0x1098c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1098C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C0u;
        // 0x1098c4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098c0) {
            ctx->pc = 0x10989Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10989c;
        }
    }
    ctx->pc = 0x1098C8u;
label_1098c8:
    // 0x1098c8: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x1098c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1098cc:
    // 0x1098cc: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x1098ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1098d0:
    // 0x1098d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1098d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1098d4:
    // 0x1098d4: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x1098d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1098d8:
    // 0x1098d8: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x1098d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1098dc:
    // 0x1098dc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1098dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1098e0:
    // 0x1098e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1098e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1098e4:
    // 0x1098e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1098e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1098e8:
    // 0x1098e8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1098e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1098ec:
    // 0x1098ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1098ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1098f0:
    // 0x1098f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1098f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1098f4:
    // 0x1098f4: 0xc05d420  jal         func_175080
label_1098f8:
    if (ctx->pc == 0x1098F8u) {
        ctx->pc = 0x1098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098F4u;
        // 0x1098f8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1098FCu;
        goto label_1098fc;
    }
    ctx->pc = 0x1098F4u;
    SET_GPR_U32(ctx, 31, 0x1098FCu);
    ctx->pc = 0x1098F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098F4u;
    // 0x1098f8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x1098F4u, 0x1098FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098FCu;
label_1098fc:
    // 0x1098fc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1098fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109900:
    // 0x109900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109904:
    // 0x109904: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x109904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109908:
    // 0x109908: 0xc041164  jal         func_104590
label_10990c:
    if (ctx->pc == 0x10990Cu) {
        ctx->pc = 0x10990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109908u;
        // 0x10990c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109910u;
        goto label_109910;
    }
    ctx->pc = 0x109908u;
    SET_GPR_U32(ctx, 31, 0x109910u);
    ctx->pc = 0x10990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109908u;
    // 0x10990c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x109908u, 0x109910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109910u;
label_109910:
    // 0x109910: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109914:
    // 0x109914: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_109918:
    if (ctx->pc == 0x109918u) {
        ctx->pc = 0x109918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109914u;
        // 0x109918: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10991Cu;
        goto label_10991c;
    }
    ctx->pc = 0x109914u;
    {
        const bool branch_taken_0x109914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109914u;
        // 0x109918: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109914) {
            ctx->pc = 0x109CACu;
            goto label_109cac;
        }
    }
    ctx->pc = 0x10991Cu;
label_10991c:
    // 0x10991c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_109920:
    // 0x109920: 0x1622006b  bne         $s1, $v0, . + 4 + (0x6B << 2)
label_109924:
    if (ctx->pc == 0x109924u) {
        ctx->pc = 0x109924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109920u;
        // 0x109924: 0x226102b  sltu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109928u;
        goto label_109928;
    }
    ctx->pc = 0x109920u;
    {
        const bool branch_taken_0x109920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x109924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109920u;
        // 0x109924: 0x226102b  sltu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109920) {
            ctx->pc = 0x109AD0u;
            goto label_109ad0;
        }
    }
    ctx->pc = 0x109928u;
label_109928:
    // 0x109928: 0x14c00069  bnez        $a2, . + 4 + (0x69 << 2)
label_10992c:
    if (ctx->pc == 0x10992Cu) {
        ctx->pc = 0x109930u;
        goto label_109930;
    }
    ctx->pc = 0x109928u;
    {
        const bool branch_taken_0x109928 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x109928) {
            ctx->pc = 0x109AD0u;
            goto label_109ad0;
        }
    }
    ctx->pc = 0x109930u;
label_109930:
    // 0x109930: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x109930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109934:
    // 0x109934: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x109934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109938:
    // 0x109938: 0xc05d448  jal         func_175120
label_10993c:
    if (ctx->pc == 0x10993Cu) {
        ctx->pc = 0x10993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109938u;
        // 0x10993c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109940u;
        goto label_109940;
    }
    ctx->pc = 0x109938u;
    SET_GPR_U32(ctx, 31, 0x109940u);
    ctx->pc = 0x10993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109938u;
    // 0x10993c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x109938u, 0x109940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109940u;
label_109940:
    // 0x109940: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x109940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109944:
    // 0x109944: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x109944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109948:
    // 0x109948: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x109948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10994c:
    // 0x10994c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_109950:
    // 0x109950: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109954:
    // 0x109954: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_109958:
    // 0x109958: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_10995c:
    if (ctx->pc == 0x10995Cu) {
        ctx->pc = 0x10995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109958u;
        // 0x10995c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109960u;
        goto label_109960;
    }
    ctx->pc = 0x109958u;
    {
        const bool branch_taken_0x109958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109958u;
        // 0x10995c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109958) {
            ctx->pc = 0x1099B8u;
            goto label_1099b8;
        }
    }
    ctx->pc = 0x109960u;
label_109960:
    // 0x109960: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109964:
    // 0x109964: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x109964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109968:
    // 0x109968: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x109968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_10996c:
    // 0x10996c: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x10996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109970:
    // 0x109970: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x109970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109974:
    // 0x109974: 0x68a30017  ldl         $v1, 0x17($a1)
    ctx->pc = 0x109974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109978:
    // 0x109978: 0x6ca30010  ldr         $v1, 0x10($a1)
    ctx->pc = 0x109978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10997c:
    // 0x10997c: 0x68a4001f  ldl         $a0, 0x1F($a1)
    ctx->pc = 0x10997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109980:
    // 0x109980: 0x6ca40018  ldr         $a0, 0x18($a1)
    ctx->pc = 0x109980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109984:
    // 0x109984: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x109984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109988:
    // 0x109988: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x109988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10998c:
    // 0x10998c: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x10998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109990:
    // 0x109990: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x109990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109994:
    // 0x109994: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x109994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109998:
    // 0x109998: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x109998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10999c:
    // 0x10999c: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x10999cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1099a0:
    // 0x1099a0: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x1099a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1099a4:
    // 0x1099a4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1099a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1099a8:
    // 0x1099a8: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_1099ac:
    if (ctx->pc == 0x1099ACu) {
        ctx->pc = 0x1099ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099A8u;
        // 0x1099ac: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1099B0u;
        goto label_1099b0;
    }
    ctx->pc = 0x1099A8u;
    {
        const bool branch_taken_0x1099a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1099ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099A8u;
        // 0x1099ac: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099a8) {
            ctx->pc = 0x109964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109964;
        }
    }
    ctx->pc = 0x1099B0u;
label_1099b0:
    // 0x1099b0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1099b4:
    if (ctx->pc == 0x1099B4u) {
        ctx->pc = 0x1099B8u;
        goto label_1099b8;
    }
    ctx->pc = 0x1099B0u;
    {
        const bool branch_taken_0x1099b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1099b0) {
            ctx->pc = 0x1099E8u;
            goto label_1099e8;
        }
    }
    ctx->pc = 0x1099B8u;
label_1099b8:
    // 0x1099b8: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x1099b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_1099bc:
    // 0x1099bc: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x1099bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1099c0:
    // 0x1099c0: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x1099c0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_1099c4:
    // 0x1099c4: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1099c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_1099c8:
    // 0x1099c8: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x1099c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_1099cc:
    // 0x1099cc: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x1099ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
label_1099d0:
    // 0x1099d0: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x1099d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
label_1099d4:
    // 0x1099d4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1099d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_1099d8:
    // 0x1099d8: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x1099d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
label_1099dc:
    // 0x1099dc: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1099dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1099e0:
    // 0x1099e0: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_1099e4:
    if (ctx->pc == 0x1099E4u) {
        ctx->pc = 0x1099E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099E0u;
        // 0x1099e4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1099E8u;
        goto label_1099e8;
    }
    ctx->pc = 0x1099E0u;
    {
        const bool branch_taken_0x1099e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1099E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099E0u;
        // 0x1099e4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099e0) {
            ctx->pc = 0x1099BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1099bc;
        }
    }
    ctx->pc = 0x1099E8u;
label_1099e8:
    // 0x1099e8: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x1099e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1099ec:
    // 0x1099ec: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x1099ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1099f0:
    // 0x1099f0: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x1099f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1099f4:
    // 0x1099f4: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x1099f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1099f8:
    // 0x1099f8: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x1099f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1099fc:
    // 0x1099fc: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1099fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_109a00:
    // 0x109a00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109a04:
    // 0x109a04: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x109a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109a08:
    // 0x109a08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_109a0c:
    // 0x109a0c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109a10:
    // 0x109a10: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x109a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109a14:
    // 0x109a14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x109a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109a18:
    // 0x109a18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x109a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109a1c:
    // 0x109a1c: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109a20:
    // 0x109a20: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_109a24:
    // 0x109a24: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_109a28:
    if (ctx->pc == 0x109A28u) {
        ctx->pc = 0x109A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A24u;
        // 0x109a28: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A2Cu;
        goto label_109a2c;
    }
    ctx->pc = 0x109A24u;
    {
        const bool branch_taken_0x109a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A24u;
        // 0x109a28: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a24) {
            ctx->pc = 0x109A84u;
            goto label_109a84;
        }
    }
    ctx->pc = 0x109A2Cu;
label_109a2c:
    // 0x109a2c: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109a30:
    // 0x109a30: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x109a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109a34:
    // 0x109a34: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x109a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109a38:
    // 0x109a38: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x109a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109a3c:
    // 0x109a3c: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x109a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109a40:
    // 0x109a40: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x109a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109a44:
    // 0x109a44: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x109a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109a48:
    // 0x109a48: 0x68a3001f  ldl         $v1, 0x1F($a1)
    ctx->pc = 0x109a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109a4c:
    // 0x109a4c: 0x6ca30018  ldr         $v1, 0x18($a1)
    ctx->pc = 0x109a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109a50:
    // 0x109a50: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x109a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a54:
    // 0x109a54: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x109a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a58:
    // 0x109a58: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x109a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a5c:
    // 0x109a5c: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x109a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a60:
    // 0x109a60: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x109a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a64:
    // 0x109a64: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x109a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a68:
    // 0x109a68: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x109a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a6c:
    // 0x109a6c: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x109a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109a70:
    // 0x109a70: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109a74:
    // 0x109a74: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_109a78:
    if (ctx->pc == 0x109A78u) {
        ctx->pc = 0x109A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A74u;
        // 0x109a78: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A7Cu;
        goto label_109a7c;
    }
    ctx->pc = 0x109A74u;
    {
        const bool branch_taken_0x109a74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A74u;
        // 0x109a78: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a74) {
            ctx->pc = 0x109A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a30;
        }
    }
    ctx->pc = 0x109A7Cu;
label_109a7c:
    // 0x109a7c: 0x1000000d  b           . + 4 + (0xD << 2)
label_109a80:
    if (ctx->pc == 0x109A80u) {
        ctx->pc = 0x109A84u;
        goto label_109a84;
    }
    ctx->pc = 0x109A7Cu;
    {
        const bool branch_taken_0x109a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a7c) {
            ctx->pc = 0x109AB4u;
            goto label_109ab4;
        }
    }
    ctx->pc = 0x109A84u;
label_109a84:
    // 0x109a84: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109a88:
    // 0x109a88: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x109a88u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_109a8c:
    // 0x109a8c: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x109a8cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_109a90:
    // 0x109a90: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x109a90u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_109a94:
    // 0x109a94: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x109a94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_109a98:
    // 0x109a98: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x109a98u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
label_109a9c:
    // 0x109a9c: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x109a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
label_109aa0:
    // 0x109aa0: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x109aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
label_109aa4:
    // 0x109aa4: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x109aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
label_109aa8:
    // 0x109aa8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109aac:
    // 0x109aac: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_109ab0:
    if (ctx->pc == 0x109AB0u) {
        ctx->pc = 0x109AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AACu;
        // 0x109ab0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AB4u;
        goto label_109ab4;
    }
    ctx->pc = 0x109AACu;
    {
        const bool branch_taken_0x109aac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AACu;
        // 0x109ab0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aac) {
            ctx->pc = 0x109A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109a88;
        }
    }
    ctx->pc = 0x109AB4u;
label_109ab4:
    // 0x109ab4: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x109ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109ab8:
    // 0x109ab8: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x109ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109abc:
    // 0x109abc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x109abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_109ac0:
    // 0x109ac0: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x109ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109ac4:
    // 0x109ac4: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x109ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109ac8:
    // 0x109ac8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_109acc:
    if (ctx->pc == 0x109ACCu) {
        ctx->pc = 0x109ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AC8u;
        // 0x109acc: 0xacc70008  sw          $a3, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AD0u;
        goto label_109ad0;
    }
    ctx->pc = 0x109AC8u;
    {
        const bool branch_taken_0x109ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AC8u;
        // 0x109acc: 0xacc70008  sw          $a3, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ac8) {
            ctx->pc = 0x109C74u;
            goto label_109c74;
        }
    }
    ctx->pc = 0x109AD0u;
label_109ad0:
    // 0x109ad0: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_109ad4:
    if (ctx->pc == 0x109AD4u) {
        ctx->pc = 0x109AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AD0u;
        // 0x109ad4: 0xd1102b  sltu        $v0, $a2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AD8u;
        goto label_109ad8;
    }
    ctx->pc = 0x109AD0u;
    {
        const bool branch_taken_0x109ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AD0u;
        // 0x109ad4: 0xd1102b  sltu        $v0, $a2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ad0) {
            ctx->pc = 0x109CBCu;
            goto label_109cbc;
        }
    }
    ctx->pc = 0x109AD8u;
label_109ad8:
    // 0x109ad8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x109ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109adc:
    // 0x109adc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x109adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109ae0:
    // 0x109ae0: 0xc05d448  jal         func_175120
label_109ae4:
    if (ctx->pc == 0x109AE4u) {
        ctx->pc = 0x109AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE0u;
        // 0x109ae4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AE8u;
        goto label_109ae8;
    }
    ctx->pc = 0x109AE0u;
    SET_GPR_U32(ctx, 31, 0x109AE8u);
    ctx->pc = 0x109AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AE0u;
    // 0x109ae4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x109AE0u, 0x109AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AE8u;
label_109ae8:
    // 0x109ae8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x109ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109aec:
    // 0x109aec: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x109aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109af0:
    // 0x109af0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x109af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109af4:
    // 0x109af4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_109af8:
    // 0x109af8: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109afc:
    // 0x109afc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_109b00:
    // 0x109b00: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_109b04:
    if (ctx->pc == 0x109B04u) {
        ctx->pc = 0x109B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B00u;
        // 0x109b04: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109B08u;
        goto label_109b08;
    }
    ctx->pc = 0x109B00u;
    {
        const bool branch_taken_0x109b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B00u;
        // 0x109b04: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b00) {
            ctx->pc = 0x109B60u;
            goto label_109b60;
        }
    }
    ctx->pc = 0x109B08u;
label_109b08:
    // 0x109b08: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109b0c:
    // 0x109b0c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x109b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109b10:
    // 0x109b10: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x109b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109b14:
    // 0x109b14: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x109b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109b18:
    // 0x109b18: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x109b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109b1c:
    // 0x109b1c: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x109b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109b20:
    // 0x109b20: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x109b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109b24:
    // 0x109b24: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x109b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109b28:
    // 0x109b28: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x109b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109b2c:
    // 0x109b2c: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x109b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b30:
    // 0x109b30: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x109b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b34:
    // 0x109b34: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x109b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b38:
    // 0x109b38: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x109b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b3c:
    // 0x109b3c: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x109b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b40:
    // 0x109b40: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x109b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b44:
    // 0x109b44: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x109b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b48:
    // 0x109b48: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x109b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109b4c:
    // 0x109b4c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109b50:
    // 0x109b50: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_109b54:
    if (ctx->pc == 0x109B54u) {
        ctx->pc = 0x109B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B50u;
        // 0x109b54: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109B58u;
        goto label_109b58;
    }
    ctx->pc = 0x109B50u;
    {
        const bool branch_taken_0x109b50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B50u;
        // 0x109b54: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b50) {
            ctx->pc = 0x109B0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b0c;
        }
    }
    ctx->pc = 0x109B58u;
label_109b58:
    // 0x109b58: 0x1000000d  b           . + 4 + (0xD << 2)
label_109b5c:
    if (ctx->pc == 0x109B5Cu) {
        ctx->pc = 0x109B60u;
        goto label_109b60;
    }
    ctx->pc = 0x109B58u;
    {
        const bool branch_taken_0x109b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109b58) {
            ctx->pc = 0x109B90u;
            goto label_109b90;
        }
    }
    ctx->pc = 0x109B60u;
label_109b60:
    // 0x109b60: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109b64:
    // 0x109b64: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x109b64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_109b68:
    // 0x109b68: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x109b68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_109b6c:
    // 0x109b6c: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x109b6cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_109b70:
    // 0x109b70: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x109b70u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_109b74:
    // 0x109b74: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x109b74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_109b78:
    // 0x109b78: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x109b78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
label_109b7c:
    // 0x109b7c: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x109b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
label_109b80:
    // 0x109b80: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x109b80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
label_109b84:
    // 0x109b84: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109b88:
    // 0x109b88: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_109b8c:
    if (ctx->pc == 0x109B8Cu) {
        ctx->pc = 0x109B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B88u;
        // 0x109b8c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109B90u;
        goto label_109b90;
    }
    ctx->pc = 0x109B88u;
    {
        const bool branch_taken_0x109b88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B88u;
        // 0x109b8c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b88) {
            ctx->pc = 0x109B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b64;
        }
    }
    ctx->pc = 0x109B90u;
label_109b90:
    // 0x109b90: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x109b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_109b94:
    // 0x109b94: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x109b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_109b98:
    // 0x109b98: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x109b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_109b9c:
    // 0x109b9c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x109b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109ba0:
    // 0x109ba0: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x109ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109ba4:
    // 0x109ba4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x109ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_109ba8:
    // 0x109ba8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109bac:
    // 0x109bac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x109bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109bb0:
    // 0x109bb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_109bb4:
    // 0x109bb4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109bb8:
    // 0x109bb8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x109bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109bbc:
    // 0x109bbc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x109bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109bc0:
    // 0x109bc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x109bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109bc4:
    // 0x109bc4: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109bc8:
    // 0x109bc8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_109bcc:
    // 0x109bcc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_109bd0:
    if (ctx->pc == 0x109BD0u) {
        ctx->pc = 0x109BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BCCu;
        // 0x109bd0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109BD4u;
        goto label_109bd4;
    }
    ctx->pc = 0x109BCCu;
    {
        const bool branch_taken_0x109bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BCCu;
        // 0x109bd0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bcc) {
            ctx->pc = 0x109C2Cu;
            goto label_109c2c;
        }
    }
    ctx->pc = 0x109BD4u;
label_109bd4:
    // 0x109bd4: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109bd8:
    // 0x109bd8: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x109bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109bdc:
    // 0x109bdc: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x109bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109be0:
    // 0x109be0: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x109be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109be4:
    // 0x109be4: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x109be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109be8:
    // 0x109be8: 0x68a40017  ldl         $a0, 0x17($a1)
    ctx->pc = 0x109be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109bec:
    // 0x109bec: 0x6ca40010  ldr         $a0, 0x10($a1)
    ctx->pc = 0x109becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109bf0:
    // 0x109bf0: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x109bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109bf4:
    // 0x109bf4: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x109bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109bf8:
    // 0x109bf8: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x109bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109bfc:
    // 0x109bfc: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x109bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c00:
    // 0x109c00: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x109c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c04:
    // 0x109c04: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x109c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c08:
    // 0x109c08: 0xb0c40017  sdl         $a0, 0x17($a2)
    ctx->pc = 0x109c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c0c:
    // 0x109c0c: 0xb4c40010  sdr         $a0, 0x10($a2)
    ctx->pc = 0x109c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c10:
    // 0x109c10: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x109c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c14:
    // 0x109c14: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x109c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c18:
    // 0x109c18: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109c1c:
    // 0x109c1c: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_109c20:
    if (ctx->pc == 0x109C20u) {
        ctx->pc = 0x109C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C1Cu;
        // 0x109c20: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C24u;
        goto label_109c24;
    }
    ctx->pc = 0x109C1Cu;
    {
        const bool branch_taken_0x109c1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C1Cu;
        // 0x109c20: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c1c) {
            ctx->pc = 0x109BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109bd8;
        }
    }
    ctx->pc = 0x109C24u;
label_109c24:
    // 0x109c24: 0x1000000d  b           . + 4 + (0xD << 2)
label_109c28:
    if (ctx->pc == 0x109C28u) {
        ctx->pc = 0x109C2Cu;
        goto label_109c2c;
    }
    ctx->pc = 0x109C24u;
    {
        const bool branch_taken_0x109c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109c24) {
            ctx->pc = 0x109C5Cu;
            goto label_109c5c;
        }
    }
    ctx->pc = 0x109C2Cu;
label_109c2c:
    // 0x109c2c: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109c30:
    // 0x109c30: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x109c30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_109c34:
    // 0x109c34: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x109c34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_109c38:
    // 0x109c38: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x109c38u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_109c3c:
    // 0x109c3c: 0xdca70018  ld          $a3, 0x18($a1)
    ctx->pc = 0x109c3cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_109c40:
    // 0x109c40: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x109c40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
label_109c44:
    // 0x109c44: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x109c44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
label_109c48:
    // 0x109c48: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x109c48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_109c4c:
    // 0x109c4c: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x109c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
label_109c50:
    // 0x109c50: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109c54:
    // 0x109c54: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_109c58:
    if (ctx->pc == 0x109C58u) {
        ctx->pc = 0x109C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C54u;
        // 0x109c58: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C5Cu;
        goto label_109c5c;
    }
    ctx->pc = 0x109C54u;
    {
        const bool branch_taken_0x109c54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C54u;
        // 0x109c58: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c54) {
            ctx->pc = 0x109C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109c30;
        }
    }
    ctx->pc = 0x109C5Cu;
label_109c5c:
    // 0x109c5c: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x109c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109c60:
    // 0x109c60: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x109c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109c64:
    // 0x109c64: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_109c68:
    // 0x109c68: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x109c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c6c:
    // 0x109c6c: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x109c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109c70:
    // 0x109c70: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x109c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_109c74:
    // 0x109c74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109c78:
    // 0x109c78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_109c7c:
    // 0x109c7c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109c80:
    // 0x109c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109c84:
    // 0x109c84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x109c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_109c88:
    // 0x109c88: 0xc05d420  jal         func_175080
label_109c8c:
    if (ctx->pc == 0x109C8Cu) {
        ctx->pc = 0x109C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C88u;
        // 0x109c8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C90u;
        goto label_109c90;
    }
    ctx->pc = 0x109C88u;
    SET_GPR_U32(ctx, 31, 0x109C90u);
    ctx->pc = 0x109C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C88u;
    // 0x109c8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x109C88u, 0x109C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C90u;
label_109c90:
    // 0x109c90: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x109c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109c94:
    // 0x109c94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109c98:
    // 0x109c98: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x109c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109c9c:
    // 0x109c9c: 0xc041164  jal         func_104590
label_109ca0:
    if (ctx->pc == 0x109CA0u) {
        ctx->pc = 0x109CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C9Cu;
        // 0x109ca0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CA4u;
        goto label_109ca4;
    }
    ctx->pc = 0x109C9Cu;
    SET_GPR_U32(ctx, 31, 0x109CA4u);
    ctx->pc = 0x109CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C9Cu;
    // 0x109ca0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x109C9Cu, 0x109CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CA4u;
label_109ca4:
    // 0x109ca4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109ca8:
    // 0x109ca8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x109ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109cac:
    // 0x109cac: 0xc041128  jal         func_1044A0
label_109cb0:
    if (ctx->pc == 0x109CB0u) {
        ctx->pc = 0x109CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CACu;
        // 0x109cb0: 0xc44c0018  lwc1        $f12, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CB4u;
        goto label_109cb4;
    }
    ctx->pc = 0x109CACu;
    SET_GPR_U32(ctx, 31, 0x109CB4u);
    ctx->pc = 0x109CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CACu;
    // 0x109cb0: 0xc44c0018  lwc1        $f12, 0x18($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109CACu, 0x109CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CB4u;
label_109cb4:
    // 0x109cb4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_109cb8:
    if (ctx->pc == 0x109CB8u) {
        ctx->pc = 0x109CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CB4u;
        // 0x109cb8: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CBCu;
        goto label_109cbc;
    }
    ctx->pc = 0x109CB4u;
    {
        const bool branch_taken_0x109cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CB4u;
        // 0x109cb8: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cb4) {
            ctx->pc = 0x109EA4u;
            goto label_109ea4;
        }
    }
    ctx->pc = 0x109CBCu;
label_109cbc:
    // 0x109cbc: 0x50400079  beql        $v0, $zero, . + 4 + (0x79 << 2)
label_109cc0:
    if (ctx->pc == 0x109CC0u) {
        ctx->pc = 0x109CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CBCu;
        // 0x109cc0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CC4u;
        goto label_109cc4;
    }
    ctx->pc = 0x109CBCu;
    {
        const bool branch_taken_0x109cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109cbc) {
            ctx->pc = 0x109CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109CBCu;
            // 0x109cc0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109EA4u;
            goto label_109ea4;
        }
    }
    ctx->pc = 0x109CC4u;
label_109cc4:
    // 0x109cc4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x109cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109cc8:
    // 0x109cc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x109cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109ccc:
    // 0x109ccc: 0xc05d448  jal         func_175120
label_109cd0:
    if (ctx->pc == 0x109CD0u) {
        ctx->pc = 0x109CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CCCu;
        // 0x109cd0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CD4u;
        goto label_109cd4;
    }
    ctx->pc = 0x109CCCu;
    SET_GPR_U32(ctx, 31, 0x109CD4u);
    ctx->pc = 0x109CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CCCu;
    // 0x109cd0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x109CCCu, 0x109CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CD4u;
label_109cd4:
    // 0x109cd4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x109cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109cd8:
    // 0x109cd8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x109cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109cdc:
    // 0x109cdc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x109cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_109ce0:
    // 0x109ce0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_109ce4:
    // 0x109ce4: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109ce8:
    // 0x109ce8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_109cec:
    // 0x109cec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_109cf0:
    if (ctx->pc == 0x109CF0u) {
        ctx->pc = 0x109CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CECu;
        // 0x109cf0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CF4u;
        goto label_109cf4;
    }
    ctx->pc = 0x109CECu;
    {
        const bool branch_taken_0x109cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CECu;
        // 0x109cf0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cec) {
            ctx->pc = 0x109D4Cu;
            goto label_109d4c;
        }
    }
    ctx->pc = 0x109CF4u;
label_109cf4:
    // 0x109cf4: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109cf8:
    // 0x109cf8: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x109cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109cfc:
    // 0x109cfc: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x109cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109d00:
    // 0x109d00: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x109d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109d04:
    // 0x109d04: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x109d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109d08:
    // 0x109d08: 0x68a30017  ldl         $v1, 0x17($a1)
    ctx->pc = 0x109d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109d0c:
    // 0x109d0c: 0x6ca30010  ldr         $v1, 0x10($a1)
    ctx->pc = 0x109d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109d10:
    // 0x109d10: 0x68a4001f  ldl         $a0, 0x1F($a1)
    ctx->pc = 0x109d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109d14:
    // 0x109d14: 0x6ca40018  ldr         $a0, 0x18($a1)
    ctx->pc = 0x109d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109d18:
    // 0x109d18: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x109d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d1c:
    // 0x109d1c: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x109d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d20:
    // 0x109d20: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x109d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d24:
    // 0x109d24: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x109d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d28:
    // 0x109d28: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x109d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d2c:
    // 0x109d2c: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x109d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d30:
    // 0x109d30: 0xb0c4001f  sdl         $a0, 0x1F($a2)
    ctx->pc = 0x109d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d34:
    // 0x109d34: 0xb4c40018  sdr         $a0, 0x18($a2)
    ctx->pc = 0x109d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d38:
    // 0x109d38: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109d3c:
    // 0x109d3c: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_109d40:
    if (ctx->pc == 0x109D40u) {
        ctx->pc = 0x109D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D3Cu;
        // 0x109d40: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D44u;
        goto label_109d44;
    }
    ctx->pc = 0x109D3Cu;
    {
        const bool branch_taken_0x109d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D3Cu;
        // 0x109d40: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d3c) {
            ctx->pc = 0x109CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109cf8;
        }
    }
    ctx->pc = 0x109D44u;
label_109d44:
    // 0x109d44: 0x1000000d  b           . + 4 + (0xD << 2)
label_109d48:
    if (ctx->pc == 0x109D48u) {
        ctx->pc = 0x109D4Cu;
        goto label_109d4c;
    }
    ctx->pc = 0x109D44u;
    {
        const bool branch_taken_0x109d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d44) {
            ctx->pc = 0x109D7Cu;
            goto label_109d7c;
        }
    }
    ctx->pc = 0x109D4Cu;
label_109d4c:
    // 0x109d4c: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109d50:
    // 0x109d50: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x109d50u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_109d54:
    // 0x109d54: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x109d54u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_109d58:
    // 0x109d58: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x109d58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_109d5c:
    // 0x109d5c: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x109d5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_109d60:
    // 0x109d60: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x109d60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
label_109d64:
    // 0x109d64: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x109d64u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
label_109d68:
    // 0x109d68: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x109d68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_109d6c:
    // 0x109d6c: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x109d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
label_109d70:
    // 0x109d70: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109d74:
    // 0x109d74: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_109d78:
    if (ctx->pc == 0x109D78u) {
        ctx->pc = 0x109D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D74u;
        // 0x109d78: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D7Cu;
        goto label_109d7c;
    }
    ctx->pc = 0x109D74u;
    {
        const bool branch_taken_0x109d74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D74u;
        // 0x109d78: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d74) {
            ctx->pc = 0x109D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d50;
        }
    }
    ctx->pc = 0x109D7Cu;
label_109d7c:
    // 0x109d7c: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x109d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109d80:
    // 0x109d80: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x109d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109d84:
    // 0x109d84: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x109d84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_109d88:
    // 0x109d88: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x109d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d8c:
    // 0x109d8c: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x109d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109d90:
    // 0x109d90: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x109d90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_109d94:
    // 0x109d94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109d98:
    // 0x109d98: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109d9c:
    // 0x109d9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_109da0:
    // 0x109da0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109da4:
    // 0x109da4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x109da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109da8:
    // 0x109da8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x109da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109dac:
    // 0x109dac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109db0:
    // 0x109db0: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x109db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_109db4:
    // 0x109db4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x109db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_109db8:
    // 0x109db8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_109dbc:
    if (ctx->pc == 0x109DBCu) {
        ctx->pc = 0x109DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DB8u;
        // 0x109dbc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109DC0u;
        goto label_109dc0;
    }
    ctx->pc = 0x109DB8u;
    {
        const bool branch_taken_0x109db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DB8u;
        // 0x109dbc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109db8) {
            ctx->pc = 0x109E18u;
            goto label_109e18;
        }
    }
    ctx->pc = 0x109DC0u;
label_109dc0:
    // 0x109dc0: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109dc4:
    // 0x109dc4: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x109dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109dc8:
    // 0x109dc8: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x109dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109dcc:
    // 0x109dcc: 0x68a7000f  ldl         $a3, 0xF($a1)
    ctx->pc = 0x109dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_109dd0:
    // 0x109dd0: 0x6ca70008  ldr         $a3, 0x8($a1)
    ctx->pc = 0x109dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_109dd4:
    // 0x109dd4: 0x68a80017  ldl         $t0, 0x17($a1)
    ctx->pc = 0x109dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_109dd8:
    // 0x109dd8: 0x6ca80010  ldr         $t0, 0x10($a1)
    ctx->pc = 0x109dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_109ddc:
    // 0x109ddc: 0x68a3001f  ldl         $v1, 0x1F($a1)
    ctx->pc = 0x109ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_109de0:
    // 0x109de0: 0x6ca30018  ldr         $v1, 0x18($a1)
    ctx->pc = 0x109de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_109de4:
    // 0x109de4: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x109de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109de8:
    // 0x109de8: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x109de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109dec:
    // 0x109dec: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x109decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109df0:
    // 0x109df0: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x109df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109df4:
    // 0x109df4: 0xb0c80017  sdl         $t0, 0x17($a2)
    ctx->pc = 0x109df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109df8:
    // 0x109df8: 0xb4c80010  sdr         $t0, 0x10($a2)
    ctx->pc = 0x109df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109dfc:
    // 0x109dfc: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x109dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109e00:
    // 0x109e00: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x109e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109e04:
    // 0x109e04: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109e08:
    // 0x109e08: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_109e0c:
    if (ctx->pc == 0x109E0Cu) {
        ctx->pc = 0x109E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E08u;
        // 0x109e0c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E10u;
        goto label_109e10;
    }
    ctx->pc = 0x109E08u;
    {
        const bool branch_taken_0x109e08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E08u;
        // 0x109e0c: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e08) {
            ctx->pc = 0x109DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109dc4;
        }
    }
    ctx->pc = 0x109E10u;
label_109e10:
    // 0x109e10: 0x1000000d  b           . + 4 + (0xD << 2)
label_109e14:
    if (ctx->pc == 0x109E14u) {
        ctx->pc = 0x109E18u;
        goto label_109e18;
    }
    ctx->pc = 0x109E10u;
    {
        const bool branch_taken_0x109e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109e10) {
            ctx->pc = 0x109E48u;
            goto label_109e48;
        }
    }
    ctx->pc = 0x109E18u;
label_109e18:
    // 0x109e18: 0x24a20120  addiu       $v0, $a1, 0x120
    ctx->pc = 0x109e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
label_109e1c:
    // 0x109e1c: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x109e1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_109e20:
    // 0x109e20: 0xdca70008  ld          $a3, 0x8($a1)
    ctx->pc = 0x109e20u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_109e24:
    // 0x109e24: 0xdca80010  ld          $t0, 0x10($a1)
    ctx->pc = 0x109e24u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_109e28:
    // 0x109e28: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x109e28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_109e2c:
    // 0x109e2c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x109e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
label_109e30:
    // 0x109e30: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x109e30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
label_109e34:
    // 0x109e34: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x109e34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
label_109e38:
    // 0x109e38: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x109e38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
label_109e3c:
    // 0x109e3c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x109e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_109e40:
    // 0x109e40: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_109e44:
    if (ctx->pc == 0x109E44u) {
        ctx->pc = 0x109E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E40u;
        // 0x109e44: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E48u;
        goto label_109e48;
    }
    ctx->pc = 0x109E40u;
    {
        const bool branch_taken_0x109e40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E40u;
        // 0x109e44: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e40) {
            ctx->pc = 0x109E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109e1c;
        }
    }
    ctx->pc = 0x109E48u;
label_109e48:
    // 0x109e48: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x109e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_109e4c:
    // 0x109e4c: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x109e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_109e50:
    // 0x109e50: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x109e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_109e54:
    // 0x109e54: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x109e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_109e58:
    // 0x109e58: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x109e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_109e5c:
    // 0x109e5c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x109e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
label_109e60:
    // 0x109e60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109e64:
    // 0x109e64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_109e68:
    // 0x109e68: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109e6c:
    // 0x109e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109e70:
    // 0x109e70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x109e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_109e74:
    // 0x109e74: 0xc05d420  jal         func_175080
label_109e78:
    if (ctx->pc == 0x109E78u) {
        ctx->pc = 0x109E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E74u;
        // 0x109e78: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E7Cu;
        goto label_109e7c;
    }
    ctx->pc = 0x109E74u;
    SET_GPR_U32(ctx, 31, 0x109E7Cu);
    ctx->pc = 0x109E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E74u;
    // 0x109e78: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x109E74u, 0x109E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E7Cu;
label_109e7c:
    // 0x109e7c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x109e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109e80:
    // 0x109e80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109e84:
    // 0x109e84: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x109e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_109e88:
    // 0x109e88: 0xc041164  jal         func_104590
label_109e8c:
    if (ctx->pc == 0x109E8Cu) {
        ctx->pc = 0x109E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E88u;
        // 0x109e8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109E90u;
        goto label_109e90;
    }
    ctx->pc = 0x109E88u;
    SET_GPR_U32(ctx, 31, 0x109E90u);
    ctx->pc = 0x109E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E88u;
    // 0x109e8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x109E88u, 0x109E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E90u;
label_109e90:
    // 0x109e90: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x109e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109e94:
    // 0x109e94: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x109e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109e98:
    // 0x109e98: 0xc041128  jal         func_1044A0
label_109e9c:
    if (ctx->pc == 0x109E9Cu) {
        ctx->pc = 0x109E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E98u;
        // 0x109e9c: 0xc44c0018  lwc1        $f12, 0x18($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x109EA0u;
        goto label_109ea0;
    }
    ctx->pc = 0x109E98u;
    SET_GPR_U32(ctx, 31, 0x109EA0u);
    ctx->pc = 0x109E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E98u;
    // 0x109e9c: 0xc44c0018  lwc1        $f12, 0x18($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109E98u, 0x109EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EA0u;
label_109ea0:
    // 0x109ea0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x109ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109ea4:
    // 0x109ea4: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x109ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_109ea8:
    // 0x109ea8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x109ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_109eac:
    // 0x109eac: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x109eacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_109eb0:
    // 0x109eb0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109eb4:
    // 0x109eb4: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x109eb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_109eb8:
    // 0x109eb8: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x109eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_109ebc:
    // 0x109ebc: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x109ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
label_109ec0:
    // 0x109ec0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x109ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109ec4:
    // 0x109ec4: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x109ec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
label_109ec8:
    // 0x109ec8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x109ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_109ecc:
    // 0x109ecc: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x109eccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
label_109ed0:
    // 0x109ed0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x109ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109ed4:
    // 0x109ed4: 0xc041128  jal         func_1044A0
label_109ed8:
    if (ctx->pc == 0x109ED8u) {
        ctx->pc = 0x109ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ED4u;
        // 0x109ed8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109EDCu;
        goto label_109edc;
    }
    ctx->pc = 0x109ED4u;
    SET_GPR_U32(ctx, 31, 0x109EDCu);
    ctx->pc = 0x109ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109ED4u;
    // 0x109ed8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109ED4u, 0x109EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EDCu;
label_109edc:
    // 0x109edc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109ee0:
    // 0x109ee0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x109ee0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_109ee4:
    // 0x109ee4: 0xc041128  jal         func_1044A0
label_109ee8:
    if (ctx->pc == 0x109EE8u) {
        ctx->pc = 0x109EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EE4u;
        // 0x109ee8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109EECu;
        goto label_109eec;
    }
    ctx->pc = 0x109EE4u;
    SET_GPR_U32(ctx, 31, 0x109EECu);
    ctx->pc = 0x109EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EE4u;
    // 0x109ee8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109EE4u, 0x109EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EECu;
label_109eec:
    // 0x109eec: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x109eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109ef0:
    // 0x109ef0: 0xc041128  jal         func_1044A0
label_109ef4:
    if (ctx->pc == 0x109EF4u) {
        ctx->pc = 0x109EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EF0u;
        // 0x109ef4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109EF8u;
        goto label_109ef8;
    }
    ctx->pc = 0x109EF0u;
    SET_GPR_U32(ctx, 31, 0x109EF8u);
    ctx->pc = 0x109EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EF0u;
    // 0x109ef4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109EF0u, 0x109EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EF8u;
label_109ef8:
    // 0x109ef8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x109ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_109efc:
    // 0x109efc: 0x0  nop
    ctx->pc = 0x109efcu;
    // NOP
label_109f00:
    // 0x109f00: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x109f00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_109f04:
    // 0x109f04: 0x0  nop
    ctx->pc = 0x109f04u;
    // NOP
label_109f08:
    // 0x109f08: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_109f0c:
    if (ctx->pc == 0x109F0Cu) {
        ctx->pc = 0x109F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F08u;
        // 0x109f0c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F10u;
        goto label_109f10;
    }
    ctx->pc = 0x109F08u;
    {
        const bool branch_taken_0x109f08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x109f08) {
            ctx->pc = 0x109F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109F08u;
            // 0x109f0c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F10u;
label_109f10:
    // 0x109f10: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x109f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_109f14:
    // 0x109f14: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x109f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_109f18:
    // 0x109f18: 0xc0e409a  jal         func_390268
label_109f1c:
    if (ctx->pc == 0x109F1Cu) {
        ctx->pc = 0x109F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F18u;
        // 0x109f1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F20u;
        goto label_109f20;
    }
    ctx->pc = 0x109F18u;
    SET_GPR_U32(ctx, 31, 0x109F20u);
    ctx->pc = 0x109F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F18u;
    // 0x109f1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x109F18u, 0x109F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F20u;
label_109f20:
    // 0x109f20: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x109f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109f24:
    // 0x109f24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109f28:
    // 0x109f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109f2c:
    // 0x109f2c: 0xc04115c  jal         func_104570
label_109f30:
    if (ctx->pc == 0x109F30u) {
        ctx->pc = 0x109F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F2Cu;
        // 0x109f30: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F34u;
        goto label_109f34;
    }
    ctx->pc = 0x109F2Cu;
    SET_GPR_U32(ctx, 31, 0x109F34u);
    ctx->pc = 0x109F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F2Cu;
    // 0x109f30: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x109F2Cu, 0x109F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F34u;
label_109f34:
    // 0x109f34: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109f38:
    // 0x109f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109f3c:
    // 0x109f3c: 0xc04115c  jal         func_104570
label_109f40:
    if (ctx->pc == 0x109F40u) {
        ctx->pc = 0x109F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F3Cu;
        // 0x109f40: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F44u;
        goto label_109f44;
    }
    ctx->pc = 0x109F3Cu;
    SET_GPR_U32(ctx, 31, 0x109F44u);
    ctx->pc = 0x109F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F3Cu;
    // 0x109f40: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x109F3Cu, 0x109F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F44u;
label_109f44:
    // 0x109f44: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x109f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109f48:
    // 0x109f48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109f4c:
    // 0x109f4c: 0xc04115c  jal         func_104570
label_109f50:
    if (ctx->pc == 0x109F50u) {
        ctx->pc = 0x109F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F4Cu;
        // 0x109f50: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F54u;
        goto label_109f54;
    }
    ctx->pc = 0x109F4Cu;
    SET_GPR_U32(ctx, 31, 0x109F54u);
    ctx->pc = 0x109F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F4Cu;
    // 0x109f50: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104570u, 0x109F4Cu, 0x109F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F54u;
label_109f54:
    // 0x109f54: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x109f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_109f58:
    // 0x109f58: 0xc041128  jal         func_1044A0
label_109f5c:
    if (ctx->pc == 0x109F5Cu) {
        ctx->pc = 0x109F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F58u;
        // 0x109f5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F60u;
        goto label_109f60;
    }
    ctx->pc = 0x109F58u;
    SET_GPR_U32(ctx, 31, 0x109F60u);
    ctx->pc = 0x109F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F58u;
    // 0x109f5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109F58u, 0x109F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F60u;
label_109f60:
    // 0x109f60: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x109f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_109f64:
    // 0x109f64: 0xc041128  jal         func_1044A0
label_109f68:
    if (ctx->pc == 0x109F68u) {
        ctx->pc = 0x109F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F64u;
        // 0x109f68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F6Cu;
        goto label_109f6c;
    }
    ctx->pc = 0x109F64u;
    SET_GPR_U32(ctx, 31, 0x109F6Cu);
    ctx->pc = 0x109F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F64u;
    // 0x109f68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109F64u, 0x109F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F6Cu;
label_109f6c:
    // 0x109f6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x109f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_109f70:
    // 0x109f70: 0xc041128  jal         func_1044A0
label_109f74:
    if (ctx->pc == 0x109F74u) {
        ctx->pc = 0x109F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F70u;
        // 0x109f74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F78u;
        goto label_109f78;
    }
    ctx->pc = 0x109F70u;
    SET_GPR_U32(ctx, 31, 0x109F78u);
    ctx->pc = 0x109F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F70u;
    // 0x109f74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x109F70u, 0x109F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F78u;
label_109f78:
    // 0x109f78: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_109f7c:
    if (ctx->pc == 0x109F7Cu) {
        ctx->pc = 0x109F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F78u;
        // 0x109f7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F80u;
        goto label_109f80;
    }
    ctx->pc = 0x109F78u;
    {
        const bool branch_taken_0x109f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x109f78) {
            ctx->pc = 0x109F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109F78u;
            // 0x109f7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F80u;
label_109f80:
    // 0x109f80: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x109f80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_109f84:
    // 0x109f84: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_109f88:
    if (ctx->pc == 0x109F88u) {
        ctx->pc = 0x109F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F84u;
        // 0x109f88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F8Cu;
        goto label_109f8c;
    }
    ctx->pc = 0x109F84u;
    {
        const bool branch_taken_0x109f84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F84u;
        // 0x109f88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f84) {
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F8Cu;
label_109f8c:
    // 0x109f8c: 0xe0f809  jalr        $a3
label_109f90:
    if (ctx->pc == 0x109F90u) {
        ctx->pc = 0x109F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F8Cu;
        // 0x109f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109F94u;
        goto label_109f94;
    }
    ctx->pc = 0x109F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x109F94u);
        ctx->pc = 0x109F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F8Cu;
        // 0x109f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109F8Cu, 0x109F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109F94u;
label_109f94:
    // 0x109f94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x109f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_109f98:
    // 0x109f98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x109f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_109f9c:
    // 0x109f9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x109f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_109fa0:
    // 0x109fa0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x109fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_109fa4:
    // 0x109fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_109fa8:
    // 0x109fa8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x109fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_109fac:
    // 0x109fac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x109facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_109fb0:
    // 0x109fb0: 0x3e00008  jr          $ra
label_109fb4:
    if (ctx->pc == 0x109FB4u) {
        ctx->pc = 0x109FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FB0u;
        // 0x109fb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109FB8u;
        goto label_fallthrough_0x109fb0;
    }
    ctx->pc = 0x109FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FB0u;
        // 0x109fb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x109fb0:
    ctx->pc = 0x109FB8u;
}
