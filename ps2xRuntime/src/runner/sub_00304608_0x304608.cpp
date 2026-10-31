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

// Function: sub_00304608
// Address: 0x304608 - 0x304c78
void sub_00304608_0x304608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304608_0x304608");
#endif

    switch (ctx->pc) {
        case 0x304608u: goto label_304608;
        case 0x30460cu: goto label_30460c;
        case 0x304610u: goto label_304610;
        case 0x304614u: goto label_304614;
        case 0x304618u: goto label_304618;
        case 0x30461cu: goto label_30461c;
        case 0x304620u: goto label_304620;
        case 0x304624u: goto label_304624;
        case 0x304628u: goto label_304628;
        case 0x30462cu: goto label_30462c;
        case 0x304630u: goto label_304630;
        case 0x304634u: goto label_304634;
        case 0x304638u: goto label_304638;
        case 0x30463cu: goto label_30463c;
        case 0x304640u: goto label_304640;
        case 0x304644u: goto label_304644;
        case 0x304648u: goto label_304648;
        case 0x30464cu: goto label_30464c;
        case 0x304650u: goto label_304650;
        case 0x304654u: goto label_304654;
        case 0x304658u: goto label_304658;
        case 0x30465cu: goto label_30465c;
        case 0x304660u: goto label_304660;
        case 0x304664u: goto label_304664;
        case 0x304668u: goto label_304668;
        case 0x30466cu: goto label_30466c;
        case 0x304670u: goto label_304670;
        case 0x304674u: goto label_304674;
        case 0x304678u: goto label_304678;
        case 0x30467cu: goto label_30467c;
        case 0x304680u: goto label_304680;
        case 0x304684u: goto label_304684;
        case 0x304688u: goto label_304688;
        case 0x30468cu: goto label_30468c;
        case 0x304690u: goto label_304690;
        case 0x304694u: goto label_304694;
        case 0x304698u: goto label_304698;
        case 0x30469cu: goto label_30469c;
        case 0x3046a0u: goto label_3046a0;
        case 0x3046a4u: goto label_3046a4;
        case 0x3046a8u: goto label_3046a8;
        case 0x3046acu: goto label_3046ac;
        case 0x3046b0u: goto label_3046b0;
        case 0x3046b4u: goto label_3046b4;
        case 0x3046b8u: goto label_3046b8;
        case 0x3046bcu: goto label_3046bc;
        case 0x3046c0u: goto label_3046c0;
        case 0x3046c4u: goto label_3046c4;
        case 0x3046c8u: goto label_3046c8;
        case 0x3046ccu: goto label_3046cc;
        case 0x3046d0u: goto label_3046d0;
        case 0x3046d4u: goto label_3046d4;
        case 0x3046d8u: goto label_3046d8;
        case 0x3046dcu: goto label_3046dc;
        case 0x3046e0u: goto label_3046e0;
        case 0x3046e4u: goto label_3046e4;
        case 0x3046e8u: goto label_3046e8;
        case 0x3046ecu: goto label_3046ec;
        case 0x3046f0u: goto label_3046f0;
        case 0x3046f4u: goto label_3046f4;
        case 0x3046f8u: goto label_3046f8;
        case 0x3046fcu: goto label_3046fc;
        case 0x304700u: goto label_304700;
        case 0x304704u: goto label_304704;
        case 0x304708u: goto label_304708;
        case 0x30470cu: goto label_30470c;
        case 0x304710u: goto label_304710;
        case 0x304714u: goto label_304714;
        case 0x304718u: goto label_304718;
        case 0x30471cu: goto label_30471c;
        case 0x304720u: goto label_304720;
        case 0x304724u: goto label_304724;
        case 0x304728u: goto label_304728;
        case 0x30472cu: goto label_30472c;
        case 0x304730u: goto label_304730;
        case 0x304734u: goto label_304734;
        case 0x304738u: goto label_304738;
        case 0x30473cu: goto label_30473c;
        case 0x304740u: goto label_304740;
        case 0x304744u: goto label_304744;
        case 0x304748u: goto label_304748;
        case 0x30474cu: goto label_30474c;
        case 0x304750u: goto label_304750;
        case 0x304754u: goto label_304754;
        case 0x304758u: goto label_304758;
        case 0x30475cu: goto label_30475c;
        case 0x304760u: goto label_304760;
        case 0x304764u: goto label_304764;
        case 0x304768u: goto label_304768;
        case 0x30476cu: goto label_30476c;
        case 0x304770u: goto label_304770;
        case 0x304774u: goto label_304774;
        case 0x304778u: goto label_304778;
        case 0x30477cu: goto label_30477c;
        case 0x304780u: goto label_304780;
        case 0x304784u: goto label_304784;
        case 0x304788u: goto label_304788;
        case 0x30478cu: goto label_30478c;
        case 0x304790u: goto label_304790;
        case 0x304794u: goto label_304794;
        case 0x304798u: goto label_304798;
        case 0x30479cu: goto label_30479c;
        case 0x3047a0u: goto label_3047a0;
        case 0x3047a4u: goto label_3047a4;
        case 0x3047a8u: goto label_3047a8;
        case 0x3047acu: goto label_3047ac;
        case 0x3047b0u: goto label_3047b0;
        case 0x3047b4u: goto label_3047b4;
        case 0x3047b8u: goto label_3047b8;
        case 0x3047bcu: goto label_3047bc;
        case 0x3047c0u: goto label_3047c0;
        case 0x3047c4u: goto label_3047c4;
        case 0x3047c8u: goto label_3047c8;
        case 0x3047ccu: goto label_3047cc;
        case 0x3047d0u: goto label_3047d0;
        case 0x3047d4u: goto label_3047d4;
        case 0x3047d8u: goto label_3047d8;
        case 0x3047dcu: goto label_3047dc;
        case 0x3047e0u: goto label_3047e0;
        case 0x3047e4u: goto label_3047e4;
        case 0x3047e8u: goto label_3047e8;
        case 0x3047ecu: goto label_3047ec;
        case 0x3047f0u: goto label_3047f0;
        case 0x3047f4u: goto label_3047f4;
        case 0x3047f8u: goto label_3047f8;
        case 0x3047fcu: goto label_3047fc;
        case 0x304800u: goto label_304800;
        case 0x304804u: goto label_304804;
        case 0x304808u: goto label_304808;
        case 0x30480cu: goto label_30480c;
        case 0x304810u: goto label_304810;
        case 0x304814u: goto label_304814;
        case 0x304818u: goto label_304818;
        case 0x30481cu: goto label_30481c;
        case 0x304820u: goto label_304820;
        case 0x304824u: goto label_304824;
        case 0x304828u: goto label_304828;
        case 0x30482cu: goto label_30482c;
        case 0x304830u: goto label_304830;
        case 0x304834u: goto label_304834;
        case 0x304838u: goto label_304838;
        case 0x30483cu: goto label_30483c;
        case 0x304840u: goto label_304840;
        case 0x304844u: goto label_304844;
        case 0x304848u: goto label_304848;
        case 0x30484cu: goto label_30484c;
        case 0x304850u: goto label_304850;
        case 0x304854u: goto label_304854;
        case 0x304858u: goto label_304858;
        case 0x30485cu: goto label_30485c;
        case 0x304860u: goto label_304860;
        case 0x304864u: goto label_304864;
        case 0x304868u: goto label_304868;
        case 0x30486cu: goto label_30486c;
        case 0x304870u: goto label_304870;
        case 0x304874u: goto label_304874;
        case 0x304878u: goto label_304878;
        case 0x30487cu: goto label_30487c;
        case 0x304880u: goto label_304880;
        case 0x304884u: goto label_304884;
        case 0x304888u: goto label_304888;
        case 0x30488cu: goto label_30488c;
        case 0x304890u: goto label_304890;
        case 0x304894u: goto label_304894;
        case 0x304898u: goto label_304898;
        case 0x30489cu: goto label_30489c;
        case 0x3048a0u: goto label_3048a0;
        case 0x3048a4u: goto label_3048a4;
        case 0x3048a8u: goto label_3048a8;
        case 0x3048acu: goto label_3048ac;
        case 0x3048b0u: goto label_3048b0;
        case 0x3048b4u: goto label_3048b4;
        case 0x3048b8u: goto label_3048b8;
        case 0x3048bcu: goto label_3048bc;
        case 0x3048c0u: goto label_3048c0;
        case 0x3048c4u: goto label_3048c4;
        case 0x3048c8u: goto label_3048c8;
        case 0x3048ccu: goto label_3048cc;
        case 0x3048d0u: goto label_3048d0;
        case 0x3048d4u: goto label_3048d4;
        case 0x3048d8u: goto label_3048d8;
        case 0x3048dcu: goto label_3048dc;
        case 0x3048e0u: goto label_3048e0;
        case 0x3048e4u: goto label_3048e4;
        case 0x3048e8u: goto label_3048e8;
        case 0x3048ecu: goto label_3048ec;
        case 0x3048f0u: goto label_3048f0;
        case 0x3048f4u: goto label_3048f4;
        case 0x3048f8u: goto label_3048f8;
        case 0x3048fcu: goto label_3048fc;
        case 0x304900u: goto label_304900;
        case 0x304904u: goto label_304904;
        case 0x304908u: goto label_304908;
        case 0x30490cu: goto label_30490c;
        case 0x304910u: goto label_304910;
        case 0x304914u: goto label_304914;
        case 0x304918u: goto label_304918;
        case 0x30491cu: goto label_30491c;
        case 0x304920u: goto label_304920;
        case 0x304924u: goto label_304924;
        case 0x304928u: goto label_304928;
        case 0x30492cu: goto label_30492c;
        case 0x304930u: goto label_304930;
        case 0x304934u: goto label_304934;
        case 0x304938u: goto label_304938;
        case 0x30493cu: goto label_30493c;
        case 0x304940u: goto label_304940;
        case 0x304944u: goto label_304944;
        case 0x304948u: goto label_304948;
        case 0x30494cu: goto label_30494c;
        case 0x304950u: goto label_304950;
        case 0x304954u: goto label_304954;
        case 0x304958u: goto label_304958;
        case 0x30495cu: goto label_30495c;
        case 0x304960u: goto label_304960;
        case 0x304964u: goto label_304964;
        case 0x304968u: goto label_304968;
        case 0x30496cu: goto label_30496c;
        case 0x304970u: goto label_304970;
        case 0x304974u: goto label_304974;
        case 0x304978u: goto label_304978;
        case 0x30497cu: goto label_30497c;
        case 0x304980u: goto label_304980;
        case 0x304984u: goto label_304984;
        case 0x304988u: goto label_304988;
        case 0x30498cu: goto label_30498c;
        case 0x304990u: goto label_304990;
        case 0x304994u: goto label_304994;
        case 0x304998u: goto label_304998;
        case 0x30499cu: goto label_30499c;
        case 0x3049a0u: goto label_3049a0;
        case 0x3049a4u: goto label_3049a4;
        case 0x3049a8u: goto label_3049a8;
        case 0x3049acu: goto label_3049ac;
        case 0x3049b0u: goto label_3049b0;
        case 0x3049b4u: goto label_3049b4;
        case 0x3049b8u: goto label_3049b8;
        case 0x3049bcu: goto label_3049bc;
        case 0x3049c0u: goto label_3049c0;
        case 0x3049c4u: goto label_3049c4;
        case 0x3049c8u: goto label_3049c8;
        case 0x3049ccu: goto label_3049cc;
        case 0x3049d0u: goto label_3049d0;
        case 0x3049d4u: goto label_3049d4;
        case 0x3049d8u: goto label_3049d8;
        case 0x3049dcu: goto label_3049dc;
        case 0x3049e0u: goto label_3049e0;
        case 0x3049e4u: goto label_3049e4;
        case 0x3049e8u: goto label_3049e8;
        case 0x3049ecu: goto label_3049ec;
        case 0x3049f0u: goto label_3049f0;
        case 0x3049f4u: goto label_3049f4;
        case 0x3049f8u: goto label_3049f8;
        case 0x3049fcu: goto label_3049fc;
        case 0x304a00u: goto label_304a00;
        case 0x304a04u: goto label_304a04;
        case 0x304a08u: goto label_304a08;
        case 0x304a0cu: goto label_304a0c;
        case 0x304a10u: goto label_304a10;
        case 0x304a14u: goto label_304a14;
        case 0x304a18u: goto label_304a18;
        case 0x304a1cu: goto label_304a1c;
        case 0x304a20u: goto label_304a20;
        case 0x304a24u: goto label_304a24;
        case 0x304a28u: goto label_304a28;
        case 0x304a2cu: goto label_304a2c;
        case 0x304a30u: goto label_304a30;
        case 0x304a34u: goto label_304a34;
        case 0x304a38u: goto label_304a38;
        case 0x304a3cu: goto label_304a3c;
        case 0x304a40u: goto label_304a40;
        case 0x304a44u: goto label_304a44;
        case 0x304a48u: goto label_304a48;
        case 0x304a4cu: goto label_304a4c;
        case 0x304a50u: goto label_304a50;
        case 0x304a54u: goto label_304a54;
        case 0x304a58u: goto label_304a58;
        case 0x304a5cu: goto label_304a5c;
        case 0x304a60u: goto label_304a60;
        case 0x304a64u: goto label_304a64;
        case 0x304a68u: goto label_304a68;
        case 0x304a6cu: goto label_304a6c;
        case 0x304a70u: goto label_304a70;
        case 0x304a74u: goto label_304a74;
        case 0x304a78u: goto label_304a78;
        case 0x304a7cu: goto label_304a7c;
        case 0x304a80u: goto label_304a80;
        case 0x304a84u: goto label_304a84;
        case 0x304a88u: goto label_304a88;
        case 0x304a8cu: goto label_304a8c;
        case 0x304a90u: goto label_304a90;
        case 0x304a94u: goto label_304a94;
        case 0x304a98u: goto label_304a98;
        case 0x304a9cu: goto label_304a9c;
        case 0x304aa0u: goto label_304aa0;
        case 0x304aa4u: goto label_304aa4;
        case 0x304aa8u: goto label_304aa8;
        case 0x304aacu: goto label_304aac;
        case 0x304ab0u: goto label_304ab0;
        case 0x304ab4u: goto label_304ab4;
        case 0x304ab8u: goto label_304ab8;
        case 0x304abcu: goto label_304abc;
        case 0x304ac0u: goto label_304ac0;
        case 0x304ac4u: goto label_304ac4;
        case 0x304ac8u: goto label_304ac8;
        case 0x304accu: goto label_304acc;
        case 0x304ad0u: goto label_304ad0;
        case 0x304ad4u: goto label_304ad4;
        case 0x304ad8u: goto label_304ad8;
        case 0x304adcu: goto label_304adc;
        case 0x304ae0u: goto label_304ae0;
        case 0x304ae4u: goto label_304ae4;
        case 0x304ae8u: goto label_304ae8;
        case 0x304aecu: goto label_304aec;
        case 0x304af0u: goto label_304af0;
        case 0x304af4u: goto label_304af4;
        case 0x304af8u: goto label_304af8;
        case 0x304afcu: goto label_304afc;
        case 0x304b00u: goto label_304b00;
        case 0x304b04u: goto label_304b04;
        case 0x304b08u: goto label_304b08;
        case 0x304b0cu: goto label_304b0c;
        case 0x304b10u: goto label_304b10;
        case 0x304b14u: goto label_304b14;
        case 0x304b18u: goto label_304b18;
        case 0x304b1cu: goto label_304b1c;
        case 0x304b20u: goto label_304b20;
        case 0x304b24u: goto label_304b24;
        case 0x304b28u: goto label_304b28;
        case 0x304b2cu: goto label_304b2c;
        case 0x304b30u: goto label_304b30;
        case 0x304b34u: goto label_304b34;
        case 0x304b38u: goto label_304b38;
        case 0x304b3cu: goto label_304b3c;
        case 0x304b40u: goto label_304b40;
        case 0x304b44u: goto label_304b44;
        case 0x304b48u: goto label_304b48;
        case 0x304b4cu: goto label_304b4c;
        case 0x304b50u: goto label_304b50;
        case 0x304b54u: goto label_304b54;
        case 0x304b58u: goto label_304b58;
        case 0x304b5cu: goto label_304b5c;
        case 0x304b60u: goto label_304b60;
        case 0x304b64u: goto label_304b64;
        case 0x304b68u: goto label_304b68;
        case 0x304b6cu: goto label_304b6c;
        case 0x304b70u: goto label_304b70;
        case 0x304b74u: goto label_304b74;
        case 0x304b78u: goto label_304b78;
        case 0x304b7cu: goto label_304b7c;
        case 0x304b80u: goto label_304b80;
        case 0x304b84u: goto label_304b84;
        case 0x304b88u: goto label_304b88;
        case 0x304b8cu: goto label_304b8c;
        case 0x304b90u: goto label_304b90;
        case 0x304b94u: goto label_304b94;
        case 0x304b98u: goto label_304b98;
        case 0x304b9cu: goto label_304b9c;
        case 0x304ba0u: goto label_304ba0;
        case 0x304ba4u: goto label_304ba4;
        case 0x304ba8u: goto label_304ba8;
        case 0x304bacu: goto label_304bac;
        case 0x304bb0u: goto label_304bb0;
        case 0x304bb4u: goto label_304bb4;
        case 0x304bb8u: goto label_304bb8;
        case 0x304bbcu: goto label_304bbc;
        case 0x304bc0u: goto label_304bc0;
        case 0x304bc4u: goto label_304bc4;
        case 0x304bc8u: goto label_304bc8;
        case 0x304bccu: goto label_304bcc;
        case 0x304bd0u: goto label_304bd0;
        case 0x304bd4u: goto label_304bd4;
        case 0x304bd8u: goto label_304bd8;
        case 0x304bdcu: goto label_304bdc;
        case 0x304be0u: goto label_304be0;
        case 0x304be4u: goto label_304be4;
        case 0x304be8u: goto label_304be8;
        case 0x304becu: goto label_304bec;
        case 0x304bf0u: goto label_304bf0;
        case 0x304bf4u: goto label_304bf4;
        case 0x304bf8u: goto label_304bf8;
        case 0x304bfcu: goto label_304bfc;
        case 0x304c00u: goto label_304c00;
        case 0x304c04u: goto label_304c04;
        case 0x304c08u: goto label_304c08;
        case 0x304c0cu: goto label_304c0c;
        case 0x304c10u: goto label_304c10;
        case 0x304c14u: goto label_304c14;
        case 0x304c18u: goto label_304c18;
        case 0x304c1cu: goto label_304c1c;
        case 0x304c20u: goto label_304c20;
        case 0x304c24u: goto label_304c24;
        case 0x304c28u: goto label_304c28;
        case 0x304c2cu: goto label_304c2c;
        case 0x304c30u: goto label_304c30;
        case 0x304c34u: goto label_304c34;
        case 0x304c38u: goto label_304c38;
        case 0x304c3cu: goto label_304c3c;
        case 0x304c40u: goto label_304c40;
        case 0x304c44u: goto label_304c44;
        case 0x304c48u: goto label_304c48;
        case 0x304c4cu: goto label_304c4c;
        case 0x304c50u: goto label_304c50;
        case 0x304c54u: goto label_304c54;
        case 0x304c58u: goto label_304c58;
        case 0x304c5cu: goto label_304c5c;
        case 0x304c60u: goto label_304c60;
        case 0x304c64u: goto label_304c64;
        case 0x304c68u: goto label_304c68;
        case 0x304c6cu: goto label_304c6c;
        case 0x304c70u: goto label_304c70;
        case 0x304c74u: goto label_304c74;
        default: break;
    }

    ctx->pc = 0x304608u;

