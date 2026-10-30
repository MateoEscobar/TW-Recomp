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

// Function: sub_00194558
// Address: 0x194558 - 0x194d58
void sub_00194558_0x194558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194558_0x194558");
#endif

    switch (ctx->pc) {
        case 0x194558u: goto label_194558;
        case 0x19455cu: goto label_19455c;
        case 0x194560u: goto label_194560;
        case 0x194564u: goto label_194564;
        case 0x194568u: goto label_194568;
        case 0x19456cu: goto label_19456c;
        case 0x194570u: goto label_194570;
        case 0x194574u: goto label_194574;
        case 0x194578u: goto label_194578;
        case 0x19457cu: goto label_19457c;
        case 0x194580u: goto label_194580;
        case 0x194584u: goto label_194584;
        case 0x194588u: goto label_194588;
        case 0x19458cu: goto label_19458c;
        case 0x194590u: goto label_194590;
        case 0x194594u: goto label_194594;
        case 0x194598u: goto label_194598;
        case 0x19459cu: goto label_19459c;
        case 0x1945a0u: goto label_1945a0;
        case 0x1945a4u: goto label_1945a4;
        case 0x1945a8u: goto label_1945a8;
        case 0x1945acu: goto label_1945ac;
        case 0x1945b0u: goto label_1945b0;
        case 0x1945b4u: goto label_1945b4;
        case 0x1945b8u: goto label_1945b8;
        case 0x1945bcu: goto label_1945bc;
        case 0x1945c0u: goto label_1945c0;
        case 0x1945c4u: goto label_1945c4;
        case 0x1945c8u: goto label_1945c8;
        case 0x1945ccu: goto label_1945cc;
        case 0x1945d0u: goto label_1945d0;
        case 0x1945d4u: goto label_1945d4;
        case 0x1945d8u: goto label_1945d8;
        case 0x1945dcu: goto label_1945dc;
        case 0x1945e0u: goto label_1945e0;
        case 0x1945e4u: goto label_1945e4;
        case 0x1945e8u: goto label_1945e8;
        case 0x1945ecu: goto label_1945ec;
        case 0x1945f0u: goto label_1945f0;
        case 0x1945f4u: goto label_1945f4;
        case 0x1945f8u: goto label_1945f8;
        case 0x1945fcu: goto label_1945fc;
        case 0x194600u: goto label_194600;
        case 0x194604u: goto label_194604;
        case 0x194608u: goto label_194608;
        case 0x19460cu: goto label_19460c;
        case 0x194610u: goto label_194610;
        case 0x194614u: goto label_194614;
        case 0x194618u: goto label_194618;
        case 0x19461cu: goto label_19461c;
        case 0x194620u: goto label_194620;
        case 0x194624u: goto label_194624;
        case 0x194628u: goto label_194628;
        case 0x19462cu: goto label_19462c;
        case 0x194630u: goto label_194630;
        case 0x194634u: goto label_194634;
        case 0x194638u: goto label_194638;
        case 0x19463cu: goto label_19463c;
        case 0x194640u: goto label_194640;
        case 0x194644u: goto label_194644;
        case 0x194648u: goto label_194648;
        case 0x19464cu: goto label_19464c;
        case 0x194650u: goto label_194650;
        case 0x194654u: goto label_194654;
        case 0x194658u: goto label_194658;
        case 0x19465cu: goto label_19465c;
        case 0x194660u: goto label_194660;
        case 0x194664u: goto label_194664;
        case 0x194668u: goto label_194668;
        case 0x19466cu: goto label_19466c;
        case 0x194670u: goto label_194670;
        case 0x194674u: goto label_194674;
        case 0x194678u: goto label_194678;
        case 0x19467cu: goto label_19467c;
        case 0x194680u: goto label_194680;
        case 0x194684u: goto label_194684;
        case 0x194688u: goto label_194688;
        case 0x19468cu: goto label_19468c;
        case 0x194690u: goto label_194690;
        case 0x194694u: goto label_194694;
        case 0x194698u: goto label_194698;
        case 0x19469cu: goto label_19469c;
        case 0x1946a0u: goto label_1946a0;
        case 0x1946a4u: goto label_1946a4;
        case 0x1946a8u: goto label_1946a8;
        case 0x1946acu: goto label_1946ac;
        case 0x1946b0u: goto label_1946b0;
        case 0x1946b4u: goto label_1946b4;
        case 0x1946b8u: goto label_1946b8;
        case 0x1946bcu: goto label_1946bc;
        case 0x1946c0u: goto label_1946c0;
        case 0x1946c4u: goto label_1946c4;
        case 0x1946c8u: goto label_1946c8;
        case 0x1946ccu: goto label_1946cc;
        case 0x1946d0u: goto label_1946d0;
        case 0x1946d4u: goto label_1946d4;
        case 0x1946d8u: goto label_1946d8;
        case 0x1946dcu: goto label_1946dc;
        case 0x1946e0u: goto label_1946e0;
        case 0x1946e4u: goto label_1946e4;
        case 0x1946e8u: goto label_1946e8;
        case 0x1946ecu: goto label_1946ec;
        case 0x1946f0u: goto label_1946f0;
        case 0x1946f4u: goto label_1946f4;
        case 0x1946f8u: goto label_1946f8;
        case 0x1946fcu: goto label_1946fc;
        case 0x194700u: goto label_194700;
        case 0x194704u: goto label_194704;
        case 0x194708u: goto label_194708;
        case 0x19470cu: goto label_19470c;
        case 0x194710u: goto label_194710;
        case 0x194714u: goto label_194714;
        case 0x194718u: goto label_194718;
        case 0x19471cu: goto label_19471c;
        case 0x194720u: goto label_194720;
        case 0x194724u: goto label_194724;
        case 0x194728u: goto label_194728;
        case 0x19472cu: goto label_19472c;
        case 0x194730u: goto label_194730;
        case 0x194734u: goto label_194734;
        case 0x194738u: goto label_194738;
        case 0x19473cu: goto label_19473c;
        case 0x194740u: goto label_194740;
        case 0x194744u: goto label_194744;
        case 0x194748u: goto label_194748;
        case 0x19474cu: goto label_19474c;
        case 0x194750u: goto label_194750;
        case 0x194754u: goto label_194754;
        case 0x194758u: goto label_194758;
        case 0x19475cu: goto label_19475c;
        case 0x194760u: goto label_194760;
        case 0x194764u: goto label_194764;
        case 0x194768u: goto label_194768;
        case 0x19476cu: goto label_19476c;
        case 0x194770u: goto label_194770;
        case 0x194774u: goto label_194774;
        case 0x194778u: goto label_194778;
        case 0x19477cu: goto label_19477c;
        case 0x194780u: goto label_194780;
        case 0x194784u: goto label_194784;
        case 0x194788u: goto label_194788;
        case 0x19478cu: goto label_19478c;
        case 0x194790u: goto label_194790;
        case 0x194794u: goto label_194794;
        case 0x194798u: goto label_194798;
        case 0x19479cu: goto label_19479c;
        case 0x1947a0u: goto label_1947a0;
        case 0x1947a4u: goto label_1947a4;
        case 0x1947a8u: goto label_1947a8;
        case 0x1947acu: goto label_1947ac;
        case 0x1947b0u: goto label_1947b0;
        case 0x1947b4u: goto label_1947b4;
        case 0x1947b8u: goto label_1947b8;
        case 0x1947bcu: goto label_1947bc;
        case 0x1947c0u: goto label_1947c0;
        case 0x1947c4u: goto label_1947c4;
        case 0x1947c8u: goto label_1947c8;
        case 0x1947ccu: goto label_1947cc;
        case 0x1947d0u: goto label_1947d0;
        case 0x1947d4u: goto label_1947d4;
        case 0x1947d8u: goto label_1947d8;
        case 0x1947dcu: goto label_1947dc;
        case 0x1947e0u: goto label_1947e0;
        case 0x1947e4u: goto label_1947e4;
        case 0x1947e8u: goto label_1947e8;
        case 0x1947ecu: goto label_1947ec;
        case 0x1947f0u: goto label_1947f0;
        case 0x1947f4u: goto label_1947f4;
        case 0x1947f8u: goto label_1947f8;
        case 0x1947fcu: goto label_1947fc;
        case 0x194800u: goto label_194800;
        case 0x194804u: goto label_194804;
        case 0x194808u: goto label_194808;
        case 0x19480cu: goto label_19480c;
        case 0x194810u: goto label_194810;
        case 0x194814u: goto label_194814;
        case 0x194818u: goto label_194818;
        case 0x19481cu: goto label_19481c;
        case 0x194820u: goto label_194820;
        case 0x194824u: goto label_194824;
        case 0x194828u: goto label_194828;
        case 0x19482cu: goto label_19482c;
        case 0x194830u: goto label_194830;
        case 0x194834u: goto label_194834;
        case 0x194838u: goto label_194838;
        case 0x19483cu: goto label_19483c;
        case 0x194840u: goto label_194840;
        case 0x194844u: goto label_194844;
        case 0x194848u: goto label_194848;
        case 0x19484cu: goto label_19484c;
        case 0x194850u: goto label_194850;
        case 0x194854u: goto label_194854;
        case 0x194858u: goto label_194858;
        case 0x19485cu: goto label_19485c;
        case 0x194860u: goto label_194860;
        case 0x194864u: goto label_194864;
        case 0x194868u: goto label_194868;
        case 0x19486cu: goto label_19486c;
        case 0x194870u: goto label_194870;
        case 0x194874u: goto label_194874;
        case 0x194878u: goto label_194878;
        case 0x19487cu: goto label_19487c;
        case 0x194880u: goto label_194880;
        case 0x194884u: goto label_194884;
        case 0x194888u: goto label_194888;
        case 0x19488cu: goto label_19488c;
        case 0x194890u: goto label_194890;
        case 0x194894u: goto label_194894;
        case 0x194898u: goto label_194898;
        case 0x19489cu: goto label_19489c;
        case 0x1948a0u: goto label_1948a0;
        case 0x1948a4u: goto label_1948a4;
        case 0x1948a8u: goto label_1948a8;
        case 0x1948acu: goto label_1948ac;
        case 0x1948b0u: goto label_1948b0;
        case 0x1948b4u: goto label_1948b4;
        case 0x1948b8u: goto label_1948b8;
        case 0x1948bcu: goto label_1948bc;
        case 0x1948c0u: goto label_1948c0;
        case 0x1948c4u: goto label_1948c4;
        case 0x1948c8u: goto label_1948c8;
        case 0x1948ccu: goto label_1948cc;
        case 0x1948d0u: goto label_1948d0;
        case 0x1948d4u: goto label_1948d4;
        case 0x1948d8u: goto label_1948d8;
        case 0x1948dcu: goto label_1948dc;
        case 0x1948e0u: goto label_1948e0;
        case 0x1948e4u: goto label_1948e4;
        case 0x1948e8u: goto label_1948e8;
        case 0x1948ecu: goto label_1948ec;
        case 0x1948f0u: goto label_1948f0;
        case 0x1948f4u: goto label_1948f4;
        case 0x1948f8u: goto label_1948f8;
        case 0x1948fcu: goto label_1948fc;
        case 0x194900u: goto label_194900;
        case 0x194904u: goto label_194904;
        case 0x194908u: goto label_194908;
        case 0x19490cu: goto label_19490c;
        case 0x194910u: goto label_194910;
        case 0x194914u: goto label_194914;
        case 0x194918u: goto label_194918;
        case 0x19491cu: goto label_19491c;
        case 0x194920u: goto label_194920;
        case 0x194924u: goto label_194924;
        case 0x194928u: goto label_194928;
        case 0x19492cu: goto label_19492c;
        case 0x194930u: goto label_194930;
        case 0x194934u: goto label_194934;
        case 0x194938u: goto label_194938;
        case 0x19493cu: goto label_19493c;
        case 0x194940u: goto label_194940;
        case 0x194944u: goto label_194944;
        case 0x194948u: goto label_194948;
        case 0x19494cu: goto label_19494c;
        case 0x194950u: goto label_194950;
        case 0x194954u: goto label_194954;
        case 0x194958u: goto label_194958;
        case 0x19495cu: goto label_19495c;
        case 0x194960u: goto label_194960;
        case 0x194964u: goto label_194964;
        case 0x194968u: goto label_194968;
        case 0x19496cu: goto label_19496c;
        case 0x194970u: goto label_194970;
        case 0x194974u: goto label_194974;
        case 0x194978u: goto label_194978;
        case 0x19497cu: goto label_19497c;
        case 0x194980u: goto label_194980;
        case 0x194984u: goto label_194984;
        case 0x194988u: goto label_194988;
        case 0x19498cu: goto label_19498c;
        case 0x194990u: goto label_194990;
        case 0x194994u: goto label_194994;
        case 0x194998u: goto label_194998;
        case 0x19499cu: goto label_19499c;
        case 0x1949a0u: goto label_1949a0;
        case 0x1949a4u: goto label_1949a4;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949acu: goto label_1949ac;
        case 0x1949b0u: goto label_1949b0;
        case 0x1949b4u: goto label_1949b4;
        case 0x1949b8u: goto label_1949b8;
        case 0x1949bcu: goto label_1949bc;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949c8u: goto label_1949c8;
        case 0x1949ccu: goto label_1949cc;
        case 0x1949d0u: goto label_1949d0;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949d8u: goto label_1949d8;
        case 0x1949dcu: goto label_1949dc;
        case 0x1949e0u: goto label_1949e0;
        case 0x1949e4u: goto label_1949e4;
        case 0x1949e8u: goto label_1949e8;
        case 0x1949ecu: goto label_1949ec;
        case 0x1949f0u: goto label_1949f0;
        case 0x1949f4u: goto label_1949f4;
        case 0x1949f8u: goto label_1949f8;
        case 0x1949fcu: goto label_1949fc;
        case 0x194a00u: goto label_194a00;
        case 0x194a04u: goto label_194a04;
        case 0x194a08u: goto label_194a08;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a10u: goto label_194a10;
        case 0x194a14u: goto label_194a14;
        case 0x194a18u: goto label_194a18;
        case 0x194a1cu: goto label_194a1c;
        case 0x194a20u: goto label_194a20;
        case 0x194a24u: goto label_194a24;
        case 0x194a28u: goto label_194a28;
        case 0x194a2cu: goto label_194a2c;
        case 0x194a30u: goto label_194a30;
        case 0x194a34u: goto label_194a34;
        case 0x194a38u: goto label_194a38;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a40u: goto label_194a40;
        case 0x194a44u: goto label_194a44;
        case 0x194a48u: goto label_194a48;
        case 0x194a4cu: goto label_194a4c;
        case 0x194a50u: goto label_194a50;
        case 0x194a54u: goto label_194a54;
        case 0x194a58u: goto label_194a58;
        case 0x194a5cu: goto label_194a5c;
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        case 0x194a88u: goto label_194a88;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a90u: goto label_194a90;
        case 0x194a94u: goto label_194a94;
        case 0x194a98u: goto label_194a98;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aa0u: goto label_194aa0;
        case 0x194aa4u: goto label_194aa4;
        case 0x194aa8u: goto label_194aa8;
        case 0x194aacu: goto label_194aac;
        case 0x194ab0u: goto label_194ab0;
        case 0x194ab4u: goto label_194ab4;
        case 0x194ab8u: goto label_194ab8;
        case 0x194abcu: goto label_194abc;
        case 0x194ac0u: goto label_194ac0;
        case 0x194ac4u: goto label_194ac4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194accu: goto label_194acc;
        case 0x194ad0u: goto label_194ad0;
        case 0x194ad4u: goto label_194ad4;
        case 0x194ad8u: goto label_194ad8;
        case 0x194adcu: goto label_194adc;
        case 0x194ae0u: goto label_194ae0;
        case 0x194ae4u: goto label_194ae4;
        case 0x194ae8u: goto label_194ae8;
        case 0x194aecu: goto label_194aec;
        case 0x194af0u: goto label_194af0;
        case 0x194af4u: goto label_194af4;
        case 0x194af8u: goto label_194af8;
        case 0x194afcu: goto label_194afc;
        case 0x194b00u: goto label_194b00;
        case 0x194b04u: goto label_194b04;
        case 0x194b08u: goto label_194b08;
        case 0x194b0cu: goto label_194b0c;
        case 0x194b10u: goto label_194b10;
        case 0x194b14u: goto label_194b14;
        case 0x194b18u: goto label_194b18;
        case 0x194b1cu: goto label_194b1c;
        case 0x194b20u: goto label_194b20;
        case 0x194b24u: goto label_194b24;
        case 0x194b28u: goto label_194b28;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b30u: goto label_194b30;
        case 0x194b34u: goto label_194b34;
        case 0x194b38u: goto label_194b38;
        case 0x194b3cu: goto label_194b3c;
        case 0x194b40u: goto label_194b40;
        case 0x194b44u: goto label_194b44;
        case 0x194b48u: goto label_194b48;
        case 0x194b4cu: goto label_194b4c;
        case 0x194b50u: goto label_194b50;
        case 0x194b54u: goto label_194b54;
        case 0x194b58u: goto label_194b58;
        case 0x194b5cu: goto label_194b5c;
        case 0x194b60u: goto label_194b60;
        case 0x194b64u: goto label_194b64;
        case 0x194b68u: goto label_194b68;
        case 0x194b6cu: goto label_194b6c;
        case 0x194b70u: goto label_194b70;
        case 0x194b74u: goto label_194b74;
        case 0x194b78u: goto label_194b78;
        case 0x194b7cu: goto label_194b7c;
        case 0x194b80u: goto label_194b80;
        case 0x194b84u: goto label_194b84;
        case 0x194b88u: goto label_194b88;
        case 0x194b8cu: goto label_194b8c;
        case 0x194b90u: goto label_194b90;
        case 0x194b94u: goto label_194b94;
        case 0x194b98u: goto label_194b98;
        case 0x194b9cu: goto label_194b9c;
        case 0x194ba0u: goto label_194ba0;
        case 0x194ba4u: goto label_194ba4;
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        case 0x194bf4u: goto label_194bf4;
        case 0x194bf8u: goto label_194bf8;
        case 0x194bfcu: goto label_194bfc;
        case 0x194c00u: goto label_194c00;
        case 0x194c04u: goto label_194c04;
        case 0x194c08u: goto label_194c08;
        case 0x194c0cu: goto label_194c0c;
        case 0x194c10u: goto label_194c10;
        case 0x194c14u: goto label_194c14;
        case 0x194c18u: goto label_194c18;
        case 0x194c1cu: goto label_194c1c;
        case 0x194c20u: goto label_194c20;
        case 0x194c24u: goto label_194c24;
        case 0x194c28u: goto label_194c28;
        case 0x194c2cu: goto label_194c2c;
        case 0x194c30u: goto label_194c30;
        case 0x194c34u: goto label_194c34;
        case 0x194c38u: goto label_194c38;
        case 0x194c3cu: goto label_194c3c;
        case 0x194c40u: goto label_194c40;
        case 0x194c44u: goto label_194c44;
        case 0x194c48u: goto label_194c48;
        case 0x194c4cu: goto label_194c4c;
        case 0x194c50u: goto label_194c50;
        case 0x194c54u: goto label_194c54;
        case 0x194c58u: goto label_194c58;
        case 0x194c5cu: goto label_194c5c;
        case 0x194c60u: goto label_194c60;
        case 0x194c64u: goto label_194c64;
        case 0x194c68u: goto label_194c68;
        case 0x194c6cu: goto label_194c6c;
        case 0x194c70u: goto label_194c70;
        case 0x194c74u: goto label_194c74;
        case 0x194c78u: goto label_194c78;
        case 0x194c7cu: goto label_194c7c;
        case 0x194c80u: goto label_194c80;
        case 0x194c84u: goto label_194c84;
        case 0x194c88u: goto label_194c88;
        case 0x194c8cu: goto label_194c8c;
        case 0x194c90u: goto label_194c90;
        case 0x194c94u: goto label_194c94;
        case 0x194c98u: goto label_194c98;
        case 0x194c9cu: goto label_194c9c;
        case 0x194ca0u: goto label_194ca0;
        case 0x194ca4u: goto label_194ca4;
        case 0x194ca8u: goto label_194ca8;
        case 0x194cacu: goto label_194cac;
        case 0x194cb0u: goto label_194cb0;
        case 0x194cb4u: goto label_194cb4;
        case 0x194cb8u: goto label_194cb8;
        case 0x194cbcu: goto label_194cbc;
        case 0x194cc0u: goto label_194cc0;
        case 0x194cc4u: goto label_194cc4;
        case 0x194cc8u: goto label_194cc8;
        case 0x194cccu: goto label_194ccc;
        case 0x194cd0u: goto label_194cd0;
        case 0x194cd4u: goto label_194cd4;
        case 0x194cd8u: goto label_194cd8;
        case 0x194cdcu: goto label_194cdc;
        case 0x194ce0u: goto label_194ce0;
        case 0x194ce4u: goto label_194ce4;
        case 0x194ce8u: goto label_194ce8;
        case 0x194cecu: goto label_194cec;
        case 0x194cf0u: goto label_194cf0;
        case 0x194cf4u: goto label_194cf4;
        case 0x194cf8u: goto label_194cf8;
        case 0x194cfcu: goto label_194cfc;
        case 0x194d00u: goto label_194d00;
        case 0x194d04u: goto label_194d04;
        case 0x194d08u: goto label_194d08;
        case 0x194d0cu: goto label_194d0c;
        case 0x194d10u: goto label_194d10;
        case 0x194d14u: goto label_194d14;
        case 0x194d18u: goto label_194d18;
        case 0x194d1cu: goto label_194d1c;
        case 0x194d20u: goto label_194d20;
        case 0x194d24u: goto label_194d24;
        case 0x194d28u: goto label_194d28;
        case 0x194d2cu: goto label_194d2c;
        case 0x194d30u: goto label_194d30;
        case 0x194d34u: goto label_194d34;
        case 0x194d38u: goto label_194d38;
        case 0x194d3cu: goto label_194d3c;
        case 0x194d40u: goto label_194d40;
        case 0x194d44u: goto label_194d44;
        case 0x194d48u: goto label_194d48;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d50u: goto label_194d50;
        case 0x194d54u: goto label_194d54;
        default: break;
    }

    ctx->pc = 0x194558u;

