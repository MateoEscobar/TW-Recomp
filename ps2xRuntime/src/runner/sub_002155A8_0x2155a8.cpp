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

// Function: sub_002155A8
// Address: 0x2155a8 - 0x215ca0
void sub_002155A8_0x2155a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002155A8_0x2155a8");
#endif

    switch (ctx->pc) {
        case 0x2155a8u: goto label_2155a8;
        case 0x2155acu: goto label_2155ac;
        case 0x2155b0u: goto label_2155b0;
        case 0x2155b4u: goto label_2155b4;
        case 0x2155b8u: goto label_2155b8;
        case 0x2155bcu: goto label_2155bc;
        case 0x2155c0u: goto label_2155c0;
        case 0x2155c4u: goto label_2155c4;
        case 0x2155c8u: goto label_2155c8;
        case 0x2155ccu: goto label_2155cc;
        case 0x2155d0u: goto label_2155d0;
        case 0x2155d4u: goto label_2155d4;
        case 0x2155d8u: goto label_2155d8;
        case 0x2155dcu: goto label_2155dc;
        case 0x2155e0u: goto label_2155e0;
        case 0x2155e4u: goto label_2155e4;
        case 0x2155e8u: goto label_2155e8;
        case 0x2155ecu: goto label_2155ec;
        case 0x2155f0u: goto label_2155f0;
        case 0x2155f4u: goto label_2155f4;
        case 0x2155f8u: goto label_2155f8;
        case 0x2155fcu: goto label_2155fc;
        case 0x215600u: goto label_215600;
        case 0x215604u: goto label_215604;
        case 0x215608u: goto label_215608;
        case 0x21560cu: goto label_21560c;
        case 0x215610u: goto label_215610;
        case 0x215614u: goto label_215614;
        case 0x215618u: goto label_215618;
        case 0x21561cu: goto label_21561c;
        case 0x215620u: goto label_215620;
        case 0x215624u: goto label_215624;
        case 0x215628u: goto label_215628;
        case 0x21562cu: goto label_21562c;
        case 0x215630u: goto label_215630;
        case 0x215634u: goto label_215634;
        case 0x215638u: goto label_215638;
        case 0x21563cu: goto label_21563c;
        case 0x215640u: goto label_215640;
        case 0x215644u: goto label_215644;
        case 0x215648u: goto label_215648;
        case 0x21564cu: goto label_21564c;
        case 0x215650u: goto label_215650;
        case 0x215654u: goto label_215654;
        case 0x215658u: goto label_215658;
        case 0x21565cu: goto label_21565c;
        case 0x215660u: goto label_215660;
        case 0x215664u: goto label_215664;
        case 0x215668u: goto label_215668;
        case 0x21566cu: goto label_21566c;
        case 0x215670u: goto label_215670;
        case 0x215674u: goto label_215674;
        case 0x215678u: goto label_215678;
        case 0x21567cu: goto label_21567c;
        case 0x215680u: goto label_215680;
        case 0x215684u: goto label_215684;
        case 0x215688u: goto label_215688;
        case 0x21568cu: goto label_21568c;
        case 0x215690u: goto label_215690;
        case 0x215694u: goto label_215694;
        case 0x215698u: goto label_215698;
        case 0x21569cu: goto label_21569c;
        case 0x2156a0u: goto label_2156a0;
        case 0x2156a4u: goto label_2156a4;
        case 0x2156a8u: goto label_2156a8;
        case 0x2156acu: goto label_2156ac;
        case 0x2156b0u: goto label_2156b0;
        case 0x2156b4u: goto label_2156b4;
        case 0x2156b8u: goto label_2156b8;
        case 0x2156bcu: goto label_2156bc;
        case 0x2156c0u: goto label_2156c0;
        case 0x2156c4u: goto label_2156c4;
        case 0x2156c8u: goto label_2156c8;
        case 0x2156ccu: goto label_2156cc;
        case 0x2156d0u: goto label_2156d0;
        case 0x2156d4u: goto label_2156d4;
        case 0x2156d8u: goto label_2156d8;
        case 0x2156dcu: goto label_2156dc;
        case 0x2156e0u: goto label_2156e0;
        case 0x2156e4u: goto label_2156e4;
        case 0x2156e8u: goto label_2156e8;
        case 0x2156ecu: goto label_2156ec;
        case 0x2156f0u: goto label_2156f0;
        case 0x2156f4u: goto label_2156f4;
        case 0x2156f8u: goto label_2156f8;
        case 0x2156fcu: goto label_2156fc;
        case 0x215700u: goto label_215700;
        case 0x215704u: goto label_215704;
        case 0x215708u: goto label_215708;
        case 0x21570cu: goto label_21570c;
        case 0x215710u: goto label_215710;
        case 0x215714u: goto label_215714;
        case 0x215718u: goto label_215718;
        case 0x21571cu: goto label_21571c;
        case 0x215720u: goto label_215720;
        case 0x215724u: goto label_215724;
        case 0x215728u: goto label_215728;
        case 0x21572cu: goto label_21572c;
        case 0x215730u: goto label_215730;
        case 0x215734u: goto label_215734;
        case 0x215738u: goto label_215738;
        case 0x21573cu: goto label_21573c;
        case 0x215740u: goto label_215740;
        case 0x215744u: goto label_215744;
        case 0x215748u: goto label_215748;
        case 0x21574cu: goto label_21574c;
        case 0x215750u: goto label_215750;
        case 0x215754u: goto label_215754;
        case 0x215758u: goto label_215758;
        case 0x21575cu: goto label_21575c;
        case 0x215760u: goto label_215760;
        case 0x215764u: goto label_215764;
        case 0x215768u: goto label_215768;
        case 0x21576cu: goto label_21576c;
        case 0x215770u: goto label_215770;
        case 0x215774u: goto label_215774;
        case 0x215778u: goto label_215778;
        case 0x21577cu: goto label_21577c;
        case 0x215780u: goto label_215780;
        case 0x215784u: goto label_215784;
        case 0x215788u: goto label_215788;
        case 0x21578cu: goto label_21578c;
        case 0x215790u: goto label_215790;
        case 0x215794u: goto label_215794;
        case 0x215798u: goto label_215798;
        case 0x21579cu: goto label_21579c;
        case 0x2157a0u: goto label_2157a0;
        case 0x2157a4u: goto label_2157a4;
        case 0x2157a8u: goto label_2157a8;
        case 0x2157acu: goto label_2157ac;
        case 0x2157b0u: goto label_2157b0;
        case 0x2157b4u: goto label_2157b4;
        case 0x2157b8u: goto label_2157b8;
        case 0x2157bcu: goto label_2157bc;
        case 0x2157c0u: goto label_2157c0;
        case 0x2157c4u: goto label_2157c4;
        case 0x2157c8u: goto label_2157c8;
        case 0x2157ccu: goto label_2157cc;
        case 0x2157d0u: goto label_2157d0;
        case 0x2157d4u: goto label_2157d4;
        case 0x2157d8u: goto label_2157d8;
        case 0x2157dcu: goto label_2157dc;
        case 0x2157e0u: goto label_2157e0;
        case 0x2157e4u: goto label_2157e4;
        case 0x2157e8u: goto label_2157e8;
        case 0x2157ecu: goto label_2157ec;
        case 0x2157f0u: goto label_2157f0;
        case 0x2157f4u: goto label_2157f4;
        case 0x2157f8u: goto label_2157f8;
        case 0x2157fcu: goto label_2157fc;
        case 0x215800u: goto label_215800;
        case 0x215804u: goto label_215804;
        case 0x215808u: goto label_215808;
        case 0x21580cu: goto label_21580c;
        case 0x215810u: goto label_215810;
        case 0x215814u: goto label_215814;
        case 0x215818u: goto label_215818;
        case 0x21581cu: goto label_21581c;
        case 0x215820u: goto label_215820;
        case 0x215824u: goto label_215824;
        case 0x215828u: goto label_215828;
        case 0x21582cu: goto label_21582c;
        case 0x215830u: goto label_215830;
        case 0x215834u: goto label_215834;
        case 0x215838u: goto label_215838;
        case 0x21583cu: goto label_21583c;
        case 0x215840u: goto label_215840;
        case 0x215844u: goto label_215844;
        case 0x215848u: goto label_215848;
        case 0x21584cu: goto label_21584c;
        case 0x215850u: goto label_215850;
        case 0x215854u: goto label_215854;
        case 0x215858u: goto label_215858;
        case 0x21585cu: goto label_21585c;
        case 0x215860u: goto label_215860;
        case 0x215864u: goto label_215864;
        case 0x215868u: goto label_215868;
        case 0x21586cu: goto label_21586c;
        case 0x215870u: goto label_215870;
        case 0x215874u: goto label_215874;
        case 0x215878u: goto label_215878;
        case 0x21587cu: goto label_21587c;
        case 0x215880u: goto label_215880;
        case 0x215884u: goto label_215884;
        case 0x215888u: goto label_215888;
        case 0x21588cu: goto label_21588c;
        case 0x215890u: goto label_215890;
        case 0x215894u: goto label_215894;
        case 0x215898u: goto label_215898;
        case 0x21589cu: goto label_21589c;
        case 0x2158a0u: goto label_2158a0;
        case 0x2158a4u: goto label_2158a4;
        case 0x2158a8u: goto label_2158a8;
        case 0x2158acu: goto label_2158ac;
        case 0x2158b0u: goto label_2158b0;
        case 0x2158b4u: goto label_2158b4;
        case 0x2158b8u: goto label_2158b8;
        case 0x2158bcu: goto label_2158bc;
        case 0x2158c0u: goto label_2158c0;
        case 0x2158c4u: goto label_2158c4;
        case 0x2158c8u: goto label_2158c8;
        case 0x2158ccu: goto label_2158cc;
        case 0x2158d0u: goto label_2158d0;
        case 0x2158d4u: goto label_2158d4;
        case 0x2158d8u: goto label_2158d8;
        case 0x2158dcu: goto label_2158dc;
        case 0x2158e0u: goto label_2158e0;
        case 0x2158e4u: goto label_2158e4;
        case 0x2158e8u: goto label_2158e8;
        case 0x2158ecu: goto label_2158ec;
        case 0x2158f0u: goto label_2158f0;
        case 0x2158f4u: goto label_2158f4;
        case 0x2158f8u: goto label_2158f8;
        case 0x2158fcu: goto label_2158fc;
        case 0x215900u: goto label_215900;
        case 0x215904u: goto label_215904;
        case 0x215908u: goto label_215908;
        case 0x21590cu: goto label_21590c;
        case 0x215910u: goto label_215910;
        case 0x215914u: goto label_215914;
        case 0x215918u: goto label_215918;
        case 0x21591cu: goto label_21591c;
        case 0x215920u: goto label_215920;
        case 0x215924u: goto label_215924;
        case 0x215928u: goto label_215928;
        case 0x21592cu: goto label_21592c;
        case 0x215930u: goto label_215930;
        case 0x215934u: goto label_215934;
        case 0x215938u: goto label_215938;
        case 0x21593cu: goto label_21593c;
        case 0x215940u: goto label_215940;
        case 0x215944u: goto label_215944;
        case 0x215948u: goto label_215948;
        case 0x21594cu: goto label_21594c;
        case 0x215950u: goto label_215950;
        case 0x215954u: goto label_215954;
        case 0x215958u: goto label_215958;
        case 0x21595cu: goto label_21595c;
        case 0x215960u: goto label_215960;
        case 0x215964u: goto label_215964;
        case 0x215968u: goto label_215968;
        case 0x21596cu: goto label_21596c;
        case 0x215970u: goto label_215970;
        case 0x215974u: goto label_215974;
        case 0x215978u: goto label_215978;
        case 0x21597cu: goto label_21597c;
        case 0x215980u: goto label_215980;
        case 0x215984u: goto label_215984;
        case 0x215988u: goto label_215988;
        case 0x21598cu: goto label_21598c;
        case 0x215990u: goto label_215990;
        case 0x215994u: goto label_215994;
        case 0x215998u: goto label_215998;
        case 0x21599cu: goto label_21599c;
        case 0x2159a0u: goto label_2159a0;
        case 0x2159a4u: goto label_2159a4;
        case 0x2159a8u: goto label_2159a8;
        case 0x2159acu: goto label_2159ac;
        case 0x2159b0u: goto label_2159b0;
        case 0x2159b4u: goto label_2159b4;
        case 0x2159b8u: goto label_2159b8;
        case 0x2159bcu: goto label_2159bc;
        case 0x2159c0u: goto label_2159c0;
        case 0x2159c4u: goto label_2159c4;
        case 0x2159c8u: goto label_2159c8;
        case 0x2159ccu: goto label_2159cc;
        case 0x2159d0u: goto label_2159d0;
        case 0x2159d4u: goto label_2159d4;
        case 0x2159d8u: goto label_2159d8;
        case 0x2159dcu: goto label_2159dc;
        case 0x2159e0u: goto label_2159e0;
        case 0x2159e4u: goto label_2159e4;
        case 0x2159e8u: goto label_2159e8;
        case 0x2159ecu: goto label_2159ec;
        case 0x2159f0u: goto label_2159f0;
        case 0x2159f4u: goto label_2159f4;
        case 0x2159f8u: goto label_2159f8;
        case 0x2159fcu: goto label_2159fc;
        case 0x215a00u: goto label_215a00;
        case 0x215a04u: goto label_215a04;
        case 0x215a08u: goto label_215a08;
        case 0x215a0cu: goto label_215a0c;
        case 0x215a10u: goto label_215a10;
        case 0x215a14u: goto label_215a14;
        case 0x215a18u: goto label_215a18;
        case 0x215a1cu: goto label_215a1c;
        case 0x215a20u: goto label_215a20;
        case 0x215a24u: goto label_215a24;
        case 0x215a28u: goto label_215a28;
        case 0x215a2cu: goto label_215a2c;
        case 0x215a30u: goto label_215a30;
        case 0x215a34u: goto label_215a34;
        case 0x215a38u: goto label_215a38;
        case 0x215a3cu: goto label_215a3c;
        case 0x215a40u: goto label_215a40;
        case 0x215a44u: goto label_215a44;
        case 0x215a48u: goto label_215a48;
        case 0x215a4cu: goto label_215a4c;
        case 0x215a50u: goto label_215a50;
        case 0x215a54u: goto label_215a54;
        case 0x215a58u: goto label_215a58;
        case 0x215a5cu: goto label_215a5c;
        case 0x215a60u: goto label_215a60;
        case 0x215a64u: goto label_215a64;
        case 0x215a68u: goto label_215a68;
        case 0x215a6cu: goto label_215a6c;
        case 0x215a70u: goto label_215a70;
        case 0x215a74u: goto label_215a74;
        case 0x215a78u: goto label_215a78;
        case 0x215a7cu: goto label_215a7c;
        case 0x215a80u: goto label_215a80;
        case 0x215a84u: goto label_215a84;
        case 0x215a88u: goto label_215a88;
        case 0x215a8cu: goto label_215a8c;
        case 0x215a90u: goto label_215a90;
        case 0x215a94u: goto label_215a94;
        case 0x215a98u: goto label_215a98;
        case 0x215a9cu: goto label_215a9c;
        case 0x215aa0u: goto label_215aa0;
        case 0x215aa4u: goto label_215aa4;
        case 0x215aa8u: goto label_215aa8;
        case 0x215aacu: goto label_215aac;
        case 0x215ab0u: goto label_215ab0;
        case 0x215ab4u: goto label_215ab4;
        case 0x215ab8u: goto label_215ab8;
        case 0x215abcu: goto label_215abc;
        case 0x215ac0u: goto label_215ac0;
        case 0x215ac4u: goto label_215ac4;
        case 0x215ac8u: goto label_215ac8;
        case 0x215accu: goto label_215acc;
        case 0x215ad0u: goto label_215ad0;
        case 0x215ad4u: goto label_215ad4;
        case 0x215ad8u: goto label_215ad8;
        case 0x215adcu: goto label_215adc;
        case 0x215ae0u: goto label_215ae0;
        case 0x215ae4u: goto label_215ae4;
        case 0x215ae8u: goto label_215ae8;
        case 0x215aecu: goto label_215aec;
        case 0x215af0u: goto label_215af0;
        case 0x215af4u: goto label_215af4;
        case 0x215af8u: goto label_215af8;
        case 0x215afcu: goto label_215afc;
        case 0x215b00u: goto label_215b00;
        case 0x215b04u: goto label_215b04;
        case 0x215b08u: goto label_215b08;
        case 0x215b0cu: goto label_215b0c;
        case 0x215b10u: goto label_215b10;
        case 0x215b14u: goto label_215b14;
        case 0x215b18u: goto label_215b18;
        case 0x215b1cu: goto label_215b1c;
        case 0x215b20u: goto label_215b20;
        case 0x215b24u: goto label_215b24;
        case 0x215b28u: goto label_215b28;
        case 0x215b2cu: goto label_215b2c;
        case 0x215b30u: goto label_215b30;
        case 0x215b34u: goto label_215b34;
        case 0x215b38u: goto label_215b38;
        case 0x215b3cu: goto label_215b3c;
        case 0x215b40u: goto label_215b40;
        case 0x215b44u: goto label_215b44;
        case 0x215b48u: goto label_215b48;
        case 0x215b4cu: goto label_215b4c;
        case 0x215b50u: goto label_215b50;
        case 0x215b54u: goto label_215b54;
        case 0x215b58u: goto label_215b58;
        case 0x215b5cu: goto label_215b5c;
        case 0x215b60u: goto label_215b60;
        case 0x215b64u: goto label_215b64;
        case 0x215b68u: goto label_215b68;
        case 0x215b6cu: goto label_215b6c;
        case 0x215b70u: goto label_215b70;
        case 0x215b74u: goto label_215b74;
        case 0x215b78u: goto label_215b78;
        case 0x215b7cu: goto label_215b7c;
        case 0x215b80u: goto label_215b80;
        case 0x215b84u: goto label_215b84;
        case 0x215b88u: goto label_215b88;
        case 0x215b8cu: goto label_215b8c;
        case 0x215b90u: goto label_215b90;
        case 0x215b94u: goto label_215b94;
        case 0x215b98u: goto label_215b98;
        case 0x215b9cu: goto label_215b9c;
        case 0x215ba0u: goto label_215ba0;
        case 0x215ba4u: goto label_215ba4;
        case 0x215ba8u: goto label_215ba8;
        case 0x215bacu: goto label_215bac;
        case 0x215bb0u: goto label_215bb0;
        case 0x215bb4u: goto label_215bb4;
        case 0x215bb8u: goto label_215bb8;
        case 0x215bbcu: goto label_215bbc;
        case 0x215bc0u: goto label_215bc0;
        case 0x215bc4u: goto label_215bc4;
        case 0x215bc8u: goto label_215bc8;
        case 0x215bccu: goto label_215bcc;
        case 0x215bd0u: goto label_215bd0;
        case 0x215bd4u: goto label_215bd4;
        case 0x215bd8u: goto label_215bd8;
        case 0x215bdcu: goto label_215bdc;
        case 0x215be0u: goto label_215be0;
        case 0x215be4u: goto label_215be4;
        case 0x215be8u: goto label_215be8;
        case 0x215becu: goto label_215bec;
        case 0x215bf0u: goto label_215bf0;
        case 0x215bf4u: goto label_215bf4;
        case 0x215bf8u: goto label_215bf8;
        case 0x215bfcu: goto label_215bfc;
        case 0x215c00u: goto label_215c00;
        case 0x215c04u: goto label_215c04;
        case 0x215c08u: goto label_215c08;
        case 0x215c0cu: goto label_215c0c;
        case 0x215c10u: goto label_215c10;
        case 0x215c14u: goto label_215c14;
        case 0x215c18u: goto label_215c18;
        case 0x215c1cu: goto label_215c1c;
        case 0x215c20u: goto label_215c20;
        case 0x215c24u: goto label_215c24;
        case 0x215c28u: goto label_215c28;
        case 0x215c2cu: goto label_215c2c;
        case 0x215c30u: goto label_215c30;
        case 0x215c34u: goto label_215c34;
        case 0x215c38u: goto label_215c38;
        case 0x215c3cu: goto label_215c3c;
        case 0x215c40u: goto label_215c40;
        case 0x215c44u: goto label_215c44;
        case 0x215c48u: goto label_215c48;
        case 0x215c4cu: goto label_215c4c;
        case 0x215c50u: goto label_215c50;
        case 0x215c54u: goto label_215c54;
        case 0x215c58u: goto label_215c58;
        case 0x215c5cu: goto label_215c5c;
        case 0x215c60u: goto label_215c60;
        case 0x215c64u: goto label_215c64;
        case 0x215c68u: goto label_215c68;
        case 0x215c6cu: goto label_215c6c;
        case 0x215c70u: goto label_215c70;
        case 0x215c74u: goto label_215c74;
        case 0x215c78u: goto label_215c78;
        case 0x215c7cu: goto label_215c7c;
        case 0x215c80u: goto label_215c80;
        case 0x215c84u: goto label_215c84;
        case 0x215c88u: goto label_215c88;
        case 0x215c8cu: goto label_215c8c;
        case 0x215c90u: goto label_215c90;
        case 0x215c94u: goto label_215c94;
        case 0x215c98u: goto label_215c98;
        case 0x215c9cu: goto label_215c9c;
        default: break;
    }

    ctx->pc = 0x2155a8u;