label_304608:
    // 0x304608: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x304608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_30460c:
    // 0x30460c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x30460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_304610:
    // 0x304610: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304614:
    // 0x304614: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x304614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_304618:
    // 0x304618: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x304618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_30461c:
    // 0x30461c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x30461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_304620:
    // 0x304620: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x304620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_304624:
    // 0x304624: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x304624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_304628:
    // 0x304628: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x304628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_30462c:
    // 0x30462c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_304630:
    // 0x304630: 0xc0a3eba  jal         func_28FAE8
label_304634:
    if (ctx->pc == 0x304634u) {
        ctx->pc = 0x304634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304630u;
        // 0x304634: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x304638u;
        goto label_304638;
    }
    ctx->pc = 0x304630u;
    SET_GPR_U32(ctx, 31, 0x304638u);
    ctx->pc = 0x304634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304630u;
    // 0x304634: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE8u, 0x304630u, 0x304638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304638u;
label_304638:
    // 0x304638: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x304638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30463c:
    // 0x30463c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_304640:
    // 0x304640: 0x9044019e  lbu         $a0, 0x19E($v0)
    ctx->pc = 0x304640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 414)));
label_304644:
    // 0x304644: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_304648:
    if (ctx->pc == 0x304648u) {
        ctx->pc = 0x304648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304644u;
        // 0x304648: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30464Cu;
        goto label_30464c;
    }
    ctx->pc = 0x304644u;
    {
        const bool branch_taken_0x304644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x304648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304644u;
        // 0x304648: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304644) {
            ctx->pc = 0x30472Cu;
            goto label_30472c;
        }
    }
    ctx->pc = 0x30464Cu;