label_194558:
    // 0x194558: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x194558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_19455c:
    // 0x19455c: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x19455cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
label_194560:
    // 0x194560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x194560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194564:
    // 0x194564: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x194564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_194568:
    // 0x194568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19456c:
    // 0x19456c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x19456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_194570:
    // 0x194570: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x194570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_194574:
    // 0x194574: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x194574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194578:
    // 0x194578: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x194578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_19457c:
    // 0x19457c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x19457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_194580:
    // 0x194580: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x194580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_194584:
    // 0x194584: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x194584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_194588:
    // 0x194588: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x194588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19458c:
    // 0x19458c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x19458cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_194590:
    // 0x194590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_194594:
    // 0x194594: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x194594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_194598:
    // 0x194598: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x194598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_19459c:
    // 0x19459c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19459cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1945a0:
    // 0x1945a0: 0xe681044c  swc1        $f1, 0x44C($s4)
    ctx->pc = 0x1945a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1100), bits); }
label_1945a4:
    // 0x1945a4: 0xe6800450  swc1        $f0, 0x450($s4)
    ctx->pc = 0x1945a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1104), bits); }
label_1945a8:
    // 0x1945a8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1945a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1945ac:
    // 0x1945ac: 0xe6940454  swc1        $f20, 0x454($s4)
    ctx->pc = 0x1945acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1108), bits); }