label_2155a8:
    // 0x2155a8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2155a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2155ac:
    // 0x2155ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2155acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2155b0:
    // 0x2155b0: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2155b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_2155b4:
    // 0x2155b4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2155b8:
    // 0x2155b8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x2155b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_2155bc:
    // 0x2155bc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2155bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_2155c0:
    // 0x2155c0: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x2155c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2155c4:
    // 0x2155c4: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x2155c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_2155c8:
    // 0x2155c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2155c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2155cc:
    // 0x2155cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2155ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2155d0:
    // 0x2155d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2155d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2155d4:
    // 0x2155d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2155d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2155d8:
    // 0x2155d8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2155d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2155dc:
    // 0x2155dc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2155dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_2155e0:
    // 0x2155e0: 0x25089f70  addiu       $t0, $t0, -0x6090
    ctx->pc = 0x2155e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942576));
label_2155e4:
    // 0x2155e4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2155e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_2155e8:
    // 0x2155e8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2155e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2155ec:
    // 0x2155ec: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2155ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_2155f0:
    // 0x2155f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2155f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2155f4:
    // 0x2155f4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2155f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_2155f8:
    // 0x2155f8: 0x24a5a098  addiu       $a1, $a1, -0x5F68
    ctx->pc = 0x2155f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942872));
label_2155fc:
    // 0x2155fc: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2155fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_215600:
    // 0x215600: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x215600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_215604:
    // 0x215604: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x215604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_215608:
    // 0x215608: 0x240900d0  addiu       $t1, $zero, 0xD0
    ctx->pc = 0x215608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_21560c:
    // 0x21560c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x21560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_215610:
    // 0x215610: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x215610u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215614:
    // 0x215614: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x215614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_215618:
    // 0x215618: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x215618u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21561c:
    // 0x21561c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x21561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_215620:
    // 0x215620: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x215620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_215624:
    // 0x215624: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x215624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_215628:
    // 0x215628: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x215628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_21562c:
    // 0x21562c: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x21562cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_215630:
    // 0x215630: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x215630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215634:
    // 0x215634: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x215634u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_215638:
    // 0x215638: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x215638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_21563c:
    // 0x21563c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x21563cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_215640:
    // 0x215640: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x215640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_215644:
    // 0x215644: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x215644u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_215648:
    // 0x215648: 0x8ccc27e4  lw          $t4, 0x27E4($a2)
    ctx->pc = 0x215648u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10212)));