label_30464c:
    // 0x30464c: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
label_304650:
    if (ctx->pc == 0x304650u) {
        ctx->pc = 0x304650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30464Cu;
        // 0x304650: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304654u;
        goto label_304654;
    }
    ctx->pc = 0x30464Cu;
    {
        const bool branch_taken_0x30464c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x304650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30464Cu;
        // 0x304650: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30464c) {
            ctx->pc = 0x30472Cu;
            goto label_30472c;
        }
    }
    ctx->pc = 0x304654u;
label_304654:
    // 0x304654: 0x26510164  addiu       $s1, $s2, 0x164
    ctx->pc = 0x304654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
label_304658:
    // 0x304658: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x304658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_30465c:
    // 0x30465c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30465cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304660:
    // 0x304660: 0xc0e409a  jal         func_390268
label_304664:
    if (ctx->pc == 0x304664u) {
        ctx->pc = 0x304664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304660u;
        // 0x304664: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304668u;
        goto label_304668;
    }
    ctx->pc = 0x304660u;
    SET_GPR_U32(ctx, 31, 0x304668u);
    ctx->pc = 0x304664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304660u;
    // 0x304664: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x304660u, 0x304668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304668u;
label_304668:
    // 0x304668: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x304668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30466c:
    // 0x30466c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30466cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_304670:
    // 0x304670: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x304670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_304674:
    // 0x304674: 0xa0f809  jalr        $a1
label_304678:
    if (ctx->pc == 0x304678u) {
        ctx->pc = 0x304678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304674u;
        // 0x304678: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30467Cu;
        goto label_30467c;
    }
    ctx->pc = 0x304674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x30467Cu);
        ctx->pc = 0x304678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304674u;
        // 0x304678: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304674u, 0x30467Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30467Cu;
label_30467c:
    // 0x30467c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x30467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_304680:
    // 0x304680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304684:
    // 0x304684: 0xc137882  jal         func_4DE208
label_304688:
    if (ctx->pc == 0x304688u) {
        ctx->pc = 0x304688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304684u;
        // 0x304688: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30468Cu;
        goto label_30468c;
    }
    ctx->pc = 0x304684u;
    SET_GPR_U32(ctx, 31, 0x30468Cu);
    ctx->pc = 0x304688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304684u;
    // 0x304688: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x304684u, 0x30468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30468Cu;
label_30468c:
    // 0x30468c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304690:
    // 0x304690: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_304694:
    if (ctx->pc == 0x304694u) {
        ctx->pc = 0x304694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304690u;
        // 0x304694: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304698u;
        goto label_304698;
    }
    ctx->pc = 0x304690u;
    {
        const bool branch_taken_0x304690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x304694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304690u;
        // 0x304694: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304690) {
            ctx->pc = 0x3046A0u;
            goto label_3046a0;
        }
    }
    ctx->pc = 0x304698u;
label_304698:
    // 0x304698: 0x10000013  b           . + 4 + (0x13 << 2)
label_30469c:
    if (ctx->pc == 0x30469Cu) {
        ctx->pc = 0x30469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304698u;
        // 0x30469c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046A0u;
        goto label_3046a0;
    }
    ctx->pc = 0x304698u;
    {
        const bool branch_taken_0x304698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304698u;
        // 0x30469c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304698) {
            ctx->pc = 0x3046E8u;
            goto label_3046e8;
        }
    }
    ctx->pc = 0x3046A0u;
label_3046a0:
    // 0x3046a0: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x3046a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_3046a4:
    // 0x3046a4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3046a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3046a8:
    // 0x3046a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3046a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3046ac:
    // 0x3046ac: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3046b0:
    if (ctx->pc == 0x3046B0u) {
        ctx->pc = 0x3046B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046ACu;
        // 0x3046b0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046B4u;
        goto label_3046b4;
    }
    ctx->pc = 0x3046ACu;
    {
        const bool branch_taken_0x3046ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3046ac) {
            ctx->pc = 0x3046B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3046ACu;
            // 0x3046b0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3046ECu;
            goto label_3046ec;
        }
    }
    ctx->pc = 0x3046B4u;
label_3046b4:
    // 0x3046b4: 0xc0e409a  jal         func_390268
label_3046b8:
    if (ctx->pc == 0x3046B8u) {
        ctx->pc = 0x3046B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046B4u;
        // 0x3046b8: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046BCu;
        goto label_3046bc;
    }
    ctx->pc = 0x3046B4u;
    SET_GPR_U32(ctx, 31, 0x3046BCu);
    ctx->pc = 0x3046B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046B4u;
    // 0x3046b8: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3046B4u, 0x3046BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046BCu;
label_3046bc:
    // 0x3046bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3046bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3046c0:
    // 0x3046c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3046c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3046c4:
    // 0x3046c4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x3046c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3046c8:
    // 0x3046c8: 0xa0f809  jalr        $a1
label_3046cc:
    if (ctx->pc == 0x3046CCu) {
        ctx->pc = 0x3046CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046C8u;
        // 0x3046cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046D0u;
        goto label_3046d0;
    }
    ctx->pc = 0x3046C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3046D0u);
        ctx->pc = 0x3046CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046C8u;
        // 0x3046cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3046C8u, 0x3046D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3046D0u;
label_3046d0:
    // 0x3046d0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3046d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_3046d4:
    // 0x3046d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3046d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3046d8:
    // 0x3046d8: 0xc137882  jal         func_4DE208
label_3046dc:
    if (ctx->pc == 0x3046DCu) {
        ctx->pc = 0x3046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D8u;
        // 0x3046dc: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046E0u;
        goto label_3046e0;
    }
    ctx->pc = 0x3046D8u;
    SET_GPR_U32(ctx, 31, 0x3046E0u);
    ctx->pc = 0x3046DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046D8u;
    // 0x3046dc: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x3046D8u, 0x3046E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046E0u;
label_3046e0:
    // 0x3046e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3046e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3046e4:
    // 0x3046e4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x3046e4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3046e8:
    // 0x3046e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3046e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3046ec:
    // 0x3046ec: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x3046ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_3046f0:
    // 0x3046f0: 0x90a2019e  lbu         $v0, 0x19E($a1)
    ctx->pc = 0x3046f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 414)));
label_3046f4:
    // 0x3046f4: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
label_3046f8:
    if (ctx->pc == 0x3046F8u) {
        ctx->pc = 0x3046F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046F4u;
        // 0x3046f8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3046FCu;
        goto label_3046fc;
    }
    ctx->pc = 0x3046F4u;
    {
        const bool branch_taken_0x3046f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3046F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046F4u;
        // 0x3046f8: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046f4) {
            ctx->pc = 0x304724u;
            goto label_304724;
        }
    }
    ctx->pc = 0x3046FCu;
label_3046fc:
    // 0x3046fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3046fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_304700:
    // 0x304700: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x304700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_304704:
    // 0x304704: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x304704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_304708:
    // 0x304708: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x304708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30470c:
    // 0x30470c: 0x40f809  jalr        $v0
label_304710:
    if (ctx->pc == 0x304710u) {
        ctx->pc = 0x304710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30470Cu;
        // 0x304710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304714u;
        goto label_304714;
    }
    ctx->pc = 0x30470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304714u);
        ctx->pc = 0x304710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30470Cu;
        // 0x304710: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30470Cu, 0x304714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304714u;
label_304714:
    // 0x304714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304718:
    // 0x304718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30471c:
    // 0x30471c: 0xc06ccb8  jal         func_1B32E0
label_304720:
    if (ctx->pc == 0x304720u) {
        ctx->pc = 0x304720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30471Cu;
        // 0x304720: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304724u;
        goto label_304724;
    }
    ctx->pc = 0x30471Cu;
    SET_GPR_U32(ctx, 31, 0x304724u);
    ctx->pc = 0x304720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30471Cu;
    // 0x304720: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x30471Cu, 0x304724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304724u;
label_304724:
    // 0x304724: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x304724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304728:
    // 0x304728: 0xa051019e  sb          $s1, 0x19E($v0)
    ctx->pc = 0x304728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 414), (uint8_t)GPR_U32(ctx, 17));
label_30472c:
    // 0x30472c: 0x8e42021c  lw          $v0, 0x21C($s2)
    ctx->pc = 0x30472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
label_304730:
    // 0x304730: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_304734:
    if (ctx->pc == 0x304734u) {
        ctx->pc = 0x304734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304730u;
        // 0x304734: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304738u;
        goto label_304738;
    }
    ctx->pc = 0x304730u;
    {
        const bool branch_taken_0x304730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304730u;
        // 0x304734: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304730) {
            ctx->pc = 0x30476Cu;
            goto label_30476c;
        }
    }
    ctx->pc = 0x304738u;
label_304738:
    // 0x304738: 0xc0a40d2  jal         func_290348
label_30473c:
    if (ctx->pc == 0x30473Cu) {
        ctx->pc = 0x30473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304738u;
        // 0x30473c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304740u;
        goto label_304740;
    }
    ctx->pc = 0x304738u;
    SET_GPR_U32(ctx, 31, 0x304740u);
    ctx->pc = 0x30473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304738u;
    // 0x30473c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x304738u, 0x304740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304740u;