label_1945b0:
    // 0x1945b0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1945b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1945b4:
    // 0x1945b4: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1945b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1945b8:
    // 0x1945b8: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1945b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1945bc:
    // 0x1945bc: 0x40f809  jalr        $v0
label_1945c0:
    if (ctx->pc == 0x1945C0u) {
        ctx->pc = 0x1945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945BCu;
        // 0x1945c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945C4u;
        goto label_1945c4;
    }
    ctx->pc = 0x1945BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1945C4u);
        ctx->pc = 0x1945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945BCu;
        // 0x1945c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1945BCu, 0x1945C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1945C4u;
label_1945c4:
    // 0x1945c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1945c8:
    if (ctx->pc == 0x1945C8u) {
        ctx->pc = 0x1945CCu;
        goto label_1945cc;
    }
    ctx->pc = 0x1945C4u;
    {
        const bool branch_taken_0x1945c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1945c4) {
            ctx->pc = 0x194620u;
            goto label_194620;
        }
    }
    ctx->pc = 0x1945CCu;
label_1945cc:
    // 0x1945cc: 0x3c013fd5  lui         $at, 0x3FD5
    ctx->pc = 0x1945ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16341 << 16));
label_1945d0:
    // 0x1945d0: 0x3421551d  ori         $at, $at, 0x551D
    ctx->pc = 0x1945d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21789);
label_1945d4:
    // 0x1945d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1945d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1945d8:
    // 0x1945d8: 0xc048b28  jal         func_122CA0
label_1945dc:
    if (ctx->pc == 0x1945DCu) {
        ctx->pc = 0x1945DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D8u;
        // 0x1945dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945E0u;
        goto label_1945e0;
    }
    ctx->pc = 0x1945D8u;
    SET_GPR_U32(ctx, 31, 0x1945E0u);
    ctx->pc = 0x1945DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945D8u;
    // 0x1945dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CA0u, 0x1945D8u, 0x1945E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945E0u;
label_1945e0:
    // 0x1945e0: 0xc048b4e  jal         func_122D38
label_1945e4:
    if (ctx->pc == 0x1945E4u) {
        ctx->pc = 0x1945E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945E0u;
        // 0x1945e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945E8u;
        goto label_1945e8;
    }
    ctx->pc = 0x1945E0u;
    SET_GPR_U32(ctx, 31, 0x1945E8u);
    ctx->pc = 0x1945E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945E0u;
    // 0x1945e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D38u, 0x1945E0u, 0x1945E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945E8u;
label_1945e8:
    // 0x1945e8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_1945ec:
    // 0x1945ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1945ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1945f0:
    // 0x1945f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1945f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1945f4:
    // 0x1945f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1945f8:
    // 0x1945f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1945fc:
    // 0x1945fc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1945fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_194600:
    // 0x194600: 0xe440b20c  swc1        $f0, -0x4DF4($v0)
    ctx->pc = 0x194600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947340), bits); }
label_194604:
    // 0x194604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194608:
    // 0x194608: 0x10000015  b           . + 4 + (0x15 << 2)
label_19460c:
    if (ctx->pc == 0x19460Cu) {
        ctx->pc = 0x19460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194608u;
        // 0x19460c: 0xac60b178  sw          $zero, -0x4E88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194610u;
        goto label_194610;
    }
    ctx->pc = 0x194608u;
    {
        const bool branch_taken_0x194608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194608u;
        // 0x19460c: 0xac60b178  sw          $zero, -0x4E88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194608) {
            ctx->pc = 0x194660u;
            goto label_194660;
        }
    }
    ctx->pc = 0x194610u;
label_194610:
    // 0x194610: 0xc120c7c  jal         func_4831F0
label_194614:
    if (ctx->pc == 0x194614u) {
        ctx->pc = 0x194614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194610u;
        // 0x194614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194618u;
        goto label_194618;
    }
    ctx->pc = 0x194610u;
    SET_GPR_U32(ctx, 31, 0x194618u);
    ctx->pc = 0x194614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194610u;
    // 0x194614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4831F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4831F0u, 0x194610u, 0x194618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194618u;
label_194618:
    // 0x194618: 0x10000133  b           . + 4 + (0x133 << 2)
label_19461c:
    if (ctx->pc == 0x19461Cu) {
        ctx->pc = 0x19461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194618u;
        // 0x19461c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194620u;
        goto label_194620;
    }
    ctx->pc = 0x194618u;
    {
        const bool branch_taken_0x194618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194618u;
        // 0x19461c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194618) {
            ctx->pc = 0x194AE8u;
            goto label_194ae8;
        }
    }
    ctx->pc = 0x194620u;
label_194620:
    // 0x194620: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x194620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
label_194624:
    // 0x194624: 0x3421aa8f  ori         $at, $at, 0xAA8F
    ctx->pc = 0x194624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43663);
label_194628:
    // 0x194628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19462c:
    // 0x19462c: 0xc048b28  jal         func_122CA0
label_194630:
    if (ctx->pc == 0x194630u) {
        ctx->pc = 0x194634u;
        goto label_194634;
    }
    ctx->pc = 0x19462Cu;
    SET_GPR_U32(ctx, 31, 0x194634u);
    ctx->pc = 0x122CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CA0u, 0x19462Cu, 0x194634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194634u;
label_194634:
    // 0x194634: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x194634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
label_194638:
    // 0x194638: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x194638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19463c:
    // 0x19463c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19463cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194640:
    // 0x194640: 0xc048b4e  jal         func_122D38
label_194644:
    if (ctx->pc == 0x194644u) {
        ctx->pc = 0x194648u;
        goto label_194648;
    }
    ctx->pc = 0x194640u;
    SET_GPR_U32(ctx, 31, 0x194648u);
    ctx->pc = 0x122D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D38u, 0x194640u, 0x194648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194648u;
label_194648:
    // 0x194648: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x194648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19464c:
    // 0x19464c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_194650:
    // 0x194650: 0xe474b20c  swc1        $f20, -0x4DF4($v1)
    ctx->pc = 0x194650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947340), bits); }
label_194654:
    // 0x194654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x194654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194658:
    // 0x194658: 0xac40b178  sw          $zero, -0x4E88($v0)
    ctx->pc = 0x194658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947192), GPR_U32(ctx, 0));
label_19465c:
    // 0x19465c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x19465cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_194660:
    // 0x194660: 0x8e820458  lw          $v0, 0x458($s4)
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1112)));
label_194664:
    // 0x194664: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_194668:
    if (ctx->pc == 0x194668u) {
        ctx->pc = 0x194668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194664u;
        // 0x194668: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19466Cu;
        goto label_19466c;
    }
    ctx->pc = 0x194664u;
    {
        const bool branch_taken_0x194664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194664u;
        // 0x194668: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194664) {
            ctx->pc = 0x194704u;
            goto label_194704;
        }
    }
    ctx->pc = 0x19466Cu;
label_19466c:
    // 0x19466c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x19466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_194670:
    // 0x194670: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x194670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
label_194674:
    // 0x194674: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x194674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_194678:
    // 0x194678: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x194678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19467c:
    // 0x19467c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x19467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_194680:
    // 0x194680: 0xae83045c  sw          $v1, 0x45C($s4)
    ctx->pc = 0x194680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1116), GPR_U32(ctx, 3));
label_194684:
    // 0x194684: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x194684u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_194688:
    // 0x194688: 0xc048b28  jal         func_122CA0
label_19468c:
    if (ctx->pc == 0x19468Cu) {
        ctx->pc = 0x19468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194688u;
        // 0x19468c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194690u;
        goto label_194690;
    }
    ctx->pc = 0x194688u;
    SET_GPR_U32(ctx, 31, 0x194690u);
    ctx->pc = 0x19468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194688u;
    // 0x19468c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CA0u, 0x194688u, 0x194690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194690u;
label_194690:
    // 0x194690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x194690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_194694:
    // 0x194694: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x194694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_194698:
    // 0x194698: 0xc048b4e  jal         func_122D38
label_19469c:
    if (ctx->pc == 0x19469Cu) {
        ctx->pc = 0x19469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194698u;
        // 0x19469c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946A0u;
        goto label_1946a0;
    }
    ctx->pc = 0x194698u;
    SET_GPR_U32(ctx, 31, 0x1946A0u);
    ctx->pc = 0x19469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194698u;
    // 0x19469c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D38u, 0x194698u, 0x1946A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946A0u;
label_1946a0:
    // 0x1946a0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1946a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1946a4:
    // 0x1946a4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1946a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1946a8:
    // 0x1946a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1946a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1946ac:
    // 0x1946ac: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1946acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1946b0:
    // 0x1946b0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1946b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1946b4:
    // 0x1946b4: 0xe614b20c  swc1        $f20, -0x4DF4($s0)
    ctx->pc = 0x1946b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294947340), bits); }
label_1946b8:
    // 0x1946b8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1946b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1946bc:
    // 0x1946bc: 0x60f809  jalr        $v1
label_1946c0:
    if (ctx->pc == 0x1946C0u) {
        ctx->pc = 0x1946C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946BCu;
        // 0x1946c0: 0xe620b178  swc1        $f0, -0x4E88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294947192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946C4u;
        goto label_1946c4;
    }
    ctx->pc = 0x1946BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1946C4u);
        ctx->pc = 0x1946C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946BCu;
        // 0x1946c0: 0xe620b178  swc1        $f0, -0x4E88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294947192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1946BCu, 0x1946C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1946C4u;
label_1946c4:
    // 0x1946c4: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1946c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1946c8:
    // 0x1946c8: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x1946c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
label_1946cc:
    // 0x1946cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1946ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1946d0:
    // 0x1946d0: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x1946d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
label_1946d4:
    // 0x1946d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1946d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1946d8:
    // 0x1946d8: 0xe6810450  swc1        $f1, 0x450($s4)
    ctx->pc = 0x1946d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1104), bits); }
label_1946dc:
    // 0x1946dc: 0xe680044c  swc1        $f0, 0x44C($s4)
    ctx->pc = 0x1946dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1100), bits); }
label_1946e0:
    // 0x1946e0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1946e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1946e4:
    // 0x1946e4: 0xe6940454  swc1        $f20, 0x454($s4)
    ctx->pc = 0x1946e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1108), bits); }