label_21564c:
    // 0x21564c: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x21564cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_215650:
    // 0x215650: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x215650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_215654:
    // 0x215654: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x215654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_215658:
    // 0x215658: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x215658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_21565c:
    // 0x21565c: 0x40f809  jalr        $v0
label_215660:
    if (ctx->pc == 0x215660u) {
        ctx->pc = 0x215660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21565Cu;
        // 0x215660: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215664u;
        goto label_215664;
    }
    ctx->pc = 0x21565Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215664u);
        ctx->pc = 0x215660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21565Cu;
        // 0x215660: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21565Cu, 0x215664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215664u;
label_215664:
    // 0x215664: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x215664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215668:
    // 0x215668: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_21566c:
    if (ctx->pc == 0x21566Cu) {
        ctx->pc = 0x21566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215668u;
        // 0x21566c: 0xae680088  sw          $t0, 0x88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215670u;
        goto label_215670;
    }
    ctx->pc = 0x215668u;
    {
        const bool branch_taken_0x215668 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x215668) {
            ctx->pc = 0x21566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215668u;
            // 0x21566c: 0xae680088  sw          $t0, 0x88($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215680u;
            goto label_215680;
        }
    }
    ctx->pc = 0x215670u;
label_215670:
    // 0x215670: 0xc0784ce  jal         func_1E1338
label_215674:
    if (ctx->pc == 0x215674u) {
        ctx->pc = 0x215674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215670u;
        // 0x215674: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215678u;
        goto label_215678;
    }
    ctx->pc = 0x215670u;
    SET_GPR_U32(ctx, 31, 0x215678u);
    ctx->pc = 0x215674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215670u;
    // 0x215674: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1338u, 0x215670u, 0x215678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215678u;
label_215678:
    // 0x215678: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x215678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21567c:
    // 0x21567c: 0xae680088  sw          $t0, 0x88($s3)
    ctx->pc = 0x21567cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 8));
label_215680:
    // 0x215680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215684:
    // 0x215684: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x215684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_215688:
    // 0x215688: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x215688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21568c:
    // 0x21568c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x21568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_215690:
    // 0x215690: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x215690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_215694:
    // 0x215694: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x215694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_215698:
    // 0x215698: 0x60f809  jalr        $v1
label_21569c:
    if (ctx->pc == 0x21569Cu) {
        ctx->pc = 0x21569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215698u;
        // 0x21569c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156A0u;
        goto label_2156a0;
    }
    ctx->pc = 0x215698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2156A0u);
        ctx->pc = 0x21569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215698u;
        // 0x21569c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215698u, 0x2156A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2156A0u;
label_2156a0:
    // 0x2156a0: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2156a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2156a4:
    // 0x2156a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2156a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2156a8:
    // 0x2156a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2156a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2156ac:
    // 0x2156ac: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x2156acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_2156b0:
    // 0x2156b0: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2156b4:
    // 0x2156b4: 0x60f809  jalr        $v1
label_2156b8:
    if (ctx->pc == 0x2156B8u) {
        ctx->pc = 0x2156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156B4u;
        // 0x2156b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156BCu;
        goto label_2156bc;
    }
    ctx->pc = 0x2156B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2156BCu);
        ctx->pc = 0x2156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156B4u;
        // 0x2156b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156B4u, 0x2156BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2156BCu;
label_2156bc:
    // 0x2156bc: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2156bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2156c0:
    // 0x2156c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2156c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2156c4:
    // 0x2156c4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2156c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2156c8:
    // 0x2156c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2156c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2156cc:
    // 0x2156cc: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x2156ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_2156d0:
    // 0x2156d0: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x2156d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_2156d4:
    // 0x2156d4: 0x40f809  jalr        $v0