label_304740:
    // 0x304740: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_304744:
    if (ctx->pc == 0x304744u) {
        ctx->pc = 0x304744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304740u;
        // 0x304744: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304748u;
        goto label_304748;
    }
    ctx->pc = 0x304740u;
    {
        const bool branch_taken_0x304740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304740u;
        // 0x304744: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304740) {
            ctx->pc = 0x30476Cu;
            goto label_30476c;
        }
    }
    ctx->pc = 0x304748u;
label_304748:
    // 0x304748: 0xc137832  jal         func_4DE0C8
label_30474c:
    if (ctx->pc == 0x30474Cu) {
        ctx->pc = 0x30474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304748u;
        // 0x30474c: 0x26440164  addiu       $a0, $s2, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304750u;
        goto label_304750;
    }
    ctx->pc = 0x304748u;
    SET_GPR_U32(ctx, 31, 0x304750u);
    ctx->pc = 0x30474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304748u;
    // 0x30474c: 0x26440164  addiu       $a0, $s2, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x304748u, 0x304750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304750u;
label_304750:
    // 0x304750: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_304754:
    if (ctx->pc == 0x304754u) {
        ctx->pc = 0x304754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304750u;
        // 0x304754: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304758u;
        goto label_304758;
    }
    ctx->pc = 0x304750u;
    {
        const bool branch_taken_0x304750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304750u;
        // 0x304754: 0x26440124  addiu       $a0, $s2, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304750) {
            ctx->pc = 0x30476Cu;
            goto label_30476c;
        }
    }
    ctx->pc = 0x304758u;
label_304758:
    // 0x304758: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x304758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_30475c:
    // 0x30475c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30475cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304760:
    // 0x304760: 0xc0a3464  jal         func_28D190
label_304764:
    if (ctx->pc == 0x304764u) {
        ctx->pc = 0x304764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304760u;
        // 0x304764: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304768u;
        goto label_304768;
    }
    ctx->pc = 0x304760u;
    SET_GPR_U32(ctx, 31, 0x304768u);
    ctx->pc = 0x304764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304760u;
    // 0x304764: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D190u, 0x304760u, 0x304768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304768u;
label_304768:
    // 0x304768: 0x26440124  addiu       $a0, $s2, 0x124
    ctx->pc = 0x304768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
label_30476c:
    // 0x30476c: 0xc0e409a  jal         func_390268
label_304770:
    if (ctx->pc == 0x304770u) {
        ctx->pc = 0x304770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30476Cu;
        // 0x304770: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304774u;
        goto label_304774;
    }
    ctx->pc = 0x30476Cu;
    SET_GPR_U32(ctx, 31, 0x304774u);
    ctx->pc = 0x304770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30476Cu;
    // 0x304770: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30476Cu, 0x304774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304774u;
label_304774:
    // 0x304774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304778:
    // 0x304778: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_30477c:
    if (ctx->pc == 0x30477Cu) {
        ctx->pc = 0x30477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304778u;
        // 0x30477c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304780u;
        goto label_304780;
    }
    ctx->pc = 0x304778u;
    {
        const bool branch_taken_0x304778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304778u;
        // 0x30477c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304778) {
            ctx->pc = 0x304844u;
            goto label_304844;
        }
    }
    ctx->pc = 0x304780u;
label_304780:
    // 0x304780: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x304780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304784:
    // 0x304784: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x304784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_304788:
    // 0x304788: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_30478c:
    // 0x30478c: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x30478cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_304790:
    // 0x304790: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x304790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304794:
    // 0x304794: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x304794u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_304798:
    // 0x304798: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x304798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30479c:
    // 0x30479c: 0xc0cd8ec  jal         func_3363B0
label_3047a0:
    if (ctx->pc == 0x3047A0u) {
        ctx->pc = 0x3047A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30479Cu;
        // 0x3047a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047A4u;
        goto label_3047a4;
    }
    ctx->pc = 0x30479Cu;
    SET_GPR_U32(ctx, 31, 0x3047A4u);
    ctx->pc = 0x3047A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30479Cu;
    // 0x3047a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x30479Cu, 0x3047A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047A4u;
label_3047a4:
    // 0x3047a4: 0x8e1101a8  lw          $s1, 0x1A8($s0)
    ctx->pc = 0x3047a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_3047a8:
    // 0x3047a8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_3047ac:
    if (ctx->pc == 0x3047ACu) {
        ctx->pc = 0x3047B0u;
        goto label_3047b0;
    }
    ctx->pc = 0x3047A8u;
    {
        const bool branch_taken_0x3047a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3047a8) {
            ctx->pc = 0x304804u;
            goto label_304804;
        }
    }
    ctx->pc = 0x3047B0u;
label_3047b0:
    // 0x3047b0: 0xc089018  jal         func_224060
label_3047b4:
    if (ctx->pc == 0x3047B4u) {
        ctx->pc = 0x3047B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047B0u;
        // 0x3047b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047B8u;
        goto label_3047b8;
    }
    ctx->pc = 0x3047B0u;
    SET_GPR_U32(ctx, 31, 0x3047B8u);
    ctx->pc = 0x3047B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047B0u;
    // 0x3047b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x3047B0u, 0x3047B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047B8u;
label_3047b8:
    // 0x3047b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3047b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3047bc:
    // 0x3047bc: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_3047c0:
    if (ctx->pc == 0x3047C0u) {
        ctx->pc = 0x3047C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047BCu;
        // 0x3047c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047C4u;
        goto label_3047c4;
    }
    ctx->pc = 0x3047BCu;
    {
        const bool branch_taken_0x3047bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3047bc) {
            ctx->pc = 0x3047C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3047BCu;
            // 0x3047c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304804u;
            goto label_304804;
        }
    }
    ctx->pc = 0x3047C4u;
label_3047c4:
    // 0x3047c4: 0xc0e87c0  jal         func_3A1F00
label_3047c8:
    if (ctx->pc == 0x3047C8u) {
        ctx->pc = 0x3047C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047C4u;
        // 0x3047c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3047CCu;
        goto label_3047cc;
    }
    ctx->pc = 0x3047C4u;
    SET_GPR_U32(ctx, 31, 0x3047CCu);
    ctx->pc = 0x3047C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047C4u;
    // 0x3047c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3047C4u, 0x3047CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047CCu;
label_3047cc:
    // 0x3047cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3047ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3047d0:
    // 0x3047d0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3047d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3047d4:
    // 0x3047d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3047d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3047d8:
    // 0x3047d8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3047d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3047dc:
    // 0x3047dc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x3047dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3047e0:
    // 0x3047e0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3047e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3047e4:
    // 0x3047e4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3047e4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3047e8:
    // 0x3047e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3047e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3047ec:
    // 0x3047ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3047ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3047f0:
    // 0x3047f0: 0x0  nop
    ctx->pc = 0x3047f0u;
    // NOP
label_3047f4:
    // 0x3047f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3047f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3047f8:
    // 0x3047f8: 0x0  nop
    ctx->pc = 0x3047f8u;
    // NOP
label_3047fc:
    // 0x3047fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_304800:
    if (ctx->pc == 0x304800u) {
        ctx->pc = 0x304800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047FCu;
        // 0x304800: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304804u;
        goto label_304804;
    }
    ctx->pc = 0x3047FCu;
    {
        const bool branch_taken_0x3047fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3047fc) {
            ctx->pc = 0x304800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3047FCu;
            // 0x304800: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304804u;
            goto label_304804;
        }
    }
    ctx->pc = 0x304804u;
label_304804:
    // 0x304804: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_304808:
    if (ctx->pc == 0x304808u) {
        ctx->pc = 0x304808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304804u;
        // 0x304808: 0x96420148  lhu         $v0, 0x148($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30480Cu;
        goto label_30480c;
    }
    ctx->pc = 0x304804u;
    {
        const bool branch_taken_0x304804 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x304808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304804u;
        // 0x304808: 0x96420148  lhu         $v0, 0x148($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304804) {
            ctx->pc = 0x30482Cu;
            goto label_30482c;
        }
    }
    ctx->pc = 0x30480Cu;
label_30480c:
    // 0x30480c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_304810:
    // 0x304810: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x304810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_304814:
    // 0x304814: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x304814u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_304818:
    // 0x304818: 0x28630025  slti        $v1, $v1, 0x25
    ctx->pc = 0x304818u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)37) ? 1 : 0);
label_30481c:
    // 0x30481c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_304820:
    if (ctx->pc == 0x304820u) {
        ctx->pc = 0x304820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30481Cu;
        // 0x304820: 0xa6420148  sh          $v0, 0x148($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304824u;
        goto label_304824;
    }
    ctx->pc = 0x30481Cu;
    {
        const bool branch_taken_0x30481c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30481Cu;
        // 0x304820: 0xa6420148  sh          $v0, 0x148($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30481c) {
            ctx->pc = 0x304840u;
            goto label_304840;
        }
    }
    ctx->pc = 0x304824u;
label_304824:
    // 0x304824: 0x10000006  b           . + 4 + (0x6 << 2)
label_304828:
    if (ctx->pc == 0x304828u) {
        ctx->pc = 0x304828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304824u;
        // 0x304828: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30482Cu;
        goto label_30482c;
    }
    ctx->pc = 0x304824u;
    {
        const bool branch_taken_0x304824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304824u;
        // 0x304828: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304824) {
            ctx->pc = 0x304840u;
            goto label_304840;
        }
    }
    ctx->pc = 0x30482Cu;
label_30482c:
    // 0x30482c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x30482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_304830:
    // 0x304830: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x304830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_304834:
    // 0x304834: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_304838:
    if (ctx->pc == 0x304838u) {
        ctx->pc = 0x304838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304834u;
        // 0x304838: 0xa6420148  sh          $v0, 0x148($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30483Cu;
        goto label_30483c;
    }
    ctx->pc = 0x304834u;
    {
        const bool branch_taken_0x304834 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x304838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304834u;
        // 0x304838: 0xa6420148  sh          $v0, 0x148($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304834) {
            ctx->pc = 0x304840u;
            goto label_304840;
        }
    }
    ctx->pc = 0x30483Cu;