label_1946e8:
    // 0x1946e8: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1946e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1946ec:
    // 0x1946ec: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1946ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1946f0:
    // 0x1946f0: 0x60f809  jalr        $v1
label_1946f4:
    if (ctx->pc == 0x1946F4u) {
        ctx->pc = 0x1946F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946F0u;
        // 0x1946f4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946F8u;
        goto label_1946f8;
    }
    ctx->pc = 0x1946F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1946F8u);
        ctx->pc = 0x1946F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946F0u;
        // 0x1946f4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1946F0u, 0x1946F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1946F8u;
label_1946f8:
    // 0x1946f8: 0xc6810454  lwc1        $f1, 0x454($s4)
    ctx->pc = 0x1946f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1946fc:
    // 0x1946fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1946fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_194700:
    // 0x194700: 0xe6810454  swc1        $f1, 0x454($s4)
    ctx->pc = 0x194700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1108), bits); }
label_194704:
    // 0x194704: 0x8e82045c  lw          $v0, 0x45C($s4)
    ctx->pc = 0x194704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1116)));
label_194708:
    // 0x194708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19470c:
    if (ctx->pc == 0x19470Cu) {
        ctx->pc = 0x19470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194708u;
        // 0x19470c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194710u;
        goto label_194710;
    }
    ctx->pc = 0x194708u;
    {
        const bool branch_taken_0x194708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194708u;
        // 0x19470c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194708) {
            ctx->pc = 0x194720u;
            goto label_194720;
        }
    }
    ctx->pc = 0x194710u;
label_194710:
    // 0x194710: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x194710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_194714:
    // 0x194714: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x194714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_194718:
    // 0x194718: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x194718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_19471c:
    // 0x19471c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_194720:
    // 0x194720: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_194724:
    // 0x194724: 0x8c4527e4  lw          $a1, 0x27E4($v0)
    ctx->pc = 0x194724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_194728:
    // 0x194728: 0x26103550  addiu       $s0, $s0, 0x3550
    ctx->pc = 0x194728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13648));
label_19472c:
    // 0x19472c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_194730:
    // 0x194730: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x194730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_194734:
    // 0x194734: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x194734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_194738:
    // 0x194738: 0x40f809  jalr        $v0
label_19473c:
    if (ctx->pc == 0x19473Cu) {
        ctx->pc = 0x19473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194738u;
        // 0x19473c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194740u;
        goto label_194740;
    }
    ctx->pc = 0x194738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194740u);
        ctx->pc = 0x19473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194738u;
        // 0x19473c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194738u, 0x194740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194740u;
label_194740:
    // 0x194740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194744:
    // 0x194744: 0xc10c978  jal         func_4325E0
label_194748:
    if (ctx->pc == 0x194748u) {
        ctx->pc = 0x194748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194744u;
        // 0x194748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19474Cu;
        goto label_19474c;
    }
    ctx->pc = 0x194744u;
    SET_GPR_U32(ctx, 31, 0x19474Cu);
    ctx->pc = 0x194748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194744u;
    // 0x194748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x194744u, 0x19474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19474Cu;
label_19474c:
    // 0x19474c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x19474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_194750:
    // 0x194750: 0xc121844  jal         func_486110
label_194754:
    if (ctx->pc == 0x194754u) {
        ctx->pc = 0x194754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194750u;
        // 0x194754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194758u;
        goto label_194758;
    }
    ctx->pc = 0x194750u;
    SET_GPR_U32(ctx, 31, 0x194758u);
    ctx->pc = 0x194754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194750u;
    // 0x194754: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486110u, 0x194750u, 0x194758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194758u;
label_194758:
    // 0x194758: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x194758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_19475c:
    // 0x19475c: 0xc12233e  jal         func_488CF8
label_194760:
    if (ctx->pc == 0x194760u) {
        ctx->pc = 0x194760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19475Cu;
        // 0x194760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194764u;
        goto label_194764;
    }
    ctx->pc = 0x19475Cu;
    SET_GPR_U32(ctx, 31, 0x194764u);
    ctx->pc = 0x194760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19475Cu;
    // 0x194760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488CF8u, 0x19475Cu, 0x194764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194764u;
label_194764:
    // 0x194764: 0x24040c80  addiu       $a0, $zero, 0xC80
    ctx->pc = 0x194764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
label_194768:
    // 0x194768: 0xc11b3b2  jal         func_46CEC8
label_19476c:
    if (ctx->pc == 0x19476Cu) {
        ctx->pc = 0x19476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194768u;
        // 0x19476c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194770u;
        goto label_194770;
    }
    ctx->pc = 0x194768u;
    SET_GPR_U32(ctx, 31, 0x194770u);
    ctx->pc = 0x19476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194768u;
    // 0x19476c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CEC8u, 0x194768u, 0x194770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194770u;
label_194770:
    // 0x194770: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x194770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_194774:
    // 0x194774: 0xc1194c0  jal         func_465300
label_194778:
    if (ctx->pc == 0x194778u) {
        ctx->pc = 0x194778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194774u;
        // 0x194778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19477Cu;
        goto label_19477c;
    }
    ctx->pc = 0x194774u;
    SET_GPR_U32(ctx, 31, 0x19477Cu);
    ctx->pc = 0x194778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194774u;
    // 0x194778: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465300u, 0x194774u, 0x19477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19477Cu;
label_19477c:
    // 0x19477c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_194780:
    // 0x194780: 0xc1222de  jal         func_488B78
label_194784:
    if (ctx->pc == 0x194784u) {
        ctx->pc = 0x194784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194780u;
        // 0x194784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194788u;
        goto label_194788;
    }
    ctx->pc = 0x194780u;
    SET_GPR_U32(ctx, 31, 0x194788u);
    ctx->pc = 0x194784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194780u;
    // 0x194784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488B78u, 0x194780u, 0x194788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194788u;
label_194788:
    // 0x194788: 0x24041388  addiu       $a0, $zero, 0x1388
    ctx->pc = 0x194788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_19478c:
    // 0x19478c: 0xc121076  jal         func_4841D8
label_194790:
    if (ctx->pc == 0x194790u) {
        ctx->pc = 0x194790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19478Cu;
        // 0x194790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194794u;
        goto label_194794;
    }
    ctx->pc = 0x19478Cu;
    SET_GPR_U32(ctx, 31, 0x194794u);
    ctx->pc = 0x194790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19478Cu;
    // 0x194790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841D8u, 0x19478Cu, 0x194794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194794u;
label_194794:
    // 0x194794: 0x24040640  addiu       $a0, $zero, 0x640
    ctx->pc = 0x194794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
label_194798:
    // 0x194798: 0xc11a7b6  jal         func_469ED8
label_19479c:
    if (ctx->pc == 0x19479Cu) {
        ctx->pc = 0x19479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194798u;
        // 0x19479c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947A0u;
        goto label_1947a0;
    }
    ctx->pc = 0x194798u;
    SET_GPR_U32(ctx, 31, 0x1947A0u);
    ctx->pc = 0x19479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194798u;
    // 0x19479c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469ED8u, 0x194798u, 0x1947A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947A0u;
label_1947a0:
    // 0x1947a0: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1947a4:
    // 0x1947a4: 0xc11a7ba  jal         func_469EE8
label_1947a8:
    if (ctx->pc == 0x1947A8u) {
        ctx->pc = 0x1947A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947A4u;
        // 0x1947a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947ACu;
        goto label_1947ac;
    }
    ctx->pc = 0x1947A4u;
    SET_GPR_U32(ctx, 31, 0x1947ACu);
    ctx->pc = 0x1947A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947A4u;
    // 0x1947a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469EE8u, 0x1947A4u, 0x1947ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947ACu;
label_1947ac:
    // 0x1947ac: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1947acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1947b0:
    // 0x1947b0: 0xc1189b0  jal         func_4626C0
label_1947b4:
    if (ctx->pc == 0x1947B4u) {
        ctx->pc = 0x1947B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947B0u;
        // 0x1947b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947B8u;
        goto label_1947b8;
    }
    ctx->pc = 0x1947B0u;
    SET_GPR_U32(ctx, 31, 0x1947B8u);
    ctx->pc = 0x1947B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947B0u;
    // 0x1947b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4626C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4626C0u, 0x1947B0u, 0x1947B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947B8u;
label_1947b8:
    // 0x1947b8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1947b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1947bc:
    // 0x1947bc: 0xc119adc  jal         func_466B70
label_1947c0:
    if (ctx->pc == 0x1947C0u) {
        ctx->pc = 0x1947C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947BCu;
        // 0x1947c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947C4u;
        goto label_1947c4;
    }
    ctx->pc = 0x1947BCu;
    SET_GPR_U32(ctx, 31, 0x1947C4u);
    ctx->pc = 0x1947C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947BCu;
    // 0x1947c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466B70u, 0x1947BCu, 0x1947C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947C4u;
label_1947c4:
    // 0x1947c4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1947c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1947c8:
    // 0x1947c8: 0xc118f16  jal         func_463C58
label_1947cc:
    if (ctx->pc == 0x1947CCu) {
        ctx->pc = 0x1947CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947C8u;
        // 0x1947cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947D0u;
        goto label_1947d0;
    }
    ctx->pc = 0x1947C8u;
    SET_GPR_U32(ctx, 31, 0x1947D0u);
    ctx->pc = 0x1947CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947C8u;
    // 0x1947cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x463C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463C58u, 0x1947C8u, 0x1947D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947D0u;
label_1947d0:
    // 0x1947d0: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x1947d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1947d4:
    // 0x1947d4: 0xc11b1ac  jal         func_46C6B0
label_1947d8:
    if (ctx->pc == 0x1947D8u) {
        ctx->pc = 0x1947D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947D4u;
        // 0x1947d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947DCu;
        goto label_1947dc;
    }
    ctx->pc = 0x1947D4u;
    SET_GPR_U32(ctx, 31, 0x1947DCu);
    ctx->pc = 0x1947D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947D4u;
    // 0x1947d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C6B0u, 0x1947D4u, 0x1947DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947DCu;
label_1947dc:
    // 0x1947dc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1947e0:
    // 0x1947e0: 0xc11cb06  jal         func_472C18
label_1947e4:
    if (ctx->pc == 0x1947E4u) {
        ctx->pc = 0x1947E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947E0u;
        // 0x1947e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947E8u;
        goto label_1947e8;
    }
    ctx->pc = 0x1947E0u;
    SET_GPR_U32(ctx, 31, 0x1947E8u);
    ctx->pc = 0x1947E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947E0u;
    // 0x1947e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C18u, 0x1947E0u, 0x1947E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947E8u;
label_1947e8:
    // 0x1947e8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1947e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1947ec:
    // 0x1947ec: 0xc11cb02  jal         func_472C08
label_1947f0:
    if (ctx->pc == 0x1947F0u) {
        ctx->pc = 0x1947F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947ECu;
        // 0x1947f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947F4u;
        goto label_1947f4;
    }
    ctx->pc = 0x1947ECu;
    SET_GPR_U32(ctx, 31, 0x1947F4u);
    ctx->pc = 0x1947F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947ECu;
    // 0x1947f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C08u, 0x1947ECu, 0x1947F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1947F4u;
label_1947f4:
    // 0x1947f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1947f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1947f8:
    // 0x1947f8: 0xc11fc7a  jal         func_47F1E8