label_2156d8:
    if (ctx->pc == 0x2156D8u) {
        ctx->pc = 0x2156D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156D4u;
        // 0x2156d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156DCu;
        goto label_2156dc;
    }
    ctx->pc = 0x2156D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2156DCu);
        ctx->pc = 0x2156D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156D4u;
        // 0x2156d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156D4u, 0x2156DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2156DCu;
label_2156dc:
    // 0x2156dc: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x2156dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2156e0:
    // 0x2156e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2156e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2156e4:
    // 0x2156e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2156e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2156e8:
    // 0x2156e8: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_2156ec:
    // 0x2156ec: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x2156ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_2156f0:
    // 0x2156f0: 0x60f809  jalr        $v1
label_2156f4:
    if (ctx->pc == 0x2156F4u) {
        ctx->pc = 0x2156F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156F0u;
        // 0x2156f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156F8u;
        goto label_2156f8;
    }
    ctx->pc = 0x2156F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2156F8u);
        ctx->pc = 0x2156F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156F0u;
        // 0x2156f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156F0u, 0x2156F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2156F8u;
label_2156f8:
    // 0x2156f8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_2156fc:
    // 0x2156fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2156fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_215700:
    // 0x215700: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x215700u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_215704:
    // 0x215704: 0x12e30140  beq         $s7, $v1, . + 4 + (0x140 << 2)
label_215708:
    if (ctx->pc == 0x215708u) {
        ctx->pc = 0x215708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215704u;
        // 0x215708: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21570Cu;
        goto label_21570c;
    }
    ctx->pc = 0x215704u;
    {
        const bool branch_taken_0x215704 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        ctx->pc = 0x215708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215704u;
        // 0x215708: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215704) {
            ctx->pc = 0x215C08u;
            goto label_215c08;
        }
    }
    ctx->pc = 0x21570Cu;
label_21570c:
    // 0x21570c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x21570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_215710:
    // 0x215710: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x215710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_215714:
    // 0x215714: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x215714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_215718:
    // 0x215718: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x215718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_21571c:
    // 0x21571c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x21571cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_215720:
    // 0x215720: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x215720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_215724:
    // 0x215724: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x215724u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_215728:
    // 0x215728: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21572c:
    // 0x21572c: 0x0  nop
    ctx->pc = 0x21572cu;
    // NOP
label_215730:
    // 0x215730: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_215734:
    // 0x215734: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x215734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_215738:
    // 0x215738: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x215738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_21573c:
    // 0x21573c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215740:
    // 0x215740: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x215740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215744:
    // 0x215744: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x215744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_215748:
    // 0x215748: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x215748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21574c:
    // 0x21574c: 0x8c5514d8  lw          $s5, 0x14D8($v0)
    ctx->pc = 0x21574cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_215750:
    // 0x215750: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x215750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_215754:
    // 0x215754: 0x12a20009  beq         $s5, $v0, . + 4 + (0x9 << 2)
label_215758:
    if (ctx->pc == 0x215758u) {
        ctx->pc = 0x215758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215754u;
        // 0x215758: 0x247614d4  addiu       $s6, $v1, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 5332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21575Cu;
        goto label_21575c;
    }
    ctx->pc = 0x215754u;
    {
        const bool branch_taken_0x215754 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x215758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215754u;
        // 0x215758: 0x247614d4  addiu       $s6, $v1, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 5332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215754) {
            ctx->pc = 0x21577Cu;
            goto label_21577c;
        }
    }
    ctx->pc = 0x21575Cu;
label_21575c:
    // 0x21575c: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x21575cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_215760:
    // 0x215760: 0x12a30006  beq         $s5, $v1, . + 4 + (0x6 << 2)
label_215764:
    if (ctx->pc == 0x215764u) {
        ctx->pc = 0x215764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215760u;
        // 0x215764: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215768u;
        goto label_215768;
    }
    ctx->pc = 0x215760u;
    {
        const bool branch_taken_0x215760 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x215764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215760u;
        // 0x215764: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215760) {
            ctx->pc = 0x21577Cu;
            goto label_21577c;
        }
    }
    ctx->pc = 0x215768u;
label_215768:
    // 0x215768: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_21576c:
    // 0x21576c: 0xc109076  jal         func_4241D8
label_215770:
    if (ctx->pc == 0x215770u) {
        ctx->pc = 0x215770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21576Cu;
        // 0x215770: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215774u;
        goto label_215774;
    }
    ctx->pc = 0x21576Cu;
    SET_GPR_U32(ctx, 31, 0x215774u);
    ctx->pc = 0x215770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21576Cu;
    // 0x215770: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x21576Cu, 0x215774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215774u;
label_215774:
    // 0x215774: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_215778:
    if (ctx->pc == 0x215778u) {
        ctx->pc = 0x21577Cu;
        goto label_21577c;
    }
    ctx->pc = 0x215774u;
    {
        const bool branch_taken_0x215774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215774) {
            ctx->pc = 0x215780u;
            goto label_215780;
        }
    }
    ctx->pc = 0x21577Cu;
label_21577c:
    // 0x21577c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21577cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215780:
    // 0x215780: 0x1200011c  beqz        $s0, . + 4 + (0x11C << 2)
label_215784:
    if (ctx->pc == 0x215784u) {
        ctx->pc = 0x215784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215780u;
        // 0x215784: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215788u;
        goto label_215788;
    }
    ctx->pc = 0x215780u;
    {
        const bool branch_taken_0x215780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x215784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215780u;
        // 0x215784: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215780) {
            ctx->pc = 0x215BF4u;
            goto label_215bf4;
        }
    }
    ctx->pc = 0x215788u;
label_215788:
    // 0x215788: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x215788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_21578c:
    // 0x21578c: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x21578cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_215790:
    // 0x215790: 0x2445a0a8  addiu       $a1, $v0, -0x5F58
    ctx->pc = 0x215790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942888));
label_215794:
    // 0x215794: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x215794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_215798:
    // 0x215798: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_21579c:
    // 0x21579c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x21579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2157a0:
    // 0x2157a0: 0x24889f70  addiu       $t0, $a0, -0x6090
    ctx->pc = 0x2157a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942576));
label_2157a4:
    // 0x2157a4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2157a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2157a8:
    // 0x2157a8: 0x240900e3  addiu       $t1, $zero, 0xE3
    ctx->pc = 0x2157a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
label_2157ac:
    // 0x2157ac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2157acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2157b0:
    // 0x2157b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2157b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2157b4:
    // 0x2157b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2157b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2157b8:
    // 0x2157b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2157b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2157bc:
    // 0x2157bc: 0x40f809  jalr        $v0
label_2157c0:
    if (ctx->pc == 0x2157C0u) {
        ctx->pc = 0x2157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157BCu;
        // 0x2157c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2157C4u;
        goto label_2157c4;
    }
    ctx->pc = 0x2157BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2157C4u);
        ctx->pc = 0x2157C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157BCu;
        // 0x2157c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2157BCu, 0x2157C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2157C4u;
label_2157c4:
    // 0x2157c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2157c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2157c8:
    // 0x2157c8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2157cc:
    if (ctx->pc == 0x2157CCu) {
        ctx->pc = 0x2157CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157C8u;
        // 0x2157cc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2157D0u;
        goto label_2157d0;
    }
    ctx->pc = 0x2157C8u;
    {
        const bool branch_taken_0x2157c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2157CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157C8u;
        // 0x2157cc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157c8) {
            ctx->pc = 0x2157E0u;
            goto label_2157e0;
        }
    }
    ctx->pc = 0x2157D0u;
label_2157d0:
    // 0x2157d0: 0xc0742aa  jal         func_1D0AA8
label_2157d4:
    if (ctx->pc == 0x2157D4u) {
        ctx->pc = 0x2157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157D0u;
        // 0x2157d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2157D8u;
        goto label_2157d8;
    }
    ctx->pc = 0x2157D0u;
    SET_GPR_U32(ctx, 31, 0x2157D8u);
    ctx->pc = 0x2157D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157D0u;
    // 0x2157d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AA8u, 0x2157D0u, 0x2157D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157D8u;
label_2157d8:
    // 0x2157d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2157d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2157dc:
    // 0x2157dc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2157dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2157e0:
    // 0x2157e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2157e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2157e4:
    // 0x2157e4: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x2157e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2157e8:
    // 0x2157e8: 0xc46100e4  lwc1        $f1, 0xE4($v1)
    ctx->pc = 0x2157e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2157ec:
    // 0x2157ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2157ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2157f0:
    // 0x2157f0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x2157f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2157f4:
    // 0x2157f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2157f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2157f8:
    // 0x2157f8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2157f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2157fc:
    // 0x2157fc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2157fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_215800:
    // 0x215800: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x215800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_215804:
    // 0x215804: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x215804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_215808:
    // 0x215808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_21580c:
    // 0x21580c: 0xc05e602  jal         func_179808
label_215810:
    if (ctx->pc == 0x215810u) {
        ctx->pc = 0x215810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21580Cu;
        // 0x215810: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215814u;
        goto label_215814;
    }
    ctx->pc = 0x21580Cu;
    SET_GPR_U32(ctx, 31, 0x215814u);
    ctx->pc = 0x215810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21580Cu;
    // 0x215810: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x21580Cu, 0x215814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215814u;