label_30483c:
    // 0x30483c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30483cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304840:
    // 0x304840: 0xa6420148  sh          $v0, 0x148($s2)
    ctx->pc = 0x304840u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 2));
label_304844:
    // 0x304844: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x304844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_304848:
    // 0x304848: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x304848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_30484c:
    // 0x30484c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_304850:
    if (ctx->pc == 0x304850u) {
        ctx->pc = 0x304850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30484Cu;
        // 0x304850: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304854u;
        goto label_304854;
    }
    ctx->pc = 0x30484Cu;
    {
        const bool branch_taken_0x30484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30484c) {
            ctx->pc = 0x304850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30484Cu;
            // 0x304850: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x304854u;
            goto label_304854;
        }
    }
    ctx->pc = 0x304854u;
label_304854:
    // 0x304854: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x304854u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_304858:
    // 0x304858: 0x1810  mfhi        $v1
    ctx->pc = 0x304858u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_30485c:
    // 0x30485c: 0x54600070  bnel        $v1, $zero, . + 4 + (0x70 << 2)
label_304860:
    if (ctx->pc == 0x304860u) {
        ctx->pc = 0x304860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30485Cu;
        // 0x304860: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304864u;
        goto label_304864;
    }
    ctx->pc = 0x30485Cu;
    {
        const bool branch_taken_0x30485c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30485c) {
            ctx->pc = 0x304860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30485Cu;
            // 0x304860: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A20u;
            goto label_304a20;
        }
    }
    ctx->pc = 0x304864u;
label_304864:
    // 0x304864: 0x92420265  lbu         $v0, 0x265($s2)
    ctx->pc = 0x304864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 613)));
label_304868:
    // 0x304868: 0x5040006d  beql        $v0, $zero, . + 4 + (0x6D << 2)
label_30486c:
    if (ctx->pc == 0x30486Cu) {
        ctx->pc = 0x30486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304868u;
        // 0x30486c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304870u;
        goto label_304870;
    }
    ctx->pc = 0x304868u;
    {
        const bool branch_taken_0x304868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304868) {
            ctx->pc = 0x30486Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304868u;
            // 0x30486c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A20u;
            goto label_304a20;
        }
    }
    ctx->pc = 0x304870u;
label_304870:
    // 0x304870: 0xc089bfc  jal         func_226FF0
label_304874:
    if (ctx->pc == 0x304874u) {
        ctx->pc = 0x304874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304870u;
        // 0x304874: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304878u;
        goto label_304878;
    }
    ctx->pc = 0x304870u;
    SET_GPR_U32(ctx, 31, 0x304878u);
    ctx->pc = 0x304874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304870u;
    // 0x304874: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x304870u, 0x304878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304878u;
label_304878:
    // 0x304878: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
label_30487c:
    if (ctx->pc == 0x30487Cu) {
        ctx->pc = 0x30487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304878u;
        // 0x30487c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304880u;
        goto label_304880;
    }
    ctx->pc = 0x304878u;
    {
        const bool branch_taken_0x304878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304878) {
            ctx->pc = 0x30487Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304878u;
            // 0x30487c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A20u;
            goto label_304a20;
        }
    }
    ctx->pc = 0x304880u;
label_304880:
    // 0x304880: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x304880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_304884:
    // 0x304884: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x304884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_304888:
    // 0x304888: 0x8c44caa8  lw          $a0, -0x3558($v0)
    ctx->pc = 0x304888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953640)));
label_30488c:
    // 0x30488c: 0xc05913e  jal         func_1644F8
label_304890:
    if (ctx->pc == 0x304890u) {
        ctx->pc = 0x304890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30488Cu;
        // 0x304890: 0x8c65002c  lw          $a1, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304894u;
        goto label_304894;
    }
    ctx->pc = 0x30488Cu;
    SET_GPR_U32(ctx, 31, 0x304894u);
    ctx->pc = 0x304890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30488Cu;
    // 0x304890: 0x8c65002c  lw          $a1, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644F8u, 0x30488Cu, 0x304894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304894u;
label_304894:
    // 0x304894: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
label_304898:
    if (ctx->pc == 0x304898u) {
        ctx->pc = 0x304898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304894u;
        // 0x304898: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30489Cu;
        goto label_30489c;
    }
    ctx->pc = 0x304894u;
    {
        const bool branch_taken_0x304894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304894) {
            ctx->pc = 0x304898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304894u;
            // 0x304898: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A20u;
            goto label_304a20;
        }
    }
    ctx->pc = 0x30489Cu;
label_30489c:
    // 0x30489c: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_3048a0:
    if (ctx->pc == 0x3048A0u) {
        ctx->pc = 0x3048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30489Cu;
        // 0x3048a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048A4u;
        goto label_3048a4;
    }
    ctx->pc = 0x30489Cu;
    {
        const bool branch_taken_0x30489c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30489Cu;
        // 0x3048a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30489c) {
            ctx->pc = 0x3048ECu;
            goto label_3048ec;
        }
    }
    ctx->pc = 0x3048A4u;
label_3048a4:
    // 0x3048a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3048a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3048a8:
    // 0x3048a8: 0x0  nop
    ctx->pc = 0x3048a8u;
    // NOP
label_3048ac:
    // 0x3048ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3048acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3048b0:
    // 0x3048b0: 0x10000014  b           . + 4 + (0x14 << 2)
label_3048b4:
    if (ctx->pc == 0x3048B4u) {
        ctx->pc = 0x3048B8u;
        goto label_3048b8;
    }
    ctx->pc = 0x3048B0u;
    {
        const bool branch_taken_0x3048b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3048b0) {
            ctx->pc = 0x304904u;
            goto label_304904;
        }
    }
    ctx->pc = 0x3048B8u;
label_3048b8:
    // 0x3048b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3048b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3048bc:
    // 0x3048bc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3048bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3048c0:
    // 0x3048c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3048c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3048c4:
    // 0x3048c4: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x3048c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_3048c8:
    // 0x3048c8: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x3048c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_3048cc:
    // 0x3048cc: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x3048ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_3048d0:
    // 0x3048d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3048d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3048d4:
    // 0x3048d4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3048d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3048d8:
    // 0x3048d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3048d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3048dc:
    // 0x3048dc: 0x40f809  jalr        $v0
label_3048e0:
    if (ctx->pc == 0x3048E0u) {
        ctx->pc = 0x3048E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048DCu;
        // 0x3048e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048E4u;
        goto label_3048e4;
    }
    ctx->pc = 0x3048DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3048E4u);
        ctx->pc = 0x3048E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048DCu;
        // 0x3048e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3048DCu, 0x3048E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3048E4u;
label_3048e4:
    // 0x3048e4: 0x100000da  b           . + 4 + (0xDA << 2)
label_3048e8:
    if (ctx->pc == 0x3048E8u) {
        ctx->pc = 0x3048E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048E4u;
        // 0x3048e8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3048ECu;
        goto label_3048ec;
    }
    ctx->pc = 0x3048E4u;
    {
        const bool branch_taken_0x3048e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3048E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048E4u;
        // 0x3048e8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048e4) {
            ctx->pc = 0x304C50u;
            goto label_304c50;
        }
    }
    ctx->pc = 0x3048ECu;
label_3048ec:
    // 0x3048ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3048ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3048f0:
    // 0x3048f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3048f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3048f4:
    // 0x3048f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3048f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3048f8:
    // 0x3048f8: 0x0  nop
    ctx->pc = 0x3048f8u;
    // NOP
label_3048fc:
    // 0x3048fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3048fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_304900:
    // 0x304900: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304904:
    // 0x304904: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x304904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_304908:
    // 0x304908: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x304908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30490c:
    // 0x30490c: 0xc10b1c6  jal         func_42C718
label_304910:
    if (ctx->pc == 0x304910u) {
        ctx->pc = 0x304910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30490Cu;
        // 0x304910: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304914u;
        goto label_304914;
    }
    ctx->pc = 0x30490Cu;
    SET_GPR_U32(ctx, 31, 0x304914u);
    ctx->pc = 0x304910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30490Cu;
    // 0x304910: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x30490Cu, 0x304914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304914u;
label_304914:
    // 0x304914: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x304914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_304918:
    // 0x304918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30491c:
    // 0x30491c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x30491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_304920:
    // 0x304920: 0xc0cd4ee  jal         func_3353B8
label_304924:
    if (ctx->pc == 0x304924u) {
        ctx->pc = 0x304924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304920u;
        // 0x304924: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304928u;
        goto label_304928;
    }
    ctx->pc = 0x304920u;
    SET_GPR_U32(ctx, 31, 0x304928u);
    ctx->pc = 0x304924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304920u;
    // 0x304924: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x304920u, 0x304928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304928u;
label_304928:
    // 0x304928: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x304928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_30492c:
    // 0x30492c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_304930:
    if (ctx->pc == 0x304930u) {
        ctx->pc = 0x304930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30492Cu;
        // 0x304930: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304934u;
        goto label_304934;
    }
    ctx->pc = 0x30492Cu;
    {
        const bool branch_taken_0x30492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30492c) {
            ctx->pc = 0x304930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30492Cu;
            // 0x304930: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A20u;
            goto label_304a20;
        }
    }
    ctx->pc = 0x304934u;
label_304934:
    // 0x304934: 0xc087502  jal         func_21D408
label_304938:
    if (ctx->pc == 0x304938u) {
        ctx->pc = 0x304938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304934u;
        // 0x304938: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30493Cu;
        goto label_30493c;
    }
    ctx->pc = 0x304934u;
    SET_GPR_U32(ctx, 31, 0x30493Cu);
    ctx->pc = 0x304938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304934u;
    // 0x304938: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x304934u, 0x30493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30493Cu;
label_30493c:
    // 0x30493c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30493cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304940:
    // 0x304940: 0xc0a3fa4  jal         func_28FE90
label_304944:
    if (ctx->pc == 0x304944u) {
        ctx->pc = 0x304944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304940u;
        // 0x304944: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304948u;
        goto label_304948;
    }
    ctx->pc = 0x304940u;
    SET_GPR_U32(ctx, 31, 0x304948u);
    ctx->pc = 0x304944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304940u;
    // 0x304944: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x304940u, 0x304948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304948u;