label_1947fc:
    if (ctx->pc == 0x1947FCu) {
        ctx->pc = 0x1947FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947F8u;
        // 0x1947fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194800u;
        goto label_194800;
    }
    ctx->pc = 0x1947F8u;
    SET_GPR_U32(ctx, 31, 0x194800u);
    ctx->pc = 0x1947FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1947F8u;
    // 0x1947fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F1E8u, 0x1947F8u, 0x194800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194800u;
label_194800:
    // 0x194800: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x194800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_194804:
    // 0x194804: 0xc120a18  jal         func_482860
label_194808:
    if (ctx->pc == 0x194808u) {
        ctx->pc = 0x194808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194804u;
        // 0x194808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19480Cu;
        goto label_19480c;
    }
    ctx->pc = 0x194804u;
    SET_GPR_U32(ctx, 31, 0x19480Cu);
    ctx->pc = 0x194808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194804u;
    // 0x194808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x482860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482860u, 0x194804u, 0x19480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19480Cu;
label_19480c:
    // 0x19480c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x19480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_194810:
    // 0x194810: 0xc11f49c  jal         func_47D270
label_194814:
    if (ctx->pc == 0x194814u) {
        ctx->pc = 0x194814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194810u;
        // 0x194814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194818u;
        goto label_194818;
    }
    ctx->pc = 0x194810u;
    SET_GPR_U32(ctx, 31, 0x194818u);
    ctx->pc = 0x194814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194810u;
    // 0x194814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D270u, 0x194810u, 0x194818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194818u;
label_194818:
    // 0x194818: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x194818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19481c:
    // 0x19481c: 0xc11ff7c  jal         func_47FDF0
label_194820:
    if (ctx->pc == 0x194820u) {
        ctx->pc = 0x194820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19481Cu;
        // 0x194820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194824u;
        goto label_194824;
    }
    ctx->pc = 0x19481Cu;
    SET_GPR_U32(ctx, 31, 0x194824u);
    ctx->pc = 0x194820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19481Cu;
    // 0x194820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FDF0u, 0x19481Cu, 0x194824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194824u;
label_194824:
    // 0x194824: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x194824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_194828:
    // 0x194828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19482c:
    // 0x19482c: 0x2484cde8  addiu       $a0, $a0, -0x3218
    ctx->pc = 0x19482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954472));
label_194830:
    // 0x194830: 0xc120d4c  jal         func_483530
label_194834:
    if (ctx->pc == 0x194834u) {
        ctx->pc = 0x194834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194830u;
        // 0x194834: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194838u;
        goto label_194838;
    }
    ctx->pc = 0x194830u;
    SET_GPR_U32(ctx, 31, 0x194838u);
    ctx->pc = 0x194834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194830u;
    // 0x194834: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483530u, 0x194830u, 0x194838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194838u;
label_194838:
    // 0x194838: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x194838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19483c:
    // 0x19483c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x19483cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_194840:
    // 0x194840: 0x8c64cdac  lw          $a0, -0x3254($v1)
    ctx->pc = 0x194840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954412)));
label_194844:
    // 0x194844: 0xc123884  jal         func_48E210
label_194848:
    if (ctx->pc == 0x194848u) {
        ctx->pc = 0x194848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194844u;
        // 0x194848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19484Cu;
        goto label_19484c;
    }
    ctx->pc = 0x194844u;
    SET_GPR_U32(ctx, 31, 0x19484Cu);
    ctx->pc = 0x194848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194844u;
    // 0x194848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E210u, 0x194844u, 0x19484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19484Cu;
label_19484c:
    // 0x19484c: 0xc1184d0  jal         func_461340
label_194850:
    if (ctx->pc == 0x194850u) {
        ctx->pc = 0x194850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19484Cu;
        // 0x194850: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194854u;
        goto label_194854;
    }
    ctx->pc = 0x19484Cu;
    SET_GPR_U32(ctx, 31, 0x194854u);
    ctx->pc = 0x194850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19484Cu;
    // 0x194850: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461340u, 0x19484Cu, 0x194854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194854u;
label_194854:
    // 0x194854: 0xc11c50e  jal         func_471438
label_194858:
    if (ctx->pc == 0x194858u) {
        ctx->pc = 0x194858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194854u;
        // 0x194858: 0x24101001  addiu       $s0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19485Cu;
        goto label_19485c;
    }
    ctx->pc = 0x194854u;
    SET_GPR_U32(ctx, 31, 0x19485Cu);
    ctx->pc = 0x194858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194854u;
    // 0x194858: 0x24101001  addiu       $s0, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471438u, 0x194854u, 0x19485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19485Cu;
label_19485c:
    // 0x19485c: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x19485cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_194860:
    // 0x194860: 0x2463d850  addiu       $v1, $v1, -0x27B0
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957136));
label_194864:
    // 0x194864: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x194864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194868:
    // 0x194868: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x194868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_19486c:
    // 0x19486c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x19486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
label_194870:
    // 0x194870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x194870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194874:
    // 0x194874: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x194874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
label_194878:
    // 0x194878: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x194878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19487c:
    // 0x19487c: 0xc118508  jal         func_461420
label_194880:
    if (ctx->pc == 0x194880u) {
        ctx->pc = 0x194880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19487Cu;
        // 0x194880: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194884u;
        goto label_194884;
    }
    ctx->pc = 0x19487Cu;
    SET_GPR_U32(ctx, 31, 0x194884u);
    ctx->pc = 0x194880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19487Cu;
    // 0x194880: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x19487Cu, 0x194884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194884u;
label_194884:
    // 0x194884: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x194884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_194888:
    // 0x194888: 0x2463d8e0  addiu       $v1, $v1, -0x2720
    ctx->pc = 0x194888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957280));
label_19488c:
    // 0x19488c: 0x24021002  addiu       $v0, $zero, 0x1002
    ctx->pc = 0x19488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
label_194890:
    // 0x194890: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x194890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194894:
    // 0x194894: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x194894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_194898:
    // 0x194898: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x194898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_19489c:
    // 0x19489c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1948a0:
    // 0x1948a0: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x1948a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
label_1948a4:
    // 0x1948a4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1948a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1948a8:
    // 0x1948a8: 0xc118508  jal         func_461420
label_1948ac:
    if (ctx->pc == 0x1948ACu) {
        ctx->pc = 0x1948ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948A8u;
        // 0x1948ac: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948B0u;
        goto label_1948b0;
    }
    ctx->pc = 0x1948A8u;
    SET_GPR_U32(ctx, 31, 0x1948B0u);
    ctx->pc = 0x1948ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1948A8u;
    // 0x1948ac: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x1948A8u, 0x1948B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1948B0u;
label_1948b0:
    // 0x1948b0: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x1948b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_1948b4:
    // 0x1948b4: 0x2463d8f8  addiu       $v1, $v1, -0x2708
    ctx->pc = 0x1948b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957304));
label_1948b8:
    // 0x1948b8: 0x24021003  addiu       $v0, $zero, 0x1003
    ctx->pc = 0x1948b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
label_1948bc:
    // 0x1948bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1948bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1948c0:
    // 0x1948c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1948c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1948c4:
    // 0x1948c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1948c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1948c8:
    // 0x1948c8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1948c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1948cc:
    // 0x1948cc: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x1948ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
label_1948d0:
    // 0x1948d0: 0xc118508  jal         func_461420
label_1948d4:
    if (ctx->pc == 0x1948D4u) {
        ctx->pc = 0x1948D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948D0u;
        // 0x1948d4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948D8u;
        goto label_1948d8;
    }
    ctx->pc = 0x1948D0u;
    SET_GPR_U32(ctx, 31, 0x1948D8u);
    ctx->pc = 0x1948D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1948D0u;
    // 0x1948d4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x1948D0u, 0x1948D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1948D8u;
label_1948d8:
    // 0x1948d8: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x1948d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_1948dc:
    // 0x1948dc: 0x2463d910  addiu       $v1, $v1, -0x26F0
    ctx->pc = 0x1948dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957328));
label_1948e0:
    // 0x1948e0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1948e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1948e4:
    // 0x1948e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1948e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1948e8:
    // 0x1948e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1948e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1948ec:
    // 0x1948ec: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x1948ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
label_1948f0:
    // 0x1948f0: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x1948f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
label_1948f4:
    // 0x1948f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1948f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1948f8:
    // 0x1948f8: 0xc118508  jal         func_461420
label_1948fc:
    if (ctx->pc == 0x1948FCu) {
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194900u;
        goto label_194900;
    }
    ctx->pc = 0x1948F8u;
    SET_GPR_U32(ctx, 31, 0x194900u);
    ctx->pc = 0x1948FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1948F8u;
    // 0x1948fc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x1948F8u, 0x194900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194900u;
label_194900:
    // 0x194900: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_194904:
    // 0x194904: 0x2463d9a0  addiu       $v1, $v1, -0x2660
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957472));
label_194908:
    // 0x194908: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x194908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19490c:
    // 0x19490c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19490cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_194910:
    // 0x194910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x194910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194914:
    // 0x194914: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x194914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
label_194918:
    // 0x194918: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x194918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_19491c:
    // 0x19491c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19491cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_194920:
    // 0x194920: 0xc118508  jal         func_461420
label_194924:
    if (ctx->pc == 0x194924u) {
        ctx->pc = 0x194924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194920u;
        // 0x194924: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194928u;
        goto label_194928;
    }
    ctx->pc = 0x194920u;
    SET_GPR_U32(ctx, 31, 0x194928u);
    ctx->pc = 0x194924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194920u;
    // 0x194924: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x194920u, 0x194928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194928u;
label_194928:
    // 0x194928: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x194928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_19492c:
    // 0x19492c: 0x2463da30  addiu       $v1, $v1, -0x25D0
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957616));
label_194930:
    // 0x194930: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x194930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_194934:
    // 0x194934: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x194934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_194938:
    // 0x194938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x194938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19493c:
    // 0x19493c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_194940:
    // 0x194940: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x194940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_194944:
    // 0x194944: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x194944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
label_194948:
    // 0x194948: 0xc118508  jal         func_461420
label_19494c:
    if (ctx->pc == 0x19494Cu) {
        ctx->pc = 0x19494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194948u;
        // 0x19494c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194950u;
        goto label_194950;
    }
    ctx->pc = 0x194948u;
    SET_GPR_U32(ctx, 31, 0x194950u);
    ctx->pc = 0x19494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194948u;
    // 0x19494c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x194948u, 0x194950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194950u;
label_194950:
    // 0x194950: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
label_194954:
    // 0x194954: 0x2463da48  addiu       $v1, $v1, -0x25B8
    ctx->pc = 0x194954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957640));
label_194958:
    // 0x194958: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x194958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19495c:
    // 0x19495c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_194960:
    // 0x194960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x194960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194964:
    // 0x194964: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x194964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_194968:
    // 0x194968: 0xafb1000c  sw          $s1, 0xC($sp)
    ctx->pc = 0x194968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
label_19496c:
    // 0x19496c: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x19496cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
label_194970:
    // 0x194970: 0xc118508  jal         func_461420
label_194974:
    if (ctx->pc == 0x194974u) {
        ctx->pc = 0x194974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194970u;
        // 0x194974: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194978u;
        goto label_194978;
    }
    ctx->pc = 0x194970u;
    SET_GPR_U32(ctx, 31, 0x194978u);
    ctx->pc = 0x194974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194970u;
    // 0x194974: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x194970u, 0x194978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194978u;