label_215814:
    // 0x215814: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x215814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_215818:
    // 0x215818: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x215818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_21581c:
    // 0x21581c: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x21581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_215820:
    // 0x215820: 0x3c090018  lui         $t1, 0x18
    ctx->pc = 0x215820u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24 << 16));
label_215824:
    // 0x215824: 0x84e400c0  lh          $a0, 0xC0($a3)
    ctx->pc = 0x215824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 192)));
label_215828:
    // 0x215828: 0x3c0a0018  lui         $t2, 0x18
    ctx->pc = 0x215828u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)24 << 16));
label_21582c:
    // 0x21582c: 0xc46d00fc  lwc1        $f13, 0xFC($v1)
    ctx->pc = 0x21582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_215830:
    // 0x215830: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x215830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215834:
    // 0x215834: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x215834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_215838:
    // 0x215838: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x215838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21583c:
    // 0x21583c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x21583cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_215840:
    // 0x215840: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_215844:
    // 0x215844: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x215844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215848:
    // 0x215848: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_21584c:
    // 0x21584c: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x21584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_215850:
    // 0x215850: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x215850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_215854:
    // 0x215854: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x215854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_215858:
    // 0x215858: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x215858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21585c:
    // 0x21585c: 0x8fa8006c  lw          $t0, 0x6C($sp)
    ctx->pc = 0x21585cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_215860:
    // 0x215860: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x215860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
label_215864:
    // 0x215864: 0x40f809  jalr        $v0
label_215868:
    if (ctx->pc == 0x215868u) {
        ctx->pc = 0x215868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215864u;
        // 0x215868: 0x354a0002  ori         $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21586Cu;
        goto label_21586c;
    }
    ctx->pc = 0x215864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21586Cu);
        ctx->pc = 0x215868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215864u;
        // 0x215868: 0x354a0002  ori         $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215864u, 0x21586Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21586Cu;
label_21586c:
    // 0x21586c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x21586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_215870:
    // 0x215870: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x215870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_215874:
    // 0x215874: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x215874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
label_215878:
    // 0x215878: 0xa3a00060  sb          $zero, 0x60($sp)
    ctx->pc = 0x215878u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
label_21587c:
    // 0x21587c: 0xa3c00001  sb          $zero, 0x1($fp)
    ctx->pc = 0x21587cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 0));
label_215880:
    // 0x215880: 0xa3c00002  sb          $zero, 0x2($fp)
    ctx->pc = 0x215880u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 0));
label_215884:
    // 0x215884: 0xa3c00003  sb          $zero, 0x3($fp)
    ctx->pc = 0x215884u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 0));
label_215888:
    // 0x215888: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x215888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_21588c:
    // 0x21588c: 0x40f809  jalr        $v0
label_215890:
    if (ctx->pc == 0x215890u) {
        ctx->pc = 0x215890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21588Cu;
        // 0x215890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215894u;
        goto label_215894;
    }
    ctx->pc = 0x21588Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215894u);
        ctx->pc = 0x215890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21588Cu;
        // 0x215890: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21588Cu, 0x215894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215894u;
label_215894:
    // 0x215894: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_215898:
    // 0x215898: 0x16a30004  bne         $s5, $v1, . + 4 + (0x4 << 2)
label_21589c:
    if (ctx->pc == 0x21589Cu) {
        ctx->pc = 0x21589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215898u;
        // 0x21589c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158A0u;
        goto label_2158a0;
    }
    ctx->pc = 0x215898u;
    {
        const bool branch_taken_0x215898 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x21589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215898u;
        // 0x21589c: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215898) {
            ctx->pc = 0x2158ACu;
            goto label_2158ac;
        }
    }
    ctx->pc = 0x2158A0u;
label_2158a0:
    // 0x2158a0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2158a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2158a4:
    // 0x2158a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2158a8:
    if (ctx->pc == 0x2158A8u) {
        ctx->pc = 0x2158A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158A4u;
        // 0x2158a8: 0x24040073  addiu       $a0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158ACu;
        goto label_2158ac;
    }
    ctx->pc = 0x2158A4u;
    {
        const bool branch_taken_0x2158a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158A4u;
        // 0x2158a8: 0x24040073  addiu       $a0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158a4) {
            ctx->pc = 0x2158D0u;
            goto label_2158d0;
        }
    }
    ctx->pc = 0x2158ACu;
label_2158ac:
    // 0x2158ac: 0x56a20004  bnel        $s5, $v0, . + 4 + (0x4 << 2)
label_2158b0:
    if (ctx->pc == 0x2158B0u) {
        ctx->pc = 0x2158B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158ACu;
        // 0x2158b0: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158B4u;
        goto label_2158b4;
    }
    ctx->pc = 0x2158ACu;
    {
        const bool branch_taken_0x2158ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2158ac) {
            ctx->pc = 0x2158B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158ACu;
            // 0x2158b0: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2158C0u;
            goto label_2158c0;
        }
    }
    ctx->pc = 0x2158B4u;
label_2158b4:
    // 0x2158b4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2158b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2158b8:
    // 0x2158b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2158bc:
    if (ctx->pc == 0x2158BCu) {
        ctx->pc = 0x2158BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158B8u;
        // 0x2158bc: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158C0u;
        goto label_2158c0;
    }
    ctx->pc = 0x2158B8u;
    {
        const bool branch_taken_0x2158b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158B8u;
        // 0x2158bc: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158b8) {
            ctx->pc = 0x2158D0u;
            goto label_2158d0;
        }
    }
    ctx->pc = 0x2158C0u;
label_2158c0:
    // 0x2158c0: 0x56a4000d  bnel        $s5, $a0, . + 4 + (0xD << 2)
label_2158c4:
    if (ctx->pc == 0x2158C4u) {
        ctx->pc = 0x2158C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158C0u;
        // 0x2158c4: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158C8u;
        goto label_2158c8;
    }
    ctx->pc = 0x2158C0u;
    {
        const bool branch_taken_0x2158c0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x2158c0) {
            ctx->pc = 0x2158C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158C0u;
            // 0x2158c4: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2158F8u;
            goto label_2158f8;
        }
    }
    ctx->pc = 0x2158C8u;
label_2158c8:
    // 0x2158c8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2158c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2158cc:
    // 0x2158cc: 0x24040075  addiu       $a0, $zero, 0x75
    ctx->pc = 0x2158ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_2158d0:
    // 0x2158d0: 0x861100c8  lh          $s1, 0xC8($s0)
    ctx->pc = 0x2158d0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
label_2158d4:
    // 0x2158d4: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x2158d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_2158d8:
    // 0x2158d8: 0xc067b9c  jal         func_19EE70
label_2158dc:
    if (ctx->pc == 0x2158DCu) {
        ctx->pc = 0x2158DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158D8u;
        // 0x2158dc: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158E0u;
        goto label_2158e0;
    }
    ctx->pc = 0x2158D8u;
    SET_GPR_U32(ctx, 31, 0x2158E0u);
    ctx->pc = 0x2158DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2158D8u;
    // 0x2158dc: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2158D8u, 0x2158E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2158E0u;
label_2158e0:
    // 0x2158e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2158e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2158e4:
    // 0x2158e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2158e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2158e8:
    // 0x2158e8: 0x60f809  jalr        $v1
label_2158ec:
    if (ctx->pc == 0x2158ECu) {
        ctx->pc = 0x2158ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158E8u;
        // 0x2158ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158F0u;
        goto label_2158f0;
    }
    ctx->pc = 0x2158E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2158F0u);
        ctx->pc = 0x2158ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158E8u;
        // 0x2158ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2158E8u, 0x2158F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2158F0u;
label_2158f0:
    // 0x2158f0: 0x10000036  b           . + 4 + (0x36 << 2)
label_2158f4:
    if (ctx->pc == 0x2158F4u) {
        ctx->pc = 0x2158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158F0u;
        // 0x2158f4: 0x8e660088  lw          $a2, 0x88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158F8u;
        goto label_2158f8;
    }
    ctx->pc = 0x2158F0u;
    {
        const bool branch_taken_0x2158f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158F0u;
        // 0x2158f4: 0x8e660088  lw          $a2, 0x88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158f0) {
            ctx->pc = 0x2159CCu;
            goto label_2159cc;
        }
    }
    ctx->pc = 0x2158F8u;
label_2158f8:
    // 0x2158f8: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2158fc:
    // 0x2158fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2158fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_215900:
    // 0x215900: 0xae620094  sw          $v0, 0x94($s3)
    ctx->pc = 0x215900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
label_215904:
    // 0x215904: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215908:
    // 0x215908: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x215908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21590c:
    // 0x21590c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x21590cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_215910:
    // 0x215910: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x215910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_215914:
    // 0x215914: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x215914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_215918:
    // 0x215918: 0x762821  addu        $a1, $v1, $s6
    ctx->pc = 0x215918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_21591c:
    // 0x21591c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x21591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_215920:
    // 0x215920: 0x60f809  jalr        $v1
label_215924:
    if (ctx->pc == 0x215924u) {
        ctx->pc = 0x215924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215920u;
        // 0x215924: 0x24a50049  addiu       $a1, $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215928u;
        goto label_215928;
    }
    ctx->pc = 0x215920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x215928u);
        ctx->pc = 0x215924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215920u;
        // 0x215924: 0x24a50049  addiu       $a1, $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215920u, 0x215928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215928u;