label_304948:
    // 0x304948: 0xc0a7aa8  jal         func_29EAA0
label_30494c:
    if (ctx->pc == 0x30494Cu) {
        ctx->pc = 0x30494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304948u;
        // 0x30494c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304950u;
        goto label_304950;
    }
    ctx->pc = 0x304948u;
    SET_GPR_U32(ctx, 31, 0x304950u);
    ctx->pc = 0x30494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304948u;
    // 0x30494c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAA0u, 0x304948u, 0x304950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304950u;
label_304950:
    // 0x304950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304954:
    // 0x304954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304958:
    // 0x304958: 0x56220031  bnel        $s1, $v0, . + 4 + (0x31 << 2)
label_30495c:
    if (ctx->pc == 0x30495Cu) {
        ctx->pc = 0x30495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304958u;
        // 0x30495c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304960u;
        goto label_304960;
    }
    ctx->pc = 0x304958u;
    {
        const bool branch_taken_0x304958 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x304958) {
            ctx->pc = 0x30495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304958u;
            // 0x30495c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A20u;
            goto label_304a20;
        }
    }
    ctx->pc = 0x304960u;
label_304960:
    // 0x304960: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x304960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_304964:
    // 0x304964: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x304964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304968:
    // 0x304968: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x304968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_30496c:
    // 0x30496c: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x30496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
label_304970:
    // 0x304970: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x304970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_304974:
    // 0x304974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x304974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304978:
    // 0x304978: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30497c:
    // 0x30497c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x30497cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_304980:
    // 0x304980: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x304980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304984:
    // 0x304984: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x304984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_304988:
    // 0x304988: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30498c:
    // 0x30498c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x30498cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304990:
    // 0x304990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x304990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304994:
    // 0x304994: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x304994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304998:
    // 0x304998: 0xc0a757c  jal         func_29D5F0
label_30499c:
    if (ctx->pc == 0x30499Cu) {
        ctx->pc = 0x30499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304998u;
        // 0x30499c: 0x3c130054  lui         $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049A0u;
        goto label_3049a0;
    }
    ctx->pc = 0x304998u;
    SET_GPR_U32(ctx, 31, 0x3049A0u);
    ctx->pc = 0x30499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304998u;
    // 0x30499c: 0x3c130054  lui         $s3, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x304998u, 0x3049A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049A0u;
label_3049a0:
    // 0x3049a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3049a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3049a4:
    // 0x3049a4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_3049a8:
    if (ctx->pc == 0x3049A8u) {
        ctx->pc = 0x3049A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049A4u;
        // 0x3049a8: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049ACu;
        goto label_3049ac;
    }
    ctx->pc = 0x3049A4u;
    {
        const bool branch_taken_0x3049a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3049A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049A4u;
        // 0x3049a8: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049a4) {
            ctx->pc = 0x304A18u;
            goto label_304a18;
        }
    }
    ctx->pc = 0x3049ACu;
label_3049ac:
    // 0x3049ac: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
label_3049b0:
    // 0x3049b0: 0x84620032  lh          $v0, 0x32($v1)
    ctx->pc = 0x3049b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_3049b4:
    // 0x3049b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3049b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3049b8:
    // 0x3049b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3049b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3049bc:
    // 0x3049bc: 0x10510008  beq         $v0, $s1, . + 4 + (0x8 << 2)
label_3049c0:
    if (ctx->pc == 0x3049C0u) {
        ctx->pc = 0x3049C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049BCu;
        // 0x3049c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049C4u;
        goto label_3049c4;
    }
    ctx->pc = 0x3049BCu;
    {
        const bool branch_taken_0x3049bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3049C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049BCu;
        // 0x3049c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049bc) {
            ctx->pc = 0x3049E0u;
            goto label_3049e0;
        }
    }
    ctx->pc = 0x3049C4u;
label_3049c4:
    // 0x3049c4: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x3049c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_3049c8:
    // 0x3049c8: 0xc0e44cc  jal         func_391330
label_3049cc:
    if (ctx->pc == 0x3049CCu) {
        ctx->pc = 0x3049CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049C8u;
        // 0x3049cc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049D0u;
        goto label_3049d0;
    }
    ctx->pc = 0x3049C8u;
    SET_GPR_U32(ctx, 31, 0x3049D0u);
    ctx->pc = 0x3049CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049C8u;
    // 0x3049cc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3049C8u, 0x3049D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049D0u;
label_3049d0:
    // 0x3049d0: 0x80430087  lb          $v1, 0x87($v0)
    ctx->pc = 0x3049d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
label_3049d4:
    // 0x3049d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3049d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3049d8:
    // 0x3049d8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_3049dc:
    if (ctx->pc == 0x3049DCu) {
        ctx->pc = 0x3049DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049D8u;
        // 0x3049dc: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049E0u;
        goto label_3049e0;
    }
    ctx->pc = 0x3049D8u;
    {
        const bool branch_taken_0x3049d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3049DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049D8u;
        // 0x3049dc: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049d8) {
            ctx->pc = 0x304A18u;
            goto label_304a18;
        }
    }
    ctx->pc = 0x3049E0u;
label_3049e0:
    // 0x3049e0: 0xc0a36c8  jal         func_28DB20
label_3049e4:
    if (ctx->pc == 0x3049E4u) {
        ctx->pc = 0x3049E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049E0u;
        // 0x3049e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049E8u;
        goto label_3049e8;
    }
    ctx->pc = 0x3049E0u;
    SET_GPR_U32(ctx, 31, 0x3049E8u);
    ctx->pc = 0x3049E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049E0u;
    // 0x3049e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3049E0u, 0x3049E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049E8u;
label_3049e8:
    // 0x3049e8: 0x8243002e  lb          $v1, 0x2E($s2)
    ctx->pc = 0x3049e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
label_3049ec:
    // 0x3049ec: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
label_3049f0:
    if (ctx->pc == 0x3049F0u) {
        ctx->pc = 0x3049F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049ECu;
        // 0x3049f0: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049F4u;
        goto label_3049f4;
    }
    ctx->pc = 0x3049ECu;
    {
        const bool branch_taken_0x3049ec = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3049F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049ECu;
        // 0x3049f0: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049ec) {
            ctx->pc = 0x304A18u;
            goto label_304a18;
        }
    }
    ctx->pc = 0x3049F4u;
label_3049f4:
    // 0x3049f4: 0xc0a367c  jal         func_28D9F0
label_3049f8:
    if (ctx->pc == 0x3049F8u) {
        ctx->pc = 0x3049F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049F4u;
        // 0x3049f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3049FCu;
        goto label_3049fc;
    }
    ctx->pc = 0x3049F4u;
    SET_GPR_U32(ctx, 31, 0x3049FCu);
    ctx->pc = 0x3049F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049F4u;
    // 0x3049f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x3049F4u, 0x3049FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049FCu;
label_3049fc:
    // 0x3049fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_304a00:
    if (ctx->pc == 0x304A00u) {
        ctx->pc = 0x304A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049FCu;
        // 0x304a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A04u;
        goto label_304a04;
    }
    ctx->pc = 0x3049FCu;
    {
        const bool branch_taken_0x3049fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049FCu;
        // 0x304a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049fc) {
            ctx->pc = 0x304A14u;
            goto label_304a14;
        }
    }
    ctx->pc = 0x304A04u;
label_304a04:
    // 0x304a04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x304a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304a08:
    // 0x304a08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x304a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304a0c:
    // 0x304a0c: 0xc0bebe6  jal         func_2FAF98
label_304a10:
    if (ctx->pc == 0x304A10u) {
        ctx->pc = 0x304A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A0Cu;
        // 0x304a10: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A14u;
        goto label_304a14;
    }
    ctx->pc = 0x304A0Cu;
    SET_GPR_U32(ctx, 31, 0x304A14u);
    ctx->pc = 0x304A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A0Cu;
    // 0x304a10: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF98u, 0x304A0Cu, 0x304A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A14u;
label_304a14:
    // 0x304a14: 0x2662f2f0  addiu       $v0, $s3, -0xD10
    ctx->pc = 0x304a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
label_304a18:
    // 0x304a18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x304a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_304a1c:
    // 0x304a1c: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x304a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_304a20:
    // 0x304a20: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x304a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_304a24:
    // 0x304a24: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_304a28:
    if (ctx->pc == 0x304A28u) {
        ctx->pc = 0x304A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A24u;
        // 0x304a28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A2Cu;
        goto label_304a2c;
    }
    ctx->pc = 0x304A24u;
    {
        const bool branch_taken_0x304a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a24) {
            ctx->pc = 0x304A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304A24u;
            // 0x304a28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x304A2Cu;
            goto label_304a2c;
        }
    }
    ctx->pc = 0x304A2Cu;
label_304a2c:
    // 0x304a2c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x304a2cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_304a30:
    // 0x304a30: 0x1810  mfhi        $v1
    ctx->pc = 0x304a30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_304a34:
    // 0x304a34: 0x54600035  bnel        $v1, $zero, . + 4 + (0x35 << 2)
label_304a38:
    if (ctx->pc == 0x304A38u) {
        ctx->pc = 0x304A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A34u;
        // 0x304a38: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A3Cu;
        goto label_304a3c;
    }
    ctx->pc = 0x304A34u;
    {
        const bool branch_taken_0x304a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x304a34) {
            ctx->pc = 0x304A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304A34u;
            // 0x304a38: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304B0Cu;
            goto label_304b0c;
        }
    }
    ctx->pc = 0x304A3Cu;
label_304a3c:
    // 0x304a3c: 0xc0a2fea  jal         func_28BFA8
label_304a40:
    if (ctx->pc == 0x304A40u) {
        ctx->pc = 0x304A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A3Cu;
        // 0x304a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A44u;
        goto label_304a44;
    }
    ctx->pc = 0x304A3Cu;
    SET_GPR_U32(ctx, 31, 0x304A44u);
    ctx->pc = 0x304A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A3Cu;
    // 0x304a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BFA8u, 0x304A3Cu, 0x304A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A44u;