label_194978:
    // 0x194978: 0xc118a50  jal         func_462940
label_19497c:
    if (ctx->pc == 0x19497Cu) {
        ctx->pc = 0x19497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194978u;
        // 0x19497c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194980u;
        goto label_194980;
    }
    ctx->pc = 0x194978u;
    SET_GPR_U32(ctx, 31, 0x194980u);
    ctx->pc = 0x19497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194978u;
    // 0x19497c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462940u, 0x194978u, 0x194980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194980u;
label_194980:
    // 0x194980: 0xc119a9e  jal         func_466A78
label_194984:
    if (ctx->pc == 0x194984u) {
        ctx->pc = 0x194988u;
        goto label_194988;
    }
    ctx->pc = 0x194980u;
    SET_GPR_U32(ctx, 31, 0x194988u);
    ctx->pc = 0x466A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466A78u, 0x194980u, 0x194988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194988u;
label_194988:
    // 0x194988: 0xc11938c  jal         func_464E30
label_19498c:
    if (ctx->pc == 0x19498Cu) {
        ctx->pc = 0x194990u;
        goto label_194990;
    }
    ctx->pc = 0x194988u;
    SET_GPR_U32(ctx, 31, 0x194990u);
    ctx->pc = 0x464E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E30u, 0x194988u, 0x194990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194990u;
label_194990:
    // 0x194990: 0xc113aba  jal         func_44EAE8
label_194994:
    if (ctx->pc == 0x194994u) {
        ctx->pc = 0x194998u;
        goto label_194998;
    }
    ctx->pc = 0x194990u;
    SET_GPR_U32(ctx, 31, 0x194998u);
    ctx->pc = 0x44EAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EAE8u, 0x194990u, 0x194998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194998u;
label_194998:
    // 0x194998: 0xc12fb7a  jal         func_4BEDE8
label_19499c:
    if (ctx->pc == 0x19499Cu) {
        ctx->pc = 0x1949A0u;
        goto label_1949a0;
    }
    ctx->pc = 0x194998u;
    SET_GPR_U32(ctx, 31, 0x1949A0u);
    ctx->pc = 0x4BEDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BEDE8u, 0x194998u, 0x1949A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949A0u;
label_1949a0:
    // 0x1949a0: 0xc0663dc  jal         func_198F70
label_1949a4:
    if (ctx->pc == 0x1949A4u) {
        ctx->pc = 0x1949A8u;
        goto label_1949a8;
    }
    ctx->pc = 0x1949A0u;
    SET_GPR_U32(ctx, 31, 0x1949A8u);
    ctx->pc = 0x198F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198F70u, 0x1949A0u, 0x1949A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949A8u;
label_1949a8:
    // 0x1949a8: 0xc0649f6  jal         func_1927D8
label_1949ac:
    if (ctx->pc == 0x1949ACu) {
        ctx->pc = 0x1949B0u;
        goto label_1949b0;
    }
    ctx->pc = 0x1949A8u;
    SET_GPR_U32(ctx, 31, 0x1949B0u);
    ctx->pc = 0x1927D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1927D8u, 0x1949A8u, 0x1949B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949B0u;
label_1949b0:
    // 0x1949b0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1949b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1949b4:
    // 0x1949b4: 0xc120cfa  jal         func_4833E8
label_1949b8:
    if (ctx->pc == 0x1949B8u) {
        ctx->pc = 0x1949B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949B4u;
        // 0x1949b8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949BCu;
        goto label_1949bc;
    }
    ctx->pc = 0x1949B4u;
    SET_GPR_U32(ctx, 31, 0x1949BCu);
    ctx->pc = 0x1949B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949B4u;
    // 0x1949b8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4833E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4833E8u, 0x1949B4u, 0x1949BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949BCu;
label_1949bc:
    // 0x1949bc: 0xc120c44  jal         func_483110
label_1949c0:
    if (ctx->pc == 0x1949C0u) {
        ctx->pc = 0x1949C4u;
        goto label_1949c4;
    }
    ctx->pc = 0x1949BCu;
    SET_GPR_U32(ctx, 31, 0x1949C4u);
    ctx->pc = 0x483110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483110u, 0x1949BCu, 0x1949C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949C4u;
label_1949c4:
    // 0x1949c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1949c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1949c8:
    // 0x1949c8: 0x1a200019  blez        $s1, . + 4 + (0x19 << 2)
label_1949cc:
    if (ctx->pc == 0x1949CCu) {
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x27b50044  addiu       $s5, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949D0u;
        goto label_1949d0;
    }
    ctx->pc = 0x1949C8u;
    {
        const bool branch_taken_0x1949c8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x27b50044  addiu       $s5, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c8) {
            ctx->pc = 0x194A30u;
            goto label_194a30;
        }
    }
    ctx->pc = 0x1949D0u;
label_1949d0:
    // 0x1949d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1949d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1949d4:
    // 0x1949d4: 0x0  nop
    ctx->pc = 0x1949d4u;
    // NOP
label_1949d8:
    // 0x1949d8: 0xc120dc8  jal         func_483720
label_1949dc:
    if (ctx->pc == 0x1949DCu) {
        ctx->pc = 0x1949DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949D8u;
        // 0x1949dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949E0u;
        goto label_1949e0;
    }
    ctx->pc = 0x1949D8u;
    SET_GPR_U32(ctx, 31, 0x1949E0u);
    ctx->pc = 0x1949DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949D8u;
    // 0x1949dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483720u, 0x1949D8u, 0x1949E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1949E0u;
label_1949e0:
    // 0x1949e0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1949e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1949e4:
    // 0x1949e4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1949e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1949e8:
    // 0x1949e8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1949e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1949ec:
    // 0x1949ec: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1949ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1949f0:
    // 0x1949f0: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1949f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1949f4:
    // 0x1949f4: 0x40f809  jalr        $v0
label_1949f8:
    if (ctx->pc == 0x1949F8u) {
        ctx->pc = 0x1949F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949F4u;
        // 0x1949f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949FCu;
        goto label_1949fc;
    }
    ctx->pc = 0x1949F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1949FCu);
        ctx->pc = 0x1949F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949F4u;
        // 0x1949f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1949F4u, 0x1949FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1949FCu;
label_1949fc:
    // 0x1949fc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1949fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a00:
    // 0x194a00: 0x0  nop
    ctx->pc = 0x194a00u;
    // NOP
label_194a04:
    // 0x194a04: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_194a08:
    if (ctx->pc == 0x194A08u) {
        ctx->pc = 0x194A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A04u;
        // 0x194a08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A0Cu;
        goto label_194a0c;
    }
    ctx->pc = 0x194A04u;
    {
        const bool branch_taken_0x194a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a04) {
            ctx->pc = 0x194A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194A04u;
            // 0x194a08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194A24u;
            goto label_194a24;
        }
    }
    ctx->pc = 0x194A0Cu;
label_194a0c:
    // 0x194a0c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x194a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194a10:
    // 0x194a10: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_194a14:
    // 0x194a14: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x194a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_194a18:
    // 0x194a18: 0x60f809  jalr        $v1
label_194a1c:
    if (ctx->pc == 0x194A1Cu) {
        ctx->pc = 0x194A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A18u;
        // 0x194a1c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A20u;
        goto label_194a20;
    }
    ctx->pc = 0x194A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x194A20u);
        ctx->pc = 0x194A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A18u;
        // 0x194a1c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A18u, 0x194A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194A20u;
label_194a20:
    // 0x194a20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194a24:
    // 0x194a24: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x194a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_194a28:
    // 0x194a28: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_194a2c:
    if (ctx->pc == 0x194A2Cu) {
        ctx->pc = 0x194A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A28u;
        // 0x194a2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A30u;
        goto label_194a30;
    }
    ctx->pc = 0x194A28u;
    {
        const bool branch_taken_0x194a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194a28) {
            ctx->pc = 0x194A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194A28u;
            // 0x194a2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1949D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1949d8;
        }
    }
    ctx->pc = 0x194A30u;
label_194a30:
    // 0x194a30: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194a34:
    // 0x194a34: 0x24120203  addiu       $s2, $zero, 0x203
    ctx->pc = 0x194a34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_194a38:
    // 0x194a38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x194a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194a3c:
    // 0x194a3c: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x194a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_194a40:
    // 0x194a40: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x194a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_194a44:
    // 0x194a44: 0x40f809  jalr        $v0
label_194a48:
    if (ctx->pc == 0x194A48u) {
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A4Cu;
        goto label_194a4c;
    }
    ctx->pc = 0x194A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194A4Cu);
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A44u, 0x194A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194A4Cu;
label_194a4c:
    // 0x194a4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194a50:
    // 0x194a50: 0x1a200024  blez        $s1, . + 4 + (0x24 << 2)
label_194a54:
    if (ctx->pc == 0x194A54u) {
        ctx->pc = 0x194A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A50u;
        // 0x194a54: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A58u;
        goto label_194a58;
    }
    ctx->pc = 0x194A50u;
    {
        const bool branch_taken_0x194a50 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x194A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A50u;
        // 0x194a54: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a50) {
            ctx->pc = 0x194AE4u;
            goto label_194ae4;
        }
    }
    ctx->pc = 0x194A58u;
label_194a58:
    // 0x194a58: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x194a58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_194a5c:
    // 0x194a5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x194a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_194a60:
    // 0x194a60: 0xc120dc8  jal         func_483720
label_194a64:
    if (ctx->pc == 0x194A64u) {
        ctx->pc = 0x194A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A60u;
        // 0x194a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A68u;
        goto label_194a68;
    }
    ctx->pc = 0x194A60u;
    SET_GPR_U32(ctx, 31, 0x194A68u);
    ctx->pc = 0x194A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A60u;
    // 0x194a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483720u, 0x194A60u, 0x194A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194A68u;
label_194a68:
    // 0x194a68: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194a6c:
    // 0x194a6c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x194a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_194a70:
    // 0x194a70: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x194a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_194a74:
    // 0x194a74: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_194a78:
    // 0x194a78: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x194a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_194a7c:
    // 0x194a7c: 0x40f809  jalr        $v0
label_194a80:
    if (ctx->pc == 0x194A80u) {
        ctx->pc = 0x194A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A7Cu;
        // 0x194a80: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A84u;
        goto label_194a84;
    }
    ctx->pc = 0x194A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194A84u);
        ctx->pc = 0x194A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A7Cu;
        // 0x194a80: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A7Cu, 0x194A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194A84u;
label_194a84:
    // 0x194a84: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x194a84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194a88:
    // 0x194a88: 0x0  nop
    ctx->pc = 0x194a88u;
    // NOP
label_194a8c:
    // 0x194a8c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
label_194a90:
    if (ctx->pc == 0x194A90u) {
        ctx->pc = 0x194A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A8Cu;
        // 0x194a90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A94u;
        goto label_194a94;
    }
    ctx->pc = 0x194A8Cu;
    {
        const bool branch_taken_0x194a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a8c) {
            ctx->pc = 0x194A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194A8Cu;
            // 0x194a90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194AD8u;
            goto label_194ad8;
        }
    }
    ctx->pc = 0x194A94u;