label_215928:
    // 0x215928: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21592c:
    // 0x21592c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_215930:
    // 0x215930: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x215930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_215934:
    // 0x215934: 0x863000d0  lh          $s0, 0xD0($s1)
    ctx->pc = 0x215934u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 208)));
label_215938:
    // 0x215938: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21593c:
    // 0x21593c: 0x263100d0  addiu       $s1, $s1, 0xD0
    ctx->pc = 0x21593cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_215940:
    // 0x215940: 0xc107d0a  jal         func_41F428
label_215944:
    if (ctx->pc == 0x215944u) {
        ctx->pc = 0x215944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215940u;
        // 0x215944: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215948u;
        goto label_215948;
    }
    ctx->pc = 0x215940u;
    SET_GPR_U32(ctx, 31, 0x215948u);
    ctx->pc = 0x215944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215940u;
    // 0x215944: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x215940u, 0x215948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215948u;
label_215948:
    // 0x215948: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x215948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21594c:
    // 0x21594c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21594cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215950:
    // 0x215950: 0x60f809  jalr        $v1
label_215954:
    if (ctx->pc == 0x215954u) {
        ctx->pc = 0x215954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215950u;
        // 0x215954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215958u;
        goto label_215958;
    }
    ctx->pc = 0x215950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x215958u);
        ctx->pc = 0x215954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215950u;
        // 0x215954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215950u, 0x215958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215958u;
label_215958:
    // 0x215958: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_21595c:
    // 0x21595c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x21595cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215960:
    // 0x215960: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x215960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_215964:
    // 0x215964: 0xc107ca6  jal         func_41F298
label_215968:
    if (ctx->pc == 0x215968u) {
        ctx->pc = 0x215968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215964u;
        // 0x215968: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21596Cu;
        goto label_21596c;
    }
    ctx->pc = 0x215964u;
    SET_GPR_U32(ctx, 31, 0x21596Cu);
    ctx->pc = 0x215968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215964u;
    // 0x215968: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F298u, 0x215964u, 0x21596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21596Cu;
label_21596c:
    // 0x21596c: 0xc10ce9a  jal         func_433A68
label_215970:
    if (ctx->pc == 0x215970u) {
        ctx->pc = 0x215970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21596Cu;
        // 0x215970: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215974u;
        goto label_215974;
    }
    ctx->pc = 0x21596Cu;
    SET_GPR_U32(ctx, 31, 0x215974u);
    ctx->pc = 0x215970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21596Cu;
    // 0x215970: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x21596Cu, 0x215974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215974u;
label_215974:
    // 0x215974: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_215978:
    if (ctx->pc == 0x215978u) {
        ctx->pc = 0x215978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215974u;
        // 0x215978: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21597Cu;
        goto label_21597c;
    }
    ctx->pc = 0x215974u;
    {
        const bool branch_taken_0x215974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215974) {
            ctx->pc = 0x215978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215974u;
            // 0x215978: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215998u;
            goto label_215998;
        }
    }
    ctx->pc = 0x21597Cu;
label_21597c:
    // 0x21597c: 0x2402006a  addiu       $v0, $zero, 0x6A
    ctx->pc = 0x21597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_215980:
    // 0x215980: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x215980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_215984:
    // 0x215984: 0xa3a20064  sb          $v0, 0x64($sp)
    ctx->pc = 0x215984u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 2));
label_215988:
    // 0x215988: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x215988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_21598c:
    // 0x21598c: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x21598cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
label_215990:
    // 0x215990: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x215990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_215994:
    // 0x215994: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_215998:
    // 0x215998: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_21599c:
    // 0x21599c: 0x24a5d260  addiu       $a1, $a1, -0x2DA0
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955616));
label_2159a0:
    // 0x2159a0: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2159a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2159a4:
    // 0x2159a4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2159a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2159a8:
    // 0x2159a8: 0x40f809  jalr        $v0
label_2159ac:
    if (ctx->pc == 0x2159ACu) {
        ctx->pc = 0x2159ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159A8u;
        // 0x2159ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159B0u;
        goto label_2159b0;
    }
    ctx->pc = 0x2159A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2159B0u);
        ctx->pc = 0x2159ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159A8u;
        // 0x2159ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2159A8u, 0x2159B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2159B0u;
label_2159b0:
    // 0x2159b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2159b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2159b4:
    // 0x2159b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2159b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2159b8:
    // 0x2159b8: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x2159b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_2159bc:
    // 0x2159bc: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x2159bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_2159c0:
    // 0x2159c0: 0x40f809  jalr        $v0
label_2159c4:
    if (ctx->pc == 0x2159C4u) {
        ctx->pc = 0x2159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159C0u;
        // 0x2159c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159C8u;
        goto label_2159c8;
    }
    ctx->pc = 0x2159C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2159C8u);
        ctx->pc = 0x2159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159C0u;
        // 0x2159c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2159C0u, 0x2159C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2159C8u;
label_2159c8:
    // 0x2159c8: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x2159c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2159cc:
    // 0x2159cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2159ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2159d0:
    // 0x2159d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2159d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2159d4:
    // 0x2159d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2159d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2159d8:
    // 0x2159d8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x2159d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_2159dc:
    // 0x2159dc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_2159e0:
    // 0x2159e0: 0x60f809  jalr        $v1
label_2159e4:
    if (ctx->pc == 0x2159E4u) {
        ctx->pc = 0x2159E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159E0u;
        // 0x2159e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159E8u;
        goto label_2159e8;
    }
    ctx->pc = 0x2159E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2159E8u);
        ctx->pc = 0x2159E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159E0u;
        // 0x2159e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2159E0u, 0x2159E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2159E8u;
label_2159e8:
    // 0x2159e8: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2159e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_2159ec:
    // 0x2159ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2159ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2159f0:
    // 0x2159f0: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x2159f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_2159f4:
    // 0x2159f4: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_2159f8:
    // 0x2159f8: 0x40f809  jalr        $v0
label_2159fc:
    if (ctx->pc == 0x2159FCu) {
        ctx->pc = 0x2159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F8u;
        // 0x2159fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A00u;
        goto label_215a00;
    }
    ctx->pc = 0x2159F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215A00u);
        ctx->pc = 0x2159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F8u;
        // 0x2159fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2159F8u, 0x215A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215A00u;
label_215a00:
    // 0x215a00: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
label_215a04:
    if (ctx->pc == 0x215A04u) {
        ctx->pc = 0x215A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A00u;
        // 0x215a04: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A08u;
        goto label_215a08;
    }
    ctx->pc = 0x215A00u;
    {
        const bool branch_taken_0x215a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x215a00) {
            ctx->pc = 0x215A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215A00u;
            // 0x215a04: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A24u;
            goto label_215a24;
        }
    }
    ctx->pc = 0x215A08u;
label_215a08:
    // 0x215a08: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x215a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_215a0c:
    // 0x215a0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x215a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_215a10:
    // 0x215a10: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x215a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_215a14:
    // 0x215a14: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x215a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_215a18:
    // 0x215a18: 0x60f809  jalr        $v1
label_215a1c:
    if (ctx->pc == 0x215A1Cu) {
        ctx->pc = 0x215A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A18u;
        // 0x215a1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A20u;
        goto label_215a20;
    }
    ctx->pc = 0x215A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x215A20u);
        ctx->pc = 0x215A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A18u;
        // 0x215a1c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A18u, 0x215A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215A20u;
label_215a20:
    // 0x215a20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x215a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_215a24:
    // 0x215a24: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x215a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_215a28:
    // 0x215a28: 0x8c8c27e4  lw          $t4, 0x27E4($a0)
    ctx->pc = 0x215a28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_215a2c:
    // 0x215a2c: 0x2445a0c0  addiu       $a1, $v0, -0x5F40
    ctx->pc = 0x215a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942912));
label_215a30:
    // 0x215a30: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x215a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_215a34:
    // 0x215a34: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x215a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_215a38:
    // 0x215a38: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x215a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_215a3c:
    // 0x215a3c: 0x24889f70  addiu       $t0, $a0, -0x6090
    ctx->pc = 0x215a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942576));
label_215a40:
    // 0x215a40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x215a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_215a44:
    // 0x215a44: 0x2409010b  addiu       $t1, $zero, 0x10B
    ctx->pc = 0x215a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
label_215a48:
    // 0x215a48: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x215a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_215a4c:
    // 0x215a4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x215a4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215a50:
    // 0x215a50: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x215a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_215a54:
    // 0x215a54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x215a54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215a58:
    // 0x215a58: 0x40f809  jalr        $v0
label_215a5c:
    if (ctx->pc == 0x215A5Cu) {
        ctx->pc = 0x215A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A58u;
        // 0x215a5c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A60u;
        goto label_215a60;
    }
    ctx->pc = 0x215A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215A60u);
        ctx->pc = 0x215A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A58u;
        // 0x215a5c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A58u, 0x215A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215A60u;