label_304a44:
    // 0x304a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304a48:
    // 0x304a48: 0x54430030  bnel        $v0, $v1, . + 4 + (0x30 << 2)
label_304a4c:
    if (ctx->pc == 0x304A4Cu) {
        ctx->pc = 0x304A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A48u;
        // 0x304a4c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A50u;
        goto label_304a50;
    }
    ctx->pc = 0x304A48u;
    {
        const bool branch_taken_0x304a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x304a48) {
            ctx->pc = 0x304A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304A48u;
            // 0x304a4c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304B0Cu;
            goto label_304b0c;
        }
    }
    ctx->pc = 0x304A50u;
label_304a50:
    // 0x304a50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x304a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304a54:
    // 0x304a54: 0x3c130054  lui         $s3, 0x54
    ctx->pc = 0x304a54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
label_304a58:
    // 0x304a58: 0xc08a200  jal         func_228800
label_304a5c:
    if (ctx->pc == 0x304A5Cu) {
        ctx->pc = 0x304A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A58u;
        // 0x304a5c: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A60u;
        goto label_304a60;
    }
    ctx->pc = 0x304A58u;
    SET_GPR_U32(ctx, 31, 0x304A60u);
    ctx->pc = 0x304A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A58u;
    // 0x304a5c: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x304A58u, 0x304A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A60u;
label_304a60:
    // 0x304a60: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x304a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_304a64:
    // 0x304a64: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x304a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304a68:
    // 0x304a68: 0x2442014c  addiu       $v0, $v0, 0x14C
    ctx->pc = 0x304a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
label_304a6c:
    // 0x304a6c: 0x2463f290  addiu       $v1, $v1, -0xD70
    ctx->pc = 0x304a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963856));
label_304a70:
    // 0x304a70: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x304a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_304a74:
    // 0x304a74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x304a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304a78:
    // 0x304a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304a7c:
    // 0x304a7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x304a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_304a80:
    // 0x304a80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x304a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304a84:
    // 0x304a84: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x304a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_304a88:
    // 0x304a88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304a8c:
    // 0x304a8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x304a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304a90:
    // 0x304a90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x304a90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304a94:
    // 0x304a94: 0xc0a757c  jal         func_29D5F0
label_304a98:
    if (ctx->pc == 0x304A98u) {
        ctx->pc = 0x304A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A94u;
        // 0x304a98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304A9Cu;
        goto label_304a9c;
    }
    ctx->pc = 0x304A94u;
    SET_GPR_U32(ctx, 31, 0x304A9Cu);
    ctx->pc = 0x304A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A94u;
    // 0x304a98: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x304A94u, 0x304A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A9Cu;
label_304a9c:
    // 0x304a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304aa0:
    // 0x304aa0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_304aa4:
    if (ctx->pc == 0x304AA4u) {
        ctx->pc = 0x304AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA0u;
        // 0x304aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AA8u;
        goto label_304aa8;
    }
    ctx->pc = 0x304AA0u;
    {
        const bool branch_taken_0x304aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA0u;
        // 0x304aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304aa0) {
            ctx->pc = 0x304B00u;
            goto label_304b00;
        }
    }
    ctx->pc = 0x304AA8u;
label_304aa8:
    // 0x304aa8: 0xc0a3658  jal         func_28D960
label_304aac:
    if (ctx->pc == 0x304AACu) {
        ctx->pc = 0x304AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA8u;
        // 0x304aac: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AB0u;
        goto label_304ab0;
    }
    ctx->pc = 0x304AA8u;
    SET_GPR_U32(ctx, 31, 0x304AB0u);
    ctx->pc = 0x304AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AA8u;
    // 0x304aac: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x304AA8u, 0x304AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AB0u;
label_304ab0:
    // 0x304ab0: 0x8243002d  lb          $v1, 0x2D($s2)
    ctx->pc = 0x304ab0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 45)));
label_304ab4:
    // 0x304ab4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x304ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_304ab8:
    // 0x304ab8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_304abc:
    if (ctx->pc == 0x304ABCu) {
        ctx->pc = 0x304ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AB8u;
        // 0x304abc: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AC0u;
        goto label_304ac0;
    }
    ctx->pc = 0x304AB8u;
    {
        const bool branch_taken_0x304ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AB8u;
        // 0x304abc: 0x2662f2f0  addiu       $v0, $s3, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ab8) {
            ctx->pc = 0x304B04u;
            goto label_304b04;
        }
    }
    ctx->pc = 0x304AC0u;
label_304ac0:
    // 0x304ac0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x304ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304ac4:
    // 0x304ac4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x304ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_304ac8:
    // 0x304ac8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x304ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_304acc:
    // 0x304acc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x304accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_304ad0:
    // 0x304ad0: 0x40f809  jalr        $v0
label_304ad4:
    if (ctx->pc == 0x304AD4u) {
        ctx->pc = 0x304AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AD0u;
        // 0x304ad4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AD8u;
        goto label_304ad8;
    }
    ctx->pc = 0x304AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304AD8u);
        ctx->pc = 0x304AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AD0u;
        // 0x304ad4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304AD0u, 0x304AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304AD8u;
label_304ad8:
    // 0x304ad8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x304ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_304adc:
    // 0x304adc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304ae0:
    // 0x304ae0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x304ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_304ae4:
    // 0x304ae4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x304ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_304ae8:
    // 0x304ae8: 0x40f809  jalr        $v0
label_304aec:
    if (ctx->pc == 0x304AECu) {
        ctx->pc = 0x304AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AE8u;
        // 0x304aec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304AF0u;
        goto label_304af0;
    }
    ctx->pc = 0x304AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304AF0u);
        ctx->pc = 0x304AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AE8u;
        // 0x304aec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304AE8u, 0x304AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304AF0u;
label_304af0:
    // 0x304af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304af4:
    // 0x304af4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x304af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304af8:
    // 0x304af8: 0xc0b71c2  jal         func_2DC708
label_304afc:
    if (ctx->pc == 0x304AFCu) {
        ctx->pc = 0x304AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AF8u;
        // 0x304afc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B00u;
        goto label_304b00;
    }
    ctx->pc = 0x304AF8u;
    SET_GPR_U32(ctx, 31, 0x304B00u);
    ctx->pc = 0x304AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AF8u;
    // 0x304afc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x304AF8u, 0x304B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B00u;
label_304b00:
    // 0x304b00: 0x2662f2f0  addiu       $v0, $s3, -0xD10
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963952));
label_304b04:
    // 0x304b04: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x304b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_304b08:
    // 0x304b08: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x304b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_304b0c:
    // 0x304b0c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x304b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_304b10:
    // 0x304b10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_304b14:
    if (ctx->pc == 0x304B14u) {
        ctx->pc = 0x304B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B10u;
        // 0x304b14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B18u;
        goto label_304b18;
    }
    ctx->pc = 0x304B10u;
    {
        const bool branch_taken_0x304b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b10) {
            ctx->pc = 0x304B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304B10u;
            // 0x304b14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x304B18u;
            goto label_304b18;
        }
    }
    ctx->pc = 0x304B18u;
label_304b18:
    // 0x304b18: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x304b18u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_304b1c:
    // 0x304b1c: 0x1810  mfhi        $v1
    ctx->pc = 0x304b1cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_304b20:
    // 0x304b20: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
label_304b24:
    if (ctx->pc == 0x304B24u) {
        ctx->pc = 0x304B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B20u;
        // 0x304b24: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B28u;
        goto label_304b28;
    }
    ctx->pc = 0x304B20u;
    {
        const bool branch_taken_0x304b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B20u;
        // 0x304b24: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b20) {
            ctx->pc = 0x304C50u;
            goto label_304c50;
        }
    }
    ctx->pc = 0x304B28u;
label_304b28:
    // 0x304b28: 0xc0e409a  jal         func_390268
label_304b2c:
    if (ctx->pc == 0x304B2Cu) {
        ctx->pc = 0x304B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B28u;
        // 0x304b2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B30u;
        goto label_304b30;
    }
    ctx->pc = 0x304B28u;
    SET_GPR_U32(ctx, 31, 0x304B30u);
    ctx->pc = 0x304B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B28u;
    // 0x304b2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x304B28u, 0x304B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B30u;
label_304b30:
    // 0x304b30: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_304b34:
    if (ctx->pc == 0x304B34u) {
        ctx->pc = 0x304B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B30u;
        // 0x304b34: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B38u;
        goto label_304b38;
    }
    ctx->pc = 0x304B30u;
    {
        const bool branch_taken_0x304b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B30u;
        // 0x304b34: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b30) {
            ctx->pc = 0x304C50u;
            goto label_304c50;
        }
    }
    ctx->pc = 0x304B38u;
label_304b38:
    // 0x304b38: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x304b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_304b3c:
    // 0x304b3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x304b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304b40:
    // 0x304b40: 0xc089998  jal         func_226660
label_304b44:
    if (ctx->pc == 0x304B44u) {
        ctx->pc = 0x304B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B40u;
        // 0x304b44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B48u;
        goto label_304b48;
    }
    ctx->pc = 0x304B40u;
    SET_GPR_U32(ctx, 31, 0x304B48u);
    ctx->pc = 0x304B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B40u;
    // 0x304b44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x304B40u, 0x304B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B48u;
label_304b48:
    // 0x304b48: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_304b4c:
    if (ctx->pc == 0x304B4Cu) {
        ctx->pc = 0x304B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B48u;
        // 0x304b4c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B50u;
        goto label_304b50;
    }
    ctx->pc = 0x304B48u;
    {
        const bool branch_taken_0x304b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B48u;
        // 0x304b4c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b48) {
            ctx->pc = 0x304C50u;
            goto label_304c50;
        }
    }
    ctx->pc = 0x304B50u;
label_304b50:
    // 0x304b50: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x304b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_304b54:
    // 0x304b54: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x304b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_304b58:
    // 0x304b58: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x304b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_304b5c:
    // 0x304b5c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x304b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_304b60:
    // 0x304b60: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x304b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_304b64:
    // 0x304b64: 0xc08997c  jal         func_2265F0