label_194a94:
    // 0x194a94: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x194a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194a98:
    // 0x194a98: 0xc7b40024  lwc1        $f20, 0x24($sp)
    ctx->pc = 0x194a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_194a9c:
    // 0x194a9c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x194a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_194aa0:
    // 0x194aa0: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x194aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_194aa4:
    // 0x194aa4: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x194aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_194aa8:
    // 0x194aa8: 0x60f809  jalr        $v1
label_194aac:
    if (ctx->pc == 0x194AACu) {
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AB0u;
        goto label_194ab0;
    }
    ctx->pc = 0x194AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x194AB0u);
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194AA8u, 0x194AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194AB0u;
label_194ab0:
    // 0x194ab0: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x194ab0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_194ab4:
    // 0x194ab4: 0x0  nop
    ctx->pc = 0x194ab4u;
    // NOP
label_194ab8:
    // 0x194ab8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_194abc:
    if (ctx->pc == 0x194ABCu) {
        ctx->pc = 0x194ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AB8u;
        // 0x194abc: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AC0u;
        goto label_194ac0;
    }
    ctx->pc = 0x194AB8u;
    {
        const bool branch_taken_0x194ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AB8u;
        // 0x194abc: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ab8) {
            ctx->pc = 0x194AD4u;
            goto label_194ad4;
        }
    }
    ctx->pc = 0x194AC0u;
label_194ac0:
    // 0x194ac0: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
label_194ac4:
    if (ctx->pc == 0x194AC4u) {
        ctx->pc = 0x194AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AC0u;
        // 0x194ac4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AC8u;
        goto label_194ac8;
    }
    ctx->pc = 0x194AC0u;
    {
        const bool branch_taken_0x194ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x194ac0) {
            ctx->pc = 0x194AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194AC0u;
            // 0x194ac4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194AD8u;
            goto label_194ad8;
        }
    }
    ctx->pc = 0x194AC8u;
label_194ac8:
    // 0x194ac8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x194ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_194acc:
    // 0x194acc: 0x1052fed0  beq         $v0, $s2, . + 4 + (-0x130 << 2)
label_194ad0:
    if (ctx->pc == 0x194AD0u) {
        ctx->pc = 0x194AD4u;
        goto label_194ad4;
    }
    ctx->pc = 0x194ACCu;
    {
        const bool branch_taken_0x194acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x194acc) {
            ctx->pc = 0x194610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194610;
        }
    }
    ctx->pc = 0x194AD4u;
label_194ad4:
    // 0x194ad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194ad8:
    // 0x194ad8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x194ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_194adc:
    // 0x194adc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_194ae0:
    if (ctx->pc == 0x194AE0u) {
        ctx->pc = 0x194AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ADCu;
        // 0x194ae0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AE4u;
        goto label_194ae4;
    }
    ctx->pc = 0x194ADCu;
    {
        const bool branch_taken_0x194adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ADCu;
        // 0x194ae0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194adc) {
            ctx->pc = 0x194A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194a60;
        }
    }
    ctx->pc = 0x194AE4u;
label_194ae4:
    // 0x194ae4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x194ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_194ae8:
    // 0x194ae8: 0xc1237e6  jal         func_48DF98
label_194aec:
    if (ctx->pc == 0x194AECu) {
        ctx->pc = 0x194AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AE8u;
        // 0x194aec: 0x9044cdb0  lbu         $a0, -0x3250($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AF0u;
        goto label_194af0;
    }
    ctx->pc = 0x194AE8u;
    SET_GPR_U32(ctx, 31, 0x194AF0u);
    ctx->pc = 0x194AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AE8u;
    // 0x194aec: 0x9044cdb0  lbu         $a0, -0x3250($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DF98u, 0x194AE8u, 0x194AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AF0u;
label_194af0:
    // 0x194af0: 0xc12613c  jal         func_4984F0
label_194af4:
    if (ctx->pc == 0x194AF4u) {
        ctx->pc = 0x194AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AF0u;
        // 0x194af4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AF8u;
        goto label_194af8;
    }
    ctx->pc = 0x194AF0u;
    SET_GPR_U32(ctx, 31, 0x194AF8u);
    ctx->pc = 0x194AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AF0u;
    // 0x194af4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984F0u, 0x194AF0u, 0x194AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194AF8u;
label_194af8:
    // 0x194af8: 0xc120c96  jal         func_483258
label_194afc:
    if (ctx->pc == 0x194AFCu) {
        ctx->pc = 0x194B00u;
        goto label_194b00;
    }
    ctx->pc = 0x194AF8u;
    SET_GPR_U32(ctx, 31, 0x194B00u);
    ctx->pc = 0x483258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483258u, 0x194AF8u, 0x194B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B00u;
label_194b00:
    // 0x194b00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_194b04:
    if (ctx->pc == 0x194B04u) {
        ctx->pc = 0x194B08u;
        goto label_194b08;
    }
    ctx->pc = 0x194B00u;
    {
        const bool branch_taken_0x194b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194b00) {
            ctx->pc = 0x194B18u;
            goto label_194b18;
        }
    }
    ctx->pc = 0x194B08u;
label_194b08:
    // 0x194b08: 0xc120cd8  jal         func_483360
label_194b0c:
    if (ctx->pc == 0x194B0Cu) {
        ctx->pc = 0x194B10u;
        goto label_194b10;
    }
    ctx->pc = 0x194B08u;
    SET_GPR_U32(ctx, 31, 0x194B10u);
    ctx->pc = 0x483360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483360u, 0x194B08u, 0x194B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B10u;
label_194b10:
    // 0x194b10: 0xc120db4  jal         func_4836D0
label_194b14:
    if (ctx->pc == 0x194B14u) {
        ctx->pc = 0x194B18u;
        goto label_194b18;
    }
    ctx->pc = 0x194B10u;
    SET_GPR_U32(ctx, 31, 0x194B18u);
    ctx->pc = 0x4836D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4836D0u, 0x194B10u, 0x194B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B18u;
label_194b18:
    // 0x194b18: 0xc126154  jal         func_498550
label_194b1c:
    if (ctx->pc == 0x194B1Cu) {
        ctx->pc = 0x194B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B18u;
        // 0x194b1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B20u;
        goto label_194b20;
    }
    ctx->pc = 0x194B18u;
    SET_GPR_U32(ctx, 31, 0x194B20u);
    ctx->pc = 0x194B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B18u;
    // 0x194b1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498550u, 0x194B18u, 0x194B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B20u;
label_194b20:
    // 0x194b20: 0xc126158  jal         func_498560
label_194b24:
    if (ctx->pc == 0x194B24u) {
        ctx->pc = 0x194B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B20u;
        // 0x194b24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B28u;
        goto label_194b28;
    }
    ctx->pc = 0x194B20u;
    SET_GPR_U32(ctx, 31, 0x194B28u);
    ctx->pc = 0x194B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B20u;
    // 0x194b24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498560u, 0x194B20u, 0x194B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B28u;
label_194b28:
    // 0x194b28: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x194b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_194b2c:
    // 0x194b2c: 0xc1237e4  jal         func_48DF90
label_194b30:
    if (ctx->pc == 0x194B30u) {
        ctx->pc = 0x194B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B2Cu;
        // 0x194b30: 0x24844ee8  addiu       $a0, $a0, 0x4EE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B34u;
        goto label_194b34;
    }
    ctx->pc = 0x194B2Cu;
    SET_GPR_U32(ctx, 31, 0x194B34u);
    ctx->pc = 0x194B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B2Cu;
    // 0x194b30: 0x24844ee8  addiu       $a0, $a0, 0x4EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DF90u, 0x194B2Cu, 0x194B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B34u;
label_194b34:
    // 0x194b34: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194b38:
    // 0x194b38: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x194b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_194b3c:
    // 0x194b3c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x194b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_194b40:
    // 0x194b40: 0x40f809  jalr        $v0
label_194b44:
    if (ctx->pc == 0x194B44u) {
        ctx->pc = 0x194B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B40u;
        // 0x194b44: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B48u;
        goto label_194b48;
    }
    ctx->pc = 0x194B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194B48u);
        ctx->pc = 0x194B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B40u;
        // 0x194b44: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194B40u, 0x194B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194B48u;
label_194b48:
    // 0x194b48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x194b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194b4c:
    // 0x194b4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x194b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_194b50:
    // 0x194b50: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x194b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_194b54:
    // 0x194b54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x194b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_194b58:
    // 0x194b58: 0x40f809  jalr        $v0
label_194b5c:
    if (ctx->pc == 0x194B5Cu) {
        ctx->pc = 0x194B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B58u;
        // 0x194b5c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B60u;
        goto label_194b60;
    }
    ctx->pc = 0x194B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194B60u);
        ctx->pc = 0x194B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B58u;
        // 0x194b5c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194B58u, 0x194B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194B60u;
label_194b60:
    // 0x194b60: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194b64:
    // 0x194b64: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x194b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_194b68:
    // 0x194b68: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_194b6c:
    // 0x194b6c: 0x40f809  jalr        $v0
label_194b70:
    if (ctx->pc == 0x194B70u) {
        ctx->pc = 0x194B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B6Cu;
        // 0x194b70: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B74u;
        goto label_194b74;
    }
    ctx->pc = 0x194B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194B74u);
        ctx->pc = 0x194B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B6Cu;
        // 0x194b70: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194B6Cu, 0x194B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194B74u;
label_194b74:
    // 0x194b74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x194b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194b78:
    // 0x194b78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_194b7c:
    // 0x194b7c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_194b80:
    // 0x194b80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x194b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_194b84:
    // 0x194b84: 0x40f809  jalr        $v0
label_194b88:
    if (ctx->pc == 0x194B88u) {
        ctx->pc = 0x194B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B84u;
        // 0x194b88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B8Cu;
        goto label_194b8c;
    }
    ctx->pc = 0x194B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194B8Cu);
        ctx->pc = 0x194B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B84u;
        // 0x194b88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194B84u, 0x194B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194B8Cu;
label_194b8c:
    // 0x194b8c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194b90:
    // 0x194b90: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x194b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_194b94:
    // 0x194b94: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x194b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_194b98:
    // 0x194b98: 0x40f809  jalr        $v0
label_194b9c:
    if (ctx->pc == 0x194B9Cu) {
        ctx->pc = 0x194B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B98u;
        // 0x194b9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BA0u;
        goto label_194ba0;
    }
    ctx->pc = 0x194B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194BA0u);
        ctx->pc = 0x194B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B98u;
        // 0x194b9c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194B98u, 0x194BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194BA0u;
label_194ba0:
    // 0x194ba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x194ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194ba4:
    // 0x194ba4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x194ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194ba8:
    // 0x194ba8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x194ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_194bac:
    // 0x194bac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x194bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_194bb0:
    // 0x194bb0: 0x40f809  jalr        $v0
label_194bb4:
    if (ctx->pc == 0x194BB4u) {
        ctx->pc = 0x194BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BB0u;
        // 0x194bb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BB8u;
        goto label_194bb8;
    }
    ctx->pc = 0x194BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194BB8u);
        ctx->pc = 0x194BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BB0u;
        // 0x194bb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BB0u, 0x194BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194BB8u;
label_194bb8:
    // 0x194bb8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194bbc:
    // 0x194bbc: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x194bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_194bc0:
    // 0x194bc0: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x194bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_194bc4:
    // 0x194bc4: 0x40f809  jalr        $v0