label_215a60:
    // 0x215a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215a64:
    // 0x215a64: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_215a68:
    if (ctx->pc == 0x215A68u) {
        ctx->pc = 0x215A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A64u;
        // 0x215a68: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A6Cu;
        goto label_215a6c;
    }
    ctx->pc = 0x215A64u;
    {
        const bool branch_taken_0x215a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A64u;
        // 0x215a68: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a64) {
            ctx->pc = 0x215A90u;
            goto label_215a90;
        }
    }
    ctx->pc = 0x215A6Cu;
label_215a6c:
    // 0x215a6c: 0xc06a38c  jal         func_1A8E30
label_215a70:
    if (ctx->pc == 0x215A70u) {
        ctx->pc = 0x215A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A6Cu;
        // 0x215a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A74u;
        goto label_215a74;
    }
    ctx->pc = 0x215A6Cu;
    SET_GPR_U32(ctx, 31, 0x215A74u);
    ctx->pc = 0x215A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A6Cu;
    // 0x215a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x215A6Cu, 0x215A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A74u;
label_215a74:
    // 0x215a74: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_215a78:
    // 0x215a78: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x215a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_215a7c:
    // 0x215a7c: 0x2463ef58  addiu       $v1, $v1, -0x10A8
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963032));
label_215a80:
    // 0x215a80: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x215a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_215a84:
    // 0x215a84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x215a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_215a88:
    // 0x215a88: 0xe6340050  swc1        $f20, 0x50($s1)
    ctx->pc = 0x215a88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_215a8c:
    // 0x215a8c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x215a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_215a90:
    // 0x215a90: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
label_215a94:
    if (ctx->pc == 0x215A94u) {
        ctx->pc = 0x215A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A90u;
        // 0x215a94: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A98u;
        goto label_215a98;
    }
    ctx->pc = 0x215A90u;
    {
        const bool branch_taken_0x215a90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x215A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A90u;
        // 0x215a94: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a90) {
            ctx->pc = 0x215ACCu;
            goto label_215acc;
        }
    }
    ctx->pc = 0x215A98u;
label_215a98:
    // 0x215a98: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215a9c:
    // 0x215a9c: 0xc085524  jal         func_215490
label_215aa0:
    if (ctx->pc == 0x215AA0u) {
        ctx->pc = 0x215AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A9Cu;
        // 0x215aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AA4u;
        goto label_215aa4;
    }
    ctx->pc = 0x215A9Cu;
    SET_GPR_U32(ctx, 31, 0x215AA4u);
    ctx->pc = 0x215AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A9Cu;
    // 0x215aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215490u, 0x215A9Cu, 0x215AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AA4u;
label_215aa4:
    // 0x215aa4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x215aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_215aa8:
    // 0x215aa8: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x215aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
label_215aac:
    // 0x215aac: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215ab0:
    // 0x215ab0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x215ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215ab4:
    // 0x215ab4: 0xc46c00e4  lwc1        $f12, 0xE4($v1)
    ctx->pc = 0x215ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215ab8:
    // 0x215ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215abc:
    // 0x215abc: 0xc085cd4  jal         func_217350
label_215ac0:
    if (ctx->pc == 0x215AC0u) {
        ctx->pc = 0x215AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ABCu;
        // 0x215ac0: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AC4u;
        goto label_215ac4;
    }
    ctx->pc = 0x215ABCu;
    SET_GPR_U32(ctx, 31, 0x215AC4u);
    ctx->pc = 0x215AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215ABCu;
    // 0x215ac0: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x217350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217350u, 0x215ABCu, 0x215AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AC4u;
label_215ac4:
    // 0x215ac4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_215ac8:
    if (ctx->pc == 0x215AC8u) {
        ctx->pc = 0x215AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AC4u;
        // 0x215ac8: 0x8e230078  lw          $v1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215ACCu;
        goto label_215acc;
    }
    ctx->pc = 0x215AC4u;
    {
        const bool branch_taken_0x215ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AC4u;
        // 0x215ac8: 0x8e230078  lw          $v1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ac4) {
            ctx->pc = 0x215B74u;
            goto label_215b74;
        }
    }
    ctx->pc = 0x215ACCu;
label_215acc:
    // 0x215acc: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
label_215ad0:
    if (ctx->pc == 0x215AD0u) {
        ctx->pc = 0x215AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ACCu;
        // 0x215ad0: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AD4u;
        goto label_215ad4;
    }
    ctx->pc = 0x215ACCu;
    {
        const bool branch_taken_0x215acc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x215AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ACCu;
        // 0x215ad0: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215acc) {
            ctx->pc = 0x215B04u;
            goto label_215b04;
        }
    }
    ctx->pc = 0x215AD4u;
label_215ad4:
    // 0x215ad4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215ad8:
    // 0x215ad8: 0xc085524  jal         func_215490
label_215adc:
    if (ctx->pc == 0x215ADCu) {
        ctx->pc = 0x215ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AD8u;
        // 0x215adc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AE0u;
        goto label_215ae0;
    }
    ctx->pc = 0x215AD8u;
    SET_GPR_U32(ctx, 31, 0x215AE0u);
    ctx->pc = 0x215ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AD8u;
    // 0x215adc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215490u, 0x215AD8u, 0x215AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AE0u;
label_215ae0:
    // 0x215ae0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x215ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_215ae4:
    // 0x215ae4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215ae8:
    // 0x215ae8: 0xc48c00e4  lwc1        $f12, 0xE4($a0)
    ctx->pc = 0x215ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215aec:
    // 0x215aec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x215aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215af0:
    // 0x215af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215af4:
    // 0x215af4: 0xc085cd4  jal         func_217350
label_215af8:
    if (ctx->pc == 0x215AF8u) {
        ctx->pc = 0x215AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AF4u;
        // 0x215af8: 0x3c060018  lui         $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AFCu;
        goto label_215afc;
    }
    ctx->pc = 0x215AF4u;
    SET_GPR_U32(ctx, 31, 0x215AFCu);
    ctx->pc = 0x215AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AF4u;
    // 0x215af8: 0x3c060018  lui         $a2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217350u, 0x215AF4u, 0x215AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AFCu;
label_215afc:
    // 0x215afc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_215b00:
    if (ctx->pc == 0x215B00u) {
        ctx->pc = 0x215B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AFCu;
        // 0x215b00: 0x8e230078  lw          $v1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B04u;
        goto label_215b04;
    }
    ctx->pc = 0x215AFCu;
    {
        const bool branch_taken_0x215afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AFCu;
        // 0x215b00: 0x8e230078  lw          $v1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215afc) {
            ctx->pc = 0x215B74u;
            goto label_215b74;
        }
    }
    ctx->pc = 0x215B04u;
label_215b04:
    // 0x215b04: 0x16a2000d  bne         $s5, $v0, . + 4 + (0xD << 2)
label_215b08:
    if (ctx->pc == 0x215B08u) {
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B0Cu;
        goto label_215b0c;
    }
    ctx->pc = 0x215B04u;
    {
        const bool branch_taken_0x215b04 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b04) {
            ctx->pc = 0x215B3Cu;
            goto label_215b3c;
        }
    }
    ctx->pc = 0x215B0Cu;
label_215b0c:
    // 0x215b0c: 0xc085524  jal         func_215490
label_215b10:
    if (ctx->pc == 0x215B10u) {
        ctx->pc = 0x215B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B0Cu;
        // 0x215b10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B14u;
        goto label_215b14;
    }
    ctx->pc = 0x215B0Cu;
    SET_GPR_U32(ctx, 31, 0x215B14u);
    ctx->pc = 0x215B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B0Cu;
    // 0x215b10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215490u, 0x215B0Cu, 0x215B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B14u;
label_215b14:
    // 0x215b14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x215b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_215b18:
    // 0x215b18: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x215b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
label_215b1c:
    // 0x215b1c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215b20:
    // 0x215b20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x215b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215b24:
    // 0x215b24: 0xc46c00e4  lwc1        $f12, 0xE4($v1)
    ctx->pc = 0x215b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215b28:
    // 0x215b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215b2c:
    // 0x215b2c: 0xc085cd4  jal         func_217350
label_215b30:
    if (ctx->pc == 0x215B30u) {
        ctx->pc = 0x215B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B2Cu;
        // 0x215b30: 0x34c60003  ori         $a2, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B34u;
        goto label_215b34;
    }
    ctx->pc = 0x215B2Cu;
    SET_GPR_U32(ctx, 31, 0x215B34u);
    ctx->pc = 0x215B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B2Cu;
    // 0x215b30: 0x34c60003  ori         $a2, $a2, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x217350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217350u, 0x215B2Cu, 0x215B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B34u;
label_215b34:
    // 0x215b34: 0x1000000f  b           . + 4 + (0xF << 2)
label_215b38:
    if (ctx->pc == 0x215B38u) {
        ctx->pc = 0x215B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B34u;
        // 0x215b38: 0x8e230078  lw          $v1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B3Cu;
        goto label_215b3c;
    }
    ctx->pc = 0x215B34u;
    {
        const bool branch_taken_0x215b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B34u;
        // 0x215b38: 0x8e230078  lw          $v1, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b34) {
            ctx->pc = 0x215B74u;
            goto label_215b74;
        }
    }
    ctx->pc = 0x215B3Cu;
label_215b3c:
    // 0x215b3c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x215b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_215b40:
    // 0x215b40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x215b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_215b44:
    // 0x215b44: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x215b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_215b48:
    // 0x215b48: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x215b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_215b4c:
    // 0x215b4c: 0xc085524  jal         func_215490