label_304b68:
    if (ctx->pc == 0x304B68u) {
        ctx->pc = 0x304B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B64u;
        // 0x304b68: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B6Cu;
        goto label_304b6c;
    }
    ctx->pc = 0x304B64u;
    SET_GPR_U32(ctx, 31, 0x304B6Cu);
    ctx->pc = 0x304B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B64u;
    // 0x304b68: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x304B64u, 0x304B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B6Cu;
label_304b6c:
    // 0x304b6c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_304b70:
    if (ctx->pc == 0x304B70u) {
        ctx->pc = 0x304B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B6Cu;
        // 0x304b70: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B74u;
        goto label_304b74;
    }
    ctx->pc = 0x304B6Cu;
    {
        const bool branch_taken_0x304b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B6Cu;
        // 0x304b70: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b6c) {
            ctx->pc = 0x304C50u;
            goto label_304c50;
        }
    }
    ctx->pc = 0x304B74u;
label_304b74:
    // 0x304b74: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x304b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_304b78:
    // 0x304b78: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x304b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_304b7c:
    // 0x304b7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x304b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_304b80:
    // 0x304b80: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x304b80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_304b84:
    // 0x304b84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x304b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304b88:
    // 0x304b88: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x304b88u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_304b8c:
    // 0x304b8c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_304b90:
    if (ctx->pc == 0x304B90u) {
        ctx->pc = 0x304B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B8Cu;
        // 0x304b90: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304B94u;
        goto label_304b94;
    }
    ctx->pc = 0x304B8Cu;
    {
        const bool branch_taken_0x304b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B8Cu;
        // 0x304b90: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b8c) {
            ctx->pc = 0x304C3Cu;
            goto label_304c3c;
        }
    }
    ctx->pc = 0x304B94u;
label_304b94:
    // 0x304b94: 0x0  nop
    ctx->pc = 0x304b94u;
    // NOP
label_304b98:
    // 0x304b98: 0xc105774  jal         func_415DD0
label_304b9c:
    if (ctx->pc == 0x304B9Cu) {
        ctx->pc = 0x304B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B98u;
        // 0x304b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304BA0u;
        goto label_304ba0;
    }
    ctx->pc = 0x304B98u;
    SET_GPR_U32(ctx, 31, 0x304BA0u);
    ctx->pc = 0x304B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B98u;
    // 0x304b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x304B98u, 0x304BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304BA0u;
label_304ba0:
    // 0x304ba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304ba4:
    // 0x304ba4: 0x962200d0  lhu         $v0, 0xD0($s1)
    ctx->pc = 0x304ba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 208)));
label_304ba8:
    // 0x304ba8: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x304ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_304bac:
    // 0x304bac: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_304bb0:
    if (ctx->pc == 0x304BB0u) {
        ctx->pc = 0x304BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BACu;
        // 0x304bb0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304BB4u;
        goto label_304bb4;
    }
    ctx->pc = 0x304BACu;
    {
        const bool branch_taken_0x304bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304bac) {
            ctx->pc = 0x304BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304BACu;
            // 0x304bb0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304C3Cu;
            goto label_304c3c;
        }
    }
    ctx->pc = 0x304BB4u;
label_304bb4:
    // 0x304bb4: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x304bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_304bb8:
    // 0x304bb8: 0x8ea2bd30  lw          $v0, -0x42D0($s5)
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950192)));
label_304bbc:
    // 0x304bbc: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_304bc0:
    if (ctx->pc == 0x304BC0u) {
        ctx->pc = 0x304BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BBCu;
        // 0x304bc0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304BC4u;
        goto label_304bc4;
    }
    ctx->pc = 0x304BBCu;
    {
        const bool branch_taken_0x304bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x304bbc) {
            ctx->pc = 0x304BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304BBCu;
            // 0x304bc0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304C3Cu;
            goto label_304c3c;
        }
    }
    ctx->pc = 0x304BC4u;
label_304bc4:
    // 0x304bc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x304bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_304bc8:
    // 0x304bc8: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x304bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_304bcc:
    // 0x304bcc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x304bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_304bd0:
    // 0x304bd0: 0x40f809  jalr        $v0
label_304bd4:
    if (ctx->pc == 0x304BD4u) {
        ctx->pc = 0x304BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BD0u;
        // 0x304bd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304BD8u;
        goto label_304bd8;
    }
    ctx->pc = 0x304BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304BD8u);
        ctx->pc = 0x304BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BD0u;
        // 0x304bd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304BD0u, 0x304BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304BD8u;
label_304bd8:
    // 0x304bd8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_304bdc:
    if (ctx->pc == 0x304BDCu) {
        ctx->pc = 0x304BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BD8u;
        // 0x304bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304BE0u;
        goto label_304be0;
    }
    ctx->pc = 0x304BD8u;
    {
        const bool branch_taken_0x304bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BD8u;
        // 0x304bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bd8) {
            ctx->pc = 0x304C38u;
            goto label_304c38;
        }
    }
    ctx->pc = 0x304BE0u;
label_304be0:
    // 0x304be0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x304be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304be4:
    // 0x304be4: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x304be4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_304be8:
    // 0x304be8: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x304be8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_304bec:
    // 0x304bec: 0xc10587a  jal         func_4161E8
label_304bf0:
    if (ctx->pc == 0x304BF0u) {
        ctx->pc = 0x304BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BECu;
        // 0x304bf0: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304BF4u;
        goto label_304bf4;
    }
    ctx->pc = 0x304BECu;
    SET_GPR_U32(ctx, 31, 0x304BF4u);
    ctx->pc = 0x304BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304BECu;
    // 0x304bf0: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x304BECu, 0x304BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304BF4u;
label_304bf4:
    // 0x304bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304bf8:
    // 0x304bf8: 0xc0cdb38  jal         func_336CE0
label_304bfc:
    if (ctx->pc == 0x304BFCu) {
        ctx->pc = 0x304BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BF8u;
        // 0x304bfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304C00u;
        goto label_304c00;
    }
    ctx->pc = 0x304BF8u;
    SET_GPR_U32(ctx, 31, 0x304C00u);
    ctx->pc = 0x304BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304BF8u;
    // 0x304bfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x304BF8u, 0x304C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C00u;
label_304c00:
    // 0x304c00: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x304c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_304c04:
    // 0x304c04: 0x0  nop
    ctx->pc = 0x304c04u;
    // NOP
label_304c08:
    // 0x304c08: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_304c0c:
    if (ctx->pc == 0x304C0Cu) {
        ctx->pc = 0x304C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C08u;
        // 0x304c0c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304C10u;
        goto label_304c10;
    }
    ctx->pc = 0x304C08u;
    {
        const bool branch_taken_0x304c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304c08) {
            ctx->pc = 0x304C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304C08u;
            // 0x304c0c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304C3Cu;
            goto label_304c3c;
        }
    }
    ctx->pc = 0x304C10u;
label_304c10:
    // 0x304c10: 0xc10587a  jal         func_4161E8
label_304c14:
    if (ctx->pc == 0x304C14u) {
        ctx->pc = 0x304C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C10u;
        // 0x304c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304C18u;
        goto label_304c18;
    }
    ctx->pc = 0x304C10u;
    SET_GPR_U32(ctx, 31, 0x304C18u);
    ctx->pc = 0x304C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C10u;
    // 0x304c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x304C10u, 0x304C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C18u;
label_304c18:
    // 0x304c18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x304c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304c1c:
    // 0x304c1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304c20:
    // 0x304c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304c24:
    // 0x304c24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x304c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304c28:
    // 0x304c28: 0xc0888dc  jal         func_222370
label_304c2c:
    if (ctx->pc == 0x304C2Cu) {
        ctx->pc = 0x304C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C28u;
        // 0x304c2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304C30u;
        goto label_304c30;
    }
    ctx->pc = 0x304C28u;
    SET_GPR_U32(ctx, 31, 0x304C30u);
    ctx->pc = 0x304C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C28u;
    // 0x304c2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x304C28u, 0x304C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C30u;
label_304c30:
    // 0x304c30: 0x5054ff21  beql        $v0, $s4, . + 4 + (-0xDF << 2)
label_304c34:
    if (ctx->pc == 0x304C34u) {
        ctx->pc = 0x304C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C30u;
        // 0x304c34: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304C38u;
        goto label_304c38;
    }
    ctx->pc = 0x304C30u;
    {
        const bool branch_taken_0x304c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x304c30) {
            ctx->pc = 0x304C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304C30u;
            // 0x304c34: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3048B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3048b8;
        }
    }
    ctx->pc = 0x304C38u;
label_304c38:
    // 0x304c38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x304c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_304c3c:
    // 0x304c3c: 0xc10574c  jal         func_415D30
label_304c40:
    if (ctx->pc == 0x304C40u) {
        ctx->pc = 0x304C44u;
        goto label_304c44;
    }
    ctx->pc = 0x304C3Cu;
    SET_GPR_U32(ctx, 31, 0x304C44u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x304C3Cu, 0x304C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C44u;
label_304c44:
    // 0x304c44: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x304c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_304c48:
    // 0x304c48: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_304c4c:
    if (ctx->pc == 0x304C4Cu) {
        ctx->pc = 0x304C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C48u;
        // 0x304c4c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304C50u;
        goto label_304c50;
    }
    ctx->pc = 0x304C48u;
    {
        const bool branch_taken_0x304c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C48u;
        // 0x304c4c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c48) {
            ctx->pc = 0x304B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304b98;
        }
    }
    ctx->pc = 0x304C50u;
label_304c50:
    // 0x304c50: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x304c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_304c54:
    // 0x304c54: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x304c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_304c58:
    // 0x304c58: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x304c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_304c5c:
    // 0x304c5c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x304c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_304c60:
    // 0x304c60: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x304c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_304c64:
    // 0x304c64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x304c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_304c68:
    // 0x304c68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x304c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_304c6c:
    // 0x304c6c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x304c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_304c70:
    // 0x304c70: 0x3e00008  jr          $ra
label_304c74:
    if (ctx->pc == 0x304C74u) {
        ctx->pc = 0x304C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C70u;
        // 0x304c74: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304C78u;
        goto label_fallthrough_0x304c70;
    }
    ctx->pc = 0x304C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C70u;
        // 0x304c74: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x304c70:
    ctx->pc = 0x304C78u;
}