label_194bc8:
    if (ctx->pc == 0x194BC8u) {
        ctx->pc = 0x194BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BC4u;
        // 0x194bc8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BCCu;
        goto label_194bcc;
    }
    ctx->pc = 0x194BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194BCCu);
        ctx->pc = 0x194BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BC4u;
        // 0x194bc8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BC4u, 0x194BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194BCCu;
label_194bcc:
    // 0x194bcc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194bd0:
    // 0x194bd0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194bd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_194bd4:
    // 0x194bd4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x194bd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_194bd8:
    // 0x194bd8: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x194bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_194bdc:
    // 0x194bdc: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_194be0:
    // 0x194be0: 0x40f809  jalr        $v0
label_194be4:
    if (ctx->pc == 0x194BE4u) {
        ctx->pc = 0x194BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE0u;
        // 0x194be4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BE8u;
        goto label_194be8;
    }
    ctx->pc = 0x194BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194BE8u);
        ctx->pc = 0x194BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE0u;
        // 0x194be4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BE0u, 0x194BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194BE8u;
label_194be8:
    // 0x194be8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194be8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_194bec:
    // 0x194bec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x194becu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_194bf0:
    // 0x194bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194bf4:
    // 0x194bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194bf8:
    // 0x194bf8: 0xc121848  jal         func_486120
label_194bfc:
    if (ctx->pc == 0x194BFCu) {
        ctx->pc = 0x194BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF8u;
        // 0x194bfc: 0x24070502  addiu       $a3, $zero, 0x502 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C00u;
        goto label_194c00;
    }
    ctx->pc = 0x194BF8u;
    SET_GPR_U32(ctx, 31, 0x194C00u);
    ctx->pc = 0x194BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BF8u;
    // 0x194bfc: 0x24070502  addiu       $a3, $zero, 0x502 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x194BF8u, 0x194C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C00u;
label_194c00:
    // 0x194c00: 0xae820430  sw          $v0, 0x430($s4)
    ctx->pc = 0x194c00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1072), GPR_U32(ctx, 2));
label_194c04:
    // 0x194c04: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x194c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_194c08:
    // 0x194c08: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x194c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_194c0c:
    // 0x194c0c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x194c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_194c10:
    // 0x194c10: 0x8e820430  lw          $v0, 0x430($s4)
    ctx->pc = 0x194c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1072)));
label_194c14:
    // 0x194c14: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x194c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
label_194c18:
    // 0x194c18: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194c1c:
    // 0x194c1c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x194c1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_194c20:
    // 0x194c20: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x194c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_194c24:
    // 0x194c24: 0x40f809  jalr        $v0
label_194c28:
    if (ctx->pc == 0x194C28u) {
        ctx->pc = 0x194C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C24u;
        // 0x194c28: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C2Cu;
        goto label_194c2c;
    }
    ctx->pc = 0x194C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194C2Cu);
        ctx->pc = 0x194C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C24u;
        // 0x194c28: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C24u, 0x194C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194C2Cu;
label_194c2c:
    // 0x194c2c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x194c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194c30:
    // 0x194c30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194c30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_194c34:
    // 0x194c34: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x194c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_194c38:
    // 0x194c38: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x194c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_194c3c:
    // 0x194c3c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_194c40:
    // 0x194c40: 0x40f809  jalr        $v0
label_194c44:
    if (ctx->pc == 0x194C44u) {
        ctx->pc = 0x194C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C40u;
        // 0x194c44: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C48u;
        goto label_194c48;
    }
    ctx->pc = 0x194C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194C48u);
        ctx->pc = 0x194C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C40u;
        // 0x194c44: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194C40u, 0x194C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194C48u;
label_194c48:
    // 0x194c48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194c48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_194c4c:
    // 0x194c4c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x194c4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_194c50:
    // 0x194c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194c54:
    // 0x194c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194c58:
    // 0x194c58: 0xc121848  jal         func_486120
label_194c5c:
    if (ctx->pc == 0x194C5Cu) {
        ctx->pc = 0x194C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C58u;
        // 0x194c5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C60u;
        goto label_194c60;
    }
    ctx->pc = 0x194C58u;
    SET_GPR_U32(ctx, 31, 0x194C60u);
    ctx->pc = 0x194C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C58u;
    // 0x194c5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x194C58u, 0x194C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C60u;
label_194c60:
    // 0x194c60: 0xae820434  sw          $v0, 0x434($s4)
    ctx->pc = 0x194c60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1076), GPR_U32(ctx, 2));
label_194c64:
    // 0x194c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x194c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194c68:
    // 0x194c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194c6c:
    // 0x194c6c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x194c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_194c70:
    // 0x194c70: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_194c74:
    // 0x194c74: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x194c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_194c78:
    // 0x194c78: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x194c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_194c7c:
    // 0x194c7c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_194c80:
    // 0x194c80: 0x8e820434  lw          $v0, 0x434($s4)
    ctx->pc = 0x194c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1076)));
label_194c84:
    // 0x194c84: 0xc121848  jal         func_486120
label_194c88:
    if (ctx->pc == 0x194C88u) {
        ctx->pc = 0x194C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C84u;
        // 0x194c88: 0xad020064  sw          $v0, 0x64($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C8Cu;
        goto label_194c8c;
    }
    ctx->pc = 0x194C84u;
    SET_GPR_U32(ctx, 31, 0x194C8Cu);
    ctx->pc = 0x194C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C84u;
    // 0x194c88: 0xad020064  sw          $v0, 0x64($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x194C84u, 0x194C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C8Cu;
label_194c8c:
    // 0x194c8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x194c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_194c90:
    // 0x194c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194c94:
    // 0x194c94: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x194c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_194c98:
    // 0x194c98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_194c9c:
    // 0x194c9c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_194ca0:
    // 0x194ca0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_194ca4:
    // 0x194ca4: 0x60f809  jalr        $v1
label_194ca8:
    if (ctx->pc == 0x194CA8u) {
        ctx->pc = 0x194CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CA4u;
        // 0x194ca8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CACu;
        goto label_194cac;
    }
    ctx->pc = 0x194CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x194CACu);
        ctx->pc = 0x194CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CA4u;
        // 0x194ca8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194CA4u, 0x194CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194CACu;
label_194cac:
    // 0x194cac: 0xc122246  jal         func_488918
label_194cb0:
    if (ctx->pc == 0x194CB0u) {
        ctx->pc = 0x194CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CACu;
        // 0x194cb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CB4u;
        goto label_194cb4;
    }
    ctx->pc = 0x194CACu;
    SET_GPR_U32(ctx, 31, 0x194CB4u);
    ctx->pc = 0x194CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CACu;
    // 0x194cb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488918u, 0x194CACu, 0x194CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CB4u;
label_194cb4:
    // 0x194cb4: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x194cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194cb8:
    // 0x194cb8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x194cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_194cbc:
    // 0x194cbc: 0x84a40048  lh          $a0, 0x48($a1)
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 72)));
label_194cc0:
    // 0x194cc0: 0xa3a20044  sb          $v0, 0x44($sp)
    ctx->pc = 0x194cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 2));
label_194cc4:
    // 0x194cc4: 0xa2a20003  sb          $v0, 0x3($s5)
    ctx->pc = 0x194cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
label_194cc8:
    // 0x194cc8: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_194ccc:
    // 0x194ccc: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x194cccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
label_194cd0:
    // 0x194cd0: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x194cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
label_194cd4:
    // 0x194cd4: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x194cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_194cd8:
    // 0x194cd8: 0x60f809  jalr        $v1
label_194cdc:
    if (ctx->pc == 0x194CDCu) {
        ctx->pc = 0x194CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CD8u;
        // 0x194cdc: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CE0u;
        goto label_194ce0;
    }
    ctx->pc = 0x194CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x194CE0u);
        ctx->pc = 0x194CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CD8u;
        // 0x194cdc: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194CD8u, 0x194CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194CE0u;
label_194ce0:
    // 0x194ce0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_194ce4:
    // 0x194ce4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x194ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_194ce8:
    // 0x194ce8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194cec:
    // 0x194cec: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x194cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_194cf0:
    // 0x194cf0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x194cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_194cf4:
    // 0x194cf4: 0x60f809  jalr        $v1
label_194cf8:
    if (ctx->pc == 0x194CF8u) {
        ctx->pc = 0x194CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CF4u;
        // 0x194cf8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CFCu;
        goto label_194cfc;
    }
    ctx->pc = 0x194CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x194CFCu);
        ctx->pc = 0x194CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CF4u;
        // 0x194cf8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194CF4u, 0x194CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194CFCu;
label_194cfc:
    // 0x194cfc: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x194cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
label_194d00:
    // 0x194d00: 0xc122284  jal         func_488A10
label_194d04:
    if (ctx->pc == 0x194D04u) {
        ctx->pc = 0x194D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D00u;
        // 0x194d04: 0x24844550  addiu       $a0, $a0, 0x4550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D08u;
        goto label_194d08;
    }
    ctx->pc = 0x194D00u;
    SET_GPR_U32(ctx, 31, 0x194D08u);
    ctx->pc = 0x194D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D00u;
    // 0x194d04: 0x24844550  addiu       $a0, $a0, 0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A10u, 0x194D00u, 0x194D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D08u;
label_194d08:
    // 0x194d08: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x194d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_194d0c:
    // 0x194d0c: 0xc10a6a6  jal         func_429A98
label_194d10:
    if (ctx->pc == 0x194D10u) {
        ctx->pc = 0x194D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D0Cu;
        // 0x194d10: 0x2484ecb0  addiu       $a0, $a0, -0x1350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D14u;
        goto label_194d14;
    }
    ctx->pc = 0x194D0Cu;
    SET_GPR_U32(ctx, 31, 0x194D14u);
    ctx->pc = 0x194D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D0Cu;
    // 0x194d10: 0x2484ecb0  addiu       $a0, $a0, -0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429A98u, 0x194D0Cu, 0x194D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D14u;
label_194d14:
    // 0x194d14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_194d18:
    // 0x194d18: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x194d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_194d1c:
    // 0x194d1c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x194d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_194d20:
    // 0x194d20: 0xc0653ee  jal         func_194FB8
label_194d24:
    if (ctx->pc == 0x194D24u) {
        ctx->pc = 0x194D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D20u;
        // 0x194d24: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D28u;
        goto label_194d28;
    }
    ctx->pc = 0x194D20u;
    SET_GPR_U32(ctx, 31, 0x194D28u);
    ctx->pc = 0x194D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D20u;
    // 0x194d24: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194FB8u, 0x194D20u, 0x194D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D28u;
label_194d28:
    // 0x194d28: 0xae82043c  sw          $v0, 0x43C($s4)
    ctx->pc = 0x194d28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1084), GPR_U32(ctx, 2));
label_194d2c:
    // 0x194d2c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x194d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_194d30:
    // 0x194d30: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x194d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_194d34:
    // 0x194d34: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x194d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_194d38:
    // 0x194d38: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x194d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_194d3c:
    // 0x194d3c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x194d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_194d40:
    // 0x194d40: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x194d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_194d44:
    // 0x194d44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x194d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_194d48:
    // 0x194d48: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x194d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_194d4c:
    // 0x194d4c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x194d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_194d50:
    // 0x194d50: 0x3e00008  jr          $ra
label_194d54:
    if (ctx->pc == 0x194D54u) {
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D58u;
        goto label_fallthrough_0x194d50;
    }
    ctx->pc = 0x194D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x194d50:
    ctx->pc = 0x194D58u;
}