label_215b50:
    if (ctx->pc == 0x215B50u) {
        ctx->pc = 0x215B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B4Cu;
        // 0x215b50: 0x8c500080  lw          $s0, 0x80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B54u;
        goto label_215b54;
    }
    ctx->pc = 0x215B4Cu;
    SET_GPR_U32(ctx, 31, 0x215B54u);
    ctx->pc = 0x215B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B4Cu;
    // 0x215b50: 0x8c500080  lw          $s0, 0x80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215490u, 0x215B4Cu, 0x215B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B54u;
label_215b54:
    // 0x215b54: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_215b58:
    // 0x215b58: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x215b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215b5c:
    // 0x215b5c: 0xc48c00e4  lwc1        $f12, 0xE4($a0)
    ctx->pc = 0x215b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215b60:
    // 0x215b60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x215b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215b64:
    // 0x215b64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x215b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215b68:
    // 0x215b68: 0xc085cd4  jal         func_217350
label_215b6c:
    if (ctx->pc == 0x215B6Cu) {
        ctx->pc = 0x215B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B68u;
        // 0x215b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B70u;
        goto label_215b70;
    }
    ctx->pc = 0x215B68u;
    SET_GPR_U32(ctx, 31, 0x215B70u);
    ctx->pc = 0x215B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B68u;
    // 0x215b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217350u, 0x215B68u, 0x215B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B70u;
label_215b70:
    // 0x215b70: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x215b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_215b74:
    // 0x215b74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x215b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_215b78:
    // 0x215b78: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x215b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_215b7c:
    // 0x215b7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x215b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215b80:
    // 0x215b80: 0x8e670088  lw          $a3, 0x88($s3)
    ctx->pc = 0x215b80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_215b84:
    // 0x215b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_215b88:
    // 0x215b88: 0xae62009c  sw          $v0, 0x9C($s3)
    ctx->pc = 0x215b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
label_215b8c:
    // 0x215b8c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x215b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_215b90:
    // 0x215b90: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x215b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_215b94:
    // 0x215b94: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x215b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_215b98:
    // 0x215b98: 0x40f809  jalr        $v0
label_215b9c:
    if (ctx->pc == 0x215B9Cu) {
        ctx->pc = 0x215B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B98u;
        // 0x215b9c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BA0u;
        goto label_215ba0;
    }
    ctx->pc = 0x215B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215BA0u);
        ctx->pc = 0x215B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B98u;
        // 0x215b9c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215B98u, 0x215BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215BA0u;
label_215ba0:
    // 0x215ba0: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x215ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_215ba4:
    // 0x215ba4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x215ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_215ba8:
    // 0x215ba8: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x215ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_215bac:
    // 0x215bac: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x215bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_215bb0:
    // 0x215bb0: 0x40f809  jalr        $v0
label_215bb4:
    if (ctx->pc == 0x215BB4u) {
        ctx->pc = 0x215BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BB0u;
        // 0x215bb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BB8u;
        goto label_215bb8;
    }
    ctx->pc = 0x215BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215BB8u);
        ctx->pc = 0x215BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BB0u;
        // 0x215bb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215BB0u, 0x215BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215BB8u;
label_215bb8:
    // 0x215bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215bbc:
    // 0x215bbc: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_215bc0:
    if (ctx->pc == 0x215BC0u) {
        ctx->pc = 0x215BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BBCu;
        // 0x215bc0: 0x8e630060  lw          $v1, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BC4u;
        goto label_215bc4;
    }
    ctx->pc = 0x215BBCu;
    {
        const bool branch_taken_0x215bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x215bbc) {
            ctx->pc = 0x215BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215BBCu;
            // 0x215bc0: 0x8e630060  lw          $v1, 0x60($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215BF8u;
            goto label_215bf8;
        }
    }
    ctx->pc = 0x215BC4u;
label_215bc4:
    // 0x215bc4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x215bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_215bc8:
    // 0x215bc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_215bcc:
    // 0x215bcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x215bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_215bd0:
    // 0x215bd0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x215bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_215bd4:
    // 0x215bd4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x215bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_215bd8:
    // 0x215bd8: 0x60f809  jalr        $v1
label_215bdc:
    if (ctx->pc == 0x215BDCu) {
        ctx->pc = 0x215BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BD8u;
        // 0x215bdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BE0u;
        goto label_215be0;
    }
    ctx->pc = 0x215BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x215BE0u);
        ctx->pc = 0x215BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BD8u;
        // 0x215bdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215BD8u, 0x215BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215BE0u;
label_215be0:
    // 0x215be0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x215be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_215be4:
    // 0x215be4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x215be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_215be8:
    // 0x215be8: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x215be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_215bec:
    // 0x215bec: 0x60f809  jalr        $v1
label_215bf0:
    if (ctx->pc == 0x215BF0u) {
        ctx->pc = 0x215BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BECu;
        // 0x215bf0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BF4u;
        goto label_215bf4;
    }
    ctx->pc = 0x215BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x215BF4u);
        ctx->pc = 0x215BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BECu;
        // 0x215bf0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215BECu, 0x215BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215BF4u;
label_215bf4:
    // 0x215bf4: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x215bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_215bf8:
    // 0x215bf8: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x215bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_215bfc:
    // 0x215bfc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x215bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_215c00:
    // 0x215c00: 0x16e2fecb  bne         $s7, $v0, . + 4 + (-0x135 << 2)
label_215c04:
    if (ctx->pc == 0x215C04u) {
        ctx->pc = 0x215C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C00u;
        // 0x215c04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C08u;
        goto label_215c08;
    }
    ctx->pc = 0x215C00u;
    {
        const bool branch_taken_0x215c00 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x215C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C00u;
        // 0x215c04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c00) {
            ctx->pc = 0x215730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215730;
        }
    }
    ctx->pc = 0x215C08u;
label_215c08:
    // 0x215c08: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x215c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_215c0c:
    // 0x215c0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_215c10:
    // 0x215c10: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x215c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_215c14:
    // 0x215c14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x215c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_215c18:
    // 0x215c18: 0x84640128  lh          $a0, 0x128($v1)
    ctx->pc = 0x215c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 296)));
label_215c1c:
    // 0x215c1c: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x215c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_215c20:
    // 0x215c20: 0x40f809  jalr        $v0
label_215c24:
    if (ctx->pc == 0x215C24u) {
        ctx->pc = 0x215C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C20u;
        // 0x215c24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C28u;
        goto label_215c28;
    }
    ctx->pc = 0x215C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215C28u);
        ctx->pc = 0x215C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C20u;
        // 0x215c24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215C20u, 0x215C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215C28u;
label_215c28:
    // 0x215c28: 0x8e660088  lw          $a2, 0x88($s3)
    ctx->pc = 0x215c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_215c2c:
    // 0x215c2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_215c30:
    // 0x215c30: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x215c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_215c34:
    // 0x215c34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x215c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_215c38:
    // 0x215c38: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x215c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_215c3c:
    // 0x215c3c: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x215c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_215c40:
    // 0x215c40: 0x40f809  jalr        $v0
label_215c44:
    if (ctx->pc == 0x215C44u) {
        ctx->pc = 0x215C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C40u;
        // 0x215c44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C48u;
        goto label_215c48;
    }
    ctx->pc = 0x215C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215C48u);
        ctx->pc = 0x215C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C40u;
        // 0x215c44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215C40u, 0x215C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215C48u;
label_215c48:
    // 0x215c48: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x215c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_215c4c:
    // 0x215c4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x215c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_215c50:
    // 0x215c50: 0xc44c0110  lwc1        $f12, 0x110($v0)
    ctx->pc = 0x215c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_215c54:
    // 0x215c54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x215c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_215c58:
    // 0x215c58: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x215c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_215c5c:
    // 0x215c5c: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x215c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_215c60:
    // 0x215c60: 0x40f809  jalr        $v0
label_215c64:
    if (ctx->pc == 0x215C64u) {
        ctx->pc = 0x215C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C60u;
        // 0x215c64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C68u;
        goto label_215c68;
    }
    ctx->pc = 0x215C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215C68u);
        ctx->pc = 0x215C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C60u;
        // 0x215c64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215C60u, 0x215C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215C68u;
label_215c68:
    // 0x215c68: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x215c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_215c6c:
    // 0x215c6c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x215c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_215c70:
    // 0x215c70: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x215c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_215c74:
    // 0x215c74: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x215c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_215c78:
    // 0x215c78: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x215c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_215c7c:
    // 0x215c7c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x215c7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_215c80:
    // 0x215c80: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x215c80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_215c84:
    // 0x215c84: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x215c84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_215c88:
    // 0x215c88: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x215c88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_215c8c:
    // 0x215c8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x215c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_215c90:
    // 0x215c90: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x215c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_215c94:
    // 0x215c94: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x215c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_215c98:
    // 0x215c98: 0x3e00008  jr          $ra
label_215c9c:
    if (ctx->pc == 0x215C9Cu) {
        ctx->pc = 0x215C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C98u;
        // 0x215c9c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215CA0u;
        goto label_fallthrough_0x215c98;
    }
    ctx->pc = 0x215C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C98u;
        // 0x215c9c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x215c98:
    ctx->pc = 0x215CA0u;
}
